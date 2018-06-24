#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
#include <string>

/*
 * A class to read data from a file.
 */
class FileReader
{
public:
    FileReader(std::string fileName, char delimeter);

    // Function to fetch each line from file
    std::vector<std::string> getLineFromFile();
    // Function to find a word from a given line number
    std::vector<std::string> findWordAtLineNumber(const int& lineNumber);
    void printAll();
private:
    std::string fileName;
    char delimeter;
};

#endif // FILEREADER_H
