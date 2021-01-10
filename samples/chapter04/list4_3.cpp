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
  Employee();		// コンストラクタ
};

// メンバ関数の実装
void Employee::showData() {
  cout << number << "\n";
  cout << name << "\n";
  cout << salary << "\n";
}

// コンストラクタの実装
Employee::Employee() {
  number = 0;
  strcpy(name, "未設定");
  salary = 150000;
}

// クラスを使う側のコード
int main() {
  // オブジェクトを作成する
  Employee someone;

  // メンバ関数を呼び出す
  someone.showData();

  return 0;
}
