// p155 List 6-3
// Employeeクラスの定義
class Employee {
    public:
        int number;
        char name[80];
        int salary;
        virtual void showData();
        Employee();
        Employee(int nu, const char *na, int sa);
};

// Directorクラスの定義 (Employeeクラスを継承)
class Director : public Employee {
    public:
        int stock;
        void showData();
        Director();
        Director(int nu, const char *na, int sa, int st);
};

// Managerクラスの定義 (Employeeクラスを継承)
class Manager : public Employee {
    public:
        int travelAllowance;
        void showData();
        Manager();
        Manager(int nu, const char *na, int sa, int tr);
};

// Salesmanクラスの定義 (Employeeクラスを継承)
class Salesman : public Employee {
    public:
        int sales;
        void showData();
        Salesman();
        Salesman(int nu, const char *na, int sa, int ss);
};