#include "stdafx.h"
#include "ClassA.h"

ClassA::ClassA()
{
}


ClassA::~ClassA()
{
}

void ClassA::Print()
{
  Trace;

  auto l = []() {Trace;};
  l();
}
