//
//  main.cpp
//  prototype
//
//  Created by Hrishikesh Chaudhari on 14/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
using namespace std;

struct Address{
    string street, city;
    int suite;
    
    Address():street(""),city(""),suite(0){
        
    }
    
    Address(const string &street, const string &city, const int &suite):street(street),city(city),suite(suite){
        
    }
    
    
    friend ostream& operator<<(ostream& out, const Address &obj)
    {
        out
        <<"street: "<<obj.street
        <<"city: "<<obj.city
        <<"suite: "<<obj.suite;
        
        return out;
    }
//    friend ostream& operator<<(ostream& os, const Address& obj)
//    {
//        return os
//        << "street: " << obj.street
//        << " city: " << obj.city
//        << " suite: " << obj.suite;
//    }

};

struct Contact{
    string name;
    Address *address;
    Contact():name(""),address(NULL){
        
    }
    Contact(const string &name, Address *address):name(name), address(address){
        
    }
    
    friend ostream& operator<<(ostream& os, const Contact& obj)
    {
        return os
        << "name: " << obj.name
        << " address: " << *obj.address;
    }
    
//    Contact(const Contact& other)
//    {
//        cout<<"copy constructor is called"<<endl;
//    }

};

int main(int argc, const char * argv[]) {
    
    
    Contact john{"John Dey", new Address{"123 east sr","Hyderabad",123}};
  //  Contact jane = john;
    Contact jane;
    jane = john;
    jane.name = "Jane Smith";
    jane.address->suite = 111;
    
    cout<<&john<<endl;
    cout<<&jane<<endl;
    
    cout<<john<<endl<<jane<<endl;
    
    return 0;
}
