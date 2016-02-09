#include <iostream>
#include "Melody.h"

Melody::Melody(std::string theMelody) {
  melody = theMelody;
}

void Melody::playMelody() {
  std::cout << melody << std::endl;
}

void Melody::setMelody(std::string theMelody) {
  melody = theMelody;
}
