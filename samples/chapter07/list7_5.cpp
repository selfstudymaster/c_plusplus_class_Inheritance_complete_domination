#include <iostream>
#include "Employee.h"
using namespace std;

// クラスを使う側のコード
int main() {
  // クラス名で静的メンバ変数を使う
  cout << Employee::companyName << "\n";

  // オブジェクトを作成する
  Employee tanaka;

  // オブジェクト名で静的メンバ変数を使う
  cout << tanaka.companyName << "\n";

  return 0;
}
