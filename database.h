#ifndef database_h
#define database_h

#include <string>
#include <vector>
#include <map>
#include "relation.h"


using namespace std;

class database
{
public:

private:
	map <string,relation> relationVect;
};

#endif //database.h
