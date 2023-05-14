#include <iostream>
#include <string>
#pragma once

using namespace std;

class Animal
{
public: 
	string name;
	int age;
	char gender;

	virtual void makeSound(string sound) = NULL;

	void setName(string n);
	void setAge(int a);
	void setGender(char gend);

	string getName();
	int getAge();
	char getGender();
};