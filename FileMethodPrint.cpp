// FileMethodPrint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ClassA.h"

class Test {
public:
  void Do()   {     Trace;   }
};

void testfunc1()
{
  Trace;
}

void testfunc2()
{
  Trace;
}

int main()
{
  testfunc1();
  testfunc2();

  Test t;
  t.Do();

  ClassA a;
  a.Print();

  return 0; 
}

