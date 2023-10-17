// 디폴트 매개 변수로 인해 함수 중복이 모호한 경우
#include <iostream>
#include <string>
using namespace std;

void msg(int id) {
  cout << id << endl;
}

void msg(int id, string s="") {
  cout << id << ":" << s << endl;
}

int main() {
  msg(5, "Good Morning");  // 정상 컴파일.  두 번째 msg() 호출
  msg(6);  // 함수 호출 모호. 컴파일 오류
}
