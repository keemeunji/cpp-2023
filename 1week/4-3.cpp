/* do-while문 예제 
4-1의 for문을 do-while문으로 바꾸어 작성하라. */

#include <iostream>
using namespace std;

int main() {
  int i, a, b, sum=0;
  cout << "두 개의 정수 입력 >>";
  cin >> a >> b;

  i=a;
  do {
    sum += i;
    i++;
  } while(i<=b); // i가 b보다 작거나 같은 동안 반복

  cout << a << "에서 " << b << "까지 합은 " << sum;
}
