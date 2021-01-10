#include <iostream>
using namespace std;

// �N���X�̒�`
class Point {
public:
  int x;		// x���W
  int y;		// y���W
  Point operator+(Point obj); // +���Z�q�̃I�[�o�[���[�h
  Point operator-(Point obj); // -���Z�q�̃I�[�o�[���[�h
};

// +���Z�q�̃I�[�o�[���[�h�̎���
Point Point::operator+(Point obj) {
  // ���Z���ʂƂȂ�I�u�W�F�N�g���쐬����
  Point ans;

  // �����o�ǂ��������Z����
  ans.x = this->x + obj.x;
  ans.y = this->y + obj.y;

  // ���Z���ʂ�Ԃ�
  return ans;
}

// -���Z�q�̃I�[�o�[���[�h�̎���
Point Point::operator-(Point obj) {
  // ���Z���ʂƂȂ�I�u�W�F�N�g���쐬����
  Point ans;

  // �����o�ǂ��������Z����
  ans.x = this->x - obj.x;
  ans.y = this->y - obj.y;

  // ���Z���ʂ�Ԃ�
  return ans;
}

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Point a, b, c;

  // �����o�ϐ���ݒ肷��
  a.x = 1;
  a.y = 2;
  b.x = 3;
  b.y = 4;

  // �I�u�W�F�N�g�����Z����
  c = a + b;

  // ���Z���ʂ�\������
  cout << "x���W�F" << c.x << "\n";
  cout << "y���W�F" << c.y << "\n";

  // �I�u�W�F�N�g�����Z����
  c = a - b;

  // ���Z���ʂ�\������
  cout << "x���W�F" << c.x << "\n";
  cout << "y���W�F" << c.y << "\n";

  return 0;
}
