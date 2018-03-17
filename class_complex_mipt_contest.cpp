#include <iostream>
#include <math.h>

using namespace std;

class Complex{

public:

    double re;
    double im;

public:

    Complex(double r, double i){
        re = r;
        im =i;
    }

    Complex(double r){
        re = r;
        im = 0;

    }

    Complex(const Complex &c){

        re = c.re;
        im = c.im;

    }

    ~Complex(){

    }

    double abs(){

        return(sqrt(re*re + im*im));

    }




};



