#include <iostream>
using namespace std;

// MyClass�N���X�̒�`
class MyClass {
private:
  int pri_data;
protected:
  int pro_data;
public:
  int pub_data;
  friend void show(MyClass *ptr); // �t�����h�֐�
  MyClass();			// �R���X�g���N�^
};

// �R���X�g���N�^�̎���
MyClass::MyClass() {
  pri_data = 123;
  pro_data = 456;
  pub_data = 789;
}

// �t�����h�֐��̎��̂̒�`
void show(MyClass *ptr) {
  // ���ׂẴ����o�𗘗p�ł���
  cout << ptr->pri_data << "\n";
  cout << ptr->pro_data << "\n";
  cout << ptr->pub_data << "\n";
}

// �ʏ�̊֐��̎��̂̒�`
void disp(MyClass *ptr) {
  // public:�ȃ����o�����𗘗p�ł���
  // cout << ptr->pri_data << "\n";
  // cout << ptr->pro_data << "\n";
  cout << ptr->pub_data << "\n";
}

// �N���X�Ɗ֐����g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  MyClass obj;

  // �t�����h�֐����Ăяo��
  cout << "�t�����h�֐��F\n";
  show(&obj);

  // �ʏ�̊֐����Ăяo��
  cout << "�ʏ�̊֐��F\n";
  disp(&obj);

  return 0;
}
