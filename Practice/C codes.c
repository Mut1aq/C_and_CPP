/*
#include <stdio.h>
int main ()
{
    printf("******************\n ");
    printf("* \t I \t *\n");
    printf("* \tLove \t *\n");
    printf("* \t\\C/ \t *\n");
    printf("* \t | \t *\n");
    printf("* \t/ \\ \t *\n");

    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    float x1 , x2 , x3 , sum , avg;
    printf("Please enter three floating numbers:\n");
    scanf("%f%f%f" , &x1 , &x2 , &x3);
    sum = x1 + x2 + x3;
    avg = sum / 3;
    printf("Average is %f" , avg);


    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int Cyear , Hyear , age;
    printf("Enter current year and your birthday year:\n");
    scanf("%d%d" , &Cyear , &Hyear);
    age = Cyear - Hyear;
    printf("you're \"%d\" years old!" , age);

    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int x , y , z;
    printf("Please input three integers:\n");
    scanf("%d%d%d" , &x , &y , &z);
    if (x > y && x < z)
    {
        printf("%d is the middle number" , x);
    }
    if (y > x && y < z)
    {
        printf("%d is the middle number" , y);
    }
    if ( z > y && z < x)
    {
        printf("%d is the middle number" , z);
    }
    if (x > z && x < y)
    {
        printf("%d is the middle number" , x);
    }
    if ( y > z && y < x)
    {
        printf("%d is the middle number" , y);
    }
    if ( z > x && z < y)
    {
        printf("%d is the middle number" , z);
    }

    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int s , x , y , result;
    printf("Input a Number (1, 2, 3, or 4):\n");
    scanf("%d" , &s);
    if (s > 4 || s < 1)
    {
        printf("!!!The only available choices are: 1, 2, 3 or 4!!!");
    }
    else
    {
        printf("Input two integers:\n");
        scanf("%d%d" , &x , &y);
        if (s == 1)
        {
            result = x * y;
            printf("%d * %d = %d" , x , y , result);
        }
        else if (s == 2)
        {
            result = x / y;
            printf("%d / %d = %d" , x , y , result);

        }
        else if ( s == 3)
        {
            result = x % 2;
            printf("%d % %d = %d" , x , y , result);
        }
        else
        {
            result = x + y;
            printf("%d + %d = %d" , x , y , result);
        }
    }

    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int userID , pass = 20160 , Upass;
    printf("Enter user ID:\n");
    scanf("%d" , &userID);
    if ( userID > 10 || userID < 1)
    {
        printf("user ID not defined!.\n");
    }
    else
    {
        printf("Enter password:\n");
        scanf("%d" , &Upass);
        if ( Upass == pass + userID)
        {
            printf("Login successfully!.\n");
        }
        else
        {
            printf("Sorry ): Wrong User name or Password.\n");
        }
    }

    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int x , y , result = 1;
    printf("Input two integers:\n");
    scanf("%d%d" , &x , &y);
    while ( x <= y)
    {
        result = result * x;
        x++;
    }
    printf("result = %d" , result);

    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    char m = 109, i = 105, e = 101;
    int x , y , result = 1;
    printf("Input two integers:\n");
    scanf("%d%d" , &x , &y);
    printf("Enter i to include , e to exclude:\n");
    scanf("%s" , &m);
    if (m == i)
      {
    while ( x <= y)
    {
        result = result * x;
        x++;
    }
    printf("result = %d" , result);
      }
      else
      {
              while ( x < y)
    {
        result = result * x;
        x++;
    }
    printf("result = %d" , result);

      }
    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int grade , hours , sum = 0 , ctr = 0;
    float avg;
    printf("Input course grade:\t");
    scanf("%d" , &grade);
    printf("\nInput number of course hours:\t");
    scanf("%d" , &hours);
    while (grade != -1)
    {
        ctr = ctr + hours;
        sum = sum + (grade * hours);
        printf("Input course grade:\t");
        scanf("%d" , &grade);
        if (grade == -1)
        {
            break;
        }
        printf("\nInput number of course hours:\t");
        scanf("%d" , &hours);
    }
    avg = (float)sum / ctr;
    printf("Your semester average is %.1f" , avg);
    return 0;
}
*/
________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int grade , hours , sum = 0 , ctr = 0;
    float avg;
    printf("Input course grade:\t");
    scanf("%d" , &grade);
    printf("\nInput number of course hours:\t");
    scanf("%d" , &hours);
    while (grade != -1)
    {
        ctr = ctr + hours;
        sum = sum + (grade * hours);
        printf("Input course grade:\t");
        scanf("%d" , &grade);
        if (grade == -1)
        {
            break;
        }
        printf("\nInput number of course hours:\t");
        scanf("%d" , &hours);
    }
    avg = (float)sum / ctr;
    printf("Your semester average is %.1f and the number of courses is %d" , avg , ctr);
    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int fact , result = 1 , n;
    printf("Enter a number:\t");
    scanf("%d" , &fact);
    n = fact;
    while (fact > 0)
    {
        result = result * fact;
        fact--;
    }
    printf("\nFactorial of %d = %d" , n , result);

    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int x , y , z , result;
    char a = 97 , o = 111 , A = 65 , O = 79 , s;
    printf("Give me three integers:\n");
    scanf("%d%d%d" , &x , &y , &z);
    printf("Select one of the following logical operations:\nA \t Logical AND\nO \t Logical OR\n");
    scanf("%s" , &s);
    if ( s == a || s == A)
    {
        result = x && y && z;
        printf("%d\tAND\t%d\tAND\t%d\t=\t%d" , x , y , z , result);
    }
    else if (s == o || s == O)
    {
        result = x || y || z;
        printf("%d\tOR\t%d\tOR\t%d\t=\t%d" , x , y , z , result);
    }
    else
    {
        printf("Incorrect letter!");
    }


    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
