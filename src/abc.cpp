//============================================================================
// Name        : abc.cpp
// Author      : galaz man
// Version     :asdasd
// Copyright   : Youddr copyright notice galaz
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
