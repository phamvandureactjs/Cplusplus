#include <iostream>
#include <fstream>


#include "../Include/Node/node.hpp"
#include "../Include/People/people.hpp"
#include "../Include/Staff/staff.hpp"
#include "../Include/Student/student.hpp"
#include "../Include/Teacher/teacher.hpp"
#include "../Include/JSON/handleJson.hpp"
#include "nlohmann/json.hpp"
using json = nlohmann::json;
using namespace std;


int main(){
    const char *fileName = "text.txt";
    for(int i = 0; i < 2; i++){
       int type;
       cout << "\nType type of person:";
       cin >> type;
       if (type == TypePeople::STUDENT) {
            People* st = new Student();
            st->typeInfo();
            Node::addElement(st);
        }
        else if (type ==TypePeople::STAFF) {
            People* sta = new Staff();
            sta->typeInfo();
            Node::addElement(sta);
        }
        else if(type == TypePeople::TEACHER){
            People* t = new Teacher();
            t->typeInfo();
            Node::addElement(t);
        }
    }
    Node::printInfo();
//     // ofstream outfile;
//     // outfile.open(fileName);
//     // outfile << "\t\t\t\t\t\t\t\t\t\t\t\t\tLIST INFO OF PEOPLE" << endl;
//     // Node::writeToFile(fileName);
//     // ifstream fJson("output.json");
//     // stringstream buffer;
//     // buffer << fJson.rdbuf();
//     // auto json = nlohmann::json::parse(buffer.str());
//     // auto& memberJson = json["members"];
    
//     //     for(auto staff : memberJson["staff"]){
//     //         cout << staff["teacher"] << ":" << endl;
//     //         for(auto teacher : staff["teacher"]){

//     //             string name = teacher["name"];
//     //             cout << "Teacher name is: " << teacher["name"].get<std::string>()<< endl;
//     //             cout << "Teacher name is: " << teacher["birthday"] << endl;
//     //         }
//     //         cout << staff["other"] << ":" << endl;
//     //         for(auto other : staff["other"]){
//     //             cout << "Other name is: " << other["name"] << endl;
//     //             cout << "Other name is: " << other["birthday"] << endl;
//     //         }
//     //     }
//     //     cout << memberJson["student"] << ":" << endl;
//     //     for(auto student : memberJson["student"]){
//     //         cout << "Student name is: " << student["name"] << endl;
//     //         cout << "Student name is: " << student["birthday"] << endl;
//     //     }
//     // HandleJson a;
//     // a.readInfoFromJsonFile("output.json");

    

//     return 0;
}