#ifndef ITEAFUNCTORCLASS_STRINGPAL_H
#define ITEAFUNCTORCLASS_STRINGPAL_H

#include "itea-functor-class_stringpal_global.h"

class ITEAFUNCTORCLASS_STRINGPALSHARED_EXPORT Iteafunctorclass_stringPal
{

public:
    Iteafunctorclass_stringPal(std::string st):m_st(st){}
    unsigned operator()() const {
        return m_st.size();//for the sake of simplicity, so that testing is easier later on.
    }
private:
    std::string m_st;
};

#endif // ITEAFUNCTORCLASS_STRINGPAL_H
