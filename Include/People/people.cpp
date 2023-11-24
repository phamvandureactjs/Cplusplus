
#include <iostream>
#include <fstream>
#include "people.hpp"
using namespace std;

int People::member = 0;
People::People(){
    member++;
}
char *People::getName(){
    return name;
}
void People::setName(char *_name){
    name = _name;
}
Date People::getBirtday(){
    return birthday;
}
void People::setBirtday( Date _birthday){
    birthday = _birthday;
}
int People::getId(){
    return ID;
}
void People::setID(int _ID){
    ID = _ID;
}
static int getPeople(){
    return member;
}
void People::setType(TypePeople _type){
    tp = _type;
}
TypePeople People::getType(){
    return tp;
}
void People::typeInfo(){
    cout << "Type Name:";
    name = new char[100];
    cin.ignore();
    cin.getline(name, 100);
    cout << "Type DOB:";
    cout << "Type day:";
    cin >> birthday.day;
    cout << "Type month:";
    cin >> birthday.month;
    cout << "Type year:";
    cin >> birthday.year;
    cout << "Type ID:";
    cin >> ID;
}