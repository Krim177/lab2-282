#include <iostream>
#include <string>
using namespace std;

int main() 
{ 
  string name;
  string month;
  int day;
  int year;
  int age;
  int calcMonth;
  int totalDays;
  int calcWeeks;
  cout << "Enter your name please\n";
  cin >> name;
  cout << "Hello! " << name << endl;
  cout << "Please enter the day you were born\n";
  cin >> day;
  cout << "Please enter the month you were born\n";
  cin >> month;
  cout << "Please enter the year you were born\n"; 
  cin >> year;
  age = 2021 - year;
  cout << "Hello, " << name << ". You are " << age << " years old." << endl;
  cout << "You were born on " << month << "/" << day << "/" << year << endl;
  cout << "Please enter the month number of your birthday\n";
  cin >> calcMonth;
  totalDays = calcMonth * 30 + day;
  calcMonth = totalDays / 30;
  calcWeeks = (totalDays % 30) / 7;
  cout << calcMonth << " months and ";
  cout << calcWeeks << "weeks until your birthday! (" << totalDays << ")\n";

}