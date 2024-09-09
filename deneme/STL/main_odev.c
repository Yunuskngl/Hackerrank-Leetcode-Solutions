#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DOSYA_BOYUTU 3451
#define UZUNLUK 1000

struct Budget {
    int budget; //bütçe
    int year;
    char *title;
    char *titletype;
    char *top250;
};

struct Name {
    int runtime;
    int votes; //oylar
    double rating;
    char *genre; // Changed to single pointer
    char *title;
    char *directors; // Changed to single pointer
    char *mustsee;
    char *url;
};

struct Budget budgetArray[DOSYA_BOYUTU];
struct Name nameArray[DOSYA_BOYUTU];

void verileri_al(const char *filename);
void yila_gore_siralama(struct Budget *budget, struct Name *name);
void oylara_gore_siralama(struct Budget *budget, struct Name *name);
void genres_yazdir(struct Name *name);
void budgetleri_goster(struct Budget *budget);
void film_bilgileri_detay(struct Budget *budget, struct Name *name, int index);

void verileri_al(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Dosya bulunamadi!\nCikiliyor..\n");
        exit(1);
    }

    int movieIndex = 0;
    char *ayirma_islemi = (char *)malloc(sizeof(char) * UZUNLUK);

    while (fgets(ayirma_islemi, UZUNLUK, file) != NULL) {
        budgetArray[movieIndex].budget = atoi(strtok(ayirma_islemi, ";"));

        budgetArray[movieIndex].title = (char *)malloc(sizeof(char) * UZUNLUK);
        strcpy(budgetArray[movieIndex].title, strtok(NULL, ";"));

        nameArray[movieIndex].title = (char *)malloc(sizeof(char) * UZUNLUK);
        strcpy(nameArray[movieIndex].title, budgetArray[movieIndex].title);

        budgetArray[movieIndex].titletype = (char *)malloc(sizeof(char) * UZUNLUK);
        strcpy(budgetArray[movieIndex].titletype, strtok(NULL, ";"));

        nameArray[movieIndex].rating = atof(strtok(NULL, ";"));

        nameArray[movieIndex].runtime = atoi(strtok(NULL, ";"));

        budgetArray[movieIndex].year = atoi(strtok(NULL, ";"));

        nameArray[movieIndex].votes = atoi(strtok(NULL, ";"));

        budgetArray[movieIndex].top250 = (char *)malloc(sizeof(char) * UZUNLUK);
        strcpy(budgetArray[movieIndex].top250, strtok(NULL, ";"));

        nameArray[movieIndex].mustsee = (char *)malloc(sizeof(char) * UZUNLUK);
        strcpy(nameArray[movieIndex].mustsee, strtok(NULL, ";"));

        nameArray[movieIndex].url = (char *)malloc(sizeof(char) * UZUNLUK);
        strcpy(nameArray[movieIndex].url, strtok(NULL, ";"));

        // Now using single pointer for genre and directors
        nameArray[movieIndex].genre = (char *)malloc(sizeof(char) * UZUNLUK);
        strcpy(nameArray[movieIndex].genre, strtok(NULL, ","));

        nameArray[movieIndex].directors = (char *)malloc(sizeof(char) * UZUNLUK);
        strcpy(nameArray[movieIndex].directors, strtok(NULL, ","));

        movieIndex++;
    }

    fclose(file);
    free(ayirma_islemi);
    yila_gore_siralama(budgetArray, nameArray);
}

void yila_gore_siralama(struct Budget *budget, struct Name *name) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        int max_year = budget[i].year;
        int max_index = i;

        for (int j = i + 1; j < DOSYA_BOYUTU; j++) {
            if (budget[j].year > max_year) {
                max_year = budget[j].year;
                max_index = j;
            }
        }

        struct Budget tokenBudget = budget[i];
        struct Name tokenName = name[i];

        budget[i] = budget[max_index];
        name[i] = name[max_index];

        budget[max_index] = tokenBudget;
        name[max_index] = tokenName;
    }
}

void oylara_gore_siralama(struct Budget *budget, struct Name *name) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        int max_votes = name[i].votes;
        int max_index = i;

        for (int j = i + 1; j < DOSYA_BOYUTU; j++) {
            if (name[j].votes > max_votes) {
                max_votes = name[j].votes;
                max_index = j;
            }
        }

        struct Budget tempBudget = budget[i];
        struct Name tempName = name[i];

        budget[i] = budget[max_index];
        name[i] = name[max_index];

        budget[max_index] = tempBudget;
        name[max_index] = tempName;
    }

    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        if (name[i].votes == 0) continue;
        printf("%d (votes): %s\n", name[i].votes, name[i].title);
    }
}

void genres_yazdir(struct Name *name) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        printf("Genre: %s\n", name[i].genre);
    }
}

void budgetleri_goster(struct Budget *budget) {
    for (int i = 0; i < DOSYA_BOYUTU; i++) {
        printf("%d: %s\n", budget[i].budget, budget[i].title);
    }
}

void film_bilgileri_detay(struct Budget *budget, struct Name *name, int index) {
    printf("\nTitle: %s\n", name[index].title);
    printf("Type: %s\n", budget[index].titletype);
    printf("Genres: %s\n", name[index].genre);
    printf("Directors: %s\n", name[index].directors);
    printf("IMDB Rating: %.1lf\n", name[index].rating);
    printf("(%d Votes)\n", name[index].votes);
    printf("Top 250: %s\n", budget[index].top250);
    printf("Year: %d\n", budget[index].year);
    printf("Budget: %d\n", budget[index].budget);
    printf("Runtime: %d\n", name[index].runtime);
    printf("1001 Must See: %s\n", name[index].mustsee);
    printf("URL: %s\n", name[index].url);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    verileri_al(argv[1]);
    int islem;

    while (1) {
        printf("\n1-Budget dizisinin listesi\n2-Name dizisinin listesi\n3-Genre (turlerin) listesi\n4-Yillara gore Movie (Filmlerin) Listesi\n5-Skorlara (score) gore Filmlerin Listesi\n6-Tek Bir Filmin Tum Bilgileri\n7-Cikis.\n");
        printf("Isleminizi seciniz: ");
        scanf("%d", &islem);

        switch (islem) {
            case 1:
                budgetleri_goster(budgetArray);
                break;
            case 2:
                genres_yazdir(nameArray);
                break;
            case 6:
                film_bilgileri_detay(budgetArray, nameArray, 0);  // Adjust according to user input
                break;
            case 7:
                printf("Cikiliyor...\n");
                return 0;
            default:
                printf("Hatali Islem!\n");
                break;
        }
    }

    return 0;
}
