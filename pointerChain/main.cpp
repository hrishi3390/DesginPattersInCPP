//
//  main.cpp
//  pointerChain
//
//  Created by Hrishikesh Chaudhari on 06/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>

using namespace std;

struct Creature {
    string name;
    int attack, defence;
    
public:
    Creature(const string &name, const int attack, const int defence): name(name),attack(attack),defence(defence){}
    
    friend ostream &operator<<(ostream &os, const Creature &c){
        os<<"name: "<<c.name<<" attack: "<<c.attack<<" defence: "<<c.defence;
        return os;
    }
};

class CreatureModifier {
    CreatureModifier * next{nullptr};
    
protected:
    Creature &creature;
public:
    CreatureModifier(Creature &creature):creature(creature){}
    
    void add (CreatureModifier *cm){
        if(next)
            next->add(cm);
        else
            next = cm;
    }
    
     void handle(){
        if(next)
            next->handle();
    }
};


class DoubleAttackModifier : public CreatureModifier {
    
public:
    DoubleAttackModifier (Creature &creature) : CreatureModifier(creature){}
    void handle(){
        creature.attack *= 2;
        CreatureModifier::handle(); //
        
    }
};

class IncreateDefenceModifier : public CreatureModifier{
public:
    IncreateDefenceModifier(Creature &creature) : CreatureModifier(creature){}
    
    void handle(){
        creature.defence += 3;
        CreatureModifier::handle();
    }
};
int main(int argc, const char * argv[]) {
    
    Creature goblin {"goblin",1,1};
    
    CreatureModifier root{goblin};l
    DoubleAttackModifier r1{goblin};
    DoubleAttackModifier r1_2{goblin};
    DoubleAttackModifier r1_3{goblin};
    IncreateDefenceModifier d1{goblin};
    IncreateDefenceModifier d1_1{goblin};
    
    root.add(&r1);
    root.add(&r1_2);
    root.add(&r1_3);
    root.add(&d1);
    root.add(&d1_1);
    
    root.handle();
    cout<<goblin<<endl;
    
    
    
    return 0;
}
