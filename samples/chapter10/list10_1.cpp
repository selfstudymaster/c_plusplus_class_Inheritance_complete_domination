#include <iostream>
#include <cstring>
using namespace std;

// �N���X�̒�`
class Employee {
public:
  int number;	// �Ј��ԍ�
  char *name;	// �����i�|�C���^�j
  int salary;	// ���^
  Employee();	// �R���X�g���N�^
  ~Employee();	// �f�X�g���N�^
  Employee &operator=(Employee &obj); // ������Z�q�̃I�[�o�[���[�h
};

// �R���X�g���N�^�̎���
Employee::Employee() {
  // name�̂��߂̗̈�𓮓I�Ɋm�ۂ���
  name = new char [80];
}

// �f�X�g���N�^�̎���
Employee::~Employee() {
  // name�̂��߂̗̈�𓮓I�ɉ������
  delete [] name;
}

// ������Z�q�̃I�[�o�[���[�h�̎���
Employee &Employee::operator=(Employee &obj) {
  // �|�C���^�łȂ������o�ϐ��̒l�́A���̂܂ܑ������
  this->number = obj.number;
  this->salary = obj.salary;

  // �|�C���^���w���������̈���R�s�[����
  strcpy(this->name, obj.name);

  // ������ꂽ�I�u�W�F�N�g���̂�Ԃ�
  return *this;
}

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Employee tanaka, someone;

  // tanaka�̃����o�ϐ�������ݒ肷��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;

  // �I�u�W�F�N�g��������
  someone = tanaka;

  // someone��name��\������
  cout << "someone�F" << someone.name << "\n";

  // someone��name��ύX����
  strcpy(someone.name, "�Z�p���Y");
  cout << "someone�F" << someone.name << "\n";

  // tanaka��name�͕ς��Ȃ�
  cout << "tanaka�F" << tanaka.name << "\n";

  return 0;
}
