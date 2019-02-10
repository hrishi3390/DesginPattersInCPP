//
//  geometric_shape.hpp
//  Design Patterns
//
//  Created by Hrishikesh Chaudhari on 30/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef geometric_shape_hpp
#define geometric_shape_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

struct GraphicObject {
    virtual void draw() = 0;
};

struct circle : GraphicObject {
    void draw() override {
        cout<< "Circle"<<endl;
    }
};

struct rectangle : GraphicObject{
    
    void draw() override {
        cout<< "Rectangle"<<endl;
    }

};
struct Group : GraphicObject {
    string name;
    vector <GraphicObject *> objects;
    
    Group(const string &name) : name(name){}
    
    void draw() override{
        cout<< "Group " <<name<<"contains "<<endl;
        
        for(auto && o : objects)
            o->draw();
    }
};

#endif /* geometric_shape_hpp */
