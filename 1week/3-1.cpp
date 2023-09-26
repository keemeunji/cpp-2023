/* if-else 사용
점수를 입력받아 등급 출력
A: 90~100
B: 80~89
C: 70~79
D: 60~69
F: 60 이하 */

#include <iostream>
using namespace std;

int main() {
  int score;
  cout << "점수를 입력하세요 >> ";
  cin >> score;
  if(score > 100 || score < 0) {
    cout << "잘못된 점수입니다.";
    return 0;
  }
  if(score >= 90)
    cout << "A입니다.";
  else if(score >= 80)
    cout << "B입니다.";
  else if(score >= 70)
    cout << "C입니다.";
  else if(score >= 60)
    cout << "D입니다.";
  else
    cout << "F입니다.";
}
