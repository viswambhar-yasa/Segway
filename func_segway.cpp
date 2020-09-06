/* Introduction to Scientific Programming, Programming project, 2019/2020 */
/* (c) Matthias Braendel, 2019 */
/* func_segway.cpp */

#include <vector>
#include "func.h"

void f_segway(unsigned int                                m,
    const std::vector<double>& yt,
    const std::vector< std::vector<double> >& A,
    const std::vector<double>& b1,
    std::vector<double>& F,
    const std::vector<double>& b2,
    const std::vector<double>& T,
    const std::vector<double>& K,
    std::vector<double>& ki) {
    /* Matlab Pseudocode
        F = -K*y;
        dydt = A*y+b1*F+b2*T;
        dydt -> k, which is one of: (k1,k2,k3,k4)
    */
    std::vector<double> dydt(4), temp(4);
    f_vecinit(dydt);
    f_vecinit(temp);
    F[m] = -f_scalarp(K, yt);
    // #################
    //for (int fi = 0; fi < K.size(); fi++) {
    //    F[fi] = -(K[fi] * yt[fi]);
    //}
    
    // TASK 4.1: computing F = -K*y;
    // #################
    // #################
    f_matvecmult(temp, A, yt);
    // TASK 4.2: computing temp = A*y
    // #################
    // ################
    for (int k = 0; k < dydt.size(); ++k) {
        dydt[k] = temp[k] + (b1[k] * F[m]) + (b2[k] * T[m]);
    }
    // TASK 4.3: computing dydt = temp + b1*F+b2*T
    // #################
    // #################
    f_veccpy(ki,dydt);
    // TASK 4.4: assign dydt to k with the veccpy function
    // #################
}
