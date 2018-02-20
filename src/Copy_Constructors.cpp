//============================================================================
// Name        : Copy_Constructors.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Animal.h"

using namespace std;

int main()
    {
    Animal animal1;
    cout << "1" << endl;
    animal1.setName("Freddy");
    cout << "2" << endl;

    Animal animal2 = animal1; // the '=' calls the Copy Constructor.
    cout << "3" << endl;
    animal2.speak();
    cout << "4" << endl;
    animal2.setName("Bob");

    cout << "5" << endl;
    animal1.speak();
    cout << "6" << endl;
    animal2.speak();
    cout << "7" << endl;

    Animal animal3(animal1); // this uses the Copy Constructor.
    cout << "8" << endl;
    animal3.setName("WTF");
    cout << "9" << endl;
    animal3.speak();

    return 0;
    }
