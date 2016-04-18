#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include "Birthday.h"
using namespace std;

class People
{
    public:
        People(string n, Birthday o);
        void printInfo();
        void TheMainMethod();
    private:
        string name;
        Birthday bday;
};

#endif // PEOPLE_H
