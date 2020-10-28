#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
int p,qqq[4],a[4],sc=0,F=0,qq,adad,oo2,x,retern=0,z=0,pp,et,oo,w,v,zz,t,tt,i,yy,y,k=0,o,f=0,mn,ee,b=0,in1,in2,cer,www,end=0,esi;
char c,xx;
int far * scr=(int far *)0xb8000000;
int far *buffer=(int far *)0x0040001A;
int ar[15][15];
int SCRT[25][80];

void INITIOAL(void){

for(int a=0;a<15;a++)
ar[a][0]=3;
ar[2][0]=-7;
for(int b=0;b<15;b++)
ar[b][1]=11;
ar[0][1]=-1;
ar[2][1]=-8;
ar[6][1]=-24;
ar[14][1]=-36;
for(int c=0;c<15;c++)
ar[c][2]=7;
ar[2][2]=-9;
ar[12][2]=-31;
for(int d=0;d<15;d++)
ar[d][3]=10;
ar[0][3]=-2;
ar[2][3]=-10;
ar[14][3]=-37;
for(int e=0;e<15;e++)
ar[e][4]=9;
ar[0][4]=-3;
ar[2][4]=-11;
for(int f=0;f<15;f++)
ar[f][5]=8;
ar[2][5]=-12;
for(int g=0;g<15;g++)
ar[g][6]=6;
ar[2][6]=-13;
for(int h=0;h<15;h++)
ar[h][7]=4;
ar[2][7]=-14;
for(int i=0;i<15;i++)
ar[i][8]=5;
ar[2][8]=-15;
for(int j=0;j<15;j++)
ar[j][9]=2;
ar[2][9]=-16;
for(int k=0;k<15;k++)
ar[k][10]=1;
ar[2][10]=-17;
for(int l=0;l<15;l++)
ar[l][11]=12;
ar[2][11]=-18;
ar[12][11]=-32;
for(int m=0;m<15;m++)
ar[m][13]=14;
ar[0][13]=-4;
ar[2][13]=-19;
ar[14][13]=-38;
for(int n=0;n<15;n++)
ar[n][14]=13;
ar[2][14]=-20;
ar[13][14]=-34;
for(int o=0;o<15;o++)
ar[o][1]=11;
for(int p=0;p<15;p++)
ar[p][15]=-100;
ar[2][15]=15;
}
char funky(int &f) {
	c=getch();
		if(c==0)
		 {
			f=1;
			c=getch();
		}
		else
			f=0;
			return(c);
}


