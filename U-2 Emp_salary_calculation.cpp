#include <iostream>
using namespace std;

class employee {
    string name;
    float salary;
    static int count;

public:
    employee() {
        name = "unknown";
        salary = 0;
        count++;
    }

    ~employee() {
        cout << "\nDestructor called for employee: " << name << endl;
    }

    void input() {
        cout << "\nEnter employee name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nName: " << name << "\nSalary: " << salary << endl;
    }

    static void showcount() {
        cout << "\nTotal employees: " << count << endl;
    }

    employee highest(employee eq) {
        if (salary > eq.salary)
            return *this;
        else
            return eq;
    }
};

int employee::count = 0;

int main() {
    employee e1, e2, high;

    e1.input();
    e2.input();

    high = e1.highest(e2);

    cout << "\nHighest paid employee:";
    high.display();

    employee::showcount();
    return 0;
}
