#include <iostream>
#include <string>
#include <fstream>
#include <ranges>
#include <vector>
using namespace std;

struct dt {
    string name;
    int age;
};

int main() {
    fstream f("data.txt", ios::in | ios::out | ios::trunc);
    int n;
    cin >> n;
    cin.ignore(10000, '\n');
    vector<dt> v(n);
    for (int i = 0; i < n; i++) {
        getline(cin, v[i].name);
        cin >> v[i].age;
        cin.ignore(10000, '\n');
        f << v[i].name << ' ' << v[i].age << endl;
    }
    f.clear();
    f.seekg(0, ios::beg);
    vector<dt> v2;
    dt p;
    while (f >> p.name >> p.age) {
        v2.push_back(p);
    }
    int young = 0, old = 0;
    for (int i = 0; i < v2.size(); i++) {
        if (v2[i].age <= v2[young].age) {
            young = i;
        }
        if (v2[i].age >= v2[old].age) {
            old = i;
        }
    }
    fstream res("results.txt", ios::out);

    res << "Youngest: " << v2[young].name << " " << v2[young].age << endl;
    res << "Oldest: " << v2[old].name << " " << v2[old].age << endl;
}
