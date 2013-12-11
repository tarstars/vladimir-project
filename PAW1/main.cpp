#include <iostream>
#include <complex>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include "poly1.h"
#include "Cijkl.h"

using namespace std;



void test_complexMass(){
    double x = 3.1, y=4.2,x1,y1;
    complex<double> z(x,y);

    cout << "z= " << z << "\n";
    cout << "real    =" << real(z) << "\n";
    cout << "imag =" << imag(z) << "\n";
    cout << "z* = " << conj(z) << "\n";

    double X[3],Y[3],X1[3],Y1[3];
    complex<double> Z1[3],Z[3],Z2[3][3];

    for(int i2=0;i2<3;i2++) {
        x=0;
        y=0;
        X[i2]=rand()%10;
        Y[i2]=rand()%10;
        x=X[i2];
        y=Y[i2];
        cout << "X["<<i2<< "]=" << X[i2]<<" ";
        cout << "Y["<<i2<< "]=" << Y[i2]<<"\n";
        complex<double>z(x,y);
        Z[i2]= z;
        cout << "Z["<<i2<< "]="<< Z[i2] << "\n";
   }

    for(int j2=0;j2<3;j2++){
        x1=0;
        y1=0;
        X1[j2]=rand()%10;
        Y1[j2]=rand()%10;
        x1=X1[j2];
        y1=Y1[j2];

        cout << "X1["<<j2<< "]=" << X1[j2]<<" ";
        cout << "Y1["<<j2<< "]=" << Y1[j2]<<"\n";

        complex<double>z1(x1,y1);
        Z1[j2]=z1;

        cout << "Z1["<<j2<< "]"<<"["<<j2<<"]=" << Z1[j2] << "\n";
    }

    for(int i3=0;i3<3;i3++){
        for(int j3=0;j3<3;j3++){
            x=0;
            y=0 ;
            x=rand()%10;
            y=rand()%10;
            complex<double>z3(x,y);
            Z2[i3][j3] = z3;
            cout << "Z2["<<i3<< "]"<<"["<<j3<<"]="<< Z2[i3][j3]<<" ";
        }
        cout << "\n";
    }
}

void testpolyproduct(){
    Poly A1(1,2,1),A2(1,3,3,1);
    Poly C;    
    C=A1*A2;
    //cout<<C;
    Poly D(1,5,10,10,5,1);

    if(C==D) cout<<"OK!"<<endl;

}

void test_realvector(){
    srand(time(NULL));
       int n;
       vector<double> vect;

          cout << "vect: size: " << vect.size() << endl;
          cout << "vect: size? " << endl;
          cin>> n;


          for ( int ix = 0; ix < n; ix++ ) {
             vect.push_back( ix );
             vect.at(ix)=rand()%10;
             cout << "vect: Size: " << vect.size()<< " vect.at("<<ix<<")="<<vect.at(ix)<< endl;

          }

}

void test_complexvector(){
    srand(time(NULL));
       int n;
       double x1,y1;

       vector<complex <double> > vect;

          cout << "vect: size: " << vect.size() << endl;
          cout << "vect: size? " << endl;
          cin>> n;
          complex<double> Z0[n];
          for ( int ix = 0; ix < n; ix++ ) {
             vect.push_back( ix );
             x1=rand()%10;
             y1=rand()%10;
             complex<double>z1(x1,y1);
             Z0[ix]=z1;
            //cout << "Z0["<<ix<<"]="<<Z0[ix] << endl;
             vect.at(ix)=Z0[ix];
             cout << "vect: Size: " << vect.size()<< " vect.at("<<ix<<")="<<vect.at(ix)<< endl;

          }

}

void test_accuracy()
{
    if(73==sqrt(5329))
    {
        cout<<"Ok"<<endl;
        cout<<sqrt(5329)<<endl;

    }
    else cout<<7-sqrt(49)<<endl;
}

void test_Cijkl(){
    Tensor C1;
//    Tensor();
    cout<<C1<<endl;
}

int main(void) {
    //test_complexMass();
    //test_realvector();
    //test_complexvector();
    //testpolyproduct();
    // test_accuracy();
    void test_Cijkl();
    return 0;
}
