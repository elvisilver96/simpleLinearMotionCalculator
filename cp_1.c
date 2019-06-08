#include <windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>
#include<math.h>

void welcome();
void main_menu();
void loading_bar();
void gotoxy(int x,int y);
int t(void);
void initial_velocity();
void final_velocity();
void acceleration();
void displacement();
void Time();
void history();
void introduction();
void view_record1();
void delete_record();
void wrong_input();
void exitlo();

void uvat();
void sat(void);
void uvas();

void vuat();
void vuas();

void avut();
void avus();
void asut();

void suvt();
void suat();
void svu();

void tvua();
void tsuv();



struct value{

float acceleration;
float initial_velocity;
float final_velocity;
float displacement;
float time;

};



COORD coord={0,0};


void gotoxy(int x,int y)
{
 coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int t(void)
{
time_t t;
time(&t);
printf("Date and time:%s\n",ctime(&t));

return 0 ;}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void loading_bar(){
int counter;
gotoxy(32,10);printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
for(counter=0;counter<16;counter++)
   { gotoxy(32+counter,10);printf("\xDB");
     gotoxy(49,10);printf("%d%%",counter+85);
     delay(100);


   }

}
 FILE *f1;
 char display[1000];

int main()
{
welcome();
system("cls");
Sleep(100);
main_menu();



}


void welcome(){

char text[100]={"SIMPLE               LINEAR                MOTION              CALCULATOR"};
int coun;
printf("\n");
gotoxy(2,6);printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
for(coun=0;coun<75;coun++)
{ gotoxy(coun+2,5);printf("%c",text[coun]);
  gotoxy(coun+2,6);printf("\xDB");
  gotoxy(75,7);printf("%d%%",coun+26);
  Sleep(50);
}

}




void main_menu()
{
    int option;
	gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 MAIN MENU \xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Initial Velocity   ");
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Final Velocity ");
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Acceleration ");
	gotoxy(20,11);
	printf("\xDB\xDB\xDB\xDB\xba 4.Displacement");
	gotoxy(20,13);
	printf("\xDB\xDB\xDB\xDB\xba 5.Time");
	gotoxy(20,15);
	printf("\xDB\xDB\xDB\xDB\xba 6.Record");
	gotoxy(20,17);
	printf("\xDB\xDB\xDB\xDB\xba 7.Introduction");
	gotoxy(20,19);
	printf("\xDB\xDB\xDB\xDB\xba 8.Exit");
	gotoxy(20,21);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,20);
	gotoxy(20,2);
	t();
	gotoxy(20,23);printf("Enter your choice:");




	switch(getch())
	{ case '1':system("cls");
	           loading_bar();
	           system("cls");
	           initial_velocity();
	           break;

	  case '2':system("cls");
	           loading_bar();
	           system("cls");
	           final_velocity();
	           break;

      case '3':system("cls");
	           loading_bar();
	           system("cls");
	           acceleration();
	           break;

	  case '4':system("cls");
	           loading_bar();
	           system("cls");
	           displacement();
	           break;


	  case '5':system("cls");
	           loading_bar();
	           system("cls");
	           Time();
	           break;

	  case '6':system("cls");
	           loading_bar();
	           system("cls");
	           view_record1();
	           break;

	  case '7':system("cls");
	           loading_bar();
	           system("cls");
	           introduction();
	           break;

	  case '8':system("cls");
	           loading_bar();
	           system("cls");
               exitlo();
               break;
      default:
        { printf("\xDB invalid input \xDB Please re-enter \xDB");

           if(getch()){
            main_menu();

            }



        }

	}


}




