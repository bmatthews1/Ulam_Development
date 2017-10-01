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
      const u32 Uh_5tlreg42088 = Uv_2hi.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42090 = Uv_2lo.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42091 = _BinOpCompareGreaterThanInt32(Uh_5tlreg42090, Uh_5tlreg42088, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42091, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Random.ulam:28:       Int t = hi;
          const u32 Uh_5tlreg42093 = Uv_2hi.read(); //gcnl:Node.cpp:698
          Ui_Ut_102321i<EC> Uv_1t(Uh_5tlreg42093); //gcnl:NodeVarDecl.cpp:1081

//! Random.ulam:29:       hi = lo;
          const u32 Uh_5tlreg42095 = Uv_2lo.read(); //gcnl:Node.cpp:698
          Uv_2hi.write(Uh_5tlreg42095); //gcnl:Node.cpp:892

//! Random.ulam:30:       lo = t;
          const u32 Uh_5tlreg42098 = Uv_1t.read(); //gcnl:Node.cpp:698
          Uv_2lo.write(Uh_5tlreg42098); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! Random.ulam:32:     return lo + (Int) create(hi - lo + 1);
    const u32 Uh_5tlreg42101 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42102 = _Int32ToInt32(Uh_5tlreg42101, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42104 = Uv_2lo.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42106 = Uv_2hi.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42107 = _BinOpSubtractInt32(Uh_5tlreg42106, Uh_5tlreg42104, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42108 = _BinOpAddInt32(Uh_5tlreg42107, Uh_5tlreg42102, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval42109(Uh_5tlreg42108); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval42111 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval42109); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42112 = Uh_5tlval42111.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg42113 = _Unsigned32ToInt32(Uh_5tlreg42112, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42115 = Uv_2lo.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42116 = _BinOpAddInt32(Uh_5tlreg42115, Uh_5tlreg42113, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval42117(Uh_5tlreg42116); //gcnl:Node.cpp:1142
    return (Uh_5tlval42117); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7between



//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_5oneIn(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_4odds) const
  {

//! Random.ulam:42:   Bool oneIn(Unsigned odds) { return oddsOf((Unsigned) 1, odds); }
    const u32 Uh_5tlreg42119 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42120 = _Int32ToUnsigned32(Uh_5tlreg42119, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42121(Uh_5tlreg42120); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg42123 = Uv_4odds.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval42124(Uh_5tlreg42123); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval42126 = THE_INSTANCE.Uf_6oddsOf(uc, ur, Uh_5tlval42121, Uh_5tlval42124); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42127 = Uh_5tlval42126.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval42128(Uh_5tlreg42127); //gcnl:Node.cpp:1142
    return (Uh_5tlval42128); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5oneIn



//! Random.ulam:15:   Unsigned bits(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_4bits(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:16:     if (max <= 0) return 0;
    {

//! Random.ulam:16:     if (max <= 0) return 0;
      const u32 Uh_5tlreg42129 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42130 = _Int32ToInt32(Uh_5tlreg42129, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42132 = Uv_3max.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42133 = _BinOpCompareLessEqualInt32(Uh_5tlreg42132, Uh_5tlreg42130, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42133, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:16:     if (max <= 0) return 0;
          const u32 Uh_5tlreg42134 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42135 = _Int32ToUnsigned32(Uh_5tlreg42134, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval42136(Uh_5tlreg42135); //gcnl:Node.cpp:1142
          return (Uh_5tlval42136); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:17:     return bits((Unsigned) max);
    const u32 Uh_5tlreg42139 = Uv_3max.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42140 = _Int32ToUnsigned32(Uh_5tlreg42139, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42141(Uh_5tlreg42140); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval42143 = THE_INSTANCE.Uf_4bits(uc, ur, Uh_5tlval42141); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42144 = Uh_5tlval42143.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval42145(Uh_5tlreg42144); //gcnl:Node.cpp:1142
    return (Uh_5tlval42145); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4bits



//! Random.ulam:21:   Unsigned create(Int max) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_10106Random10<EC>::Uf_6create(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3max) const
  {

//! Random.ulam:22:     if (max <= 0) return 0;
    {

//! Random.ulam:22:     if (max <= 0) return 0;
      const u32 Uh_5tlreg42146 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42147 = _Int32ToInt32(Uh_5tlreg42146, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42149 = Uv_3max.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42150 = _BinOpCompareLessEqualInt32(Uh_5tlreg42149, Uh_5tlreg42147, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42150, 1)) //gcnl:NodeControl.cpp:213
      {

//! Random.ulam:22:     if (max <= 0) return 0;
          const u32 Uh_5tlreg42151 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42152 = _Int32ToUnsigned32(Uh_5tlreg42151, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval42153(Uh_5tlreg42152); //gcnl:Node.cpp:1142
          return (Uh_5tlval42153); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Random.ulam:23:     return create((Unsigned) max);
    const u32 Uh_5tlreg42156 = Uv_3max.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42157 = _Int32ToUnsigned32(Uh_5tlreg42156, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42158(Uh_5tlreg42157); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval42160 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval42158); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42161 = Uh_5tlval42160.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval42162(Uh_5tlreg42161); //gcnl:Node.cpp:1142
    return (Uh_5tlval42162); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6create



//! Random.ulam:38:   Bool oddsOf(Int thisMany, Int outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_8thisMany, Ui_Ut_102321i<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:39:     return ((Int) create(outOfThisMany)) < thisMany;
    const u32 Uh_5tlreg42164 = Uv_8thisMany.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42167 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval42168(Uh_5tlreg42167); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval42170 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval42168); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42171 = Uh_5tlval42170.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg42172 = _Unsigned32ToInt32(Uh_5tlreg42171, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42173 = _BinOpCompareLessThanInt32(Uh_5tlreg42172, Uh_5tlreg42164, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval42174(Uh_5tlreg42173); //gcnl:Node.cpp:1142
    return (Uh_5tlval42174); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6oddsOf



//! Random.ulam:35:   Bool oddsOf(Unsigned thisMany, Unsigned outOfThisMany) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10106Random10<EC>::Uf_6oddsOf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8thisMany, Ui_Ut_102321u<EC>& Uv_9213outOfThisMany) const
  {

//! Random.ulam:36:     return create(outOfThisMany) < thisMany;
    const u32 Uh_5tlreg42176 = Uv_8thisMany.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42179 = Uv_9213outOfThisMany.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321u<EC> Uh_5tlval42180(Uh_5tlreg42179); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval42182 = THE_INSTANCE.Uf_6create(uc, ur, Uh_5tlval42180); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42183 = Uh_5tlval42182.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg42184 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42183, Uh_5tlreg42176, 32); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval42185(Uh_5tlreg42184); //gcnl:Node.cpp:1142
    return (Uh_5tlval42185); //gcnl:NodeReturnStatement.cpp:343

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

