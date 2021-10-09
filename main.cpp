#include "stack.h"
#include <stdio.h>
int main()
{
  // main code
  tstack* one = init();
  tstack* two = init();
  if(one!=two)
    printf("[0]\tStacks are different\m");
  else
    printf("[0]\tone and two point at the same adress. Shouldn't be that way.\n");
  { // operations on empty stack
      pop(one);
      close(one);
      close(one);
  }
  { // push on uninitialized/closed stack
      push(one,132);
      tstack* three;
      push(three,5256);
  }
  {
    if( push(two,3333) == 3333)
      printf("[1]\tpush works properly\n");
    else
      printf("[1]\tpush may not work properly\n");
    if(pop(two)==3333)
      printf("[1]\tpop works properly\n");
    else
      printf("[1]\tpop may not work properly\n");
    pop(two);
    
  }
}
