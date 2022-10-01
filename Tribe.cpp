#include "Tribe.h"

Tribe::Tribe();
Tribe::Tribe(string newTribeName,list<Human> startingPopulation) {
	tribeName = newTribeName;
	tribeMembers = startingPopulation;
}

void Tribe::AddHumanToTribe(Human newHuman) {
	tribeMembers.push_back(newHuman);
}
void Tribe::RemoveHumanFromTribe(Human human) {
	tribeMembers.remove(human);
}