//
// Created by Maria on 4/6/2023.
//

#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() {
    this->name = "";
    this->medie = 0;
}

Student::Student(string newName, double newMedie) {
    this->name = newName;
    this->medie = newMedie;
}

Student::Student(const Student &student) {
    this->name = student.name;
    this->medie = student.medie;
}

string Student::getName() {
    return this->name;
}

double Student::getMedie() {
    return this->medie;
}

void Student::setName(string newName) {
    this->name = newName;
}

void Student::setMedie(double newMedie) {
    this->medie = newMedie;
}

Student &Student::operator=(const Student &student) {
    if (this != &student) {
        this->name = student.name;
        this->medie = student.medie;
    }
}

bool Student::operator==(const Student &student) const {
    return (this->name == student.name && this->medie == student.medie);
}

bool Student::operator<(const Student &student) const{
    return (this->medie < student.medie);
}

ostream& operator<<(ostream& os, const Student& student) {
    os << student.name << " " << student.name;
}

Student::~Student() {}

string Student::toString() {
    return this->name + " " + std::to_string(medie);
}



