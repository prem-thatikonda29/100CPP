#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
    srand(time(0));

    int totalStudents, totalQuestions;

    cout << "Enter the total number of students (N): ";
    cin >> totalStudents;
    cout << "Enter the total number of questions (Q): ";
    cin >> totalQuestions;

    int studentsPerGroup = 5;
    int numGroups = totalStudents / studentsPerGroup;

    int* students = new int[totalStudents];
    int* questions = new int[totalQuestions];

    for (int i = 0; i < totalStudents; ++i) {
        students[i] = i + 1;
    }

    srand(static_cast<unsigned int>(time(nullptr)));
    random_shuffle(students, students + totalStudents);

    for (int i = 0; i < totalQuestions; ++i) {
        questions[i] = i + 1;
    }

    cout << "\nGroup distribution:" << endl;

    for (int group = 0; group < numGroups; ++group) {
        cout << "Group " << group + 1 << ":" << endl;
        for (int i = 0; i < studentsPerGroup; ++i) {
            cout << "  Student " << students[group * studentsPerGroup + i] << ": ";
            
            // Ensure at least 2 questions per student in the group
            for (int j = 0; j < 2; ++j) {
                int randomIndex = rand() % totalQuestions;
                cout << "Question " << questions[randomIndex] << " ";
                swap(questions[randomIndex], questions[totalQuestions - 1]);
                totalQuestions--;
            }
            cout << endl;
        }
        cout << endl;
    }

    cout << "Remaining Students:" << endl;
    for (int i = numGroups * studentsPerGroup; i < totalStudents; ++i) {
        cout << "  Student " << students[i] << ": ";
        for (int j = 0; j < totalQuestions / (totalStudents - numGroups * studentsPerGroup); ++j) {
            int randomIndex = rand() % totalQuestions;
            cout << "Question " << questions[randomIndex] << " ";
            swap(questions[randomIndex], questions[totalQuestions - 1]);
            totalQuestions--;
        }
        cout << endl;
    }

    // Deallocate memory
    delete[] students;
    delete[] questions;

    return 0;
}
