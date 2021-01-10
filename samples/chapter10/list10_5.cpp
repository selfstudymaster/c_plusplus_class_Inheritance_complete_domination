#include <iostream>
using namespace std;

// ���ʍ��W�̓_����舵���e���v���[�g�N���X�̒�`
template <class datatype> class TPoint {
public:
  datatype x;		// x���W
  datatype y;		// y���W
  void showData();	// �����o�ϐ��̒l��\������
  TPoint();		// �����̂Ȃ��R���X�g���N�^
  TPoint(datatype x, datatype y); // ���������R���X�g���N�^
};

// �e���v���[�g�N���X�̃����o�֐��̎���
template <class datatype> void TPoint<datatype>::showData() {
  cout << "x���W�F" << x << "\n";
  cout << "y���W�F" << y << "\n";
}

// �e���v���[�g�N���X�̈����̂Ȃ��R���X�g���N�^�̎���
template <class datatype> TPoint<datatype>::TPoint() {
  x = 0;
  y = 0;
}

// �e���v���[�g�N���X�̈��������R���X�g���N�^�̎���
template <class datatype> TPoint<datatype>::TPoint(datatype x, datatype y) {
  this->x = x;
  this->y = y;
}

// �N���X���g�����̃R�[�h
int main() {
  // int�^�p��TPoint�N���X�̃I�u�W�F�N�g���쐬����
  TPoint<int> obj1;

  // �����o�ϐ��ɒl��ݒ肷��
  obj1.x = 123;
  obj1.y = 456;

  // �����o�֐����Ăяo��
  obj1.showData();

  // double�^�p��TPoint�N���X�̃I�u�W�F�N�g���쐬����
  TPoint<double> obj2(1.23, 3.45);

  // �����o�֐����Ăяo��
  obj2.showData();

  return 0;
}
