#include <iostream>
#pragma comment(lib,"graphics.lib")
#include "graphics.h"
using namespace std;

void sah(int x) 
{
	initwindow(x, x, "Sah");

	for (float i = 0; i < 8; i++) 
	{
		for (float j = 0; j < 8; j++) 
		{
			if (int(i+j)%2==0)
			{
				setfillstyle(SOLID_FILL, BLACK);
			}
			else 
			{
				setfillstyle(SOLID_FILL, WHITE);
			}
			bar(((i/8)*x),(((j) / 8) * x),(((i+1) / 8) * x),(((j + 1) / 8) * x));
		}

	}
}

void ljuti(int x)
{

	float p1, pom, rv, rm;
	pom = (1.0 / 3) * x;//360
	p1 = pom / 2;//180
	rv = p1 / 2;
	rm = rv / 4;

	initwindow(x, x, "Covjece ne ljuti se");
	setbkcolor(WHITE);
	cleardevice();

	for (float i = 0; i < 8; i++)
	{
		setcolor(BLACK);
		line(i / 3.0 * (x), 0, i / 3.0 * (x), x);
		line(0, i / 3.0 * (x), x, i / 3.0 * (x));
	}
	circle(p1, p1, rv);
	circle(p1 + pom * 2, p1, rv);
	circle(p1 + pom * 2, p1 + pom * 2, rv);
	circle(p1, p1 + pom * 2, rv);

	setfillstyle(SOLID_FILL, GREEN);
	fillellipse(p1-rv/2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);
	fillellipse(p1 - rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);//krug
	//fillellipse(450, 990, 30, 30);
	//for (int i = 1; i < 5; i++)
	//{
	//	fillellipse(540, 540 + (i * 90), 30, 30);//kuca
	//}

	setfillstyle(SOLID_FILL, RED);
	fillellipse((p1 + pom * 2) - rv / 2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) - rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);//krug
	//fillellipse(990, 630, 30, 30);
	//for (int i = 1; i < 5; i++)
	//{
	//	fillellipse(540 + (i * 90), 540 , 30, 30);//kuca
	//}


	setfillstyle(SOLID_FILL, BLUE);
	fillellipse((p1 + pom * 2) - rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, p1 + rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) - rv / 2.5, p1 + rv / 2.5, rm, rm);//krug
	//fillellipse(630, 90, 30, 30);
	//for (int i = 1; i < 5; i++)
	//{
	//	fillellipse(540 , 540 - (i * 90), 30, 30);//kuca
	//}


	setfillstyle(SOLID_FILL, YELLOW);
	fillellipse(p1 - rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, p1 + rv / 2.5, rm, rm);
	fillellipse(p1 - rv / 2.5, p1 + rv / 2.5, rm, rm);//krug
	//fillellipse(90, 450, 30, 30);
	//for (int i = 1; i < 5; i++)
	//{
	//	fillellipse(540 - (i * 90), 540 , 30, 30);//kuca
	//}

	//for (int i = 0; i < 11; i++) 
	//{
	//	circle(90 + (i * 90), 540-90, 30);
	//	circle(90 + (i * 90), 540 +90, 30);
	//	circle(540 + 90 , 90 + (i * 90), 30);
	//	circle(540 - 90 , 90 + (i * 90), 30);
	//}
	//for (int i = 0; i < 11; i++)

	//circle(90, 540, 30);
	//circle(540, 90, 30);
	//circle(540, 990, 30);
	//circle(990, 540, 30);


}

void mlin(int x)
{
	initwindow(1080, 1080, "Mlin");
	setbkcolor(WHITE);
	cleardevice();

	setcolor(BLACK);
	rectangle(30, 30, 1050, 1050);
	rectangle(30+ 180, 30+ 180, 1050- 180, 1050- 180);
	rectangle(30 + 180*2, 30 + 180 * 2, 1050 - 180 * 2, 1050 - 180 * 2);

	line(30, 540, 390, 540);
	line(690, 540, 1050, 540);
	
	line(540, 30, 540, 390);
	line(540, 690, 540, 1050);

	setfillstyle(SOLID_FILL, BLACK);
	fillellipse(30,30,10,10);


}

void pacificshores() 
{
	initwindow(1080, 1080, "Pacific shores");
	setbkcolor(WHITE);
	cleardevice();

	int points[] = {
	100, 100,
	200, 100,
	150, 200
	};


	for (int i = 0; i < 12; i++) 
	{
		setfillstyle(SOLID_FILL, RED);
		fillpoly(3, points);
	}
}

int main()
{
	int x,y;
	//x = 1080;
	char z;
	cout << "Upisi rezoluciju:";
	cin >> x >> z >> y;
	if (x > y)
		x = y;
	//sah(x);
	ljuti(x);
	//mlin();
	//pacificshores();

	getch();
	closegraph();
	return 0;
}