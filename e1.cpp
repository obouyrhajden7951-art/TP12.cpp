/*
 * e1.cpp
 *
 *  Created on: 8 nov. 2026
 *      Author: hP
 */
#include <iostream>
#include <string>
using namespace std;

class Produit {
private:
    string nom;
    double prix;
    int quantite;
public:
    Produit(const string& nom, double prix, int quantite)
        : nom(nom), prix(prix), quantite(quantite) {}

    friend ostream& operator<<(ostream& os, const Produit& p);
};

ostream& operator<<(ostream& os, const Produit& p) {
    os << "Produit : " << p.nom
       << " | Prix : " << p.prix << " DH"
       << " | Quantite : " << p.quantite;
    return os;
}

int main() {
    Produit p1("Clavier", 199.99, 10);
    Produit p2("Souris", 89.5, 25);

    cout << p1 << endl;
    cout << p2 << endl;

    return 0;
}
