#include "types.h"
#include "stat.h"
# include "user.h"

int main(int argc, char **argv)
{
  int sec;

  sec = atoi(argv[1]);
  if(sec>0){
      sleep(sec*100);
  }
  else{
      printf(2, "Wrong input %s\n", argv[1]);
  }
  exit();
}