#include <iostream>
using namespace std;
class father {
    protected :
    string name ="Mishra" ;
};
class son1 : father {
    string name = "Anand";
    public :
    void show (){ 
       cout <<name <<" "<<endl ;
    }
};
class son2 : father {
    string name = "chiku";
    public :
    void disp (){
        cout <<name <<" "<<endl ;
    } 
};