//
//  Lands.hpp
//  api_design
//
//  Created by Bibek Ghimire on 12/19/17.
//  Copyright © 2017 Bibek Ghimire. All rights reserved.
//

#ifndef Lands_hpp
#define Lands_hpp


#include "Land.hpp"

template<LandStages... stages>
class Lands{
    
public:
    Lands(std::vector<Coords>);
    void CreateLand(std::vector<Coords> );
    
    template<LandStages N>
    Land<N> GetData();
    
private:
    std::tuple<Land<stages>...> lands;
};


#endif /* Lands_hpp */
