// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1049

#include <stdio.h>
#include <string.h>

struct AnimalTree {
    char word1[20];
    char word2[20];
    char word3[20];
    char word4[20];
};


int main() {
    char word1[20];
    char word2[20];
    char word3[20];

    struct AnimalTree animal[] = {
        {"vertebrado", "ave", "carnivoro", "aguia"},
        {"vertebrado", "ave", "onivoro", "pomba"},
        {"vertebrado", "mamifero", "onivoro", "homem"},
        {"vertebrado", "mamifero", "herbivoro", "vaca"},

        {"invertebrado", "inseto", "hematofago", "pulga"},
        {"invertebrado", "inseto", "herbivoro", "lagarta"},
        {"invertebrado", "anelideo", "hematofago", "sanguessuga"},
        {"invertebrado", "anelideo", "onivoro", "minhoca"},
    };
    
    scanf("%s %s %s", &word1, &word2, &word3);

    for (int i = 0; i < sizeof(animal) / sizeof(animal[0]); i++) {
        if ((strcmp(animal[i].word1, word1) == 0) &&
            (strcmp(animal[i].word2, word2) == 0) &&
            (strcmp(animal[i].word3, word3) == 0)) {
                printf("%s\n", animal[i].word4);
        }
    }

    return 0;
}