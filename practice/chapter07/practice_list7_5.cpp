#include <iostream>
#include "practice_Employee.h"
using namespace std;

// クラスの定義
int main() {
    // クラス名で静的メンバ変数を使う
    cout << Employee::companyName << "\n";

    // オブジェクトを作成する
    Employee tanaka;

    // オブジェクト名で静的メンバ変数を使う
    cout << tanaka.companyName << "\n";

    return 0;
}