# include "iGraphics.h"
#include<string.h>
#include<stdlib.h>

double x1 = 22, y = 200, r = 30,x2=17.5,x3=12,x4=17.5,x5=24.5,x6=19.5,x7=85,x8=17.5,x9=17.5,x10=25,x11=50,x12=12.5,x13=20;
int i=1,t,flag, f=0,ti,temp=0,temp1,point=0,maximum=0;
double a[]= {12,14.5,14.5,12,9.5,9.5,12};   //baby's left leg x axis coordinate
double b[]= {20,18,2,0,2,18,20};            //baby's leg y axis coordinate
double c[]= {22,24.5,24.5,22,19.5,19.5,22};  //baby's right leg x axis coordinate



void iDraw()
{

    iClear();
if(temp1==1){
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


void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n",mx,my);

}
void HighScore(int p){
 fp = fopen("f7", "wb");
 if ( fwrite(&p, sizeof(int), 1, fp) != 1) { // to write any data type in binary mode to a file
        printf("Write Error\n");
        exit(1);
    }
    fclose(fp);
}

void MaxScore(int m){
 maximum=m>maximum?m:maximum;
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
        iPauseTimer(0);
        PlaySound("G:\\test.wav",NULL,SND_ASYNC);
        printf("%d",point);
    }

}

void iMouse(int button, int state, int mx, int my)
{



if(temp==0){

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
        if((c[3]-a[3])>31.55){
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

             PlaySound("G:\\test.wav",NULL,SND_ASYNC);
                 iPauseTimer(0);
                 temp=1;
        printf("%d",point);
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
            PlaySound("G:\\test.wav",NULL,SND_ASYNC);
                iPauseTimer(0);
                temp=1;
printf("%d",point);
        }

    }

    flag=0;

}

}


void iKeyboard(unsigned char key)
{
    if (key == 'q')
    {
        exit(0);
    }

}

void iSpecialKeyboard(unsigned char key)
{

    if (key == GLUT_KEY_END)
    {
        exit(0);
    }

}


int main()
{
iSetTimer(82000,flagholder);
    PlaySound("G:\\test1.wav",NULL,SND_ASYNC| SND_LOOP);

    iInitialize(1340, 690, "BABY'S STEPS");
    return 0;
}
