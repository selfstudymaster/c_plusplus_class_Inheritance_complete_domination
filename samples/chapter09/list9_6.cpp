#include <iostream>
#include <cstring>
using namespace std;

// クラスの定義
class Employee {
public:
  int number;			// 社員番号
  char *name;			// 氏名（ポインタ）
  int salary;			// 給与
  void showData();		// メンバ変数の値を表示する
  Employee();			// コンストラクタ
  Employee(const Employee &obj); // コピーコンストラクタ
  ~Employee();			// デストラクタ
};

// コンストラクタの実装
Employee::Employee() {
  // nameのための領域を動的に確保する
  name = new char [80];

  // メンバ変数をデフォルト値で初期化する
  number = 0;
  strcpy(name, "未設定");
  salary = 150000;
  cout << "コンストラクタが呼び出されました！\n";
}

// コピーコンストラクタの実装
Employee::Employee(const Employee &obj) {
  // nameのための領域を動的に確保する
  name = new char [80];

  // データをコピーする
  number = obj.number;
  strcpy(name, obj.name);
  salary = obj.salary;
  cout << "コピーコンストラクタが呼び出されました！\n";
}

// デストラクタの実装
Employee::~Employee() {
  // nameのための領域を動的に解放する
  delete [] name;
  cout << "デストラクタが呼び出されました！\n";
}

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
  someone.number = 1111;
  strcpy(someone.name, "技術太郎");
  someone.salary = 150000;

  // メンバ変数の値を表示する
  tanaka.showData();
  someone.showData();

  return 0;
}
