#include <iostream>
#pragma comment(lib,"graphics.lib")
#include "graphics.h"
using namespace std;

void sah(float x) 
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

void ljuti(float x)
{

	float p1, pom, rv, rm, kp;
	pom = (1.0 / 3) * x;//360
	p1 = pom / 2;//180
	rv = p1 / 2;
	rm = rv / 4;
	kp = ((x / 2)) / 6;

	initwindow(x, x, "Covjece ne ljuti se");
	setbkcolor(WHITE);
	cleardevice();
	setcolor(BLACK);

	circle(p1, p1, rv);
	circle(p1 + pom * 2, p1, rv);
	circle(p1 + pom * 2, p1 + pom * 2, rv);
	circle(p1, p1 + pom * 2, rv);

	setfillstyle(SOLID_FILL, GREEN);
	fillellipse(p1-rv/2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);
	fillellipse(p1 - rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);//krug
	fillellipse(x / 2 - kp, (x / 2) + (5 * kp), rm, rm);
	for (int i = 1; i < 5; i++)
	{
		fillellipse(x/2, (x/2) + (i * kp), rm, rm);//kuca
	}

	setfillstyle(SOLID_FILL, RED);
	fillellipse((p1 + pom * 2) - rv / 2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) - rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);//krug
	fillellipse(x / 2 + (5 * kp), (x / 2) +kp, rm, rm);
	for (int i = 1; i < 5; i++)
	{
		fillellipse(x / 2 + (i * kp), (x / 2), rm, rm);//kuca
	}


	setfillstyle(SOLID_FILL, BLUE);
	fillellipse((p1 + pom * 2) - rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, p1 + rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) - rv / 2.5, p1 + rv / 2.5, rm, rm);//krug
	fillellipse(x / 2 + kp, (x / 2) - (5 * kp), rm, rm);
	for (int i = 1; i < 5; i++)
	{
		fillellipse(x / 2, (x / 2) - (i * kp), rm, rm);//kuca
	}


	setfillstyle(SOLID_FILL, YELLOW);
	fillellipse(p1 - rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, p1 + rv / 2.5, rm, rm);
	fillellipse(p1 - rv / 2.5, p1 + rv / 2.5, rm, rm);//krug
	fillellipse(x / 2 - (5 * kp), (x / 2) - kp, rm, rm);
	for (int i = 1; i < 5; i++)
	{
		fillellipse(x / 2 - (i * kp), (x / 2), rm, rm);//kuca
	}

	for (int i = 0; i < 11; i++) 
	{
		circle(kp + (i * kp), x/2-kp, rm);
		circle(kp + (i * kp), x / 2 + kp, rm);
		circle(x / 2 - kp, kp + (i * kp), rm);
		circle(x / 2 + kp, kp + (i * kp), rm);
	}
	for (int i = 0; i < 11; i++)

	circle(x / 2 - (5 * kp), (x / 2), rm);
	circle(x / 2 + (5 * kp), (x / 2), rm);
	circle(x / 2, (x / 2) - (5 * kp), rm);
	circle(x / 2, (x / 2) + (5 * kp), rm);
}

void mlin(float x)
{
	float raz = x / 7;
	float r = raz/15;
	initwindow(x, x, "Mlin");
	setbkcolor(WHITE);
	cleardevice();

	setcolor(BLACK);

	for (int i = 1; i < 4; i++) 
	{
		rectangle(raz*i, raz * i, x- raz * i, x- raz * i);

		setfillstyle(SOLID_FILL, BLACK);
		fillellipse(raz * i, raz * i, r, r);
		fillellipse(raz * i, x - raz * i, r, r);
		fillellipse(x-raz * i, raz * i, r, r);
		fillellipse(x-raz * i, x - raz * i, r, r);

		fillellipse(raz * i, x / 2, r, r);
		fillellipse(x-raz * i, x / 2, r, r);
		fillellipse(x/2, raz * i, r, r);
		fillellipse(x/2, x - raz * i, r, r);
	}
	line(raz, x / 2, raz * 3, x / 2);
	line(raz*4, x / 2, raz * 6, x / 2);
	line(x/2, raz, x / 2, raz * 3);
	line(x / 2, raz*4, x / 2, raz * 6);

}

void pacificshores(float x)
{
	float p1, pom, pom1 = 0, pom2, raz1,raz,raz2,raz3;
	raz = x / 13;
	pom = (1.0 / 3) * x;//360
	p1 = pom / 2;//180

	initwindow(x, x, "Pacific shores");
	setbkcolor(WHITE);
	cleardevice();
	setcolor(BLACK);

	for (int i = 0; i < 13; i++)
	{
		raz1 = raz * i;
		raz2 = raz * (i + 1);
		raz3 = raz1 + (raz / 2);
		if (i != 6) {
			int points[] = {
				raz1, 0,
				raz2, 0,
				raz3, pom
			};

			int points2[] = {
				raz1, x,
				raz2, x,
				raz3, pom * 2
			};
			if (i % 2 == 1)
				setfillstyle(SOLID_FILL, RED);
			else
				setfillstyle(SOLID_FILL, BLACK);
			fillpoly(3, points);

			if (i % 2 == 0)
				setfillstyle(SOLID_FILL, RED);
			else
				setfillstyle(SOLID_FILL, BLACK);
			fillpoly(3, points2);
		}
		else 
		{
			setfillstyle(SOLID_FILL, BROWN);
			bar(raz1, 0, raz2, 1080);
		}
	}
}

int main()
{
	float x,y;
	//x = 1080;
	char z;
	cout << "Upisi rezoluciju:";
	cin >> x >> z >> y;
	if (x > y)
		x = y;
	sah(x);
	ljuti(x);
	mlin(x);
	pacificshores(x);

	getch();
	closegraph();
	return 0;
}