#ifndef TENSOR_H
#define TENSOR_H

#include <iostream>

class Tensor {
    double C[3][3][3][3];
public:
    Tensor();

    double& at(int ind1,int ind2,int ind3,int ind4){
        return C[ind1][ind2][ind3][ind4];
    }

    const double& at(int ind1,int ind2,int ind3,int ind4) const{
        return C[ind1][ind2][ind3][ind4];
    }

    friend std::ostream& operator<<(std::ostream& os1, const Tensor& r);
    //friend std::istream& operator>>(std::istream& is, Vector& r);
};

#endif // TENSOR_H
