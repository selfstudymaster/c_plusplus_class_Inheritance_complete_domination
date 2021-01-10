#include <cstring>
#include <iostream>
using namespace std;

// 構造体の定義
struct Employee {
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与
};

// 関数のプロトタイプ宣言
void showEmployee(struct Employee *p);

// プログラムのメイン関数
int main() {
  // 構造体の実体を宣言する
  struct Employee tanaka;

  // 構造体のメンバに代入を行う
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;

  // 構造体のポインタを関数の引数に渡す
  showEmployee(&tanaka);

  return 0;
}

// 構造体のポインタを引数とする関数
void showEmployee(struct Employee *p) {
  // 構造体のポインタを使ってメンバを表示する
  cout << p->number << "\n";
  cout << p->name << "\n";
  cout << p->salary << "\n";
}
