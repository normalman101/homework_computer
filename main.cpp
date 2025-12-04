#include <iostream>
#include <string>
#include <vector>
using std::string, std::vector;
using std::cout, std::endl;
// Создать класс для хранения данных о студенте: ФИО, факультет, группа, оценки (кто поставил, когда поставил,
// по какому предмету, что поставил).

#pragma region Классы
class Human {
public:
    Human(const string &name,
          const string &surname,
          const string &patronymic)

        : m_name(name),
          m_surname(surname),
          m_patronymic(patronymic) {
    }

    Human()

        : m_name("empty"),
          m_surname("empty"),
          m_patronymic("empty") {
    }

    void setName(const string &name) {
        m_name = name;
    }

    string getName() const {
        return m_name;
    }

    void setSurname(const string &surname) {
        m_surname = surname;
    }

    string getSurname() const {
        return m_surname;
    }

    void setPatronymic(const string &patronymic) {
        m_patronymic = patronymic;
    }

    string getPatronymic() const {
        return m_patronymic;
    }

protected:
    string m_name;
    string m_surname;
    string m_patronymic;
};

class Teacher : public Human {
public:
    Teacher(const string &name,
            const string &surname,
            const string &patronymic,
            const string &discipline)

        : Human{name, surname, patronymic},
          m_discipline{discipline} {
    }

    Teacher()
        : m_discipline{"empty"} {
    }

    void setDiscipline(const string &discipline) {
        m_discipline = discipline;
    }

    string getDiscipline() const {
        return m_discipline;
    }

private:
    string m_discipline;
};

class Date {
public:
    Date(const string &date) {
        m_day = stoi(date.substr(0, 2));
        m_month = stoi(date.substr(3, 2));
        m_year = stoi(date.substr(6, 4));
    }

    Date()
        : m_day{0},
          m_month{0},
          m_year{0} {
    }

    void setDay(const int &day) {
        m_day = day;
    }

    int getDay() const {
        return m_day;
    }

    void setMonth(const int &month) {
        m_month = month;
    }

    int getMonth() const {
        return m_month;
    }

    void setYear(const int &year) {
        m_year = year;
    }

    int getYear() const {
        return m_year;
    }

private:
    int m_day;
    int m_month;
    int m_year;
};

class Mark {
public:
    Mark(const Teacher &teacher,
         const string &date,
         const string &discipline,
         const unsigned int &mark)

        : m_teacher{teacher},
          m_date{date},
          m_discipline{discipline},
          m_mark{mark} {
    }

    Mark()
        : m_discipline{"empty"},
          m_mark{0} {
    }

    void setTeacher(const Teacher &teacher) {
        m_teacher = teacher;
    }

    Teacher getTeacher() const {
        return m_teacher;
    }

    void setDate(const Date &date) {
        m_date = date;
    }

    Date getDate() const {
        return m_date;
    }

    void setDiscipline(const string &discipline) {
        m_discipline = discipline;
    }

    string getDiscipline() const {
        return m_discipline;
    }

    void setMark(const unsigned int &mark) {
        m_mark = mark;
    }

    unsigned int getMark() const {
        return m_mark;
    }

private:
    Teacher m_teacher;
    Date m_date;
    string m_discipline;
    unsigned int m_mark;
};

class Student : public Human {
public:
    Student(const string &name,
            const string &surname,
            const string &patronymic,
            const string &faculty,
            const string &group,
            const vector<Mark> &marks)

        : Human{name, surname, patronymic},
          m_faculty{faculty},
          m_group{group},
          m_marks{marks} {
    }

    Student()
        : m_faculty{"empty"},
          m_group{"empty"} {
    }

    void setFaculty(const string& faculty) {
        m_faculty = faculty;
    }
    string getFaculty() const {
        return m_faculty;
    }

    void setGroup(const string& group) {
        m_group = group;
    }
    string getGroup() const {
        return m_group;
    }

    void setMarks(const vector<Mark>& marks) {
        m_marks = marks;
    }
    vector<Mark> getMarks() const {
        return m_marks;
    }

private:
    string m_faculty;
    string m_group;
    std::vector<Mark> m_marks;
};
#pragma endregion


int main() {
    return 0;
}
