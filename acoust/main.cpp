#include <cmath>
#include <iostream>
#include <stdio.h>
#include "vector.h"

using namespace std;

void test_vector() {
  Vector a(1,2,3);
  Vector b;
  cin >> b;
  cout <<"a="<< a << endl;
  cout <<"b="<< b << endl;
  Vector c;
  c = a + b;
  cout << "c=" << c << endl;
}


int main() {
test_vector();

}
