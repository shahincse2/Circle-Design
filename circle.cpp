#include <iostream>
#include<graphics.h>
using namespace std;

int main(){
    int x, y, xhalf, yhalf, r, pk;
    cout<<"Enter x half value: ";
    cin>>xhalf;
    cout<<"Enter y half value: ";
    cin>>yhalf;
    cout<<"Enter the radius value: ";
    cin>>r;
    x = 0;
    y = r;
    pk = 1-r;
    int gdriver = DETECT,gmode,error;
    initgraph(&gdriver,&gmode,"C:\\turboc3\\bgi");
    while(x<=y){
        putpixel(xhalf+x, yhalf+y,7);
        putpixel(xhalf-x, yhalf-y,7);
        putpixel(xhalf-x, yhalf+y,7);

        putpixel(xhalf+y, yhalf-x,7);
        putpixel(xhalf-y, yhalf+x,7);
        putpixel(xhalf-y, yhalf-x,7);

        putpixel(yhalf+y, xhalf+x,7);
        putpixel(yhalf+x, xhalf-y,7);





        if(pk<0){
            pk = pk+2*x+3;
        }
        else{
            pk = pk+2*x-2*y+5;
            y=y-1;
        }
        x=x+1;
    }
    getch();
    closegraph();
}
