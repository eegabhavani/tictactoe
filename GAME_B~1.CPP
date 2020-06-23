#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#define size 3
void  main()
{
      int x,y,index,choice,k,moves[10],flag=0;
      char player[10];
      int i;
      char* box[size][size]={0,0,0,0,0,0,0,0,0};
   cout<<"\t\n"<<1<<" | "<<2<<" | "<<3;
   cout<<"\t\n"<<"---------";
   cout<<"\t\n"<<4<<" | "<<5<<" | "<<6;
   cout<<"\t\n"<<"---------";
   cout<<"\t\n"<<7<<" | "<<8<<" | "<<9;
   int r;
cout<<"enter 0 to start game with computer other wise 1:";
cin>>k;
  i=k;
onceagain:
     if(i%2==0)
     {
       cout<<i;
       cout<<"\n";
       strcpy(player,"computer");
       cout<<player;
       goto computerinput;
      }
     else
     {
      cout<<"\n";
      strcpy(player,"human");
      cout<<player;
      goto humaninput;
     }

computerinput:

   cout<<"\n choose the shell number from 1 to 9:";
   cin>>choice;
   moves[index]=choice-1;
   x=moves[index]/size;
   y=moves[index]%size;
   box[x][y]="o";
   goto process_box;
   goto condition;

humaninput:
   cout<<"\n choose the shell number from 1 to 9:";
   cin>>choice;
   moves[index]=choice-1;
   x=moves[index]/size;
   y=moves[index]%size;
   box[x][y]="x";
   cout<<box[x][y];
   goto process_box;
   goto condition;
process_box:
    cout<<"\n | "<< box[0][0] <<" | "<< box[0][1] <<" | "<< box[0][2] <<" | "
	<<"\n----------------"
	<<"\n | "<< box[1][0] <<" | "<< box[1][1] <<" | "<< box[1][2] <<" | "
	<<"\n----------------"
	<<"\n | "<< box[2][0] <<" | "<< box[2][1] <<" | "<< box[2][2] <<" | ";
condition:
     for(x=0;x<size;x++)
     {
      if ((box[x][0]==box[x][1])&&(box[x][1]==box[x][2])&&(box[x][2]==box[x][0])&&(box[x][0]!=0)&&(box[x][1]!=0)&&(box[x][2]!=0))
      {
      flag=1;
      goto gameover;
       }
       }
     for(y=0;y<size;y++)
     {
     if ((box[0][y]==box[1][y])&&(box[1][y]==box[2][y])&&(box[2][y]==box[0][y])&&(box[0][y]!=0)&&(box[1][y]!=0)&&(box[2][y]!=0))
      {
      flag=1;
     goto gameover;
     }
    }
     for(x=0;x<size;x++)
      {
       for(y=0;y<size;y++)
	{
	 if(((box[0][0]==box[1][1])&&(box[1][1]==box[2][2])&&(box[2][2]==box[0][0])&&(box[0][0]!=0)&&(box[1][1]!=0)&&(box[2][2]!=0))||((box[2][0]==box[0][2])&&(box[0][2]==box[1][1])&&(box[1][1]==box[2][0])&&(box[2][0]!=0)&&(box[0][2]!=0)&&(box[1][1]!=0)))
	 {
	  flag=1;
	  goto gameover;
	 }
	 else
	 {
	 while(i<8+k)
	 {
	   i++;
	   goto onceagain;
	  }
	 }

      }
     }
gameover:
  int p;
   if(flag==1)
   {
    cout<<"end of the game!!!!!";
    p=strcmp(player,"computer");
    if(p==0)
    cout<<"computer is winner of the game";
    else
    cout<<"human is winner of the game";
   }
   else
   {
   cout<<"game is tied";
   exit(0);
   }
}





