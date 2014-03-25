/*
 * funcpp.h
 *
 *  Created on: Feb 24, 2012
 *      Author: root
 */

#ifndef FUNCPP_H_
#define FUNCPP_H_

class funcpp {
public:
	funcpp();
	virtual ~funcpp();
	void funcpp_do();
};

extern "C" void funcpp_extern(int i);	//

#endif /* FUNCPP_H_ */
