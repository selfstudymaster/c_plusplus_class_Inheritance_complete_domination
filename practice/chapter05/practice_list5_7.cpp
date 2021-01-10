#include <iostream>
#include <cstring>
using namespace std;

// Employeeクラスを定義
class Employee {
    public:
        int number;
        char name[80];
        int salary;
};

// Directorクラスを定義(Employeeクラスを継承)
class Director : public Employee {
    public:
        int stock;
};

// Managerクラスを定義(Employeeクラスを継承)
class Manager : public Employee {
    public:
        int travelAllowance;
};

// Salesmanクラスを定義(Employeeクラスを継承)
class Salesman : public Employee {
    public:
        int sales;
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
