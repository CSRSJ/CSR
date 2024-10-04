#include <iostream>
using namespace std;

class ExamForm {
public:
    int id;
    string name;
    int mobile_num;
    void form();
};

void ExamForm::form() {
    cout << "Enter student information:" << endl;
    cout << "ID: ";
    cin >> id;
    cout << "Name: ";
    cin >> name;
    cout << "Mobile Number: ";
    cin >> mobile_num;

    cout << "\nStudent Information:" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Mobile Number: " << mobile_num << endl;
}

int main() {
    ExamForm hello;
    hello.form();
    return 0;
}
