#include <iostream>
#include <cstring>
using namespace std;

// CellPhoneクラスの定義
class CellPhone {
public:
  char number[20];	// 電話番号
  bool smart;		// スマホかどうか
  CellPhone();		// 引数のないコンストラクタ
  CellPhone(const char *b, bool i); // 引数を持つコンストラクタ
  ~CellPhone();		// デストラクタ
};

// CellPhoneクラスの引数のないコンストラクタの実装
CellPhone::CellPhone() {
  strcpy(number, "未設定");
  smart = false;
}

// CellPhoneクラスの引数を持つコンストラクタの実装
CellPhone::CellPhone(const char *cn, bool cs) {
  strcpy(number, cn);
  smart = cs;
}

// CellPhoneクラスのデストラクタの実装
CellPhone::~CellPhone() {
  // 何もしない
}

// Employeeクラスの定義
class Employee {
public:
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与
  CellPhone phone;	// 携帯電話（メンバオブジェクト）
  void showData();	// メンバ変数の値を表示する
  Employee();		// 引数のないコンストラクタ
  Employee(int nu, const char *na, int sa, const char *cn, bool cs); // 引数を持つコンストラクタ
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

// Employeeクラスの引数のないコンストラクタの実装
Employee::Employee() {
  number = 0;
  strcpy(name, "未設定");
  salary = 150000;
}

// Employeeクラスの引数を持つコンストラクタの実装
Employee::Employee(int nu, const char *na, int sa, const char *cn, bool cs) : phone(cn, cs) {
  number = nu;
  strcpy(name, na);
  salary = sa;
}

// Employeeクラスのデストラクタの実装
Employee::~Employee() {
  // 何もしない
}

// クラスを使う側のコード
int main() {
  // 引数のないコンストラクタを呼び出す
  Employee someone;

  // メンバ変数の値を表示する
  someone.showData();

  // 引数を持つコンストラクタを呼び出す
  Employee tanaka(1234, "田中一郎", 200000, "111-1111-1111", true);

  // メンバ変数の値を表示する
  tanaka.showData();

  return 0;
}
