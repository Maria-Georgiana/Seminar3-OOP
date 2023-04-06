//
// Created by Maria on 4/6/2023.
//

#ifndef SEMINAR3_OOP_SERVICE_H
#define SEMINAR3_OOP_SERVICE_H


#include "Repository.h"

class Service {
private:
    Repository repository;
public:
    Service();
    Service(Repository &);
    void add(string, double);
    void remove(string, double);
    void update(string, double, string, double );
    int find(string, double);
    int size();
    vector<Student> getAll();
    ~Service();
};


#endif //SEMINAR3_OOP_SERVICE_H
