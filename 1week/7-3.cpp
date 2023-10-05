// 포인터를 매개 변수로 전달받는 함수
// 포인터로 정수 2개를 전달받아 비교하는 함수 equal()을 작성하라.
#include <iostream>
using namespace std;

bool equal(int* p, int* q);  // 함수의 원형 선언

int main() {
  int a=5, b=6;
  if(equal(&a, &b)) cout << "equal" << "\n";
  else cout << "not equal" << "\n";
}

bool equal(int* p,int* q) {
  if(*p == *q) return true;
  else return false;
}
