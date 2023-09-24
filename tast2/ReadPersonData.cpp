#include "labs1.h"

extern unsigned short g_height;
void ReadPersonData(string& names, unsigned short& ages, double& salaries)
{
    names = ReadPersonName();
    ages = ReadPersonAge();
    ReadPersonSalary(&salaries);
}

void ReadPersonData(string& names, unsigned short& ages, unsigned short& heights, unsigned short& weigths)
{
    names = ReadPersonName();
    ages = ReadPersonAge();
    ReadPersonHeight();
    heights = g_height;
    ReadPersonWeight(weigths);
}