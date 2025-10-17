## Mon Beau Miroir
# Description

Ce projet en C++ résout un problème de génération de palindromes à partir d’un nombre donné.
L’image miroir d’un nombre est le nombre lu à l’envers (ex. 324 → 423).
Un nombre est un palindrome s’il est égal à son image miroir (ex. 52325, 6446).

Le programme prend un nombre de départ, additionne ce nombre à son image miroir, puis répète cette opération jusqu’à obtenir un palindrome.
Il affiche ensuite le palindrome obtenu ainsi que le nombre d’additions nécessaires.

L’entrée est une séquence de nombres, et la sortie est une séquence de couples [palindrome, nombre_d’étapes].
La complexité du programme est O(n).

# Contenu du dépôt
-main.cpp : fichier principal contenant le code source.

-probleme.txt : énoncé complet du problème.

-data.txt : données d’entrée utilisées par le programme (pas besoin de saisie manuelle).

# Installation 

```
bash
git clone https://github.com/Beni1707/Mon-beau-miroir.git
cd Mon-beau-miroir
g++ main.cpp -o main
```

# Execution 

Sous linux 
```
./main < data.txt
```

Sous PowrShell 
```
Get-Content data.txt | ./main
```
# Exemple

Entrée :
```
844 970 395 287
```

Sortie :
```
[[7337, 3], [15851, 3], [881188, 7], [233332, 7]]

```
