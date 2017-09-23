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
      const u32 Uh_5tlreg3535 = Uv_2hi.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg3537 = Uv_2lo.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg3538 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3537, Uh_5tlreg3535, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3538, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Random.ulam:28:       Int t = hi;
          const u32 Uh_5tlreg3540 = Uv_2hi.read(); //gcnl:Node.cpp:704
          Ui_Ut_102321i<EC> Uv_1t(Uh_5tlreg3540); //gcnl:NodeVarDecl.cpp:1095

//! Random.ulam:29:       hi = lo;
          const u32 Uh_5tlreg3542 = Uv_2lo.read(); //gcnl:Node.cpp:704
          Uv_2hi.write(Uh_5tlreg3542); //gcnl:Node.cpp:898

//! Random.ulam:30:       lo = t;
          const u32 Uh_5tlreg3545 = Uv_1t.read(); //gcnl:Node.cpp:704
          Uv_2lo.write(Uh_5tlreg3545); //gcnl:Node.cpp:898
        }
      } // end if
    }

//! Random.ulam:32:     return lo + (Int) create(hi - lo + 1);
    const u32 Uh_5tlreg3548 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3549 = _Int32ToInt32(Uh_5tlreg3548, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3551 = Uv_2lo.read(); //gcnl:Node.cpp:704
    const u32 Uh_5tlreg3553 = Uv_2hi.read(); //gcnl:Node.cpp:704
    const u32 Uh_5tlreg3554 = _BinOpSubtractInt32(Uh_5tlreg3553, Uh_5tlreg3551, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3555 = _BinOpAddInt32(Uh_5tlreg3554, Uh_5tlreg3549, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval3556(Uh_5tlreg3555); //gcnl:Node.cpp:1148
    const Ui_Ut_102321u<EC> Uh_5tlval3558 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3556); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3559 = Uh_5tlval3558.read(); //gcnl:Node.cpp:1176
    const u32 Uh_5tlreg3560 = _Unsigned32ToInt32(Uh_5tlreg3559, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3562 = Uv_2lo.read(); //gcnl:Node.cpp:704
    const u32 Uh_5tlreg3563 = _BinOpAddInt32(Uh_5tlreg3562, Uh_5tlreg3560, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval3564(Uh_5tlreg3563); //gcnl:Node.cpp:1148
    return (Uh_5tlval3564); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7between



//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_5oneIn(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_4odds) const
  {

//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
    const u32 Uh_5tlreg3566 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3567 = _Int32ToUnsigned32(Uh_5tlreg3566, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval3568(Uh_5tlreg3567); //gcnl:Node.cpp:1148
    const u32 Uh_5tlreg3570 = Uv_4odds.read(); //gcnl:Node.cpp:704
    Ui_Ut_102321u<EC> Uh_5tlval3571(Uh_5tlreg3570); //gcnl:Node.cpp:1148
    const Ui_Ut_10111b<EC> Uh_5tlval3573 = THE_INSTANCE.Uf_6oddsOf(uc, ur, Uh_5tlval3568, Uh_5tlval3571); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3574 = Uh_5tlval3573.read(); //gcnl:Node.cpp:1176
    Ui_Ut_10111b<EC> Uh_5tlval3575(Uh_5tlreg3574); //gcnl:Node.cpp:1148
    return (Uh_5tlval3575); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5oneIn



//! Random.ulam:15:   Unsigned bits(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_4bits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:16:     if (max <= 0) return 0;
    {

//! Random.ulam:16:     if (max <= 0) return 0;
      const u32 Uh_5tlreg3576 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3577 = _Int32ToInt32(Uh_5tlreg3576, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3579 = Uv_3max.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg3580 = _BinOpCompareLessEqualInt32(Uh_5tlreg3579, Uh_5tlreg3577, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3580, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:16:     if (max <= 0) return 0;
          const u32 Uh_5tlreg3581 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3582 = _Int32ToUnsigned32(Uh_5tlreg3581, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval3583(Uh_5tlreg3582); //gcnl:Node.cpp:1148
          return (Uh_5tlval3583); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:17:     return bits((Unsigned) max);
    const u32 Uh_5tlreg3586 = Uv_3max.read(); //gcnl:Node.cpp:704
    const u32 Uh_5tlreg3587 = _Int32ToUnsigned32(Uh_5tlreg3586, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval3588(Uh_5tlreg3587); //gcnl:Node.cpp:1148
    const Ui_Ut_102321u<EC> Uh_5tlval3590 = THE_INSTANCE.Uf_4bits(uc, ur, Uh_5tlval3588); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3591 = Uh_5tlval3590.read(); //gcnl:Node.cpp:1176
    Ui_Ut_102321u<EC> Uh_5tlval3592(Uh_5tlreg3591); //gcnl:Node.cpp:1148
    return (Uh_5tlval3592); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4bits



//! Random.ulam:21:   Unsigned create(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_6create(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:22:     if (max <= 0) return 0;
    {

//! Random.ulam:22:     if (max <= 0) return 0;
      const u32 Uh_5tlreg3593 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3594 = _Int32ToInt32(Uh_5tlreg3593, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3596 = Uv_3max.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg3597 = _BinOpCompareLessEqualInt32(Uh_5tlreg3596, Uh_5tlreg3594, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3597, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:22:     if (max <= 0) return 0;
          const u32 Uh_5tlreg3598 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3599 = _Int32ToUnsigned32(Uh_5tlreg3598, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval3600(Uh_5tlreg3599); //gcnl:Node.cpp:1148
          return (Uh_5tlval3600); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:23:     return create((Unsigned) max);
    const u32 Uh_5tlreg3603 = Uv_3max.read(); //gcnl:Node.cpp:704
    const u32 Uh_5tlreg3604 = _Int32ToUnsigned32(Uh_5tlreg3603, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval3605(Uh_5tlreg3604); //gcnl:Node.cpp:1148
    const Ui_Ut_102321u<EC> Uh_5tlval3607 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3605); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3608 = Uh_5tlval3607.read(); //gcnl:Node.cpp:1176
    Ui_Ut_102321u<EC> Uh_5tlval3609(Uh_5tlreg3608); //gcnl:Node.cpp:1148
    return (Uh_5tlval3609); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6create



//! Random.ulam:38:   Bool oddsOf(Int thisMany, Int outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_8thisMany, Ui_Ut_102321i<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:39:     return ((Int) create(outOfThisMany)) < thisMany;
    const u32 Uh_5tlreg3611 = Uv_8thisMany.read(); //gcnl:Node.cpp:704
    const u32 Uh_5tlreg3614 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:704
    Ui_Ut_102321i<EC> Uh_5tlval3615(Uh_5tlreg3614); //gcnl:Node.cpp:1148
    const Ui_Ut_102321u<EC> Uh_5tlval3617 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3615); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3618 = Uh_5tlval3617.read(); //gcnl:Node.cpp:1176
    const u32 Uh_5tlreg3619 = _Unsigned32ToInt32(Uh_5tlreg3618, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3620 = _BinOpCompareLessThanInt32(Uh_5tlreg3619, Uh_5tlreg3611, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval3621(Uh_5tlreg3620); //gcnl:Node.cpp:1148
    return (Uh_5tlval3621); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf



//! Random.ulam:35:   Bool oddsOf(Unsigned thisMany, Unsigned outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8thisMany, Ui_Ut_102321u<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:36:     return create(outOfThisMany) < thisMany;
    const u32 Uh_5tlreg3623 = Uv_8thisMany.read(); //gcnl:Node.cpp:704
    const u32 Uh_5tlreg3626 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:704
    Ui_Ut_102321u<EC> Uh_5tlval3627(Uh_5tlreg3626); //gcnl:Node.cpp:1148
    const Ui_Ut_102321u<EC> Uh_5tlval3629 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3627); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3630 = Uh_5tlval3629.read(); //gcnl:Node.cpp:1176
    const u32 Uh_5tlreg3631 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3630, Uh_5tlreg3623, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval3632(Uh_5tlreg3631); //gcnl:Node.cpp:1148
    return (Uh_5tlval3632); //gcnl:NodeReturnStatement.cpp:343

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

