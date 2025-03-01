#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

// Structure to store student details
struct student {
    string name;
    string Fn_name;
    double marks;
};

// Function to take student details as input
void inputStudent(student students[], int a) {
    for (int i = 0; i < a; i++) {
        cout << "Input details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Father's name: ";
        cin>> students[i].Fn_name;
        cout << "Marks:\n ";
        cin >> students[i].marks;
        cout << endl;
    }
}

// Function to compare two students based on marks
bool compare(student a, student b) {
    return a.marks > b.marks; // Sort in descending order
}

// Function to sort students by marks
void sortStudents(student students[], int a) {
    sort(students, students + a, compare);
}

// Function to display the merit list
void displayMeritList(student students[], int a) {
    cout << "*********** Merit List ***************\n";
    cout << left << setw(10) << "Rank" << setw(15) << "Name" << setw(10) << "Father's Name" << setw(15) << "Marks" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < a; i++) {
        cout << left << setw(10) << i + 1 << setw(15) << students[i].name << setw(15) << students[i].Fn_name << setw(15) << students[i].marks << endl;
    }
}

int main() {
    const int g = 10;
    student students[g];

    // Taking input
    inputStudent(students, g);

    // Sorting students by marks
    sortStudents(students, g);

    // Displaying merit list
    displayMeritList(students, g);

    return 0;
}

