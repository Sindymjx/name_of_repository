#include"Student.h"
#include<cstring>
#include<iostream>
#include<iomanip>
using namespace std;
int Student::numStudents = 0;

Student::Student(const char *str)
{
    cout << "A student has been added" << endl;
    numGrades = 0;
    grades = new int[100];
    name = new char[strlen(str) + 1];
    for (int i = 0; i <= strlen(str); i++) {
        name[i] = str[i];
    }
    numStudents++;
}

Student::~Student()
{
    cout << name << " has been deleted" << endl;
    delete name;
    delete grades;
}

void Student::displayGrades() const {
    cout << "Here are the grades for " << name << endl;
    for ( int i = 0; i < numGrades; i++ ) {
        cout << setw(5) << grades[i];
    }
    cout << endl << endl;
}

Student& Student::addGrade(int grade)
{
    grades[numGrades] = grade;
    numGrades++;
}

int Student::getNumStudents()
{
    return Student::numStudents;
}
