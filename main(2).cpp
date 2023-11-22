#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

class question1
{
public:
  void myMethod ()
  {
    int num, i = 1, sumOdd = 0, sumEven = 0;

      cout << "Enter a positive number: ";
      cin >> num;

    if (num <= 0)
      {
	cout << "Please enter a positive number.\n";
      }

    while (i <= num)
      {
	if (i % 2 == 0)
	  {
	    sumEven += i;
	  }
	else
	  {
	    sumOdd += i;
	  }
	i++;
      }

    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;

  }
};

class question2
{
public:
  void myMethod ()
  {
    int start, end;

      cout << "Enter starting number: ";
      cin >> start;

      cout << "Enter ending number: ";
      cin >> end;

    if (start % 2 != 0)
      {
	start++;
      }

    while (start <= end)
      {
	cout << start << " ";
	start += 2;
      }
  }
};

class question3
{
public:
  void myMethod ()
  {
    double popB, popM, rateB, rateM;


      cout << "Enter the population of Brampton: ";
      cin >> popB;

      cout << "Enter the growth rate of Brampton (in percentage): ";
      cin >> rateB;

      cout << "Enter the population of Mississauga: ";
      cin >> popM;

      cout << "Enter the growth rate of Mississauga (in percentage): ";
      cin >> rateM;

      rateB /= 100;
      rateM /= 100;

    int years = 0;
    while (popB < popM)
      {
	popB = popB + (rateB * popB);
	popM = popM + (rateM * popM);
	years++;
      }

    cout << "After " << years << " years, the population of Brampton will be greater than or equal to the population of Mississauga.\n";
    cout << "Population of Brampton: " << popB << endl;
    cout << "Population of Mississauga: " << popM << endl;
  }
};


int main ()
{
  question3 myObj;
  myObj.myMethod ();
}
