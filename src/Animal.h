/*
 * Animal.h
 *
 *  Created on: Feb 20, 2018
 *      Author: jpetterson
 */
#include <iostream>
using namespace std;

#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal
    {
    private:
	string name;

    public:
	Animal();
	void setName(string enterName);
	void speak() const;
	Animal(const Animal &other); // our Copy Constructor


    };

#endif /* ANIMAL_H_ */

