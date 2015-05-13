#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char Jeu_classique(char *Ab,char *Aprimb,char *Dprimb,char *Db,char *Gb,char *Gprimb,char *dessusb,char *dessusprimb,char *dessousb,char *dessousprimb,char *dosb,char *dosprimb);
void algo_de_reso(char *Ac);

int main()
{
    char A[4]={'a','z','e','r'};
    char dessus[4]={0};
    char D[4]={0};
    char G[4]={0};
    char dos[4]={'t','y','u','i'};
    char dessous[4]={0};
    char Aprim[4]={'a','z','e','r'};
    char dessusprim[4]={0};
    char Dprim[4]={0};
    char Gprim[4]={0};
    char dosprim[4]={0};
    char dessousprim[4]={0};
    char mode=0;

    //char fin=10;

    dessus[0]=dos[0];
    dessus[1]=dos[1];
    dessus[2]=A[0];
    dessus[3]=A[1];
    D[0]=A[1];
    D[1]=dos[1];
    D[2]=A[3];
    D[3]=dos[3];
    G[0]=dos[0];
    G[1]=A[0];
    G[2]=dos[2];
    G[3]=A[2];
    dessous[0]=A[2];
    dessous[1]=A[3];
    dessous[2]=dos[2];
    dessous[3]=dos[3];



    //fin=Jeu_classique(&A,&Aprim,&Dprim,&D,&G,&Gprim,&dessus,&dessusprim,&dessous,&dessousprim,&dos,&dosprim)


    printf("Hello world!\n");
    printf("Selectionne le mode de jeu a=Jeu classique b= mode auto \n");
    while(mode==0)
    {
        mode=getch();
        switch(mode)
        {
         case 'b':
            algo_de_reso(A);
         break;
         case 'a':

            while(Jeu_classique(A,Aprim,Dprim,D,G,Gprim,dessus,dessusprim,dessous,dessousprim,dos,dosprim)==0);
         break;

        }
    }

    //printf("%c %c \n",A[0],A[1]);
    //printf("%c %c \n",A[2],A[3]);



    printf("Appuyer sur une touche pour sortir de la boucle");

    return 0;
}

void algo_de_reso(char *A)
{
     if((A[0]=='a')&( A[1]=='z' )&(A[2]=='e')&(A[3]=='r'))
            {
                printf("lol");
                //end=1;
            }
}

