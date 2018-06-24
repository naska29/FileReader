#include <iostream>
#include "filereader.h"

int main()
{
    // Creating an object of CSVWriter
    FileReader reader("C:\\Users\\Naser\\Documents\\Praktikum2Pad2_Malchyrek\\bookings2.txt", '|');

//    for (size_t i = 0; i < reader.getLineFromFile().size(); ++i) {
//        std::cout << reader.findWordAtLineNumber(i).at(0) << std::endl;
//    }

    reader.printAll();

    std::cout << reader.findWordOrNumber(1);
    return 0;


}