void docommand (int f,char c){
if (f==0 && ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') ) || c==32) //if A-Z or a-z or 0-9 hits

		    z=ar[z][10];
   if(f==0 && c==27)
		    z=2;
      if(f==0 && c==8)
		   z=ar[z][1];
 if(f==1)
switch(c){
      case 77: //rast
      z=ar[z][2];
      break;
      case 75 :  //chap
      z=ar[z][3];
      break;
      case 72:   //bala
      z=ar[z][4];
      break;
      case  80:    // paeen
      z=ar[z][5];
      break;
      case 13:          //enter
      z=ar[z][6];
      break;
      case 115:        //save
      z=ar[z][7];
      break;
      case 108:      //load
      z=ar[z][8];
      break;
      case 27:           //esc
      z=2;
      break;
      case 114 :   //right
      z=ar[z][11];
      break;
      case 76 :   //left
      z=ar[z][12];
      break;
      case 109 :   //middle
      z=ar[z][13];
      break;
      }
}

struct stack
{

	int A[1000];
	int last;
	init()
	{         clrscr();
		 for(int r=0;r<2000;r++)
		*(scr+r)=0x35*256+32;
		*(scr+29+12*80)=0x35*256+2;
		*(scr+50+12*80)=0x35*256+2;

	}

	int pop(void);
	int push(int c);
	int isfull()
	{
		 return last==-1;
	}
	int isempty()
	{
		 return last==99;
	}
} Q,q;
int stack :: push(int c)
{
	if(!isfull())
	{
		last++;
		A[last]=c;
	}
}
int stack :: pop(void)
{
	if(!isempty())
	{
		c=A[last];
		last--;
	}
return c;
}
void nama()
{
 int o=0;
int N[2000]={0};
   for(int i=0;i<=q.last;i++)
		      N[i]=q.A[i];
   for(int j=0;j<=Q.last;j++)
		      N[i+j]=Q.A[Q.last-j];
   for(int p=in1;p<in1+19;p++)
   {
	 *(scr+o+30+12*80)=0x35*256+N[p];
		 o++;
   }
}
void farsi()
{
      if(c=='a')
       {a[0]=938;a[1]=938;a[2]=937;a[3]=937;tt=0;}
       if(c=='s')
      { a[0]=936;a[1]=936;a[2]=935;a[3]=935;tt=0;}
       if(c=='f')
      { a[0]=915;a[1]=915;a[2]=914;a[3]=914;tt=0;}
       if(c=='g')
      { a[0]=1011;a[1]=1011;a[2]=1009;a[3]=1009;tt=0;}
       if(c=='h')
      { a[0]=912;a[1]=913;a[2]=912;a[3]=912;tt=0;}
	if(c=='j')
      {a[0]=919;a[1]=919;a[2]=918;a[3]=918;tt=0; }
	if(c=='k')
      {a[0]=915;a[1]=915;a[2]=914;a[3]=914;tt=0;}
	if(c=='l')
      {a[0]=1013;a[1]=1013;a[2]=1012;a[3]=1012;tt=0; }
	if(c=='z')
      {a[0]=992;a[1]=992;a[2]=992;a[3]=992;tt=0; }
	if(c=='x')
      {a[0]=943;a[1]=943;a[2]=943;a[3]=943;tt=0; }
	if(c=='c')
      {a[0]=933;a[1]=933;a[2]=933;a[3]=933;tt=0; }
	if(c=='v')
      {a[0]=932;a[1]=932;a[2]=932;a[3]=932;tt=0; }
	if(c=='b')
      {a[0]=931;a[1]=931;a[2]=931;a[3]=931;tt=0; }
	if(c=='n')
      {a[0]=930;a[1]=930;a[2]=930;a[3]=930;tt=0; }
	if(c=='q')
      {a[0]=942;a[1]=942;a[2]=941;a[3]=941;tt=0; }
	if(c=='w')
      {a[0]=940;a[1]=940;a[2]=939;a[3]=939;tt=0; }
	if(c=='r')
      {a[0]=1004;a[1]=1004;a[2]=1003;a[3]=1003;tt=0; }
	if(c=='t')
      {a[0]=1002;a[1]=1002;a[2]=1001;a[3]=1001;tt=0;}
	if(c=='y')
      {a[0]=1000;a[1]=999;a[2]=998;a[3]=997;tt=0; }
	if(c=='u')
      {a[0]=996;a[1]=995;a[2]=994;a[3]=993;tt=0; }
	if(c=='i')
      {a[0]=1019;a[1]=1018;a[2]=1017;a[3]=1017;tt=0; }
	if(c=='o')
      {a[0]=929;a[1]=929;a[2]=928;a[3]=928;tt=0; }
	if(c=='p')
      {a[0]=927;a[1]=927;a[2]=926;a[3]=926;tt=0;}
	if(c==',')
      {a[0]=1016;a[1]=1016;a[2]=1016;a[3]=1016;tt=0;}
       if(c==',')
      {a[0]=1016;a[1]=1016;a[2]=1016;a[3]=1016;tt=0;}
	if(c=='1')
      {tt=1;c=897; }
	if(c=='2')
      { tt=1;c=898; }
	if(c=='3')
      {tt=1;c=899;}


}
void bargasht()
{
       if(Q.A[Q.last]==938||Q.A[Q.last]==937)
       c='a';
       farsi();
       for(int z=0;z<4;z++)
       qqq[z]=a[z];
       if(Q.A[Q.last]==936||Q.A[Q.last]==935)
       c='s';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
       if(Q.A[Q.last]==914||Q.A[Q.last]==915)
       c='f';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
       if(Q.A[Q.last]==1011||Q.A[Q.last]==1009)
       c='g';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
       if(Q.A[Q.last]==912||Q.A[Q.last]==913)
       c='a';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	if(Q.A[Q.last]==918||Q.A[Q.last]==919)
       c='j';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	if(Q.A[Q.last]==914||Q.A[Q.last]==915)
       c='k';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
       if(Q.A[Q.last]==1014||Q.A[Q.last]==1015)
       c='l';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
       if(Q.A[Q.last]==992)
       c='z';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
       if(Q.A[Q.last]==943)
       c='x';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
       if(Q.A[Q.last]==933)
       c='c';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	if(Q.A[Q.last]==932)
       c='v';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	if(Q.A[Q.last]==931)
       c='b';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
       if(Q.A[Q.last]==930)
       c='n';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	 if(Q.A[Q.last]==942||Q.A[Q.last]==941)
       c='q';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	 if(Q.A[Q.last]==939||Q.A[Q.last]==940)
       c='w';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	 if(Q.A[Q.last]==1003||Q.A[Q.last]==1004)
       c='r';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	 if(Q.A[Q.last]==1001||Q.A[Q.last]==1002)
       c='t';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	if(Q.A[Q.last]==997||Q.A[Q.last]==998||Q.A[Q.last]==999||Q.A[Q.last]==1000)
       c='y';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	 if(Q.A[Q.last]==912||Q.A[Q.last]==913)
       c='h';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	if(Q.A[Q.last]==993||Q.A[Q.last]==994||Q.A[Q.last]==995||Q.A[Q.last]==996)
       c='u';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	if(Q.A[Q.last]==1017||Q.A[Q.last]==1018)
       c='i';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	if(Q.A[Q.last]==928||Q.A[Q.last]==929)
       c='o';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
	if(Q.A[Q.last]==926||Q.A[Q.last]==927)
       c='p';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];
       if(Q.A[Q.last]==1016)
       c=',';
       farsi();
       for(z=0;z<4;z++)
       qqq[z]=a[z];



}
void tashkhis()
{
	if(www==0)
		esi=1;
	if(www!=0)
		esi=2;
}
void F1()
{
	if(!q.isfull())
	{        if (F != 0)
			farsi;
			tashkhis();
		if (F == 0 || (tt == 1 && F != 0))
		{
			if(esi==1)
			{
				if (oo2 == 0)
				{
					while (Q.last>0)
					{
					if(in2>19)
					in1++;
					q.push(Q.pop());
					}
					Q.last = 0;
					in2=q.last+Q.last;
					*(scr+80 + cer+30+12*80) = 0x33*256 + 94;
					cer=q.last+Q.last;
					if(cer>19)
					cer=19;
					if(in2>19)
					in1=in2-19;
					oo2 = 1;

				}
			}
			if (F != 0)
			farsi();
			in2++;
			if (in2>19)
			in1++;
			*(scr+80 + cer+30+12*80) = 0x33*256 + 94;
			cer++;
			if(esi==1 && Q.last>1)
			cer--;
			if(esi==2 && q.last>0)
			cer--;
			if (cer>19)
			cer = 19;
			*(scr+80 + cer+30+12*80) = 0x35*256 + 94;
			if (F == 0 || tt == 1)
			{
				if (tt==1)
					adad = 1;
				q.last++;
				q.A[q.last] = c;
			}
			oo=0;
		}
		if (F != 0 && tt == 0)
		{

			if (esi == 2)
			{
				if (oo == 0)
				{
					while (q.last>0)
						Q.push(q.pop());
					if (adad == 1)
						Q.last = Q.last+2;
						q.last=0;
					oo = 1;
				}
			}
			oo2 = 0;
			farsi();
			if (tt == 0)
			{
				Q.last++;
				if (c == 32)
				Q.A[Q.last] = c;
				else
				{
					c = a[3];
					Q.A[Q.last] = c;
					if (adad != 1)
					{
						if(Q.A[Q.last-1]!=32 && Q.A[Q.last-2]==32)
						//ghabli aval ast
							Q.A[Q.last-1]=qqq[0];
						if(Q.A[Q.last-1]!=32 && Q.A[Q.last-2]!=32)
						//ghabli vasat ast
							Q.A[Q.last-1]=qqq[1];
					}
					bargasht();
				}
				adad=0;
			}
		}
	}
}
void F2()
{
	sc=4;
}

