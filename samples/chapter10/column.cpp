#include <iostream>
#include <string>
using namespace std;

int main() {
  // ��������쐬����
  std::string s1("Apple");
  std::string s2("Orange");
  std::string s3;

  // �������������
  s3 = s2;

  // ��������r����
  if (s3 > s1) {
    cout << s3 << "��" << s1 << "���傫���I\n";
  }

  return 0;
}
