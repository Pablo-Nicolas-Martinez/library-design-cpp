#include <iostream>
#include <string>

class person {
    private:
        std::string name;
        std::string surname;
        std::string nationality;
        int DNI;
        int birthDate;

    public:
        // Special functions
        person(std::string tmpName, std::string tmpSurname, std::string tmpNationality, int tmpDNI, int tmpBirthDate) : name(tmpName), surname(tmpSurname), nationality(tmpNationality), DNI(tmpDNI), birthDate(tmpBirthDate) {};
        person(const person& per);

        // Access functions
        inline std::string getName() const { return name; }
        inline std::string getSurname() const { return surname; }
        inline std::string getNationality() const { return nationality; }
        inline int getDNI() const { return DNI; }
        inline int getBirthDate() const { return birthDate; }

        person& operator=(const person& per);
};

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

int main() {
    person pablo("Pablo", "Nicolas", "Spain", 122345, 2799);
    person impostor(pablo);
    person impostor2 = pablo;

    std::cout << pablo << std::endl << impostor << std::endl << impostor2;
}
