#include <iostream>
#include <cstring>
using namespace std;

// Employeeクラスの定義
class Employee {
    public:
        int number;
        char name[80];
        int salary;
    protected: // クラスを継承して使うときだけ公開する
        void showData();
};

// Employeeクラスのメンバ関数の実装
void Employee::showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

// Salesmanクラスの定義(Employeeクラスの継承)
class Salesman : public EMployee {
    public:
        int sales;
        void showAllData();
};

// Salesmanクラスのメンバ関数の実装
void Salesman::showAllData() {
    // 3つのメンバ変数の値を表示
    showData();

    // 追加されたメンバ変数の値を表示
    cout << sales << "\n";
}

// クラスを使う側のコード
int main() {
    // Salesmanクラスのオブジェクトを作成
    Salesman tanaka;

    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;
    tanaka.sales = 9999;
    tanaka.showAllData();

    return 0;
}