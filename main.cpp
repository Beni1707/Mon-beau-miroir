#include <iostream>
#include <string> 
using namespace std; 

// Fonction qui va effectuer l'echange 
//La fonction devra recevoir un entier et renvoyer l'inverse de cet entier en chaine de caractere
string echangerChiffre (int x)
{
    //transformer l'entier en chaine de caractere 
    string chaine= to_string (x);
    int j =chaine.size(); 
     int temoin; // variable qui va stocker temporairement un caractere de la chaine 
    
    for (int i=0 ; i< j; i++)
    {
        temoin=chaine[i]; // on stocke temporairement le caractere 
       chaine[i]=chaine[j-1]; // on remplace 
       chaine[j-1]=temoin; // on recupere le caractere stocke dans la case a remplacer 
       j--;
        
    }
    
    return chaine;
}

//Fonction qui verfie si le nombre est palindrome 
// La fonction devra recevoir un entier est renvoyer un booleen en faisant la verification si le nombre est palindrome ou pas 

bool estPalindrome(int nombre)
{
    string chaine= to_string(nombre);
    if (chaine == echangerChiffre(nombre))
    {
        return true; // retourne vrai si le nombre est un palindrome et faux dans le cas contraire
    }
    else
        return false;// sinon, la fonction retourne quand meme faux 


}

// Fonction qui va faire l'addition jusqu'au palindrome 
//La fonction devra recevoir un entier et faire l'addition jusqu'a trouber le pelindrome et combien d'operation necessaire avant 
// de l'avoir 

int palindrome(int y)
{
    int compteur=0 ;
    int miroir= stoi (echangerChiffre(y));// on recoit le nombre miroir du nombre 
    int somme=y;// la somme vaut l'entier entree 
    bool verifier;
    do {
        somme= somme+miroir;// on fait la somme 
        verifier= estPalindrome(somme); // on verifie si la somme est un pelindrome 
        miroir=stoi (echangerChiffre(somme)); // on trouve le miroir de la nouvelle somme 
        compteur++;// on compte 
    }while (verifier != true);
    
    cout<<"[(" <<somme<<"," <<compteur<<")]"<<endl;

    return somme;

}

//Entree dans la fonction main 
int main ()
{   
    int nombre;
   for (int i=0; i<10;i++)
   {
    cin>>nombre; // lecture du clavier directement a parir du fichier data.txt
    cout<<"Le nombre miroir est : "<<echangerChiffre(nombre)<<endl;  // on affiche le nombre miroir 
    palindrome(nombre);
    
   }
    
}