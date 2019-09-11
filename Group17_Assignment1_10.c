
#include<stdio.h>
#include<conio.h>

int main()
{
    double cur_pos=0;
    unsigned int sec=0, day=0, year=0, ropelength=10, ant_speed;

    printf("Enter Initial Length of Rope(in cms) : ");
    scanf("%d", &ropelength);                                      // TAKES INPUT FOR INITIAL ROPELENGTH
    printf("Enter Speed of Ant (in cms/sec) : ");
    scanf("%d", &ant_speed);                                       // TAKES INPUT FOR SPEED OF ANT

    while( cur_pos < ropelength )                                  // LOOP IS EXECUTED TILL Cur_pos OF ANT IS LESS THAN ROPELENGTH
    {
            cur_pos = cur_pos + ant_speed;                         // POSITION OF ANT BEORE THE ROPE STRECHES
            cur_pos = (cur_pos / ropelength) * (ropelength+10);    // NEW POSITION OF ANT DUE TO STRECHING OF ROPE
            ropelength = ropelength + 10;                          // UPDATED LENGTH OF ROPE AFTER COMPLETION OF A SEC
            sec = sec + 1;                                         // UPDATED TOTAL TIME
            printf ( "After %d sec: Cur_Pos = %lf, RopeLength = %d \n", sec, cur_pos, ropelength);

            if (sec == 86400)
            {
                system("cls");
                day=day+1;                                         // ON COMPLETION OF 86400 SEC VALUE OF DAY IS INCREASED BY ONE
                sec=0;                                             // THEN SECOND IS INITIALIZED TO 0
                printf("\n+++++++ DAY - %d +++++++ \n", day);
            }

            if (day == 365)
            {
                system("cls");
                day=0;                                             // ON COMPLETION OF 365 DAY VALUE OF DAY IS INITTIALIZED TO 0
                year = year+1;                                     // THEN VALUE OF YEAR IS INCREASED BY 1
                printf("\n+++++++ YEAR - %d +++++++ \n", year);
            }

    }

    printf("\nCongrats!!  Ant was able to reach the End.");           // THIS LINE IS EXECUTED WHEN WHILE LOOP IS OVER
    printf("\nTime taken is :\n\t\t%d year \n\t\t%d days and \n\t\t%d seconds", year, day, sec);         // PRINTS THE TOTAL TIME TAKEN BY THE ANT
}
