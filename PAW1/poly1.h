#ifndef POLY1_H
#define POLY1_H
#include <iostream>
#include <complex>
#include<vector>


using namespace std;

class Poly {
    vector<complex <double> > coeff;
public:
  Poly();
  Poly(double a0, double a1, double a2);
  Poly(double a0, double a1, double a2,double a3);
  Poly(double a0, double a1, double a2,double a3,double a4,double a5);

  friend std::ostream& operator<<(std::ostream& os, const Poly& r);
  friend Poly operator *(const Poly& r1,const Poly& r2);
  friend bool operator ==(const Poly& r1,const Poly& r2);

 // friend std::istream& operator>>(std::istream& is, Vector& r);
};
#endif // POLY1_H
