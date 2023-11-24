#ifndef _TEACHER_H_
#define _TEACHER_H_

#include "../Staff/staff.hpp"
class Teacher : public Staff{
    private:
        int Class;
        enum Subject{
            MATHS,
            PHYS,
            ENGLISH
        };
        Subject mainSubject;
    public:
        Teacher() ;
        void printInfo();
        int getClass();
        void setClass(int _Class);
        Subject getSubject();
        void setSubject(Subject s);
        void typeInfo();
};

#endif