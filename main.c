#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int  time;

printf("input the second:");
scanf("%i", &time);

printf("the time is: %i:%i\n", time/60, time%60);


  system("PAUSE");	
  return 0;
}
