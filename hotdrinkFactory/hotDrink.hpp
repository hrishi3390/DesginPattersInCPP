/*
 * hotDrink.hpp
 *
 *  Created on: May 17, 2020
 *      Author: Hrishikesh.Chaudhari
 */

#ifndef HOTDRINK_HPP_
#define HOTDRINK_HPP_
#include<iostream>
using namespace std;

class HotDrink{
public:
	virtual ~HotDrink(){};
	virtual void prepare(int volume) = 0;
};


class Coffee: public HotDrink
{
public:
	void prepare (int volume) {
		cout<< "Grind beans, boil "<<volume<< " ml of milk, add beans to it, add cream"
				<<"Enjoy the coffee"<<endl;
	}
};

class Tea : public HotDrink
{
public:
	void prepare(int volume) {
		cout<<"Boil water, add some sugar, add "<<volume
			<< " ml of milk, and server hot and Enjoy"<<endl;
	}
};

#endif /* HOTDRINK_HPP_ */
