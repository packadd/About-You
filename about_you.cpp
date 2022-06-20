// About You
// By Packadd
// Made in C++
// Made in 20 June 2022

#include <iostream>

using namespace std;

int main() {
  // Input
  string name;
  int age;
  string country;
  string favorite_thing_to_do;
  string favorite_ship;
  string favorite_movie;
  cout << "Enter your name: " << endl;
  cin >> name;
  cout << "Enter your age: " << endl;
  cin >> age;
  cout << "Enter your country: " << endl;
  cin >> country;
  cout << "Enter your favorite thing to do: " << endl;
  cin >> favorite_thing_to_do;
  cout << "Enter your favorite ship: " << endl;
  cin >> favorite_ship;
  cout << "Enter your favorite movie: " << endl;
  cin >> favorite_movie;

  // Results
  cout << "About you..." << endl;
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Country: " << country << endl;
  cout << "Favorite thing to do: " << favorite_thing_to_do << endl;
  cout << "Favorite ship: " << favorite_ship << endl;
  cout << "Favorite movie: " << favorite_movie << endl;

  return 0;
}
