#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Mycomplex a1(1,2);
    Mycomplex a2(3,4);
    Mycomplex a3 = a1+a2;
    Mycomplex a4 = a1-a2;
    Mycomplex a5 = a1*a2;
    Mycomplex a6 = a1/a2;
    Mycomplex a7(1,2);
    a3.Showcom();
    a4.Showcom();
    a5.Showcom();
    a6.Showcom();
    if(a1 == a7)
        cout<<"yes"<<endl;

    if(a1 != a2)
        cout<<"yes"<<endl;

    a1 = a2;
    a1.Showcom();




    return 0;
}
