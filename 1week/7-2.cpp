// 포인터로 배열 접근
#include <iostream>
using namespace std;

int main() {
  int n[10];
  int i;
  int *p;

  for(i=0; i<10; i++)
    *(n+i) = i*3;  // 배열의 이름 n을 주소처럼 사용 가능. 배열 n을 3의 배수로 채움

  p = n;
  for(i=0; i<10; i++) {
    cout << *(p+i) << ' ';
  }
  cout << "\n";

  for(i=0; i<10; i++) {
    *p = *p + 2;
    p++;
  }

  for(i=0; i<10; i++) 
    cout << n[i] << ' ';
  cout << "\n";
}
