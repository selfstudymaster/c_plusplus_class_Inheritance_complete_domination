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
  // オブジェクトを作成する
  Employee tanaka;

  // メンバ変数にデータを設定する
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;

  // メンバ関数を呼び出す
  tanaka.showData();

  return 0;
}