void initial_velocity()
{   gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 INITIAL_VELOCITY \xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.u=v-at");
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.u=(s-(1/2at^2))/t ");
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.u=(v^2-2as)^1/2");
	gotoxy(20,11);
	printf("\xDB\xDB\xDB\xDB\xba 4.Back");
	gotoxy(20,13);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,14);printf("*-------------------*");
	gotoxy(20,15);printf("|u=Initial Velocity |");
	gotoxy(20,16);printf("|v=Final Velocity   |");
	gotoxy(20,17);printf("|a=Acceleration     |");
	gotoxy(20,18);printf("|s=Displacement     |");
	gotoxy(20,19);printf("|t=Time             |");
	gotoxy(20,20);printf("*-------------------*");

	gotoxy(20,21);printf("Select option:");

	switch (getch())
	{   case '1':
                  system("cls");
                  uvat();
                  break;

       case '2':
                 system("cls");
                 sat();
                 break;

       case '3':
                 system("cls");
                 uvas();
                 break;

       case '4': system("cls");
                 main_menu();
                 break;

                 default:
        { printf("\xDB invalid input \xDB Please re-enter \xDB");

          if(getch())
          { initial_velocity();
          }

          }

        }
	}

void uvat()
{   struct value v1;
     v1.displacement=0;

    gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 u=v-at\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba Enter Final Velocity(m/s):");
	scanf("%f",&v1.final_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Acceleration(m/s^2):");
	scanf("%f",&v1.acceleration);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter time(s):");
	scanf("%f",&v1.time);
	v1.initial_velocity=v1.final_velocity-(v1.acceleration*v1.time);
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Initial Velocity=:%.2f m/s",v1.initial_velocity);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	f1=fopen("file1.dat","ab");
	fwrite(&v1,sizeof(v1),1,f1);
	fflush(stdin);
	fclose(f1);

    gotoxy(20,15);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 uvat();
                 break;
        default:
            system("cls");
           gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
               initial_velocity();


             }}





}



void sat()
{ struct value v2;
 v2.final_velocity=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 u=(s-(1/2at^2))/t\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter Displacement(m):");
	scanf("%f",&v2.displacement);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Acceleration(m/s^2): ");
	scanf("%f",&v2.acceleration);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter time(s):");
	scanf("%f",&v2.time);
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Initial Velocity=:%.2f m/s",v2.initial_velocity=((v2.displacement-(0.5*v2.acceleration*(v2.time*v2.time))/v2.time)));
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
    gotoxy(20,15);
    f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 sat();
                 break;
        default:
            system("cls");
           gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
               initial_velocity();

             }

}}


void uvas()
{ struct value v2;
 v2.time=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 u=((v*2)-2as)*1/2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter Final Velocity(m/s^2):");
	scanf("%f",&v2.final_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Acceleration(m/s^2): ");
	scanf("%f",&v2.acceleration);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter Displacement:");
	scanf("%f",&v2.displacement);
	v2.initial_velocity=(v2.final_velocity*v2.final_velocity)-(2*v2.acceleration*v2.displacement);
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Initial Velocity=:%.2f m/s",v2.initial_velocity);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
    gotoxy(20,15);
    f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 uvas();
                 break;
        default:
            system("cls");
           gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
               initial_velocity();


             }




}}


void final_velocity()
{
    gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 FINAL_VELOCITY \xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.v=u+at");
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.v=(u^2)+2as");
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Back");
	gotoxy(20,12);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,14);printf("*-------------------*");
	gotoxy(20,15);printf("|u=Initial Velocity |");
	gotoxy(20,16);printf("|v=Final Velocity   |");
	gotoxy(20,17);printf("|a=Acceleration     |");
	gotoxy(20,18);printf("|s=Displacement     |");
	gotoxy(20,19);printf("|t=Time             |");
	gotoxy(20,20);printf("*-------------------*");

	gotoxy(20,21);printf("Select option:");

	switch (getch())
	{   case '1': system("cls");
                  loading_bar();
                  system("cls");
                  vuat();
                  break;

       case '2': system("cls");
                 loading_bar();
                 system("cls");
                 vuas();
                 break;


       case '3': system("cls");
                 main_menu();
                 break;

                 default:
        { printf("\xDB invalid input \xDB Please re-enter \xDB");

          if(getch())
          { final_velocity();
          }

          }

        }
	}



