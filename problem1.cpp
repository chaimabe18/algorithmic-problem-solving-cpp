#include<iostream>
#include<string>
#include <cctype>
#include<cmath>


using namespace std;

int ReadNum()
{
    int number;
      cout << "Enter a number " << endl;
      cin >> number ;
    return number;
}

void EvenOrOdd(int number)
{

    if (number % 2 == 0)
    {
          cout << "the number is even" << endl;
    }
    else
    {
          cout << "the number is odd " << endl;
    }
    
}

string Fullname(string name,string surname)
{
    return name +" "+surname;
}

int half(int number)
{
    return number/2;
}

void PassFail(float mark)
{
    if(mark>=50 && mark<=100)
    {
          cout << "pass" << endl;
    }
    else
    {
         cout << "fail" << endl;
    }
    
}

float SumOfThree(float a,float b,float c)
{
    return a+b+c;
}

float AverageOfThree(float a,float b,float c)
{
    return SumOfThree(a,b,c)/3;
}

int MaxValtwo(int a,int b)
{

    int max;
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    
    return max;
}

int MaxVal(int a,int b,int c)
{

    int max;
    if(a>b)
    {
        max=a;
    }
    else if (c>b)
    {
        max=c;
    }
    else
    {
        max=b;
    }
    
    return max;
}

void PrintNums(int number)
{
    for (int i = 0; i < number; i++)
    {
          cout << i <<"-";
    }
    
}

void PrintNumsNtoOne(int number)
{
    for (int i = number ; i > 0; i--)
    {
          cout << i <<"-";
    }
    
}

void SumEven(int number)
{
    int SumEvens = 0 ;

    for (int i = 1; i < number ; i++)
    {

        if (i % 2 == 0)
        {
            SumEvens=SumEvens+i;
        }
        
    }
    
      cout << "the sum of even numbers is " << SumEvens << endl;
}

void SumOdd(int number)
{
    int SumOdds = 0 ;

    for (int i = 1; i < number ; i++)
    {

        if (i % 2 != 0)
        {
            SumOdds=SumOdds+i;
        }
        
    }
    
      cout << "the sum of odd numbers is " << SumOdds << endl;
}

