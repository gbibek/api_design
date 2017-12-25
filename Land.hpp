//
//  Land.hpp
//  api_design
//
//  Created by Bibek Ghimire on 12/19/17.
//  Copyright © 2017 Bibek Ghimire. All rights reserved.
//

#ifndef Land_hpp
#define Land_hpp

#include <stdio.h>

#include <iostream>
#include <vector>
#include <tuple>

struct Coords{
    double x;
    double y;
};

enum class LandStages{
    // some descriptive names, i will use StageN for simplicity
    Stage1,
    Stage2,
    Stage3
};

template <LandStages StageN>
class Land;

class LandBase{
public:
    LandBase(){
        m_coords.resize(5);
        std::fill(m_coords.begin(), m_coords.end(), 1);
    }
    LandBase(std::vector<Coords> coords) :m_coords(std::move(coords)){}
    
    const std::vector<Coords>& GetData() const{
        return m_coords;
    }
protected:
    std::vector<Coords> m_coords;
};

template<>
class Land<LandStages::Stage1> : public LandBase{

public:
    Land<LandStages::Stage1>():LandBase(){}
    Land<LandStages::Stage1>(std::vector<Coords> coords):LandBase(coords){}
    
};

template<>
class Land<LandStages::Stage2> : public LandBase{
    
};

template<>
class Land<LandStages::Stage3> : public LandBase{
    
};



#endif /* Land_hpp */
