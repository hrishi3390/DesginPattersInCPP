/*
 * observable.hpp
 *
 *  Created on: Jun 29, 2019
 *      Author: Hrishikesh.Chaudhari
 */

#ifndef OBSERVABLE_HPP_
#define OBSERVABLE_HPP_

#include <vector>
#include <string>

template <typename> struct Observer;

template <typename T>
struct Observable
{
	std::vector<Observer<T>*> observers;
public:
	void notify(T& source, const std::string& field_name)
	{
		for(auto observer : observers)
			observer->field_changed(source, field_name);
	}

	void subcribe(Observer<T>&observer)
	{
		observers.push_back(&observer);
	}

	void unsubsribe(Observer<T>& observer)
	{
		observers.erase(remove(observers.begin(), observers.end(), observer )
				);
	}


};


#endif /* OBSERVABLE_HPP_ */
