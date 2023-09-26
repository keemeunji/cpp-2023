/* for문 예제 
두 정수 a, b를 입력 받아 a에서 b까지의 정수 합을 출력하라. 반드시 작은 수, 큰 수 순서로 입력하라. */

#include <iostream>
using namespace std;

int main() {
  int i, a, b, sum=0;
  cout << "두 개의 정수 입력 >>";
  cin >> a >> b;

  for(i=a; i<=b; i++) {
    sum += i;
  }

  cout << a << "에서 " << b << "까지 합은 " << sum;
}
