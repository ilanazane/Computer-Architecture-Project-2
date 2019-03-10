#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>




unsigned short reversebits(unsigned short first){
  //printf("first is %d\n",first );
  unsigned short rev=0;
  int i;
  for(i=0;i<16;i++){
    rev <<=1;
    if((first & 1)==1)
      rev ^=1;
      first =first >>1;
}

return rev;

}

bool isPalindrome(unsigned short first){
  unsigned short rev= reversebits(first);
  //printf("%d\n", rev);

  return (first==rev);
}

int main(int argc, char** argv){
int temp=strtol(argv[1],NULL,10);
unsigned short first= (unsigned short) temp;
if(isPalindrome(first)){
  printf("Is-Palindrome");
}else{
  printf("Not-Palindrome");
}
return 0;
}
