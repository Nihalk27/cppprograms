#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define a struct for Student
struct Student {
    int rollNo;
    string name;
    float marks;
};

// Function to add a student
void addStudent(vector<Student>& students) {
    Student s;
    cout << "Enter Roll No: ";
    cin >> s.rollNo;
    cout << "Enter Name: ";
    cin >> ws; // to consume leftover newline
    getline(cin, s.name);
    cout << "Enter Marks: ";
    cin >> s.marks;

    students.push_back(s);
    cout << "Student added!\n";
}

// Function to display all students
void displayStudents(const vector<Student>& students) {
    cout << "\n--- Student List ---\n";
    for (const auto& s : students) {
        cout << "Roll No: " << s.rollNo
             << ", Name: " << s.name
             << ", Marks: " << s.marks << endl;
    }
}

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n1. Add Student\n2. Display Students\n0. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                displayStudents(students);
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
