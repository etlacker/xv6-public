#include "stat.h"
#include "user.h"
 
int main(void) {
  int i = 0;
 
  for (i; i < 5; i++){
    printf(1, "i -> %d, West Chester University was founded in %d\n", i, wcupa());
  }
  
  printf(1, "getreadcount() -> %d\n", getreadcount());
  
  for (i; i < 10; i++){
    printf(1, "i -> %d, West Chester University was founded in %d\n", i, wcupa());
  }
  
  printf(1, "getreadcount() -> %d\n", getreadcount());
  
  for (i; i < 15; i++){
    printf(1, "i -> %d, West Chester University was founded in %d\n", i, wcupa());
  }
  
  printf(1, "getreadcount() -> %d\n", getreadcount());
  
  exit();
}
