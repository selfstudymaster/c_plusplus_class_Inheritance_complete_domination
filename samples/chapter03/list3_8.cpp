#include <iostream>
using namespace std;

// クラスの定義
class MyMessage {
public:
  void showMessage();			// 引数のないメンバ関数
  void showMessage(const char *s);		// 引数1個のメンバ関数
  void showMessage(const char *s, int n);	// 引数2個のメンバ関数
};

// 引数のないメンバ関数の実装
void MyMessage::showMessage() {
  cout << "こんにちは。" << "\n";
}

// 引数1個のメンバ関数の実装
void MyMessage::showMessage(const char *s) {
  cout << s << "\n";
}

// 引数2個のメンバ関数の実装
void MyMessage::showMessage(const char *s, int n) {
  for (int i = 0; i < n; i++) {
    cout << s << "\n";
  }
}

// クラスを使う側のコード
int main() {
  MyMessage obj;

  obj.showMessage();
  obj.showMessage("お元気ですか？");
  obj.showMessage("技術評論社", 3);

  return 0;
}
