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

// �v���O�����̎��s�J�n�ʒu�ƂȂ�֐�
int main() {
  // �v���O�������N���������Ƃ�m�点��
  cout << "�v���O�������N�����܂����I\n";

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

  // �ÓI�ϐ��̐錾
  static int a = 123;

  // �ÓI�ϐ��̒l��\������
  cout << "�ÓI�ϐ��̒l�F" << a << "\n";

  // �ÓI�ϐ��̒l���C���N�������g����
  a++;

  // �ÓI�I�u�W�F�N�g�̐錾
  static MyClass obj(456);

  // �ÓI�I�u�W�F�N�g�̃����o�ϐ��̒l��\������
  cout << "�����o�ϐ��̒l�F" << obj.myVal << "\n";

  // �ÓI�I�u�W�F�N�g�̃����o�ϐ��̒l���C���N�������g����
  obj.myVal++;

  // �֐��𔲂��邱�Ƃ�m�点��
  cout << "func()�𔲂��܂��I\n";
}
