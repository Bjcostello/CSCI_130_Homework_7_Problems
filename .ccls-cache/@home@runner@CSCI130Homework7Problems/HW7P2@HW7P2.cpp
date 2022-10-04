#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

// Prototype functions
int time();

int main() {
  int seconds;
  cin >> seconds;
  time(int seconds);

  return 0;
}

/*
Write a function named time() that has an integer parameter named seconds and
three integer reference parameters named hours, mins, and secs. The function is
to convert the passed number of seconds into an equivalent number of hours,
minutes, and seconds. Using the reference parameters, the function should alter
the arguments in the calling function.
*/

int time(int seconds) {
  int hours = seconds / 3600;
  int mins = seconds / 60;
  int secs = seconds;

  cout << endl << hours << ":" << mins << ":" << secs << endl;
}