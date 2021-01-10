#include <iostream>
#include "practice_employee.h" // 定義したクラスを記述したヘッダーファイル(.h)を呼び出す
using namespace std;

// Employeeクラスが所有するshowData()関数を実装
// データ型 所有者のクラス名 ::(スコープ解決演算子) 関数名() {処理}
void Employee::showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}