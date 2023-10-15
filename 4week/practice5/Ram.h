/* 컴퓨터의 주기억장치를 모델링하는 클래스 Ram을 구현하려고 한다. Ram 클래스는 데이터가 기록될 메모리 공간과 크기 정보를 가지고,
주어진 주소에 데이터를 기록하고(write), 주어진 주소로부터 데이터를 읽어온다.(read). 
- Ram 클래스는 다음과 같이 선언된다.
class Ram {
  char mem[100 * 1024];
  int size;
public:
  Ram();
  ~Ram();
  char read(int address);
  void write(int address, char value);
};

- 다음 main() 함수는 100번지에 20을 저장하고, 101번지에 30을 저장한 후, 100번지와 101번지의 값을 읽고 더하여 102번지에 저장하는 코드이다.
int main() {
  Ram ram;
  ram.write(100, 20);
  ram.write(101, 30);
  char res = ram.read(100) + ram.read(101);
  ram.write(102,res);
  cout << "102번지의 값 = " << (int)ram.read(102) << endl;
}

실행결과
102번지의 값 = 50
메모리 제거됨

실행 결과를 참고하여 Ram.h, Ram.cpp, main.cpp로 헤더파일과 cpp 파일을 분리하여 프로그램을 완성하라. */

// 클래스 선언부
class Ram {
  char mem[100 * 1024];  // 100KB 메모리. 한 번지는 한 바이트이므로 char 타입 사용
  int size;
public:
  Ram();  // 생성자. mem 배열을 0으로 초기화하고 size를 100*1024로 초기화
  ~Ram();  // 소멸자. "메모리 제거됨" 문자열 출력
  char read(int address);  // address 주소의 메모리 바이트 리턴
  void write(int address, char value);  // address 주소에 한 바이트로 value 저장
};
