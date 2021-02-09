#include "CPet.h"

CPet::CPet()
{
}

CPet::~CPet()
{
}

string CPet::getName()
{
	return this->name;
}

bool CPet::setName(string newName)
{
	if (newName.length() < 100) {
		this->name = newName;
		return true;
	}
	else {
		return false;
	}
}

string CPet::getOwner()
{
	return this->owner;
}

bool CPet::setOwner(string newOwner)
{
	if (newOwner.length() < 100) {
		this->owner = newOwner;
		return true;
	}
	else {
		return false;
	}
}

int CPet::getAge()
{
	return this->age;
}

bool CPet::setAge(int newAge)
{
	if (newAge > this->age) {
		this->age = newAge;
		return true;
	}
	else {
		return false;
	}
}

void CPet::readData()
{
	bool repeat = false;
	do {
		repeat = this->setName(getString("Name", 0, 100));
	} while (!repeat);
	do {
		repeat = this->setOwner(getString("Owner", 0, 100));
	} while (!repeat);
	do {
		repeat = this->setAge(getInt("Age", 0));
	} while (!repeat);
}

void CPet::displayData()
{
	line('-');
	cout << "Name: " << this->name
		<< "\nOwner: " << this->owner
		<< "\nAge:" << this->age;
	line('-');
}
