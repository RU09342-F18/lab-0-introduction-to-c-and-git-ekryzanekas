#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
    int num1, num2;
int answer, answer2;

answer = add(num1, num2);
answer2 = sub(num1, num2);

}

int add( int num1, int num2) { // making add function to add the two numbers
  int num3; //declares integer that will be the resultant
  num3 = num1 + num2;
  return (num3); // adds num1 and num2 and returns the value as the instantiated int num3
}

int sub( int num1, int num2) { //making sub function to subtract the numbers
    int num3;
    num3 = num1 - num2;
    return (num3) // subtracts num2 from num1 and returns the value as the instantiated int num3
}

int multiply( int num1, int num2) { //making multiplication  functions to multiplt num1 and num2
    int num3;
    num3 = num1*num2;
    return (num3) // multiplies num1 and num2 and returns num3, which is the product
}

int divide( int num1, int num2) { //making division functions to divide num1 by num2
    int num3;
    num3 = num1/num2;
    return (num3); //return quotient
}

int mod ( int num1, int num2){ //making modulus function
    int num3;
    num3 = num1%num2;
    return (num3);
}

int left_shift(int num1, int num2){ //num1 is left shifted by num2 bits
    int num3;
    num3 = num1 << num2;
    return (num3);
}

int right_shift(int num1, int num2){ // num1 is right shifted by num2 bits
    int num3;
       num3 = num1 >> num2;
       return (num3);
}

int and( int num1, int num2){ //bitwise and for num1 and num2
    int num3;
    num3 = num1 & num2;
    return (num3);
}

int or( int num1, int num2){ //bitwise or for num1 and num2
    int num3;
    num3 = num1 | num2;
    return (num3);
}

int xor( int num1, int num2){ //bitwise xor for num1 and num2
    int num3;
    num3 = num1 ^ num2;
    return (num3);
}

int inverse(int num1, int num2){ //bitwise inverse to show the inverse of num1 and num2
    int num3, num4; //will make 2 numbers to be the inverse for each
    num3 = ~num1;
    num4 = ~num2;
    return (num3, num4) // not sure if I can return 2 different values in one function
}
