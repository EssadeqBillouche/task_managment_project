#include "header.h"
#include <stdio.h>

int main()
{
    int track_task_count = -1; // init for no task
    int Unique_taskId = 99; // number to start truck id from 
    int howManyTask; // for the mqny tqsk
    int user_needs; // for the switch options

    do
    {
     printf("\n 1 - Add new task : "
            "\n 2 - many new task : "
            "\n 3 - Show all tasks :");
     scanf("%d", &user_needs);
     getchar();
     switch (user_needs)
     {
     case 1: // add new task
        Add_task_fun(&track_task_count, &Unique_taskId);
        break;

     case 2:
        printf("how many new task u would to add ?");
        scanf("%d", &howManyTask);
        getchar();
        for (int i = 0; i < howManyTask; i++) // loop for many ids
        {
                Add_task_fun(&track_task_count, &Unique_taskId);     
        }
        break;
        case 3:
                for (int i = 0; i <= track_task_count; i++)
                {
                        printf("\n -----------------------------------------------\n"
                                "\n---------------- task ID %d ---------------\n", array_task[i].task_id);
                        printf(" \n Task title : %s ", array_task[i].task_title);
                        printf(" \n Task description : %s ", array_task[i].task_description);
                        printf(" \n Task statut : %s ", array_task[i].task_statut);

                }
                printf("\n -----------------------------------------------\n");
                break;
        default:
        printf("\n please read the menu and try again \n");
        break;
     }

    }while (user_needs != 0);
    
}
