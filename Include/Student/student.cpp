#include "student.hpp"
#include <iostream>
#include <fstream>

using namespace std;

Student::Student(){
    setType(TypePeople::STUDENT);
}
void Student::printInfo(){
    People::printInfo();
    cout << "Grade :" << grade << endl;
    cout << "Num of project: " << no_proj << endl;
    cout << "Score of project is:";
    for(int i = 0; i < no_proj;i++){
        cout << score[i] << " ";
    }
    cout << endl;
}
// void Student::writeToFile(const char *fileName){
//     People::writeToFile(fileName);
//     ofstream outfile;
//     outfile.open(fileName,ios::app);
//     outfile << "Grade :" << grade << endl;
//     outfile << "Num of project: " << no_proj << endl;
//     outfile << "Score of project is:";
//     for(int i = 0; i < no_proj;i++){
//         outfile << score[i] << " ";
//     }
//     outfile << endl;
// }
int Student::getGrade(){
    return grade;
}
void Student::setGrade(int _grade){
    grade = _grade;
}
int Student::getNoProj(){
    return no_proj;
}
void Student::setNoProj(int _no_proj){
    no_proj = _no_proj;
}
float * Student::getScore(){
    return score;
}
void Student::setScore(float*_score){
    score = _score;
}
void Student::typeInfo(){
    People::typeInfo();
    cout << "Type grade:";
    cin >> grade;
    cout << "Type num of project:";
    cin >> no_proj;
    cout << "Type score of project:";
    score = new float[no_proj];
    for(int i = 0; i < no_proj; i++){
        cin >> score[i];
    }
}