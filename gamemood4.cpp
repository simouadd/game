#include<stdio.h> //is the standard input/output library, which includes functions for input and output operations such as printf and scanf.
#include<string.h> //is the string library, which includes functions for manipulating strings such as strlen and strcpy.
#include<math.h> // is the math library, which includes functions for mathematical operations such as sqrt and pow.
#include<unistd.h> //is the library of contains functions such as sleep and usleep.
#include <windows.h>
/*
 it contains functions for interacting
  with the Windows operating system such as GetStdHandle and SetConsoleTextAttribute.
*/
#include <dos.h> //is the library for contains functions such as delay and getch.
#include<time.h> // is the time library, which includes functions for manipulating time such as time and localtime.
#include<conio.h> //is a non-standard library that contains functions for console input/output such as getch and clrscr.
#define MAX_HIGHT 25
#define MAX_WIDTH 30
#include <windows.h>
 void Color(int couleurDuTexte);
main(){
 
 int lifeindex=100,xg=0,yg=0,r=0,xv,yv,m=0,Firsttime=1,j,i,az=1,wx=0,pz=1,pp=2;
 char mvt,w='2',ready,ab,o, q='9',p='1';
 int xl = 5;
 int xb = 1+rand()%MAX_WIDTH;
 int yl = 5;
 int yb = 1+rand()%MAX_HIGHT; //gives random values between 1 and max hight
 int yq = 1+rand()%MAX_HIGHT;
 int xq = 1+rand()%MAX_WIDTH; //gives random values between 1 and max width
 int ya = 1+rand()%MAX_HIGHT;
 int xe = 1+rand()%MAX_WIDTH;
 int xa = 1+rand()%MAX_WIDTH;
 int ye = 1+rand()%MAX_HIGHT;
 int xr = 1+rand()%MAX_WIDTH;
 int yr = 1+rand()%MAX_HIGHT;
 int yp = 1+rand()%MAX_HIGHT;
 int xp = 1+rand()%MAX_WIDTH;
 char z;
 char t1[]={"1-If you want to move To the left insert the left arrow\n"};
 char t2[]={"If you want to move to right the insert the right arrow\n"};
 char t3[]= {"3-If you want to move to up insert the up arrow\n\n"};
 char t4[]= {"4-If you want to move To the ba insert the down arrow\n"};
 srand(time(NULL));//starts the timer
 float olddistance=sqrt(pow(xg-xb,2)+pow(yg-yb,2)),newdistance=sqrt(pow(xg-xb,2)+pow(yg-yb,2)); //calculate the old and new distance 
  for(i=0;i<=100;i=i+5){ //charging the game
  if(pz==1){
  	
   system("color f ");//Sets the window color
  }
 printf("\n\n\n\n\n\n\n");
 printf("\t\t\t\t\t\t %c %c %c %c %c %c \n",1,2,1,2,1,2);
 printf("\t\t\t\t\t\t %c %c \n",2,1);
 printf("\t\t\t\t\t\t%c %c %c %c %c %c \n",1,2,1,2,1,2);
 printf("\t\t\t\t\t\t%c %c %c %c %c %c \n",2,1,2,1,2,1);
 printf("\t\t\t\t\t\t%c %c %c %c %c %c \n",1,2,1,2,1,2);
 printf("\t\t\t\t\t\t%c %c \n",2,1);
 printf("\t\t\t\t\t\t%c %c%c%c%c %c \n",1,2,1,2,1,2);
 printf("\t\t\t\t\t\t %c %c \n",2,1);
 printf("\t\t\t\t\t\t %c %c %c %c %c %c \n",2,1,2,1,2,1);
 printf("\t\t\t\t\t \n");
 printf("\t\t\t\t %c %c %c please .....%d %%\n",2,2,2,i);
  printf("\t\t\t\t\t");
  // the loading part
  for(j=1;j<=m;j++){
   printf(". ");
  }
  
 sleep(1);//waits for 1s between each point

  m++; 
  wx++;
  if(wx==1){
   system("color A ");
  }else if(wx==2){
   system("color B"); 
  }else if(wx==3){
   system("color 2 ");
  }else if(wx==4){
   system("color 4 ");
  }else if(wx==5){
   system("color F ");
  }else if(wx==6){
   system("color C ");
  }else if(wx==7){
   system("color 8 ");
  }else if(wx==8){
   system("color 9 ");
   wx=0;
  }
  pz=2;
  system("cls"); //clears the window 
 }
 do{
 if(q=='9'){
    do{  
 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t if you want to :\n\t\t\t\t\tplay insert 1\n\t\t\t\t\tchoose the level to play insert 2\n\t\t\t\t\tknow rules insert 3\n\t\t\t\t\tExit 4");
 z=getch();//get one char no need to press enter
 system("cls");//clear the console screen
 }while((z!='1')&&(z!='2')&&(z!='3')&&(z!='4'));//if the users enters something besides 1 or 2 or 3 or 4 it keeps wrinting the printf statement
  }
  // the rules part
 if((z=='1')||(z=='2')||(z=='3')){
     if((z=='3')&&(p=='1')){
   do{
       do{
      printf("\n");  
      printf("\t\t");
      puts(t1);//prints the t1 array
      printf("\n");Color(14);
   printf("\t\t\t\t\t\t<==%c",2);
   ab=getch();
   system("cls");
   }while(ab!=75);//75: left arrow
   do{
    Color(15);
    printf("\n");
    printf("\t\t");
    puts(t1);
    Color(14);
        printf("\t\t\t\t\t\t%c<==",2);
        printf("\n");
        printf("\t\t");
        Color(15);
     puts(t2);
     Color(14);
   printf("\t\t\t\t\t\t%c==>",2);
   ab=getch();
   system("cls");
   }while(ab!=77);
   do{
    Color(15);
    printf("\n");
    printf("\t\t");
     puts(t1);
     Color(14);
   printf("\t\t\t\t\t\t%c<==",2);
   printf("\n");
   printf("\t\t");
   Color(15);
   puts(t2);
   Color(14);
   printf("\t\t\t\t\t\t==>%c",2);
   printf("\n");
   printf("\t\t");
   Color(15);
   puts(t3);
   Color(14);
   printf("\t\t\t\t\t\t%c\n\t\t\t\t\t\t%c\n",94,186);
   printf("\t\t\t\t\t\t%c",2);
   ab=getch();
   system("cls");
   }while(ab!=72);
   do{
    Color(15);
    printf("\n");
    printf("\t\t");
   puts(t1);
   Color(14);
   printf("\t\t\t\t\t\t%c<==",2);
   printf("\n");
   printf("\t\t");
   Color(15);
   puts(t2);
   Color(14);
   printf("\t\t\t\t\t\t==>%c",2);
   printf("\n");
   printf("\t\t");
   Color(15);
   puts(t3);
   Color(14);
   printf("\t\t\t\t\t\t%c",2);
   printf("\n");
   printf("\t\t\t\t\t\t%c\n\t\t\t\t\t\t%c\n",94,186);
   printf("\t\t");
   Color(15);
   puts(t4);
   Color(14);
   printf("\t\t\t\t\t\t%c\n",2);
   printf("\t\t\t\t\t\t%c\n\t\t\t\t\t\t%c\n",186,94);
    ab=getch();
    system("cls");  
   }while(ab!=80);
   do{
   	
    Color(15);
    printf("\n");
    printf("\t\t");
   puts(t1);
   Color(14);
   printf("\t\t\t\t\t\t==>%c",2);
   printf("\n");
   printf("\t\t");
   Color(15);
   puts(t2);
   Color(14);
   printf("\t\t\t\t\t\t%c<==",2);
   printf("\n");
   printf("\t\t");
   Color(15);
    puts(t3);
    Color(14);
   printf("\t\t\t\t\t\t%c\n",2);
   printf("\t\t\t\t\t\t%c\n\t\t\t\t\t\t%c\n",94,186);
   printf("\n");
   printf("\t\t");
   Color(15);
      puts(t4);
      Color(14);
   printf("\t\t\t\t\t\t%c\n\t\t\t\t\t\t%c\n",186,94);
   printf("\t\t\t\t\t\t%c\n",2);
   Color(15);
   printf("\t\t\tGooooood %c%c%c",2,2,3); 
   printf("\n\t\t\t are you ready !%c Yes (1) or No (2)",63);// the ready part
   ready=getch();
   system("cls");
   //all the code above: show the user the arrow to move the player left right up down
   }while((ready!='1')&&(ready!='2'));
   }while((ready!='1')); 
    }
  do{
   if(p=='1'){//check if the user is ready 
     do{
     printf("\n\n\n\n\n\n\n\n\t\t\t\tchoose level to play : level Easy (1) or Difficult (2)");
        o=getch(); 
     system("cls");  
   }while((o!='1')&&(o!='2'));
   }
   //the game part
   q='6';
   p='5';
 system("cls");
 printf("lifeindex : %d %%",lifeindex);
 printf("\tscore=%d\n",r);
 xv=xb;
 yv=yb;
 if(Firsttime==0){
  if(olddistance<newdistance){ //compare the new and old distance 
   printf("Go back\n");
  }else{
   printf("Go on\n");
  }
 }else if(Firsttime==1){
  printf("Go!!!\n");
 }
 for(i=0;i<ceil(lifeindex/20)+1;i++){
  Color(12);
  printf("%c",3); // print hearts
     }
  printf("\n");
 for(i=0;i<yg;i++){
  printf("\n");// to move down
 }for(i=0;i<xg;i++){
  printf(" ");// to move up
 }
 Color(14);printf("%c",2);
    mvt=getch();
    
 olddistance=newdistance;
 if(mvt==72){// after you move up
  if(yg!=0){
   yg--;
   lifeindex--;
   Firsttime=0;
   r++;
   pp++;
   Beep(900, 100);
  }
 }else if(mvt==80){// after you move down
  if(yg<MAX_HIGHT){ //to not exceed the hghit limeit
   yg++;
   lifeindex--;
   Firsttime=0;
   r++;
   pp++;
   Beep(900, 100);
  }
 }else if(mvt==77){// after you move right
  if(xg<MAX_WIDTH){
   xg++;
   lifeindex--;
   Firsttime=0; 
   r++;
   pp++;
   Beep(900, 100);
    }
 }else if(mvt==75){// after you move left
  if(xg!=0){
   xg--;
   lifeindex--;
   Firsttime==0;
   r++;
   Beep(900, 100);
   pp++;
  
  }
  }
 newdistance=sqrt(pow(xg-xb,2)+pow(yg-yb,2)); // calculates the distance after moving

 az=2;
    }while(((xg!=xv)||(yg!=yv))&& (lifeindex!=0));
    system("cls");//reload the screen
    }
     if((z!='4')){
     do{
     if((xb==xg)&&(yg==yb)){//check the win condition
     printf("\n\n\n\n\n\n\t\t\t\t\twin ");
     printf("\a\a\a\a");
     printf("your score is %d",r-1);
 }else{//lose condition
  printf("\n\n\n\n\n\n\t\t\t\t\tgame over\n\t"); 
  printf("your score is %d",r-1);
 }
 printf(" do you want to play again yes(1) no (2)");//if wanna play again
     w=getch();
     system("cls");  
  }while((w!='1')&&(w!='2'));
     if(w=='1'){//play again
      q='8';
      xg=0;
   yg=0;
   lifeindex=100;
   r=0;
   p='1';
   
  }
 }
 system("cls"); 
 }while((w!='2')&&(z!='4'));
 printf("\n\n\n\n\t\t\t\t\tsee you again");//if doesn't want to play again
}

void Color(int couleurDuTexte) //the definition of the function that puts the color to the text
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDuTexte);
}
