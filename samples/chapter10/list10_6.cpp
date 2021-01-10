#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// ��{�N���X�̒�`
class Hand {
public:
  virtual void judge(Hand *h) = 0;	// ����ɖ₢���킹��
  virtual void vsGu() = 0;	// �O�[�ɏ��Ă邩�ǂ�����Ԃ�
  virtual void vsChoki() = 0;	// �`���L�ɏ��Ă邩�ǂ�����Ԃ�
  virtual void vsPa() = 0;	// �p�[�ɏ��Ă邩�ǂ�����Ԃ�
};

// Gu�N���X�̒�`
class Gu : public Hand {
public:
  void judge(Hand *h);
  void vsGu();
  void vsChoki();
  void vsPa();
};

// Gu�N���X�̃����o�֐��̎���
void Gu::judge(Hand *h) {
  h->vsGu();
}

void Gu::vsGu() {
  cout << "�������ł��I\n";
}

void Gu::vsChoki() {
  cout << "�O�[�̏����ł��I\n";
}

void Gu::vsPa() {
  cout << "�O�[�̕����ł��I\n";
}

// Choki�N���X�̒�`
class Choki : public Hand {
public:
  void judge(Hand *h);
  void vsGu();
  void vsChoki();
  void vsPa();
};

// Choki�N���X�̃����o�֐��̎���
void Choki::judge(Hand *h) {
  h->vsChoki();
}

void Choki::vsGu() {
  cout << "�`���L�̕����ł��I\n";
}

void Choki::vsChoki() {
  cout << "�������ł��I\n";
}

void Choki::vsPa() {
  cout << "�`���L�̏����ł��I\n";
}

// Pa�N���X�̒�`
class Pa : public Hand {
public:
  void judge(Hand *h);
  void vsGu();
  void vsChoki();
  void vsPa();
};

// Pa�N���X�̃����o�֐��̎���
void Pa::judge(Hand *h) {
  h->vsPa();
}

void Pa::vsGu() {
  cout << "�p�[�̏����ł��I\n";
}

void Pa::vsChoki() {
  cout << "�p�[�̕����ł��I\n";
}

void Pa::vsPa() {
  cout << "�������ł��I\n";
}

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Gu g;
  Choki c;
  Pa p;

  // �O�[�ƃ`���L��ΐ킳����
  cout << "�O�[ vs. �`���L�c";
  c.judge(&g);

  // �O�[�ƃp�[��ΐ킳����
  cout << "�O�[ vs. �p�[�c";
  p.judge(&g);

  // �O�[�ƃO�[��ΐ킳����
  cout << "�O�[ vs. �O�[�c";
  g.judge(&g);

  return 0;
}
