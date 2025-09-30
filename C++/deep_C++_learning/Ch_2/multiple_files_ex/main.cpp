/*
! What exactly happens
1. Preprocessor: #include "math.h" literally pastes
    the header text into main.cpp and math.cpp
    - so both know the menu: int add(int, int);
2. Compile:
    - main.cpp → knows add exists (from header)
    - math.cpp → contains the real recipe (definition)
3. Link:
    - main.o says "I need add."
    - math.o says "I have add."
    - Linker matches them.

→ If you put the recipe in the menu (define in the header),
    then every customer table gets a full kitchen, and
    the linker complains: "multiple kitchens" → multiple
    definition error.
*/

#include "math.h" // waiter copies menu here

#include <iostream>
int main(){
    std::cout << add(2,3) << "\n"; // calls into kitchen (math.cpp)
}