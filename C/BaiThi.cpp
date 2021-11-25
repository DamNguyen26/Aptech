#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <time.h>

typedef struct Movie {
    char title[30];
    char genre[25];
    int release_year;
    float box_office;
}
MV;

MV Input() {
    MV Movie;
    printf("Title: ");
    scanf("%s", & Movie.title);

    printf("Genre: ");
    scanf("%s", & Movie.genre);

    printf("Release Year: ");
    scanf("%d", & Movie.release_year);
    //    time_t now;
    //    time(&now);
    if (Movie.release_year <= 1926 || Movie.release_year >= 2021) {
        printf("Movie's 's release year must be after 1926 and before the current year.\n");
        Input();
    }

    printf("Box Office: ");
    scanf("%f", & Movie.box_office);
    if (Movie.box_office < 0.1 || Movie.box_office > 3) {
        printf("Movie's box office must be between 0.1(billion $) and 3(billion $).\n");
        Input();
    }
    return Movie;
}

void Sort(MV list[], int n) {
    int i, j;
    MV tmp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (list[i].box_office < list[j].box_office) {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }
    int a;
    printf("Sort movies by title in ascending order (from A-Z): \n");
    printf("+-------------------------------------------------------------------------------------------------+\n");
    printf("|%20s |%20s |%20s |%30s |\n", "Movie Title", "Genre", "Release Year", "Box Office(billion $)");
    printf("+-------------------------------------------------------------------------------------------------+\n");
    for (a = 0; a < n; a++) {
        printf("|%20s |%20s |%20d |%30f |\n", list[a].title, list[a].genre, list[a].release_year, list[a].box_office);
        printf("+---------------------------------------------------------------------------------------------+\n");
    }
}

int main() {
    int n = 0;
    MV list[100];
    printf("+------------------------------------------------------------------+\n");
    printf("|              MOVIE STORE MANAGEMENT PROGRAM                      |\n");
    printf("+------------------------------------------------------------------+\n");
    printf("|1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |\n");
    printf("+------------------------------------------------------------------+\n");

    int chon;
    printf("Select: ");
    scanf("%d", & chon);
    printf("Do you want to continue ?\n");
    printf("Yes , I do. (press 'y', 'Y')\n");
    printf("No , I don't'. (press 'n', 'N')\n");
    printf("Press clear the screen ! (press 'c', 'C')\n");
    char choice;
    printf("Your choice: ");
    scanf("%s", & choice);
    if (choice == 'y' || choice == 'Y') {
        printf("+------------------------------------------------------------------+\n");
        printf("|                  MOVIE STORE MANAGEMENT PROGRAM                  |\n");
        printf("+------------------------------------------------------------------+\n");
        printf("|1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |\n");
        printf("+------------------------------------------------------------------+\n");
        int c;
        //		do
        //		{
        printf("Select again: ");
        scanf("%d", & c);
        //        if (c == chon) {
        switch (c) {
        case 1:
            list[n] = Input();
            n++;
            break;
        case 2:
            Sort(list, n);
            break;
        case 3:
            printf("Analyze\n");
            break;
        case 4:
            printf("Find\n");
            break;
        case 5:
            FILE * fp;
            fp = fopen("Movie.txt", "w");

            fprintf(fp, "+-------------------------------------------------------------------------------------------------+\n");
            fprintf(fp, "|%20s |%20s |%20s |%30s |\n", "Movie Title", "Genre", "Release Year", "Box Office(billion $)");
            fprintf(fp, "+-------------------------------------------------------------------------------------------------+\n");
            fprintf(fp, "+-------------------------------------------------------------------------------------------------+\n");
            //                gets(list);

            fclose(fp);

            break;

        case 6:
            FILE * fileName;
            char ch[1000];
            fileName = fopen("Movie.txt", "r");

            fscanf(fileName, "%[^\n]", ch);
            printf("Data from the file:\n%s", ch);

            fclose(fileName);
            break;
        case 7:
            return 1;
        default:
            printf("Select again!");
            break;
        }
        //			}while(c != chon);
        //        } else {
        //			printf("Select wrong input! ");
        main();
        //        }
    } else if (choice == 'n' || choice == 'N' || choice == 7) {
        return 1;
    } else if (choice == 'c' || choice == 'C') {
        system("cls");
        main();
    }
    return 0;
}
