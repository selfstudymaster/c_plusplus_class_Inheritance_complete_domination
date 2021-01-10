#include <iostream>
#include <cstring>
using namespace std;

// Employeeクラスの定義
class Employee {
public:
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与
};

// Directorクラスの定義
class Director : public Employee {
public:
  int stock;		// 株式保有数
};

// Managerクラスの定義
class Manager : public Employee {
public:
  int travelAllowance;	// 出張費
};

// Salesmanクラスの定義
class Salesman : public Employee {
public:
  int sales;	// 売上
};

// クラスを使う側のコード
int main() {
  // Directorクラスのオブジェクトを使う
  Director y;
  y.number = 1111;
  strcpy(y.name, "役員一郎");
  y.salary = 500000;
  y.stock = 1000;
  cout << "社員番号：" << y.number << "\n";
  cout << "氏名：" << y.name << "\n";
  cout << "給与：" << y.salary << "\n";
  cout << "株式保有数：" << y.stock << "\n";

  // Managerクラスのオブジェクトを使う
  Manager k;
  k.number = 2222;
  strcpy(k.name, "課長次郎");
  k.salary = 350000;
  k.travelAllowance = 10000;
  cout << "社員番号：" << k.number << "\n";
  cout << "氏名：" << k.name << "\n";
  cout << "給与：" << k.salary << "\n";
  cout << "出張費：" << k.travelAllowance << "\n";

  // Salesmanクラスのオブジェクトを使う
  Salesman e;
  e.number = 3333;
  strcpy(e.name, "営業三郎");
  e.salary = 250000;
  e.sales = 1234;
  cout << "社員番号：" << e.number << "\n";
  cout << "氏名：" << e.name << "\n";
  cout << "給与：" << e.salary << "\n";
  cout << "売上：" << e.sales << "\n";

  return 0;
}
