#include <iostream>
#include "Rational.h"

using namespace std;

int main() {
  Rational x(1, 3);
  Rational y(1, 2);
  Rational z(1, 6);
  Rational sum = x.add(&y).add(&z);
  Rational sub = x.sub(&y).sub(&z);
  Rational mul = x.mul(&y).mul(&z);
  sum.print();
  sub.print();
  mul.print();
}
