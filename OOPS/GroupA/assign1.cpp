#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex();
        friend istream &operator>>(istream &in, Complex &c);
        friend ostream &operator<<(ostream &out, Complex &c);
        Complex operator+(Complex c);
        Complex operator-(Complex c);
        Complex operator*(Complex c);

};

Complex::Complex(){
    real = 0;
    imag = 0;
    cout<<real<<"+"<<imag<<"i"<<"\n";
}

istream &operator>>(istream &in, Complex &c){
    in>>c.real>>c.imag;
    return in;
}

ostream &operator<<(ostream &out, Complex &c){
    out<<c.real<<" + "<<c.imag<<"i\n";
    return out;
}

Complex Complex::operator+(Complex c){
    Complex c3;
    c3.real = real + c.real;
    c3.imag = imag + c.imag;
    return c3;
}

Complex Complex::operator-(Complex c){
    Complex c4;
    c4.real = real - c.real;
    c4.imag = imag - c.imag;
    return c4;
}

Complex Complex::operator*(Complex c){
    Complex c5;
    c5.real = ((real * c.real) - (imag * c.imag));
    c5.imag = ((real * c.imag) + (imag * c.real));
    return c5;
}


int main(){
    Complex c1, c2, a, b, d;
    cout<<"Enter real and imaginary part for c1 \n";
    cin>>c1;
    cout<<"Enter real and imaginary part for c2 \n";
    cin>>c2;
    cout<<"The addition of the two complex numbers is : ";
    a=(c1+c2);
    cout<<a;
    cout<<"The subtraction of the two complex numbers is : ";
    b=(c1-c2);
    cout<<b;
    cout<<"The multiplication of the two complex numbers is : ";
    d=(c1*c2);
    cout<<d;
    return 0;
}