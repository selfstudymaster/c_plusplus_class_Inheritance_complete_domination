#include <iostream>
#include <cstring>
using namespace std;

// Employeeクラスの定義
class Employee {
    public:
        int number;
        char name[80];
        int salary;

        void showData();
};

// Employeeクラスのメンバ関数の実装
void Employee::showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

// 派生クラス Salesmanクラスの定義 (基本クラス Employeeクラスの継承)
class Salesman : public Employee {
    // メンバなし
};

// クラスを使う側のコード
int main() {
    // Salesmanクラスのオブジェクトを作成
    Salesman tanaka;

    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;
    tanaka.showData();

    return 0;
}