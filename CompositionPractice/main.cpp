#include <iostream>
#include "Birthday.h"
#include "People.h"
//#include <string>

using namespace std;

class Testclass
{
    public:
        Testclass(){number = 0;};
    private:
        int number;

    friend void friendfunction(Testclass &sto);
};

void friendfunction(Testclass &sto)
{
    sto.number = 99;
    cout << sto.number << endl;

}
int main()
{
    Testclass t;
    friendfunction(t);
}
