#include <iostream>
using namespace std;
class A (
int x;
public:
void input() (
cin >> x;
friend void maxNum (A a, class B b);
class B {
int y:
public:
void input () {
cin >> y:
friend void maxNum (Aa, Bb);
};
void maxNum (Aa, Bb) {
if (a.x > b.y)
  cout << a.x << is greater":
else
cout << b.y <<<<< " is greater";
}
int main() {
A a;
Bb:
cout << "Enter two numbers: ";
a.input();
b.input();
maxNum(a, b);
return 0;
