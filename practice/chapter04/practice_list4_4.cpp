#include <iostream>
#include <cstring>
using namespace std;

// クラスの定義
class Employee {
    public:
        int number;
        char name[80];
        int salary;
        void showData();
        Employee(); // 引数のないコンストラクタ
        Employee(int number, const char *name, int salary); // 引数を持つコンストラクタ
};

// メンバ関数の実装
void Employee::showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

// 引数のないコンストラクタの実装
Employee::Employee() {
    number = 0;
    strcpy(name, "未設定");
    salary = 150000;
}

// 引数を持つコンストラクタの実装
Employee::Employee(int number, const char *name, int salary) {
    number = number;
    strcpy(name, name);
    salary = salary;
}

// クラスを使う側のコード
int main() {
    // 引数のないコンストラクタを呼び出す
    Employee someone;
    // メンバ関数を呼び出す
    someone.showData();

    // 引数を持つコンストラクタを呼び出す
    Employee tanaka(1234, "田中一郎", 150000);
    // メンバ関数を呼び出す
    tanaka.showData();

    return 0;
}