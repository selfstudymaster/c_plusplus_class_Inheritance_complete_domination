#include <iostream>
#include "Employee.h"
using namespace std;

// �N���X���g�����̃R�[�h
int main() {
  // �N���X���ŐÓI�����o�ϐ����g��
  cout << Employee::companyName << "\n";

  // �I�u�W�F�N�g���쐬����
  Employee tanaka;

  // �I�u�W�F�N�g���ŐÓI�����o�ϐ����g��
  cout << tanaka.companyName << "\n";

  return 0;
}
