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
    const string desiredPosition = "Менеджер";

    Worker workers[] = { Worker("Андрей Смит", "Менеджер", 2016, 6000),
                         Worker("Давид  Донтес", "Developer", 2018, 4500),
                         Worker("Макс Дорк", "Менеджер", 2015, 5500),
                         Worker("Наташа Шабаш", "Secretary", 2017, 4000),
                         Worker("Давид Тронг", "Менеджер", 2014, 7000) };

    // Список работников, стаж работы которых превосходит заданное число лет
    cout << "Работники с более чем " << minExperience << " многолетний опыт работы:" << endl;
    for (const auto& worker : workers) {
        if (currentYear - worker.getHireYear() > minExperience) {
            cout << worker.getName() << endl;
        }
    }
    cout << endl;

    // Список работников, зарплата которых превосходит заданную
    cout << "Работники с заработной платой, превышающей " << minSalary << ":" << endl;
    for (const auto& worker : workers) {
        if (worker.getSalary() > minSalary) {
            cout << worker.getName() << endl;
        }
    }
    cout << std::endl;

    // Список работников, занимающих заданную должность
    cout << "Работники с занимаемой должностью '" << desiredPosition << "':" << endl;
    for (const auto& worker : workers) {
        if (worker.getPosition() == desiredPosition) {
            cout << worker.getName() << endl;
        }
    }
    cout << endl;

    return 0;
}