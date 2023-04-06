//
// Created by Maria on 4/6/2023.
//

#include "Repository.h"
#include "fstream"
#include <algorithm>

Repository::Repository() {

}

Repository::Repository(const char *fileName) {
    this->fileName = fileName;
    ifstream f(fileName);
    while (!f.eof()) {
        string name;
        double medie;
        f >> name >> medie;
        Student student(name, medie);
        elems.push_back(student);
    }
    f.close();
}

void Repository::saveToFile() {
    ofstream f(fileName);
    for (Student student: elems) { // pentru fiecare student din elems fa urmatoarea actiune
        f << student.toString() << endl; // scrie in fisier
    }
    f.close();
}

void Repository::add(Student &student) {
    elems.push_back(student);
    saveToFile();
}

void Repository::remove(Student &student) {
    vector<Student>::iterator it;
    it = std::find(elems.begin(), elems.end(), student);
    if (it != elems.end()) {
        elems.erase(it);
        saveToFile();
    }
}

int Repository::findStudent(Student &student) {
    vector<Student>::iterator it;
    it = std::find(elems.begin(), elems.end(), student);
    if (it != elems.end()) {
        return (it - elems.begin());
    }
}

void Repository::update(Student &oldStudent, Student &newStudent) {
    vector<Student>::iterator it;
    int poz = findStudent(oldStudent); // apleam functia de mai sus / puteam sa repetam acelasi proces ca la findStudent
    if (poz >= 0) {
        elems[poz] = newStudent;
        saveToFile();
    }
}

vector<Student> Repository::getAll() {
    return elems;
}

int Repository::getSize() {
    return elems.size();
}

Repository::~Repository() {}