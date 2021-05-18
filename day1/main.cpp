#include "person.hpp"

int main() {
    person pablete("Pablo", "Nicolas", "Spanish", 12345678, 2799);
    person impostor = pablete;
    person impostor2(pablete);
    std::cout << pablete << impostor << impostor2;
}
