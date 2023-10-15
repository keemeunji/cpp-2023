// 실습문제 1
// 커피를 주문하는 간단한 C++ 프로그램을 작성해보자. 커피 종류는 "에스프레소", "아메리카노", "카푸치노"의 3가지이며
// 가격은 각각 2000원, 2300원, 2500원이다. 하루에 20000원 이상 벌게 되면 카페를 닫는다. 실행 결과와 같이 작동하는 프로그램을 작성하라.

#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
  char coffee[100];  // 커피 이름
  int num;  // 커피의 개수
  int price;  // 커피의 가격
  int sum;  // 오늘의 총수익을 뜻하는 변수 생성

  while (sum < 20000) {  // 총수익 20000원 이하일 때까지 반복.
	  cout << "주문>> ";
	  cin >> coffee >> num;
	
  	if(strcmp(coffee, "에스프레소") == 0) {  // if (coffee == "에스프레소") { price = 2000; }
  		price = 2000;
  	}
  	else if(strcmp(coffee, "아메리카노") == 0) {
  		price = 2300;
  	}
  	else if(strcmp(coffee, "카푸치노") == 0) {
  		price = 2500;
  	}
  	else {
  		cout << "다시 주문해주세요.";
  	}
  	cout << price * num << "원 입니다. 맛있게 드세요" << endl;
  	sum += price * num;
  }
  cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
}
