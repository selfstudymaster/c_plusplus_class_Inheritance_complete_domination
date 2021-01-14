#include <iostream>
#include <cstring>
using namespace std;

// CellPhoneクラスの定義
class CellPhone {
public:
  char number[20];	// 電話番号
  bool smart;		// スマホかどうか
  CellPhone();		// コンストラクタ
  ~CellPhone();		// デストラクタ
};

// CellPhoneクラスのコンストラクタの実装
CellPhone::CellPhone() {
  cout << "CellPhoneクラスのコンストラクタが呼び出されました！\n";
}

// CellPhoneクラスのデストラクタの実装
CellPhone::~CellPhone() {
  cout << "CellPhoneクラスのデストラクタが呼び出されました！\n";
}

// Employeeクラスの定義
class Employee {
public:
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与
  CellPhone phone;	// 携帯電話（メンバオブジェクト）
  void showData();	// メンバ変数の値を表示する
  Employee();		// コンストラクタ
  ~Employee();		// デストラクタ
};

// Employeeクラスのメンバ関数の実装
void Employee::showData() {
  cout << "社員番号：" << number << "\n";
  cout << "氏名：" << name << "\n";
  cout << "給与：" << salary << "\n";
  cout << "携帯電話番号：" << phone.number << "\n";
  cout << "スマホかどうか：" << phone.smart << "\n";
}

// Employeeクラスのコンストラクタの実装
Employee::Employee() {
  cout << "Employeeクラスのコンストラクタが呼び出されました！\n";
}

// Employeeクラスのデストラクタの実装
Employee::~Employee() {
  cout << "Employeeクラスのデストラクタが呼び出されました！\n";
}

// クラスを使う側のコード
int main() {
  // オブジェクトを作成する
  Employee tanaka;

  // メンバを使う
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;
  strcpy(tanaka.phone.number, "111-1111-1111");
  tanaka.phone.smart = true;
  tanaka.showData();

  // ここでオブジェクトが破棄される
  return 0;
}
