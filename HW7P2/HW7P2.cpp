#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

// Prototype functions
int time();

int main() {
  int a,b,c,d;
  cout << "enter a number of seconds: \n";
  cin >> a>>b>>c>>d;
  int time(a, b, c, d);

  return 0;
}

/*
Write a function named time() that has an integer parameter named seconds and
three integer reference parameters named hours, mins, and secs. The function is
to convert the passed number of seconds into an equivalent number of hours,
minutes, and seconds. Using the reference parameters, the function should alter
the arguments in the calling function.
*/

void time(int seconds, int& hours, int& mins, int& secs) {
  cout << "calculating\n";
  cout<<"Seconds: "<<seconds<<endl
    <<"hours: "<<hours<<endl
    <<"mins: "<<mins<<endl
    <<"secs: "<<secs<<endl;
  hours = seconds / 3600;
  mins = seconds / 60;
  secs = seconds;

  cout<<"Seconds: "<<seconds<<endl
    <<"hours: "<<hours<<endl
    <<"mins: "<<mins<<endl
    <<"secs: "<<secs<<endl;

  cout << endl << hours << ":" << mins << ":" << secs << endl;
}