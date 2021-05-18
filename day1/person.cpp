#include "person.hpp"

person::person(const person& per) {
    name = per.getName();
    surname = per.getSurname();
    nationality = per.getNationality();
    DNI = per.getDNI();
    birthDate = per.getBirthDate();
}

person& person::operator=(const person& per) {
    if (this != &per) {
        name = per.getName();
        surname = per.getSurname();
        nationality = per.getNationality();
        DNI = per.getDNI();
        birthDate = per.getBirthDate();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const person& per) {
    os << "Displaying information of the person:\n"
       << "    Name:" << per.getName() << "\n"
       << "    Surname:" << per.getSurname() << "\n"
       << "    Nationality:" << per.getNationality() << "\n"
       << "    DNI:" << per.getDNI() << "\n"
       << "    Birth date:" << per.getBirthDate() << "\n";
    return os;
}
