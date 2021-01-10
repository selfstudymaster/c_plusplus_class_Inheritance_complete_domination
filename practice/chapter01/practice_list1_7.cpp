#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
    int number;
    char name[80];
    int salary;
};

// 関数のプロトタイプ宣言
void showEmployee(struct Employee *p);

// プログラムのメイン関数
int main() {
    // 構造体の実体を宣言
    struct Employee tanaka;

    // 構造体のメンバに代入
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    // 構造体のポインタを関数の引数に渡す
    showEmployee(&tanaka);

    return 0;
}

// 構造体のポインタを引数とする関数
void showEmployee(struct Employee *p) {
    // 構造体のポインタを使ってメンバを表示
    cout << p->number << "\n";
    cout << p->name << "\n";
    cout << p->salary << "\n";
}
