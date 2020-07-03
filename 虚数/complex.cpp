#include "complex.h"

#include <iostream>

using namespace std;


Mycomplex::Mycomplex(float a,float b):a(a),b(b)
{

}

void Mycomplex::Showcom()
{
   cout<<"z="<<this->a;
   cout.setf(ios::showpos);
   cout<<this->b<<"i"<<endl;
   cout.unsetf(ios::showpos);

}

Mycomplex Mycomplex::operator+(const Mycomplex &o)
{

    Mycomplex tmp;
    tmp.a = this->a + o.a;
    tmp.b = this->b + o.b;
    return tmp;

}

Mycomplex Mycomplex::operator-(const Mycomplex &o)
{
    Mycomplex tmp;
    tmp.a = this->a - o.a;
    tmp.b = this->b - o.b;
    return tmp;

}

Mycomplex Mycomplex::operator*(const Mycomplex &o)
{
    Mycomplex tmp;
    tmp.a = ((this->a * o.a) - (this->b * o.b));
    tmp.b = ((this->b * o.b) - (this->a * o.a));
    return tmp;
}

Mycomplex Mycomplex::operator/(const Mycomplex &o)
{
    Mycomplex tmp;
    tmp.a = ((this->a * o.a)+(this->b * o.b))/((o.a * o.a)+(o.b * o.b));
    tmp.b = ((this->b * o.a)-(this->a * o.b))/((o.a * o.a)+(o.b * o.b));
    return tmp;
}

void Mycomplex::operator=(const Mycomplex &o)
{
    this->a = o.a;
    this->b = o.b;

}



bool Mycomplex::operator==(const Mycomplex &o)
{
    if(this->a == o.a && this->b == o.b)
        return true;
    else {
        return false;
    }
}

bool Mycomplex::operator!=(const Mycomplex &o)
{
    if(this->a != o.a || this->b != o.b)
        return true;
    else {
        return false;
    }
}




