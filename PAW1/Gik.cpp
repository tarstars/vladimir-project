#include "tensor2.h"

using namespace std;

Tensor2::Tensor2() {
    for(int i1 =0;i1<3;i1++) {
        for(int k1=0;k1<3;k1++) {
             C2[i1][k1]=0;
                }
            }
        }
ostream& operator<<(ostream& os2, const Tensor2& r) {
    for(int i1 =0;i1<3;i1++) {
        for(int k1=0;k1<3;k1++) {
              os2 << "G[" << i1 << ", "  << k1 << " ] = "  << r.at(i1,k1) << endl;
                }
            }


  return os2;
}


