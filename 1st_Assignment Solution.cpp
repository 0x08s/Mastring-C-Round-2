#include <iostream>
using namespace std;

int main() {
    // Constant
    const int TOTAL_CLASSES = 10;

    // Variables (data types: string, int, long long)
    string name = "Sameer";
    string studentID = "BS123456789";
    long long id = 123456789; // numeric part of ID

    // Output statements
    cout << "Name: " << name << endl;
    cout << "Student ID: " << studentID << endl;

    // Digit extraction using arithmetic operators
    int d1 = id / 100000000;          // 1st digit
    int d3 = (id / 1000000) % 10;     // 3rd digit
    int d5 = (id / 10000) % 10;       // 5th digit
    int d7 = (id / 100) % 10;         // 7th digit
    int d9 = id % 10;                 // 9th digit

    cout << "\nExtracted Digits: " << d1 << " " << d3 << " " << d5 << " " << d7 << " " << d9 << endl;

    // Counters for summary
    int cleared = 0, warning = 0, detained = 0;

    cout << "\nAttendance Report:\n";

    // Iterative statement (loop for 5 courses)
    for (int i = 1; i <= 5; i++) {
        int attended, percentage;
        string course, status;

        // Conditional mapping of courses (instead of array)
        if (i == 1) {
            course = "Mathematics";
            attended = d1;
        } else if (i == 2) {
            course = "Physics";
            attended = d3;
        } else if (i == 3) {
            course = "English";
            attended = d5;
        } else if (i == 4) {
            course = "Programming";
            attended = d7;
        } else {
            course = "Islamic Studies";
            attended = d9;
        }

        // Arithmetic operator for percentage
        percentage = (attended * 100) / TOTAL_CLASSES;

        // Conditional statements for status
        if (percentage >= 75) {
            status = "CLEARED";
            cleared++;
        } else if (percentage >= 50) {
            status = "WARNING";
            warning++;
        } else {
            status = "DETAINED";
            detained++;
        }

        // Output statement
        cout << course << ": Classes Attended = " << attended
             << ", Attendance = " << percentage << "%"
             << ", Status = " << status << endl;
    }

    // Summary
    cout << "\nSummary:\n";
    cout << "CLEARED = " << cleared << endl;
    cout << "WARNING = " << warning << endl;
    cout << "DETAINED = " << detained << endl;

    return 0;
}
