//
//  DrinkFractory.h
//  Design Patterns
//
//  Created by Hrishikesh Chaudhari on 17/12/18.
//  Copyight © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef DrinkFractory_h
#define DrinkFractory_h

//##include "HotDrink.h"
#include "HotDrinkFactory.h"
#include <map>

using namespace std;


class DrinkFractory{
    
    map<string, HotDrinkFactory*> hot_factories;
public:
    DrinkFractory(){
        hot_factories["coffee"] = new CoffeeFactory();
        hot_factories["tea"] = new TeaFactory();
    }
    HotDrink* make_drink(const string& name)
    {
        auto drink = hot_factories[name]->make();
        drink->prepare(100);
        return drink;
    }
    ~DrinkFractory(){
        cout<<"object DrinkFractory destroyed"<<endl;
    }
};


#endif /* DrinkFractory_h */
