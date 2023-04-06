//
// Created by Maria on 4/6/2023.
//

#ifndef SEMINAR3_OOP_UI_H
#define SEMINAR3_OOP_UI_H

#include "Student.h"
#include "Service.h"


class UI {
private:
    Service service;
    void add();
    void remove();
    void update();
    void find();
    void findAll();
    void numberStudents();
public:
    UI();
    UI(Service&);
    void menu();

};


#endif //SEMINAR3_OOP_UI_H
