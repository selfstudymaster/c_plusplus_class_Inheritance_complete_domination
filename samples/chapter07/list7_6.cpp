#include <iostream>
#include <cstring>
using namespace std;

// �N���X�̒�`
class Employee {
public:
  static int objNum;		// �I�u�W�F�N�g���i�ÓI�����o�ϐ��j
  static const char *companyName;	// ��Ж��i�ÓI�����o�ϐ��j
  int number;			// �Ј��ԍ�
  char name[80];		// ����
  int salary;			// ���^
  void showData();		// �����o�֐�
  Employee();			// �����̂Ȃ��R���X�g���N�^
  Employee(const char *na, int sa);	// ���������R���X�g���N�^
};

// �ÓI�����o�ϐ��̎��̂ƂȂ�O���[�o���ϐ�
int Employee::objNum = 0;
const char *Employee::companyName = "�Z�p�]�_��";

// �����̂Ȃ��R���X�g���N�^�̎���
Employee::Employee() {
  // �I�u�W�F�N�g�����J�E���g�A�b�v����
  objNum++;
  number = objNum;
  strcpy(name, "���ݒ�");
  salary = 150000;
}

// ���������R���X�g���N�^�̎���
Employee::Employee(const char *na, int sa) {
  // �I�u�W�F�N�g�����J�E���g�A�b�v����
  objNum++;
  number = objNum;
  strcpy(name, na);
  salary = sa;
}

// �����o�֐��̎���
void Employee::showData() {
  cout << "��Ж��F" << companyName << "\n";
  cout << "�Ј��ԍ��F" << number << "\n";
  cout << "�����F" << name << "\n";
  cout << "���^�F" << salary << "\n";
}

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Employee tanaka("�c����Y", 200000);
  Employee sato("�������Y", 250000);
  Employee someone;

  // �����o�ϐ��̒l��\������
  tanaka.showData();
  sato.showData();
  someone.showData();
  cout << "���݂̎Ј����F" << Employee::objNum << "\n";

  return 0;
}
