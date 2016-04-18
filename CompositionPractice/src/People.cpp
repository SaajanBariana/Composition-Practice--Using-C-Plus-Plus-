#include "People.h"
#include <iostream>
#include "Birthday.h"
//#include <string>
 using namespace std;

People::People(string n, Birthday o)
:name(n), bday(o)
{

}

void People::printInfo()
{
    cout << name << " was born on ";
    bday.printDate();
}

void People:: TheMainMethod()
{
    Birthday birth(10, 10, 1996);
    People p("Saajan", birth);
    p.printInfo();
}