void F7()
{
		if (in2 > q.last+Q.last)
		in2=q.last+Q.last;
		if(in2>19)
		in1=in2-19;
		else
		in1=0;
		*(scr+80 + cer+30+12*80) = 0x33*256 + 94;
		cer++;
		if (cer >= 19)
		{
			cer = 19;
			in2++;
			if (in2 > 19)
			in1++;
		}
		*(scr+80 + cer+30+12*80)=0x35*256 + 94;
		if (Q.last > 0)
		{
			//  if (Q.last <= 0)
			//	Q.last = 1;
			q.push(Q.pop());
			Q.A[Q.last+1] = 32;
		}
       //	}
}

void F10()
{
	*(scr+80 + cer+30+12*80) = 0x33*256 + 94;
	cer--;
	if(cer <= 0)
	{
		cer = 0;
		in2--;
		if (in2 > 19)
			in1--;
		if (in2 < 19)
		{
			in2 = 19;
			in1 = 0;
		}
	}
	*(scr+80 + cer+30+12*80) = 0x35*256 + 94;
	if (q.last > 0)
	{
		if (Q.last <= 0)
		Q.last = 1;
		Q.push(q.pop());
		q.A[q.last + 1] = 32;
	}
}

void F11()
{

	if ((F == 0 && q.last > 0) || (F == 1 && Q.last < 1))
	{
		*(scr+80 + cer+30+12*80) = 0x33*256 + 94;
		cer--;
		if (cer <= 0)
		{
			cer = 0;
			in2--;
			if (in2 > 19)
				in1--;
			if(in2 < 19)
			{
				in2 = 19;
				in1 = 0;
			}
		}
		*(scr+80 + cer+30+12*80) = 0x35*256 + 94;
		// if (q.last <= 0)
		// q.last = 0;
		if(q.A[q.last]<0)
		{
		   while(q.A[q.last]<0)
		{
			Q.push(q.pop());
			q.A[q.last + 1] = 32;}
			F=1;
		}

		 else{
		q.pop();
		q.A[q.last + 1] = 32;
		}
	}
	if ((F == 1 && Q.last > 0) || (F == 0 && q.last < 1))
	{
		if (Q.last <= 0)
		Q.last = 1;
		Q.pop();
		Q.A[Q.last + 1] = 32;
	}
	bargasht();
}

void fahm(z)
{
	switch (z)
      {
	case 1:
	F1();
	break;
	case 2:
	F2();
	break;
	case 7:
	F7();
	break;
	case 10:
	F10();
	break;
	case 11:
	F11();
	break;
     }
}

main()
{
	 int f;
	 q.init();
	 INITIOAL();
	 while(sc!=4)
		{
			c=funky(f);
			if(c==')')
				{
					F=!F;
					*(scr+80 + cer) = 0x33*256 + 94;
					c=32;
					retern=1;
				}
		if(c!=32 && end==0)
			{
				www=F;
				 end=1;
			}
			if(F!=0)
			farsi();
			docommand(f,c);
			fahm(z);
			nama();
		}
}