#include <math.h>
int main ()
{
    int x , y;
    printf("Input an integer:\n");
    scanf("%d" , &x);
    y = fabs(x);
    printf("|%d| = %d" , x , y);
    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int abs ( int a)
{
    if ( a < 0 )
    {
        return a * -1;
    }
    else
    {
        return a;
    }
}
int main ()
{
    int x;
    printf("Please enter an integer:\n");
    scanf("%d" , &x);
    printf("|%d| = %d" , x , abs(x));
    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
#include <math.h>
int hypotenuse(float base , float height)
{
    float hypotenuse , root;
    hypotenuse = pow(base , 2) + pow(height , 2);
    root = sqrt(hypotenuse);
    return square;
}
int main ()
{
    float x , y , result;
    printf("Please input base and height:\n");
    scanf("%f%f" , &x , &y);
    result = hypotenuse(x , y);
    printf("hypotenuse = %f" , result);



    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
#include <math.h>
int square(float m)
{
    float m2;
    m2 = pow(m , 2);
    return m2;
}
int hypotenuse(float base , float height)
{
    float hypotenuse1 , root;
    base = square(base);
    height = square(height);
    hypotenuse1 = base + height;
    root = sqrt(hypotenuse1);
    return root;
}
int main ()
{
    float x , y , result;
    printf("Please input base and height:\n");
    scanf("%f%f" , &x , &y);
    result = hypotenuse(x , y);
    printf("hypotenuse = %f" , result);



    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
#include <math.h>
int hypotenuse(float base , float height)
{
    float hypotenuse , root;
    hypotenuse = pow(base , 2) + pow(height , 2);
    root = sqrt(hypotenuse);
    printf("hypotenuse = %f" , root);
}
int main ()
{
    float x , y , result;
    printf("Please input base and height:\n");
    scanf("%f%f" , &x , &y);
    result = hypotenuse(x , y);




    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int n , x , y , z , m;
    printf("Input a number:\n");
    scanf("%d" , &n);
    x = n % 10;
    n = n / 10;
    y = n % 10;
    n = n / 10;
    z = n % 10;
    n = n / 10;
    m = n % 10;
    printf("%d%d%d%d" , x , y ,z , m);


    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int n , x , y , z , m , o , l;
    printf("Input a number:\n");
    scanf("%d" , &n);
    l = n;
    x = n % 10;
    n = n / 10;
    y = n % 10;
    n = n / 10;
    z = n % 10;
    n = n / 10;
    m = n % 10;
    n = n / 10;
    o = n % 10;
    if ( x == o && y == m)
    {
        printf("%d is a palindrome.\n" , l);
    }


    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int strong , x , y , result;
    printf("Input a three digit number:\n");
    scanf("%d" , &strong);
    x = strong % 10;
    strong = strong / 10;
    y = strong % 10;
    strong = strong / 10;
    result = (x * x * x) + (y * y * y) + (strong * strong * strong);
    printf("%d^3 + %d^3 + %d^3 = %d" , strong , y , x , result);


    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
void printTri (int x , char y)
{
    for (int i = 0 ; i < x ; i++)
    {
        for (int j = 0 ; j < x ; j++)
        {
            if ( j <= i )
            {
                printf("%c" , y);
            }
        }
        printf("\n");
    }
}
int main ()
{
    int row;
    char c;
    printf("Input number of rows and a character to draw with:\n");
    scanf("%d %c" , &row , &c);
    printTri (row , c);


    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int year , month , day; // the users input //
    int year1 = 2019 , month1 = 2 , day1 = 24; // current date //
    int Uyear , Umonth , Uday; // The users age variable//
    printf("Please enter your birthday (enter the day first month second year third). \n");
    scanf("%d%d%d" , &day , &month , &year);
    if ( year >= 2019 && month >= 2 && day >= 24)
        {
            printf("This date is invalid please enter another one :\n");
        }
        else if ( year > 2019)
            {
            printf("This date is invalid please enter another one :\n");
            }
        else if ( day > day1 )
        {
            day1 = day1 + 30;
            Uday = day1 - day;
            month1--;
        }
        else
        {
            Uday = day1 - day;
        }
         if ( month > month1 )
        {
            month1 = month1 + 12;
            Umonth = month1 - month;
            --year1;
            Uyear = year1 - year;
        }
        else
        {
            Umonth = month1 - month;

        }
        Uyear = year1 - year;
        printf("Your age is : %d / %d / %d " , Uday , Umonth , Uyear);
    return 0;
    } 
*/
_________________________________________________________________________________________________________
/*
    
    #include <stdio.h>
    int main ()
    {
        int grade , chour , sum = 0 , ctrCh = 0;
        float gpa;
        printf("Please enter your grade and credit hours:\n");
        for (int i = 1 ; i <= 3 ; i++)
        {
        scanf("%d%d" , &grade , &chour);
        sum = sum + grade * chour;
        ctrCh = ctrCh + chour;
        }
        gpa = (float)sum / ctrCh;
        if ( gpa < 100 && gpa > 84)
        {
            printf("Your GPA is : %.2f , Excellent!" , gpa);
        }
        else if ( gpa < 83.9 && gpa > 76)
        {
            printf("Your GPA is : %f , Very good!" , gpa);
        }
        else if ( gpa < 75.9 && gpa > 64 )
        {
            printf("Your GPA is : %f , Good" , gpa);
        }
        else if ( gpa < 63.9 && gpa > 50)
        {
            printf("Your GPA is : %f , Pass" , gpa);
        }
        else if ( gpa < 50 )
        {
            printf("Your GPA is : %f , Fail" , gpa);
        }


        return 0;
    }
    */
_________________________________________________________________________________________________________
    /*
    
    #include <stdio.h>
    int main ()
    {
        int len , wid;
        printf("Please enter width and length:\n");
        scanf("%d%d" , &len , &wid);
        for ( int i = 0 ; i < len; i++)
        {

            for (int j = 0 ; j < wid ; j++)
            {
                if ( i == 0 || i == len - 1 || j == 0 || j == wid - 1 )
                printf("*");
                else
                printf("#");
            }
            printf("\n");
        }
        return 0;
    }
*/
_________________________________________________________________________________________________________
/*

#include <stdio.h>
int main ()
{
    int operation , operation2;
    float usd , money , pennies;
    printf("Please enter amount of money:\n");
    scanf("%f" , &money );
    printf("Please enter  an operation: \n 1- JD to USD \n 2- Calculate amount of pennies\n");
    scanf("%d" , &operation);
    if ( operation < 1 || operation > 2 )
    {
        printf("Please choose 1 or 2 !!\n");
        scanf("%d" , &operation2);
        if ( operation2 == 1 )
    {
        usd = (float)money * 1.41;
        printf("%.2f is equal to %.2f\n" , money , usd);

    }
    else
    {
        pennies = (float)money * 100;
        printf("Number of pennies = %.2f" , pennies);
    }
    }
   else {
        if ( operation == 1 )
    {
        usd = (float)money * 1.41;
        printf("%.2f is equal to %.2f\n" , money , usd);

    }
    else
    {
        pennies = (float)money * 100;
        printf("Number of pennies = %.2f" , pennies);
    }
   }
    return 0;
}
*/
_________________________________________________________________________________________________________

/*
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int exam [5] , max = 0 , Hpart , x;
    printf("Input parts' grade:\n");
    for (int i = 0 ; i < 5 ; i++)
    {
        scanf("%d" , &exam[i]);
        if (exam[i] > 100 || exam[i] < 35)
        {
            --i;
            continue;
        }
        if (exam[i] > max)
        {
            max = exam [i];
            Hpart = i + 1;
        }
        if (exam[i] <= 49 && exam[i] >= 47)
        {
            exam[i] = 50;
        }
    }
    printf("part \t part grade\n");
    printf("1 \t %d \n2 \t %d \n3 \t %d \n4 \t %d \n5 \t %d\n" , exam[0] , exam[1] , exam[2] , exam[3] , exam[4]);
    printf("The highest grade is %d for part %d\n" , max , Hpart);
    printf("The grades after being modified is:\n");
    printf("1 \t %d \n2 \t %d \n3 \t %d \n4 \t %d \n5 \t %d\n" , exam[0] , exam[1] , exam[2] , exam[3] , exam[4]);

    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int c[4];
    float f[4];
    srand ( time (NULL));
    for ( int i = 0 ; i < 4 ; i++ )
    {
        f[i] = 32 + rand() % (65 - 32 + 1);
        c[i] = f[i] - 32 / 1.8;
    }
    printf("Celsius     Fahrenheit:\n");
    printf("%d \t %.1f \n%d \t %.1f \n%d \t %.1f \n%d \t %.1f\n" , c[0] , f[0] , c[1] , f[1] , c[2] , f[2] , c[3] , f[3]);




    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
#define ARRAY_SIZE 1000

int main() {

	int input,ctru = 0;
	char description[ARRAY_SIZE];
	int counter = 0;
	printf("Input the name of your city:\n");
	while ((input = getchar()) != EOF && input != '\n') {

		description[counter] = input;
		counter++;
	}
for(int i=0;i<counter;i++)
{
    printf("%c ",description[i]);

 if (description[i]>=65 && description[i]<=90)
 {
   printf("    Upper");
   ctru++;
}
 if (description[i]>=97 && description[i]<=122)
    printf("    Lower\n");

    else
        printf("\n");
}
printf("%s contains %d uppercase character\n" , description , ctru);
return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int sumDigits(int n)
{
    if ( n == 0 )
    {
        return 0;
    }
    else
    {
        return n % 10 + sumDigits( n / 10);
    }
}
int main ()
{
    int x , y;
    printf("Please input a number to find the sum of its digits:\n");
    scanf("%d" , &x);
    y = sumDigits(x);
    printf("The result is %d" , y);



    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fillrandol(int x[], int stin, int enin, int stra, int enra)
{
	int size;
	size = enin - stin;
	for (int i = 0; i < 10; i++)
	{
		if (i >= stin && i <= enin)
		{
			x[i] = stra + rand() % (enra - stra + 1);
		}
	}
	return 0;
}
void printarray(int x[], int size)
{
	for (int i = 0; i <= size; i++)
	{
		printf("%d\n", x[i]);
	}
}
int countelement(int x[], int size, int v)
{
	int ctr = 0;
	for (int i = 0; i <= size; i++)
	{
		if (x[i] == v)
		{
			ctr++;
		}
	}
	if (ctr > 0)
	{
		return ctr;
	}
	else
	{
		return -1;
	}
}
int main()
{
	int studentsarks[10], startin, endin, startra, endra, c, size, value, c1;
	srand(time(NULL));
	printf("Input start index and end index:\n");
	scanf("%d%d", &startin, &endin);
	printf("Input start random and end random:\n");
	scanf("%d%d", &startra, &endra);
	printf("-------\n");
	size = endin - startin;
	c = fillrandol(studentsarks, startin, endin, startra, endra);
	printarray(studentsarks, size);
	printf("Input a number to check if it exist or not:\n");
	scanf("%d", &value);
	c1 = countelement(studentsarks, size, value);
	if (c1 > 0)
	{
		printf("%d exists %d times in the current array.\n", value, c1);
	}
	else
	{
		printf("%d doesn't exists in the current array.\n", value);
	}
	return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
#define ARRAY_SIZE 15
void printtri(char x[] , int ctr)
{
    for (int i = 0 ; i <= ctr ; i++)
    {
        printf("\n");
        for (int j = 0 ; j < ctr ; j++)
        {
            if (j < i)
            {
                printf("%c " , x[j]);
            }
        }
    }
    printf("\n");
}
void sort(char x[] , int ctr)
{
    int temp;
    printf("In ascending order:\t");
    for (int i = 0 ; i <= ctr - 1 ; i++)
    {
        for (int j = i + 1 ; j < ctr ; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        printf("%c\t" , x[i]);
    }
    printf("\n");
}
int countvowels(char x[] , int ctr)
{
    int sumV = 0;
    for (int i = 0 ; i < ctr ; i++)
    {
        if (x[i] == 65 || x[i] == 69 || x[i] == 73 || x[i] == 79 || x[i] == 85)
        {
            sumV++;
        }
        else if (x[i] == 97 || x[i] == 101 || x[i] == 105 || x[i] == 111 || x[i] == 117)
        {
            sumV++;
        }
    }
    return sumV;
}
int countupper(char x[] , int ctr)
{
    int Usum = 0;
    for (int i = 0 ; i < ctr ; i++)
    {
        if (x[i] >= 65 && x[i] <= 90)
        {
             Usum++;
        }
    }
    return Usum;
}
int countlower(char x[] , int ctr)
{
    int Lsum = 0;
    for (int i = 0 ; i < ctr ; i++)
    {
        if (x[i] >= 97 && x[i] <= 122)
        {
            Lsum++;
        }
    }
    return Lsum;
}
int main ()
{
    int input , ctr = 0 , c;
    char name[ARRAY_SIZE];
    printf("Input a name:\n");
    while ((input = getchar()) != EOF && input != '\n')
    {
        name[ctr] = input;
        ctr++;
    }
    for (int i = 0 ; i < ctr ; i++)
    {
        printf("%c" , name[i]);
    }
    printf(" consists of %d characters.\n" , ctr);
    printf("************************************Name's Triangle************************************\n");
    printtri(name , ctr);
    printf("***********************************Name's Characters***********************************\n");
    sort(name , ctr);
    printf("%d\tVowels\n" , countvowels(name , ctr));
    printf("%d\tUpper\n" , countupper(name , ctr));
    c = countlower(name , ctr);
    printf("%d\tLower\n" , c);

    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main()
{
	int m, ctr = 1, ctr2 = 1, i;
	float temps[3][2], temp, temp1, morning[3];
	printf("Please, input the temperature values for Days 1, 2, and 3 in the morning and in the evening:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf_s("%f", &temps[i][j]);
		}
	}
	printf("\t\tMorning\t\tEvening\n");
	ctr = 1;
	for (int i = 0; i < 3; i++)
	{
		
		printf("Day%d", ctr);
		ctr++;
		for (int j = 0; j < 2; j++)
		{
			printf("\t\t%.0f", temps[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		temps[i][0] = temps[i][0] - 1;
	}

	temp = temps[0][0];
	temps[0][0] = temps[2][0];
	temps[2][0] = temp;

	temp1 = temps[0][1];
	temps[0][1] = temps[2][1];
	temps[2][1] = temp1;

	printf("\t\tMorning\t\tEvening\n");
	ctr = 1;
	for (int i = 0; i < 3; i++)
	{

		printf("Day%d", ctr);
		ctr++;
		for (int j = 0; j < 2; j++)
		{
			printf("\t\t%.0f", temps[i][j]);
		}
		printf("\n");
	}
	printf("Morning temperatures in the past three days are:\n");
	for (int i = 0; i < 3; i++)
	{
		morning[i] = temps[i][0];
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%.0f\t" , morning[i]);
	}

	scanf_s("%d", &m);
	return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void replacediagonal(char x[4][4])
{
	char a[] = "PSUT";

	printf("Now, PSUT is in the diagonal:\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j)
			{
				x[i][j] = a[i];
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%c\t", x[i][j]);
		}
		printf("\n");
	}




}
int main()
{
	char x[4][4], m;
	srand(time(NULL));
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			x[i][j] = 65 + rand() % (90 - 65 + 1);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%c\t", x[i][j]);
		}
		printf("\n");
	}
	replacediagonal(x);



	scanf_s("%d", &m);
	return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int x[4][4] , sumR = 0 , sumC = 0 , multidia = 1 , multiSdia = 1 , sumB = 0 , avgR = 0;
    float avgB;
    for (int i = 0 ; i < 4 ; i++)
    {
        for (int j = 0 ; j < 4 ; j++)
        {
            scanf("%d" , &x[i][j]);
        }
    }
    for (int i = 0 ; i < 4 ; i++)
    {
        sumR = 0;
        for (int j = 0 ; j < 4 ; j++)
        {
            sumR += x[i][j];
        }
        avgR += sumR;
        printf("%d\n" , sumR);
    }
        for (int j = 0 ; j < 4 ; j++)
    {
        sumC = 0;
        for (int i = 0 ; i < 4 ; i++)
        {
            sumC += x[i][j];
        }
        printf("%d\n" , sumC);
    }
    for (int i = 0 ; i < 4 ; i++)
    {
        multidia *= x[i][i];
    }
    printf("%d\n" , multidia);
    for (int i = 0 ; i < 4 ; i++)
    {
        multiSdia *= x[i][4 - i - 1];
    }
    printf("%d\n" , multiSdia);
    for (int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            if (i == 0 || i == 3 || j == 0 || j ==3)
            {
                sumB += x[i][j];
            }
        }
    }
    avgB = (float)sumB/(4*4-4);
    printf("%.2f\n" , avgB);
    printf("%d\n" , avgR / 4);

    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int main ()
{
    int Mutlaq = 0 , Faharan = 0 , Hawas = 0;
    char x[3] = {'c' , 'a' , 't'} , y[3] = {'d' , 'o' , 'g'} , z[5] = {'h' , 'o' , 'r' , 's' , 'e'};
    char mutlaq[5][5];
    for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            scanf(" %c" , &mutlaq[i][j]);
        }
    }
    for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            if (mutlaq[i][j] == x[0] && mutlaq[i][j + 1] == x[1] && mutlaq[i][j + 2] == x[2])
            {

                Mutlaq = 1;
            }
            if (mutlaq[i][j] == x[0] && mutlaq[i + 1][j] == x[1] && mutlaq[i + 2][j] == x[2])
            {

                Mutlaq = 2;
            }
            if (mutlaq[i][j] == y[0] && mutlaq[i][j + 1] == y[1] && mutlaq[i][j + 2] == y[2])
            {

                Faharan = 1;
            }
            if (mutlaq[i][j] == y[0] && mutlaq[i + 1][j] == y[1] && mutlaq[i + 2][j] == y[2])
            {

                Faharan = 2;
            }
            if (mutlaq[i][j] == z[0] && mutlaq[i + 1][j] == z[1] && mutlaq[i + 2][j] == z[2] && mutlaq[i + 3][j] == z[3] && mutlaq[i + 4][j] == z[4])
            {

                Hawas = 2;
            }
            if (mutlaq[i][j] == z[0] && mutlaq[i][j + 1] == z[1] && mutlaq[i][j + 2] == z[2] && mutlaq[i][j + 3] == z[3] && mutlaq[i][j + 4] == z[4])
            {

                Hawas = 1;
            }
        }

    }
    if (Mutlaq == 0 && Faharan == 0 && Hawas == 0)
        {
            printf("No words found\n");
        }
        if (Mutlaq == 1 && Faharan == 2 && Hawas == 0 )
        {
            printf("the array has cat horizontally and dog vertically\n");
        }
        if (Mutlaq == 1 && Faharan == 1 && Hawas == 0)
        {
            printf("the array has cat horizontally and dog horizontally\n");
        }
        if (Mutlaq == 2 && Faharan == 1 && Hawas == 0)
        {
            printf("the array has cat vertically and dog horizontally\n");
        }
        if (Mutlaq == 2 && Faharan == 2 && Hawas == 0)
        {
            printf("the array has cat vertically and dog vertically\n");
        }
        if (Mutlaq == 1 && Faharan == 1 && Hawas == 1)
        {
            printf("the array has cat horizontally and dog horizontally and horse horizontally\n");
        }
        if (Mutlaq == 0 && Faharan == 1 && Hawas == 1)
        {
            printf("the array has dog horizontally and horse horizontally\n");
        }
        if (Mutlaq == 0 && Faharan == 1 && Hawas == 2)
        {
            printf("the array has dog horizontally and horse vertically\n");
        }
        if (Mutlaq == 0 && Faharan == 2 && Hawas == 1)
        {
            printf("the array has dog vertically and horse horizontally\n");
        }
        if (Mutlaq == 0 && Faharan == 2 && Hawas == 2)
        {
            printf("the array has dog vertically and horse vertically\n");
        }
        if (Mutlaq == 1 && Faharan == 0 && Hawas == 1)
        {
            printf("the array has cat horizontally and horse horizontally\n");
        }
        if (Mutlaq == 1 && Faharan == 0 && Hawas == 2)
        {
            printf("the array has cat horizontally and horse vertically\n");
        }
        if (Mutlaq == 2 && Faharan == 0 && Hawas == 1)
        {
            printf("the array has cat vertically and horse horizontally\n");
        }
        if (Mutlaq == 2 && Faharan == 0 && Hawas == 2)
        {
            printf("the array has cat vertically and horse vertically\n");
        }
        if (Mutlaq == 0 && Faharan == 1 && Hawas == 0)
        {
            printf("the array has dog horizontally\n");
        }
        if (Mutlaq == 0 && Faharan == 2 && Hawas == 0)
        {
            printf("the array has dog vertically\n");
        }
        if (Mutlaq == 1 && Faharan == 0 && Hawas == 0)
        {
            printf("the array has cat horizontally\n");
        }
        if (Mutlaq == 2 && Faharan == 0 && Hawas == 0)
        {
            printf("the array has cat vertically\n");
        }
        if (Mutlaq == 0 && Faharan == 0 && Hawas == 1)
        {
            printf("the array has horse horizontally\n");
        }
        if (Mutlaq == 0 && Faharan == 0 && Hawas == 2)
        {
            printf("the array has horse vertically\n");
        }
        if (Mutlaq == 1 && Faharan == 2 && Hawas == 1)
        {
            printf("the array has cat horizontally and dog vertically and horse horizontally\n");
        }
        if (Mutlaq == 2 && Faharan == 1 && Hawas == 1)
        {
            printf("the array has cat vertically and dog horizontally and horse horizontally\n");
        }
        if (Mutlaq == 1 && Faharan == 2 && Hawas == 2)
        {
            printf("the array has cat horizontally and dog vertically and horse vertically\n");
        }
        if (Mutlaq == 2 && Faharan == 2 && Hawas == 1)
        {
            printf("the array has cat vertically and dog vertically and horse horizontally\n");
        }
        if (Mutlaq == 2 && Faharan == 2 && Hawas == 2)
        {
            printf("the array has cat vertically and dog vertically and horse vertically\n");
        }
        if (Mutlaq == 1 && Faharan == 1 && Hawas == 1)
        {
            printf("the array has cat horizontally and dog horizontally and horse horizontally\n");
        }



    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include<stdio.h>
float ecost(float x[])
{
    float cost;
    for (int i = 0 ; i < 20 ; i++)
    {
        if (x[i] <= 500)
        {
            cost = (0.02 * x[i]) + 5;
            printf("%.2f\n" , cost);
        }
        else if (x[i] > 500 && x[i] < 100)
        {
            cost = ((x[i] - 500) * 0.05) + 10 + 5;
            printf("%.2f\n" , cost);
        }
        else
        {
            cost = (35 + (x[i] - 1000) * 0.1) + 5;
            printf("%.2f\n" , cost);
        }

    }
}
int main ()
{
    float c;
    float m[20];
    printf("Input 20 values of consumed units:\n");
    for (int i = 0 ; i < 20 ; i++)
    {
        scanf(" %f" , &m[i]);

    }
c = ecost(m);



    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
void sort(int x[])
{
    int temp;
    for (int i = 0 ; i <= 2 ; i++)
    {
        for (int j = i + 1 ; j < 3 ; j++)
        {
            if (x[i] < x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        printf("%d\t" , x[i]);
    }
    printf("\n");
}
int searchprime(int a[][3])
{
    int ctr = 0 , Pctr = 0;
    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            for (int k = 1 ; k <= a[i][j] ; k++)
            {
                if (a[i][j] % k == 0)
                {
                    ctr++;
                }
            }
            if (ctr == 2)
            {
                Pctr = Pctr + 1;
            }
             ctr = 0;
        }
    }
    return Pctr;
}
int you(int a[][3])
{
    int u = 0;
    for(int i = 0; i < 3 ; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
            if  (a[i][j] %2== 0)
            {
                u++;
            }
        }
    }
    return u;
}
int magic(int a[][3])
{
    int sumR = 0, sumC = 0 , sumD = 0 , sumS = 0 , m = 0;
 for (int i = 0 ; i < 3 ; i++)
  {
      sumR = 0;
      for (int j = 0 ; j < 3 ; j++)
      {
          sumR += a[i][j];
      }
  }
      for (int i = 0 ; i < 3 ; i++)
  {
      sumC = 0;
      for (int j = 0 ; j < 3 ; j++)
      {
          sumC += a[j][i];
      }
  }
      for (int i = 0 ; i < 3 ; i++)
  {
      for (int j = 0 ; j < 3 ; j++)
      {
          if (i == j)
          {
              sumD += a[i][j];
          }
      }
  }
      for (int i = 0 ; i < 3 ; i++)
  {
          sumS += a[i][3 - i - 1];
  }
  if (sumR == sumC && sumC == sumS && sumS == sumD)
  {
      m = 1;
  }
return m;
}
int main ()
{
  int a[3][3] , sumR, sumC , sumD = 0 , sumS = 0 , c , fuck , c1 , diagonal[3] , temp , temp1;
  printf("Input 9 values:\n");
  for (int i = 0 ; i < 3 ; i++)
  {
      for (int j = 0 ; j < 3 ; j++)
      {
          scanf("%d" , &a[i][j]);
      }
  }
    for (int i = 0 ; i < 3 ; i++)
  {
      sumR = 0;
      for (int j = 0 ; j < 3 ; j++)
      {
          sumR += a[i][j];
      }
      printf("row #%d %d\n" , i , sumR);
  }
      for (int i = 0 ; i < 3 ; i++)
  {
      sumC = 0;
      for (int j = 0 ; j < 3 ; j++)
      {
          sumC += a[j][i];
      }
      printf("column #%d %d\n" , i , sumC);
  }
      for (int i = 0 ; i < 3 ; i++)
  {
      for (int j = 0 ; j < 3 ; j++)
      {
          if (i == j)
          {
              sumD += a[i][j];
          }
      }
  }
  printf("the sum of the main diagonal %d\n" , sumD);
      for (int i = 0 ; i < 3 ; i++)
  {
          sumS += a[i][3 - i - 1];
  }
  printf("the sum of the secondary diagonal %d\n" , sumS);
  /**/
  c = magic(a);
  printf(" 1 = magic , 0 = not magical \n==> %d\n" , c);
  /**/
  temp = a[0][0];
  a[0][0] = a[0][2];
  a[0][2] = temp;

  temp1 = a[2][2];
  a[2][2] = a[2][0];
  a[2][0] = temp1;
  /**/
  fuck = you(a);
  printf("there is %d even numbers\n" , fuck);
  /**/
  c1 = searchprime(a);
  printf("The array has %d prime numbers\n" , c1);
  /**/
  	for (int i = 0; i < 3 ; i++)
	{
		for (int j = 0; j < 3 ; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	/**/

	for(int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            if (i == j)
            {
                diagonal[i] = a[i][j];
            }
        }
    }
    /**/
    printf("In descending order:\n");
    sort(diagonal);
  return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(int x[] ,int m)
{
    int temp;
    for(int i = 0 ; i < m - 1 ; i++)
    {
        for(int j = i + 1 ; j < m ; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
         printf("%d\n" , x[i]);
    }
}
int dupli(int x[] , int m)
{
    int y[m];
    for (int i = 0 ; i < m ; i++)
    {
        for(int j = i + 1 ; j < m ; )
        {
            if (x[j] == x[i])
            {
                for (int k = j ; k < m ; k++)
                {
                    x[k] = x[k + 1];
                }
                m--;
            }
            else
            {
                j++;
            }
        }
    }
    for (int i = 0 ; i < m ; i++)
    {
        printf("N%d\n" , x[i]);
    }
    getchar();
    return 0;
}
int main ()
{
    int m = 1000 , x[m] , c;
    srand(time(NULL));
    for(int i = 0 ; i < m ; i++)
    {
        x[i] = 0 + rand () % (1000 - 0 + 1);
    }
    sort(x , m);
    c = dupli(x , m);



    return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int FindMin(int x[])
{
	int min, *ptr;
	ptr = &x[0];
	min = x[0];
	for (int i = 1; i < 10; i++)
	{
		
		if (*(ptr + 1) < min)
		{
			min = *(ptr + 1);
		}
		ptr++;
	}

	return min;
}
int FindMax(int x[])
{
	int max, *ptr;
	ptr = &x[0];
	max = x[0];
	for (int i = 1; i < 10; i++)
	{

		if (*(ptr + 1) > max)
		{
			max = *(ptr + 1);
		}
		ptr++;
	}

	return max;
}
int FindMaxMin(int *min, int *max ,int x[])
{
	*min = FindMin(x);
	*max = FindMax(x);

	return 0;

}
int main()
{
	int m[10], c, s, f1, f2;
	printf("Please enter the elements of the array:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &m[i]);
	}
	c = FindMin(m);
	printf("Min is %d\n", c);
	c = FindMax(m);
	printf("Max is %d\n", c);
	c = FindMaxMin(&f1, &f2, m);
	printf("by referance \nmax = %d , min = %d", f1, f2);

	scanf_s("%d", &s);
	return 0;
}
*/
_________________________________________________________________________________________________________
/*
#include <stdio.h>
int increment(float *x ,float *y , int z )
{
    if(z > 0)
    {
        *x = *x + 5;
        *y = *y + 5;
    }
    else if (z < 0)
    {
        *x = *x - 5;
        *y = *y - 5;
    }

    return 0;
}
int main ()
{
    float x,z;
    int a , c;
    scanf("%f" , &x);
    scanf(" %f" ,&z);
    scanf("  %d" ,&a);
    c = increment(&x , &z , a);
    printf("%.1f %.1f" , x , z);

    return 0;
}
*/
_________________________________________________________________________________________________________
