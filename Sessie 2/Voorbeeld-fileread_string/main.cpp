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


    std::string data;
    getline(in_stream, data);
    std::cout << data;

    while (!in_stream.eof()) {
        getline(in_stream, data);

//        std::cout << data << std::endl;
        std::cout << data;
    }
    in_stream.close();

    return 0;
}