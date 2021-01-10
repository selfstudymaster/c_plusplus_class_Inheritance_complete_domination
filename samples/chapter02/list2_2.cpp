#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// じゃんけんの手を表す定数
#define GU 0
#define CHOKI 1
#define PA 2

// 判定を表す定数
#define WIN 0
#define LOSE 1
#define DRAW 2

// ユーザーを表すクラス
class User {
private:
  int hand;		// 手
public:
  void setHand();	// 手を選択する
  int getHand();	// 手を返す
};

// ユーザーの手を選択するメンバ関数
void User::setHand() {
  cout << "0：グー、1：チョキ、2：パー\n";
  cout << "ユーザーの手を選んでください＝";
  cin >> hand;
}

// ユーザーの手を返すメンバ関数
int User::getHand() {
  return hand;
}

// コンピュータを表すクラス
class Computer {
private:
  int hand;		// 手
public:
  void setHand();	// 手を選択する
  int getHand();	// 手を返す
};

// コンピュータの手を選択するメンバ関数
void Computer::setHand() {
  hand = rand() % 3;
}

// コンピュータの手を返すメンバ関数
int Computer::getHand() {
  cout << "コンピュータの手＝" << hand << "\n";
  return hand;
}

// ジャッジを表すクラス
class Judge {
private:
  int judge;		// 勝敗
public:
  void doJudge(User u, Computer c); // 勝敗を判定する
  void showJudge();	// 勝敗を表示する
};

// ジャッジが勝敗を判定するメンバ関数
void Judge::doJudge(User u, Computer c) {
  int user, computer;

  user = u.getHand();
  computer = c.getHand();
  if (user == computer) {
    judge = DRAW;
  }
  else if (user == GU && computer == CHOKI ||
           user == CHOKI && computer == PA ||
           user == PA && computer == GU) {
    judge = WIN;
  }
  else {
    judge = LOSE;
  }
}

// ジャッジが勝敗を表示するメンバ関数
void Judge::showJudge() {
  if (judge == WIN) {
    cout << "ユーザーの勝ちです！\n";
  }
  else if (judge == LOSE) {
    cout << "ユーザーの負けです！\n";
  }
  else if (judge == DRAW) {
    cout << "引き分けです！\n";
  }
}

// プログラムのメイン関数
int main() {
  User user;
  Computer computer;
  Judge judge;

  // 乱数を初期化する
  srand(time(NULL));

  // ユーザーが手を選択する
  user.setHand();

  // コンピュータが手を選択する
  computer.setHand();

  // 勝敗を判定する
  judge.doJudge(user, computer);

  // 勝敗を表示する
  judge.showJudge();

  return 0;
}
