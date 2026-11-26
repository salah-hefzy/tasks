#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
    fstream in("fruit.txt");
    string s1 , s2 , s3 ;
    in >> s1 >> s2 >> s3;
    in.clear();
    in << "\nFresh Fruits\n" ;
}
