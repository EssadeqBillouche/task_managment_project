#include"header.h"
#include<stdio.h>
 struct management_user_task mang_array[10];
 struct user array_user[10]; // array of above struct 
struct task array_task[10]; /// array of the baove struct

int main(){
    int track_task_count = -1; // init for no task
    int Unique_taskId = 99; // number to start truck id from as IDs
    int user_track_id = 0; 
    int howManyTask; // for the mqny tqsk
    int user_needs; // for the switch options
    int task_statut_choose;
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

    } while (user_needs != 0);
    return 0;
}

