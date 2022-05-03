#include "complex.h"

Complex::~Complex(){
    this->re = 0;
    this->im = 0;
}

Complex::Complex(double re, double im){
    this->re = re;
    this->im = im;
}

double Complex::sqrabs(){
    return pow(re, 2) + pow(im, 2);
}

void Complex::setRe(){
    this->re = re;
}

void Complex::setIm(){
    this->im = im;
}

double Complex::getRe(double re){
    return this->re;
}

double Complex::getIm(double im){
    return this->im;
}

void Complex::set(double re, double im){
    this->re = re;
    this->im = im;
}

double Complex::abs(){
    return sqrt(re * re + im * im);
}

double Complex::arg(){
    return atan2(im, re);
}

Complex Complex::reverse(){
    return (re / (pow(re, 2) + pow(im, 2)) - im / (pow(re, 2) + pow(im, 2)));
}

Complex Complex::conjugate(){
    return Complex(re, -im);
}

Complex operator*(Complex complex1, Complex complex2){
    return (complex1.re * complex2.re - complex1.im * complex2.im), (complex1.re * complex2.im + complex1.im * complex2.re);
}

Complex operator*(double s, Complex complex){
    return (s * complex.re, s * complex.im);
}

Complex operator/(Complex complex1, Complex complex2){
    return complex1 * complex2.conjugate() / complex2 * complex2.conjugate();
}

Complex operator+(Complex complex1, Complex complex2){
    return (complex1.re + complex2.re, complex1.im + complex2.im);
}

Complex operator-(Complex complex1, Complex complex2){
    return (complex1.re - complex2.re, complex1.im - complex2.im);
}

std::ostream& operator<<(std::ostream& stream, const Complex& complex){
    stream << "(" << complex.re << ", " << complex.im << ")";
    return stream;
}
