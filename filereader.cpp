#include "filereader.h"

/*
* Parses through file line by line and pushes every line in the vector
*/
FileReader::FileReader(std::string fileName, char delimeter) : fileName(fileName), delimeter(delimeter){}

std::vector<std::string> FileReader::getLineFromFile() {
    std::ifstream file(fileName);
    std::vector<std::string> vLine;

    std::string line = "";

    // Iterate through each line and push it to vector
    while (getline(file, line))
    {
        std::stringstream ss(line);
        vLine.push_back(ss.str());
    }
    // Close the File
    file.close();

    return vLine;
}

std::vector<std::string> FileReader::findWordAtLineNumber(const int& lineNumber) {
    std::string word;
    std::vector<std::string> vec;

    // Get line at given line number
    std::stringstream getLineFromFileAtLineNumber(getLineFromFile().at(lineNumber));

    // Push every line at given line number in vector
    while(getline(getLineFromFileAtLineNumber, word, delimeter)){
        std::stringstream pushWordsIntoVector(word);
        vec.push_back(pushWordsIntoVector.str());
    }

    return vec;
}

void FileReader::printAll() {
    for (size_t i = 0; i < getLineFromFile().size(); ++i) {
        for (size_t j = 0; j < findWordAtLineNumber(i).size(); ++j) {
            std::cout << findWordAtLineNumber(i).at(j) << " ";
        }
        std::cout << std::endl;
    }
}
