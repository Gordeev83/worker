#include <iostream>
#include <string>

using namespace std;

class Worker {
private:
    std::string name;
    std::string position;
    int hireYear;
    double salary;

public:
    explicit Worker(const std::string& name, const std::string& position, int hireYear, double salary)
        : name(name), position(position), hireYear(hireYear), salary(salary) {}

    const std::string& getName() const {
        return name;
    }

    const std::string& getPosition() const {
        return position;
    }

    int getHireYear() const {
        return hireYear;
    }

    double getSalary() const {
        return salary;
    }
};

int main()
{
    setlocale(LC_ALL, "");
    const int currentYear = 2022;
    const int minExperience = 5;
    const double minSalary = 5000;
    const string desiredPosition = "��������";

    Worker workers[] = { Worker("������ ����", "��������", 2016, 6000),
                         Worker("�����  ������", "Developer", 2018, 4500),
                         Worker("���� ����", "��������", 2015, 5500),
                         Worker("������ �����", "Secretary", 2017, 4000),
                         Worker("����� �����", "��������", 2014, 7000) };

    // ������ ����������, ���� ������ ������� ����������� �������� ����� ���
    cout << "��������� � ����� ��� " << minExperience << " ����������� ���� ������:" << endl;
    for (const auto& worker : workers) {
        if (currentYear - worker.getHireYear() > minExperience) {
            cout << worker.getName() << endl;
        }
    }
    cout << endl;

    // ������ ����������, �������� ������� ����������� ��������
    cout << "��������� � ���������� ������, ����������� " << minSalary << ":" << endl;
    for (const auto& worker : workers) {
        if (worker.getSalary() > minSalary) {
            cout << worker.getName() << endl;
        }
    }
    cout << std::endl;

    // ������ ����������, ���������� �������� ���������
    cout << "��������� � ���������� ���������� '" << desiredPosition << "':" << endl;
    for (const auto& worker : workers) {
        if (worker.getPosition() == desiredPosition) {
            cout << worker.getName() << endl;
        }
    }
    cout << endl;

    return 0;
}