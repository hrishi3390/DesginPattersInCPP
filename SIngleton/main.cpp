//
//  main.cpp
//  SIngleton
//
//  Created by Hrishikesh Chaudhari on 19/12/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <map>
#include <fstream>
//#include <boost/lextcal_cast>

using namespace std;
//using namespace boost;

class SingletonDatabse
{
    map<string, int> capitals;
    SingletonDatabse(){
        string inFileName = "/Users/hrishikeshchaudhari/Desktop/backup_2/simplekext/Design Patterns/SIngleton/capitals.txt";
       // cout<< "Initializing the database"<<endl;
        ifstream inFile;
        inFile.open(inFileName);
        
        if(inFile.is_open()){
            string city;
            string polulation;
            while(inFile)
            {
                getline(inFile,city);
                getline(inFile, polulation);
                capitals[city] = stoi(polulation);
            }
        }else
            cout<< "Not able to open a file"<<endl;
        
        inFile.close();
    }
    
public:
    SingletonDatabse(SingletonDatabse const&) = delete;
    void operator=(SingletonDatabse const&) = delete;
    
    static SingletonDatabse& get(){
        static SingletonDatabse db;
        return db;
    }
    
    int get_polulaton(string &name)
    {
        return capitals[name];
    }
    
  
    
};

int main(int argc, const char * argv[]) {
   
    string city = "Tokio";
    cout<< "Population of "<<city<<" is: "<<
    SingletonDatabse::get().get_polulaton(city)<<endl;
    return 0;
}
