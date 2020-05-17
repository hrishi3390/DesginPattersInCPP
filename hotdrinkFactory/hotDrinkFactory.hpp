/*
 * hotDrinkFactory.hpp
 *
 *  Created on: May 17, 2020
 *      Author: Hrishikesh.Chaudhari
 */

#ifndef HOTDRINKFACTORY_HPP_
#define HOTDRINKFACTORY_HPP_

#include "hotDrink.hpp"

class HotDrinkFactory
{
public:
	virtual HotDrink *make() = 0;
};

class CoffeeFactory: public HotDrinkFactory
{
public:
	HotDrink* make(){
		return new Coffee;
	}

	virtual ~CoffeeFactory(){}
};

class TeaFactory: public HotDrinkFactory
{
public:
	HotDrink* make(){
		return new Tea;
	}
};




#endif /* HOTDRINKFACTORY_HPP_ */
