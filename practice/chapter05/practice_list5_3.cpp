#include "practice_MyClass.h"
int main() {
    // MyClassクラスのオブジェクトを作成する
    MyClass mc;

    // MyClassクラスのメンバを使う
    mc.pub_data = 123;
    mc.pri_data = 456; // privateなのでエラーになる
    mc.pro_data = 789;

    return 0;
}