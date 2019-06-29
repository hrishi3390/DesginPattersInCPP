//============================================================================
// Name        : observerDesignPattern.cpp
// Author      : Hrishikesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Observable.hpp"
#include "Observer.hpp"
using namespace std;


class Person : public Observable<Person>{  //observable
	int age;
public:

	Person(int age):age(age){}

	int get_age() const{
		return age;
	}

	void set_age(int age){
		if(this->age == age)
			return;

		Person::age = age;
		notify(*this,"age");
	}

};

struct ConsolePersonObserver : public Observer<Person>
{
	void field_changed(Person &source, const std::string& field_name) override {
		cout<< "Person's "<<field_name << " has changed to "<<source.get_age()<<endl;
	}
};

int main() {
	Person p{10};
	ConsolePersonObserver cpo;
	p.subcribe(cpo);
	p.set_age(30);


	return 0;
}
