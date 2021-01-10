#include <iostream>
using namespace std;

// �N���X�̒�`
class MyClass {
public:
  int myVal;	// �����o�ϐ�
  MyClass();	// �����̂Ȃ��R���X�g���N�^
  MyClass(int m);	// ���������R���X�g���N�^
  ~MyClass();	// �f�X�g���N�^
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

// �O���[�o���ϐ��Ƃ��Đ錾���ꂽ�|�C���^
MyClass *gPtr;

// �v���O�����̎��s�J�n�ʒu�ƂȂ�֐�
int main() {
  // �v���O�������N���������Ƃ�m�点��
  cout << "�v���O�������N�����܂����I\n";

  // ���I�I�u�W�F�N�g���쐬����
  gPtr = new MyClass(123);

  // ���I�I�u�W�F�N�g���g��
  cout << gPtr->myVal << "\n";

  // func()���Ăяo��
  func();

  // ���I�I�u�W�F�N�g��j������
  delete gPtr;

  // �v���O�������I�����邱�Ƃ�m�点��
  cout << "�v���O�������I�����܂��I\n";

  return 0;
}

// main()�֐�����Ăяo�����֐�
void func() {
  // ���[�J���ϐ��Ƃ��Đ錾���ꂽ�|�C���^
  MyClass *ptr;

  // �֐����Ăяo���ꂽ���Ƃ�m�点��
  cout << "func()���Ăяo����܂����I\n";

  for (int i = 1; i <= 3; i++) {
    // ���I�I�u�W�F�N�g���쐬����
    ptr = new MyClass(i);

    // ���I�I�u�W�F�N�g���g��
    cout << ptr->myVal << "\n";

    // ���I�I�u�W�F�N�g��j������
    delete ptr;
  }

  // �֐��𔲂��邱�Ƃ�m�点��
  cout << "func()�𔲂��܂��I\n";
}
