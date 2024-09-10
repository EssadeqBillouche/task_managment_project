#include"header.h"

void Add_task_fun(int *task_counter,int *Id_track )
{
        int track_task_count = *task_counter;
        int Unique_taskId = *Id_track;
        int task_statut_choose;
        track_task_count++; // incremote the variable to define that there is a new 
        Unique_taskId++;
        array_task[track_task_count].task_id = Unique_taskId;
        printf("\n donner le name du task");
        fgets(array_task[track_task_count].task_title, sizeof(array_task[track_task_count].task_title), stdin);
        getchar();
        printf("\n donner la description du task : "); // description 
        fgets(array_task[track_task_count].task_description, sizeof(array_task[track_task_count].task_description), stdin);
        getchar();
        
        printf("\n donner le statut du task : "
                "\n 1 - à réaliser "
                "\n 2- en cours de réalisation"
                "\n 3 - finalisée "
                );
        scanf("%d", &task_statut_choose);
        getchar();
        if (task_statut_choose == 1)
        {
                strcpy(array_task[track_task_count].task_statut,"à réaliser");
        }
        else if (task_statut_choose == 2)
        {
                strcpy(array_task[track_task_count].task_statut, "en cours de réalisation");
        }else 
        {
                strcpy(array_task[track_task_count].task_statut, "finalisée");
        }
        printf("\nTask added\n");
        *task_counter = track_task_count;
        *Id_track = Unique_taskId;
}





