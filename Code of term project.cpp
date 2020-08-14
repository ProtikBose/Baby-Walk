# include "iGraphics.h"
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int sflag=1,highscore=0;
int *pointer;
FILE *fp;
int tm[3]= {};
int t1[3]= {};
int ti,n,ti1,ti2,q=0,num1,num10,num100,j,k,l,ch,num11,num110,num1100;
double x1 = 22, y = 200, r = 30,x2=17.5,x3=12,x4=17.5,x5=24.5,x6=19.5,x7=85,x8=17.5,x9=17.5,x10=25,x11=50,x12=12.5,x13=20;
int i=1,t,flag, f=0,temp=0,temp1,point=0,maximum=0;
double a[]= {12,14.5,14.5,12,9.5,9.5,12};   //baby's left leg x axis coordinate
double b[]= {20,18,2,0,2,18,20};            //baby's leg y axis coordinate
double c[]= {22,24.5,24.5,22,19.5,19.5,22};  //baby's right leg x axis coordinate
int d[7]= {0,0,0,0,0,0,0};
int e[7]= {0,0,0,0,0,0,0};
int g[7]= {0,0,0,0,0,0,0};
char s[5];

void numsetter(void)
{
    /* num100=maximum/100;
     maximum=maximum%100;
     num10=maximum/10;
     maximum=maximum%10;
     num1=maximum;*/
    if(num100==0)
    {
        d[0]=1;
        d[1]=1;
        d[2]=1;
        d[3]=1;
        d[4]=1;
        d[5]=1;
    }
    //d[7]= {0,0,0,0,0,0,1};
    if(num100==1)
    {
        d[1]=1;
        d[2]=1;
    }
    // d[7]= {0,1,1,0,0,0,0};
    if(num100==2)
    {
        d[0]=1;
        d[2]=1;
        d[3]=1;
        d[5]=1;
        d[6]=1;
    }
    //d[7]= {1,0,1,1,0,1,1};
    if(num100==3)
    {
        d[0]=1;
        d[2]=1;
        d[3]=1;

        d[6]=1;
        d[1]=1;
    }
    // d[7]= {1,1,1,1,0,0,1};
    if(num100==4)
    {

        d[2]=1;

        d[4]=1;

        d[6]=1;
        d[1]=1;
    }
    // d[7]= {0,1,1,0,1,0,1};
    if(num100==5)
    {
        d[0]=1;

        d[3]=1;
        d[4]=1;

        d[6]=1;
        d[1]=1;
    }
    // d[7]= {1,1,0,1,1,0,1};
    if(num100==6)
    {
        d[0]=1;

        d[3]=1;
        d[4]=1;
        d[5]=1;
        d[6]=1;
        d[1]=1;
    }
    //d[7]= {1,1,0,1,1,1,1};
    if(num100==7)
    {

        d[2]=1;
        d[3]=1;



        d[1]=1;
    }
    // d[7]= {0,1,1,1,0,0,0};
    if(num100==8)
    {
        d[0]=1;
        d[2]=1;
        d[3]=1;
        d[4]=1;
        d[5]=1;
        d[6]=1;
        d[1]=1;
    }
    //d[7]= {1,1,1,1,1,1,1};
    if(num100==9)
    {
        d[0]=1;
        d[2]=1;
        d[3]=1;
        d[4]=1;

        d[6]=1;
        d[1]=1;
    }
    //d[7]= {1,1,1,1,1,0,1};

    if(num10==0)
    {

        e[0]=1;
        e[1]=1;
        e[2]=1;
        e[3]=1;
        e[4]=1;
        e[5]=1;
    }

    // e[7]= {0,0,0,0,0,0,1};
    if(num10==1)
    {

        e[2]=1;
        e[1]=1;

    }
    //e[7]= {0,1,1,0,0,0,0};
    if(num10==2)
    {
        e[0]=1;
        e[2]=1;
        e[3]=1;

        e[5]=1;
        e[6]=1;

    }
    //e[7]= {1,0,1,1,0,1,1};
    if(num10==3)
    {
        e[0]=1;
        e[2]=1;
        e[3]=1;


        e[6]=1;
        e[1]=1;
    }
    //e[7]= {1,1,1,1,0,0,1};
    if(num10==4)
    {

        e[2]=1;

        e[4]=1;

        e[6]=1;
        e[1]=1;
    }
    //e[7]= {0,1,1,0,1,0,1};
    if(num10==5)
    {
        e[0]=1;

        e[3]=1;
        e[4]=1;

        e[6]=1;
        e[1]=1;
    }
    //e[7]= {1,1,0,1,1,0,1};
    if(num10==6)
    {
        e[0]=1;

        e[3]=1;
        e[4]=1;
        e[5]=1;
        e[6]=1;
        e[1]=1;
    }
    //e[7]= {1,1,0,1,1,1,1};
    if(num10==7)
    {

        e[2]=1;
        e[3]=1;

        e[1]=1;
    }
    //e[7]= {0,1,1,1,0,0,0};
    if(num10==8)
    {
        e[0]=1;
        e[2]=1;
        e[3]=1;
        e[4]=1;
        e[5]=1;
        e[6]=1;
        e[1]=1;
    }
    //e[7]= {1,1,1,1,1,1,1};
    if(num10==9)
    {
        e[0]=1;
        e[2]=1;
        e[3]=1;
        e[4]=1;

        e[6]=1;
        e[1]=1;
    }
    //e[7]= {1,1,1,1,1,0,1};

    if(num1==0)
    {

        g[0]=1;
        g[1]=1;
        g[2]=1;
        g[3]=1;
        g[4]=1;
        g[5]=1;
    }
    // g[7]= {0,0,0,0,0,0,1};
    if(num1==1)
    {

        g[2]=1;

        g[1]=1;
    }
    // g[7]= {0,1,1,0,0,0,0};
    if(num1==2)
    {
        g[0]=1;
        g[2]=1;
        g[3]=1;

        g[5]=1;
        g[6]=1;

    }
    //g[7]= {1,0,1,1,0,1,1};
    if(num1==3)
    {
        g[0]=1;
        g[2]=1;
        g[3]=1;

        g[6]=1;
        g[1]=1;
    }
    // g[7]= {1,1,1,1,0,0,1};
    if(num1==4)
    {

        g[2]=1;

        g[4]=1;

        g[6]=1;
        g[1]=1;
    }
    // g[7]= {0,1,1,0,1,0,1};
    if(num1==5)
    {
        g[0]=1;

        g[3]=1;
        g[4]=1;

        g[6]=1;
        g[1]=1;
    }
    // g[7]= {1,1,0,1,1,0,1};
    if(num1==6)
    {
        g[0]=1;

        g[3]=1;
        g[4]=1;
        g[5]=1;
        g[6]=1;
        g[1]=1;
    }
    //g[7]= {1,1,0,1,1,1,1};
    if(num1==7)
    {

        g[2]=1;
        g[3]=1;

        g[1]=1;
    }
    //g[7]= {0,1,1,1,0,0,0};
    if(num1==8)
    {
        g[0]=1;
        g[2]=1;
        g[3]=1;
        g[4]=1;
        g[5]=1;
        g[6]=1;
        g[1]=1;
    }
    // g[7]= {1,1,1,1,1,1,1};
    if(num1==9)
    {
        g[0]=1;
        g[2]=1;
        g[3]=1;
        g[4]=1;

        g[6]=1;
        g[1]=1;
    }
    //g[7]= {1,1,1,1,1,0,1};
}
int gettime(int T[])
{
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    T[0] = current->tm_hour;
    T[1] = current->tm_min;
    T[2] = current->tm_sec;
    ti=T[0]*3600+T[1]*60+T[2];
    return ti;
}

