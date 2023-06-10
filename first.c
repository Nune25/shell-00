#include <stdio.h>
int main() {
   int num = 9;
   if(num<0){
	   printf("negative number:%d\n",num);
   }
   if(num>0 && num<10){
	   printf("num*5:%d\n",num*5);}
   if(num>10 && num<20){
	   printf("num/5:%d\n",num/5);}
   return 0;
}
