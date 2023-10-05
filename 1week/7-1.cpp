// 포인터 선언 및 활용
// 포인터를 이용하여 변수에 들어있는 값을 출력하는 코드를 보인다.
#include <iostream>
using namespace std;

int main() {
  int n=10, m;
  char c = 'A';
  double = d;

  int *p = &n;
  char *q = &c;
  double *r = &d;

  *p = 25;
  *q = 'A';
  *r = 3.14;
  m = *p + 10;

  cout << n << ' ' << *p << "\n";
  cout << c << ' ' << *q << "\n";
  cout << d << ' ' << *r << "\n";
  cout << m << "\n";
}
