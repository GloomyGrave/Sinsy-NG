#ifndef SINSY_I_SCORE_WRITER_H_
#define SINSY_I_SCORE_WRITER_H_

namespace sinsy
{

class IScoreWritable;

class IScoreWriter
{
public:
   //! destructor
   virtual ~IScoreWriter() {}

   //! write score
   virtual void write(IScoreWritable& writable) const = 0;
};

};

#endif // SINSY_I_SCORE_WRITER_H_
