#include<graphics.h>
#include<stdio.h>
int x1,y1,x2,y2;
void description();
void wellcome();
void menu();
void test();
void object();
void display();
void play();
void wellcome()
{
    setcolor(RED);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,12);
    outtextxy(300,100,"Wellcome to");
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,8);
    outtextxy(350,300,"Floppy Bird");
    setfillstyle(SOLID_FILL,WHITE);
    bar(0,500,1360,768);
    setfillstyle(SOLID_FILL,RED);
    bar(1100,600,1300,650);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(1130,610,"NEXT");
    while(1)
    {
        int x, y;
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, x,y);
        if(x<=1300&&x>=1110&&y<=650&&y>=600)
            cleardevice();
        description();
    }
}
void description()
{
    setcolor(RED);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
    outtextxy(200,100,"Name:    Md. Shoeb Akhter");
    outtextxy(200,150,"Id:      20141101002");
    outtextxy(200,200,"Dept:    CSE");
    outtextxy(200,250,"Session: 2014-15");

    setfillstyle(SOLID_FILL,WHITE);
    bar(0,500,1360,768);

    setfillstyle(SOLID_FILL,RED);
    bar(1100,600,1300,650);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(1130,610,"NEXT");

    setfillstyle(SOLID_FILL,RED);
    bar(50,600,250,650);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(80,610,"BACK");
    while(1)
    {
        int x, y;

        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, x,y);
        if(x<=250&&x>=50&&y<=650&&y>=600)
        {
            cleardevice();
            wellcome();
        }
        else if(x<=1300&&x>=1100&&y<=650&&y>=600)
        {
            cleardevice();
            menu();
        }
    }

}
void menu()
{
    setfillstyle(SOLID_FILL,WHITE);
    bar(0,0,1360,768);

    setfillstyle(SOLID_FILL,RED);
    //bar(360,110,380,540);
    setcolor(RED);
    //circle(100,100,30);

    setfillstyle(SOLID_FILL,MAGENTA);
    bar(400,130,900,190);

    setfillstyle(SOLID_FILL,RED);
    bar(400,200,900,250);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(600,210,"PLAY");

    setfillstyle(SOLID_FILL,GREEN);
    bar(400,260,900,310);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(500,270,"NEW GAME");

    setfillstyle(SOLID_FILL,YELLOW);
    bar(400,320,900,380);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(500,330,"INSTRUCTION");

    setfillstyle(SOLID_FILL,YELLOW);
    bar(400,390,900,450);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(600,400,"EXIT");


    setfillstyle(SOLID_FILL,GREEN);
    bar(50,600,250,650);
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(80,610,"BACK");

    setfillstyle(SOLID_FILL,BLUE);
    bar(400,460,900,520);
    while(1)
    {
        int x, y;

        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }

        getmouseclick(WM_LBUTTONDOWN, x,y);
        if(x<=250&&x>=50&&y<=650&&y>=600)
        {
            cleardevice();
            description();
        }
        else if(x<=900&&x>=400&&y<=250&&y>=200)
        {
            cleardevice();
            play();
        }
    }
}
void test()
{
    setfillstyle(SOLID_FILL,9);
    bar(0,0,1360,768);

    setfillstyle(SOLID_FILL,GREEN);
    bar(0,600,1360,768);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    outtextxy(500,350,"FLOPPY BIRD");
    setfillstyle(SOLID_FILL,WHITE);
    bar(1100,350,1300,500);
    setcolor(GREEN);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
    outtextxy(1100,350,"SCORE");
}
void object()
{
    setfillstyle(SOLID_FILL,RED);
    bar(150,450,200,490);
    setfillstyle(SOLID_FILL,WHITE);
    bar(150,430,165,450);
    setfillstyle(SOLID_FILL,WHITE);
    bar(185,430,200,450);

}

void display (int q)
{
    setfillstyle(SOLID_FILL,GREEN);
    //upper big
    for(x1=250,y1=0,x2=310,y2=300; x2<=115000; x1=x1+820,x2=x1+60)
        bar(x1-q,y1,x2-q,y2);
    //upper big
    for(x1=510,y1=0,x2=570,y2=250; x2<=115000; x1=x1+820,x2=x1+60)
        bar(x1-q,y1,x2-q,y2);

    //upper small
    for(x1=760,y1=0,x2=820,y2=200; x2<=125000; x1=x1+820,x2=x1+60)
        bar(x1-q,y1,x2-q,y2);

    //lower small
    for(x1=260,y1=550,x2=320,y2=650; x2<=125000; x1=x1+820,x2=x1+60)
        bar(x1-q,y1,x2-q,y2);
    //lower small
    for(x1=510,y1=500,x2=570,y2=650; x2<=115000; x1=x1+820,x2=x1+60)
        bar(x1-q,y1,x2-q,y2);
    //lower big
    for(x1=760,y1=420,x2=820,y2=650; x2<=115000; x1=x1+820,x2=x1+60)
        bar(x1-q,y1,x2-q,y2);
}
void play()
{
    setfillstyle(SOLID_FILL,WHITE);
    bar(0,350,1360,768);

    setcolor(RED);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,6);
    outtextxy(300,200,"Loading");

    setcolor(RED);
    rectangle(500,400,1200,430);
    for(x1=500,y1=400,x2=530,y2=430; x2<=1200; x1=x1+30,x2=x1+30)
    {
        setfillstyle(SOLID_FILL,RED);
        bar(x1,y1,x2,y2);
        delay(300);
    }
    cleardevice();
    int q,i,p;
    for(q=0; q<6000000; q=q+10)
    {
        test();
        object();
        display(q);
        delay(100);
    }
}
int main()
{
    initwindow(1360,768);
    system("color 9a");
    wellcome();
    getch();
    closegraph();
    return 0;
}





