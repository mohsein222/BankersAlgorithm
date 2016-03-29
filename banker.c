/* Banker's Algorithm
 * Project 4
 * CSC 341: Operating Systems
 * Dr. Bin Tang
 *
 * Matt Levan
 * Brad Taniguchi
 *
 * A multi-threaded implementation of the banker's algorithm.
 * More info on page 345 of Operating Systems Concepts by Abraham Silberschatz.
 */

#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>
#include <sys/types.h>
#include <stdbool.h>

/* Global definitions. */
#define CUSTOMERS 5 // Referred to as 'n' in the book.
#define RESOURCES 3 // Referred to as 'm' in the book.
#define MAX_SLEEP 5

/* Global variables. */
/* Stores the number of available resources of each type. */
int available[RESOURCES];
/* Defines the max demand of each customer. */
int max[CUSTOMERS][RESOURCES];
/* Defines number of resources of each type allocated to each customer. */
int allocation[CUSTOMERS][RESOURCES];
/* Indicates the remaining resource need of each customer. */
int need[CUSTOMERS][RESOURCES];
/* Defines the program's runtime, in seconds. */
int runtime = 0;

/* Function declarations. */
bool is_safe();
void copy_array(int *src, int* dest);

/* Main function. */
int main(int argc, char *argv[]) {
    /* Check that enough args were submitted by the user. */
    if (argc < 4) {
        printf("\n");
        printf("Not enough arguments!");
        printf("\n");
        printf("Usage: ./banker.o <int num first resource> <int num second> \
                <int num third> <int runtime seconds>");
        printf("\n");
    }
    /* Else, process the arguments from the command line. */
    else {
        /* Initialize the available vector with args. */
        for (int i = 1; i <= 3; i++) {
            available[i-1] = atoi(argv[i]);
        }

        /* Get the runtime. */
        runtime = atoi(arv[4]);

        /* Print a status report. */
        printf("\nNUMBER OF RESOURCES\n");
        printf("FIRST: %d\n", available[0]);
        printf("SECOND: %d\n", available[1]);
        printf("THIRD: %d\n", available[2]);
        printf("\nRUNTIME: %d seconds\n", runtime);

        /* Get the max demand for each customer from max_demand.txt. */
        /* Code goes here. */   
    }

    return EXIT_SUCCESS;
}

/* is_safe, checks state safety. */
bool is_safe() {
    /* Work vector, length m. */
    int work[RESOURCES];
    /* Finish vector, length n. */
    bool finish[CUSTOMERS];

    /* Initialize work vector = available vector. */
    if (copy_array(available, work) == false) {
        printf("Array copy failed!");
        exit(1);
    }
}

/* copy_array, returns true if successful, else false. */
void copy_array(int* src, int* dest) {
    /* While the next int in the src array is not NULL... */
    while (*(src) != NULL) {
        /* Set the int at dest pointer to the int at src pointer. */
        *(dest++) = *(src++);
    }
}
