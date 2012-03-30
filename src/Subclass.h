/*
 * Subclass.h
 *
 *  Created on: Mar 25, 2012
 *      Author: tomek
 */

#ifndef SUBCLASS_H_
#define SUBCLASS_H_

#include "TestClass.h"

class Subclass: public TestClass {
public:
	Subclass();
	virtual ~Subclass();
	void helloTest();
};

#endif /* SUBCLASS_H_ */
