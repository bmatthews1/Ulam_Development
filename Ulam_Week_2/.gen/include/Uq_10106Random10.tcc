/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Uq_10106Random10<EC>::Uq_10106Random10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10106Random10", 0))
  { }

  template<class EC>
  Uq_10106Random10<EC>::~Uq_10106Random10(){} //gcnl:NodeBlockClass.cpp:1784


//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_5oneIn(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_4odds) const
  {

//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
    const u32 Uh_5tlreg41022 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41023 = _Int32ToUnsigned32(Uh_5tlreg41022, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41024(Uh_5tlreg41023); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41026 = Uv_4odds.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval41027(Uh_5tlreg41026); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41029 = THE_INSTANCE.Uf_6oddsOf(uc, ur, Uh_5tlval41024, Uh_5tlval41027); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41030 = Uh_5tlval41029.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41031(Uh_5tlreg41030); //gcnl:Node.cpp:1142
    return (Uh_5tlval41031); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5oneIn



//! Random.ulam:15:   Unsigned bits(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_4bits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:16:     if (max <= 0) return 0;
    {

//! Random.ulam:16:     if (max <= 0) return 0;
      const u32 Uh_5tlreg41032 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41033 = _Int32ToInt32(Uh_5tlreg41032, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41035 = Uv_3max.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41036 = _BinOpCompareLessEqualInt32(Uh_5tlreg41035, Uh_5tlreg41033, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41036, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:16:     if (max <= 0) return 0;
          const u32 Uh_5tlreg41037 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41038 = _Int32ToUnsigned32(Uh_5tlreg41037, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval41039(Uh_5tlreg41038); //gcnl:Node.cpp:1142
          return (Uh_5tlval41039); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:17:     return bits((Unsigned) max);
    const u32 Uh_5tlreg41042 = Uv_3max.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41043 = _Int32ToUnsigned32(Uh_5tlreg41042, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41044(Uh_5tlreg41043); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41046 = THE_INSTANCE.Uf_4bits(uc, ur, Uh_5tlval41044); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41047 = Uh_5tlval41046.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41048(Uh_5tlreg41047); //gcnl:Node.cpp:1142
    return (Uh_5tlval41048); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4bits



//! Random.ulam:21:   Unsigned create(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_6create(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:22:     if (max <= 0) return 0;
    {

//! Random.ulam:22:     if (max <= 0) return 0;
      const u32 Uh_5tlreg41049 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41050 = _Int32ToInt32(Uh_5tlreg41049, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41052 = Uv_3max.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41053 = _BinOpCompareLessEqualInt32(Uh_5tlreg41052, Uh_5tlreg41050, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41053, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:22:     if (max <= 0) return 0;
          const u32 Uh_5tlreg41054 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41055 = _Int32ToUnsigned32(Uh_5tlreg41054, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval41056(Uh_5tlreg41055); //gcnl:Node.cpp:1142
          return (Uh_5tlval41056); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:23:     return create((Unsigned) max);
    const u32 Uh_5tlreg41059 = Uv_3max.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41060 = _Int32ToUnsigned32(Uh_5tlreg41059, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41061(Uh_5tlreg41060); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41063 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval41061); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41064 = Uh_5tlval41063.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41065(Uh_5tlreg41064); //gcnl:Node.cpp:1142
    return (Uh_5tlval41065); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6create



//! Random.ulam:26:   Int between(Int lo, Int hi) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10106Random10<EC>::Uf_7between(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2lo, Ui_Ut_102321i<EC>& Uv_2hi) const
  {

//! Random.ulam:27:     if (lo > hi) {
    {

//! Random.ulam:27:     if (lo > hi) {
      const u32 Uh_5tlreg41067 = Uv_2hi.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41069 = Uv_2lo.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41070 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41069, Uh_5tlreg41067, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41070, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Random.ulam:28:       Int t = hi;
          const u32 Uh_5tlreg41072 = Uv_2hi.read(); //gcnl:Node.cpp:698
          Ui_Ut_102321i<EC> Uv_1t(Uh_5tlreg41072); //gcnl:NodeVarDecl.cpp:1081

//! Random.ulam:29:       hi = lo;
          const u32 Uh_5tlreg41074 = Uv_2lo.read(); //gcnl:Node.cpp:698
          Uv_2hi.write(Uh_5tlreg41074); //gcnl:Node.cpp:892

//! Random.ulam:30:       lo = t;
          const u32 Uh_5tlreg41077 = Uv_1t.read(); //gcnl:Node.cpp:698
          Uv_2lo.write(Uh_5tlreg41077); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! Random.ulam:32:     return lo + (Int) create(hi - lo + 1);
    const u32 Uh_5tlreg41080 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41081 = _Int32ToInt32(Uh_5tlreg41080, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41083 = Uv_2lo.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41085 = Uv_2hi.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41086 = _BinOpSubtractInt32(Uh_5tlreg41085, Uh_5tlreg41083, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41087 = _BinOpAddInt32(Uh_5tlreg41086, Uh_5tlreg41081, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval41088(Uh_5tlreg41087); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41090 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval41088); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41091 = Uh_5tlval41090.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41092 = _Unsigned32ToInt32(Uh_5tlreg41091, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41094 = Uv_2lo.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41095 = _BinOpAddInt32(Uh_5tlreg41094, Uh_5tlreg41092, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval41096(Uh_5tlreg41095); //gcnl:Node.cpp:1142
    return (Uh_5tlval41096); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7between



//! Random.ulam:38:   Bool oddsOf(Int thisMany, Int outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_8thisMany, Ui_Ut_102321i<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:39:     return ((Int) create(outOfThisMany)) < thisMany;
    const u32 Uh_5tlreg41098 = Uv_8thisMany.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41101 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41102(Uh_5tlreg41101); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41104 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval41102); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41105 = Uh_5tlval41104.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41106 = _Unsigned32ToInt32(Uh_5tlreg41105, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41107 = _BinOpCompareLessThanInt32(Uh_5tlreg41106, Uh_5tlreg41098, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval41108(Uh_5tlreg41107); //gcnl:Node.cpp:1142
    return (Uh_5tlval41108); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf



//! Random.ulam:35:   Bool oddsOf(Unsigned thisMany, Unsigned outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8thisMany, Ui_Ut_102321u<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:36:     return create(outOfThisMany) < thisMany;
    const u32 Uh_5tlreg41110 = Uv_8thisMany.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41113 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval41114(Uh_5tlreg41113); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41116 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval41114); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41117 = Uh_5tlval41116.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41118 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41117, Uh_5tlreg41110, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval41119(Uh_5tlreg41118); //gcnl:Node.cpp:1142
    return (Uh_5tlval41119); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10106Random10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10106Random10<EC>::GetDataMemberCount() const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10106Random10<EC>::GetMangledClassName() const
  {
    return "Uq_10106Random10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10106Random10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10106Random10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10106Random10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_10106Random10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10106Random10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_10106Random10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_10106Random10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10106Random10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

