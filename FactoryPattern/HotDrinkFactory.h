//
//  HotDrinkFactory.h
//  Design Patterns
//
//  Created by Hrishikesh Chaudhari on 16/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#pragma once
#include "HotDrink.h"

using namespace std;

struct HotDrinkFactory{
    virtual HotDrink* make() const =0;
};

struct TeaFactory: HotDrinkFactory{
    HotDrink* make() const override{

        return new Tea();
    }
};

struct CoffeeFactory: HotDrinkFactory{
    HotDrink* make() const override{
        
        return new coffee();
    }

};