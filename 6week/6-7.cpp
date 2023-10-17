// 형 변환으로 인해 함수 중복이 모호한 경우
#include <iostream>
using namespace std;

float square(float a) {
  return a*a;
}

double square(double a) {
  return a*a;
}

int main() {
  cout << square(3.0);  // square(double a); 호출
  cout << square(3);  // 컴파일 오류
}

/* square(3)이 float인지 double인지 모호해서 컴파일 오류가 생김 */
