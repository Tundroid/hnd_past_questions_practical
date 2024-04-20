#include <stdio.h>
#include <stdlib.h>

/**
 * struct - candidate
 * name: name of candidate
 * age: age of candidate
 * votes: count of candidate votes
*/
struct candidate {
    char name[17];
    int age;
    int votes;
};

/* FUNCTION DECLARATIONS */
void show_candidate_list(struct candidate list[]);
void show_result(struct candidate list[]);
int compare(const void *a, const void *b);

/**
 * main - Entry point of program
 * Return: always zero
*/
int main() {
    int voters, vote, count;

    struct candidate list[5];
    list[0] = (struct candidate){"Paul Biya", 82, 0};
    list[1] = (struct candidate){"Kamto", 65, 0};
    list[2] = (struct candidate){"Joeshua Osi", 40, 0};
    list[3] = (struct candidate){"Cabral Linii", 90, 0};
    list[4] = (struct candidate){"Adamou Dam Njoya", 60, 0};

    printf("Enter number of registered voters: ");
    scanf("%d", &voters);

    count = 0;
    do {
        show_candidate_list(list);
        printf("\nCast vote [voter %d]: ", ++count);
        scanf("%d", &vote);
        list[--vote].votes++;
        voters--;
    } while (voters > 0);

    show_result(list);
}

/* FUNCTION DEFINITIONS */

/**
 * show_candidate_list - List all candidates and corresponding IDs
 * @list: array of candidate structs
*/
void show_candidate_list(struct candidate list[]) {
    int i;

    printf("\nList of Candidates\n===================\n");
    for (i = 0; i < 5; i++)
        printf("%d. %s\n", i + 1, list[i].name);
}

/**
 * show_result - Prints results table with all candidate info in ascending order or votes
 * @list: array of candidate structs
*/
void show_result(struct candidate list[]) {
    int i;

    qsort(list, 5, sizeof(struct candidate), compare); // sorting list of candidates

    printf("\nPolling Results\n");
    printf("+======================================+\n");
    printf("|%3s. | %16s | %3s | %5s |\n", "SN", "Name", "Age", "Votes");
    printf("+-----+------------------+-----+-------+\n");
    for (i = 0; i < 5; i++)
        printf("|%3d. | %16s | %3d | %5d |\n", i + 1, list[i].name, list[i].age, list[i].votes);
    printf("*======================================*\n");
}

/**
 * compare - Comparison function for qsort
 * @a: array element to compare with @b
 * @b: array element campared with @a
 * Description: This function ensures sorting is done in ascending order.
 * Return: 0 is no swapping is necessary, otherwise a non-zero value.
*/
int compare(const void *a, const void *b) {
    return ((*(struct candidate*)a).votes < (*(struct candidate*)b).votes);
}