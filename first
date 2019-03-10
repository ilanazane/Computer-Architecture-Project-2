#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){

int first=0;

FILE *fp;
fp=fopen(argv[1], "r");
fscanf(fp, "%d\n", &first);
int bitstatus=0;
char word[10];
int nums=0;
int nums2=0;

while(fscanf(fp,"%s\t%d\t%d\n", word,&nums,&nums2)!= EOF){
  //printf("%s\t%d\t%d\n", word,nums,nums2 );

  if(strcmp(word,"get")==0){
    //printf("%s\t%d\t%d\n",word,nJubums,nums2);

    bitstatus=(first >> nums) & 1;
    //printf("the bit is: %d\n",bitstatus);
    printf("%d\n",bitstatus);


}
  if(strcmp(word,"comp")==0){
    //printf("second line:%s\t%d\t%d\n",word,nums,nums2);
    bitstatus=(first>>nums) &1;
    if(bitstatus==1||bitstatus==0){
      first ^= (1u << nums);

      //RESULT
      printf("%d\n",first);
    }
  }

  if(strcmp(word,"set")==0){
  //printf("%s\t%d\t%d\n",word,nums,nums2);
if(nums2==1){
  first |= 1UL << nums;
}if(nums2==0){
first &= ~(1UL << nums);
}
  printf("%d\n",first);
  //return(first);

    }
}
  return 0;
}
