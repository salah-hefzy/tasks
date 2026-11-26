#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct student {
    string name;
    int id;
    float grade;
};

int main() {
    vector<student> v;
    student s;
    char ch = 'y';

    while (ch == 'y') {
        getline(cin, s.name);
        cin >> s.id >> s.grade;
        v.push_back(s);
        cin >> ch;
        cin.ignore(10000, '\n');
    }

    ofstream file("students.txt");
    for (int i = 0; i < v.size(); i++) {
        file << v[i].name << ", " << v[i].id << ", " << v[i].grade << " $\n";
    }
}