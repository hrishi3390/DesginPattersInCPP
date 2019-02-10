//
//  main.cpp
//  decorator
//
//  Created by Hrishikesh Chaudhari on 01/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

/*
 This is the pattern where you could augement the functionlity of a class. This pattern would require you to have access to source code and then we dont modify the original class to add the functionlity. Instead we use the referrence of the object in derived class and augment its functonality.
 */

#include <iostream>
#include <sstream>

using namespace std;

struct Shape
{
    virtual string str() const = 0;
};

struct Circle : Shape {
    
    float radius;
    
    Circle(float radius): radius(radius){}
    Circle(){}
    
    void resize(float factor){
        radius *= factor;
    }
    
    string str() const override {
        ostringstream oss;
        oss<<"This is a circle of radius "<<radius;
        return oss.str();
    }
};

struct Square : Shape {
    float side;
    Square(float side): side(side){}
    Square(){}
    
    string str() const override{
        ostringstream oss;
        oss<<"This is a square of size "<<side;
        return oss.str();
    }
    
};

struct ColoredShape : Shape {
    
    Shape& shape;
    string color;
    
    ColoredShape(Shape &shape, const string color): shape(shape),color(color){}
    
    string str() const override {
        ostringstream oss;
        oss<<shape.str()<<" has the color "<<color;
        return oss.str();
    }

    
};


int main(int argc, const char * argv[]) {
    
    Circle c(5);
    
    Square s(10);
    
    ColoredShape colorCircle(s,"red");
    
    cout<<colorCircle.str()<<endl;
    //cout<<c.str()<<endl;
    
    return 0;
}
