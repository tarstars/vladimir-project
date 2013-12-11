
#include "vector.h"

using namespace std;

Vector operator+(const Vector& l,const Vector& r) {
  return Vector(l.n1 + r.n1, l.n2 + r.n2,l.n3+r.n3);

}
ostream& operator<<(ostream& os, const Vector& r) {
    os <<  r.n1 << " " << r.n2<< " "<< r.n3;
  return os;
}
istream& operator>>(istream& is, Vector& r) {
    is >>  r.n1 >> r.n2 >> r.n3;
  return is;
}
