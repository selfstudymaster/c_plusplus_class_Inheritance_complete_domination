#include <iostream>
#include <cstring>
using namespace std;

// CellPhoneクラスの定義
class Cellphone {
    public:
        char number[20];
        bool smart;
};

// Employeeクラスの定義
class Employee {
    public:
        int number;
        char name[80];
        int salary;
        Cellphone phone; // メンバオブジェクト
        void showData();
};

// Employeeクラスのメンバ(関数の実装)
void Employee::showData() {
    cout << "社員番号:" << number << "\n";
    cout << "氏名:" << name << "\n";
    cout << "給与:" << salary << "\n";
    cout << "携帯電話番号:" << phone.number << "\n";
    cout << "スマホかどうか:" << phone.smart << "\n";
}

// グローバルオブジェクト
Employee tanaka;

// クラスを使う側のコード
int main() {
    // グローバルオブジェクトを使う
    tanaka.number = 123;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;
    strcpy(tanaka.phone.number, "111-1111-1111");
    tanaka.phone.smart = true;
    tanaka.showData();

    // ローカルオブジェクトを使う
    Employee sato;
    sato.number = 1235;
    strcpy(sato.name, "佐藤次郎");
    sato.salary = 250000;
    strcpy(sato.phone.number, "222-2222-2222");
    sato.showData();


    // 動的オブジェクトを使う
    Employee *suzuki = new Employee;
    suzuki->number = 1236;
    strcpy(suzuki->name, "鈴木三郎");
    suzuki->salary = 300000;
    strcpy(suzuki->phone.number, "333-3333-3333");
    suzuki->phone.smart = false;
    suzuki->showData();
    delete suzuki;

    return 0;
}
