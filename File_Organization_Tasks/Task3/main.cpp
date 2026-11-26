#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main() {
    fstream f("welcome.txt", ios::in | ios::out | ios::trunc);
    string s = "Hello Everybody";
    f << s;
    f.seekp(11, ios::beg);
    string h = "one ";
    f << h;
    f.close();
}
