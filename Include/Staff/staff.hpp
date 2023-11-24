#ifndef _STAFF_H
#define _STAFF_H

#include "../People/people.hpp"

#include <iostream>
using namespace std;

class Staff : public People{
    protected:
        int departmentID;
        Date joinDate;
        int level;

    public:
        Staff();
        virtual void printInfo(){
            People::printInfo();
            cout << "Department ID: " << departmentID << endl;
            cout << "Join Date: " << joinDate.day << "/" << joinDate.month << "/" << joinDate.year << endl;
            cout << "Level: " << level << endl;
        }
        // void writeToFile(const char *fileName);
        int getDepartmentID();
        void setDepartmentID(int _departmentID);
        Date getJoinDate();
        void setJoinDate(Date _joinDate);
        int getLevel();
        void setLevel(int _level);
        void typeInfo();

};

#endif