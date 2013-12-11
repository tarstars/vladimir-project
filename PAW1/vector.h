#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class Vector {
  double n1,n2,n3 ;
public:
  Vector() : n1(0), n2(0),n3(0) {}
  Vector(double nn1, double nn2,double nn3) : n1(nn1), n2(nn2),n3(nn3) {}
  //double abs() const {return sqrt(a1 * a1 + b1 * b1);}

  double& at(int ind){
      if (ind==0) return n1;
      if(ind==1) return n2;
      return n3;
  }

  friend Vector operator+(const Vector& l,const Vector& r);
  friend std::ostream& operator<<(std::ostream& os, const Vector& r);
  friend std::istream& operator>>(std::istream& is, Vector& r);
};

#endif // VECTOR_H
