
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
   cout << "����� ������������ ����� =" << real(z) << "\n";
   cout << "����� ������ ����� =" << imag(z) << "\n";
   cout << "z ����� ����������� �������� = " << conj(z) << "\n"
   return 0;
}
