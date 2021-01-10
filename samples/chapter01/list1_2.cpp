#include <cstring>
#include <iostream>
using namespace std;

// 構造体の定義
struct Employee {
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与
};

// 構造体の定義
struct Company {
  struct Employee tanaka;	// 田中さん
  struct Employee sato;		// 佐藤さん
  struct Employee suzuki;	// 鈴木さん
  char companyName[80];		// 企業名
};

// プログラムのメイン関数
int main() {
  // 構造体をデータ型とした変数を宣言する
  struct Company gihyo;

  // 構造体のメンバに代入を行う
  gihyo.tanaka.number = 1234;
  strcpy(gihyo.tanaka.name, "田中一郎");
  gihyo.tanaka.salary = 200000;
  gihyo.sato.number = 1235;
  strcpy(gihyo.sato.name, "佐藤次郎");
  gihyo.sato.salary = 250000;
  gihyo.suzuki.number = 1236;
  strcpy(gihyo.suzuki.name, "鈴木三郎");
  gihyo.suzuki.salary = 300000;
  strcpy(gihyo.companyName, "技術評論社");

  // 構造体のメンバを表示する
  cout << gihyo.tanaka.number << "\n";
  cout << gihyo.tanaka.name << "\n";
  cout << gihyo.tanaka.salary << "\n";
  cout << gihyo.sato.number << "\n";
  cout << gihyo.sato.name << "\n";
  cout << gihyo.sato.salary << "\n";
  cout << gihyo.suzuki.number << "\n";
  cout << gihyo.suzuki.name << "\n";
  cout << gihyo.suzuki.salary << "\n";
  cout << gihyo.companyName << "\n";

  return 0;
}
