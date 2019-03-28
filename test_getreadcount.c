#include "stat.h"
#include "user.h"
#include "types.h"
 
int main(void) {
 
  printf(1, "wcupa() -> %d\n", wcupa());
  
  printf(1, "getreadcount() -> %d\n", getreadcount());
  
  for (int i = 1; i < 4; i++){
    printf(1, "i -> %d, West Chester University was founded in %d\n", i, wcupa());
  }
  
  printf(1, "getreadcount() -> %d\n", getreadcount());
  
  for (int i = 4; i < 6; i++){
    printf(1, "i -> %d, West Chester University was founded in %d\n", i, wcupa());
  }
  
  printf(1, "getreadcount() -> %d\n", getreadcount());
  
  exit();
}
