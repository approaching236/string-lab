#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "strdrv.h"
 
using namespace std;
  
ofstream csis;
   
int main() {
  csis.open("csis.dat");
  test1();
  csis.close();
}

void test1() {
  system("cls");
  cout << "1. Testing: String default ctor." << endl << endl;
  csis << "1. Testing: String default ctor." << endl << endl;
  String s1;
  s1.setName("s1");
  s1.print();
  wait();
}
