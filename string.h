#ifndef _STRING_H
#define _STRING_H

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <iomanip>

using namespace std;

class String {
  private:
    char *name;
    char *mine;
    int length;
  public:
    //constructors and destructors
    String();
    String(char*);
    String(char);
    ~String();
    //member functions
    void setName(char *n);
    void print();
};
#endif

