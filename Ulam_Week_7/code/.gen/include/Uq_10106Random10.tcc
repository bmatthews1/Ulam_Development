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


//! Random.ulam:26:   Int between(Int lo, Int hi) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10106Random10<EC>::Uf_7between(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2lo, Ui_Ut_102321i<EC>& Uv_2hi) const
  {

//! Random.ulam:27:     if (lo > hi) {
    {

//! Random.ulam:27:     if (lo > hi) {
      const u32 Uh_5tlreg41234 = Uv_2hi.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41236 = Uv_2lo.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41237 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41236, Uh_5tlreg41234, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41237, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Random.ulam:28:       Int t = hi;
          const u32 Uh_5tlreg41239 = Uv_2hi.read(); //gcnl:Node.cpp:698
          Ui_Ut_102321i<EC> Uv_1t(Uh_5tlreg41239); //gcnl:NodeVarDecl.cpp:1081

//! Random.ulam:29:       hi = lo;
          const u32 Uh_5tlreg41241 = Uv_2lo.read(); //gcnl:Node.cpp:698
          Uv_2hi.write(Uh_5tlreg41241); //gcnl:Node.cpp:892

//! Random.ulam:30:       lo = t;
          const u32 Uh_5tlreg41244 = Uv_1t.read(); //gcnl:Node.cpp:698
          Uv_2lo.write(Uh_5tlreg41244); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! Random.ulam:32:     return lo + (Int) create(hi - lo + 1);
    const u32 Uh_5tlreg41247 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41248 = _Int32ToInt32(Uh_5tlreg41247, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41250 = Uv_2lo.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41252 = Uv_2hi.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41253 = _BinOpSubtractInt32(Uh_5tlreg41252, Uh_5tlreg41250, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41254 = _BinOpAddInt32(Uh_5tlreg41253, Uh_5tlreg41248, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval41255(Uh_5tlreg41254); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41257 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval41255); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41258 = Uh_5tlval41257.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41259 = _Unsigned32ToInt32(Uh_5tlreg41258, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41261 = Uv_2lo.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41262 = _BinOpAddInt32(Uh_5tlreg41261, Uh_5tlreg41259, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval41263(Uh_5tlreg41262); //gcnl:Node.cpp:1142
    return (Uh_5tlval41263); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7between



//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_5oneIn(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_4odds) const
  {

//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
    const u32 Uh_5tlreg41265 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41266 = _Int32ToUnsigned32(Uh_5tlreg41265, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41267(Uh_5tlreg41266); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41269 = Uv_4odds.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval41270(Uh_5tlreg41269); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41272 = THE_INSTANCE.Uf_6oddsOf(uc, ur, Uh_5tlval41267, Uh_5tlval41270); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41273 = Uh_5tlval41272.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41274(Uh_5tlreg41273); //gcnl:Node.cpp:1142
    return (Uh_5tlval41274); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5oneIn



//! Random.ulam:15:   Unsigned bits(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_4bits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:16:     if (max <= 0) return 0;
    {

//! Random.ulam:16:     if (max <= 0) return 0;
      const u32 Uh_5tlreg41275 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41276 = _Int32ToInt32(Uh_5tlreg41275, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41278 = Uv_3max.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41279 = _BinOpCompareLessEqualInt32(Uh_5tlreg41278, Uh_5tlreg41276, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41279, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:16:     if (max <= 0) return 0;
          const u32 Uh_5tlreg41280 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41281 = _Int32ToUnsigned32(Uh_5tlreg41280, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval41282(Uh_5tlreg41281); //gcnl:Node.cpp:1142
          return (Uh_5tlval41282); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:17:     return bits((Unsigned) max);
    const u32 Uh_5tlreg41285 = Uv_3max.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41286 = _Int32ToUnsigned32(Uh_5tlreg41285, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41287(Uh_5tlreg41286); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41289 = THE_INSTANCE.Uf_4bits(uc, ur, Uh_5tlval41287); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41290 = Uh_5tlval41289.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41291(Uh_5tlreg41290); //gcnl:Node.cpp:1142
    return (Uh_5tlval41291); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4bits



//! Random.ulam:21:   Unsigned create(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_6create(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:22:     if (max <= 0) return 0;
    {

//! Random.ulam:22:     if (max <= 0) return 0;
      const u32 Uh_5tlreg41292 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41293 = _Int32ToInt32(Uh_5tlreg41292, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41295 = Uv_3max.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41296 = _BinOpCompareLessEqualInt32(Uh_5tlreg41295, Uh_5tlreg41293, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41296, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:22:     if (max <= 0) return 0;
          const u32 Uh_5tlreg41297 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41298 = _Int32ToUnsigned32(Uh_5tlreg41297, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval41299(Uh_5tlreg41298); //gcnl:Node.cpp:1142
          return (Uh_5tlval41299); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:23:     return create((Unsigned) max);
    const u32 Uh_5tlreg41302 = Uv_3max.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41303 = _Int32ToUnsigned32(Uh_5tlreg41302, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41304(Uh_5tlreg41303); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41306 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval41304); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41307 = Uh_5tlval41306.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41308(Uh_5tlreg41307); //gcnl:Node.cpp:1142
    return (Uh_5tlval41308); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6create



//! Random.ulam:38:   Bool oddsOf(Int thisMany, Int outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_8thisMany, Ui_Ut_102321i<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:39:     return ((Int) create(outOfThisMany)) < thisMany;
    const u32 Uh_5tlreg41310 = Uv_8thisMany.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41313 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41314(Uh_5tlreg41313); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41316 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval41314); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41317 = Uh_5tlval41316.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41318 = _Unsigned32ToInt32(Uh_5tlreg41317, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41319 = _BinOpCompareLessThanInt32(Uh_5tlreg41318, Uh_5tlreg41310, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval41320(Uh_5tlreg41319); //gcnl:Node.cpp:1142
    return (Uh_5tlval41320); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf



//! Random.ulam:35:   Bool oddsOf(Unsigned thisMany, Unsigned outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8thisMany, Ui_Ut_102321u<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:36:     return create(outOfThisMany) < thisMany;
    const u32 Uh_5tlreg41322 = Uv_8thisMany.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41325 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval41326(Uh_5tlreg41325); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41328 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval41326); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41329 = Uh_5tlval41328.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41330 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41329, Uh_5tlreg41322, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval41331(Uh_5tlreg41330); //gcnl:Node.cpp:1142
    return (Uh_5tlval41331); //gcnl:NodeReturnStatement.cpp:343

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

