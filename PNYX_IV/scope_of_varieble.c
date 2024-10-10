// ***SCOPE OF VARIEBLE***
#include <stdio.h>
int main()
{
  /*
    A Scope is a region of the program and scope of
    variebles refer to the region where declared
    varieble can be accessed.
    the varieble can be declared in three region :-
         01) inside the function,(local variebles)
         02) outside the function,(global variebles)
         03) functions Parameter,(formal parameter)
  */
  //** LETS TALK ABOUT LOCAL VARIEBLES **
  /*
    if we declared a varieble inside the function then
    we can call it local varieble,
 */
  // example of local varieble:-
  int x = 2;
  int y = 3;
  int sum = x+y;
  printf("THE VALUE IS %d",sum);
 void substract()
  {
    int sub=0;
    sub=x-y;
    printf("THE VALUE IS %d",sub);
  }
  return 0;
}
