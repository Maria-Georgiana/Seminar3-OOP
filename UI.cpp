//
// Created by Maria on 4/6/2023.
//

#include "UI.h"
#include <iostream>

using namespace std;

UI::UI() {}

UI::UI(Service &service1) {
    this->service = service1;
}

void UI::add() {
    cout << "Insert student name: ";
    string name;
    cin >> name;
    cout << "Insert medie: ";
    double medie;
    cin >> medie;
    service.add(name, medie);
}

void UI::findAll() {
    service.getAll();
}

void UI::menu() {
    cout << "    Menu:   " << endl;
    cout << "1) Print students: " << endl;
    cout << "2) Add student: " << endl;
    cout << "3) Delete student: " << endl;
    cout << "4) Update student: " << endl;
    cout << "0) Exit " << endl;
    int option;
    cout << "Enter option: ";
    cin >> option;
    while (option != 0) {
        if (option == 2)
            add();
        else if (option == 1)
            findAll();
    }
}
