#include <iostream>
#include <graphics.h>
#include <conio.h>

using namespace std;

void filling(int x, int y, int color, int color1);

int main() {
	
	initwindow(1000, 1000);
	
	
	int x = 100, y = 100, h = 100, b = 50, x1, x2, y1, y2, color = GREEN, color1 = BLACK;
	
	x1 = x;
	y1 = y;
	x2 = x + b;
	y2 = y - h;
	int x3 = x + (2 * b); 
	
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y1);
	line(x1, y1, x3, y1);
	
	
	
	filling(150, 50, color, color1);
	
	getch();
	return 0;
}
void filling(int x, int y, int color, int color1) {
	int c = getpixel(x,y);
	if(c==color1) {
		putpixel(x, y, color);
		filling(x+1, y, color, color1);
		filling(x, y+1, color, color1);
		filling(x-1, y, color, color1);
		filling(x, y-1, color, color1);
	}
}
