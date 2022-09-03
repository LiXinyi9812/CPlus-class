#include <iostream>
using namespace std;

void affiche_grille(int grille[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << grille[i][j];
        }
        cout << endl;
    }
}

bool grille_finie(int grille[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grille[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}

bool case_possible(int grille[9][9], int x, int l, int c){
    for (int i = 0; i < 9; i++) {
        if (grille[i][c] == x) {
            return false;
        }
    }
    for (int j = 0; j < 9; j++) {
        if (grille[l][j] == x) {
            return false;
        }
    }
    return true;
}


int main()
{
    int grille[9][9] = { {1,0,0,0,0,0,0,9,5},{3,0,0,4,0,0,1,0,0},{0,6,0,0,2,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},{0,0,1,0,0,0,7,6,0},{7,3,2,5,0,9,0,0,0},
        {4,0,0,3,1,0,0,7,0},{0,0,0,0,0,0,9,5,0},{5,0,0,2,0,7,3,0,0} };
    affiche_grille(grille);
    cout<<grille_finie(grille)<<endl;
    cout<<case_possible(grille, 2, 0, 2)<<endl;
}

