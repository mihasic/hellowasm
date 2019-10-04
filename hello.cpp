#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, const char **argv) {
    if (argc < 3) {
        cout << "Usage:" << endl << argv[0] << " [input] [output]" << endl;
        return 1;
    }
    ifstream input(argv[1]);
    ofstream output(argv[2]);

    string content;
    int i;
    for (i = 0; input.eof() != true; i++) {
        content += input.get();
    }
    i--;
    content.erase(content.end() - 1);

    cout << i << " characters read...\n";
    input.close();

    output << content;
    output.close();
    return 0;
}
