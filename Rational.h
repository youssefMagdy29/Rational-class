#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <cmath>

using namespace std;

class Rational {
 public:
  Rational add(Rational* that);
  Rational(int n, int d);
  void print();
 private:
  int gcd(int a, int b);
  int abs(int a);
  int num;
  int den;
};

Rational::Rational(int n, int d) {
  int g = gcd(abs(n), abs(d));
  num = n / g;
  den = abs(d) / g;
  if (d < 0)
    num = -num;
}

Rational  Rational::add(Rational* that) {
  return Rational(num * that->den + that->num * den, den * that->den);
}

void Rational::print() {
  cout << num << "/" << den << endl;
}

int Rational::gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int Rational::abs(int a) { return (a < 0 ? -a : a); }
#endif