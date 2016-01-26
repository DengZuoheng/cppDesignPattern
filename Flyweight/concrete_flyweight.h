#ifndef concrete_flyweight_h
#define concrete_flyweight_h
#include <string>
#include "flyweight.h"

class concrete_flyweight :public flyweight
{
public:
	concrete_flyweight();
	concrete_flyweight(int other_state);
	concrete_flyweight(std::string str);
	int _other_state;
	void operation();
	~concrete_flyweight(){};
};

#endif