void iDraw()
{
    iClear();
    //cover page
    if(sflag==1)
    {
        iSetColor(113, 80, 156);
        iFilledRectangle(0,0,1350,700);
        iSetColor(242,0,0);
        iFilledCircle(150,550,100);
        iSetColor(255, 255,0);
        iFilledEllipse(655,610,150,80);
        iSetColor(255,99,71);
        iFilledEllipse(655,435,150,80);
        iSetColor(255,165,0);
        iFilledEllipse(655,260,150,80);
        iFilledEllipse(655,85,150,80);
        iText(625,600,"PLAY", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(580,425,"HIGH SCORES", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(90,570,"'BABY'S", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(110,530,"STEPS'", GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255, 255,0);
        iText(615,250,"RULES", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(620,75,"QUIT", GLUT_BITMAP_TIMES_ROMAN_24);

    }
    //MAIN PAGE
    if(sflag==2)
    {
        iSetColor(60, 251,38);
        iFilledRectangle(0,0,1350,700);
        //wall
        iSetColor(0, 0,0);
        iLine(0,0,250,150);
        iLine(250,150,250,700);
        iLine(250,150,1100,150);
        iLine(1100,150,1100,700);
        iLine(1100,150,1350,0);
        //window
        iSetColor(135, 206, 235);
        iFilledRectangle(462.5,287.5,425,275);
        iSetColor(0,0,0);
        iLine(462.5,425,887.5,425);
        iLine(675,562.5,675,287.5);
        //clock
        iSetColor(255, 255,255);
        iFilledCircle(1000,630,40);
        iSetColor(0,0,0);
        iLine(1000,630,1035,655);
        iLine(1000,630,970,645);
        iText(990, 660, "12");
        iText(995, 595, "6");
        iText(1030,625, "3");
        iText(960,625, "9");
        //sun
        iSetColor(255, 255,0);
        iFilledCircle(820,510,50);
        //Quit
        iSetColor(242,0,0);
        iFilledCircle(1290,640,50);
        iSetColor(0,0,0);

        iText(1262.5,637.5,"QUIT", GLUT_BITMAP_TIMES_ROMAN_24);

        //gameplay
        if(temp1==1)
        {
            iPauseTimer(0);
        }
        iSetColor(238, 207, 180);
        iFilledPolygon(a,b,7);
        iFilledPolygon(c,b,7);
        iFilledCircle(x4,x7,15); //baby head
        iFilledCircle(1270,178,22); //mother's head
        iFilledRectangle(1190,86,50,18); //mother's hand
        //iFilledEllipse(1215,95,25,9,100); //mother's hand
        iFilledRectangle(1183,95.25,7,3);
        iFilledRectangle(1183,94.75,7,3);
        iFilledRectangle(1183,99.5,10,3); //mother's finger
        iFilledRectangle(1183,91.5,10,3);
        iFilledRectangle(1190,98.5,3,10);
        iFilledRectangle(1183,87.5,10,3);
        iFilledRectangle(1298,0,42,20); //mother's leg
        iSetColor(124,4,0);
        iFilledCircle(x8,x10,10);//baby leg joint
        iSetColor(255,165,0);
        iFilledEllipse(x9,x11,x12,x13,100);//baby body

        iSetColor(30,144,255);
        iFilledRectangle(1242,0,56,80);
        iFilledEllipse(1270,95,30,60,100); //mother
        iFilledRectangle(1298,0,20,20);

        iSetColor(184,134,11);
        iFilledCircle(1270,190,10);
        iFilledCircle(1275,190,10);
        iFilledCircle(1280,185,10);
        iFilledCircle(1285,180,10);
        iFilledCircle(1265,190,10); //mother's hair
        iFilledCircle(1285,175,10);
        iFilledCircle(1280,170,10);
        iFilledCircle(1270,190,10);
        iFilledCircle(1302,178,10);
        iSetColor(0,0,0);
        iFilledCircle(1252,178,3); //mother's eye
        iSetColor(255,0,0);
        iLine(1252,165,1263,165);  //mother's mouth
        iLine(1253,166,1263,166);


    }


    //Rules
    if(sflag==3)
    {
        iSetColor(113, 80, 156);
        iFilledRectangle(0,0,1350,700);
        iSetColor(242,0,0);
        iFilledCircle(150,550,100);
        iSetColor(135, 206, 235);
        iFilledRectangle(262.5,217.5,825,275);
        iSetColor(255, 255,0);
        iFilledRectangle(282.5,237.5,145,75);
        iSetColor(0,0,0);
        iText(280,425,"1.You have to make sure that the baby reaches its mother within 65 seconds.", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(280,405,"2.Press Left mouse button to move the left leg.", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(280,385,"3.Press Right mouse button to move the right leg.", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(280,365,"4.If you press the same mouse button twice,the baby will fall.", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(280,345,"Hope you enjoy playing the game.", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(90,570,"'BABY'S", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(110,530,"STEPS'", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(282.5,267.5,"MAIN MENU", GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if(n==1)
    {
        ti2= gettime(t1);

    }
    if((ti2-ti1)>=5)
    {
        sflag=5;
    }
    //Are you sure
    if(sflag==4)
    {
        iSetColor(113, 80, 156);
        iFilledRectangle(0,0,1350,700);
        iSetColor(242,0,0);
        iFilledCircle(150,550,100);
        iSetColor(135, 206, 235);
        iFilledRectangle(462.5,287.5,425,275);
        iSetColor(242,0,0);
        iFilledRectangle(602,357,125,55);
        iSetColor(255, 255,0);
        iFilledRectangle(602,407,125,55);
        iSetColor(0,0,0);
        iText(90,570,"'BABY'S", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(110,530,"STEPS'", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(592,487,"Are you Sure?", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(642,425,"YES", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(648,375,"NO", GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if(sflag==5)
    {
        PlaySound("D:\\test1.wav",NULL,SND_ASYNC| SND_LOOP);    // iSetColor(0, 0, 0);
        // iText(24,45,s,GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(113, 80, 156);
        iFilledRectangle(0,0,1350,700);
        //iSetColor(242,0,0);
        //iFilledCircle(150,550,100);

        //  iSetColor(0,0,0);
        // iText(90,570,"'BABY'S", GLUT_BITMAP_TIMES_ROMAN_24);
        // iText(110,530,"STEPS'", GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(255, 255,0);
        iFilledEllipse(655,435,150,80);

        iSetColor(242,0,0);
        iFilledRectangle(580,157,145,55);
        iSetColor(255, 255,0);
        // iFilledRectangle(580,257,145,55);
        iSetColor(113, 80, 156);
        iText(580,425,"GAME OVER", GLUT_BITMAP_TIMES_ROMAN_24);
        //iText(580,275,"PLAY AGAIN", GLUT_BITMAP_TIMES_ROMAN_24);
        iText(615,175,"QUIT", GLUT_BITMAP_TIMES_ROMAN_24);
        if(highscore)
        {
            iSetColor(242,242,240);
            iText(560,600,"Congratulations!!",GLUT_BITMAP_TIMES_ROMAN_24);
            iText(480,550,"You have made a new high score!!",GLUT_BITMAP_TIMES_ROMAN_24);


        }
        iSetColor(0, 0, 0);
        iText(560,565,"YOUR POINT IS",GLUT_BITMAP_TIMES_ROMAN_24);

        iText(650,535,s,GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if(sflag==6)
    {
        numsetter();


        iSetColor(113, 80, 156);
        iFilledRectangle(0,0,1350,700);
        iSetColor(255, 255,0);
        iFilledRectangle(600,237.5,145,75);
        iSetColor(0,0,0);
        iText(600,267.5,"MAIN MENU", GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(242,242,242);
        iText(500,565,"CURRENT HIGHEST SCORE", GLUT_BITMAP_TIMES_ROMAN_24);
        if(d[0])iFilledRectangle(560,380,50,8.5);
        if(d[1])iFilledRectangle(615,390,8.5,50);
        if(d[2])iFilledRectangle(615,450,8.5,50);
        if(d[3])iFilledRectangle(610,510,-50,-8.5);
        if(d[4])iFilledRectangle(550,500,8.5,-50);
        if(d[5])iFilledRectangle(550,440,8.5,-50);
        if(d[6])iFilledRectangle(560,440,50,8.5);
        if(e[0])iFilledRectangle(640,380,50,8.5);
        if(e[1])iFilledRectangle(695,390,8.5,50);
        if(e[2])iFilledRectangle(695,450,8.5,50);
        if(e[3])iFilledRectangle(690,510,-50,-8.5);
        if(e[4])iFilledRectangle(630,500,8.5,-50);
        if(e[5])iFilledRectangle(630,440,8.5,-50);
        if(e[6])iFilledRectangle(640,440,50,8.5);
        if(g[0])iFilledRectangle(720,380,50,8.5);
        if(g[1])iFilledRectangle(775,390,8.5,50);
        if(g[2])iFilledRectangle(775,450,8.5,50);
        if(g[3])iFilledRectangle(770,510,-50,-8.5);
        if(g[4])iFilledRectangle(710,500,8.5,-50);
        if(g[5])iFilledRectangle(710,440,8.5,-50);
        if(g[6])iFilledRectangle(720,440,50,8.5);

    }
    if(sflag==7)
    {
        iSetColor(113, 80, 156);
        iFilledRectangle(0,0,1350,700);
        iSetColor(255, 255,0);
        iFilledRectangle(600,237.5,145,75);

        iSetColor(242,242,240);
        iText(560,450,"CONGRATULATIONS!!",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(420,400,"THE BABY HAS MADE ITS STEPS PERFECTLY!!",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(0,0,0);
        iText(600,267.5,"MAIN MENU", GLUT_BITMAP_TIMES_ROMAN_24);

    }


}
void HighScore(int p)
{
    sprintf(s,"%d",p);
    fp = fopen("High Scores.txt", "rb");
    if ( fread(&ch, sizeof(int), 1, fp) != 1)   // to read any data type in binary mode from a file
    {
        printf("Read Error\n");
        exit(1);
    }
    fclose(fp);
    if(p>=662)
    {
        sflag=7;
    }
    if(p>ch)
    {
        highscore=1;
        fp = fopen("High scores.txt", "wb");
        if ( fwrite(&p, sizeof(int), 1, fp) != 1)   // to write any data type in binary mode to a file
        {
            printf("Write Error\n");
            exit(1);
        }
        fclose(fp);
    }
}

void MaxScore(int m)
{
    printf("%d",m);
    maximum=m>maximum?m:maximum;
    /* maximum=300;
     num100=maximum/100;
     maximum=maximum%100;
     num10=maximum/10;
     maximum=maximum%10;
     num1=maximum;*/
    //sflag=6;
    //numsetter();

    HighScore(maximum);
}



void flagholder(void)
{
    if(flag==0)

    {

        temp=1;
        x4= x4+x7;
        x7=15;
        x8=x8+x10;
        x10=10;
        x9=x9+x11;
        x11=12.5;
        t=x13;
        x13=x12;
        x12=t;
        a[0]=a[0]+b[0]+7.05;

        a[1]=a[1]+b[1]+7.05;  //lie down ahead after the timer

        a[2]=a[2]+b[2]+7.05;

        a[3]=a[3]+b[3]+7.05;

        a[4]=a[4]+b[4]+7.05;
        a[5]=a[5]+b[5]+7.05;
        a[6]=a[6]+b[6]+7.05;
        b[0]=2.5;
        b[3]=2.5;
        b[4]=5;
        b[5]=5;
        b[6]=2.5;
        b[1]=0;
        b[2]=0;
        temp1=1;
        ti1= gettime(tm);
        n=1;
        iPauseTimer(0);
        PlaySound("D:\\test.wav",NULL,SND_ASYNC);
        // printf("%d",point);
        MaxScore(point);
    }

}
void iMouseMove(int mx, int my)
{
}
void iMouse(int button, int state, int mx, int my)
{
    if(sflag==2)
    {
        if(!(mx>1265&&mx<1315&&my>615&&my<665))
        {
            if(temp==0)
            {

                if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
                {
                    flag=1;
                    f=1;
                    point=point+2;
                    c[1]+=1.15;
                    c[2]+=9.05;
                    c[3]+=11.55;
                    c[4]+=9.05;
                    c[5]+=1.15;
                    //  if(c[3]==a[5])
                    // {
                    //    x4= x7;
                    //     x7=15;
                    // }
                    if((c[3]-a[3])>31.55)
                    {
                        x4= x4-x7;
                        x7=15;
                        x8=x8-x10;
                        x10=10;
                        x9=x9-x11;
                        x11=12.5;
                        t=x13;
                        x13=x12;
                        x12=t;
                        c[0]=c[0]-b[0]-10.00;

                        c[1]=c[1]-b[1]-10.00;

                        c[2]=c[2]-b[2]-10.00;

                        c[3]=c[3]-b[3]-10.00;   //lie down behind

                        c[4]=c[4]-b[4]-10.00;
                        c[5]=c[5]-b[5]-10.00;
                        c[6]=c[6]-b[6]-10.00;
                        b[0]=2.5;
                        b[3]=2.5;
                        b[4]=5;
                        b[5]=5;
                        b[6]=2.5;
                        b[1]=0;
                        b[2]=0;

                        PlaySound("D:\\test.wav",NULL,SND_ASYNC);
                        iPauseTimer(0);
                        temp=1;
                        ti1=  gettime(tm);
                        n=1;
                        //  printf("%d",point);
                        MaxScore(point);
                    }
                }
                //if(flag==1)



                if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
                {
                    flag=1;
                    point=point+2;
                    a[0]+=7.05;
                    a[6]+=7.05;
                    c[6]+=7.05;
                    a[1]+=7.05;
                    a[2]+=7.05;
                    a[3]+=7.05;
                    a[4]+=7.05;
                    a[5]+=7.05;
                    c[0]+=7.05; //moving leg
                    x4+=7.05;
                    x8+=7.05;
                    x9+=7.05;
                    c[1]+=5.9;
                    c[4]-=2;
                    c[2]-=2;
                    c[5]+=5.9;
                    c[3]-=4.5;

                    if(c[3]<=a[3])
                    {
                        x4= x4+x7;
                        x7=15;
                        x8=x8+x10;
                        x10=10;
                        x9=x9+x11;
                        x11=12.5;
                        t=x13;
                        x13=x12;
                        x12=t;
                        a[0]=a[0]+b[0]+7.05;
                        a[1]=a[1]+b[1]+7.05;
                        a[2]=a[2]+b[2]+7.05;
                        a[3]=a[3]+b[3]+7.05;
                        a[4]=a[4]+b[4]+7.05;
                        a[5]=a[5]+b[5]+7.05;  //lie down ahead
                        a[6]=a[6]+b[6]+7.05;
                        b[0]=2.5;
                        b[3]=2.5;
                        b[4]=5;
                        b[5]=5;
                        b[6]=2.5;
                        b[1]=0;
                        b[2]=0;
                        PlaySound("D:\\test.wav",NULL,SND_ASYNC);
                        iPauseTimer(0);
                        temp=1;
                        // printf("%d",point);
                        ti1= gettime(tm);
                        n=1;
                        MaxScore(point);
                    }

                }

                flag=0;

            }
        }
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        if(sflag==1)
        {
            if(mx>580&&mx<730&&my>220&&my<300)
                sflag=3;

            if(mx>580&&mx<730&&my>45&&my<125)
                exit(0);
            if(mx>580&&mx<730&&my>570&&my<650)
                sflag=2;
            if(mx>580&&mx<730&&my>395&&my<475)
            {
                fp = fopen("High Scores.txt", "rb");
                if ( fread(&q, sizeof(int), 1, fp) != 1)   // to read any data type in binary mode from a file
                {
                    printf("Read Error\n");
                    exit(1);
                }
                printf("q = %d\n", q);
                // q=atoi(q);
                num100=q/100;
                q=q%100;
                num10=q/10;
                q=q%10;
                num1=q;
                numsetter();
                sflag=6;
                printf("maximum = %d\n %d %d %d\n", maximum,num100,num10,num1);
                for(j=0; j<9; j++)
                {
                    printf("%d ",d[j]);

                }
                printf("\n");
                for(k=0; k<9; k++)
                {
                    printf("%d ",d[k]);

                }
                printf("\n");
                for(l=0; l<9; l++)
                {
                    printf("%d ",d[l]);

                }
                printf("\n");
                fclose(fp);
            }
        }
        if(sflag==2)
        {
            if(mx>1265&&mx<1315&&my>615&&my<665)
                sflag=4;
        }
        if(sflag==3)
        {
            if(mx>282.5&&mx<427.5&&my>237.5&&my<312.5)
                sflag=1;
        }
        if(sflag==4)
        {
            if(mx>602&&mx<727&&my>357&&my<412)
                sflag=2;
            if(mx>602&&mx<727&&my>407&&my<462)
                exit(0);

        }
        if(sflag==5)
        {
            if(mx>580&&mx<725&&my>257&&my<312)
                sflag=1;
            if(mx>580&&mx<725&&my>157&&my<212)
                //sflag=4;
                exit(0);
        }
        if(sflag==6)
        {
            if(mx>600&&mx<745&&my>237.5&&my<312.5)
                sflag=1;

        }
        if(sflag==7)
        {
            if(mx>600&&mx<745&&my>237.5&&my<312.5)
                sflag=1;

        }
    }

}
void iKeyboard(unsigned char key)
{
    if(key=='p')
        sflag=1;
}
void iSpecialKeyboard(unsigned char key)
{
}
int main()
{
    /*num100=maximum/100;
      maximum=maximum%100;
      num10=maximum/10;
      maximum=maximum%10;
      num1=maximum;*/

    // pointer=&q;
    iSetTimer(67000,flagholder);
    PlaySound("D:\\test1.wav",NULL,SND_ASYNC| SND_LOOP);
    // numsetter();
    iInitialize(1350, 700, "BABY'S STEPS");
    return 0;
}
