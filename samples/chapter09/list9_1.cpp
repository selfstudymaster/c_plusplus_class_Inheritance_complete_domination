#include <iostream>
#include <cstring>
using namespace std;

// クラスの定義
class Employee {
public:
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与
  Employee();		// コンストラクタ
  ~Employee();		// デストラクタ
};

// コンストラクタの実装
Employee::Employee() {
  // メンバ変数をデフォルト値で初期化する
  number = 0;
  strcpy(name, "未設定");
  salary = 150000;
  cout << "コンストラクタが呼び出されました！\n";
}

// デストラクタの実装
Employee::~Employee() {
  cout << "デストラクタが呼び出されました！\n";
}

// 関数のプロトタイプ宣言
void show(Employee obj);

// クラスを使う側のコード
int main() {
  // オブジェクトを作成する
  Employee tanaka;

  // メンバ変数に値を設定する
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;

  // オブジェクトを引数に渡して関数を呼び出す
  cout << "show()を呼び出します！\n";
  show(tanaka);
  cout << "show()を抜けました！\n";

  return 0;
}

// オブジェクトを引数とする関数
void show(Employee obj) {
  cout << "社員番号：" << obj.number << "\n";
  cout << "氏名：" << obj.name << "\n";
  cout << "給与：" << obj.salary << "\n";
}
