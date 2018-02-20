/*
 * Animal.cpp
 *
 *  Created on: Feb 20, 2018
 *      Author: jpetterson
 */

#include "Animal.h"


Animal::Animal()
    {
    cout << "Animal created." << endl;
    }


void Animal::setName(string enterName)
    {
    this->name = enterName;
    }


void Animal::speak() const
    {
    cout << "My name is: " << name << endl;
    }


Animal::Animal(const Animal& other) // this is our 'own' copy constructor
				    // "class ref 'other' "
				    //	the 'other' refers to w/e we are copying FROM.
				    //  in this case 'animal1' from the cpp file
    :name(other.name)		//for every attr (private) in class you will need to do this
				// for each.
    {
    cout << "Animal created by copying." << endl;
    }
