#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    int roll_no;
    string name;
    string department;
    float marks;

public:
    void input() {
        cout << "Enter Roll No: "; cin >> roll_no;
        cout << "Enter Name: "; cin.ignore(); getline(cin, name);
        cout << "Enter Department: "; getline(cin, department);
        cout << "Enter Marks: "; cin >> marks;
    }

    void display() {
        cout << "Roll No: " << roll_no << ", Name: " << name << ", Department: " << department << ", Marks: " << marks << endl;
    }

    int getRoll() {
        return roll_no;
    }

    void update() {
        cout << "Update Name: "; cin.ignore(); getline(cin, name);
        cout << "Update Department: "; getline(cin, department);
        cout << "Update Marks: "; cin >> marks;
    }
};

void addStudent() {
    Student s;
    s.input();
    ofstream fout("students.dat", ios::binary | ios::app);
    fout.write((char*)&s, sizeof(s));
    fout.close();
}

void displayAll() {
    Student s;
    ifstream fin("students.dat", ios::binary);
    while (fin.read((char*)&s, sizeof(s))) {
        s.display();
    }
    fin.close();
}

void searchStudent(int roll) {
    Student s;
    bool found = false;
    ifstream fin("students.dat", ios::binary);
    while (fin.read((char*)&s, sizeof(s))) {
        if (s.getRoll() == roll) {
            s.display();
            found = true;
            break;
        }
    }
    if (!found) cout << "Student not found.\n";
    fin.close();
}

void updateStudent(int roll) {
    Student s;
    fstream file("students.dat", ios::binary | ios::in | ios::out);
    while (file.read((char*)&s, sizeof(s))) {
        if (s.getRoll() == roll) {
            cout << "Current Record:\n"; s.display();
            cout << "Enter New Details:\n";
            s.update();
            file.seekp(-sizeof(s), ios::cur);
            file.write((char*)&s, sizeof(s));
            break;
        }
    }
    file.close();
}

void deleteStudent(int roll) {
    Student s;
    ifstream fin("students.dat", ios::binary);
    ofstream fout("temp.dat", ios::binary);

    while (fin.read((char*)&s, sizeof(s))) {
        if (s.getRoll() != roll) {
            fout.write((char*)&s, sizeof(s));
        }
    }

    fin.close();
    fout.close();
    remove("students.dat");
    rename("temp.dat", "students.dat");
}

void menu() {
    cout << "\n------ Student Management System ------\n";
    cout << "1. Add Student\n";
    cout << "2. Display All Students\n";
    cout << "3. Search Student\n";
    cout << "4. Update Student\n";
    cout << "5. Delete Student\n";
    cout << "6. Exit\n";
}

int main() {
    int choice, roll;
    do {
        menu();
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: cout << "Enter Roll: "; cin >> roll; searchStudent(roll); break;
            case 4: cout << "Enter Roll: "; cin >> roll; updateStudent(roll); break;
            case 5: cout << "Enter Roll: "; cin >> roll; deleteStudent(roll); break;
        }
    } while (choice != 6);

    return 0;
}

