// while문과 continue, breack문을 이용하여, 정수를 입력 받고 3의 배수이면 "Yes"를, 아니면 "No"를 출력하라. 0이 입력되면 프로그램을 종료한다.
#include <iostream>
using namespace std;

int main() {
  int a;
  while(true) {
    cout << "정수 입력>>";
    cin >> a;
    if(a == 0)  // 0이 입력되면 while문을 벗어남
      break;
    if(a%3 != 0) {
      cout << "No" << "\n";
      continue;  // 다음 반복. while문으로 분기
    }
    cout << "Yes" << "\n";  // 입력된 3의 배수 출력
  }
}
