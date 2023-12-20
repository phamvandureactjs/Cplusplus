#include "handleJson.hpp"
#include <string>
#include <fstream>
// #include <string.h>
using json = nlohmann::json;
using namespace std;
namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

HandleJson::HandleJson()
{   

}

void HandleJson::readInfoFromJsonFile(const char *fileName)
{
    ifstream fJson(fileName);
    stringstream buffer;
    buffer << fJson.rdbuf();
    
    auto jsonData = json::parse(buffer.str());
    std::vector<string> dataTeacher;
    std::vector<string> dataStaff;
    std::vector<string> dataStudent;
    for(auto &elem : jsonData["members"]["staff"]){
        for(auto &teacher : elem["teacher"]){
            std::string data = handleTeacherInfo(teacher);
            dataTeacher.push_back(data);
        }
        for(auto &staff : elem["other"]){
            std::string data = handleStaffInfo(staff);
            dataStaff.push_back(data);
        }
    }
    for(auto &student : jsonData["members"]["student"]){
        std::string data = handleStudentInfo(student);
        dataStudent.push_back(data);
    }
    setStaffInfo(dataStaff);
    setStudentInfo(dataStudent);
    setTeacherInfo(dataTeacher);

    cout << getTeacherInfo().size() << endl;
    cout << getStudentInfo().size() << endl;
    cout << getStaffInfo().size() << endl;
}


std::string HandleJson::handleStudentInfo(json studentInfoJson)
{
        vector<float> point = studentInfoJson["Score"];
        string pointArray = "";
        for(auto &p : point){
            pointArray += (patch::to_string(p) + " ");
        }
        string info = "";
        info += (studentInfoJson["name"].get<std::string>()
                + " " + 
                studentInfoJson["birthday"].get<std::string>() 
                + " " + 
                patch::to_string(studentInfoJson["ID code"]) 
                + " " + 
                patch::to_string(studentInfoJson["Grade"]) 
                + " " + 
                pointArray);
    
    return info;

}

string HandleJson::handleStaffInfo(json staffInfoJson)
{
    
        string info = "";
        info += (staffInfoJson["name"].get<std::string>()        
                + " " + 
                staffInfoJson["birthday"].get<std::string>()   
                + " " + 
                patch::to_string(staffInfoJson["ID code"])     
                + " " + 
                staffInfoJson["Department"].get<std::string>() 
                + " " +
                staffInfoJson["Joined Date"].get<std::string>() 
                + " " + 
                patch::to_string(staffInfoJson["Level"]));
    
        return info;
}

std::string HandleJson::handleTeacherInfo(json teacherInfoJson)
{
    
    string info = "";
    info += (teacherInfoJson["name"].get<std::string>() 
            + " " + 
            teacherInfoJson["birthday"].get<std::string>() 
            + " " + 
            patch::to_string(teacherInfoJson["ID code"])
            + " " + 
            teacherInfoJson["Department"].get<std::string>() 
            + " " + 
            teacherInfoJson["Joined Date"].get<std::string>()
            + " " +
            patch::to_string(teacherInfoJson["Level"])
            + " " + 
            teacherInfoJson["Main Subject"].get<std::string>());   
    return info;
}

void HandleJson::setStudentInfo(std::vector<string> _studentInfo)
{
    studentInfo = _studentInfo;
}

void HandleJson::setStaffInfo(std::vector<string> _staffInfo)
{
    staffInfo = _staffInfo;
}

void HandleJson::setTeacherInfo(std::vector<string> _teacherInfo)
{
    teacherInfo = _teacherInfo;
}

std::vector<string> HandleJson::getStudentInfo() const
{
    return studentInfo;
}

std::vector<string> HandleJson::getStaffInfo() const
{
    return staffInfo;
}

std::vector<string> HandleJson::getTeacherInfo() const
{
    return teacherInfo;
}

Teacher *HandleJson::createTeacherObject(json teacherInfoJson)
{
    Teacher *teacher = new Teacher();
    teacher->setName((char *)teacherInfoJson["name"].get<string>().c_str());
    teacher->setID(teacherInfoJson["ID code"]);
    teacher->setLevel(teacherInfoJson["Level"]);
}

Student *HandleJson::createStudentObject(json studentInfoJson)
{
    
}

Staff *HandleJson::createStaffObject(json staffInfoJson)
{
    
}

void HandleJson::writeInfoToJsonFile(Node *head)
{

}
