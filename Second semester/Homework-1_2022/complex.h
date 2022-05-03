#pragma once
#include <iostream>
#include <cmath>

class Complex
{
private:
    double re;
    double im;
    double sqrabs();

public:
    Complex(double re = 0, double im = 0);
    Complex(const Complex& complex) : re(complex.re), im(complex.im) {};
    ~Complex();
    double getRe(double re);
    double getIm(double im);
    void setRe();
    void setIm();
    void set(double re, double im);
    double abs();
    double arg();
    Complex reverse();
    Complex conjugate();
    //void sqrt(int n, std::ostream& stream);
    friend Complex operator*(Complex complex1, Complex complex2);
    friend Complex operator*(double s, Complex complex);
    friend Complex operator/(Complex complex1, Complex complex2);
    friend Complex operator+(Complex complex1, Complex complex2);
    friend Complex operator-(Complex complex1, Complex complex2);
    friend std::ostream& operator<<(std::ostream& stream, const Complex& complex);
};