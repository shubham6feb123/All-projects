#include <iostream>
using namespace std;
//forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    //Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    //Aliter:- Declaring Calculator Class as friend class
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2, calculate;
    o1.setNumber(3, 4);
    o1.printNumber();

    o2.setNumber(4, 5);
    o2.printNumber();

    Calculator calc;
    int real = calc.sumRealComplex(o1, o2);

    cout << "Real Part Result is " << real << endl;

    int complex = calc.sumCompComplex(o1,o2);

    cout << "Complex Part Result is " << complex <<"i"<< endl;

    return 0;
}