int factorial(int number)
{
    int fact=1;
    for (int i = 1; i <= number; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int Power(int base ,int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result=base*result;
    }

    return result;
}

char grade(float mark)
{    

 if (mark<=100 && mark>0)
 {
     
     if (mark>=90 && mark<=100)
     {
       return 'A';
     }
     
     else
     {
        if (mark>=80 && mark<=89)
        {
               return 'B';
        }
        else
        {
            if (mark>=70 && mark<=79)
            {
                   return 'C';
            }
            else
            {
                if (mark>=60 && mark<=69)
                {
                   return 'D';
                }
                else
                {
                    if (mark>=50 && mark<=59)
                    {
                       return 'E';
                    }
                    else
                    {
                       return 'F';
                    }
                    
                }
                
            }
            
        }
        
     }
     
 }

 
 else
 {
   return 'X';
 }
 
}

float Pennies(int p,int n,int d,int q,int dol)
{
  int pennies;
  pennies=(p+(5*n)+(10*d)+(25*q)+(100*dol));
  return pennies;
}

float Dollars(int p,int n,int d,int q,int dol)
{
  float dollars;
  return dollars=(Pennies(p,n,d,q,dol)/100.0);
}

int SimpleCalculator(int FirstNumber, char Operation[10] ,int SecondNumber)
{
    int result ;
    if (strcmp(Operation,"+") == 0)
    {
       return result = FirstNumber + SecondNumber ;
    }
    else if (strcmp(Operation,"-") == 0)
    {
        return result = FirstNumber - SecondNumber ;
    }
    else
    {
        if (strcmp(Operation,"*") == 0)
        {
           return result = FirstNumber * SecondNumber ;
        }
        else
        {
            if (strcmp(Operation,"/") == 0 && SecondNumber != 0)
            {
               return result = FirstNumber / SecondNumber ;
            }
            else if (strcmp(Operation, "%") == 0)
            {
                return result = FirstNumber % SecondNumber ;
            }
            
            else
            {

                  return 404;
                  cout << "maybe you Enter invalid symbol ,try again with another one" << endl;

            }
            
        }
        
    }
    


}

int SumIntegersUntilMinusNinetyNine()
{

    int sum = 0 , number ;

    do
    {
          number = ReadNum();
        sum = sum + number ;
    
    } while (number != -99) ;

    
    
    return sum+99 ;
    
}

bool CheckPrime(int number)
{
    for (int i = 2; i <= number/2; i++)
    {
        
      if ( number % i == 0)
      {
         return false;
      }
      else
      {
         return true;
      }
         
    }

}

int DurationSeconds(int days, int hours ,int minutes ,int seconds)
{

  int total = 86400*days +3600*hours +60*minutes + seconds;

   return total;

}

void SecondsToDaysHoursMinutesSeconds(int seconds)
{
  int days, hours ,minutes , secs;

    days=(seconds/86400);
    seconds = seconds % 86400;
    hours=(seconds/3600);
    seconds = seconds % 3600;
    minutes=(seconds/60);
    secs = seconds % 60;

    cout << "you have " << days << " days and " << hours << " hours and " << minutes << " minutes and " << secs << " seconds" << endl;

}

int loanRepaymentMonths(int Monthlypaymment ,int loanamount)
{
  int months;
  if (Monthlypaymment == 0)
  {
    return -1;
  }
  
  return months=(loanamount/Monthlypaymment);

}

float MonthlyLoanInstallment(int loanamount, int months)
{
    if(months == 0) 
    {
        cout << "Error: Number of months cannot be zero" << endl;
        return -1;
    }
    return loanamount / (float)months;
}

void AtmPin(int pin)
{
    while(pin != 1234)
    {
        cout << " The PIN is wrong, re-enter your PIN: "; 
        cin >> pin;
    }
    cout << "Your balance is 7500" << endl;
}

void AtmPinThree(int pin)
{
    int i;

        while ( pin != 1234 && i<3 )
        {
            cout << "the PIN is wrong ,rEnter you PIN " << endl;
            cin >> pin;
            i++;
        }

        if ( pin == 1234 )
        {
            cout << "you balance is 7500" << endl;
        }
        else
        {
        
            cout << "your card is locked" << endl;
        }

}

bool ValidInvalidAge(int age)
{
    cout << " please Enter your age : " << endl;
    cin >> age;

    if ( age >= 18 && age <= 45 )
    {

        return true;
    }
    else
    {

        return false;
    }

}

void PayRemainder(float TotalPrice, float cashReceived)
{

    float RemainingAmount,RemainingBalence;
 
    RemainingBalence=cashReceived-TotalPrice;
    if (RemainingBalence > 0)
    {
        cout << "give the custumor back " << RemainingBalence << endl;
    }
    else if (RemainingBalence == 0)
    {
        cout << "give the custumor back " << RemainingBalence << endl;
        
    }
    else
    {
        RemainingAmount=-1*RemainingBalence;
        cout << "the custumor shouLd add " << RemainingAmount << endl;

    }
    
    
}

float RectangleArea(float length , float width)
{
    float Area;

    return Area = length * width ;

}

int square(int x)
{
    return x*x;
}

float RectangleAreaDiagnolSideArea(float side ,float diagnol)
{
    float Area;
    return Area = side * (sqrt(diagnol*diagnol - side*side));
}

float TriangleArea(float length, float height)
{
    float Area;
    return Area = 0.5 * length * height;
}

float CircleAreaInscribedInAnIsoscelesTriangle(float leg ,float base)
{

    float Area;
    return Area = 3.14*(square(base)/4)*((2*-base)/(2*leg+base));

}

float AreaDiameter(float diameter)
{

    float Area;
    return Area = 0.25*3.14*square(diameter);
}

float ServiceFeeAndSalesTaxes(float billvalue)
{
    float taxf,taxsale,totalbill;

    taxf=(billvalue*10)/100;
    taxsale=(billvalue*16)/100;
    return totalbill = billvalue + taxf + taxsale ;

}

float CommissionPercentage(float TotalSale)
{

    float Sale;
    
    if (TotalSale==1000000)
    {
      return  Sale=TotalSale*0.01;
    }
    else
    {

        if (TotalSale<1000000 && TotalSale>=500000)
        {
            return Sale=TotalSale*0.02;
        }

    }

    if (TotalSale<500000 && TotalSale>=100000)
    {
        return Sale=TotalSale*0.03;
    }

    if (TotalSale<100000 && TotalSale>=50000)
    {
        return Sale=TotalSale*0.05;
    }
    else
    {
        return Sale=TotalSale*0;
    }

}

void HoursTodaysAndWeeks(int totalHours)
{
    int totalDays ,totalWeeks;
    totalDays = totalHours / 24;
    totalWeeks = totalDays / 7;

    cout << "You have " << totalDays << " day(s) and " << totalWeeks << " week(s) " << endl;
}

void ShowMenu()
{
    cout << "-----------------------------" << endl;
    cout << "   Welcome to the Program   " << endl;
    cout << "-----------------------------" << endl;
    cout << "Choose an option by entering its number:" << endl;
    cout << "1  - Print 'Mohammed' on the screen" << endl;
    cout << "2  - Enter your name and display it" << endl;
    cout << "3  - Check if a number is even or odd" << endl;
    cout << "4  - Check if you can be hired (based on age & driver license)" << endl;
    cout << "5  - Check hiring eligibility with recommendation" << endl;
    cout << "6  - Combine name and surname to display full name" << endl;
    cout << "7  - Find half of a number" << endl;
    cout << "8  - Check pass/fail from a mark" << endl;
    cout << "9  - Sum of three numbers you enter" << endl;
    cout << "10 - Average of three numbers you enter" << endl;
    cout << "11 - Pass/Fail based on the average of three numbers" << endl;
    cout << "12 - Find the maximum of two numbers" << endl;
    cout << "13 - Find the maximum of three numbers" << endl;
    cout << "14 - Swap two numbers" << endl;
    cout << "15 - Calculate the area of a rectangle" << endl;
    cout << "16 - Calculate rectangle area using side and diagonal" << endl;
    cout << "17 - Calculate the area of a triangle" << endl;
    cout << "18 - Calculate the area of a circle (given radius)" << endl;
    cout << "19 - Calculate area from diameter" << endl;
    cout << "20 - Calculate the area of a square" << endl;
    cout << "21 - Calculate area from circumference" << endl;
    cout << "22 - Circle area inscribed in an isosceles triangle" << endl;
    cout << "23 - Circle area around any triangle" << endl;
    cout << "24 - Check if an age is valid" << endl;
    cout << "25 - Keep asking until a valid age is entered" << endl;
    cout << "26 - Print numbers from 0 to N" << endl;
    cout << "27 - Print numbers from N down to 1" << endl;
    cout << "28 - Sum of odd numbers up to N" << endl;
    cout << "29 - Sum of even numbers up to N" << endl;
    cout << "30 - Calculate factorial of a number" << endl;
    cout << "31 - Calculate powers of a number (2, 3, 4)" << endl;
    cout << "32 - Calculate number to a custom power" << endl;
    cout << "33 - Get grade based on a mark" << endl;
    cout << "34 - Calculate commission percentage" << endl;
    cout << "35 - Convert coins to pennies and dollars" << endl;
    cout << "36 - Simple calculator (+, -, *, /, %)" << endl;
    cout << "37 - Sum numbers until -99 is entered" << endl;
    cout << "38 - Check if a number is prime" << endl;
    cout << "39 - Calculate cash remainder (change to give customer)" << endl;
    cout << "40 - Calculate total bill including taxes" << endl;
    cout << "41 - Convert total hours into days and weeks" << endl;
    cout << "42 - Convert days, hours, minutes, seconds into total seconds" << endl;
    cout << "43 - Convert seconds into days, hours, minutes, seconds" << endl;
    cout << "44 - Display day of the week from a number (1-7)" << endl;
    cout << "45 - Display month name from a number (1-12)" << endl;
    cout << "46 - Convert a number to its ASCII character" << endl;
    cout << "47 - Calculate number of months to repay a loan" << endl;
    cout << "48 - Calculate monthly loan installment" << endl;
    cout << "49 - ATM PIN check (unlimited attempts)" << endl;
    cout << "50 - ATM PIN check (maximum 3 attempts)" << endl;
    cout << "0  - Exit program" << endl;
    cout << "-----------------------------" << endl;
}

int main()
{
    string name, surname;
    bool YesOrNot;
    int UserOption, number, age, a, b, c, temp, penny, nickel, dime, quater, dollar, pennies, days, hours, minutes, seconds, month, Monthlypaymment, loanamount, pin;
    char Operation[10], alph;
    float sum=0, mark ,TotalPrice, cashReceived, length, width, side, diagnol, height, leg, base, diameter, billvalue, TotalSale, totalHours, radius, l, Area, p;

    ShowMenu();
    cout << "Enter your option " << endl;
    cin >> UserOption ;

    switch (UserOption)
    {
        case 1:
            cout << "Mohammed" << endl;
        break;




        case 2:
           cout <<"Enter your name " << endl;
           cin.ignore();
           getline(  cin,name);
        break;
        



        case 3:
          number=ReadNum();
          EvenOrOdd(number);
        break;
        



        case 4:
           cout << "Enter your age" << endl;
           cin >> age ;
           cout << "do you have a driver license or not ? (Enter 0 for no and 1 for yes)" << endl;
           cin >> YesOrNot;

         if (age > 21 && YesOrNot == true)
         {
              cout << "hired" << endl;
         }
         else
         {
              cout << "rejected" << endl;
         }
        break;
        



        case 5:
           cout << "do you have a recommendation ? (Enter 0 for no and 1 for yes)" << endl;
           cin >> YesOrNot ;
         if (YesOrNot == true)
         {
              cout << "hired" << endl;
         }
         else
         {
              cout << "Enter your age" << endl;
              cin >> age ;
              cout << "\n do you have a driver license or not (Enter 0 for no and 1 for yes)" << endl;
              cin >> YesOrNot;

            if (age > 21 && YesOrNot == true)
            {
                cout << "hired" << endl;
            }
            else
            {
                cout << "rejected" << endl;
            }
         }
         
        break;
        



        case 6:
           cout <<"Enter your name " << endl;
           cin >> name;
           cout << "Enter your surname" << endl;
           cin >> surname;
           cout <<"your full name is " << Fullname(name,surname) << endl;
        break;
        



        case 7:
          number=ReadNum();
          cout << "the half of " << number << " is " << half(number) << endl;
        
        break;
        



        case 8:
          cout << "Enter your mark " << endl;
          cin >> mark;
          PassFail(mark);
        break;




        case 9:
          a = ReadNum();
          b = ReadNum();
          c = ReadNum();

          cout << "the sum of three numbers that you Enter is " << SumOfThree(a,b,c) << endl;
        break;
        



        case 10:
          a = ReadNum();
          b = ReadNum();
          c = ReadNum();

          cout << "the Average of three numbers that you Enter is " << AverageOfThree(a,b,c) << endl;
        break;
        



        case 11:
          a = ReadNum();
          b = ReadNum();
          c = ReadNum();

          PassFail(AverageOfThree(a,b,c));
        break;
        



        case 12:
          a = ReadNum();
          b = ReadNum();
          cout << "the max value of two numbers that you Enter is " << MaxValtwo(a,b) << endl;
        break;
        



        case 13:
          a = ReadNum();
          b = ReadNum();
          c = ReadNum();

          cout << "the max value of three numbers that you Enter is " << MaxVal(a,b,c) << endl;
        break;
        



        case 14:
          cout << "Enter the first value " << endl;
          cin >> a ;
          cout << "Enter the second value " << endl;
          cin >> b ;

            temp = a;
            a = b;
            b = temp;

            cout << "the first value after swap is " << a << endl;
            cout << "the second value after swap is " << b << endl;
        break;
        



        case 15:

          cout << "Enter the length " << endl;
          cin >> length;
          cout << "Enter the width " << endl;
          cin >> width;
          cout << "The area of the Rectangle is " << RectangleArea(length,width) << endl;

        break;
        



        case 16:
          cout << "Enter the side " << endl;
          cin >> side;
          cout << "Enter the diagnol " << endl;
          cin >> diagnol;
          cout << "The area of the Rectangle is " << RectangleAreaDiagnolSideArea(side,diagnol) << endl;
        break;        




        case 17:
          cout << "Enter the base" << endl;
          cin >> base;
          cout << "Enter the height " << endl;
          cin >> height;
          cout << "the triangle area is " << TriangleArea(base,height) << endl;
          
        break;




        case 18:

        cout << "enter the value of Radius : " << endl;
        cin >> radius;
        cout << "the area of the circle is " << square(radius)*3.14 << endl;

        break;
        



        case 19:
           cout << "Enter the diameter" << endl;
           cin >> diameter;
           cout << "The area is " << AreaDiameter(diameter) << endl;
        break;
        



        case 20:

            cout << "Enter the value of the side of the square" << endl;
            cin >> side;
            cout << "the value of the area is : " << 0.25*3.14*square(side) << endl;
        break;
        



        case 21:

        cout << "Enter the circumference " << endl;
        cin >> l;
        cout << "the area is " << (Power(l,2) / (4 * 3.14)) << endl;

        break;
        



        case 22:
            cout << "please enter the value of leg of the isosceles triangle : " << endl;
            cin >> leg;
            cout << "please enter the value of the Base of the triangle: " << endl;
            cin >> base;
            cout << "the Circle Area inscribed In An Isosceles Triangle" << CircleAreaInscribedInAnIsoscelesTriangle(leg,base) << endl;
            break;
        



        case 23:
          a = ReadNum();
          b = ReadNum();
          c = ReadNum();

          p = a + b + c;
          Area = 3.14 * ((a*b*c)/4*sqrt(p*(p-a)*(p-b)*(p-c)));
          cout << "the circle area is " << Area << endl;
        break;
        



        case 24:
          if (ValidInvalidAge(age) == true)
          {
            cout << "valid age" << endl;
          }
          else
          {
            cout << "invalid age" << endl;
          }
        break;
        



        case 25:
            do
            {
                cout << "Invalid age ,Enter a valid age" << endl;
                cin >> age;

            } while (age >= 18 && age <= 45);
            cout << "Valid age" << endl;
        break;
        



        case 26:
          number = ReadNum();
          PrintNums(number);
        break;
                
        

        case 27:
          number = ReadNum();
          PrintNumsNtoOne(number);
        break;
        



        case 28:
          number = ReadNum();
          SumOdd(number);
        break;
    



        case 29:
          number = ReadNum();
          SumEven(number);
        break;
        


        case 30:
          number = ReadNum();
          factorial(number); 
        break;   
        



        case 31:
          a = ReadNum();
          cout << a << " to the power of 2 is " << Power(a,2);
          cout << a << " to the power of 3 is " << Power(a,3);
          cout << a << " to the power of 4 is " << Power(a,4);
        break;





        case 32:
          cout << "Enter the base " << endl;
          cin >> a;
          cout << "Enter the exponent " << endl;
          cin >> b;
          cout << a << " to the power of " << b << " is " << Power(a,b);
        break;
        



        case 33:
          cout << "Enter your mark " << endl;
          cin >> mark ;
          cout << "Your grade is " << grade(mark) << endl ;
        break;
        



        case 34:

        cout << "please enter the total sale" << endl;
        cin >> TotalSale;
        cout << "commission " << CommissionPercentage(TotalSale) << endl;

        break;

        


        case 35:
          cout << "Enter the number of pennies " << endl;
          cin >> penny;
          cout << "Enter the number of nickels " << endl;
          cin >> nickel;        
          cout << "Enter the number of dimes " << endl;
          cin >> dime;        
          cout << "Enter the number of quaters " << endl;
          cin >> quater;        
          cout << "Enter the number of dollars " << endl;
          cin >> dollar;

          cout << "you have " << Pennies(penny,nickel,dime,quater,dollar) << " and " << Dollars(penny,nickel,dime,quater,dollar) << endl;
        break;
        



        case 36:
          a = ReadNum();

          cout << " Enter the symbol of the operation " << endl;
          cout << "The symbol '+' is used for addition" << endl;
          cout << "The symbol '-' is used for subtraction" << endl;
          cout << "The symbol '*' is used for multiplication" << endl;
          cout << "The symbol '/' is used for division" << endl;
          cout << "The symbol '%' is used for modulus" << endl;

          cin >> Operation;

          b = ReadNum();

          cout << " the result of " << a << " " << Operation << " " << b << " = " << SimpleCalculator(a,Operation,b) << endl;
        break;
        



        case 37:
            cout << "Enter numbers (-99 to stop)" << endl;
            cout << "The sum is " << SumIntegersUntilMinusNinetyNine() << endl;
        break;
        



        case 38:
          a = ReadNum();
          if (CheckPrime(a) == true)
          {
            cout << " prime " << endl;
          }
          else
          {
            cout << " not prime " << endl;
          }
          

        break;
        
        case 39:
            cout << "Enter the price of things that the custumor buy " << endl;
            cin >> TotalPrice;
            cout << "Enter the price of that the custumor pay " << endl;
            cin >> cashReceived;
            
            PayRemainder(TotalPrice,cashReceived);

        break;
        



        case 40:
           cout << "Enter the price of bill" << endl;
           cin >> billvalue;
           cout << "The price of the total bill is " << ServiceFeeAndSalesTaxes(billvalue) << endl;
        break;
        



        case 41:

          cout << "Please enter the number of hours" << endl;
          cin >> totalHours;
          HoursTodaysAndWeeks(totalHours);
        break;
        



        case 42:
           cout << "please Enter the number of days " << endl;
           cin >> days;
           cout << "please Enter the number of hours " << endl;
           cin >> hours;
           cout << "please Enter the number of minutes " << endl;
           cin >> minutes;
           cout << "please Enter the number of seconds " << endl;
           cin >> seconds;

           cout << "the duration in seconds is " << DurationSeconds(days,hours,minutes,seconds) << endl;
        break;
        



        case 43:
          cout << "Enter the number of seconds " << endl;
          cin >> number;
          SecondsToDaysHoursMinutesSeconds(number);
        break;
        



        case 44:

          cout << "Enter the number of day between one and seven " << endl;

          switch (days)
          {
          case 1:
              cout << "monday" << endl;
              break;
          case 2:
              cout << "tuesday"<< endl;
              break;  
          case 3:
              cout << "wednesday" << endl;
              break;
          case 4:
              cout << "thursday" << endl;
              break;
          case 5:
              cout << "friday" << endl;
              break;
          case 6:
              cout << "saturday" << endl;
              break;
          case 7:
              cout << "sunday" << endl;
              break;
          default:
          cout << "wrong num ,run the code again and Enter correct number" << endl;
              break;
          }


        break;
        



        case 45:

          cout << "Enter the number of month between one and 12 " << endl;
          cin >> month;

          switch (month)
          {
          case 1:
              cout << "january" << endl;
              break;
          case 2:
              cout << "february" << endl;
              break;  
          case 3:
              cout << "march" << endl;
              break;
          case 4:
              cout << "april" << endl;
              break;
          case 5:
              cout << "may" << endl;
              break;
          case 6:
              cout << "june" << endl;
              break;
          case 7:
              cout << "july" << endl;
              break;
          case 8:
              cout << "agust" << endl;
              break;
          case 9:
              cout << "september" << endl;
              break;
          case 10:
              cout << "october" << endl;
              break;
          case 11:
              cout << "novamber" << endl;
              break;
          case 12:
              cout << "december" << endl;
              break;
          default:
          cout << "wrong number ,run the code again and Enter correct number" << endl;
              break;
          }

        break;        




        case 46:

          cout << "Enter a number represent ASCII code" << endl;
          cin >> number;
          char alph = (char)number;
          cout << "The letter is " << alph << endl;
        break;




        case 47:

          cout << "Enter the loan amount you want to take" << endl;
          cin >> loanamount;
          cout << "Enter your monthly paymment" << endl;
          cin >> Monthlypaymment;

          cout << "you need " << loanRepaymentMonths(Monthlypaymment ,loanamount) << "to repay your loan" << endl;
        break;
        



        case 48:

            cout << " Enter the loan amount you want to take " << endl;
            cin >> loanamount;
            cout << " Enter the number of months over which you want to repay the loan " << endl;
            cin >> month;
            cout << " You need to pay " << MonthlyLoanInstallment(loanamount,month) << " per month " << endl;

        break;
        



        case 49:

            cout << "Enter your PIN" << endl;
            cin >> pin;
            AtmPin(pin);
        
        break;
        



        case 50:
            cout << "Enter your PIN" << endl;
            cin >> pin;
            AtmPinThree(pin);
        break; 

        default:
            cout << "Invalid Option !" << endl;
        break;
    }


   
         
    return 0;
}