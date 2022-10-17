/**
 * @file Individu.h
 * @author ETCHEPARE Cédric
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @details Representer une peronne
 *Lalalalala 
 *
 * La voiture associé a l'individu est représenté par un pointeur
 * @version 0.1
 * @date 2022-10-17
 * @warning Un Individu correspond au plus une Voiture
 * 
 * @copyright Copyright (c) 2022
 * 
 */



/*
  Spécifie une classe Individu en relation réciproque avec sa Voiture
  Auteur : Lopistéguy
  Version : 0.1
  Date : 12/08/2022
*/

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */


/**
 * @brief Represente un Individu
 * @deprecated description
 */
class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief Le nom de l'individu
   * 
   */
    string nom;         // Le nom de l'individu
  /**
   * @brief Le prénom de l'individu
   * 
   */
    string prenom;      // Le prénom de l'individu
  /**
   * @brief Lien avec la voiture de l'individu
   * 
   */
    Voiture *maVoiture; // Lien avec la voiture de l'individu

    // MÉTHODES
  public:
  /**
   * @brief Construit un nouvel objet Individu a partir de son nom et de son prénom
   * 
   */
    // Constructeur
    Individu(string = "", string = "");
    // destructeur
    /**
     * @brief Detruit l'objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString

    /**
     * @brief Retourne l'identité de l'individu
     * 
     * @return string l'identité sous la forme nom prénom
     * @bug Problème de formatage entre le nom et le prénom
     * @todo Ajouter un paramètre pour preciser si on veut un affichage du type Nom Prenom ou Prenom Nom
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Définit la voiture de l'individu
     * 
     * @param voiture pointeur vers l'objet Voiture piloté par un Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H