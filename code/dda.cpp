#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
float x,y,x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;
float dx=abs(x2-x1);
float dy=abs(y2-y1);
float len;
if(dx>dy) len=dx;
else len=dy;
int i=1;
dx=(x2-x1)/len;
dy=(y2-y1)/len;
x=x1+0.5;
y=y1+0.5;
int gm,gd;
detectgraph(&gm,&gd);
initgraph(&gm,&gd,"");
while(i<=len){
    putpixel(x,y,15);
    x+=dx;
    y+=dy;
    i+=1;
}
getch();
closegraph();
return 0;
}
