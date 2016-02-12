/**
 * CSE Assignment 1 -- C version
 */

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

//for 'status' variable:
#define INELIGIBLE 0
#define READY 1
#define RUNNING 2
#define FINSHED 3

#define MAXLENGTH 1
#define MAX_LENGTH 1
#define MAX_CHILDREN 1
#define SIZE 100

int array[SIZE] = {};

typedef struct node{
	int id; //corresponds to line number in graph text file
	char prog[MAXLENGTH]; //prog + arguments
	char input[MAXLENGTH]; //filename
	char output[MAX_LENGTH]; //filename
	int children[MAX_CHILDREN]; //children IDs
	int num_children; // how many children this node has
	int status; // ineligible/ready/running/finshed
	pid_t pid;// Process id when it's running
} node_t


int main () 
{

    FILE *infile;
    infile = fopen("./testproc.txt", "r");

    while(!feof(infile))
    {
	fscanf(infile,"%d",&array[i]);
	i++;
    }

    fclose(infile);
}
	
   
