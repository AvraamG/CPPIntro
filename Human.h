//Read what include guards are https://en.wikipedia.org/wiki/Include_guard
// https://en.wikipedia.org/wiki/Pragma_once
//solution from https://stackoverflow.com/questions/25713718/error-c2011-class-type-redefinition

#pragma once
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
