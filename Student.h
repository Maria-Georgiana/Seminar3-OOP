//
// Created by Maria on 4/6/2023.
//

#ifndef SEMINAR3_OOP_STUDENT_H
#define SEMINAR3_OOP_STUDENT_H
#include <string>

using namespace std;

class Student {
private:
    string name;
    double medie;
public:
    Student();
    Student(string, double);
    Student(const Student &);
    string getName();
    double getMedie();
    void setName(string);
    void setMedie(double);
    Student& operator=(const Student&);
    bool operator==(const Student&) const;
    bool operator<(const Student&) const;
    friend ostream& operator<<(ostream& os, const Student&);
    ~Student();
    string toString();
};


#endif //SEMINAR3_OOP_STUDENT_H
