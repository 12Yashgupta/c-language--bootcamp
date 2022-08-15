#include<stdio.h>
#include<conio.h>
#include<string.h>
void game();
void show();
void user();
void Rule();
char str[4][4][3]={
    {" 3"," 2"," 6","14"},{"10","13"," 8"," 4"},{"11","15"," 7"," 1"},{" 9","12"," 5","  "}};
int main()
{  char pos,temp[3];
    int move,i,j,k;
game();
user();
system("cls");
Rule();
getch();
system("cls");
printf("Enter the moves :-",move);
scanf("%d",&move);
printf("\nYou have been given with this matrix:-\n");
show();
printf("PRESS any key to start your moves position now\n");
getch();
system("cls");
fflush(stdin);
printf("\n");
i=3;
j=3;
for(k=move;k>=1;k--)
{
printf("Enter the position for (L)left,(R)right,(U)upward,(D)downward and (E)or(e) for exit according to rule:-");
scanf("%c",&pos);
if(pos=='E'||pos=='e')
{
    break;
}
if(pos=='R')
{  if(j!=3)
  {
    strcpy(temp,str[i][j+1]);
    strcpy(str[i][j+1],str[i][j]);
    strcpy(str[i][j],temp);
    j=j+1;
    show();
  }
  else
  {
      printf("\t\t\tINVALID MOVES!\n");
  }
}
else if(pos=='L')
{  if(j!=0)
{
    strcpy(temp,str[i][j-1]);
    strcpy(str[i][j-1],str[i][j]);
    strcpy(str[i][j],temp);
    j=j-1;
    show();
}
else
    printf("\t\t\tINVALID MOVE!\n");
}
else if(pos=='U')
{   if(i!=0)
 {
    strcpy(temp,str[i-1][j]);
    strcpy(str[i-1][j],str[i][j]);
    strcpy(str[i][j],temp);
    i=i-1;
    show();
 }
 else
    printf("\t\t\tINVALID MOVE!\n");
}
else if(pos=='D')
{
    if(i!=3)
    {
    strcpy(temp,str[i+1][j]);
    strcpy(str[i+1][j],str[i][j]);
    strcpy(str[i][j],temp);
    i=i+1;
    show();
    }
    else
    printf("\t\t\tINVALID MOVES!\n");
}
getch();
system("cls");
if(str[0][0]==" 1"&&str[0][1]==" 2"&&str[0][2]==" 3"&&str[0][3]==" 4"&&str[1][0]==" 5"&&str[1][1]==" 6"&&str[1][2]==" 7"&&str[1][3]==" 8"&&str[2][0]==" 9"&&str[2][1]=="10"&&str[2][2]=="11"&&str[2][3]=="12"&&str[3][0]=="13"&&str[3][1]=="14"&&str[3][2]=="15"&&str[3][3]=="  ")
{
    printf("You are WINNER\n");
    break;
}
if(k-1==0)
{
    printf("LOST\n");
    break;
}
fflush(stdin);
printf("\nYour Remaining moves %d\n",k-1);
}
printf("HAPPY GAMING:)");
return 0;
}
void Rule()
{
printf("\t\t\t     Rule of the game:-\n");
printf("\t\t\tMoving up   : Enter the U for up\n");
printf("\t\t\tMoving Down : Enter the D for down\n");
printf("\t\t\tMoving left : Enter the L for left\n");
printf("\t\t\tMoving right: Enter the R for right\n");
printf("You can Move number at Empty position only\n");
printf("for Each Valid move,your total move will decrease by 1\n");
printf("Winning Situation : Number in a 4*4 should be in order from 1 to 15\n");
printf("Winning Situation :\n");
    printf("\t\t\t--------------------\n");
    printf("\t\t\t| 1  | 2  | 3  | 4 |\n");
    printf("\t\t\t| 5  | 6  | 7  | 8 |\n");
    printf("\t\t\t| 9  | 10 | 11 | 12|\n");
    printf("\t\t\t| 13 | 14 | 15 |   |\n");
    printf("\t\t\t--------------------\n");
    printf("You can exit the game at any time by pressing 'E'  or 'e',so try to win in mininimum no of move\n");
    printf("Press any Key to start game:-");
}
void user()
{
    system("COLOR F");
    char name[20];
    printf("Please Enter your name:- ");
    fgets(name,20,stdin);
    printf("\n\n");
}
void game()
{
    printf("\t\t\t\tWELCOME\n");
    printf("\t\t\t NUMBER SHUFLING GAME\n\n");
}
void show()
{
    printf("\t\t\t--------------------------------\n");
    printf("\t\t\t  %s  |  %s  |   %s  |   %s\n",str[0][0],str[0][1],str[0][2],str[0][3]);
    printf("\t\t\t--------------------------------\n");
    printf("\t\t\t  %s  |  %s  |   %s  |   %s\n",str[1][0],str[1][1],str[1][2],str[1][3]);
    printf("\t\t\t--------------------------------\n");
    printf("\t\t\t  %s  |  %s  |   %s  |   %s\n",str[2][0],str[2][1],str[2][2],str[2][3]);
     printf("\t\t\t--------------------------------\n");

    printf("\t\t\t  %s  |  %s  |   %s  |   %s\n",str[3][0],str[3][1],str[3][2],str[3][3]);
    printf("\t\t\t--------------------------------\n");

}

