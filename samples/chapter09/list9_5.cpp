#include <iostream>
#include <cstring>
using namespace std;

// クラスの定義
class Employee {
public:
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与
  void showData();	// メンバ変数の値を表示する
};

// メンバ関数の実装
void Employee::showData() {
  cout << "社員番号：" << number << "\n";
  cout << "氏名：" << name << "\n";
  cout << "給与：" << salary << "\n";
}

// クラスを使う側のコード
int main() {
  // オブジェクトを作成する
  Employee tanaka, someone;

  // メンバ変数に値を設定する
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;

  // オブジェクトを代入する
  someone = tanaka;

  // メンバ変数の値を変更する
  tanaka.salary = 250000;

  // メンバ変数の値を表示する
  tanaka.showData();
  someone.showData();

  return 0;
}
