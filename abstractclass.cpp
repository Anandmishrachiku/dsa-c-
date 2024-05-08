#include <iostream>
using namespace std ;
class base 
{
    public:
    virtual void disp =0 ;
};
class D : public base 
{
    void disp ()
    cout << base class <<endl ;
};
int main () {
    D obj ;
    obj disp ();
    return 0;
};