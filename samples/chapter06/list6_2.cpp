#include <iostream>
using namespace std;

// ��{�N���X�̒�`
class MyClass {
public:
  void func1(int a);
  virtual void func2(const char *s);
};

// ��{�N���X�̃����o�֐��̎���
void MyClass::func1(int a) {
  cout << a << "\n";
}

void MyClass::func2(const char *s) {
  cout << s << "\n";
}

// �h���N���X�̒�`
class NewClass : public MyClass {
public:
  void func2(const char *s);
};

// �h���N���X�̃����o�֐��̎���
void NewClass::func2(const char *s) {
  cout << "������f�[�^�F";
  MyClass::func2(s);
}

// �N���X���g�����̃R�[�h
int main() {
  // �h���N���X�̃I�u�W�F�N�g���g��
  NewClass obj;

  // �p�����������o�֐����Ăяo��
  obj.func1(123);

  // �I�[�o�[���C�h���������o�֐����Ăяo��
  obj.func2("�Z�p�]�_��");

  // ��{�N���X�̃I�u�W�F�N�g���쐬����
  MyClass mc;

  // ���z�֐����Ăяo��
  mc.func2("��{�N���X�̉��z�֐�");

  return 0;
}
