#pragma once
#include "SFML/Graphics.hpp"
#include "../Automobil.hpp"
#include "../Spieler/Spieler.hpp"
#include "../../EingabeVerwaltung/EingabeVerwaltung.hpp"
class Spieler3 : public Spieler {
private:
	sf::RenderWindow* window;
	float geschwindigkeit;
	float rotation;
	float maxMinGeschwindigkeit = 5;
	float reibung = 0.01;
	float beschlaeunigung = 0.08;

	EingabeVerwaltung* eingabeverwaltung;
public:
	~Spieler3();
	Spieler3();
	Spieler3(sf::RenderWindow* window, EingabeVerwaltung* eingabeverwaltung);
	void aktualisieren();
};