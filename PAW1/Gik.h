#ifndef TENSOR2_H
#define TENSOR2_H

#include <iostream>

#include "Cijkl.h"
#include "vector.h"

class Tensor2 {
    double C2[3][3];
public:
    Tensor2();
    double& at(int ind1,int ind2){
        return C2[ind1][ind2];
    }
    const double& at(int ind1,int ind2) const{
        return C2[ind1][ind2];
    }
    friend std::ostream& operator<<(std::ostream& os2, const Tensor2& r);

    //friend std::istream& operator>>(std::istream& is, Vector& r);
};

#endif // TENSOR2_H
