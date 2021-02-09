#pragma once
#include <iostream>
#include <string>
#include "Usefull Library.h"

using namespace std;

class CPet
{
protected:
	string name;
	string owner;
	int age;
public:
	CPet();
	~CPet();

	string getName();
	bool setName(string newName);
	string getOwner();
	bool setOwner(string newOwner);
	int getAge();
	bool setAge(int newAge);

	void readData();
	void displayData();
};

