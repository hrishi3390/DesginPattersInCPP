//
//  HotDrink.h
//  Design Patterns
//
//  Created by Hrishikesh Chaudhari on 16/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef HotDrink_h
#define HotDrink_h
#include <memory>
#include <iostream>

using namespace std;


struct HotDrink
{
    virtual ~HotDrink() = default;
    virtual void prepare(int volume) = 0;
};

struct Tea : HotDrink{
    Tea(){
        
    }
    void prepare(int volume) override{
        std::cout<< "Take a tea bag, boil water, pour "<<volume<<
                "ml, add some leamon"<<endl;
    }
    ~Tea(){
        cout<<"object Tea is destroyed"<<endl;
    }
    
};

struct coffee : HotDrink{
    
    coffee(){
        
    }
    void prepare(int volume) override{
        std::cout<< "Grind beans, boil water, pour "<<volume<<
                "ml, add cream, enjoy !"<<endl;
    }
    ~coffee(){
        cout<<"object coffee is destroyed"<<endl;
    }
};

#endif /* HotDrink_h */
