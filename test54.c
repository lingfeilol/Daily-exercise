#include <conio.h> 
void main(void) 
{ clrscr();/*清屏函数*/ 
  textbackground(2); 
  gotoxy(1, 5);/*定位函数*/ 
  cprintf("Output at row 5 column 1\n"); 
  textbackground(3); 
  gotoxy(20, 10); 
  cprintf("Output at row 10 column 20\n"); 
} 
