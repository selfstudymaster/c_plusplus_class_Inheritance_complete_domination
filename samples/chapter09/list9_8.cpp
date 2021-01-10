#include <iostream>
using namespace std;

// �O���Q�Ɓi���̕������R�����g�A�E�g����j
class YourClass;

// MyClass�N���X�̒�`
class MyClass {
private:
  int val;
  friend void compObj(MyClass *m, YourClass *y); // �t�����h�֐�
public:
  // �����̂Ȃ��R���X�g���N�^
  MyClass() {
    val = 0;
  }
  // ���������R���X�g���N�^
  MyClass(int v) {
    val = v;
  }
};

// YourClass�N���X�̒�`
class YourClass {
private:
  int num;
  friend void compObj(MyClass *m, YourClass *y); // �t�����h�֐�
public:
  // �����̂Ȃ��R���X�g���N�^
  YourClass() {
    num = 0;
  }
  // ���������R���X�g���N�^
  YourClass(int n) {
    num = n;
  }
};

// �t�����h�֐��̎��̂̒�`
void compObj(MyClass *m, YourClass *y) {
  if (m->val > y->num) {
    cout << "val��num���傫���I\n";
  }
  else if (m->val < y->num) {
    cout << "val��num��菬�����I\n";
  }
  else {
    cout << "val��num�͓������I\n";
  }
}

// �N���X�Ɗ֐����g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  MyClass mc(123);
  YourClass yc(456);

  // �t�����h�֐����g��
  compObj(&mc, &yc);

  return 0;
}
