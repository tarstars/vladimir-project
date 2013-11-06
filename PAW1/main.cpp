
#include<iostream>
#include<complex>
using namespace std;
template<class complex>
   class complex;
int main(void)

{

   double x = 3.1, y=4.2;
   complex z = complex(x,y);
   cout << "z= " << z << "\n";
   cout << "имеет вещественную часть =" << real(z) << "\n";
   cout << "имеет мнимую часть =" << imag(z) << "\n";
   cout << "z имеет сопряженное значение = " << conj(z) << "\n"
   return 0;
}
