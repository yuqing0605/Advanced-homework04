#include <stdio.h> 
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    int year,m,day,days,February;
    
    printf("��J�~��:");

    scanf("%d",&year);
    
    printf("��J���:");
    scanf("%d",&m);
    
    printf("��J���:");
    scanf("%d",&day);
    
    if((year%4)==0&&(year%100)!=0||(year%400)==0&&(year%3200)!=0){ 
    February=29;} 
    
    else{ 
    February=28;}

    switch (m) {
    
    case 1:
    days=0;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

    case 2:
    days=31; 
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;
    
    case 3:
    days=31+February;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

    case 4:
    days=62+February;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

    case 5:
    days=92+February;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

    case 6:
    days=123+February;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

    case 7:
    days=153+February;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

    case 8:
    days=184+February;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

    case 9:
    days=215+February;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

    case 10:
    days=245+February;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

    case 11:
    days=276+February;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

    case 12:
    days=306+February;
    printf("%d�~%d��%d��O�@�~������%d�ѡI",year,m,day,days+day);
    break;

         	

    default:
    printf("�A��J������~!"); 
    break;}
	
    system("pause");
	return 0;
}
