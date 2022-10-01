#include <list>
#include <iostream>
#include "Human.h"
using namespace std;

class Tribe {
public:
	string tribeName;
	list<Human> tribeMembers = list:empty;
	Tribe();
	Tribe(string tribeName,list<Human> startingPopulation);
	
	void AddHumanToTribe(Human newHuman);
	void RemoveHumanFromTribe(Human human);


};
