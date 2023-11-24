#ifndef _PEOPLE_H_
#define _PEOPLE_H_

#include <iostream>
using namespace std;

class People{
protected:
    struct Date{
        unsigned int day;
        unsigned int month;
        unsigned int year;
    };
    char *name;
    struct Date birthday;
    int ID;
    static int member;
public:
    typedef enum _TypePeople{
        STUDENT,
        STAFF,
        TEACHER
    } TypePeople;
    TypePeople tp;
    People();
    virtual void printInfo(){
        cout << "Name: " << name << endl;
        cout << "DOB:" << birthday.day << "/" << birthday.month << "/" << birthday.year << endl;
        cout << "ID:" << ID << endl;
    }
    // virtual void writeToFile(const char* fileName){
    //     std::ofstream outfile;
    //     outfile.open(fileName, ios::app);
    //     outfile << "Name: " << name << endl;
    //     outfile << "DOB:" << birthday.day << "/" << birthday.month << "/" << birthday.year << endl;
    //     outfile << "ID:" << ID << endl;
    // }
    char *getName();
    void setName(char *_name);
    struct Date getBirtday();
    void setBirtday(Date _birthday);
    int getId();
    void setID(int _ID);
    static int getPeople();
    void setType(TypePeople _type);
    TypePeople getType();
    void typeInfo();
};
#endif