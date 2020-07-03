#ifndef COMPLEX_H
#define COMPLEX_H


class Mycomplex
{
public:

    Mycomplex(float a = 0,float b = 0);
    void Showcom();
    Mycomplex operator+(Mycomplex const &o);
    Mycomplex operator-(Mycomplex const &o);
    Mycomplex operator*(Mycomplex const &o);
    Mycomplex operator/(Mycomplex const &o);
    void operator=(Mycomplex const &o);
    bool operator==(const Mycomplex &o);
    bool operator!=(const Mycomplex &o);

private:
    float a;
    float b;

};

#endif // COMPLEX_H
