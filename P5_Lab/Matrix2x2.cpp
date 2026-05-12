#include <iostream>
using namespace std;

class Matrix2x2
{
public: 
    double m[2][2];
    Matrix2x2(double a, double b, double c, double d)
    {
        m[0][0]=a; m[0][1]=b; m[1][0]=c; m[1][1]=d;
  }

  void print ()
    {
        cout << m[0][0] << " " << m[0][1] << endl;
        cout << m[1][0] << " " << m[1][1] << endl; 
    }
    Matrix2x2 add(const Matrix2x2& other)  {
        return Matrix2x2 (m[0][0] +other.m[0][0], m[0][1] +other.m[0][1],
                        m[1][0] +other.m[1][0], m[1][1] +other.m[1][1]); }

    Matrix2x2 multiply(const Matrix2x2& other)  {
        return Matrix2x2 (m[0][0] *other.m[0][0] + m[0][1] *other.m[1][0], // first row, first column
                          m[0][0] *other.m[0][1] + m[0][1] *other.m[1][1], // first row, second column
                          m[1][0] *other.m[0][0] + m[1][1] *other.m[1][0], // second row, first column
                          m[1][0] *other.m[0][1] + m[1][1] *other.m[1][1]// second row, second column
                          );
    }

}; 

int main() {
    Matrix2x2 A(1,2,3,4), B(5,6,7,8) ; 
    cout << "A X B: " << endl;
    A.multiply(B) .print();

    cout << "A + B: " << endl;
    A.add(B) .print();

    return 0;
} 



