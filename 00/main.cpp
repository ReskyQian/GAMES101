#include<cmath>
#include<Eigen/Core>
#include<Eigen/Dense>
#include<iostream>

#define DEG2RAD std::acos(-1) / 180.0f

int main(){
    Eigen::Vector3f p(2.0,1.0,1.0);
    Eigen::Matrix3f rot, mov;
    float rad = 45.0f * DEG2RAD;
    rot << std::cos(rad), -std::sin(rad), 0,
           std::sin(rad),  std::cos(rad), 0,
           0            , 0             , 1;
    mov << 1            , 0             , 1,
           0            , 1             , 2,
           0            , 0             , 1;
    
    Eigen::Vector3f newP = mov * rot * p;
    // std::cout << newP << std::endl;
    std::cout << '(' << newP(0) << ',' << newP(1) << ')' << std::endl;
    return 0;
}