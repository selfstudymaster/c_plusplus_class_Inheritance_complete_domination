#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 基本クラスの定義
class Hand {
public:
  virtual void judge(Hand *h) = 0;	// 相手に問い合わせる
  virtual void vsGu() = 0;	// グーに勝てるかどうかを返す
  virtual void vsChoki() = 0;	// チョキに勝てるかどうかを返す
  virtual void vsPa() = 0;	// パーに勝てるかどうかを返す
};

// Guクラスの定義
class Gu : public Hand {
public:
  void judge(Hand *h);
  void vsGu();
  void vsChoki();
  void vsPa();
};

// Guクラスのメンバ関数の実装
void Gu::judge(Hand *h) {
  h->vsGu();
}

void Gu::vsGu() {
  cout << "あいこです！\n";
}

void Gu::vsChoki() {
  cout << "グーの勝ちです！\n";
}

void Gu::vsPa() {
  cout << "グーの負けです！\n";
}

// Chokiクラスの定義
class Choki : public Hand {
public:
  void judge(Hand *h);
  void vsGu();
  void vsChoki();
  void vsPa();
};

// Chokiクラスのメンバ関数の実装
void Choki::judge(Hand *h) {
  h->vsChoki();
}

void Choki::vsGu() {
  cout << "チョキの負けです！\n";
}

void Choki::vsChoki() {
  cout << "あいこです！\n";
}

void Choki::vsPa() {
  cout << "チョキの勝ちです！\n";
}

// Paクラスの定義
class Pa : public Hand {
public:
  void judge(Hand *h);
  void vsGu();
  void vsChoki();
  void vsPa();
};

// Paクラスのメンバ関数の実装
void Pa::judge(Hand *h) {
  h->vsPa();
}

void Pa::vsGu() {
  cout << "パーの勝ちです！\n";
}

void Pa::vsChoki() {
  cout << "パーの負けです！\n";
}

void Pa::vsPa() {
  cout << "あいこです！\n";
}

// クラスを使う側のコード
int main() {
  // オブジェクトを作成する
  Gu g;
  Choki c;
  Pa p;

  // グーとチョキを対戦させる
  cout << "グー vs. チョキ…";
  c.judge(&g);

  // グーとパーを対戦させる
  cout << "グー vs. パー…";
  p.judge(&g);

  // グーとグーを対戦させる
  cout << "グー vs. グー…";
  g.judge(&g);

  return 0;
}
