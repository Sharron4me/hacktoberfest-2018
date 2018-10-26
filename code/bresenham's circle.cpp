#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
int center,x=0,y,r;
cout<<"Enter the radius of circle::\n";
cin>>r;
y=r;
int d,gd,gm;
d=3-2*r;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"");
do{
    putpixel(200+x,200+y,15);
    putpixel(200+y,200+x,15);
    putpixel(200-x,200+y,15);
    putpixel(200-y,200+x,15);
    putpixel(200-x,200-y,15);
    putpixel(200-y,200-x,15);
    putpixel(200+x,200-y,15);
    putpixel(200+y,200-x,15);
    if(d<0)
        d+=4*(x)+6;
    else{
        d+=4*(x-y)+10;
        y-=1;
    }
    x+=1;
}while(x<y);
getch();
closegraph();
return 0;
}
