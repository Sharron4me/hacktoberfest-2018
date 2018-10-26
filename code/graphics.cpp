#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main(){
int gdriver = DETECT, gmode, errorcode;
int midx,midy;
initgraph(&gdriver, &gmode, "");
midx = getmaxx() / 2;
midy = getmaxy() / 2;
circle(midx,midy,30);
getch();
closegraph();
return 0;
}
