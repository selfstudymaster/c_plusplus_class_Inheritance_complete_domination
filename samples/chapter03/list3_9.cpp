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
  Employee obj[3];

  // オブジェクトのメンバを設定する
  obj[0].number = 1234;
  strcpy(obj[0].name, "田中一郎");
  obj[0].salary = 200000;
  obj[1].number = 1235;
  strcpy(obj[1].name, "佐藤次郎");
  obj[1].salary = 250000;
  obj[2].number = 1236;
  strcpy(obj[2].name, "鈴木三郎");
  obj[2].salary = 300000;

  // オブジェクトのメンバを表示する
  for (int i = 0; i < 3; i++) {
    obj[i].showData();
  }

  return 0;
}
