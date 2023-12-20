#include "staff.hpp"
#include <iostream>
#include <fstream>

using namespace std;

Staff::Staff(){
    setType(TypePeople::STAFF);
}
// void Staff::writeToFile(const char *fileName){
//     ofstream outfile;
//     People::writeToFile(fileName);
//     outfile.open(fileName,ios::app);
//     outfile << "Department ID: " << departmentID << endl;
//     outfile << "Join Date: " << joinDate.day << "/" << joinDate.month << "/" << joinDate.year << endl;
//     outfile << "Level: " << level << endl;
// }
int Staff::getDepartmentID(){
    return departmentID;
}
void Staff::setDepartmentID(int _departmentID){
    departmentID = _departmentID;
}
Date Staff::getJoinDate(){
    return joinDate;
}
void Staff::setJoinDate(Date _joinDate){
    joinDate = _joinDate;
}
int Staff::getLevel(){
    return level;
}
void Staff::setLevel(int _level){
    level = _level;
}
void Staff::typeInfo(){
    People::typeInfo();
    cout << "Type Department ID:";
    cin >> departmentID;
    cout << "Type day join:";
    cin >> joinDate.day;
    cout << "Type month join:";
    cin >> joinDate.month;
    cout << "Type year join:";
    cin >> joinDate.year;
    cout << "Type level:";
    cin >> level;
}