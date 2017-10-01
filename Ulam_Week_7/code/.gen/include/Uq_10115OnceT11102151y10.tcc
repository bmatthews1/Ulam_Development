/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Uq_10115OnceT11102151y10<EC>::Uq_10115OnceT11102151y10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10115OnceT11102151y10", 0))
  { }

  template<class EC>
  Uq_10115OnceT11102151y10<EC>::~Uq_10115OnceT11102151y10(){} //gcnl:NodeBlockClass.cpp:1784


//! Once.ulam:23:   Bool new() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10115OnceT11102151y10<EC>::Uf_3new(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Once.ulam:24:     if (done) return false;
    {

//! Once.ulam:24:     if (done) return false;
      const u32 Uh_5tlreg42645 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg42645, 1)) //gcnl:NodeControl.cpp:213
      {

//! Once.ulam:24:     if (done) return false;
          const u32 Uh_5tlreg42646 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval42647(Uh_5tlreg42646); //gcnl:Node.cpp:1142
          return (Uh_5tlval42647); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Once.ulam:25:     return done = true;
    const u32 Uh_5tlreg42648 = 1u; //gcnl:NodeTerminal.cpp:690
    UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42648); //gcnl:Node.cpp:892
    Ui_Ut_10111b<EC> Uh_5tlval42650(Uh_5tlreg42648); //gcnl:Node.cpp:1142
    return (Uh_5tlval42650); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3new



//! Once.ulam:34:   Bool reset() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10115OnceT11102151y10<EC>::Uf_5reset(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Once.ulam:35:     Bool was = done;
    const u32 Uh_5tlreg42652 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    Ui_Ut_10111b<EC> Uv_3was(Uh_5tlreg42652); //gcnl:NodeVarDecl.cpp:1081

//! Once.ulam:36:     done = false;
    const u32 Uh_5tlreg42653 = 0u; //gcnl:NodeTerminal.cpp:690
    UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42653); //gcnl:Node.cpp:892

//! Once.ulam:37:     return was;
    const u32 Uh_5tlreg42656 = Uv_3was.read(); //gcnl:Node.cpp:698
    Ui_Ut_10111b<EC> Uh_5tlval42657(Uh_5tlreg42656); //gcnl:Node.cpp:1142
    return (Uh_5tlval42657); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5reset


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10115OnceT11102151y10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Ut_10111b", "done", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10115OnceT11102151y10<EC>::GetDataMemberCount() const
  {
    return 1; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10115OnceT11102151y10<EC>::GetMangledClassName() const
  {
    return "Uq_10115OnceT11102151y10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10115OnceT11102151y10<EC>::GetClassLength( ) const
  {
    return 1; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10115OnceT11102151y10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10115OnceT11102151y10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_10115OnceT11102151y10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10115OnceT11102151y10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_10115OnceT11102151y10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_10115OnceT11102151y10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10115OnceT11102151y10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

