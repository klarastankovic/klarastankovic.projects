// ovdje pišete implementaciju svih funkcija deklariranih u headeru
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	char *ime;
	char *prezime;
	int id;
	float prosjek;
	struct student* nextNode;
}STUDENT;

void inputNodeData(STUDENT* student) {
    scanf("%d", &student->id);
    
    char temp[100];
    scanf("%s", temp);
    student->ime = (char*) calloc(strlen(temp) + 1, sizeof(char));
    if(student->ime == NULL)    exit(EXIT_FAILURE);
    strcpy(student->ime, temp);
    
    scanf("%s", temp);
    student->prezime = (char*) calloc(strlen(temp) + 1, sizeof(char));
    if(student->prezime == NULL)    exit(EXIT_FAILURE);
    strcpy(student->prezime, temp);
    
    scanf("%f", &student->prosjek);
    
    student->nextNode = NULL;
}

float prosjekSvih(STUDENT* headNode) {
    if(headNode == NULL)    return 0.0;
    
    int brojac = 0;
    float ukupno = 0.0;
    STUDENT* current = headNode;
    
    while(current != NULL) {
        ukupno += current->prosjek;
        brojac++;
        current = current->nextNode;
    }
    
    return (brojac > 0) ? (ukupno / brojac) : 0.0;
}

STUDENT* createSLList(void) {
    STUDENT *headNode = (STUDENT*) calloc(1, sizeof(STUDENT));
    
    if(headNode == NULL)    exit(EXIT_FAILURE);
    else {
        inputNodeData(headNode);
        headNode->nextNode = NULL;
    }
    
    return headNode;
}

void traverseSLList(STUDENT* headNode) {
    STUDENT* current = headNode;
    
    while(current != NULL) {
        printf("ID: %d - %s %s, prosjek: %.2f\n", current->id, current->ime, current->prezime, current->prosjek);
        current = current->nextNode;
    }
}

STUDENT* insertNewNodeSLList(STUDENT* headNode) {
    STUDENT *newHeadNode = (STUDENT*) calloc(1, sizeof(STUDENT));
    
    if(newHeadNode == NULL) return headNode;
    else {
        inputNodeData(newHeadNode);
        newHeadNode->nextNode = headNode;
    }
    
    return newHeadNode;
}

STUDENT* searchSLList(STUDENT* traverseNode, int criteria) {
    while(traverseNode) {
        if(traverseNode->id == criteria)
            return traverseNode;
        
        traverseNode = traverseNode->nextNode;
    }
    
    return NULL;
}

void deleteNodeSLList(STUDENT** headNode, STUDENT* targetNode) {
    if(targetNode == NULL) {
        printf("Cvor ne postoji!");
        return;
    }
    
    if(*headNode == targetNode) {
        *headNode = (*headNode)->nextNode;
        free(targetNode->ime);
        free(targetNode->prezime);
        free(targetNode);
    }
    else {
        STUDENT* traverseNode = *headNode;
        
        while(traverseNode->nextNode) {
            if(traverseNode->nextNode == targetNode) {
                traverseNode->nextNode = targetNode->nextNode;
                free(targetNode->ime);
                free(targetNode->prezime);
                free(targetNode);
                break;
            }
            
            traverseNode = traverseNode->nextNode;
        }
    }
}

STUDENT* deleteWholeSLList(STUDENT* traverseNode) {
    STUDENT* deleteNode = NULL;
    
    while(traverseNode) {
        deleteNode = traverseNode;
        traverseNode = traverseNode->nextNode;
        free(deleteNode->ime);
        free(deleteNode->prezime);
        free(deleteNode);
    }
    
    return NULL;
}
