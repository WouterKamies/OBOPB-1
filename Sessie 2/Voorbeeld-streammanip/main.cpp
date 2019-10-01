#include <iostream>
#include <fstream>

#define FILE "/home/edwin/code/cpp/INOOP/Les6/jabberwocky.txt"

int main() {
    char ch;
    std::ifstream in_stream;

    in_stream.open(FILE);
    if (!in_stream) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(1);
    }


    std::cout << std::showbase << std::hex;
    in_stream >> std::noskipws;

//    in_stream.get(ch);
    in_stream >> ch;
    while (!in_stream.eof()) {
//        in_stream.get(ch);
        in_stream >> ch;

//        std::cout.put(ch);
        std::cout << std::uppercase << (int)ch;
    }
    in_stream.close();

    return 0;
}
