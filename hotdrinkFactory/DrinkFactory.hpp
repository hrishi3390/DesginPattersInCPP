/*
 * DrinkFactory.hpp
 *
 *  Created on: May 17, 2020
 *      Author: Hrishikesh.Chaudhari
 */

#ifndef DRINKFACTORY_HPP_
#define DRINKFACTORY_HPP_
#include<map>
#include<string>
#include "hotDrinkFactory.hpp"
#include "hotDrink.hpp"


class DrinkFactory{
	map<string, HotDrinkFactory *> hot_factories;
public:
	DrinkFactory() {
		hot_factories["coffee"] = new CoffeeFactory();
		hot_factories["tea"] = new TeaFactory();
	}

	void make_drink(const string &name){
		HotDrink *drink = hot_factories[name]->make();
		drink->prepare(100);
	}
};



#endif /* DRINKFACTORY_HPP_ */
