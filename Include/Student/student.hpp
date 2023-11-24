#ifndef _STUDENT_H_
#define _STUDENT_H_

#include "../People/people.hpp"
class Student : public People{
private:
    int grade;
    int no_proj;
    float *score;
public:
    Student();
    void printInfo();
    // void writeToFile(const char *fileName);
    int getGrade();
    void setGrade(int _grade);
    int getNoProj();
    void setNoProj(int _no_proj);
    float * getScore();
    void setScore(float*_score);
    void typeInfo();
};


#endif