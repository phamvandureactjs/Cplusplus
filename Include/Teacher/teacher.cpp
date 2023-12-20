#include "teacher.hpp"
#include <iostream>
using namespace std;


Teacher::Teacher() {
    setType(TypePeople::TEACHER);
}

void Teacher::printInfo(){
    Staff::printInfo();
    cout << "Class:" << Class << endl;
    cout << "Main Subject: " << mainSubject << endl;
}

int Teacher::getClass(){
    return Class;
}

void Teacher::setClass(int _Class){
    Class = _Class;
}

Subject Teacher::getSubject(){
    return mainSubject;
}

void Teacher::setSubject(Subject s){
    mainSubject = s;
}

void Teacher::typeInfo(){
    Staff::typeInfo();
    cout << "Type Class:";
    cin >> Class;
    mainSubject = ENGLISH;
}