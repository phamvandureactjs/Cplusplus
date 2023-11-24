#include <iostream>
#include <fstream>


#include "../Include/Node/node.hpp"
#include "../Include/People/people.hpp"
#include "../Include/Staff/staff.hpp"
#include "../Include/Student/student.hpp"
#include "../Include/Teacher/teacher.hpp"
using namespace std;


int main(){
    const char *fileName = "text.txt";
    for(int i = 0; i < 2; i++){
       int type;
       cout << "\nType type of person:";
       cin >> type;
       if (type == People::TypePeople::STUDENT) {
            Student* st = new Student();
            st->typeInfo();
            Node::addElement(st);
        }
        else if (type == People::TypePeople::STAFF) {
            Staff* sta = new Staff();
            sta->typeInfo();
            Node::addElement(sta);
        }
        else if(type == People::TypePeople::TEACHER){
            Teacher* t = new Teacher();
            t->typeInfo();
            Node::addElement(t);
        }
    }
    Node::printInfo();
    // ofstream outfile;
    // outfile.open(fileName);
    // outfile << "\t\t\t\t\t\t\t\t\t\t\t\t\tLIST INFO OF PEOPLE" << endl;
    // Node::writeToFile(fileName);
    return 0;
}