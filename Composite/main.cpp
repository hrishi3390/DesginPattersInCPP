//
//  main.cpp
//  Composite
//
//  Created by Hrishikesh Chaudhari on 30/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <array>
#include <numeric>
#include <algorithm>
#include "geometric_shape.hpp"

using namespace std;

//class Creature{
//    int strength, agility, intelligence;
//    
//public:
//    void set_strength(int strength)
//    {
//        this->strength = strength;
//    }
//    
//    void set_agility(int agility)
//    {
//        this->agility = agility;
//    }
//    
//    void set_intelligence(int intelligence)
//    {
//        this->intelligence = intelligence;
//    }
//    
//    
//    int get_strength() const{
//        return strength;
//    }
//    
//    int get_agility() const{
//        return agility;
//    }
//    
//    int get_intelligence() const{
//        return intelligence;
//    }
//    
//    double sum() const{
//        return strength + agility + intelligence;
//    }
//    double average() const{
//        return sum()/(double)3.0;
//    }
//    
//    int max() const{
//        return ::max(::max(strength,agility),intelligence);
//    }
//    
//};


//class Creature{
//    enum Abilities{
//        strength, agility, intelligence, count
//    };
//    
//    array<int, count> abilities;
//};


class Creature
{
    enum Abilities { str, agl, intl, count };
    array<int, count> abilities;
public:
    int get_strength() const { return abilities[str]; }
    void set_strength(int value) { abilities[str] = value; }
    
    int get_agility() const { return abilities[agl]; }
    void set_agility(int value) { abilities[agl] = value; }
    
    int get_intelligence() const { return abilities[intl]; }
    void set_intelligence(int value) { abilities[intl] = value; }
    
    int sum() const {
        return std::accumulate(abilities.begin(), abilities.end(), 0);
    }
    
    double average() const {
        return sum() / (double)count;
    }
    
    int max() const {
        return *max_element(abilities.begin(), abilities.end());
    }
    
    
};


int main(int argc, const char * argv[]) {
    
//    Creature c;
//    c.set_agility(10);
//    c.set_intelligence(2);
//    c.set_strength(29);
//    
//    array<int, 10> a ={9,8,7,6,5,4,3,2,1,0};
//    
//    sort(a.begin(),a.end());
//    
//    for(int i =0 ; i<a.size();i++)
//        cout<<a.at(i)<<"\t";
    
   // cout<<c.max()<<std::endl;
    
    
    
    Group root("root");
    circle c1,c2;
    rectangle r1,r2;
    
    root.objects.push_back(&c1);
    root.objects.push_back(&c2);
    root.objects.push_back(&r1);
    root.draw();
    
    
    return 0;
}
