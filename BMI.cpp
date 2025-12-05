#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main(){
  float height, weight, bmi;
  cout << "Body Mass Index (BMI)\n" << endl;
  cout << "\tEnter height (m): ";
  cin >> height;
  cout << "\tEnter weight (kg): ";
  cin >> weight;
  cout << "\n";
  cout << "\tRESULTS:\n";
  //Calculation of BMI
  cout << fixed << setprecision (2);
  bmi = weight / pow(height, 2);
  cout << "\t Your BMI is " << bmi << "." << endl;
  //Corresponding Message
  if (bmi < 20)
  cout << "\t You have lower than normal weight.";
  else if ( bmi <= 25)
  cout << "\t You have normal weight.";
  else if ( bmi <= 30)
  cout << "\t You are overweight.";
  else if ( bmi <= 40)
  cout << "\t You are obese.";
  else if (40 < bmi)
  cout << "\t You are extremely obese.";
  cout << "\n";
  return 0;
}
