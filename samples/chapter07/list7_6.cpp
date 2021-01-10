#include <iostream>
#include <cstring>
using namespace std;

// クラスの定義
class Employee {
public:
  static int objNum;		// オブジェクト数（静的メンバ変数）
  static const char *companyName;	// 会社名（静的メンバ変数）
  int number;			// 社員番号
  char name[80];		// 氏名
  int salary;			// 給与
  void showData();		// メンバ関数
  Employee();			// 引数のないコンストラクタ
  Employee(const char *na, int sa);	// 引数を持つコンストラクタ
};

// 静的メンバ変数の実体となるグローバル変数
int Employee::objNum = 0;
const char *Employee::companyName = "技術評論社";

// 引数のないコンストラクタの実装
Employee::Employee() {
  // オブジェクト数をカウントアップする
  objNum++;
  number = objNum;
  strcpy(name, "未設定");
  salary = 150000;
}

// 引数を持つコンストラクタの実装
Employee::Employee(const char *na, int sa) {
  // オブジェクト数をカウントアップする
  objNum++;
  number = objNum;
  strcpy(name, na);
  salary = sa;
}

// メンバ関数の実装
void Employee::showData() {
  cout << "会社名：" << companyName << "\n";
  cout << "社員番号：" << number << "\n";
  cout << "氏名：" << name << "\n";
  cout << "給与：" << salary << "\n";
}

// クラスを使う側のコード
int main() {
  // オブジェクトを作成する
  Employee tanaka("田中一郎", 200000);
  Employee sato("佐藤次郎", 250000);
  Employee someone;

  // メンバ変数の値を表示する
  tanaka.showData();
  sato.showData();
  someone.showData();
  cout << "現在の社員数：" << Employee::objNum << "\n";

  return 0;
}
