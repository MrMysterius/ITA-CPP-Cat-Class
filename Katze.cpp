#include <iostream>
#include "CCat.h"

int main()
{
	cout << "Alexander Sturk - I220 - CPet and CCat";

	CCat cat;

	cat.displayData();

	cat.captureMice();
	cat.captureMice();
	cat.captureMice();

	cat.displayData();

	cat.readData();

	cat.displayData();
}
