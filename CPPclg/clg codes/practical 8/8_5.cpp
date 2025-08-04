#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class DirectoryManager {
    map<string, vector<string>> directory;
public:
    void addFolder(const string& folderName) {
        directory[folderName];
    }

    void addFileToFolder(const string& folderName, const string& fileName) {
        directory[folderName].push_back(fileName);
    }

    void displayDirectory() {
        for (auto it = directory.begin(); it != directory.end(); ++it) {
            cout << it->first << ":\n";
            vector<string> files = it->second;
            sort(files.begin(), files.end());
            for (auto fit = files.begin(); fit != files.end(); ++fit) {
                cout << "  " << *fit << '\n';
            }
        }
    }
};

int main() {
    DirectoryManager dm;
    dm.addFolder("ProjectA");
    dm.addFolder("ProjectB");
    dm.addFileToFolder("ProjectA", "file1.cpp");
    dm.addFileToFolder("ProjectA", "file2.cpp");
    dm.addFileToFolder("ProjectB", "main.cpp");
    dm.displayDirectory();
    cout<<"Patel Mantra\n24DCS076";
    return 0;
}
