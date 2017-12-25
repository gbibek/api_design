//
//  main.cpp
//  api_design
//
//  Created by Bibek Ghimire on 12/19/17.
//  Copyright © 2017 Bibek Ghimire. All rights reserved.
//

#include <iostream>
#include "Lands.cpp"

int main(int argc, const char * argv[]) {

    // populate lands for stage 1
    std::vector<Coords> hold_data;
    
    hold_data.push_back({0,0});
    hold_data.push_back({5,0});
    hold_data.push_back({5,5});
    hold_data.push_back({0,5});
    
    Lands<LandStages::Stage1, LandStages::Stage2, LandStages::Stage3> ls(hold_data);
    
    Land<LandStages::Stage2> out_data = ls.GetData<LandStages::Stage2>();
    
    for(auto it : out_data.GetData()){
        std::cout << it.x << "," << it.y << std::endl;
    }
    
    return 0;
}
