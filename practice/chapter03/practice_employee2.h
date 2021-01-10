#include <iostream>
using namespace std;

class Employee {
    public:
        int number;
        char name[80];
        int salary;
    
    // インライン関数 (メンバ変数の値を表示する関数をクラス内に記述)
    void showData() {
        cout << number << "\n";
        cout << name << "\n";
        cout << salary << "\n";
    }
};

/* インライン関数
クラスを使う側でメンバ関数を呼び出しても、実際には呼び出しが行われず、
その位置でメンバ関数のコードが展開される。

Employeeクラスを定義するブロックの中でshowData()関数を実装。
Employeeクラスを使う側のコードがshowData()関数を呼び出すと、
その位置にshowData()関数の処理内容が展開される。
コンパイラによって自動的に処理される。
*/