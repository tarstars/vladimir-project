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

int f(int t) {
  if (t < 1) {
    return 1;
  }

  return t * f(t - 1);
}
  
void
test_recursion() {
  cout << f(4) << endl;
}

int main() {
  test_vector();
  test_recursion();

}
