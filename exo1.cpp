#include<iostream>
int main(int argc, char **argv){

    int longueur (const char *chaine);
    int compare (const char *chaine1, const char *chaine2);
    char *chercher_char(const char *chaine, char caractere);
    char *chercher_mot(const char *phrase, const char *mot);
    void copie(char *dest, const char *source);
    void concatene(char *dest, const char *source);
    void inverse(char *chaine);
    void to_upper(char *chaine);
    void to_lower(char *chaine);
    

    char chaine[] = "Bonjour ooooh ";
    char b[] = "eissuer noisrevnI";
    const char source[] = "salut";
    char dest[50];
    const char a[] = "je m'appelle POUFA";
    const char chaine1[] = "papa";
    const char chaine2[] = "maman";
    char c[] = "MaJuScUlE_mInUsCuLe";
    const char mot[] = "UFA";


    
    std::cout <<"longueur de la variable chaine:"<< longueur(chaine)<<"\n";    
    std::cout <<"longueur de la variable source:"<< longueur(source)<<"\n";
    copie(dest, source);
    std::cout <<"source:"<<source <<std::endl;
    std::cout <<"destination:"<<dest <<std::endl;
    concatene(chaine, a);
    std::cout <<"concatenation de source et de a : "<<chaine <<std::endl;
    std::cout <<"chaine 1 et chaine2:"<< compare(chaine1,chaine2)<<"\n";
    chercher_char(chaine, 'o');
    inverse(b);
    to_upper(c);
    to_lower(c);
    chercher_mot(a, mot);
    
    

    return 0;

}

int longueur (const char *chaine){
    int taille = 0;
    for(taille = 0; chaine[taille] != '\0'; taille++);
    return taille;
}
int compare (const char *chaine1, const char *chaine2){
    int taille1 = 0;
    int taille2 = 0;
    for(taille1 = 0; chaine1[taille1] != '\0'; taille1++);
    for(taille2 = 0; chaine2[taille2] != '\0'; taille2++);
    if(taille2 > taille1){
        return taille1 - taille2;
    }
    if(taille1 > taille2){
        return taille1 -taille2;
    }
    if (taille1 = taille2){
        return 0;
    }   
}
char *chercher_char(const char *chaine, char caractere){
    int position = 0;
    while ( chaine[position ++] != '\0'){
        if (chaine[position] == caractere){
            std::cout <<"le caractere '" <<caractere<< "' a ete trouve en position: "<< position + 1 <<"\n";
        break;
        }
        else{
            return NULL;
        }
    }
}
char *chercher_mot(const char *phrase, const char *mot){
    int position= 0;
    int posit = 0;
    int position1 = 0;
    int position2 = 0;
    for(position1= 0; phrase[position1] != '\0'; position1++){
        while(mot[position2] != '\0'){
            for(posit = 0; mot[posit] != '\0'; posit++);
            if (phrase[position1] == mot[position2]){
            std::cout << mot[position2] ;
            position = position1 - posit + 1;
            position2 = position2 + 1;
            }
            else{
                position1 = position1 + 1;
            }
        }
        std::cout << " se trouve en position" <<position + 1 <<"\n"; 
    }
    return 0;
}



void copie(char *dest, const char *source){
    while((*dest++ = *source++) != '\0');
}
void concatene(char *dest, const char *source){
    char *ptr = dest;
    while(*ptr != '\0'){
        ptr++;
    }
    while (*source != '\0'){
        *ptr = *source;
        *ptr++;
        *source++;
        *ptr='\0';
    }
}
void inverse(char *chaine){
    std::cout <<"L'inversion de b donne : " ;
    char position   = 0;
    for (position = 0; chaine[position] != '\0'; position++);
    while(position>= 0){
        position--;
        std::cout  <<chaine[position];
    }
    std::cout <<"\n";
}
void to_upper(char *chaine){
    std::cout <<"En majuscule : ";
    char position   = 0;
    for (position = 0; chaine[position] != '\0'; position++){
        chaine[position] = toupper(chaine[position]);
        std::cout <<chaine[position];
    }
    std::cout <<"\n";
}
void to_lower(char *chaine){
    std::cout <<"En minuscule : ";
    char position   = 0;
    for (position = 0; chaine[position] != '\0'; position++){
        chaine[position] = tolower(chaine[position]);
        std::cout <<chaine[position];
    }
    std::cout <<"\n";
}

