#include "Animal.h"

void Animal::setName(string n)
{
	name = n;
}

void Animal::setAge(int a)
{
	age = a;
}

void Animal::setGender(char gend)
{
	gender = gend;
}

string Animal::getName()
{
	return name;
}

int Animal::getAge()
{
	return age;
}

char Animal::getGender()
{
	return gender;
}
