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
  struct Employee person[3];	// 3人の従業員
  char companyName[80];		// 企業名
};

// プログラムのメイン関数
int main() {
  // 構造体をデータ型とした変数を宣言する
  struct Company gihyo;

  // 構造体のメンバに代入を行う
  gihyo.person[0].number = 1234;
  strcpy(gihyo.person[0].name, "田中一郎");
  gihyo.person[0].salary = 200000;
  gihyo.person[1].number = 1235;
  strcpy(gihyo.person[1].name, "佐藤次郎");
  gihyo.person[1].salary = 250000;
  gihyo.person[2].number = 1236;
  strcpy(gihyo.person[2].name, "鈴木三郎");
  gihyo.person[2].salary = 300000;
  strcpy(gihyo.companyName, "技術評論社");

  // 構造体のメンバを表示する
  for (int i = 0; i < 3; i++) {
    cout << gihyo.person[i].number << "\n";
    cout << gihyo.person[i].name << "\n";
    cout << gihyo.person[i].salary << "\n";
  }
  cout << gihyo.companyName << "\n";

  return 0;
}