void vuat()
{ struct value v2;
  v2.displacement=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 v=u+at\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter initial Velocity(m/s^2):");
	scanf("%f",&v2.initial_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Acceleration(m/s^2): ");
	scanf("%f",&v2.acceleration);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter Time(s):");
	scanf("%f",&v2.time);
	v2.final_velocity=v2.initial_velocity-(v2.acceleration*v2.time);
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Final Velocity=:%.2f m/s",v2.final_velocity);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
    gotoxy(20,15);
    f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 vuat();
                 break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
               final_velocity();


             }




}}

void vuas()
{ struct value v2;
  v2.time=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 v=(u^2)+2as\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter initial Velocity(m/s^2):");
	scanf("%f",&v2.initial_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Acceleration(m/s^2): ");
	scanf("%f",&v2.acceleration);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter Displacement(m):");
	scanf("%f",&v2.displacement);
	v2.final_velocity=(v2.initial_velocity*v2.initial_velocity)+2*v2.acceleration*v2.displacement;
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Final Velocity=:%.2f m/s",v2.final_velocity);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
    gotoxy(20,15);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 vuas();
                 break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
               final_velocity();
             }
}}


void acceleration()
{   gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 ACCELERATION \xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.a=(v-u)/t");
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.a=(V^2-u^2)/2s");
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.a=(s-u)/(0.5t^2)");
	gotoxy(20,11);
	printf("\xDB\xDB\xDB\xDB\xba 4.Back");
	gotoxy(20,13);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,14);printf("*-------------------*");
	gotoxy(20,15);printf("|u=Initial Velocity |");
	gotoxy(20,16);printf("|v=Final Velocity   |");
	gotoxy(20,17);printf("|a=Acceleration     |");
	gotoxy(20,18);printf("|s=Displacement     |");
	gotoxy(20,19);printf("|t=Time             |");
	gotoxy(20,20);printf("*-------------------*");

	gotoxy(20,21);printf("Select option:");

	switch (getch())
	{   case '1': system("cls");
                  loading_bar();
                  system("cls");
                  avut();
                  break;

       case '2': system("cls");
                 loading_bar();
                 system("cls");
                 avus();
                 break;

      case '3': system("cls");
                 loading_bar();
                 system("cls");
                 asut();
                 break;


       case '4': system("cls");
                 main_menu();
                 break;

                 default:
        { printf("\xDB invalid input \xDB Please re-enter \xDB");

          if(getch())
          { acceleration();
          }

          }

        }
	}


void avut()
{ struct value v2;
v2.displacement=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 a=(v-u)/t \xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter initial Velocity(m/s^2):");
	scanf("%f",&v2.initial_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Final Velocity(m/s^2): ");
	scanf("%f",&v2.final_velocity);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter time (s):");
	scanf("%f",&v2.time);
	v2.acceleration=(v2.final_velocity-v2.initial_velocity)/v2.time;
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Acceleration=:%.2f m/s^2",v2.acceleration);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
    gotoxy(20,15);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 avut();
                 break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
               acceleration();


             }

}}


void avus()
{ struct value v2;
v2.time=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 a=(V^2-u^2)/2s\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter initial Velocity(m/s^2):");
	scanf("%f",&v2.initial_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Final Velocity(m/s^2): ");
	scanf("%f",&v2.final_velocity);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Displacement(s):");
	scanf("%f",&v2.displacement);
	v2.acceleration=((v2.final_velocity*v2.final_velocity)-(v2.initial_velocity*v2.initial_velocity))/(2*v2.displacement);
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Acceleration=:%.2f m/s^2",v2.acceleration);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
    f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
    gotoxy(20,15);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 avus();
                 break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
               acceleration();


             }
}}


