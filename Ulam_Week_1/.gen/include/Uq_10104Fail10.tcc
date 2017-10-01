/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10105Empty10.h"
#include "Un_102649216ByteStreamString10.h"
#include "Uq_10109210ByteStream10.h"

namespace MFM{

  template<class EC>
  Uq_10104Fail10<EC>::Uq_10104Fail10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10104Fail10", 0))
  { }

  template<class EC>
  Uq_10104Fail10<EC>::~Uq_10104Fail10(){} //gcnl:NodeBlockClass.cpp:1784


//! Fail.ulam:6:   Void fail(String string) { 
  template<class EC>
  void Uq_10104Fail10<EC>::Uf_4fail(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_6string) const
  {

//! Fail.ulam:7:     ByteStreamString sbs(string);
    Ui_Un_102649216ByteStreamString10<EC> Uv_3sbs; //gcnl:NodeVarDecl.cpp:1051
    UlamRef<EC> Uh_3tur43312(0u, 64u, Uv_3sbs, &Un_102649216ByteStreamString10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg43314 = Uv_6string.read(); //gcnl:Node.cpp:704
    Ui_Ut_102321s<EC> Uh_5tlval43315(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43314), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43314)); //gcnl:Node.cpp:1148
    Un_102649216ByteStreamString10<EC>::THE_INSTANCE.Uf_4Self(uc, Uh_3tur43312, Uh_5tlval43315); //gcnl:NodeFunctionCall.cpp:1043

//! Fail.ulam:8:     fail(sbs);
    if(! Un_102649216ByteStreamString10<EC>::THE_INSTANCE.internalCMethodImplementingIs(&Uq_10109210ByteStream10<EC>::THE_INSTANCE))
      FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1253
    Ui_Uq_r10109210ByteStream10<EC> Uh_5tlval43319(Uv_3sbs, 0u, &Un_102649216ByteStreamString10<EC>::THE_INSTANCE, uc); //gcnl:NodeCast.cpp:1332
    Ui_Uq_r10109210ByteStream10<EC> Uh_6tlref43320(Uh_5tlval43319); //gcnl:Node.cpp:1448
    THE_INSTANCE.Uf_4fail(uc, ur, Uh_6tlref43320); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_4fail



//! Fail.ulam:5:   Void fail(Unsigned u) { fail((Bits) u); }
  template<class EC>
  void Uq_10104Fail10<EC>::Uf_4fail(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_1u) const
  {

//! Fail.ulam:5:   Void fail(Unsigned u) { fail((Bits) u); }
    const u32 Uh_5tlreg43324 = Uv_1u.read(); //gcnl:Node.cpp:704
    const u32 Uh_5tlreg43325 = _Unsigned32ToBits32(Uh_5tlreg43324, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval43326(Uh_5tlreg43325); //gcnl:Node.cpp:1148
    THE_INSTANCE.Uf_4fail(uc, ur, Uh_5tlval43326); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_4fail



//! Fail.ulam:4:   Void fail(Bits bits) { fail((Int) bits); }
  template<class EC>
  void Uq_10104Fail10<EC>::Uf_4fail(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_4bits) const
  {

//! Fail.ulam:4:   Void fail(Bits bits) { fail((Int) bits); }
    const u32 Uh_5tlreg43330 = Uv_4bits.read(); //gcnl:Node.cpp:704
    const u32 Uh_5tlreg43331 = _Bits32ToInt32(Uh_5tlreg43330, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval43332(Uh_5tlreg43331); //gcnl:Node.cpp:1148
    THE_INSTANCE.Uf_4fail(uc, ur, Uh_5tlval43332); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_4fail


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10104Fail10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10104Fail10<EC>::GetDataMemberCount() const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10104Fail10<EC>::GetMangledClassName() const
  {
    return "Uq_10104Fail10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10104Fail10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10104Fail10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10104Fail10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_10104Fail10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10104Fail10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_10104Fail10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_10104Fail10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10104Fail10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

