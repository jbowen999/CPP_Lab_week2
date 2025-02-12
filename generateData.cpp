/*
Generate a random number of  rows (between 30 and 125)

Each row has 20 random integer values between -50 and 50.

When you write the row to a file, sum the data (last value in the row is the sum of the values in that row)(So that each row actually has 21 values).  

*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main () {
  srand(time(0));
  int rowCount = rand() % (125 - 30 + 1) + 30; 
  ofstream myfile;
  myfile.open ("julian.txt");
  int sum = 0;
int n =  0;
  while (n < rowCount){
  n++;
  for (int i = 1; i <= 20; i++){
    int n = rand() % 101 - 50;
    myfile << n << " ";
    sum += n;
  }
  myfile << sum << endl;
  }
  myfile.close();
  return 0;
}