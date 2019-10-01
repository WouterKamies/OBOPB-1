#include <iostream>
#include <fstream>

#define FILE "/home/edwin/code/cpp/INOOP/Les6/jabberwocky.txt"

int countCharactersInFile() {
    char ch;
    std::ifstream in_stream;

    int count = 0;

    in_stream.open(FILE);
    in_stream.get(ch);
    while (!in_stream.fail()) {
        count++;
        in_stream.get(ch);
    }
    in_stream.close();

    std::cout << count << " tekens in bestand" << std::endl;

    return count;
}

char getCharacterAtPosition(int number) {
    char ch;
    std::ifstream fileInput;

    fileInput.open(FILE);
    for (int i = 0; i < number; i++) {
        fileInput.get(ch);
    }
    fileInput.close();
    return ch;
}

int main() {
    int count;

    count = countCharactersInFile();

    for (int number = count; number > 0; number--) {
        std::cout << getCharacterAtPosition(number);
    }

    return 0;
}
