#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(int argc, char** argv) {




        int day, month, year;
        char date[] = {};

        printf("\nWhat date is today?");
        printf("\nDay (DD):  \n");
        scanf("%i",&day);

        printf("\nMonth (MM):  \n");
        scanf("%i",&month);

        printf("\nYear (YYYY):  \n");
        scanf("%i",&year);



        //Schritteinträger 

        int schrittspeicher;

        printf("\nTrage deine Schritte ein\n");
        scanf("%i",&schrittspeicher);



        //Gewichteinträger

        float gewichtspeicher;

        printf("\nTrage deine aktuelle Gewicht ein\n");
        scanf("%f",&gewichtspeicher);

    float vk; // vk = verbrannte Kalorien

    vk = schrittspeicher *0,05; // Die Formel kommt von der Seite https://rechneronline.de/laufzeiten/kalorien-schritt.php, ist aber ein Richtwert




        printf("\nToday is the: %i.%i.%i}\n",day,month,year);
        gets(date);
        printf("Heute hast du %i Schritte gemacht\n",schrittspeicher);
        printf("Dein Gewicht ist %.2fkg\n",gewichtspeicher);
        printf("Du hast mit deinen Schritten %.2f Kalorien verbrannt\n", vk);

    return (EXIT_SUCCESS);
}
