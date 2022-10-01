#include <iostream>
#include "Proffesion.h"
using namespace std;

class Human {

public:
	enum Gender
	{
		MALE,
		FEMALE
	};
	Proffesion proffesion = Proffesion();
	int age;
	Gender gender;
	string name;

	Human(Proffesion newProffesion,int newAge, Gender newGender, string newName);
};