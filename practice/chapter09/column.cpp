#include <iostream>
#include <string>
using namespace std;

int main() {
    // 文字列を作成する
    std::string s1("Apple");
    std::string s2("Orange");
    std::string s3;

    // 文字列を代入する
    s3 = s2;

    // 文字列を比較する
    if (s3 > s1) {
        cout << s3 << "は" << s1 << "より大きい！\n";
    }

    return 0;
}