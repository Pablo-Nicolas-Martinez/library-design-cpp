#ifndef _PERSON_HEADERS_
#define _PERSON_HEADERS_

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
        // Special members
        person(const person& per);
        person(std::string name, std::string surname, std::string nationality, int DNI, int birthDate) : name(name), surname(surname), nationality(nationality), DNI(DNI), birthDate(birthDate) {};
        
        // Access members
        inline std::string getName() const { return name; }
        inline std::string getSurname() const { return surname; }
        inline std::string getNationality() const { return nationality; }
        inline int getDNI() const { return DNI; }
        inline int getBirthDate() const { return birthDate; }

        // Operator overflow
        person& operator=(const person& per);
};

std::ostream& operator<<(std::ostream& os, const person& per);

#endif // _PERSON_HEADERS_

