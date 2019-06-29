/*
 * Observer.hpp
 *
 *  Created on: Jun 13, 2019
 *      Author: Hrishikesh.Chaudhari
 */

#ifndef OBSERVER_HPP_
#define OBSERVER_HPP_

#include<string>

template<typename T>
class Observer
{
public:
	virtual void field_changed(
			T& source,
			const std::string& field_name
			) = 0;

};
#endif /* OBSERVER_HPP_ */
