#include <iostream>
#include <fstream>

#define FILE "/home/edwin/code/cpp/INOOP/Les6/jabberwocky.txt"
#define OUTFILE "/home/edwin/code/cpp/INOOP/Les6/output.txt"

int main() {
    std::ifstream in_stream;

    in_stream.open(FILE);
    if (!in_stream) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(1);
    }

    std::ofstream out_stream;
    out_stream.open(OUTFILE);
    if (!out_stream) {
        std::cout << "Probleem bij openen output file" << std::endl;
        exit(1);
    }

    bool skip;

    char ch;
    in_stream >> std::noskipws;
    in_stream >> ch;
    while (!in_stream.eof()) {
        in_stream >> ch;

        skip = !skip;

        if (!skip) {
            out_stream << ch;
        }
    }
    in_stream.close();

    out_stream.close();

    return 0;
}