#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main()
{
    int x, i;

    ofstream out("grades.txt");
    for (i = 0; i < 5; i++)
    {
        cout << "Enter grade: ";
        cin >> x;
        out << x << endl;
    }
    out.close();

    ifstream in("grades.txt");
    if (in.fail())
    {
        cout << "Unable to open the file";
        return 0;
    }
    while (in >> x)
    {
        cout << x << endl;
    }
    in.close();

    int d;
    cout << "Enter grade to delete: ";
    cin >> d;

    ifstream in2("grades.txt");
    ofstream temp("temp.txt");
    while (in2 >> x)
    {
        if (x != d)
            temp << x << endl;
    }
    in2.close();
    temp.close();

    remove("grades.txt");
    rename("temp.txt", "grades.txt");
    cout << "Deleted successfully" << endl;

    return 0;
}
