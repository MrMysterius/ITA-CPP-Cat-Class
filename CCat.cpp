#include "CCat.h"

CCat::CCat()
{
	readData();
}

CCat::CCat(string name, string owner, int age, int capturedMice)
{
	this->name = name;
	this->owner = owner;
	this->age = age;
	this->capturedMice = capturedMice;
}

CCat::~CCat()
{
}

int CCat::getCapturedMice()
{
	return this->capturedMice;
}

bool CCat::setCapturedMice(int newAmount)
{
	if (newAmount >= 0) {
		this->capturedMice = newAmount;
		return true;
	}
	else {
		return false;
	}
}

void CCat::captureMice()
{
	this->capturedMice++;
	cout << "The Cat captured a Mouse and now has a total of " << this->capturedMice << " Mice caught.\n";
}

void CCat::readData()
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
	do {
		repeat = this->setCapturedMice(getInt("Amount of Captured Mice", 0));
	} while (!repeat);
}

void CCat::displayData()
{
	line('-');
	cout << "Name: " << this->name
		<< "\nOwner: " << this->owner
		<< "\nAge:" << this->age
		<< "\nAmount of Caputred Mice: " << this->capturedMice;
	line('-');
}