void asut()
{ struct value v2;
v2.final_velocity=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 a=(s-u)/(0.5t^2)\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter initial Velocity(m/s^2):");
	scanf("%f",&v2.initial_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Time(s): ");
	scanf("%f",&v2.time);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Displacement(s):");
	scanf("%f",&v2.displacement);
	v2.acceleration=(v2.displacement-v2.initial_velocity)/(0.5*(v2.time*v2.time));
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Acceleration=:%.2f m/s^2",v2.acceleration);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
    f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
    gotoxy(20,15);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 asut();
                 break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
               acceleration();


             }




}}

void displacement()
{   gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 DISPLACEMENT \xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.s=0.5(u+v)t");
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.s=ut+0.5(at^2)");
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.s=(v^2-u^2)/2a");
	gotoxy(20,11);
	printf("\xDB\xDB\xDB\xDB\xba 4.Back");
	gotoxy(20,13);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,14);printf("*-------------------*");
	gotoxy(20,15);printf("|u=Initial Velocity |");
	gotoxy(20,16);printf("|v=Final Velocity   |");
	gotoxy(20,17);printf("|a=Acceleration     |");
	gotoxy(20,18);printf("|s=Displacement     |");
	gotoxy(20,19);printf("|t=Time             |");
	gotoxy(20,20);printf("*-------------------*");

	gotoxy(20,21);printf("Select option:");

	switch (getch())
	{   case '1': system("cls");
                  loading_bar();
                  system("cls");
                  suvt();
                  break;

       case '2': system("cls");
                 loading_bar();
                 system("cls");
                 suat();
                 break;

      case '3': system("cls");
                 loading_bar();
                 system("cls");
                 svu();
                 break;


       case '4': system("cls");
                 main_menu();
                 break;

                 default:
        { printf("\xDB invalid input \xDB Please re-enter \xDB");

          if(getch())
          { displacement();
          }

          }

        }
	}

void suvt()
{ struct value v2;
v2.acceleration=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 s=0.5(u+v)t\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter initial Velocity(m/s^2):");
	scanf("%f",&v2.initial_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Final Velocity(m/s^2) ");
	scanf("%f",&v2.final_velocity);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter Time(s):");
	scanf("%f",&v2.time);
	v2.displacement=0.5*(v2.initial_velocity+v2.final_velocity)*v2.time;
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Displacement=:%.2f m",v2.displacement);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
    f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
    gotoxy(20,15);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 suvt();
                 break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
               displacement();
             }

}}


void suat()
{ struct value v2;
 v2.final_velocity=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 s=ut+0.5(at^2)\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter initial Velocity(m/s^2):");
	scanf("%f",&v2.initial_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Time(s): ");
	scanf("%f",&v2.time);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter Acceleration(m/s^2):");
	scanf("%f",&v2.acceleration);
	v2.displacement=(v2.initial_velocity*v2.time)+0.5*(v2.acceleration*(v2.time*v2.time));
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Displacement=:%.2f m",v2.displacement);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
    f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
    gotoxy(20,15);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 suat();
                 break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
               displacement();
             }

}}

void svu()
{ struct value v2;
v2.time=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 s=(v^2-u^2)/2a\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter initial Velocity(m/s^2):");
	scanf("%f",&v2.initial_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Final Velocity(m/s^2): ");
	scanf("%f",&v2.final_velocity);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter Acceleration(m/s^2):");
	scanf("%f",&v2.acceleration);
	v2.displacement=((v2.final_velocity*v2.final_velocity)-(v2.initial_velocity*v2.initial_velocity))/2*v2.acceleration;
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Displacement=:%.2f m",v2.displacement);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
    f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
    gotoxy(20,15);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                svu();
                break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
               system("cls");
               displacement();
             }
}}




