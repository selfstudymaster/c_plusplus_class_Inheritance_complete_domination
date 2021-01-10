#include <iostream>
#include <cstring>
#include "Company.h"
using namespace std;

// Employeeクラスのメンバ関数の実装
void Employee::showData() {
  cout << "社員番号：" << number << "\n";
  cout << "氏名：" << name << "\n";
  cout << "給与：" << salary << "\n";
}

// Employeeクラスの引数のないコンストラクタの実装
Employee::Employee() {
  number = 0;
  strcpy(name, "未設定");
  salary = 150000;
}

// Employeeクラスの引数を持つコンストラクタの実装
Employee::Employee(int nu, const char *na, int sa) {
  number = nu;
  strcpy(name, na);
  salary = sa;
}

// Directorクラスのメンバ関数の実装
void Director::showData() {
  Employee::showData();
  cout << "株式保有数：" << stock << "\n";
}

// Directorクラスの引数のないコンストラクタの実装
Director::Director() {
  stock = 100;
}

// Directorクラスの引数を持つコンストラクタの実装
Director::Director(int nu, const char *na, int sa, int st) : Employee(nu, na, sa) {
  stock = st;
}

// Managerクラスのメンバ関数の実装
void Manager::showData() {
  Employee::showData();
  cout << "出張費：" << travelAllowance << "\n";
}

// Managerクラスの引数のないコンストラクタの実装
Manager::Manager() {
  travelAllowance = 10000;
}

// Managerクラスの引数を持つコンストラクタの実装
Manager::Manager(int nu, const char *na, int sa, int tr) : Employee(nu, na, sa) {
  travelAllowance = tr;
}

// Salesmanクラスのメンバ関数の実装
void Salesman::showData() {
  Employee::showData();
  cout << "売上：" << sales << "\n";
}

// Salesmanクラスの引数のないコンストラクタの実装
Salesman::Salesman() {
  sales = 0;
}

// Salesmanクラスの引数を持つコンストラクタの実装
Salesman::Salesman(int nu, const char *na, int sa, int ss) : Employee(nu, na, sa) {
  sales = ss;
}
