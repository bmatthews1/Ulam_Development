/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_102323C2D10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Uq_10109210DebugUtils10<EC>::Uq_10109210DebugUtils10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109210DebugUtils10", 0))
  { }

  template<class EC>
  Uq_10109210DebugUtils10<EC>::~Uq_10109210DebugUtils10(){} //gcnl:NodeBlockClass.cpp:1784


//! DebugUtils.ulam:29:   Void print(Atom arg) { print(arg, cPRINT_MEMBERS); }
  template<class EC>
  void Uq_10109210DebugUtils10<EC>::Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_3arg) const
  {

//! DebugUtils.ulam:29:   Void print(Atom arg) { print(arg, cPRINT_MEMBERS); }
    const T Uh_3tut41977 = Uv_3arg.read(); //gcnl:Node.cpp:704
    Ui_Ut_102961a<EC> Uh_5tuval41978(Uh_3tut41977); //gcnl:Node.cpp:1148
    const u32 Uh_5tlreg41979 = 41u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321t<EC> Uh_5tlval41980(Uh_5tlreg41979); //gcnl:Node.cpp:1148
    THE_INSTANCE.Uf_5print(uc, ur, Uh_5tuval41978, Uh_5tlval41980); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_5print



//! DebugUtils.ulam:34:   Void printContext() { printContext(cPRINT_QUARK_MEMBERS); }
  template<class EC>
  void Uq_10109210DebugUtils10<EC>::Uf_9212printContext(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! DebugUtils.ulam:34:   Void printContext() { printContext(cPRINT_QUARK_MEMBERS); }
    const u32 Uh_5tlreg41983 = 553u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321t<EC> Uh_5tlval41984(Uh_5tlreg41983); //gcnl:Node.cpp:1148
    THE_INSTANCE.Uf_9212printContext(uc, ur, Uh_5tlval41984); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_9212printContext


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10109210DebugUtils10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10109210DebugUtils10<EC>::GetDataMemberCount() const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10109210DebugUtils10<EC>::GetMangledClassName() const
  {
    return "Uq_10109210DebugUtils10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10109210DebugUtils10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10109210DebugUtils10<EC>::GetString(u32 sidx)  const
  {
    const u32 USERSTRINGPOOLSIZE = 1; //gcnl:NodeBlockClass.cpp:2537
    static unsigned char UserStringPool[USERSTRINGPOOLSIZE + 1] = 
      "\000"
    ; //gcnl:StringPoolUser.cpp:127

    if(sidx == 0)
      FAIL(UNINITIALIZED_VALUE); //gcnl:NodeBlockClass.cpp:2546
    if(sidx >= USERSTRINGPOOLSIZE)
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2555
    return UserStringPool + sidx + 1; //gcnl:NodeBlockClass.cpp:2561
  } //GetString

  template<class EC>
  u32 Uq_10109210DebugUtils10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_10109210DebugUtils10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10109210DebugUtils10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_10109210DebugUtils10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_10109210DebugUtils10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109210DebugUtils10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