void Time()
{   gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 TIME \xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.t=(v-u)/a");
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.t=2s/(u+v)");
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Back");
	gotoxy(20,11);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,12);printf("*-------------------*");
	gotoxy(20,13);printf("|u=Initial Velocity |");
	gotoxy(20,14);printf("|v=Final Velocity   |");
	gotoxy(20,15);printf("|a=Acceleration     |");
	gotoxy(20,16);printf("|s=Displacement     |");
	gotoxy(20,17);printf("|t=Time             |");
	gotoxy(20,18);printf("*-------------------*");

	gotoxy(20,19);printf("Select option:");

	switch (getch())
	{   case '1': system("cls");
                  loading_bar();
                  system("cls");
                  tvua();
                  break;

       case '2': system("cls");
                 loading_bar();
                 system("cls");
                 tsuv();
                 break;

      case '3': system("cls");
                 loading_bar();
                 system("cls");
                 svu();
                 break;


       case '4': system("cls");
                 main_menu();
                 break;

                 default:
        { printf("\xDB invalid input \xDB Please re-enter \xDB");

          if(getch())
          { Time();
          }

          }

        }
	}



void tvua()
{ struct value v2;
v2.displacement=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 t=(v-u)/a\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter initial Velocity(m/s^2):");
	scanf("%f",&v2.initial_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Final Velocity(m/s^2): ");
	scanf("%f",&v2.final_velocity);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter Acceleration(m/s^2):");
	scanf("%f",&v2.acceleration);
	v2.time=(v2.final_velocity-v2.initial_velocity)/v2.acceleration;
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Time=:%.2f s",v2.time);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
    f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
    gotoxy(20,15);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                tvua();
                break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
               system("cls");
                Time();
             }
}}

void tsuv()
{ struct value v2;
v2.acceleration=0;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 t=2s/(u+v)\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.Enter initial Velocity(m/s^2):");
	scanf("%f",&v2.initial_velocity);
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.Enter Final Velocity(m/s^2): ");
	scanf("%f",&v2.final_velocity);
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.Enter Displacement(m):");
	scanf("%f",&v2.displacement);
	v2.time=(2*v2.displacement)/(v2.initial_velocity+v2.final_velocity);
	gotoxy(20,11);printf("\xDB\xDB\xDB\xDB\xba Time=:%.2f s",v2.time);
	gotoxy(20,13);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
    f1=fopen("file1.dat","ab");
	fwrite(&v2,sizeof(v2),1,f1);
	fflush(stdin);
	fclose(f1);
    gotoxy(20,15);
	printf("\xba 1.Main Menu");
	gotoxy(20,16);
	printf("\xba 2.Another value");

    switch(getch()){
        case'1':system("cls");
                loading_bar();
                system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                tsuv();
                break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
               system("cls");
               Time();
             }
}}



