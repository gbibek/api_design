//
//  Lands.cpp
//  api_design
//
//  Created by Bibek Ghimire on 12/19/17.
//  Copyright © 2017 Bibek Ghimire. All rights reserved.
//

#include "Lands.hpp"

template<LandStages... stages>
Lands<stages...>::Lands(std::vector<Coords>  data){
    Land<LandStages::Stage1> l2(data);
    std::get<0>(lands) = l2;

}

template<LandStages... stages>
void Lands<stages...>::CreateLand(std::vector<Coords>  data){
    //Land<LandStages::Stage1> l2(data);
   // std::get<0>(lands) = l2;
}

/*
 template<LandStages my_stage>
 Land<my_stage> GetData();
 
 */

///*

template<LandStages... stages>
template<LandStages N>
Land<N> Lands<stages...>::GetData(){
    return std::get<static_cast<int>(N)>(lands);
}

// */

/*
 
template<LandStages my_stage>
Land<my_stage> Lands::GetData(){
    return std::get<Land<my_stage>>(lands);
}
*/