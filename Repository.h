//
// Created by Maria on 4/6/2023.
//

#ifndef SEMINAR3_OOP_REPOSITORY_H
#define SEMINAR3_OOP_REPOSITORY_H

#include <vector>
#include "Student.h"

class Repository {
private:
    vector<Student> elems;
    const char *fileName;
    void saveToFile();
public:
    Repository();
    Repository(const char *);
    void add(Student &);
    void remove(Student &);
    void update(Student &, Student &);
    vector<Student> getAll();
    int getSize();
    int findStudent(Student &);
    ~Repository();
};


#endif //SEMINAR3_OOP_REPOSITORY_H
