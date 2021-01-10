#include <iostream>
#include <cstring>
using namespace std;

// Employeeクラスの定義
class Employee {
public:
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与
protected:
  void showData();	// メンバ変数の値を表示する
};

// Employeeクラスのメンバ関数の実装
void Employee::showData() {
  cout << number << "\n";
  cout << name << "\n";
  cout << salary << "\n";
}

// Salesmanクラスの定義
class Salesman : public Employee {
public:
  int sales;		// 売上
  void showAllData();	// メンバ変数の値を表示する
};

// Salesmanクラスのメンバ関数の実装
void Salesman::showAllData() {
  // 3つのメンバ変数の値を表示する
  showData();

  // 追加されたメンバ変数の値を表示する
  cout << sales << "\n";
}

// クラスを使う側のコード
int main() {
  // Salesmanクラスのオブジェクトを作成する
  Salesman tanaka;

  // Salesmanクラスのメンバを利用する
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;
  tanaka.sales = 9999;
  tanaka.showAllData();

  return 0;
}
