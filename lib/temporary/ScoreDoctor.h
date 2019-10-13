#ifndef SINSY_SCORE_DOCTOR_H_
#define SINSY_SCORE_DOCTOR_H_

#include "TempScore.h"
#include "Note.h"
#include "Slur.h"

namespace sinsy
{

class ScoreDoctor : public TempScore
{
public:
   //! constructor
   ScoreDoctor();

   //! destructor
   virtual ~ScoreDoctor();

   //! add note
   virtual void addNote(const Note&);

private:
   //! last tied note
   NoteAdder* lastTiedNote;

   //! in tie or not
   bool inTie;

   //! slur
   Slur slur;
};

};

#endif // SINSY_SCORE_DOCTOR_H_
