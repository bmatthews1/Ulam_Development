/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10104Fail10.h"

namespace MFM{

  template<class EC>
  Uq_1010919AtomUtils10<EC>::Uq_1010919AtomUtils10() : UlamQuark<EC>(MFM_UUID_FOR("Uq1010919AtomUtils10", 0))
  { }

  template<class EC>
  Uq_1010919AtomUtils10<EC>::~Uq_1010919AtomUtils10(){} //gcnl:NodeBlockClass.cpp:1784


//! AtomUtils.ulam:16:   Type getValidType(Atom a)
  template<class EC>
  Ui_Ut_102161u<EC> Uq_1010919AtomUtils10<EC>::Uf_9212getValidType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const
  {

//! AtomUtils.ulam:18:     Fail f;
    Ui_Uq_10104Fail10<EC> Uv_1f; //gcnl:NodeVarDecl.cpp:1118

//! AtomUtils.ulam:19:     Int i = getType(a);
    const T Uh_3tut41194 = Uv_1a.read(); //gcnl:Node.cpp:698
    Ui_Ut_102961a<EC> Uh_5tuval41195(Uh_3tut41194); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41197 = THE_INSTANCE.Uf_7getType(uc, ur, Uh_5tuval41195); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41198 = Uh_5tlval41197.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg41198); //gcnl:NodeVarDecl.cpp:1081

//! AtomUtils.ulam:20:     if (i < 0) f.fail();
    {

//! AtomUtils.ulam:20:     if (i < 0) f.fail();
      const u32 Uh_5tlreg41199 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41200 = _Int32ToInt32(Uh_5tlreg41199, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41202 = Uv_1i.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41203 = _BinOpCompareLessThanInt32(Uh_5tlreg41202, Uh_5tlreg41200, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41203, 1)) //gcnl:NodeControl.cpp:213
      {

//! AtomUtils.ulam:20:     if (i < 0) f.fail();
          UlamRef<EC> Uh_3tur41205(0u, 0u, Uv_1f, &Uq_10104Fail10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          Uq_10104Fail10<EC>::THE_INSTANCE.Uf_4fail(uc, Uh_3tur41205); //gcnl:NodeFunctionCall.cpp:1043
      } // end if
    }

//! AtomUtils.ulam:21:     return (Type) i;
    const u32 Uh_5tlreg41208 = Uv_1i.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41209 = _Int32ToUnsigned32(Uh_5tlreg41208, 32, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161u<EC> Uh_5tlval41210(Uh_5tlreg41209); //gcnl:Node.cpp:1142
    return (Uh_5tlval41210); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212getValidType



//! AtomUtils.ulam:28:   Type getEmptyType() {
  template<class EC>
  Ui_Ut_102161u<EC> Uq_1010919AtomUtils10<EC>::Uf_9212getEmptyType(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! AtomUtils.ulam:29:     Empty a;
    Ui_Ue_10105Empty10<EC> Uv_1a; //gcnl:NodeVarDecl.cpp:1118

//! AtomUtils.ulam:30:     return getValidType((Atom) a);
    const T Uh_3tut41213 = Uv_1a.read(); //gcnl:Node.cpp:698
    Ui_Ut_102961a<EC> Uh_5tuval41214(Uh_3tut41213); //gcnl:Node.cpp:1142
    const Ui_Ut_102161u<EC> Uh_5tlval41216 = THE_INSTANCE.Uf_9212getValidType(uc, ur, Uh_5tuval41214); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41217 = Uh_5tlval41216.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102161u<EC> Uh_5tlval41218(Uh_5tlreg41217); //gcnl:Node.cpp:1142
    return (Uh_5tlval41218); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212getEmptyType



//! AtomUtils.ulam:37:   Bool isEmpty(Atom a) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_1010919AtomUtils10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102961a<EC>& Uv_1a) const
  {

//! AtomUtils.ulam:38:     return getType(a)==getEmptyType();
    const Ui_Ut_102161u<EC> Uh_5tlval41221 = THE_INSTANCE.Uf_9212getEmptyType(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41222 = Uh_5tlval41221.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41223 = _Unsigned32ToInt32(Uh_5tlreg41222, 16, 32); //gcnl:NodeCast.cpp:748
    const T Uh_3tut41226 = Uv_1a.read(); //gcnl:Node.cpp:698
    Ui_Ut_102961a<EC> Uh_5tuval41227(Uh_3tut41226); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41229 = THE_INSTANCE.Uf_7getType(uc, ur, Uh_5tuval41227); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41230 = Uh_5tlval41229.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41231 = _BinOpCompareEqEqInt32(Uh_5tlreg41230, Uh_5tlreg41223, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval41232(Uh_5tlreg41231); //gcnl:Node.cpp:1142
    return (Uh_5tlval41232); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_1010919AtomUtils10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_1010919AtomUtils10<EC>::GetDataMemberCount() const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_1010919AtomUtils10<EC>::GetMangledClassName() const
  {
    return "Uq_1010919AtomUtils10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_1010919AtomUtils10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_1010919AtomUtils10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_1010919AtomUtils10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_1010919AtomUtils10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_1010919AtomUtils10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_1010919AtomUtils10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_1010919AtomUtils10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_1010919AtomUtils10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

