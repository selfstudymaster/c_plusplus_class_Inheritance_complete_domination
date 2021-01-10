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
  cout << number << "\n";
  cout << name << "\n";
  cout << salary << "\n";
}

// クラスを使う側のコード
int main() {
  Employee tanaka;
  Employee *someone;

  // オブジェクトのポインタを取得する
  someone = &tanaka;

  // オブジェクトのメンバを設定する
  someone->number = 1234;
  strcpy(someone->name, "田中一郎");
  someone->salary = 200000;

  // オブジェクトのメンバを表示する
  someone->showData();

  return 0;
}
