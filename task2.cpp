#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main() {
    fstream in("fruit.txt");
    string s1 , s2 , s3 ;
    in >> s1 >> s2 >> s3;
    ofstream pr ("fruit.txt" , ios::app);
    pr << "\nFresh Fruits\n" ;
}
