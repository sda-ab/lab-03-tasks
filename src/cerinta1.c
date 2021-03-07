#include "list.h"
#include "utils.h"

/**
 * @brief Functie ce creaza un nod prin alocare dinamica 
 * si returneaza pointerul nodului creat. 
 * 
 * @param data - informatia nodului respectiv
 * @param next - adresa urmatorului nod
 * @return node* nou nod creat
 */
node *makeNode(int data, node *next)
{
    //TODO1.1: primul pas in implementarea cerintei 1
}



/**
 * @brief Functie ce returneaza o lista nou creata cu ajutorul
 * datelor citite din fisier-ul file primit ca parametru
 * 
 * Hint:
 *      * folositi-va de metoda makeNode pentru a crea lista
 *      * fscanf returneaza EOF in cazul in care se ajunge la
 *        sfarsitul fisierului => while(fscanf(...)!=EOF) va va 
 *        ajuta sa parcurgeti fisierul
 * 
 * @param file - fisierul ce trebuie citit
 * @return node* 
 */
node *makeList(FILE *file)
{
    //TODO1.2: al doilea pas in implementarea cerintei 1

}


/**
 * @brief Functie ce afiseaza toate elementele unei liste
 *  
 * @param head - capul listei de afisat
 */
void print(node *head)
{
    // Nice to have - pentru testare locala in main
}