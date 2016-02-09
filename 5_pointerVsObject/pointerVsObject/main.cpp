#include <iostream>
#include "Melody.h"

using namespace std;

void changeMelody(Melody melody) {
  melody.setMelody("d d d d");
  melody.playMelody();
}

void changeMelody(Melody* melody) {
  melody->setMelody("d d d d");
  melody->playMelody();
}

int main(int argc,char** argv)
{
  //What is the difference between the functions above?
  //What is the consequence of this difference in usage?
  Melody myMelody("a c c a b c");
  myMelody.playMelody();
  changeMelody(myMelody);
  myMelody.playMelody();

  Melody* melody = new Melody("f f f f");
  melody->playMelody();
  changeMelody(melody);
  melody->playMelody();


}
