#include "tensor.h"

using namespace std;

Tensor::Tensor() {
    for(int i1 =0;i1<3;i1++) {
        for(int j1=0;j1<3;j1++) {
            for (int k1=0;k1<3;k1++) {
                for(int l1=0;l1<3;l1++) {
                    C[i1][j1][k1][l1]=0;
                }
            }
        }
    }
}
ostream& operator<<(ostream& os1, const Tensor& r) {
    for(int i1 =0;i1<3;i1++) {
        for(int j1=0;j1<3;j1++) {
            for (int k1=0;k1<3;k1++) {
                for(int l1=0;l1<3;l1++) {
                    os1 << "c[" << i1 << ", " << j1 << ", "  << k1 << ", " << l1 << " ] = "  << r.at(i1,j1,k1,l1) << endl;
                }
            }
        }
    }

    return os1;
}


