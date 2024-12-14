#include<stdio.h>
int main(){ 
	int day=0,year,month;
	printf("moi ban nhap so thang: ");
	scanf("%d",&month);
	printf("moi ban nhap so nam: ");
	scanf("%d",&year);
	while(month<1||month>12){
		printf("moi ban nhap lai thang tu 1-12: ");
		scanf("%d",&month);
   }
   if(month == 2){
   	if((year%4==0 && year%100!=0) || (year%400==0)){
   		day=29;
	   }else{
	   	day=28;
	   }
   }else if(month==4||month==6||month==9||month==11){
   	day=30;
   }else{
   	day=31;
   }
  
   printf("thang %d nam %d cua ban co %d ngay\n",month,year,day);
   return 0;
}
