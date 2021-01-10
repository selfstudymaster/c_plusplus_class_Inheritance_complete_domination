#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* じゃんけんの手を表す定数 */
#define GU 0
#define CHOKI 1
#define PA 2

/* 判定を表す定数 */
#define WIN 0
#define LOSE 1
#define DRAW 2

/* 関数のプロトタイプ宣言 */
int getUserHand();
int getComputerHand();
int doJudge(int user, int computer);
void showJudge(int judge);

/* プログラムのメイン関数 */
int main() {
  int user, computer, judge;

  /* 乱数を初期化する */
  srand(time(NULL));

  /* ユーザーが手を選択する */
  user = getUserHand();

  /* コンピュータが手を選択する */
  computer= getComputerHand();

  /* 勝敗を判定する */
  judge = doJudge(user, computer);

  /* 判定を表示する */
  showJudge(judge);

  return 0;
}

/* ユーザーの手を返す関数 */
int getUserHand() {
  int hand;

  printf("0：グー、1：チョキ、2：パー\n");
  printf("ユーザーの手＝");
  scanf("%d", &hand);

  return hand;
}

/* コンピュータの手を返す関数 */
int getComputerHand() {
  int hand;

  hand = rand() % 3;
  printf("コンピュータの手＝%d\n", hand);

  return hand;
}

/* 勝敗を判定する関数 */
int doJudge(int user, int computer) {
  int judge;

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

  return judge;
}

/* 勝敗を表示する関数 */
void showJudge(int judge) {
  if (judge == WIN) {
    printf("ユーザーの勝ちです！\n");
  }
  else if (judge == LOSE) {
    printf("ユーザーの負けです！\n");
  }
  else if (judge == DRAW) {
    printf("引き分けです！\n");
  }
}
