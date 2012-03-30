//============================================================================
// Name        : abc.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "TestClass.h"
#include "Subclass.h"

using namespace std;

int main() {
	cout << "!!!aaHello World!!!" << endl; // prints !!!Hello World!!!
	TestClass *a = new Subclass();
	a->helloTest();
	delete a;
	return 0;
}
