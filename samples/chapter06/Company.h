// Employee�N���X�̒�`
class Employee {
public:
  int number;			// �Ј��ԍ�
  char name[80];		// ����
  int salary;			// ���^
  virtual void showData();	// �����o�ϐ��̒l��\������
  Employee();			// �����̂Ȃ��R���X�g���N�^
  Employee(int nu, const char *na, int sa); // ���������R���X�g���N�^
};

// Director�N���X�̒�`
class Director : public Employee {
public:
  int stock;			// �����ۗL��
  void showData();		// �����o�ϐ��̒l��\������
  Director();			// �����̂Ȃ��R���X�g���N�^
  Director(int nu, const char *na, int sa, int st); // ���������R���X�g���N�^
};

// Manager�N���X�̒�`
class Manager : public Employee {
public:
  int travelAllowance;		// �o����
  void showData();		// �����o�ϐ��̒l��\������
  Manager();			// �����̂Ȃ��R���X�g���N�^
  Manager(int nu, const char *na, int sa, int tr); // ���������R���X�g���N�^
};

// Salesman�N���X�̒�`
class Salesman : public Employee {
public:
  int sales;			// ����
  void showData();		// �����o�ϐ��̒l��\������
  Salesman();			// �����̂Ȃ��R���X�g���N�^
  Salesman(int nu, const char *na, int sa, int ss); // ���������R���X�g���N�^
};
