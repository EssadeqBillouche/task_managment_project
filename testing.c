#include"stdio.h"
#include"time.h"
#include"string.h"

 struct task                        // struct has all task info 
{
    int task_id; 
    char task_title[50]; 
    char task_description[500];
    char task_statut[24];
    time_t task_deadline;
};
 struct task array_task[100]; /// array of the baove struct

 struct user // struct has al the user info 
{
    int user_id;
    char user_name[30];
};
struct user array_user[10]; // array of above struct 

struct management_user_task // struct for manage ment the ralation betweent user id and tasks id
{
    int Mang_user_id;
    int mang_task_id;
};
struct management_user_task mang_array[1000];

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

int main()
{
    int track_task_count = -1; // init for no task
    int Unique_taskId = 99; // number to start truck id from 
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

    } while (user_needs != 0);
    
}
