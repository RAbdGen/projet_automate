# Projet Automates

Ce projet est une implémentation en C permettant la manipulation et la simulation d'automates finis (DFA/NFA).

## 📁 Structure du projet

- `src/` : Contient les fichiers sources (.c).
- `include/` : Contient les fichiers d'en-tête (.h).
- `data/` : (Optionnel) Contient des exemples de fichiers de définition d'automates.

## 🛠️ Prérequis

- Un compilateur C (GCC recommandé).
- Un environnement Linux, macOS ou Windows (avec MinGW/WSL).

## 🚀 Compilation

Pour compiler le projet, ouvrez un terminal à la racine du dossier et lancez la commande suivante :

### Option 1 : Si tous vos fichiers sont à la racine

```bash
gcc *.c -o automate -Wall -Wextra
```

### Option 2 : Si vous utilisez des dossiers (src/include)

```bash
gcc -I include src/*.c -o automate -Wall -Wextra
```

- `-o automate` : Définit le nom de l'exécutable final.
- `-Wall -Wextra` : Active les avertissements (warnings) pour détecter les erreurs potentielles.
- `-I include` : Indique à gcc où chercher les fichiers `.h`.

## 💻 Utilisation

Une fois la compilation terminée, vous pouvez lancer le programme :

**Sur Linux / macOS :**

```bash
./automate
```

**Sur Windows :**

```cmd
automate.exe
```

## 🧹 Nettoyage

Pour supprimer l'exécutable généré :

**Linux / macOS :**

```bash
rm automate
```

**Windows :**

```cmd
del automate.exe
```

## 👤 Auteur

- **Ton Nom** - _Initial work_

```

***

### Pourquoi j'ai inclus ces options :

1.  **Les Flags (`-Wall -Wextra`) :** C'est crucial pour le C. Même pour un projet "simple", cela t'aidera à voir si tu oublies d'initialiser une variable ou si tes types ne correspondent pas.
2.  **La distinction Dossiers vs Racine :** Souvent, les projets d'automates grandissent vite (un fichier pour la lecture, un pour la structure, un pour le main). J'ai mis la commande pour les deux cas de figure.

### Une prochaine étape utile ?

Si tu commences à avoir plusieurs fichiers, taper la commande `gcc` à chaque fois devient fastidieux.

**Veux-tu que je te génère un `Makefile` très simple pour automatiser la compilation ?**
```
