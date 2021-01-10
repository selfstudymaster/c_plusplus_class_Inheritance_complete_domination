#include <iostream>
#include <cmath>
using namespace std;

// �N���X�̒�`
class Point {
public:
  int x;		// x���W
  int y;		// y���W
  bool operator==(Point obj); // ==���Z�q�̃I�[�o�[���[�h
  bool operator>(Point obj); // >���Z�q�̃I�[�o�[���[�h
};

// ==���Z�q�̃I�[�o�[���[�h�̎���
bool Point::operator==(Point obj) {
  if ((this->x == obj.x) && (this->y == obj.y)) {
    // �Ή����郁���o�����������true��Ԃ�
    return true;
  }
  else {
    // �����łȂ����false��Ԃ�
    return false;
  }
}

// >���Z�q�̃I�[�o�[���[�h�̎���
bool Point::operator>(Point obj) {
  // �x�N�g���̒��������߂�
  double v1, v2;
  v1 = sqrt(this->x * this->x + this->y * this->y);
  v2 = sqrt(obj.x * obj.x + obj.y * obj.y);
  if (v1 > v2) {
    // �x�N�g���̒������傫�����true��Ԃ�
    return true;
  }
  else {
    // �����łȂ����false��Ԃ�
    return false;
  }
}

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Point a, b;

  // �����o�ϐ���ݒ肷��
  a.x = 1;
  a.y = 2;
  b.x = 3;
  b.y = 4;

  // ���������ǂ������f����
  if (a == b) {
    cout << "a��b�͓������I\n";
  }
  else {
    cout << "a��b�͓������Ȃ��I\n";
  }
  // �傫�����ǂ������f����
  if (a > b) {
    cout << "a��b���傫���I\n";
  }
  else {
    cout << "a��b���傫���Ȃ��I\n";
  }

  return 0;
}
