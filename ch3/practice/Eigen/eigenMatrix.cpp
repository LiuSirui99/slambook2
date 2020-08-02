#include <iostream>

using namespace std;

#include <ctime>
// Eigen 核心部分
#include <eigen3/Eigen/Core>
// 稠密矩阵的代数运算（逆，特征值等）
#include <eigen3/Eigen/Dense>

using namespace Eigen;

#define MATRIX_SIZE 50

/****************************
* 假设我有一个大的Eigen矩阵，我想把它的左上角3×3的块取出来，然后赋值为I_{3*3}. 请编程实现此事
****************************/

int main(int argc, char **argv) {
  // Eigen 中所有向量和矩阵都是Eigen::Matrix，它是一个模板类。它的前三个参数为：数据类型，行，列
  // 声明一个2*3的float矩阵
  Matrix<int, 5, 5> matrix_55;
  Matrix<int, 3, 3> I_33;
  matrix_55 << 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 ;
  
  cout<<"matrix 5*5 :\n" << matrix_55 <<endl;
  
  // 用()访问矩阵中的元素
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) 
        I_33(i,j)  = matrix_55(i,j);
  }
  cout<<"matrix 3*3 :\n" << I_33 <<endl;

  return 0;
}