void introduction()
{
char intro  [1000]={"Linear  motion is  a basic  knowledge in"};
char intro1 [1000]={"static/dynamic matter.  Linear motion is"};
char intro2 [1000]={"a motion along straight line, and can be"};
char intro3 [1000]={"described   mathematically.  The  linear"};
char intro4 [1000]={"motion can be two types which is uniform"};
char intro5 [1000]={"linear motion with  constant velocity or"};
char intro6 [1000]={"zero acceleration and non uniform linear"};
char intro7 [1000]={"motion  with variable  velocity non zero"};
char intro8 [1000]={"acceleration  variable velocity/non zero"};
char intro9 [1000]={"velocity   acceleration. An  example  of"};
char intro10[1000]={"linear motion is an athlete running 100m"};
char intro11[1000]={"along a straight track."};
int j,h,k,l,m,n,o,p,q;
gotoxy(20,1);t();
    gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 INTRODUCTION\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");

for(j=0;j<=strlen(intro);j++)
{
  gotoxy(20+j,5);printf("%c",intro[j]);
  delay(10);}

  for(h=0;h<=strlen(intro1);h++)
{
  gotoxy(20+h,6);printf("%c",intro1[h]);
  delay(10);}

  for(k=0;k<=strlen(intro2);k++)
{
  gotoxy(20+k,7);printf("%c",intro2[k]);
  delay(10);}

  for(l=0;l<=strlen(intro3);l++)
{
  gotoxy(20+l,8);printf("%c",intro3[l]);
  delay(10);}

  for(m=0;m<=strlen(intro4);m++)
{
  gotoxy(20+m,9);printf("%c",intro4[m]);
  delay(10);}

  for(n=0;n<=strlen(intro5);n++)
{
  gotoxy(20+n,10);printf("%c",intro5[n]);
  delay(10);}

  for(o=0;o<=strlen(intro6);o++)
{
  gotoxy(20+o,11);printf("%c",intro6[o]);
  delay(10);}

  for(p=0;p<=strlen(intro7);p++)
{
  gotoxy(20+p,12);printf("%c",intro7[p]);
  delay(10);}

  for(q=0;q<=strlen(intro8);q++)
{
  gotoxy(20+q,13);printf("%c",intro8[q]);
  delay(10);}

  for(q=0;q<=strlen(intro9);q++)
{
  gotoxy(20+q,14);printf("%c",intro9[q]);
  delay(10);}

  for(q=0;q<=strlen(intro10);q++)
{
  gotoxy(20+q,15);printf("%c",intro10[q]);
  delay(10);}

  for(q=0;q<=strlen(intro11);q++)
{
  gotoxy(20+q,16);printf("%c",intro11[q]);
  delay(10);}

gotoxy(20,17);printf("1.back");
if(getch()=='1'){
     system("cls");
     main_menu();
}
else {

    wrong_input();
}

}



void view_record1(){

struct value v1;

f1=fopen("file1.dat","rb");
if(f1==NULL)
{
 gotoxy(24,10); printf("\xDB YOU HAVE NO DATA TO DISPLAY  \xDB");
 getch();
 system("cls");
 main_menu();

exit(1);
}
printf(" \nYOUR RECORD IS:\n");
while(fread(&v1,sizeof(v1),1,f1)==1)
{

     printf("Final Velocity:%.2f\nDisplacement:%.2f\nAcceleration:%.2f\nTime:%.2f\nInitial Velocity:%.2f\n\n",v1.final_velocity,v1.displacement,v1.acceleration,v1.time,v1.initial_velocity);
     printf("\n");



}

fclose(f1);

printf("\n================\n");
printf("1.back\n  \n");
printf("2.Clear Data \n");
printf("================\n");

switch(getch())
{
  case '1':system("cls");
           main_menu();
           break;
  case'2':system("cls");
          delete_record();
          break;

  default:

            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
               system("cls");
               view_record1();
             }



}

}


void delete_record(){

int status;
status=remove("file1.dat");

if(status=0){

    gotoxy(24,10); printf("\xDB CLEAR SUCESSFULL \xDB");

}

main_menu();

}



void wrong_input(){
gotoxy(24,10); printf("\xDB please re-enter \xDB");


}


void exitlo(){
system("cls");
		gotoxy(16,3);
		printf("Programmers....");
		gotoxy(16,4);
		printf("1. ELVI SILVER BELI       54211115092");
		gotoxy(16,5);
		printf("   Mobile:0138998318   E-mail:elvisilversilver@gmail.com");
		gotoxy(16,7);
		printf("2. AHMAD SYAHIR           54211115090");
		gotoxy(16,8);
		printf("   Mobile:0134838264   E-mail:ahmadsyahir9204@gmail.com");
		gotoxy(16,10);
		printf("3. MOHD AZRUL NIZAM       5421111512");
		gotoxy(16,11);
		printf("   Mobile:01110848950  E-mail:azrulpales@gmail.com");
		gotoxy(16,13);
		printf("With  the Unexplainable Help of Madam Norzalina Binti Othman");
		gotoxy(10,17);
		printf("Exiting in 3 second...........>");

		delay(3000);
		exit(0);





}
