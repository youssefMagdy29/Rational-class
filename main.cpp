#include <iostream>
#include "Rational.h"

using namespace std;

int main() {
  Rational x(1, 3);
  Rational y(1, 2);
  Rational z(1, 6);
  Rational result = x.add(&y).add(&z);
  result.print();
}
