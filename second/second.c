#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int countBits(int num){
  int count=0;
  while (num){
    count++;
    num >>= 1;
  }
  return count;
}

int main(int argc, char** argv){

int num=strtol(argv[1],NULL,10);
//printf("number is: %d\n",num );

//FIND PARITY
int counter=0;
int i;

for(i=0;i<num;i++){
  if(num & (1<<i)){
    counter++;
    //printf("%d\n",counter );

  }
}
//printf("Counter: %d\n",counter );
if(counter%2==0){
  printf("Even-Parity\t" );
}else{
  printf("Odd-Parity\t");
}

//FIND PAIRS
int pairs=0;
//int answer;
int count=0;
int temp=num;
while(temp){
  count+=temp&1;
  temp >>=1;
}
//printf("num of set bits are: %d\n",count );
int bits=countBits(num);
for (i=0;i<bits-1;i++){
  int bitstatus=(num >> i) & 1;
  int bitstatus2=(num >> (i+1)) & 1;
  if (bitstatus==1&&bitstatus2==1){
    pairs++;
    i++;
  }
}
printf("%d",pairs);

  return 0;
}
