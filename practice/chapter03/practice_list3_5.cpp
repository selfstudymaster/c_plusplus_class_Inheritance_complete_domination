#include <cstring>
#include "practice_employee2.h"

int main() {
  // オブジェクトを作成する
  Employee tanaka;

  // メンバ変数にデータを設定する
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;

  // メンバ関数を呼び出す
  tanaka.showData();

  return 0;
}
