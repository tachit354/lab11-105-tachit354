#include<iostream>
#include<string>
#include<cstdlib>
using  namespace std;

int main(){
    srand(time(0));
    int x;
    string a,b,c,y;
    cout << "Press Enter 3 times to reveal your future.\n";
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    x = rand()%8;
     if(x == 0) y = "A";
     else if(x == 1) y = "B+";
     else if(x == 2) y = "B";
     else if(x == 3) y = "C+";
     else if(x == 4) y = "C";
     else if(x == 5) y = "D+";
     else if(x == 6) y = "D";
     else if(x == 7) y = "F";
     

    cout << "You will get " << y << " in this 261102.";
    return 0;
}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
