#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string path, to_file;
    cout << "Input path" << endl;
    cin >> path;
    ofstream file(path, fstream::app);
    if(!file.is_open()) {
        cout << "Can not open file!";
        return 0;
    }
    cout << "Input append tp the file" << endl;
    cin >> to_file;
    file << to_file;
    file.close();
    return 0;
}
