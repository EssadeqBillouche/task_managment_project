#include"header.h"

void diplay_fun(int *p)
{ 
    int  track_task_count_1 = *p;
    for (int i = 0; i <= track_task_count_1; i++)
                {
                        printf("\n -----------------------------------------------\n"
                                "\n---------------- task ID %d ---------------\n", array_task[i].task_id);
                        printf(" \n Task title :  %s ", array_task[i].task_title);
                        printf(" \n Task description : %s ", array_task[i].task_description);
                        printf(" \n Task statut :  %s ", array_task[i].task_statut);

                }
                printf("\n -----------------------------------------------\n");
}
