//
// Created by Maria on 4/6/2023.
//

#include "Service.h"

Service::Service() {
}


Service::Service(Repository &repository1) {
    this->repository = repository1;
}

void Service::add(string name, double medie) {
    Student student(name, medie);
    repository.add(student);
}

void Service::remove(string name, double medie) {
    Student student(name, medie);
    repository.remove(student);
}

void Service::update(string name, double medie, string newName, double newMedie) {
    Student student(name, medie);
    Student newStudent(newName, newMedie);
    repository.update(student, newStudent);
}

int Service::find(string name, double medie) {
    Student student(name, medie);
    repository.findStudent(student);
}

int Service::size() {
    return repository.getSize();
}

vector<Student> Service::getAll() {
    return repository.getAll();
}

Service::~Service() {}


