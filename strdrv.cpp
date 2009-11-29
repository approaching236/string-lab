#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "strdrv.h"
 
using namespace std;
  
ofstream csis;
   
int main() {
  csis.open("csis.dat");
  test1();
  test2();
  test3();
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

void test2() {
    system("cls");
    cout << "2. Testing: String one arg (char *) ctor." << endl << endl;
    csis << "2. Testing: String one arg (char *) ctor." << endl << endl;
    String s2("ABC");
    s2.setName("s2");
    s2.print();
    wait();
}

void test3() {
    system("cls");
    cout << "3. Testing: String one arg (char) ctor." << endl << endl;
    csis << "3. Testing: String one arg (char) ctor." << endl << endl;
    String s3('Z');
    s3.setName("s3");
    s3.print();
    wait();
}

void test4() {
    system("cls");
    cout << "4. Testing: String one arg (int) ctor." << endl << endl;
    csis << "4. Testing: String one arg (int) ctor." << endl << endl;
    String s4(10);
    s4.setName("s4");
    s4.print();
    wait();
}

void wait() {
    char buf;
    cout << endl << "Press any key to continue." << endl;
    csis << endl << endl;
    cin.get(buf);
}
