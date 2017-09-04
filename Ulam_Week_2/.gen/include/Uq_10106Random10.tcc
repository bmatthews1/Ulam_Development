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
    const u32 Uh_5tlreg3733 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3734 = _Int32ToUnsigned32(Uh_5tlreg3733, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval3735(Uh_5tlreg3734); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3737 = Uv_4odds.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval3738(Uh_5tlreg3737); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3740 = THE_INSTANCE.Uf_6oddsOf(uc, ur, Uh_5tlval3735, Uh_5tlval3738); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3741 = Uh_5tlval3740.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3742(Uh_5tlreg3741); //gcnl:Node.cpp:1142
    return (Uh_5tlval3742); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5oneIn



//! Random.ulam:15:   Unsigned bits(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_4bits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:16:     if (max <= 0) return 0;
    {

//! Random.ulam:16:     if (max <= 0) return 0;
      const u32 Uh_5tlreg3743 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3744 = _Int32ToInt32(Uh_5tlreg3743, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3746 = Uv_3max.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3747 = _BinOpCompareLessEqualInt32(Uh_5tlreg3746, Uh_5tlreg3744, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3747, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:16:     if (max <= 0) return 0;
          const u32 Uh_5tlreg3748 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3749 = _Int32ToUnsigned32(Uh_5tlreg3748, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval3750(Uh_5tlreg3749); //gcnl:Node.cpp:1142
          return (Uh_5tlval3750); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:17:     return bits((Unsigned) max);
    const u32 Uh_5tlreg3753 = Uv_3max.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3754 = _Int32ToUnsigned32(Uh_5tlreg3753, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval3755(Uh_5tlreg3754); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval3757 = THE_INSTANCE.Uf_4bits(uc, ur, Uh_5tlval3755); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3758 = Uh_5tlval3757.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval3759(Uh_5tlreg3758); //gcnl:Node.cpp:1142
    return (Uh_5tlval3759); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4bits



//! Random.ulam:21:   Unsigned create(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_6create(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:22:     if (max <= 0) return 0;
    {

//! Random.ulam:22:     if (max <= 0) return 0;
      const u32 Uh_5tlreg3760 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3761 = _Int32ToInt32(Uh_5tlreg3760, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3763 = Uv_3max.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3764 = _BinOpCompareLessEqualInt32(Uh_5tlreg3763, Uh_5tlreg3761, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3764, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:22:     if (max <= 0) return 0;
          const u32 Uh_5tlreg3765 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3766 = _Int32ToUnsigned32(Uh_5tlreg3765, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval3767(Uh_5tlreg3766); //gcnl:Node.cpp:1142
          return (Uh_5tlval3767); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:23:     return create((Unsigned) max);
    const u32 Uh_5tlreg3770 = Uv_3max.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3771 = _Int32ToUnsigned32(Uh_5tlreg3770, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval3772(Uh_5tlreg3771); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval3774 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3772); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3775 = Uh_5tlval3774.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval3776(Uh_5tlreg3775); //gcnl:Node.cpp:1142
    return (Uh_5tlval3776); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6create



//! Random.ulam:26:   Int between(Int lo, Int hi) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_10106Random10<EC>::Uf_7between(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2lo, Ui_Ut_102321i<EC>& Uv_2hi) const
  {

//! Random.ulam:27:     if (lo > hi) {
    {

//! Random.ulam:27:     if (lo > hi) {
      const u32 Uh_5tlreg3778 = Uv_2hi.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3780 = Uv_2lo.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3781 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3780, Uh_5tlreg3778, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3781, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Random.ulam:28:       Int t = hi;
          const u32 Uh_5tlreg3783 = Uv_2hi.read(); //gcnl:Node.cpp:698
          Ui_Ut_102321i<EC> Uv_1t(Uh_5tlreg3783); //gcnl:NodeVarDecl.cpp:1081

//! Random.ulam:29:       hi = lo;
          const u32 Uh_5tlreg3785 = Uv_2lo.read(); //gcnl:Node.cpp:698
          Uv_2hi.write(Uh_5tlreg3785); //gcnl:Node.cpp:892

//! Random.ulam:30:       lo = t;
          const u32 Uh_5tlreg3788 = Uv_1t.read(); //gcnl:Node.cpp:698
          Uv_2lo.write(Uh_5tlreg3788); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! Random.ulam:32:     return lo + (Int) create(hi - lo + 1);
    const u32 Uh_5tlreg3791 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3792 = _Int32ToInt32(Uh_5tlreg3791, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3794 = Uv_2lo.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3796 = Uv_2hi.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3797 = _BinOpSubtractInt32(Uh_5tlreg3796, Uh_5tlreg3794, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3798 = _BinOpAddInt32(Uh_5tlreg3797, Uh_5tlreg3792, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval3799(Uh_5tlreg3798); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval3801 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3799); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3802 = Uh_5tlval3801.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3803 = _Unsigned32ToInt32(Uh_5tlreg3802, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3805 = Uv_2lo.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3806 = _BinOpAddInt32(Uh_5tlreg3805, Uh_5tlreg3803, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval3807(Uh_5tlreg3806); //gcnl:Node.cpp:1142
    return (Uh_5tlval3807); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7between



//! Random.ulam:38:   Bool oddsOf(Int thisMany, Int outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_8thisMany, Ui_Ut_102321i<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:39:     return ((Int) create(outOfThisMany)) < thisMany;
    const u32 Uh_5tlreg3809 = Uv_8thisMany.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3812 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval3813(Uh_5tlreg3812); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval3815 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3813); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3816 = Uh_5tlval3815.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3817 = _Unsigned32ToInt32(Uh_5tlreg3816, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3818 = _BinOpCompareLessThanInt32(Uh_5tlreg3817, Uh_5tlreg3809, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval3819(Uh_5tlreg3818); //gcnl:Node.cpp:1142
    return (Uh_5tlval3819); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf



//! Random.ulam:35:   Bool oddsOf(Unsigned thisMany, Unsigned outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8thisMany, Ui_Ut_102321u<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:36:     return create(outOfThisMany) < thisMany;
    const u32 Uh_5tlreg3821 = Uv_8thisMany.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3824 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval3825(Uh_5tlreg3824); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval3827 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval3825); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3828 = Uh_5tlval3827.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3829 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3828, Uh_5tlreg3821, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval3830(Uh_5tlreg3829); //gcnl:Node.cpp:1142
    return (Uh_5tlval3830); //gcnl:NodeReturnStatement.cpp:343

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

