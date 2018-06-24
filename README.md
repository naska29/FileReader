# FileReader

Reads from file line by line and looks after delimeter.
After each delimeter it splits the line.

## Functions

### Fetch each line from file
```c++
std::vector<std::string> getLineFromFile();
```


### Find a word from a given line number
```c++
std::vector<std::string> findWordAtLineNumber(const int& lineNumber);
```
