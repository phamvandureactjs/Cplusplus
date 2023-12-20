#ifndef _HANDLEJSON_H_
#define _HANDLEJSON_H_


#include "nlohmann/json.hpp"
#include "../Node/node.hpp"
#include "../Teacher/teacher.hpp"
#include "../Staff/staff.hpp"
#include "../Student/student.hpp"
#include <vector>
#include <string>

using json = nlohmann::json;
class HandleJson{
    public:
        HandleJson();
        void readInfoFromJsonFile(const char *fileName);
        std::string handleStudentInfo(json studentInfoJson);
        std::string handleStaffInfo(json staffInfoJson);
        std::string handleTeacherInfo(json teacherInfoJson);
        void setStudentInfo(std::vector<string> _studentInfo);
        void setStaffInfo(std::vector<string> _staffInfo);
        void setTeacherInfo(std::vector<string> _teacherInfo);
        std::vector<string> getStudentInfo() const;
        std::vector<string> getStaffInfo() const;
        std::vector<string> getTeacherInfo() const;

        Teacher* createTeacherObject(json teacherInfoJson);
        Student* createStudentObject(json studentInfoJson);
        Staff* createStaffObject(json staffInfoJson);
        void writeInfoToJsonFile(Node *head);
    private:
        std::vector<string> studentInfo;
        std::vector<string> staffInfo;
        std::vector<string> teacherInfo;

};

#endif