#include <iostream>
using namespace std;

class Complex{
    private:
    double real;
    double imag;

    public:
    void setComplex(double r, double i){
        real=r;
        imag=i;
        cout<<"Values have been set"<<endl;
    }
    void displayComplex(){
        cout<<real<<"+"<<"j"<<imag<<endl;
    }
    Complex add(Complex c1,Complex c2){
        Complex result;
        result.real=c1.real+c2.real;
        result.imag=c1.imag+c2.imag;
        return result;
    }
};
int main(){
    Complex one,two,three,four;
    one.setComplex(1,1);
    one.displayComplex();
    two.setComplex(2,2);
    two.displayComplex();
    four=three.add(one,two);
    four.displayComplex();
    return 0;
}