#include <iostream>
using namespace std;

// �N���X�̒�`
class MyClass {
public:
  int myVal;
  MyClass();
  MyClass(int m);
  ~MyClass();
};

// �����̂Ȃ��R���X�g���N�^�̎���
MyClass::MyClass() {
  myVal = 0;
  cout << "�R���X�g���N�^���Ăяo����܂����I\n";
}

// ���������R���X�g���N�^�̎���
MyClass::MyClass(int m) {
  myVal = m;
  cout << "�R���X�g���N�^���Ăяo����܂����I\n";
}

// �f�X�g���N�^�̎���
MyClass::~MyClass() {
  cout << "�f�X�g���N�^���Ăяo����܂����I\n";
}

// �֐��̃v���g�^�C�v�錾
void func();

// �O���[�o���I�u�W�F�N�g�̍쐬
MyClass g(123);

// �v���O�����̎��s�J�n�ʒu�ƂȂ�֐�
int main() {
  // �v���O�������N���������Ƃ�m�点��
  cout << "�v���O�������N�����܂����I\n";

  // �O���[�o���I�u�W�F�N�g�̃����o�ϐ��̒l��\������
  cout << "g.myVal�̒l�F" << g.myVal << "\n";

  // func()��2��Ăяo��
  func();
  func();

  // �v���O�������I�����邱�Ƃ�m�点��
  cout << "�v���O�������I�����܂��I\n";

  return 0;
}

// main()�֐�����Ăяo�����֐�
void func() {
  // �֐����Ăяo���ꂽ���Ƃ�m�点��
  cout << "func()���Ăяo����܂����I\n";

  // ���[�J���I�u�W�F�N�g�̍쐬
  MyClass a;

  // ���[�J���I�u�W�F�N�g�̃����o�ϐ��̒l��\������
  cout << "a.myVal�̒l�F" << a.myVal << "\n";

  // ���[�J���I�u�W�F�N�g�̃����o�ϐ��ɒl��������
  a.myVal = 456;

  // �֐��𔲂��邱�Ƃ�m�点��
  cout << "func()�𔲂��܂��I\n";
}
