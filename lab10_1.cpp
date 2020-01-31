#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string x;

    cout << "Press Enter 3 times to reveal your future.";
    getline(cin,x);
    getline(cin,x);

    cin.get();
    srand(time(0));
    int g = rand()%9;

    if(g==0) x="A";
    else if(g==1) x="B+";
    else if(g==2) x="B";
    else if(g==3) x="C+";
    else if(g==4) x="C";
    else if(g==5) x="D+";
    else if(g==6) x="D";
    else if(g==7) x="F";
    else x="W";

    cout << "You will get " << x << " in this 206102.";

    return 0;
}