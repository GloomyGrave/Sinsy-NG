#include "IStringable.h"

namespace sinsy
{

/*!
 to stream
 */
std::ostream& operator<<(std::ostream& os, const IStringWritable& obj)
{
   return obj.toStringStream(os);
}

};  // namespace sinsy
