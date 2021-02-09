#pragma once
#include "CPet.h"

class CCat :
    public CPet
{
private:
    int capturedMice;
public:
    CCat();
    CCat(string name, string owner, int age, int capturedMice);
    ~CCat();

    int getCapturedMice();
    bool setCapturedMice(int newAmount);

    void captureMice();

    void readData();
    void displayData();
};