char Jeu_classique(char *Ab,char *Aprimb,char *Dprimb,char *Db,char *Gb,char *Gprimb,char *dessusb,char *dessusprimb,char *dessousb,char *dessousprimb,char *dosb,char *dosprimb)
{
    printf("Jeu classique selectionnee\n selectionne une des faces pour effectuer un mouvement \n");
    printf("Face : a= avant e= dos z= dessus q= gauche s= dessous d= droite t= CUBE ENTIER\n");
    printf("Mouvement : k=sens anti horaire m= sens horaire\n");
    printf("Appui sur w pour quitter le jeu\n");
    char cas=0;
    char end=0;
    char face=0;
     while(end==0)
     {



            cas=getch();
               switch(cas)
            {
                case 'a':
                    system("cls");
                    printf("%c %c \n",Ab[0],Ab[1]);
                    printf("%c %c \n",Ab[2],Ab[3]);
                    face=1;
                    break;
                case 'z':
                    system("cls");
                    printf("%c %c \n",dessusb[0],dessusb[1]);
                    printf("%c %c \n",dessusb[2],dessusb[3]);
                    face=4;
                    break;
                case 'q':
                    system("cls");
                    printf("%c %c \n",Gb[0],Gb[1]);
                    printf("%c %c \n",Gb[2],Gb[3]);
                    face=3;
                    break;
                case 'd':
                    system("cls");
                    printf("%c %c \n",Db[0],Db[1]);
                    printf("%c %c \n",Db[2],Db[3]);
                    face=2;
                    break;
                case 's':
                    system("cls");
                    printf("%c %c \n",dessousb[0],dessousb[1]);
                    printf("%c %c \n",dessousb[2],dessousb[3]);
                    face=5;
                    break;
                case 'e':
                    system("cls");
                    printf("%c %c \n",dosb[0],dosb[1]);
                    printf("%c %c \n",dosb[2],dosb[3]);
                    face=6;

                    break;
                 case 't':
                     system("cls");
                     printf("     %c %c       |\n",dessusb[0],dessusb[1]);
                     printf("     %c %c       |\n               |\n",dessusb[2],dessusb[3]);
                     printf("%c %c  %c %c  %c %c  |    %c %c \n",Gb[0],Gb[1],Ab[0],Ab[1],Db[0],Db[1],dosb[0],dosb[1]);
                     printf("%c %c  %c %c  %c %c  |    %c %c \n               |\n",Gb[2],Gb[3],Ab[2],Ab[3],Db[2],Db[3],dosb[2],dosb[3]);
                     printf("     %c %c       | \n",dessousb[0],dessousb[1]);
                     printf("     %c %c       |\n",dessousb[2],dessousb[3]);
                     break;

                case 'k':
                    printf("Selectionne d'abord une face\n %d ",face);
                    if (face==1)
                    {
                    printf("Appui de la fleche de gauche\n");
                    Aprimb[0]=Ab[0];
                    Aprimb[1]=Ab[1];
                    Aprimb[2]=Ab[2];
                    Aprimb[3]=Ab[3];
                    Ab[0]=Aprimb[1];
                    Ab[1]=Aprimb[3];
                    Ab[2]=Aprimb[0];
                    Ab[3]=Aprimb[2];
                    dessusb[2]=Ab[0];
                    dessusb[3]=Ab[1];
                    Db[0]=Ab[1];
                    Db[2]=Ab[3];
                    Gb[1]=Ab[0];
                    Gb[3]=Ab[2];
                    dessousb[0]=Ab[2];
                    dessousb[1]=Ab[3];
                    printf("%c %c \n",Ab[0],Ab[1]);
                    printf("%c %c \n",Ab[2],Ab[3]);
                    }

                     if (face==2)// sens horaire face droite
                    {
                     printf("Appui de la fleche de gauche\n");
                    Dprimb[0]=Db[0];
                    Dprimb[1]=Db[1];
                    Dprimb[2]=Db[2];
                    Dprimb[3]=Db[3];
                    Db[0]=Dprimb[1];
                    Db[1]=Dprimb[3];
                    Db[2]=Dprimb[0];
                    Db[3]=Dprimb[2];
                    dessusb[1]=Db[1];
                    dessusb[3]=Db[0];
                    Ab[1]=Db[0];
                    Ab[3]=Db[2];
                    dessousb[1]=Db[2];
                    dessousb[3]=Db[3];
                    dosb[1]=Db[1];
                    dosb[3]=Db[3];
                    printf("%c %c \n",Db[0],Db[1]);
                    printf("%c %c \n",Db[2],Db[3]);
                    }
                     if (face==3)// sens horaire face gauche
                    {
                     printf("Appui de la fleche de droite\n");
                    Gprimb[0]=Gb[0];
                    Gprimb[1]=Gb[1];
                    Gprimb[2]=Gb[2];
                    Gprimb[3]=Gb[3];
                    Gb[0]=Gprimb[1];
                    Gb[1]=Gprimb[3];
                    Gb[2]=Gprimb[0];
                    Gb[3]=Gprimb[2];
                    dessusb[0]=Gb[0];
                    dessusb[2]=Gb[1];
                    Ab[0]=Gb[1];
                    Ab[2]=Gb[3];
                    dessousb[0]=Gb[2];
                    dessousb[2]=Gb[3];
                    dosb[0]=Gb[0];
                    dosb[2]=Gb[2];
                    printf("%c %c \n",Gb[0],Gb[1]);
                    printf("%c %c \n",Gb[2],Gb[3]);
                    }

                    if (face==4) // sens horaire face du dessus
                    {
                     printf("Appui de la fleche de droite\n");
                    dessusprimb[0]=dessusb[0];
                    dessusprimb[1]=dessusb[1];
                    dessusprimb[2]=dessusb[2];
                    dessusprimb[3]=dessusb[3];
                    dessusb[0]=dessusprimb[1];
                    dessusb[1]=dessusprimb[3];
                    dessusb[2]=dessusprimb[0];
                    dessusb[3]=dessusprimb[2];
                    Ab[0]=dessusb[2];
                    Ab[1]=dessusb[3];
                    dosb[0]=dessusb[0];
                    dosb[1]=dessusb[1];
                    Gb[0]=dessusb[0];
                    Gb[1]=dessusb[2];
                    Db[0]=dessusb[3];
                    Db[1]=dessusb[1];
                    printf("%c %c \n",dessusb[0],dessusb[1]);
                    printf("%c %c \n",dessusb[2],dessusb[3]);
                    }

                    if (face==5) // sens horaire face du dessus
                    {
                     printf("Appui de la fleche de droite\n");
                    dessousprimb[0]=dessousb[0];
                    dessousprimb[1]=dessousb[1];
                    dessousprimb[2]=dessousb[2];
                    dessousprimb[3]=dessousb[3];
                    dessousb[0]=dessousprimb[1];
                    dessousb[1]=dessousprimb[3];
                    dessousb[2]=dessousprimb[0];
                    dessousb[3]=dessousprimb[2];
                    Ab[2]=dessousb[0];
                    Ab[3]=dessousb[1];
                    dosb[2]=dessousb[2];
                    dosb[3]=dessousb[3];
                    Gb[3]=dessousb[0];
                    Gb[2]=dessousb[2];
                    Db[2]=dessousb[1];
                    Db[3]=dessousb[3];
                    printf("%c %c \n",dessousb[0],dessousb[1]);
                    printf("%c %c \n",dessousb[2],dessousb[3]);
                    }

                     if (face==6) // sens horaire face avant
                    {
                     printf("Appui de la fleche de droite\n");
                    dosprimb[0]=dosb[0];
                    dosprimb[1]=dosb[1];
                    dosprimb[2]=dosb[2];
                    dosprimb[3]=dosb[3];
                    dosb[0]=dosprimb[1];
                    dosb[1]=dosprimb[3];
                    dosb[2]=dosprimb[0];
                    dosb[3]=dosprimb[2];
                    dessusb[0]=dosb[0];
                    dessusb[1]=dosb[1];
                    Db[1]=dosb[1];
                    Db[3]=dosb[3];
                    Gb[0]=dosb[0];
                    Gb[2]=dosb[2];
                    dessousb[2]=dosb[2];
                    dessousb[3]=dosb[3];
                    printf("%c %c \n",dosb[0],dosb[1]);
                    printf("%c %c \n",dosb[2],dosb[3]);
                    }

                    break;
                case 'm':
                     if(face==0)printf("Selectionne d'abord une face\n");
                    if (face==1) // sens horaire face avant
                    {
                     printf("Appui de la fleche de droite\n");
                    Aprimb[0]=Ab[0];
                    Aprimb[1]=Ab[1];
                    Aprimb[2]=Ab[2];
                    Aprimb[3]=Ab[3];
                    Ab[0]=Aprimb[2];
                    Ab[1]=Aprimb[0];
                    Ab[2]=Aprimb[3];
                    Ab[3]=Aprimb[1];
                    dessusb[2]=Ab[0];
                    dessusb[3]=Ab[1];
                    Db[0]=Ab[1];
                    Db[2]=Ab[3];
                    Gb[1]=Ab[0];
                    Gb[3]=Ab[2];
                    dessousb[0]=Ab[2];
                    dessousb[1]=Ab[3];
                    printf("%c %c \n",Ab[0],Ab[1]);
                    printf("%c %c \n",Ab[2],Ab[3]);}

                     if (face==2)// sens horaire face droite
                    {
                     printf("Appui de la fleche de droite\n");
                    Dprimb[0]=Db[0];
                    Dprimb[1]=Db[1];
                    Dprimb[2]=Db[2];
                    Dprimb[3]=Db[3];
                    Db[0]=Dprimb[2];
                    Db[1]=Dprimb[0];
                    Db[2]=Dprimb[3];
                    Db[3]=Dprimb[1];
                    dessusb[1]=Db[1];
                    dessusb[3]=Db[0];
                    Ab[1]=Db[0];
                    Ab[3]=Db[2];
                    dessousb[1]=Db[2];
                    dessousb[3]=Db[3];
                    dosb[1]=Db[1];
                    dosb[3]=Db[3];
                    printf("%c %c \n",Db[0],Db[1]);
                    printf("%c %c \n",Db[2],Db[3]);
                    }
                     if (face==3)// sens horaire face gauche
                    {
                     printf("Appui de la fleche de droite\n");
                    Gprimb[0]=Gb[0];
                    Gprimb[1]=Gb[1];
                    Gprimb[2]=Gb[2];
                    Gprimb[3]=Gb[3];
                    Gb[0]=Gprimb[2];
                    Gb[1]=Gprimb[0];
                    Gb[2]=Gprimb[3];
                    Gb[3]=Gprimb[1];
                     dessusb[0]=Gb[0];
                    dessusb[2]=Gb[1];
                    Ab[0]=Gb[1];
                    Ab[2]=Gb[3];
                    dessousb[0]=Gb[2];
                    dessousb[2]=Gb[3];
                    dosb[0]=Gb[0];
                    dosb[2]=Gb[2];
                    printf("%c %c \n",Gb[0],Gb[1]);
                    printf("%c %c \n",Gb[2],Gb[3]);
                    }

                    if (face==4) // sens horaire face du dessus
                    {
                     printf("Appui de la fleche de droite\n");
                    dessusprimb[0]=dessusb[0];
                    dessusprimb[1]=dessusb[1];
                    dessusprimb[2]=dessusb[2];
                    dessusprimb[3]=dessusb[3];
                    dessusb[0]=dessusprimb[2];
                    dessusb[1]=dessusprimb[0];
                    dessusb[2]=dessusprimb[3];
                    dessusb[3]=dessusprimb[1];
                      Ab[0]=dessusb[2];
                    Ab[1]=dessusb[3];
                    dosb[0]=dessusb[0];
                    dosb[1]=dessusb[1];
                    Gb[0]=dessusb[0];
                    Gb[1]=dessusb[2];
                    Db[0]=dessusb[3];
                    Db[1]=dessusb[1];
                    printf("%c %c \n",dessusb[0],dessusb[1]);
                    printf("%c %c \n",dessusb[2],dessusb[3]);
                    }

                    if (face==5) // sens horaire face du dessus
                    {
                     printf("Appui de la fleche de droite\n");
                    dessousprimb[0]=dessousb[0];
                    dessousprimb[1]=dessousb[1];
                    dessousprimb[2]=dessousb[2];
                    dessousprimb[3]=dessousb[3];
                    dessousb[0]=dessousprimb[2];
                    dessousb[1]=dessousprimb[0];
                    dessousb[2]=dessousprimb[3];
                    dessousb[3]=dessousprimb[1];
                       Ab[2]=dessousb[0];
                    Ab[3]=dessousb[1];
                    dosb[2]=dessousb[2];
                    dosb[3]=dessousb[3];
                    Gb[3]=dessousb[0];
                    Gb[2]=dessousb[2];
                    Db[2]=dessousb[1];
                    Db[3]=dessousb[3];
                    printf("%c %c \n",dessousb[0],dessousb[1]);
                    printf("%c %c \n",dessousb[2],dessousb[3]);
                    }

                     if (face==6) // sens horaire face avant
                    {
                     printf("Appui de la fleche de droite\n");
                    dosprimb[0]=dosb[0];
                    dosprimb[1]=dosb[1];
                    dosprimb[2]=dosb[2];
                    dosprimb[3]=dosb[3];
                    dosb[0]=dosprimb[2];
                    dosb[1]=dosprimb[0];
                    dosb[2]=dosprimb[3];
                    dosb[3]=dosprimb[1];
                    dessusb[0]=dosb[0];
                    dessusb[1]=dosb[1];
                    Db[1]=dosb[1];
                    Db[3]=dosb[3];
                    Gb[0]=dosb[0];
                    Gb[2]=dosb[2];
                    dessousb[2]=dosb[2];
                    dessousb[3]=dosb[3];
                    printf("%c %c \n",dosb[0],dosb[1]);
                    printf("%c %c \n",dosb[2],dosb[3]);
                    }




                    break;
                case 'w':
                    printf("Tu as quitté la boucle \n");
                    end=1;
                    break;
            }


     }
    return end;
}
