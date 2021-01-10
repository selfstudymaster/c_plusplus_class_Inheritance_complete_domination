#include <cstring>
#include <iostream>
using namespace std;

// 構造体Employeeを定義
struct Employee {
    int number;
    char name[80];
    int salary;
};

// 構造体Companyを定義
struct Company {
    struct Employee person[3]; // 構造体Employeeのメンバが構造体Companyのメンバに
    char companyName[80];
};

int main() {
    
    // 構造体をデータ型とした変数を宣言
    struct Company gihyo;

    gihyo.person[0].number = 1234;
    strcpy(gihyo.person[0].name, "田中一郎");
    gihyo.person[0].salary = 200000;
    gihyo.person[1].number = 1235;
    strcpy(gihyo.person[1].name, "佐藤次郎");
    gihyo.person[1].salary = 250000;
    gihyo.person[2].number = 1236;
    strcpy(gihyo.person[2].name, "鈴木三郎");
    gihyo.person[2].salary = 300000;
    strcpy(gihyo.companyName, "技術評論社");

    for (int i = 0; i < 3; i++) {
        cout << gihyo.person[i].number << "\n";
        cout << gihyo.person[i].name << "\n";
        cout << gihyo.person[i].salary << "\n";
    }
    cout << gihyo.companyName << "\n";

    return 0;
}