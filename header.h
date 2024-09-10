#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

struct task                        // struct has all task info 
{
    int task_id; 
    char task_title[50]; 
    char task_description[500];
    char task_statut[24];
    // time_t task_deadline;
};

struct user // struct has al the user info 
{
    int user_id;
    char user_name[30];
};

struct management_user_task // struct for manage ment the ralation betweent user id and tasks id
{
    int Mang_user_id;
    int mang_task_id;
};
struct management_user_task mang_array[10];
struct user array_user[10]; // array of above struct 
struct task array_task[10]; /// array of the baove struct

void Add_task_fun(int *task_counter,int *Id_track );

#endif
