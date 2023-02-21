#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Student
{
    std::string name;
    double grade;
};

std::vector<Student> generateClassroom() {
    std::cout << "How many students are there in the class? ";
    int numStudents {};
    std::cin >> numStudents;
    std::vector<Student> students (numStudents);

    for (Student &student : students) {
        std::cout << "Enter student name: ";
        std::cin >> student.name;
        std::cout << "Enter student grade: ";
        std::cin >> student.grade;
    }
    return students;
}

bool compareStudents(const Student& a, const Student& b) {
    return (a.grade > b.grade);
}

void printClassroom(std::vector<Student>& students) {
    for (Student &student : students) {
        std::cout << student.name << " got a grade of " << student.grade << std::endl;
    }
    return;
}

int main() {
    std::vector<Student> students {generateClassroom()};
    std::sort(students.begin(), students.end(), compareStudents);
    printClassroom(students);
    return 0;
}