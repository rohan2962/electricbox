#include <allegro.h>
//#define ALFONT_DLL
#include<alfont.h>
#include<string.h>
#include "data.h"
DATAFILE *data;
enum{off,on};
int level=1,lno=1;
int a=0,b=0,c,d,i=0,j=0,coord[2],tuto=off;
char o=' ',m=' '; 
ALFONT_FONT *fnt;
	ALFONT_FONT *fnt1;
	ALFONT_FONT *fnt2;
void init();
void deinit();
void fontinit(char *arg);
struct Bulb
{
       int x,y;
}b1; 
struct Fan
{
       int x,y;
}f;
struct Solarpanel
{
       int x,y;
}s,S;
struct Generator
{
       int x,y;
}g,G;
struct Kettle
{
       int x,y;
}k;
struct Pullerbot
{
       int x,y;
}p;
struct Pusherbot
{
       int x,y;
}t;
struct end1
{
       int x,y;
}e;
struct wal
{
       int x,y;
}w,W;       
class block{
      char obj,obj1;

      int p,x,y,f,l,a,w;
      public:
      
             void val(int a,int b)
             {
              x=a;
              y=b;
             }
             void put(char ob,int f1=0)
             {
                  f=f1;
                  switch(ob)
                  {
                            case 'p':
                                 
                                 {
                                     
                                     blit((BITMAP*)data[power].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='p';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                            case 'P':
                                 {
                                     
                                     blit((BITMAP*)data[powon].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='P';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }      
                            case 'v':
                                 {
                                     
                                     blit((BITMAP*)data[wirev].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='v';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                 case 'V':
                                 {
                                     
                                     blit((BITMAP*)data[von].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='V';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                 case 'h':
                                 {
                                     
                                     blit((BITMAP*)data[wireh].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='h';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }
                                  case 'H':
                                 {
                                     
                                     blit((BITMAP*)data[hon].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='H';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }
                            case 'n':
                                 {
                                     
                                     blit((BITMAP*)data[wiren].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='n';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                            case 'N':
                                 {
                                     
                                     blit((BITMAP*)data[non].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='N';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }      
                            case 'e':
                                 {
                                     
                                     blit((BITMAP*)data[end].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='e';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                            case 'E':
                                 {
                                     
                                     blit((BITMAP*)data[endon].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='E';
                                     if(f==1)
                                     obj1=obj;
                                    
                                     break;
                                 } 
                                 case 'f':
                                 {
                                     
                                     blit((BITMAP*)data[fan].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='f';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                  case 'F':
                                 {
                                     obj='F';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }
                                 case 'g':
                                 {
                                     
                                     blit((BITMAP*)data[gen].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='g';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                 case 'G': 
                                      {
                                     obj='G';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }    
                            case 'b':
                                 {
                                     
                                     blit((BITMAP*)data[bulb].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='b';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                case 'B':
                                 {
                                     
                                     blit((BITMAP*)data[bulbon].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='B';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }  
                           case 's':
                                 {
                                     
                                     blit((BITMAP*)data[solar].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='s';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                 case 'S':
                                 {
                                     
                                     blit((BITMAP*)data[solon].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='S';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }  
                            case 'w':
                                 {
                                     
                                     blit((BITMAP*)data[wires].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='w';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                 case 'W':
                                 {
                                     
                                     blit((BITMAP*)data[son].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='W';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }
                                 case 't':
                                 {
                                     
                                     blit((BITMAP*)data[wiret].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='t';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                 case 'T':
                                 {
                                     
                                     blit((BITMAP*)data[ton].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='T';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                  case 'k':
                                 {
                                     
                                     blit((BITMAP*)data[kettle].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='k';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                 case 'K':
                                 {
                                     
                                     blit((BITMAP*)data[kon].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='K';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }
                                 case 'u':
                                 {
                                     
                                     blit((BITMAP*)data[pullbot].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='u';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }   
                                  case 'U':
                                 {
                                     
                                     blit((BITMAP*)data[pullbot].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='U';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 } 
                                 case 'o':
                                 {
                                     
                                     blit((BITMAP*)data[pushbot].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='o';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }   
                                  case 'O':
                                 {
                                     
                                     blit((BITMAP*)data[pushbot].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='O';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }
                                 case 'l':
                                 {
                                     
                                     blit((BITMAP*)data[wall].dat,screen,0,0,x,y,x+40,y+40);
                                     obj='l';
                                     if(f==1)
                                     obj1=obj;
                                     break;
                                 }  
                            case ' ':
                                 	{
                                                if(y<=480)
                                                rectfill(screen,x,y,x+40,y+40,makecol(0,163,255));
                                                else
                                                rectfill(screen,x,y,x+40,y+40,makecol(0,141,255));
                                                obj=' ';
                                                break;
                                                
                                  }       
                           }
                  }                                 
        block()
       {
            obj=' ';
            obj1=' ';
            l=off;
            p=off;
            a=off;
            w=off;
            f=0;
		 
       }
       int retx()
       {return x;} 
       int retf()
       {return f;} 
       int rety()
       {return y;}
       int reta()
       {return a;} 
       int retl()
       {return l;}
       int retp()
       {return p;}
       int retw()
       {return w;}   
       char retobj()
       {return obj;}
       char retobj1()
       {return obj1;} 
       void getp(int s)
       {
            p=s;
       }         
       void getl(int s)
       {
            l=s;
       } 
       void geta(int s)
       {
            a=s;
       }
       void getw(int s)
       {
            w=s;
       } 
       void getobj(char s)
       {
            obj=s;
       }           
        void getobj1(char s)
       {
            obj1=s;
       }            
      }bl[50][50];
void checkbox(int p,int q,int coord[])
{
    int a,b,c,d,i=0,j=0;
    for(a=0,c=a+40;a<=600;a+=40,c+=40,i++)
    for(b=40,d=b+40,j=0;b<600;b+=40,d+=40,j++)
     if(p>=a&&p<=c&&q>=b&&q<=d)
     {
                               coord[0]=i;
                               coord[1]=j;
     }
}
              
int checkpow()
{
     for(int i=0;i<=10;i++)
     for(int j=0;j<=15;j++)
     {
             if(bl[i][j].retobj()=='P')
             return on;
     }
     return off;
}
void didsolarpanelon()
{
     int i=0; 
     int g=s.x,h=s.y; 
     while(i<2)
     {

	       if(i==1)
	       {
		       g=S.x;
		       h=S.y;
	       }
	       i++;
if(bl[g][h].retobj()=='s'&&bl[g][h].retl()==on)
 {  
           bl[g][h].getp(on);
           bl[g][h].put(bl[g][h].retobj()-32);
           rest(100);
           for(int h=0;h<=15;h++)
                  {
                  for(int g=0;g<=10;g++)
                 {
                           if(bl[g-1][h].retp()==on&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj()=='e'||bl[g][h].retobj1()=='t')&&(bl[g-1][h].retobj1()=='h'||bl[g-1][h].retobj()=='e'||bl[g-1][h].retobj1()=='t'))
                                           {
                                                                                     bl[g][h].getp(on);
                                                                                     bl[g][h].put(bl[g][h].retobj()-32);
                                                                                        
                                                   
                                           }
                  }
                  for(int g=10;g>=0;g--)
                  {
                          if(bl[g+1][h].retp()==on&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj()=='e')&&(bl[g+1][h].retobj1()=='h'||bl[g+1][h].retobj()=='e'))
                                           {
                                                                                     bl[g][h].getp(on);
                                                                                      bl[g][h].put(bl[g][h].retobj()-32);
                                                                                                      
                                           }
                  }
                  }
            for(int g=0;g<=10;g++)
                                   {for(int h=0;h<=15;h++)
                                     {
                                           if(bl[g][h-1].retp()==on&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='n'||bl[g][h].retobj1()=='t'||bl[g][h].retobj()=='e'))
                                           {
                                                  bl[g][h].getp(on);
                                                   bl[g][h].put(bl[g][h].retobj()-32);
                                           }
                                     }
                                     for(int h=15;h>=0;h--)
                                    {
                                           if(bl[g][h+1].retp()==on&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='w'||bl[g][h].retobj()=='e'))
                                          {
                                                  bl[g][h].getp(on);
                                                  bl[g][h].put(bl[g][h].retobj()-32);
                                          }
                                    }
}               
}
}
}
void didsolarpaneloff()
{
     int i=0; 
     int g=s.x,h=s.y; 
     while(i<2)
     {

	       if(i==1)
	       {
		       g=S.x;
		       h=S.y;
	       }
	       i++;
 if(bl[g][h].retobj()=='S'&&(bl[g][h].retl()==off))
 {  
           bl[g][h].getp(off);
           bl[g][h].put(bl[g][h].retobj()+32);
           rest(100);
             for(int h=0;h<=15;h++)
                  {
                  for(int g=0;g<=10;g++)
                  {
                           if(bl[g-1][h].retp()==off&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj1()=='t'||bl[g][h].retobj()=='e')&&bl[g][h].retobj()!='B')
                                           {
                                                                                     bl[g][h].getp(off);
                                                  bl[g][h].put(bl[g][h].retobj()+32); 
                                           }
                                           if(bl[g][h].retobj()=='B')
                                           break;
                  }
                  for(int g=10;g>=0;g--)
                  {
                          if(bl[g+1][h].retp()==off&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj()=='e')&&bl[g][h].retobj()!='B')
                                           {
                                                                                     bl[g][h].getp(off);
                                                  bl[g][h].put(bl[g][h].retobj()+32);             
                                           }
                                           if(bl[g][h].retobj()=='B')
                                           break;
                  }
                  }
            for(int g=0;g<=10;g++)
                                   {for(int h=0;h<=15;h++)
                                     {
                                           if(bl[g][h-1].retp()==off&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='n'||bl[g][h].retobj()=='e')&&bl[g][h].retobj()!='B')
                                           {
                                                  bl[g][h].getp(off);
                                                  bl[g][h].put(bl[g][h].retobj()+32);      
                                           }
                                           if(bl[g][h].retobj()=='B')
                                           break;
                                     }
                                     for(int h=15;h>=0;h--)
                                    {
                                           if(bl[g][h+1].retp()==off&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='w'||bl[g][h].retobj()=='e')&&bl[g][h].retobj()!='B')
                                          {
                                                  bl[g][h].getp(off);
                                                 bl[g][h].put(bl[g][h].retobj()+32);
                                          }
                                          if(bl[g][h].retobj()=='B')
                                           break;
                                   }
                  }
                 
}
}
}
void didgeneratoron()
{
     int i=0; 
     int g=::g.x,h=::g.y; 
     while(i<2)
     {

	       if(i==1)
	       {
		       g=G.x;
		       h=G.y;
	       }
	       i++;
if(bl[g][h].retobj()=='g'&&bl[g][h].reta()==on)
 {  
           bl[g][h].getp(on);
           bl[g][h].put(bl[g][h].retobj()-32);
           rest(100);
           for(int h=0;h<=15;h++)
                  {
                  for(int g=0;g<=10;g++)
                  {
                           if(bl[g-1][h].retp()==on&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj1()=='t'||bl[g][h].retobj()=='e'))
                                           {
                                                                                     bl[g][h].getp(on);
                                                                                     bl[g][h].put(bl[g][h].retobj()-32); 
                                                                                        
                                                  
                                           }
                  }
                  for(int g=10;g>=0;g--)
                  {
                          if(bl[g+1][h].retp()==on&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj()=='e'))
                                           {
                                                                                     bl[g][h].getp(on);
                                                                                     bl[g][h].put(bl[g][h].retobj()-32);
                                                                                        
                                                               
                                           }
                  }
                  }
            for(int g=0;g<=10;g++)
                                   {for(int h=0;h<=15;h++)
                                     {
                                           if(bl[g][h-1].retp()==on&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='n'||bl[g][h].retobj1()=='t'||bl[g][h].retobj()=='e'))
                                           {
                                                  bl[g][h].getp(on);
                                                  bl[g][h].put(bl[g][h].retobj()-32);
                                           }
                                     }
                                     for(int h=15;h>=0;h--)
                                    {
                                           if(bl[g][h+1].retp()==on&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='w'||bl[g][h].retobj()=='e'))
                                          {
                                                  bl[g][h].getp(on);
                                                  bl[g][h].put(bl[g][h].retobj()-32);
                                          }
                                    }
                  }
                  
}
}
}
void didgeneratoroff()
{int i=0; 
     int g=::g.x,h=::g.y;    
     while(i<2)
     {

	       if(i==1)
	       {
		       g=G.x;
		       h=G.y;
	       }      i++;
if(bl[g][h].retobj()=='G'&&bl[g-1][h].reta()==off&&bl[g][h-1].reta()==off)
 {
	   bl[g][h].getp(off);
           bl[g][h].put(bl[g][h].retobj()+32);
           rest(100);
            for(int h=0;h<=15;h++)
                  {
                  for(int g=0;g<=10;g++)
                  {
                           if(bl[g-1][h].retp()==off&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj1()=='t'||bl[g][h].retobj()=='e'))
                                           {
                                                                                     bl[g][h].getp(off);
                                                  bl[g][h].put(bl[g][h].retobj()+32); 
                                           }
                  }
                  for(int g=10;g>=0;g--)
                  {
                          if(bl[g+1][h].retp()==off&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj()=='e'))
                                           {
                                                                                     bl[g][h].getp(off);
                                                  bl[g][h].put(bl[g][h].retobj()+32);      
                                           }
                  }
                  }
            for(int g=0;g<=10;g++)
                                   {for(int h=0;h<=15;h++)
                                     {
                                           if(bl[g][h-1].retp()==off&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='n'||bl[g][h].retobj1()=='t'||bl[g][h].retobj()=='e'))
                                           {
                                                  bl[g][h].getp(off);
                                                  bl[g][h].put(bl[g][h].retobj()+32);      
                                           }
                                     }
                                     for(int h=15;h>=0;h--)
                                    {
                                           if(bl[g][h+1].retp()==off&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='w'||bl[g][h].retobj()=='e'))
                                          {
                                                  bl[g][h].getp(off);
                                                 bl[g][h].put(bl[g][h].retobj()+32);
                                          }
                                   }
                  }
                 
                                  } 
 }
}

void isbulbon()
{
    int g=b1.x,h=b1.y;
 if(bl[g][h].retobj()=='B')
 {
                                      
                                      for(int g1=g+1,h1=g-1,l=0,n=0;g1<15;g1++,h1--)
                                      {
                                              if(l==0)
                                              bl[g1][h].getl(on);
                                              if(bl[g1][h].retobj()!='v'&&bl[g1][h].retobj()!='h'&&bl[g1][h].retobj()!='n'&&bl[g1][h].retobj()!='w'&&bl[g1][h].retobj()!='t'&&bl[g1][h].retobj()!=' ')
                                                   l=1;
                                              if(h1>=0&&n==0)
                                              bl[h1][h].getl(on);
                                              if(bl[h1][h].retobj()!='v'&&bl[h1][h].retobj()!='h'&&bl[h1][h].retobj()!='n'&&bl[h1][h].retobj()!='w'&&bl[h1][h].retobj()!='t'&&bl[h1][h].retobj()!=' ')
                                               n=1;
                                      }
                                       for(int g1=h+1,h1=h-1,l=0,n=0;g1<15;g1++,h1--)
                                      {
                                             if(l==0)
                                              bl[g][g1].getl(on);
                                              if(bl[g][g1].retobj()!='v'&&bl[g][g1].retobj()!='h'&&bl[g][g1].retobj()!='n'&&bl[g][g1].retobj()!='w'&&bl[g][g1].retobj()!='t'&&bl[g][g1].retobj()!=' ')
                                              l=1;
                                              if(h1>=0&&n==0)
                                              bl[g][h1].getl(on);
                                              if(bl[g][g1].retobj()!='v'&&bl[g][g1].retobj()!='h'&&bl[g][g1].retobj()!='n'&&bl[g][g1].retobj()!='w'&&bl[g][g1].retobj()!='t'&&bl[g][g1].retobj()!=' ')
                                              l=1;
                                      }                             
 } 
}
void isfanon()
{
     int g=f.x,h=f.y;
 if(bl[g][h].retobj()=='F')
 {
                                      
                                      for(int g1=g+1,h1=g-1,l=0,n=0;g1<15;g1++,h1--)
                                      {
                                              if(l==0)
                                              bl[g1][h].geta(on);
                                              if(bl[g1][h].retobj()!='v'&&bl[g1][h].retobj()!='h'&&bl[g1][h].retobj()!='n'&&bl[g1][h].retobj()!='t'&&bl[g1][h].retobj()!='w'&&bl[g1][h].retobj()!=' ')
                                                   l=1;
                                              if(h1>=0&&n==0)
                                              bl[h1][h].geta(on);
                                              if(bl[h1][h].retobj()!='v'&&bl[h1][h].retobj()!='h'&&bl[h1][h].retobj()!='n'&&bl[h1][h].retobj()!='t'&&bl[h1][h].retobj()!='w'&&bl[h1][h].retobj()!=' ')
                                               n=1;
                                      }
                                       for(int g1=h+1,h1=h-1,l=0,n=0;g1<15;g1++,h1--)
                                      {
                                            if(l==0)
                                              bl[g][g1].geta(on);
                                               if(bl[g][g1].retobj()!='v'&&bl[g][g1].retobj()!='h'&&bl[g][g1].retobj()!='n'&&bl[g][g1].retobj()!='t'&&bl[g][g1].retobj()!='w'&&bl[g][g1].retobj()!=' ')
                                              l=1;
                                            if(h1>=0&&n==0)
                                              bl[g][h1].geta(on);
                                              if(bl[g][h1].retobj()!='v'&&bl[g][h1].retobj()!='h'&&bl[g][h1].retobj()!='n'&&bl[g][h1].retobj()!='t'&&bl[g][h1].retobj()!='w'&&bl[g][h1].retobj()!=' ')
                                               n=1;
                                      } 
                                       
 } 
}
void onn()
{
  int x=bl[f.x][f.y].retx(),y=bl[f.x][f.y].rety();
  int x1=bl[g.x][g.y].retx(),y1=bl[g.x][g.y].rety();
  int x2=bl[G.x][G.y].retx(),y2=bl[G.x][G.y].rety();
  int x3=bl[e.x][e.y].retx(),y3=bl[e.x][e.y].rety();
  if(bl[f.x][f.y].retobj()=='F')
  blit((BITMAP*)data[fanon3].dat,screen,0,0,x,y,x+40,y+40);
  if(bl[g.x][g.y].retobj()=='G')
  blit((BITMAP*)data[genon1].dat,screen,0,0,x1,y1,x1+40,y1+40);
  if(bl[G.x][G.y].retobj()=='G')
  blit((BITMAP*)data[genon1].dat,screen,0,0,x2,y2,x2+40,y2+40);
  if(bl[e.x][e.y].retobj()=='E')
  blit((BITMAP*)data[endon1].dat,screen,0,0,x3,y3,x3+40,y3+40);
  rest(50);
  if(bl[f.x][f.y].retobj()=='F')
  blit((BITMAP*)data[fanon2].dat,screen,0,0,x,y,x+40,y+40); 
  if(bl[g.x][g.y].retobj()=='G')
  blit((BITMAP*)data[genon2].dat,screen,0,0,x1,y1,x1+40,y1+40);
  if(bl[G.x][G.y].retobj()=='G')
  blit((BITMAP*)data[genon2].dat,screen,0,0,x2,y2,x2+40,y2+40);
  if(bl[e.x][e.y].retobj()=='E')
  blit((BITMAP*)data[endon2].dat,screen,0,0,x3,y3,x3+40,y3+40);
  rest(50);
  if(bl[f.x][f.y].retobj()=='F')
  blit((BITMAP*)data[fanon1].dat,screen,0,0,x,y,x+40,y+40);
  if(bl[g.x][g.y].retobj()=='G')
  blit((BITMAP*)data[genon3].dat,screen,0,0,x1,y1,x1+40,y1+40);
  if(bl[G.x][G.y].retobj()=='G')
  blit((BITMAP*)data[genon3].dat,screen,0,0,x2,y2,x2+40,y2+40);
  if(bl[e.x][e.y].retobj()=='E')
  blit((BITMAP*)data[endon3].dat,screen,0,0,x3,y3,x3+40,y3+40);
  rest(50);
  if(bl[f.x][f.y].retobj()=='F')
  blit((BITMAP*)data[fanon2].dat,screen,0,0,x,y,x+40,y+40);  
  if(bl[g.x][g.y].retobj()=='G')
  blit((BITMAP*)data[genon1].dat,screen,0,0,x1,y1,x1+40,y1+40);
  if(bl[G.x][G.y].retobj()=='G')
  blit((BITMAP*)data[genon1].dat,screen,0,0,x2,y2,x2+40,y2+40);
  if(bl[e.x][e.y].retobj()=='E')
  blit((BITMAP*)data[endon1].dat,screen,0,0,x3,y3,x3+40,y3+40);
  rest(50);
  if(bl[f.x][f.y].retobj()=='F')
  blit((BITMAP*)data[fanon3].dat,screen,0,0,x,y,x+40,y+40);
  if(bl[g.x][g.y].retobj()=='G')
  blit((BITMAP*)data[genon2].dat,screen,0,0,x1,y1,x1+40,y1+40);
  if(bl[G.x][G.y].retobj()=='G')
  blit((BITMAP*)data[genon2].dat,screen,0,0,x2,y2,x2+40,y2+40);
  if(bl[e.x][e.y].retobj()=='E')
  blit((BITMAP*)data[endon2].dat,screen,0,0,x3,y3,x3+40,y3+40);
  rest(50);
  if(bl[e.x][e.y].retobj()=='E')
  {blit((BITMAP*)data[endon3].dat,screen,0,0,x3,y3,x3+40,y3+40);
  rest(50);}
   
   
}
void isbuton()
{
     if(mouse_x>=562&&mouse_y>=100&&mouse_x<=720&&mouse_y<=160&&mouse_b==1)
     {
     if(tuto==off)
     {
                  blit((BITMAP*)data[on2].dat,screen,0,0,562,100,720,160);
                  blit((BITMAP*)data[off1].dat,screen,0,0,562,160,720,220);
                  tuto=on;
                  rest(50);
     }
     }
     else if(mouse_x>=562&&mouse_y>=160&&mouse_x<=720&&mouse_y<=220&&mouse_b==1)
     {
          if(tuto==on)
     {
         blit((BITMAP*)data[on1].dat,screen,0,0,562,100,720,160);
         blit((BITMAP*)data[off2].dat,screen,0,0,562,160,720,220);
         tuto=off;
         rest(50);
     }
     }
     
     
}
     
void isbulboff()
{
      int g=b1.x,h=b1.y;
 if(bl[g][h].retobj()=='b')
 {
                                      
                                      for(int g1=g+1,h1=g-1,l=0,n=0;g1<15;g1++,h1--)
                                      {
                                              if(l==0)
                                              bl[g1][h].getl(off);
                                              if(bl[g1][h].retobj()!='v'&&bl[g1][h].retobj()!='h'&&bl[g1][h].retobj()!='n'&&bl[g1][h].retobj()!='t'&&bl[g1][h].retobj()!='w'&&bl[g1][h].retobj()!=' ')
                                                   l=1;
                                              if(h1>=0&&n==0)
                                              bl[h1][h].getl(off);
                                              if(bl[h1][h].retobj()!='v'&&bl[h1][h].retobj()!='h'&&bl[h1][h].retobj()!='n'&&bl[h1][h].retobj()!='t'&&bl[h1][h].retobj()!='w'&&bl[h1][h].retobj()!=' ')
                                               n=1;
                                      }
                                       for(int g1=h+1,h1=h-1,l=0,n=0;g1<15;g1++,h1--)
                                      {
                                             if(l==0)
                                              bl[g][g1].getl(off);
                                              if(bl[g][g1].retobj()!='v'&&bl[g][g1].retobj()!='h'&&bl[g][g1].retobj()!='n'&bl[g][g1].retobj()!='t'&&bl[g][g1].retobj()!='w'&&bl[g][g1].retobj()!=' ')
                                              l=1;
                                              if(h1>=0&&n==0)
                                              bl[g][h1].getl(off);
                                              if(bl[g][h1].retobj()!='v'&&bl[g][h1].retobj()!='h'&&bl[g][h1].retobj()!='n'&&bl[g][h1].retobj()!='t'&&bl[g][h1].retobj()!='w'&&bl[g][h1].retobj()!=' ')
                                               n=1;
                                      }

 } 
}
void isfanoff()
{
    int g=f.x,h=f.y;
if(bl[g][h].retobj()=='f')
 {
                                      
                                      for(int g1=g+1,h1=g-1,l=0,n=0;g1<15;g1++,h1--)
                                      {
                                              if(l==0)
                                              bl[g1][h].geta(off);
                                              if(bl[g1][h].retobj()!='v'&&bl[g1][h].retobj()!='h'&&bl[g1][h].retobj()!='n'&&bl[g1][h].retobj()!='t'&&bl[g1][h].retobj()!='w'&&bl[g1][h].retobj()!=' ')
                                                   l=1;
                                              if(h1>=0&&n==0)
                                              bl[h1][h].geta(off);
                                              if(bl[h1][h].retobj()!='v'&&bl[h1][h].retobj()!='h'&&bl[h1][h].retobj()!='n'&&bl[h1][h].retobj()!='t'&&bl[h1][h].retobj()!='w'&&bl[h1][h].retobj()!=' ')
                                               n=1;
                                      }
                                       for(int g1=h+1,h1=h-1,l=0,n=0;g1<15;g1++,h1--)
                                      {
                                              if(l==0)
                                              bl[g][g1].geta(off);
                                              if(bl[g][g1].retobj()!='v'&&bl[g][g1].retobj()!='h'&&bl[g][g1].retobj()!='n'&&bl[g][g1].retobj()!='t'&&bl[g][g1].retobj()!='w'&&bl[g][g1].retobj()!=' ')
                                              l=1;
                                              if(h1>=0&&n==0)
                                              bl[g][h1].geta(off);
                                              if(bl[g][h1].retobj()!='v'&&bl[g][h1].retobj()!='h'&&bl[g][h1].retobj()!='n'&&bl[g][h1].retobj()!='t'&&bl[g][h1].retobj()!='w'&&bl[g][h1].retobj()!=' ')
                                               n=1;
                                      } 
                                       
 } 
}
void iskettleon()
{
     int g=k.x,h=k.y;
 if(bl[g][h].retobj()=='K')
 {
                       for(int g1=h+1,l=0;g1<15;g1++)
                                      {
                                             
                                              if(l==0)
                                              {bl[g][g1].geta(on);
                                              if(bl[g][g1].retw()==off&&(bl[g][g1].retobj()==bl[g][g1].retobj1()||bl[g][g1].retobj()==bl[g][g1].retobj1()-32))
                                              {
                                                                  bl[g][g1].getw(on);
                                              int x3=bl[g][g1].retx(),y3=bl[g][g1].rety();
                                              blit((BITMAP*)data[drop1].dat,screen,0,0,x3,y3,x3+40,y3+40);
                                              rest(50);
                                              blit((BITMAP*)data[drop2].dat,screen,0,0,x3,y3,x3+40,y3+40);
                                              rest(50);
                                              blit((BITMAP*)data[drop3].dat,screen,0,0,x3,y3,x3+40,y3+40);
                                              rest(50);
                                              blit((BITMAP*)data[drop4].dat,screen,0,0,x3,y3,x3+40,y3+40);
                                              rest(50);
                                              }
                                              else if(bl[g][g1].retw()==off&&bl[g][g1].retobj()=='k')
                                              bl[g][g1].getw(on);
                                              }
                                            if(bl[g][g1].retobj()!='v'&&bl[g][g1].retobj()!='h'&&bl[g][g1].retobj()!='n'&&bl[g][g1].retobj()!='t'&&bl[g][g1].retobj()!='w'&&bl[g][g1].retobj()!=' '&&bl[g][g1].retobj()!='H')
                                              l=1; 
                                              
                                      }
                       
}
}
void iskettleoff()
{
     int g=k.x,h=k.y;    
if(bl[g][h].retobj()=='k')
 {
                       for(int g1=h+1,l=0;g1<15;g1++)
                                      {
                                              if(bl[g][g1].retobj()!='v'&&bl[g][g1].retobj()!='h'&&bl[g][g1].retobj()!='n'&&bl[g][g1].retobj()!='t'&&bl[g][g1].retobj()!='w'&&bl[g][g1].retobj()!=' ')
                                              l=1;
                                              if(l==0)
                                              {bl[g][g1].geta(off);
                                              if(bl[g][g1].retw()==on)
                                              {
                                                                 bl[g][g1].getw(off);
                                              bl[g][g1].put(bl[g][g1].retobj1());
                                              }
                                              }
                                              
                                      }
}
}
void ispullerboton()
{
    int g=p.x,h=p.y;  
if(bl[g][h].retobj()=='U')
{
                     int g1;
                      for(g1=g;g1>=0;g1--)
                      {
                              if(bl[g1-1][h].retobj()!='V'&&bl[g1-1][h].retobj()!='H'&&bl[g1-1][h].retobj()!='N'&&bl[g1-1][h].retobj()!='W'&&bl[g1-1][h].retobj()!=' '&&bl[g1-1][h].retobj()!='v'&&bl[g1-1][h].retobj()!='h'&&bl[g1-1][h].retobj()!='n'&&bl[g1-1][h].retobj()!='w')
                              break;
                              bl[g1-1][h].put('U');
                              p.x=g1-1;
                              p.y=h;
                              if(bl[g1][h].retp()==on)
                              bl[g1][h].put(bl[g1][h].retobj1()-32);
                              else
                              bl[g1][h].put(bl[g1][h].retobj1());
                              rest(100);
                               
                      }   
                      if(g1!=0)
                      {
                               
                                                 for(int g2=g1-1;g2+2<10;g2++)
                                                 {
                                                         
                                                      
                                                                  if(bl[g2+2][h].retobj()!='v'&&bl[g2+2][h].retobj()!='h'&&bl[g2+2][h].retobj()!='n'&&bl[g2+2][h].retobj()!='w'&&bl[g2+2][h].retobj()!=' '&&bl[g2+2][h].retobj()!='V'&&bl[g2+2][h].retobj()!='H'&&bl[g2+2][h].retobj()!='N'&&bl[g2+2][h].retobj()!='W')
                                                         break;
                                                         if(bl[g2][h].retobj1()=='p'||bl[g2][h].retobj1()=='e')
                                                         break;
                                                         bl[g2+2][h].put('U');
                                                        p.x=g2+2;p.y=h;
                                                         bl[g2+1][h].put(bl[g2][h].retobj());
                                                         switch(bl[g2+1][h].retobj())
                                                         {
                                                                                case 'B':b1.x=g2+1;b1.y=h;break;
                                                                                case 's':case 'S':if(g2==s.x&&h==s.y)
                                                                                {s.x=g2+1;s.y=h;}
                                                                                else
                                                                                {S.x=g2+1;S.y=h;} break;
                                                                                case 'F':f.x=g2+1;f.y=h;break;
                                                                                case 'U':p.x=g2+1;p.y=h;break;
                                                                                case 'G': if(g2==::g.x&&h==::g.y)
                                                                                {::g.x=g2+1;::g.y=h;}
                                                                                else
                                                                                {G.x=g2+1;G.y=h;} break;
                                                                                case 'K':k.x=g2+1;k.y=h;break;
                                                         }
                                                         if(bl[g2][h].retp()==on)
                              bl[g2][h].put(bl[g2][h].retobj1()-32);
                              else
                              bl[g2][h].put(bl[g2][h].retobj1());
                                                         iskettleon();
                                                         
                                                         rest(100);
                                                         }
                                                                                      
bl[p.x][p.y].put('u');
                      }
}     

}

void ispusherboton()
{
     int g=t.x,h=t.y;  
if(bl[g][h].retobj()=='O')
{
                      int g1;
                      for(g1=g;g1>=0;g1--)
                      {
                              if(bl[g1-1][h].retobj()!='V'&&bl[g1-1][h].retobj()!='H'&&bl[g1-1][h].retobj()!='N'&&bl[g1-1][h].retobj()!='W'&&bl[g1-1][h].retobj()!=' '&&bl[g1-1][h].retobj()!='v'&&bl[g1-1][h].retobj()!='h'&&bl[g1-1][h].retobj()!='n'&&bl[g1-1][h].retobj()!='w')
                              break;
                              bl[g1-1][h].put('O');
                              t.x=g1-1;
                              t.y=h;
                              bl[g1][h].put(bl[g1][h].retobj1());
                              rest(100);
                               
                      } 
                      if(g1!=0)
                      {
                               
                                                 for(int g2=g1-1;g2>=0;g2--)
                                                 {
                                                      if(bl[g2-1][h].retobj()!='V'&&bl[g2-1][h].retobj()!='H'&&bl[g2-1][h].retobj()!='N'&&bl[g2-1][h].retobj()!='W'&&bl[g2-1][h].retobj()!=' '&&bl[g2-1][h].retobj()!='v'&&bl[g2-1][h].retobj()!='h'&&bl[g2-1][h].retobj()!='n'&&bl[g2-1][h].retobj()!='w')
                                                       break;  
                                                      if(bl[g2][h].retobj1()=='p'||bl[g2][h].retobj1()=='e')
                                                         break;
                                                      bl[g2-1][h].put(bl[g2][h].retobj()); 
                                                      switch(bl[g2-1][h].retobj())
                                                         {
                                                                                case 'B':b1.x=g2-1;b1.y=h;break;
                                                                                case 's':case 'S':if(g2==s.x&&h==s.y)
                                                                                {s.x=g2-1;s.y=h;}
                                                                                else
                                                                                {S.x=g2-1;S.y=h;} break;
                                                                                case 'F':f.x=g2-1;f.y=h;break;
                                                                                case 'U':p.x=g2-1;p.y=h;break;
                                                                                case 'g':case 'G': if(g2==::g.x&&h==::g.y)
                                                                                {::g.x=g2-1;::g.y=h;}
                                                                                else
                                                                                {G.x=g2-1;G.y=h;} break;
                                                                                case 'K':k.x=g2-1;k.y=h;break;
                                                                                 
                                                         } 
                                                         bl[g2][h].put('O');
                                                         t.x=g2;t.y=h;
                                                         bl[g2+1][h].put(bl[g2+1][h].retobj1());
                                                         rest(100);
                                                 }
bl[t.x][t.y].put('o');
didgeneratoron();
                      }
}     

}                                  
                      
                     
          
void pickup()
{ 
                      show_mouse(NULL);
                      checkbox(mouse_x,mouse_y,coord);
                      i=coord[0];
                      j=coord[1];
        
        o=bl[i][j].retobj();
        
     
        if(o=='p')
        {
                  
                 show_mouse(screen);
                                   bl[i][j].getp(on);
                                   bl[i][j].put('P');
                                  for(int h=0;h<=15;h++)
                  {
                  for(int g=0;g<=10;g++)
                  {
                           if(bl[g-1][h].retp()==on&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj()=='e'||bl[g][h].retobj()=='t'))
                                           {
                                                                                     bl[g][h].getp(on);
                                                                                     bl[g][h].put(bl[g][h].retobj()-32);
                                                                                     
                                           }
                  }
                  for(int g=10;g>=0;g--)
                  {
                          if(bl[g+1][h].retp()==on&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj()=='e'))
                                           {
                                                                                     bl[g][h].getp(on);
                                                                                     bl[g][h].put(bl[g][h].retobj()-32);
                                                                                                                                           
                                           }
                  }
                  } 
                                   
                                   for(int g=0;g<=10;g++)
                                   {for(int h=0;h<=15;h++)
                                     {
                                           if(bl[g][h-1].retp()==on&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='n'||bl[g][h].retobj()=='e'))
                                           {
                                                  bl[g][h].getp(on);
                                                  bl[g][h].put(bl[g][h].retobj()-32);
                                                       
                                           }
                                     }
                                     for(int h=15;h>=0;h--)
                                    {
                                           if(bl[g][h+1].retp()==on&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='w'||bl[g][h].retobj()=='e'))
                                          {
                                                  bl[g][h].getp(on);
                                                  bl[g][h].put(bl[g][h].retobj()-32);
                                          }
                                    }
                  }
                  
                  rest(1000);
                  }
        if(o=='P')
                  {
                                   bl[i][j].getp(off);
                                  show_mouse(screen);
                                   bl[i][j].put('p');
                                   for(int h=0;h<=15;h++)
                  {
                  for(int g=0;g<=10;g++)
                  {
                           if(bl[g-1][h].retp()==off&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj1()=='t'||bl[g][h].retobj()=='e'))
                                           {
                                                                                     bl[g][h].getp(off);
                                                                                     bl[g][h].put(bl[g][h].retobj()+32);
                                                                                     
                                           }
                  }
                  for(int g=10;g>=0;g--)
                  {
                          if(bl[g+1][h].retp()==off&&(bl[g][h].retobj1()=='h'||bl[g][h].retobj()=='e'))
                                           {
                                                                                     bl[g][h].getp(off);
                                                                                     bl[g][h].put(bl[g][h].retobj()+32);
                                                                                                
                                           }
                  }
                  }               
                                   for(int g=0;g<=10;g++)
                                   {for(int h=0;h<=15;h++)
                                     {
                                           if(bl[g][h-1].retp()==off&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='n'||bl[g][h].retobj1()=='t'||bl[g][h].retobj()=='e'))
                                           {
                                                  bl[g][h].getp(off);
                                                  bl[g][h].put(bl[g][h].retobj()+32);
                                           }
                                     }
                                     for(int h=15;h>=0;h--)
                                    {
                                           if(bl[g][h+1].retp()==off&&(bl[g][h].retobj1()=='v'||bl[g][h].retobj1()=='w'||bl[g][h].retobj()=='e'))
                                          {
                                                  bl[g][h].getp(off);
                                                  bl[g][h].put(bl[g][h].retobj()+32);
                                          }
                                   }
                  }
                  for(int g=0;g<=10;g++)
                  for(int h=0;h<=15;h++)
                  {
                          
                          bl[g][h].getl(off);
                                           bl[g][h].getp(off);
                                           bl[g][h].geta(off);
                                           bl[g][h].getw(off);
                                           iskettleoff();
                                           if(bl[g][h].retobj()=='s'&&level==4)
                          {
                                             bl[g][h].put(bl[g][h].retobj1());
                                             bl[5][7].put('s');
                                             s.x=5;s.y=7;
                          }
                          if(bl[g][h].retobj()=='s'&&level==5)
                          {
                                             didsolarpaneloff();
                                             bl[g][h].put(bl[g][h].retobj1());
                                             if(bl[0][7].retobj()!='V'&&bl[0][7].retobj()!='H'&&bl[0][7].retobj()!='N'&&bl[0][7].retobj()!='S'&&bl[0][7].retobj()!='s'&&bl[0][7].retobj()!='W'&&bl[0][7].retobj()!=' '&&bl[0][7].retobj()!='v'&&bl[0][7].retobj()!='h'&&bl[0][7].retobj()!='n'&&bl[0][7].retobj()!='w')
                                             {bl[0][8].put(bl[0][7].retobj());}
                                             
                                             bl[0][7].put('s');
                                             s.x=0;s.y=7;
                                             if(bl[4][3].retobj()!='V'&&bl[4][3].retobj()!='H'&&bl[4][3].retobj()!='N'&&bl[4][3].retobj()!='S'&&bl[4][3].retobj()!='s'&&bl[4][3].retobj()!='W'&&bl[4][3].retobj()!=' '&&bl[4][3].retobj()!='v'&&bl[4][3].retobj()!='h'&&bl[4][3].retobj()!='n'&&bl[4][3].retobj()!='w')
                                             {bl[4][4].put(bl[4][4].retobj());}
                                             bl[4][3].put('s');
                                             S.x=4;S.y=3;
                          }
                           if((bl[g][h].retobj()=='g'||bl[g][h].retobj()=='G')&&level==5)
                          {
                                             
                                             bl[g][h].put('G');
                                             didgeneratoroff();
                                             bl[g][h].put(bl[g][h].retobj1());                  
                                             bl[4][6].put('g');
                                             ::g.x=4;::g.y=6;
                          }
                  }                    
                                  rest(1000);
                  }
    
    if(checkpow()==off&&bl[i][j].retf()==0)
    {                 
    if(o=='b'&&level!=5)
    {
              set_mouse_sprite((BITMAP*)data[bulb].dat);
              m='b';
              bl[i][j].put(bl[i][j].retobj1());
              
    }
    if(o=='s'&&level!=4&&level!=5)
    {
              set_mouse_sprite((BITMAP*)data[solar].dat);
              if(i==s.x&&j==s.y)
              m='s';
              else
              m='S';
              bl[i][j].put(bl[i][j].retobj1());
    }
    if(o=='f')
    {
              set_mouse_sprite((BITMAP*)data[fan].dat);
              m='f';
              bl[i][j].put(bl[i][j].retobj1());
    }
    if(o=='g')
    {
              
              if(i==g.x&&j==g.y&&level!=5)
              {m='g';set_mouse_sprite((BITMAP*)data[gen].dat);
              bl[i][j].put(bl[i][j].retobj1());}
              else if(level!=5)
              {m='G';set_mouse_sprite((BITMAP*)data[gen].dat);
              bl[i][j].put(bl[i][j].retobj1());}
    }
    if(o=='l')
    {
              set_mouse_sprite((BITMAP*)data[wall].dat);
              if(i==w.x&&j==w.y)
              m='w';
              else
              m='W';
              bl[i][j].put(bl[i][j].retobj1());
    }
    if(o=='k'&&level!=3)
    {
              set_mouse_sprite((BITMAP*)data[kettle].dat);
              m='k';
              bl[i][j].put(bl[i][j].retobj1());
    }
    if(o=='u')
    {
              set_mouse_sprite((BITMAP*)data[pullbot].dat);
              m='u';
              bl[i][j].put(bl[i][j].retobj1());
    }
    if(o=='o')
    {
              set_mouse_sprite((BITMAP*)data[pushbot].dat);
              m='o';
              bl[i][j].put(bl[i][j].retobj1());
    }
}
for(a=0,c=a+40,i=0;a<400;a+=40,c+=40,i++)
		 for(b=40,d=b+40,j=0;b<=600;b+=40,d+=40,j++)
         	{
                                                if(b<=480)
                                                rect(screen,a,b,c,d,makecol(0,196,255));
                                                else
                                                rect(screen,a,b,c,d,makecol(0,163,255));
            }
            show_mouse(screen);
}                 
void putobj()
{
     show_mouse(NULL);
     if(bl[i][j].retobj()=='v'||bl[i][j].retobj()=='h'||bl[i][j].retobj()=='n'||bl[i][j].retobj()=='w'||bl[i][j].retobj()=='t'||bl[i][j].retobj()==' ')                   
        {                   
                            if(m!=' ')
                            {
                                     if(m!='G'&&m!='S'&&m!='W'&&m!='w')
                                     bl[i][j].put(m);
                                     else if(m=='G')
                                     bl[i][j].put('g');
                                     else if(m=='S')
                                     bl[i][j].put('s');
                                     else
                                     bl[i][j].put('l');
                                     switch(m)
                                                  {
                                                           case 'b':b1.x=i;b1.y=j;break;
                                                           case 's':s.x=i;s.y=j;break;
                                                           case 'S':S.x=i;S.y=j;break;
                                                           case 'f':f.x=i;f.y=j;break;
                                                           case 'u':p.x=i;p.y=j;break;
                                                           case 'o':t.x=i;t.y=j;break;
                                                           case 'g':g.x=i;g.y=j;break;
                                                           case 'G':G.x=i;G.y=j;break;
                                                           case 'k':k.x=i;k.y=j;break;
                                                           case 'w':w.x=i;w.y=j;break;
                                                           case 'W':W.x=i;W.y=j;break;
                                                  }
                                                                   
                                     set_mouse_sprite(NULL);
                           m=' ';}
    }    
    show_mouse(screen);
}

void putinfo()
{
     poll_mouse();
     checkbox(mouse_x,mouse_y,coord);
                      i=coord[0];
                      j=coord[1];
     char c;
     c=bl[i][j].retobj();                
     switch(c)
     {
              case 'b':case 'B': blit((BITMAP*)data[infbulb].dat,screen,0,0,400,240,720,360); break;
              case 'g':case 'G': blit((BITMAP*)data[infgen].dat,screen,0,0,400,240,720,360); break;  
              case 'e':case 'E': blit((BITMAP*)data[infend].dat,screen,0,0,400,240,720,360); break; 
              case 'p':case 'P': blit((BITMAP*)data[infmain].dat,screen,0,0,400,240,720,360); break;
              case 'k':case 'K': blit((BITMAP*)data[infkettle].dat,screen,0,0,400,240,720,360); break;
              case 'u':case 'U': blit((BITMAP*)data[infpuller].dat,screen,0,0,400,240,720,360); break;
              case 's':case 'S': blit((BITMAP*)data[infsolar].dat,screen,0,0,400,240,720,360); break;
              case 'f':case 'F': blit((BITMAP*)data[inffan].dat,screen,0,0,400,240,720,360); break;
              case 'o':case 'O':blit((BITMAP*)data[infpusher].dat,screen,0,0,400,240,720,360); break;
              case 'l':blit((BITMAP*)data[infwall].dat,screen,0,0,400,240,720,360); break;
              default :rectfill(screen,400,240,720,360,makecol(0,141,255));break;
     }
}
void l1tutorial()
{blit((BITMAP*)data[l11].dat,screen,0,0,0,0,400,600); 
blit((BITMAP*)data[but1].dat,screen,0,0,320,560,400,600); 
rest(200);  
  while(!key[KEY_ESC])
  {
        poll_mouse();
         if(mouse_b==1)
          {if(mouse_x>320&&mouse_x<400&&mouse_y>560&&mouse_y<600)
          break;}
  }        
blit((BITMAP*)data[l12].dat,screen,0,0,0,0,400,600); 
blit((BITMAP*)data[but1].dat,screen,0,0,320,560,400,600); 
 rest(200); 
  while(!key[KEY_ESC])
  {
         poll_mouse();
         if(mouse_b==1)
          {if(mouse_x>320&&mouse_x<400&&mouse_y>560&&mouse_y<600)
          break;}
  } 
  blit((BITMAP*)data[l13].dat,screen,0,0,0,0,400,600); 
 
  rest(200); 
  while(!key[KEY_ESC])
  {
         poll_mouse();
         if(mouse_b==1)
          {if(mouse_x>0&&mouse_x<40&&mouse_y>40&&mouse_y<80)
          break;}
  }blit((BITMAP*)data[l14].dat,screen,0,0,0,0,400,600); 
blit((BITMAP*)data[but1].dat,screen,0,0,320,560,400,600); 
  rest(200); 
  while(!key[KEY_ESC])
  {
         poll_mouse();
         if(mouse_b==1)
          {if(mouse_x>320&&mouse_x<400&&mouse_y>560&&mouse_y<600)
          break;}
  }       
  blit((BITMAP*)data[l15].dat,screen,0,0,0,0,400,600); 
 
 rest(200); 
  while(!key[KEY_ESC])
  {
         poll_mouse();
         if(mouse_b==1)
          {if(mouse_x>0&&mouse_x<40&&mouse_y>40&&mouse_y<80)
          break;}
  }  
  blit((BITMAP*)data[l16].dat,screen,0,0,0,0,400,600); 
blit((BITMAP*)data[but1].dat,screen,0,0,320,560,400,600); 
 rest(200); 
  while(!key[KEY_ESC])
  {
         poll_mouse();
         if(mouse_b==1)
          {if(mouse_x>320&&mouse_x<400&&mouse_y>560&&mouse_y<600)
          break;}
  } 
  blit((BITMAP*)data[l17].dat,screen,0,0,0,0,400,600); 
blit((BITMAP*)data[but1].dat,screen,0,0,320,560,400,600); 
  rest(200); 
  while(!key[KEY_ESC])
  {
         poll_mouse();
         if(mouse_b==1)
          {if(mouse_x>320&&mouse_x<400&&mouse_y>560&&mouse_y<600)
          break;}
  }    
  blit((BITMAP*)data[l18].dat,screen,0,0,0,0,400,600); 
blit((BITMAP*)data[but1].dat,screen,0,0,320,560,400,600); 
 rest(200); 
  while(!key[KEY_ESC])
  {
         poll_mouse();
         if(mouse_b==1)
          {if(mouse_x>320&&mouse_x<400&&mouse_y>560&&mouse_y<600)
          break;}
  }
}
void level1()
{
  if(tuto==on)
  l1tutorial();
  int a,b,c,d,i,j; 
           
                
		for(a=0,c=a+40,i=0;a<400;a+=40,c+=40,i++)
		 for(b=40,d=b+40,j=0;b<=600;b+=40,d+=40,j++)
         	{
                                                if(b<=480)
                                                rect(screen,a,b,c,d,makecol(0,196,255));
                                                else
                                                rect(screen,a,b,c,d,makecol(0,163,255));
                                                bl[i][j].val(a,b);
            } 
            for(i=0;i<=10;i++)
   for(j=0;j<=15;j++)
  {
                      bl[i][j].put(' ',1);
                      bl[i][j].getobj1(' ');
                      bl[i][j].getl(off);
                      bl[i][j].getp(off);
                      bl[i][j].geta(off);
                      bl[i][j].getw(off);
 }
            bl[0][0].put('p',1); 
            bl[0][1].put('v',1);
            bl[0][2].put('v',1);
            bl[0][3].put('v',1);
            bl[0][4].put('v',1);
            bl[0][5].put('v',1);
            bl[0][6].put('n',1);
            bl[4][0].put('w',1);
            bl[4][1].put('v',1);
            bl[4][2].put('v',1);
            bl[4][3].put('v',1);
            bl[4][4].put('v',1);
            bl[4][5].put('v',1);   
            bl[4][6].put('e',1);
            e.x=4;
            e.y=6;     
            bl[0][13].put('b'); 
            b1.x=0;
            b1.y=13;
            bl[2][13].put('s');
            s.x=2;
            s.y=13; 
            
}  
void level2()
{
    
     int a,b,c,d,i,j;
  for(i=0;i<=10;i++)
   for(j=0;j<=15;j++)
  {
                      bl[i][j].put(' ',1);
                      bl[i][j].getobj1(' ');
                      bl[i][j].getl(off);
                      bl[i][j].getp(off);
                      bl[i][j].geta(off);
                      bl[i][j].getw(off);
 }
    if(tuto==on)
    {
     blit((BITMAP*)data[l21].dat,screen,0,0,0,0,400,600); 
            blit((BITMAP*)data[but1].dat,screen,0,0,320,560,400,600);
            rest(200);
     
 while(!key[KEY_ESC])
  {
         poll_mouse();
         if(mouse_b==1)
          if(mouse_x>320&&mouse_x<400&&mouse_y>560&&mouse_y<600)
          break;
  }
}
  rectfill(screen,0,0,400,600,makecol(0,141,255));
   rectfill(screen,0,40,400,520,makecol(0,163,255));
   for(a=0,c=a+40,i=0;a<400;a+=40,c+=40,i++)
		 for(b=40,d=b+40,j=0;b<=600;b+=40,d+=40,j++)
         	{
                                                if(b<=480)
                                                rect(screen,a,b,c,d,makecol(0,196,255));
                                                else
                                                rect(screen,a,b,c,d,makecol(0,163,255));
                                                
            } 
   
   bl[0][9].put('p',1); 
   bl[1][9].put('h',1);
   bl[1][3].put('w',1); 
   bl[1][4].put('v',1);
   bl[1][5].put('n',1);
   bl[7][1].put('e',1);
   e.x=7;
   e.y=1;
   bl[7][2].put('v',1);
   bl[7][3].put('n',1);
   bl[0][13].put('b');
   b1.x=0;
   b1.y=13;
   bl[1][13].put('s');
   s.x=1;
   s.y=13;
   bl[0][12].put('f');
   f.x=0;
   f.y=12;
   bl[1][12].put('g');
   g.x=1;
   g.y=12;
} 
void level3()
{ 
       if(tuto==on)
       {
       blit((BITMAP*)data[l31].dat,screen,0,0,0,0,400,600); 
            blit((BITMAP*)data[but1].dat,screen,0,0,320,560,400,600);
            rest(100);
            
 while(!key[KEY_ESC])
  {
         poll_mouse();
         if(mouse_b==1)
          {if(mouse_x>320&&mouse_x<400&&mouse_y>560&&mouse_y<600)
          break;}
  }
}
      int a,b,c,d,i,j;
  for(i=0;i<=10;i++)
   for(j=0;j<=15;j++)
  {
                      bl[i][j].put(' ',1);
                      bl[i][j].getobj1(' ');
                      bl[i][j].getl(off);
                      bl[i][j].getp(off);
                      bl[i][j].geta(off);
                      bl[i][j].getw(off);
  }
  
   rectfill(screen,0,0,400,600,makecol(0,141,255));
   rectfill(screen,0,40,400,520,makecol(0,163,255));
   for(a=0,c=a+40,i=0;a<400;a+=40,c+=40,i++)
		 for(b=40,d=b+40,j=0;b<=600;b+=40,d+=40,j++)
         	{
                                                if(b<=480)
                                                rect(screen,a,b,c,d,makecol(0,196,255));
                                                else
                                                rect(screen,a,b,c,d,makecol(0,163,255));
                                                
            } 
     bl[0][4].put('h',1);
     bl[1][4].put('h',1);
     bl[2][4].put('h',1);
     bl[2][4].put('k');
     k.x=2;
     k.y=4;
     bl[3][4].put('h',1);
     bl[4][4].put('p',1); 
     bl[1][7].put('h',1);
     bl[2][7].put('h',1);
     bl[3][7].put('h',1);
     bl[4][7].put('h',1);
     bl[4][9].put('h',1);
     bl[5][9].put('h',1); 
     bl[7][9].put('h',1);
     bl[8][9].put('h',1);
     bl[9][9].put('e',1); 
     e.x=9;
     e.y=9;
     bl[0][12].put('g'); 
     g.x=0;
     g.y=12;
     bl[1][12].put('g');
     G.x=1;
     G.y=12;
     bl[2][12].put('f');
     f.x=2;
     f.y=12;
     bl[0][13].put('b');
     b1.x=0;
     b1.y=13;
     bl[1][13].put('s');
     s.x=1;
     s.y=13;
} 
void level4()
{
    if(tuto==on)
    {
    blit((BITMAP*)data[l41].dat,screen,0,0,0,0,400,600); 
            blit((BITMAP*)data[but1].dat,screen,0,0,320,560,400,600);
            rest(1000);
 while(!key[KEY_ESC])
  {
         poll_mouse();
         if(mouse_b==1)
          {if(mouse_x>320&&mouse_x<400&&mouse_y>560&&mouse_y<600);
          break;}
  } 
} 
     int a,b,c,d,i,j;
  for(i=0;i<=10;i++)
   for(j=0;j<=15;j++)
  {
                      bl[i][j].put(' ',1);
                      bl[i][j].getobj1(' ');
                      bl[i][j].getl(off);
                      bl[i][j].getp(off);
                      bl[i][j].geta(off);
                      bl[i][j].getw(off);
  }
  
   rectfill(screen,0,0,400,600,makecol(0,141,255));
   rectfill(screen,0,40,400,520,makecol(0,163,255));
   for(a=0,c=a+40,i=0;a<400;a+=40,c+=40,i++)
		 for(b=40,d=b+40,j=0;b<=600;b+=40,d+=40,j++)
         	{
                                                if(b<=480)
                                                rect(screen,a,b,c,d,makecol(0,196,255));
                                                else
                                                rect(screen,a,b,c,d,makecol(0,163,255));
                                                
            }
     bl[2][4].put('p',1); 
     bl[2][5].put('v',1);
     bl[2][6].put('v',1);     
     bl[2][7].put('n',1); 
     bl[3][4].put('h',1);
     bl[4][4].put('h',1);
     bl[5][4].put('h',1);
     bl[5][7].put('h',1);
     bl[5][7].put('s');
     s.x=5;
     s.y=7;
     bl[6][7].put('h',1);
     bl[7][7].put('h',1);
     bl[8][7].put('h',1);
     bl[0][12].put('b');
     b1.x=0;
     b1.y=12;
     bl[1][12].put('k');
     k.x=1;
     k.y=12;
     bl[2][12].put('u');
     p.x=2;
     p.y=12;
      bl[3][12].put('g');
     g.x=3;
     g.y=12;
     bl[5][10].put('h',1);
     bl[6][10].put('e',1);
     e.x=6;
     e.y=10;
} 
void level5()
{
      int a,b,c,d,i,j;
  for(i=0;i<=10;i++)
   for(j=0;j<=15;j++)
  {
                      bl[i][j].put(' ',1);
                      bl[i][j].getobj1(' ');
                      bl[i][j].getl(off);
                      bl[i][j].getp(off);
                      bl[i][j].geta(off);
                      bl[i][j].getw(off);
  }
  
   rectfill(screen,0,0,400,600,makecol(0,141,255));
   rectfill(screen,0,40,400,520,makecol(0,163,255));
   for(a=0,c=a+40,i=0;a<400;a+=40,c+=40,i++)
		 for(b=40,d=b+40,j=0;b<=600;b+=40,d+=40,j++)
         	{
                                                if(b<=480)
                                                rect(screen,a,b,c,d,makecol(0,196,255));
                                                else
                                                rect(screen,a,b,c,d,makecol(0,163,255));
                                                
            }
            bl[0][7].put('s');
            s.x=0;
            s.y=7;
            bl[2][3].put('h',1);
            bl[2][6].put('w',1);
            bl[2][7].put('v',1);
            bl[2][8].put('n',1);
            bl[3][3].put('h',1);
            bl[4][3].put('h',1);
            bl[4][3].put('s');
            S.x=4;
            S.y=3;
            bl[4][5].put('h',1);
            bl[4][5].put('b');
            b1.x=4;
            b1.y=5;
            bl[4][6].put('g');
            g.x=4;
            g.y=6;
            bl[4][7].put('w',1);
            bl[4][8].put('v',1);
            bl[4][9].put('e',1);
            e.x=4;
            e.y=9;
            bl[5][3].put('h',1);
            bl[5][5].put('p',1);
            bl[6][3].put('h',1);
            bl[7][3].put('t',1);
            bl[7][4].put('v',1);
            bl[7][5].put('v',1);
            bl[7][6].put('n',1);
            bl[0][12].put('o');
            t.x=0;
            t.y=12;
            bl[0][13].put('u');
            p.x=0;
            p.y=14;
            bl[1][12].put('l');
            w.x=1;
            w.y=12;
            bl[1][13].put('l');
            W.x=1;
            W.y=13;
            bl[2][13].put('k');
            k.x=2;
            k.y=13;
}
void intr()
{
      rectfill(screen,0,0,720,600,makecol(0,163,255));  

 char *let1[]={"R","O","H","A","N"};
 char *let11={"ROHAN"};
 char *let2[]={"p","r","e","s","e","n","t","s"};
 char *let22={"presents"};
    char *let[]={"E","L","E","C","T","R","I","C"," ","B","O","X"};
    BITMAP* bmp=create_bitmap(screen->w,screen->h);
    blit((BITMAP*)data[back].dat,screen,0,0,0,0,720,600);
    alfont_set_font_size(fnt2,50); 
    alfont_set_font_size(fnt1,69);
    blit(screen,bmp,0,0,0,0,720,600);
    for(int i1=0;i1<5;i1++)
    {
            for(int j1=screen->w;j1>=(screen->w/2-100+(i1*50));j1--)
            {
                    blit(bmp,screen,0,0,0,0,720,600);
                    alfont_textout_ex(screen,fnt2,let1[i1],j1,250,makecol(0,0,0),-1);
                    
                    
                    
            }
            blit(screen,bmp,0,0,0,0,720,600);
    }
     blit((BITMAP*)data[back].dat,screen,0,0,0,0,720,600); 
     
     for(int j1=screen->w/2-100;j1>screen->w/2-200;j1--)
    {
             blit((BITMAP*)data[back].dat,screen,0,0,0,0,720,600);  
             alfont_textout_ex(screen,fnt2,let11,j1,250,makecol(0,0,0),-1); 
    }

    for(int j1=screen->w/2-200;j1<screen->w;j1++)
    {
            blit((BITMAP*)data[back].dat,screen,0,0,0,0,720,600);   
             alfont_textout_ex(screen,fnt2,let11,j1,250,makecol(0,0,0),-1);  
    }   
     blit((BITMAP*)data[back].dat,screen,0,0,0,0,720,600);
     blit(screen,bmp,0,0,0,0,720,600);        
	for(int i1=0;i1<8;i1++)
	{
            for(int j1=0;j1<screen->h-150;j1++)
            {
                    blit(bmp,screen,0,0,0,0,720,600);
                    alfont_textout_ex(screen,fnt1,let2[i1],50+(i1*50),j1,makecol(0,0,0),-1);
            }
            rest(1);
            blit(screen,bmp,0,0,0,0,720,600);
 }
            
    for(int i1=0;i1<12;i1++)
	{
                for(int j1=0;j1<100;j1+=5)
            {
                    blit((BITMAP*)data[back].dat,screen,0,0,0,0,720,600);
                    alfont_set_font_size(fnt,j1);                       
		alfont_textout_ex(screen,fnt,let[i1],50+(i1*50),250,makecol(0,0,0),-1);
		rest(10);
    }
    for(int j1=50;j1>0;j1--)
    {
                    blit((BITMAP*)data[back].dat,screen,0,0,0,0,720,600);
                    alfont_set_font_size(fnt,j1);                       
		alfont_textout_ex(screen,fnt,let[i1],50+(i1*50),350,makecol(0,0,0),-1);
    }
}
for(int i1=0;i1<12;i1++)
	{
       alfont_set_font_size(fnt,100);
        alfont_textout_ex(screen,fnt,let[i1],50+(i1*50),250,makecol(0,0,0),-1);
        rest(50);
    }
   rest(500);

//rectfill(screen,400,240,720,360,makecol(0,141,255));
//blit((BITMAP*)data[gomenu].dat,screen,0,0,400,40,560,240);
}
void mainmenu()
{
    blit((BITMAP*)data[title].dat,screen,0,0,0,0,400,600);   
    blit((BITMAP*)data[menumain].dat,screen,0,0,480,160,640,220);
    blit((BITMAP*)data[play].dat,screen,0,0,480,220,640,280);
    blit((BITMAP*)data[tut].dat,screen,0,0,480,280,640,480);
if(tuto==on)
{
blit((BITMAP*)data[on2].dat,screen,0,0,482,340,640,540);
blit((BITMAP*)data[off1].dat,screen,0,0,482,400,640,600);
}
else
{
    blit((BITMAP*)data[on1].dat,screen,0,0,482,340,640,540);
    blit((BITMAP*)data[off2].dat,screen,0,0,482,400,640,600);
}
 while(1)
 {
    if(mouse_x>=480&&mouse_y>=220&&mouse_x<=640&&mouse_y<=280&&mouse_b==1) 
    {
           rectfill(screen,0,0,720,600,makecol(0,141,255));
           rectfill(screen,0,40,720,520,makecol(0,163,255));
           rectfill(screen,400,240,720,360,makecol(0,141,255));
           blit((BITMAP*)data[gomenu].dat,screen,0,0,400,40,560,240);  
           blit((BITMAP*)data[tut].dat,screen,0,0,560,40,720,240);
           if(tuto==on)
{
blit((BITMAP*)data[on2].dat,screen,0,0,562,100,720,160);
blit((BITMAP*)data[off1].dat,screen,0,0,562,160,720,220);
}
else
{
    blit((BITMAP*)data[on1].dat,screen,0,0,562,100,720,160);
    blit((BITMAP*)data[off2].dat,screen,0,0,562,160,720,220);
}
           break;
    }
   else if(mouse_x>=482&&mouse_y>=400&&mouse_x<=640&&mouse_y<=600&&mouse_b==1)
     {
          if(tuto==on)
     {
         blit((BITMAP*)data[on1].dat,screen,0,0,482,340,640,540);
         blit((BITMAP*)data[off2].dat,screen,0,0,482,400,640,600);
         tuto=off;
         rest(50);
     }
     }
   else if(mouse_x>=482&&mouse_y>=340&&mouse_x<=640&&mouse_y<=540&&mouse_b==1)
     {
     if(tuto==off)
     {
                  blit((BITMAP*)data[on2].dat,screen,0,0,482,340,640,540);
                  blit((BITMAP*)data[off1].dat,screen,0,0,482,400,640,600);
                  tuto=on;
                  rest(50);
     }
     }
                                                                  
                                                                                  
}               
}           
 void returnmenu()
 {
      
      if (mouse_x>=400&&mouse_y>=40&&mouse_x<=560&&mouse_y<=240&&mouse_b==1) 
      {
           BITMAP* bmp1=create_bitmap(screen->w,screen->h);
      blit(screen,bmp1,0,0,0,0,720,600);
           rectfill(screen,0,0,720,600,makecol(0,141,255));
rectfill(screen,0,40,720,520,makecol(0,163,255));
           blit((BITMAP*)data[title].dat,screen,0,0,0,0,400,600); 
           blit((BITMAP*)data[menumain].dat,screen,0,0,480,100,640,160);  
    blit((BITMAP*)data[continu].dat,screen,0,0,480,160,640,220);
    blit((BITMAP*)data[restart].dat,screen,0,0,480,220,640,280);
    blit((BITMAP*)data[tut].dat,screen,0,0,480,280,640,480);
if(tuto==on)
{
blit((BITMAP*)data[on2].dat,screen,0,0,482,340,640,540);
blit((BITMAP*)data[off1].dat,screen,0,0,482,400,640,600);
}
else
{
    blit((BITMAP*)data[on1].dat,screen,0,0,482,340,640,540);
    blit((BITMAP*)data[off2].dat,screen,0,0,482,400,640,600);
}
rest(500);
 while(!key[KEY_ESC])
 {
    
    
    if(mouse_x>=482&&mouse_y>=400&&mouse_x<=640&&mouse_y<=600&&mouse_b==1)
     {
          if(tuto==on)
     {
         blit((BITMAP*)data[on1].dat,screen,0,0,482,340,640,540);
         blit((BITMAP*)data[off2].dat,screen,0,0,482,400,640,600);
         tuto=off;
         rest(50);
     }
     }
   else if(mouse_x>=482&&mouse_y>=340&&mouse_x<=640&&mouse_y<=540&&mouse_b==1)
     {
     if(tuto==off)
     {
                  blit((BITMAP*)data[on2].dat,screen,0,0,482,340,640,540);
                  blit((BITMAP*)data[off1].dat,screen,0,0,482,400,640,600);
                  tuto=on;
                  rest(50);
     }
     }
     if(mouse_x>=480&&mouse_y>=160&&mouse_x<=640&&mouse_y<=220&&mouse_b==1)
    {
          
          blit(bmp1,screen,0,0,0,0,720,600);
          break;
    }   
    if(mouse_x>=480&&mouse_y>=220&&mouse_x<=640&&mouse_y<=280&&mouse_b==1) 
    {
           rectfill(screen,0,0,720,600,makecol(0,141,255));
           rectfill(screen,0,40,720,520,makecol(0,163,255));
           rectfill(screen,400,240,720,360,makecol(0,141,255));
           blit((BITMAP*)data[gomenu].dat,screen,0,0,400,40,560,240);  
           blit((BITMAP*)data[tut].dat,screen,0,0,560,40,720,240);
           if(tuto==on)
{
blit((BITMAP*)data[on2].dat,screen,0,0,562,100,720,160);
blit((BITMAP*)data[off1].dat,screen,0,0,562,160,720,220);
}
else
{
    blit((BITMAP*)data[on1].dat,screen,0,0,562,100,720,160);
    blit((BITMAP*)data[off2].dat,screen,0,0,562,160,720,220);
}
           level=1;
           lno=1;
           level1();
           break;
    }                                                           
 poll_mouse();
 }  
             
}   
}           
    int main(int argc, char *argv[]) {
	init();

	
	int q=0;
PALETTE pal;
show_mouse(screen);
char fo[80];
strcpy(fo,*argv);
fontinit(fo);
         intr(); 
         rectfill(screen,0,0,720,600,makecol(0,141,255));
rectfill(screen,0,40,720,520,makecol(0,163,255));
         mainmenu();                    
          up:
          if(level==1)
          level1(); 
          if(level==2)
          level2();
          else if(level==3)
          level3();
          else if(level==4)
          level4();
          else if(level==5)
          level5();
          else if(level==6)
          goto down; 

                 
   while (!key[KEY_ESC]) {
		poll_mouse();
		if(mouse_b==1&&m==' ')
		pickup();
    
     
     poll_mouse();
     checkbox(mouse_x,mouse_y,coord);
                      i=coord[0];
                      j=coord[1];
         
    if(mouse_b==2)
       putobj();
      isfanon();
      isfanoff();
      isbulbon();
      isbulboff();
      isbuton();
      didsolarpanelon();
      iskettleon();
      ispullerboton();
      ispusherboton();
      putinfo();
      iskettleoff();
      returnmenu();
      didsolarpaneloff();
      didgeneratoron();
      didgeneratoroff(); 
      q=0;
      if(bl[g.x][g.y].retobj()=='G'||bl[G.x][G.y].retobj()=='G'||bl[f.x][f.y].retobj()=='F'||bl[e.x][e.y].retobj()=='E')
      while(q!=4)
      {
                 onn();
                 q++;
      }

 for(int i1=0;i1<10;i1++)
 for(int j1=0;j1<15;j1++)
 {
 if(bl[i1][j1].retobj()=='E')
 {
                       rest(10);
                                     for(int g=0;g<=400;)
                                     {
                                             int h=0;
                                             while(h!=5)
                                             {
                                                         line(screen,g,0,g,600,makecol(0,163,255));
                                                         h++;
                                                         g++;
                                             }
                                             
                                             rest(1);
                                     }    
                                     level=off; 
 
 }
}
if(level==off)
		break;
}
if(level==off)
{level=++lno;
goto up;}
down:
	deinit();
	
	return 0;

}
END_OF_MAIN()

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 720, 600, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	data=load_datafile("data.dat");
	/* add other initializations here */
}
void fontinit(char *arg)
{
     alfont_init();
	
    strrev(arg);
    char arg1[80],arg2[80];
    char *a=new char,*a1=new char,*a2=new char;
    strcpy(arg1,arg);
    strcpy(arg2,arg);
    for(int i=0;i<strlen(arg)-1;i++)
    {
            if(arg[i]=='\\')
            {strrev(arg+i);
            strrev(arg1+i);
            strrev(arg2+i);
            a=arg+i;
            a1=arg1+i;
            a2=arg2+i;
            break;}

}

strcat(a,"waltographui.ttf");
strcat(a1,"Angelic Peace.ttf");
strcat(a2,"spacerangerexpital.ttf");
  fnt=alfont_load_font(a);      
 fnt1=alfont_load_font(a1);
 fnt2=alfont_load_font(a2);
   if(!(fnt&&fnt1&&fnt2))
	{
            allegro_message("error");
            exit(0);
 }  
 delete a;
 delete a1;
 delete a2;
}
void deinit() {
	clear_keybuf();
	unload_datafile(data);
	alfont_exit();
	/* add other deinitializations here */
}
