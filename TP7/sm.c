#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main(void)
{
  srand(time(NULL));
  bool a = false;
  bool b = false;
  bool door = false;
  bool buzz = false;
  int state = 1;
  int i = 0; // Round counter

  while(true) {
    if(state == 1) { // State
      door = false;
      buzz = false;
      if(a && !b) //Transition
        state = 2;
      else if( (!a && b) || (a && b) ) // Transition
        state = 5;
    }
    else if(state == 2) {
      door = false;
      buzz = false;
      if(!a && !b)
        state = 3;
      else if( (!a && b) || (a && b) )
        state = 5;
    }
    else if(state == 3) {
      door = false;
      buzz = false;
      if(!a && b)
        state = 4;
      else if( (a && b) || (a && !b) )
        state = 5;
    }
    else if(state == 4) {
      door = true;
      buzz = false;
      if(!a && !b)
        state = 1;
      else if( (a && b) || (a && !b) )
        state = 5;
    }
    else if(state == 5) {
      door = false;
      buzz = true;
      if(!a && !b)
        state = 1;
    }
    a = rand()%2; // Simulation of the input a
    b = rand()%2; // Simulation of the input b
    usleep(10000); // Sleep 10ms
    printf("Round %i: a=%i, b=%i, state=%i\n", i, a, b, state);
    i++;
  }
  return EXIT_SUCCESS;
}
