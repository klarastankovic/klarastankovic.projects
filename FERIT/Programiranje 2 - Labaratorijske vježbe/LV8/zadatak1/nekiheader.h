#ifndef HEADER_H
#define HEADER_H

FILE* dat;

struct podaci
{		
	char prezime[20];
	char ime[20];
	int sifra;
	char adresa[100];
	int br_tel;
};

void kreirajDatoteku() {
    dat = fopen("clanovi.txt", "ab+");
    if(dat == NULL)
        exit(EXIT_FAILURE);
}

void citajDatoteku() {
    struct podaci clan[100];
    fseek(dat, 0, SEEK_END);
    int c = ftell(dat) / sizeof(struct podaci);
    rewind(dat);
    fread(clan, sizeof(struct podaci), c, dat);
    
    int i;
    for(i = 0; i < c; i++) {
        printf("%s", clan[i].prezime);
        printf("%s", clan[i].ime);
        printf("%d", clan[i].sifra);
        printf("%s", clan[i].adresa);
        printf("%d", clan[i].br_tel);
        printf("\n");
    }
}

void dodajClana() {
    struct podaci clan = {};
    
    scanf("%s", clan.prezime);
    scanf("%s", clan.ime);
    scanf("%d", &clan.sifra);
    scanf("%s", clan.adresa);
    scanf("%d", &clan.br_tel);
    
    fwrite(&clan, sizeof(struct podaci), 1, dat);
}

void zavrsetak() {
    fclose(dat);
    exit(EXIT_SUCCESS);
}

#endif //HEADER_H