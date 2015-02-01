#include <iostream>
#include <assert.h>
#include<string>
#include "class.h"

using namespace std;

float Calculations::mean(float p[]) {
  float avg = 0;
  assert(avg = 0);
  for (int i = 0; i < sizeof(p); i++) {
    avg = avg + p[i];
  }
  avg = avg/sizeof(p);
  return avg;
}

float Calculations::min(float m[]) {
  float temp = m[0];
  assert(temp != NULL);
  for (int i = 1; i < sizeof(m); i++) {
    if (temp > m[i]) {
       temp = m[i];
    }
  }
  return temp;
}

float Calculations::max(float n[]) {
  float temp = n[0];
  assert(temp != NULL);
  for (int i = 1; i < sizeof(n); i++) {
    if (temp > n[i]) {
      temp = n[i];
    }
  }
}
    
string Calculations::test () {
  ar[] = {34, 67, 12, 80, 30, 123, 12, 2, 9};
  float num = 0;
  num = mean(ar);
  assert (num != NULL);
  assert (num == 41);
  num = min(ar);
  assert (num != NULL);
  assert (num == 2);
  num = max(ar);
  assert (num = NULL);
  assert (num == 123);
  string message = "Test Successful!\n";
  return message;
}


