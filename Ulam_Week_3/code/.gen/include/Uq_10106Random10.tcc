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
      const u32 Uh_5tlreg3389 = Uv_2hi.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3391 = Uv_2lo.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3392 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3391, Uh_5tlreg3389, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3392, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Random.ulam:28:       Int t = hi;
          const u32 Uh_5tlreg3394 = Uv_2hi.read(); //gcnl:Node.cpp:698
          Ui_Ut_102321i<EC> Uv_1t(Uh_5tlreg3394); //gcnl:NodeVarDecl.cpp:1081

//! Random.ulam:29:       hi = lo;
          const u32 Uh_5tlreg3396 = Uv_2lo.read(); //gcnl:Node.cpp:698
          Uv_2hi.write(Uh_5tlreg3396); //gcnl:Node.cpp:892

//! Random.ulam:30:       lo = t;
          const u32 Uh_5tlreg3399 = Uv_1t.read(); //gcnl:Node.cpp:698
          Uv_2lo.write(Uh_5tlreg3399); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! Random.ulam:32:     return lo + (Int) create(hi - lo + 1);
    const u32 Uh_5tlreg3402 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3403 = _Int32ToInt32(Uh_5tlreg3402, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3405 = Uv_2lo.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3407 = Uv_2hi.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3408 = _BinOpSubtractInt32(Uh_5tlreg3407, Uh_5tlreg3405, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3409 = _BinOpAddInt32(Uh_5tlreg3408, Uh_5tlreg3403, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval3410(Uh_5tlreg3409); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval3412 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3410); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3413 = Uh_5tlval3412.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3414 = _Unsigned32ToInt32(Uh_5tlreg3413, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3416 = Uv_2lo.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3417 = _BinOpAddInt32(Uh_5tlreg3416, Uh_5tlreg3414, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval3418(Uh_5tlreg3417); //gcnl:Node.cpp:1142
    return (Uh_5tlval3418); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7between



//! Random.ulam:15:   Unsigned bits(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_4bits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:16:     if (max <= 0) return 0;
    {

//! Random.ulam:16:     if (max <= 0) return 0;
      const u32 Uh_5tlreg3419 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3420 = _Int32ToInt32(Uh_5tlreg3419, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3422 = Uv_3max.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3423 = _BinOpCompareLessEqualInt32(Uh_5tlreg3422, Uh_5tlreg3420, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3423, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:16:     if (max <= 0) return 0;
          const u32 Uh_5tlreg3424 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3425 = _Int32ToUnsigned32(Uh_5tlreg3424, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval3426(Uh_5tlreg3425); //gcnl:Node.cpp:1142
          return (Uh_5tlval3426); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:17:     return bits((Unsigned) max);
    const u32 Uh_5tlreg3429 = Uv_3max.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3430 = _Int32ToUnsigned32(Uh_5tlreg3429, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval3431(Uh_5tlreg3430); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval3433 = THE_INSTANCE.Uf_4bits(uc, ur, Uh_5tlval3431); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3434 = Uh_5tlval3433.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval3435(Uh_5tlreg3434); //gcnl:Node.cpp:1142
    return (Uh_5tlval3435); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4bits



//! Random.ulam:21:   Unsigned create(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_6create(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:22:     if (max <= 0) return 0;
    {

//! Random.ulam:22:     if (max <= 0) return 0;
      const u32 Uh_5tlreg3436 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3437 = _Int32ToInt32(Uh_5tlreg3436, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3439 = Uv_3max.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3440 = _BinOpCompareLessEqualInt32(Uh_5tlreg3439, Uh_5tlreg3437, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3440, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:22:     if (max <= 0) return 0;
          const u32 Uh_5tlreg3441 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3442 = _Int32ToUnsigned32(Uh_5tlreg3441, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval3443(Uh_5tlreg3442); //gcnl:Node.cpp:1142
          return (Uh_5tlval3443); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:23:     return create((Unsigned) max);
    const u32 Uh_5tlreg3446 = Uv_3max.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3447 = _Int32ToUnsigned32(Uh_5tlreg3446, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval3448(Uh_5tlreg3447); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval3450 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3448); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3451 = Uh_5tlval3450.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval3452(Uh_5tlreg3451); //gcnl:Node.cpp:1142
    return (Uh_5tlval3452); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6create



//! Random.ulam:38:   Bool oddsOf(Int thisMany, Int outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_8thisMany, Ui_Ut_102321i<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:39:     return ((Int) create(outOfThisMany)) < thisMany;
    const u32 Uh_5tlreg3454 = Uv_8thisMany.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3457 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval3458(Uh_5tlreg3457); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval3460 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3458); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3461 = Uh_5tlval3460.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3462 = _Unsigned32ToInt32(Uh_5tlreg3461, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3463 = _BinOpCompareLessThanInt32(Uh_5tlreg3462, Uh_5tlreg3454, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval3464(Uh_5tlreg3463); //gcnl:Node.cpp:1142
    return (Uh_5tlval3464); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf



//! Random.ulam:35:   Bool oddsOf(Unsigned thisMany, Unsigned outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8thisMany, Ui_Ut_102321u<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:36:     return create(outOfThisMany) < thisMany;
    const u32 Uh_5tlreg3466 = Uv_8thisMany.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3469 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval3470(Uh_5tlreg3469); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval3472 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3470); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3473 = Uh_5tlval3472.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3474 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3473, Uh_5tlreg3466, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval3475(Uh_5tlreg3474); //gcnl:Node.cpp:1142
    return (Uh_5tlval3475); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf



//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_5oneIn(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_4odds) const
  {

//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
    const u32 Uh_5tlreg3477 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3478 = _Int32ToUnsigned32(Uh_5tlreg3477, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval3479(Uh_5tlreg3478); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3481 = Uv_4odds.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval3482(Uh_5tlreg3481); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3484 = THE_INSTANCE.Uf_6oddsOf(uc, ur, Uh_5tlval3479, Uh_5tlval3482); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3485 = Uh_5tlval3484.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3486(Uh_5tlreg3485); //gcnl:Node.cpp:1142
    return (Uh_5tlval3486); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5oneIn


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

