/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_10197DCancer10<EC>::Ue_10197DCancer10() : UlamElement<EC>(MFM_UUID_FOR("Ue10197DCancer10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("D");  // figure this out later
    Element<EC>::SetName("DCancer"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_10197DCancer10<EC>::~Ue_10197DCancer10(){} //gcnl:NodeBlockClass.cpp:1743


//! DCancer.ulam:15:   Void behave(){
  template<class EC>
  void Ue_10197DCancer10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! DCancer.ulam:16:     if (life == 0) ew[0] = Empty.instanceof;
    {

//! DCancer.ulam:16:     if (life == 0) ew[0] = Empty.instanceof;
      const u32 Uh_5tlreg41374 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41375 = _Int32ToInt32(Uh_5tlreg41374, 2, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41377 = UlamRef<EC>(ur, 1u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      const u32 Uh_5tlreg41378 = _Unsigned32ToInt32(Uh_5tlreg41377, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41379 = _BinOpCompareEqEqInt32(Uh_5tlreg41378, Uh_5tlreg41375, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41379, 1)) //gcnl:NodeControl.cpp:213
      {

//! DCancer.ulam:16:     if (life == 0) ew[0] = Empty.instanceof;
          Ui_Ue_10105Empty10<EC> Uh_5tuval41380; //gcnl:NodeInstanceof.cpp:113
          UlamRef<EC> Uh_3tur41382(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg41383 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41384 = _Int32ToUnsigned32(Uh_5tlreg41383, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval41385(Uh_5tlreg41384); //gcnl:Node.cpp:1148
          Ui_Ut_r102961a<EC> Uh_5tuval41387 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41382, Uh_5tlval41385); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval41387.WriteAtom(Uh_5tuval41380.read()); //write into atomof ref //gcnl:Node.cpp:998
      } // end if
    }

//! DCancer.ulam:17:     if (done){
    {

//! DCancer.ulam:17:     if (done){
      const u32 Uh_5tlreg41389 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      if(_Bool32ToCbool(Uh_5tlreg41389, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DCancer.ulam:18:       life--;
          const u32 Uh_5tlreg41390 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41391 = _Int32ToUnsigned32(Uh_5tlreg41390, 32, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41393 = UlamRef<EC>(ur, 1u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
          const u32 Uh_5tlreg41394 = _BinOpSubtractUnsigned32(Uh_5tlreg41393, Uh_5tlreg41391, 8); //gcnl:NodeBinaryOpEqualArithPostDecr.cpp:196
          UlamRef<EC>(ur, 1u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41394); //gcnl:Node.cpp:898

//! DCancer.ulam:19:       return;
          return; //gcnl:NodeReturnStatement.cpp:348
        }
      } // end if
    }

//! DCancer.ulam:22:     Unsigned(3) neighbors;
    Ui_Ut_10131u<EC> Uv_919neighbors; //gcnl:NodeVarDecl.cpp:1132

//! DCancer.ulam:23:     for (Unsigned(6) i = 1u; i < 5u; i++){
    {

//! DCancer.ulam:23:     for (Unsigned(6) i = 1u; i < 5u; i++){
      const u32 Uh_5tlreg41395 = 1u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41396 = _Unsigned32ToUnsigned32(Uh_5tlreg41395, 1, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg41396); //gcnl:NodeVarDecl.cpp:1095

//! DCancer.ulam:23:     for (Unsigned(6) i = 1u; i < 5u; i++){
      while(true)
      {
        const u32 Uh_5tlreg41397 = 5u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41398 = _Unsigned32ToUnsigned32(Uh_5tlreg41397, 3, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41400 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg41401 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41400, Uh_5tlreg41398, 6); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41401, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DCancer.ulam:23:     for (Unsigned(6) i = 1u; i < 5u; i++){
        {

//! DCancer.ulam:24:       if (ew[i] is DCancer) neighbors++;
          {

//! DCancer.ulam:24:       if (ew[i] is DCancer) neighbors++;
            UlamRef<EC> Uh_3tur41403(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg41405 = Uv_1i.read(); //gcnl:Node.cpp:704
            Ui_Ut_10161u<EC> Uh_5tlval41406(Uh_5tlreg41405); //gcnl:Node.cpp:1148
            Ui_Ut_r102961a<EC> Uh_5tuval41408 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41403, Uh_5tlval41406); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg41409 = Ue_10197DCancer10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval41408.read()); //gcnl:NodeConditionalIs.cpp:285
            if(_Bool32ToCbool(Uh_5tlreg41409, 1)) //gcnl:NodeControl.cpp:213
            {

//! DCancer.ulam:24:       if (ew[i] is DCancer) neighbors++;
                const u32 Uh_5tlreg41410 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg41411 = _Int32ToUnsigned32(Uh_5tlreg41410, 32, 3); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg41413 = Uv_919neighbors.read(); //gcnl:Node.cpp:704
                const u32 Uh_5tlreg41414 = _BinOpAddUnsigned32(Uh_5tlreg41413, Uh_5tlreg41411, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                Uv_919neighbors.write(Uh_5tlreg41414); //gcnl:Node.cpp:898
            } // end if
          }
        }

//! DCancer.ulam:23:     for (Unsigned(6) i = 1u; i < 5u; i++){
Ul_214endcontrolloop16:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! DCancer.ulam:23:     for (Unsigned(6) i = 1u; i < 5u; i++){
        const u32 Uh_5tlreg41415 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41416 = _Int32ToUnsigned32(Uh_5tlreg41415, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41418 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg41419 = _BinOpAddUnsigned32(Uh_5tlreg41418, Uh_5tlreg41416, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg41419); //gcnl:Node.cpp:898
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! DCancer.ulam:27:     if (neighbors == 4u){
    {

//! DCancer.ulam:27:     if (neighbors == 4u){
      const u32 Uh_5tlreg41420 = 4u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41422 = Uv_919neighbors.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg41423 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41422, Uh_5tlreg41420, 3); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41423, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DCancer.ulam:28:       done = true;
          const u32 Uh_5tlreg41424 = 1u; //gcnl:NodeTerminal.cpp:690
          UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41424); //gcnl:Node.cpp:898

//! DCancer.ulam:29:       return;
          return; //gcnl:NodeReturnStatement.cpp:348
        }
      } // end if
    }

//! DCancer.ulam:31:     for (Unsigned(6) i = 0u; i < 41u; i++){
    {

//! DCancer.ulam:31:     for (Unsigned(6) i = 0u; i < 41u; i++){
      const u32 Uh_5tlreg41426 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41427 = _Unsigned32ToUnsigned32(Uh_5tlreg41426, 1, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg41427); //gcnl:NodeVarDecl.cpp:1095

//! DCancer.ulam:31:     for (Unsigned(6) i = 0u; i < 41u; i++){
      while(true)
      {
        const u32 Uh_5tlreg41428 = 41u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41430 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg41431 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41430, Uh_5tlreg41428, 6); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41431, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DCancer.ulam:31:     for (Unsigned(6) i = 0u; i < 41u; i++){
        {

//! DCancer.ulam:32:       ew[i] = ew[0];
          UlamRef<EC> Uh_3tur41433(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg41434 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41435 = _Int32ToUnsigned32(Uh_5tlreg41434, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval41436(Uh_5tlreg41435); //gcnl:Node.cpp:1148
          Ui_Ut_r102961a<EC> Uh_5tuval41438 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41433, Uh_5tlval41436); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur41440(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg41442 = Uv_1i.read(); //gcnl:Node.cpp:704
          Ui_Ut_10161u<EC> Uh_5tlval41443(Uh_5tlreg41442); //gcnl:Node.cpp:1148
          Ui_Ut_r102961a<EC> Uh_5tuval41445 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41440, Uh_5tlval41443); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval41445.WriteAtom(Uh_5tuval41438.read()); //write into atomof ref //gcnl:Node.cpp:998
        }

//! DCancer.ulam:31:     for (Unsigned(6) i = 0u; i < 41u; i++){
Ul_214endcontrolloop17:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! DCancer.ulam:31:     for (Unsigned(6) i = 0u; i < 41u; i++){
        const u32 Uh_5tlreg41446 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41447 = _Int32ToUnsigned32(Uh_5tlreg41446, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41449 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg41450 = _BinOpAddUnsigned32(Uh_5tlreg41449, Uh_5tlreg41447, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg41450); //gcnl:Node.cpp:898
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_6behave



//! DCancer.ulam:6:   ARGB getColor(Unsigned selector){
  template<class EC>
  Ui_Ut_14181u<EC> Ue_10197DCancer10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! DCancer.ulam:7:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1132

//! DCancer.ulam:8:     ARGB ret=cu.color(0xff00ff00u);
    UlamRef<EC> Uh_3tur41452(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41453 = 4278255360u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval41454(Uh_5tlreg41453); //gcnl:Node.cpp:1148
    const Ui_Ut_14181u<EC> Uh_5tlval41456 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur41452, Uh_5tlval41454); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41457 = Uh_5tlval41456.read(); //gcnl:Node.cpp:1176
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg41457); //gcnl:NodeVarDecl.cpp:1095

//! DCancer.ulam:9:     ret[1]=life;
    const u32 Uh_5tlreg41459 = UlamRef<EC>(ur, 1u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
    const u32 Uh_5tlreg41460 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41460 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41462(Uv_3ret, Uh_5tlreg41460 * 8u + 0u, uc); //gcnl:Node.cpp:1323
    Uh_6tlref41462.write(Uh_5tlreg41459);

//! DCancer.ulam:10:     ret[2]=life;
    const u32 Uh_5tlreg41464 = UlamRef<EC>(ur, 1u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
    const u32 Uh_5tlreg41465 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41465 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41467(Uv_3ret, Uh_5tlreg41465 * 8u + 0u, uc); //gcnl:Node.cpp:1323
    Uh_6tlref41467.write(Uh_5tlreg41464);

//! DCancer.ulam:11:     ret[3]=life;
    const u32 Uh_5tlreg41469 = UlamRef<EC>(ur, 1u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
    const u32 Uh_5tlreg41470 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41470 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41472(Uv_3ret, Uh_5tlreg41470 * 8u + 0u, uc); //gcnl:Node.cpp:1323
    Uh_6tlref41472.write(Uh_5tlreg41469);

//! DCancer.ulam:13:     return ret;
    const u32 Uh_5tlreg41474 = Uv_3ret.read(); //gcnl:Node.cpp:704
    Ui_Ut_14181u<EC> Uh_5tlval41475(Uh_5tlreg41474); //gcnl:Node.cpp:1148
    return (Uh_5tlval41475); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10197DCancer10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 1: { static UlamClassDataMemberInfo i("Ut_10111b", "done", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 2: { static UlamClassDataMemberInfo i("Ut_10181u", "life", 1u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10197DCancer10<EC>::GetDataMemberCount() const
  {
    return 3; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10197DCancer10<EC>::GetMangledClassName() const
  {
    return "Ue_10197DCancer10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_10197DCancer10<EC>::GetClassLength( ) const
  {
    return 9; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_10197DCancer10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_10197DCancer10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_10197DCancer10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x3f, 0xc0000000, 0x0 }; //gcnl:CompilerState.cpp:1395
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      //correct runtime regnum for strings
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_10197DCancer10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_10197DCancer10<EC>::Uf_6behave10) &Ue_10197DCancer10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_10197DCancer10<EC>::Uf_8getColor11102321u) &Ue_10197DCancer10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_10197DCancer10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_10197DCancer10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_10197DCancer10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_10197DCancer10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_10197DCancer10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_10197DCancer10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

