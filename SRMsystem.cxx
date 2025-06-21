#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() const {
        cout << "Roll No: " << roll << " | Name: " << name << " | Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n2. Display All\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            s.input();
            students.push_back(s);
            cout << "✅ Student added successfully.\n";
        } else if (choice == 2) {
            cout << "\n📋 All Students:\n";
            for (const auto& s : students)
                s.display();
        } else if (choice == 3) {
            cout << "👋 Exiting...\n";
        } else {
            cout << "⚠️ Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}
