//
//  main.cpp
//  FactoryPattern
//
//  Created by Hrishikesh Chaudhari on 16/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <memory>
#include "HotDrinkFactory.h"
#include "DrinkFractory.h"

using namespace std;

//HotDrink* make_drink(string name){
//    
//    HotDrink *drink;
//    if( name == "tea"){
//        
//        drink = new Tea();
//        drink->prepare(100);
//        
//    }
//    
//    return drink;
//}

int main(int argc, const char * argv[]) {
    
    DrinkFractory df;
    df.make_drink("coffee");
    return 0;
}
