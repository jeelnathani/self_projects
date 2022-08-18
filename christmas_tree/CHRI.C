#include<conio.h>
#include<stdio.h>
void main()
 {
 int i,j,k;
 for(i=0;i<4;i++)
  {
  for(k=10;k>=i;k--)
   {
   printf("  ");
   }
  for(j=1;j<=i+i+1;j++)
   {
   if((j==1)||(j==i+i+1))
   {
   textcolor(RED);
   cprintf(" *");
   }else
   {
   textcolor(GREEN);
   cprintf(" *");
   }
   }
  printf("\n");
//  gotoxy(1,4);
  }
 for(i=4;i<8;i++)
  {
  for(k=13;k>=i;k--)
   {
   printf("  ");
   }
  for(j=6;j<=i+i+1;j++)
   {
   if((j==6)||(j==i+i+1))
   {
   textcolor(RED);
   cprintf("* ");
   }else
   {
   textcolor(GREEN);
   cprintf("* ");
   }
   }
 printf("\n");
 }
 for(i=8;i<13;i++)
  {
  for(k=15;k>=i;k--)
   {
   printf("  ");
   }
  for(j=13;j<=i+i+3;j++)
   {
   if((j==13)||(j==i+i+3))
   {
   textcolor(RED);
   cprintf(" *");
   }else
   {
   textcolor(GREEN);
   cprintf(" *");
   }
   }
 printf("\n");
 }
 for(i=13;i<18;i++)
  {
  for(k=18;k>=i;k--)
   {
   printf("  ");
   }
  for(j=20;j<=i+i+5;j++)
   {
   if((j==20)||(j==i+i+5)||(i==17))
   {
   textcolor(RED);
   cprintf("* ");
   }else
   {
   textcolor(GREEN);
   cprintf("* ");
   }
   }
 printf("\n");
 }
 for(i=18;i<23;i++)
  {
  for(k=25;k>=5;k--)
   {
   printf(" ");
   }
  for(j=25;j<30;j++)
   {
   textcolor(BROWN);
   cprintf("#");
   }
 printf("\n");
 }

 for(i=23;i<=23;i++)
  {
  for(k=23;k>=8;k--)
   {
   printf(" ");
   }
  textcolor(YELLOW);
  cprintf("MERRY  CHRISTMAS\n");
  //gotoxy(23,23);
 }
 getch();
 }
