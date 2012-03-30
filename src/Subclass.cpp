/*
 * Subclass.cpp
 *
 *  Created on: Mar 25, 2012
 *      Author: tomek
 */

#include "Subclass.h"
#include <iostream>

Subclass::Subclass() {
	std::cout << "Subclass constructor" << std::endl;

}

Subclass::~Subclass() {
	std::cout << "Subclass destructor" << std::endl;
}

void Subclass::helloTest(){
	int a = 5;
	TestClass::helloTest();
	std::cout << "hello test subclass" << std::endl;

}
