#include "poly1.h"
#include<vector>
#include<complex>

using namespace std;

Poly::Poly() {

}

Poly::Poly(double a0, double a1, double a2) : coeff(3){
    coeff[0] = a0;
    coeff[1]=a1;
    coeff[2]=a2;
}
Poly::Poly(double a0, double a1, double a2,double a3) : coeff(4){
    coeff[0] = a0;
    coeff[1]=a1;
    coeff[2]=a2;
    coeff[3]=a3;

}
Poly::Poly(double a0, double a1, double a2,double a3,double a4,double a5) : coeff(6){
    coeff[0] = a0;
    coeff[1]=a1;
    coeff[2]=a2;
    coeff[3]=a3;
    coeff[4]=a4;
    coeff[5]=a5;
}



Poly operator*(const Poly& r1,const Poly& r2) {
    int n1=r1.coeff.size();
    int n2=r2.coeff.size();
    Poly r3;
    r3.coeff.resize(n1+n2-1);


        for (int i1=0;i1<n1;i1++)
        {
            for (int i2=0;i2<n2;i2++)
            {
                r3.coeff[i1+i2]+=r1.coeff[i1]*r2.coeff[i2];
            }
        }
    return r3;
}

ostream& operator << (ostream& os,const Poly& r4){
    os<<"poly:";
    for(size_t i = 0;i<r4.coeff.size();i++)
    {
        os<<r4.coeff[i]<<"*x^"<<i<<" + ";
    }
    os<<endl;
    return os;
}
bool operator ==(const Poly& r1,const Poly& r2){

    if(r1.coeff.size()!=r2.coeff.size())
    {
       return false;

    }

    for(size_t i =0;i<r1.coeff.size();i++)
    {
        if(abs(r1.coeff[i]-r2.coeff[i])>1E-10)  return false;



    }
 return true;
}


