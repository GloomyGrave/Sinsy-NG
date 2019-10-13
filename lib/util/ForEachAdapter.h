#ifndef SINSY_FOR_EACH_ADAPTER_H_
#define SINSY_FOR_EACH_ADAPTER_H_

namespace sinsy
{
/*!
 for_each() adapter for member function of class

 @param T class that has Func
 @param U : argument of Func
 */
template <class T, class U>
class ForEachAdapter
{
public:
   typedef void (T::*Func)(U);

   //! constructor
   ForEachAdapter(T& o, Func f) : obj(o), func(f) {}

   //! destructor
   virtual ~ForEachAdapter() {}

   //! do function
   void operator()(U u) {
      (obj.*func)(u);
   }

private:
   //! object
   T& obj;

   //! function
   Func func;
};

};

#endif // SINSY_FOR_EACH_ADAPTER_H_
