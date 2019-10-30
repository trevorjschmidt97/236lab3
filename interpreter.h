#ifndef interpreter_h
#define interpreter_h

#include <string>
#include <iostream>
#include <vector>
#include "database.h"
#include "dataLog.h"
#include "predicate.h"

using namespace std;

class interpreter
{
public:
	interpreter(void){};

	void setSchemeVect(vector<predicate*> x)
	{
		this->schemeVect = x;
	}
	void setFactVect(vector<predicate*> x)
	{
		this->factVect = x;
	}
	void setQuerieVect(vector<predicate*> x)
	{
		this->querieVect = x;
	}

	void executeInterpreter()
	{
		cout << "run interpreter." << endl;
	}



private:
	vector<predicate*> schemeVect;
	vector<predicate*> factVect;
	vector<predicate*> querieVect;


};

#endif //interpreter_h
