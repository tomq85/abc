/*
 * TestClass.cpp
 *
 *  Created on: Mar 24, 2012
 *      Author: tomek
 */

#include "TestClass.h"
#include <iostream>

using namespace std;

TestClass::TestClass() {
	cout << "Test Class constructor" << endl;

}

TestClass::~TestClass() {
	cout << "Test Class destructor" << endl;
}

void TestClass::helloTest() {
	cout << "helloTest" << endl; // prints !!!Hello World!!!
}
