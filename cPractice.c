//C is compiled (generateds a binary file which is directly executed and distributed
//C is not garbage collected so Manage Memory
//C is very small and uses many libraries
//C is a statically typed language

#include <stdio.h>          //standard I/O library
#include <string.h>         //string library

int main(void){             //void arguments, return int
  printf("Hello World!\n");   //function invocation

  //           VARAIBLES
  //can be upper or lowercase, digits, or underscored
  //cannot begin with a digit
  //int, char, short, long, float, double, long double
  //unsigned var start range at 0 instead of neg numbers
  //overflow of variables wraps [-1] to [0]
  //wrong type assignment warning: init or direct assignment
  //but not with incrementing
  int age = 37;
  const int COUNTa = 40;
  #define COUNT 40      //same as above
  long int sizeOfInt = sizeof(age);


  printf("char size: %lu bytes\n", sizeof(char));
  printf("int size: %lu bytes\n", sizeof(int));
  printf("short size: %lu bytes\n", sizeof(short));
  printf("long size: %lu bytes\n", sizeof(long));
  printf("float size: %lu bytes\n", sizeof(float));
  printf("double size: %lu bytes\n", sizeof(double));
  printf("long double size: %lu bytes\n", sizeof(long double));

  //            PRINTING
  printf("%u \n",COUNT); //WONT print idk why


  //            OPERATORS
  //Arithmetic + - * / %  ++ --
  //Comparison == != > < >= <=
  //Logical ! && ||
  //Compound Assignment += -= *= /= %=
  //  ternary op a ? b : c   if a then b, else c
  int a = 5;
  int b = 0;
  char ans = 'I';
  //(a>b) ? ans = 'T' : ans = 'F';
  //printf("%c",ans);             error lvalue required as left operand of assignment
  //Bitwise
  //Pointer
  //Structure
  //Miscellaneous

  if (a ==5){
    printf("if: Found 5 \n");
  }
  else{
    printf("else: Not 5 \n");
  }
  switch(b){
  case 0:
    printf("Switch: B is 0 \n");
    break;
  case 1:
    printf("Switch: b is 1 \n");
    break;
  default:
    printf("Switch,default: b is not a preset \n");
    break;
  }

  for(int i = 0; i <= 10; i+= 2){
    printf("For Loop: %u \n",i);
  }

  int j = 10;
  do{
    printf("DoWhile: %u \n",j);
    j -= 2;
  }while(j >0);

  //            ARRAYS
  int prices[5];
  prices[0] = 3;
  int cost[5] = {4,2,7,4,12};

  //          STRINGS
  //last char is 0, string terminator
  const char *name[7] = {"O", "a", "k", "l", "e", "y"};
  char name2[5] = "Yuli";
  printf("%s \n",*name);
}
