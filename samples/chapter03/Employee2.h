#include <iostream>
using namespace std;

class Employee {
public:
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与

  // インライン関数(メンバ変数の値を表示する)
  void showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
  }
};
