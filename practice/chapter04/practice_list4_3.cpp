#include <iostream>
#include <cstring>
using namespace std;

// クラスの実装
class Employee {
    public:
    int number;
    char name[80];
    int salary;
    void showData();
    Employee(); // コンストラクタ(引数なし)
};

// メンバ関数の実装
void Employee::showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

// コンストラクタの実装
Employee::Employee() {
    number = 0;
    strcpy(name, "未設定");
    salary = 150000;
}

// クラスを使う側のコード
int main() {
    // オブジェクトを作成する
    Employee someone;

    // メンバ関数を呼び出す(コンストラクタは呼び出さない)
    someone.showData();

    return 0;
}