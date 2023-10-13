// 정수형 공간의 동적 할당 및 반환 예
#include <iostream>
using namespace std;

int main() {
  int *p;

  p = new int;  // int 타입 1개 할당
  if(!p) {  // p가 NULL이면, 메모리 할당 실패
    cout << "메모리를 할당할 수 없습니다.";
    return 0;
  }

  *p = 5;  // 할당 받은 정수 공간에 5 삽입
  int n = *p;
  cout << "*p = " << *p << '\n';
  cout << "n = " << n << '\n';

  delete p;  // 할당 받은 메모리 반환
}
