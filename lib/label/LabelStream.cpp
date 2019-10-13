#include "util_log.h"
#include "LabelStream.h"

namespace sinsy
{

/*!
 constructor
 */
LabelStream::LabelStream(std::ostream& os) : stream(os)
{
}

/*!
 destructor
 */
LabelStream::~LabelStream()
{
}

/*!
 output label

 @param str label string
 */
void LabelStream::output(const std::string& str)
{
   stream << str << std::endl;
}

};  // namespace sinsy
