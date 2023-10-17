// 생성자 함수의 중복 간소화
#include <iostream>
using namespace std;

class MyVector {
  int *p;
  int size;
public:
  MyVector(int n = 100) {  // 여기부터
    p = new int [n];
    size = n;
  }  // 여기까지 디폴트 매개변수를 가진 생성자 작성하라
  ~MyVector() { delete [] p; }
};

int main() {
  MyVector *v1, *v2;
  v1 = new MyVector();
  v2 = new MyVector(1024);

  delete v1;
  delete v2;
}
