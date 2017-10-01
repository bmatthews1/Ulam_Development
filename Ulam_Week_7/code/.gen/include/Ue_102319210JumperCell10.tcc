/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_102244Bond10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10106Random10.h"
#include "Uq_10114Once10.h"
#include "Uq_10109210ColorUtils10.h"

namespace MFM{

  template<class EC>
  Ue_102319210JumperCell10<EC>::Ue_102319210JumperCell10() : UlamElement<EC>(MFM_UUID_FOR("Ue102319210JumperCell10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("J");  // figure this out later
    Element<EC>::SetName("JumperCell"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102319210JumperCell10<EC>::~Ue_102319210JumperCell10(){} //gcnl:NodeBlockClass.cpp:1743


//! JumperCell.ulam:30: 	Void behave(){
  template<class EC>
  void Ue_102319210JumperCell10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! JumperCell.ulam:31: 		if (once.new()){
    {

//! JumperCell.ulam:31: 		if (once.new()){
      UlamRef<EC> Uh_3tur42455(ur, 30u, 1u, &Uq_10114Once10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const Ui_Ut_10111b<EC> Uh_5tlval42457 = Uq_10115OnceT11102151y10<EC>::THE_INSTANCE.Uf_3new(uc, Uh_3tur42455); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg42458 = Uh_5tlval42457.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg42458, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! JumperCell.ulam:32: 			moveType = (SiteNum)rm.between(5, 8);
          UlamRef<EC> Uh_3tur42460(ur, 24u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg42461 = 5; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42462 = _Int32ToInt32(Uh_5tlreg42461, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42463(Uh_5tlreg42462); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg42464 = 8; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42465 = _Int32ToInt32(Uh_5tlreg42464, 5, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42466(Uh_5tlreg42465); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval42468 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42460, Uh_5tlval42463, Uh_5tlval42466); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42469 = Uh_5tlval42468.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg42470 = _Int32ToUnsigned32(Uh_5tlreg42469, 32, 6); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42470); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! JumperCell.ulam:34: 		if (active){
    {

//! JumperCell.ulam:34: 		if (active){
      const u32 Uh_5tlreg42473 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg42473, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! JumperCell.ulam:35: 			findBonds();
          Uq_102244Bond10<EC>::THE_INSTANCE.Uf_919findBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! JumperCell.ulam:37: 			moveTo(moveType);
          const u32 Uh_5tlreg42478 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          Ui_Ut_10161u<EC> Uh_5tlval42479(Uh_5tlreg42478); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval42481 = Uq_102244Bond10<EC>::THE_INSTANCE.Uf_6moveTo(uc, ur, Uh_5tlval42479); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42482 = Uh_5tlval42481.read(); //gcnl:Node.cpp:1170
        }
      } // end if
    }

//! JumperCell.ulam:39: 		drawBonds();
    Uq_102244Bond10<EC>::THE_INSTANCE.Uf_919drawBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_6behave



//! JumperCell.ulam:21:   ARGB getColor(Unsigned selector) {
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102319210JumperCell10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! JumperCell.ulam:22:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! JumperCell.ulam:23:     ARGB ret = cu.color(0x00000000U);
    UlamRef<EC> Uh_3tur42486(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42487 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42488 = _Unsigned32ToUnsigned32(Uh_5tlreg42487, 1, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42489(Uh_5tlreg42488); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42491 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur42486, Uh_5tlval42489); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42492 = Uh_5tlval42491.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42492); //gcnl:NodeVarDecl.cpp:1081

//! JumperCell.ulam:24:     if (moveType == 5 || moveType == 6) ret[1] = (Byte)(bondCount*63);
    {

//! JumperCell.ulam:24:     if (moveType == 5 || moveType == 6) ret[1] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42493 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42494 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42495 = _Int32ToInt32(Uh_5tlreg42494, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42497 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42498 = _Unsigned32ToInt32(Uh_5tlreg42497, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42499 = _BinOpCompareEqEqInt32(Uh_5tlreg42498, Uh_5tlreg42495, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42499, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42500 = 6; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42501 = _Int32ToInt32(Uh_5tlreg42500, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42503 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42504 = _Unsigned32ToInt32(Uh_5tlreg42503, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42505 = _BinOpCompareEqEqInt32(Uh_5tlreg42504, Uh_5tlreg42501, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42493 = Uh_5tlreg42505; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42493 = Uh_5tlreg42499; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42493, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:24:     if (moveType == 5 || moveType == 6) ret[1] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42506 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42507 = _Int32ToInt32(Uh_5tlreg42506, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42509 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42510 = _Unsigned32ToInt32(Uh_5tlreg42509, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42511 = _BinOpMultiplyInt32(Uh_5tlreg42510, Uh_5tlreg42507, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42512 = _Int32ToUnsigned32(Uh_5tlreg42511, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42513 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42513 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42515(Uv_3ret, Uh_5tlreg42513 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42515.write(Uh_5tlreg42512);
      } // end if
    }

//! JumperCell.ulam:25:     if (moveType == 5 || moveType == 8) ret[2] = (Byte)(bondCount*63);
    {

//! JumperCell.ulam:25:     if (moveType == 5 || moveType == 8) ret[2] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42516 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42517 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42518 = _Int32ToInt32(Uh_5tlreg42517, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42520 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42521 = _Unsigned32ToInt32(Uh_5tlreg42520, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42522 = _BinOpCompareEqEqInt32(Uh_5tlreg42521, Uh_5tlreg42518, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42522, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42523 = 8; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42524 = _Int32ToInt32(Uh_5tlreg42523, 5, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42526 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42527 = _Unsigned32ToInt32(Uh_5tlreg42526, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42528 = _BinOpCompareEqEqInt32(Uh_5tlreg42527, Uh_5tlreg42524, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42516 = Uh_5tlreg42528; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42516 = Uh_5tlreg42522; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42516, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:25:     if (moveType == 5 || moveType == 8) ret[2] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42529 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42530 = _Int32ToInt32(Uh_5tlreg42529, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42532 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42533 = _Unsigned32ToInt32(Uh_5tlreg42532, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42534 = _BinOpMultiplyInt32(Uh_5tlreg42533, Uh_5tlreg42530, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42535 = _Int32ToUnsigned32(Uh_5tlreg42534, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42536 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42536 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42538(Uv_3ret, Uh_5tlreg42536 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42538.write(Uh_5tlreg42535);
      } // end if
    }

//! JumperCell.ulam:26:     if (moveType == 7) ret[3] = (Byte)(bondCount*63);
    {

//! JumperCell.ulam:26:     if (moveType == 7) ret[3] = (Byte)(bondCount*63);
      const u32 Uh_5tlreg42539 = 7; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42540 = _Int32ToInt32(Uh_5tlreg42539, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42542 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42543 = _Unsigned32ToInt32(Uh_5tlreg42542, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42544 = _BinOpCompareEqEqInt32(Uh_5tlreg42543, Uh_5tlreg42540, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42544, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:26:     if (moveType == 7) ret[3] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42545 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42546 = _Int32ToInt32(Uh_5tlreg42545, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42548 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42549 = _Unsigned32ToInt32(Uh_5tlreg42548, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42550 = _BinOpMultiplyInt32(Uh_5tlreg42549, Uh_5tlreg42546, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42551 = _Int32ToUnsigned32(Uh_5tlreg42550, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42552 = 3; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42552 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42554(Uv_3ret, Uh_5tlreg42552 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42554.write(Uh_5tlreg42551);
      } // end if
    }

//! JumperCell.ulam:27:     return ret;
    const u32 Uh_5tlreg42556 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42557(Uh_5tlreg42556); //gcnl:Node.cpp:1142
    return (Uh_5tlval42557); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102319210JumperCell10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10111b", "active", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Ut_10131u", "bondCount", 1u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Ut_14151u", "bonds", 4u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 5: { static UlamClassDataMemberInfo i("Uq_10106Random10", "rm", 24u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 6: { static UlamClassDataMemberInfo i("Ut_10161u", "moveType", 24u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 7: { static UlamClassDataMemberInfo i("Uq_10114Once10", "once", 30u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102319210JumperCell10<EC>::GetDataMemberCount() const
  {
    return 8; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102319210JumperCell10<EC>::GetMangledClassName() const
  {
    return "Ue_102319210JumperCell10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102319210JumperCell10<EC>::GetClassLength( ) const
  {
    return 31; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102319210JumperCell10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102319210JumperCell10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102319210JumperCell10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x40, 0x0, 0x0 }; //gcnl:CompilerState.cpp:1395
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      //correct runtime regnum for strings
      const Ui_Uq_10114Once10<EC> Uh_5tlreg42558; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg42559(Uh_5tlreg42558.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(55u, 1, Uh_5tlreg42559); //Um_4once //gcnl:NodeVarDeclDM.cpp:832
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102319210JumperCell10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102319210JumperCell10<EC>::Uf_6behave10) &Ue_102319210JumperCell10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102319210JumperCell10<EC>::Uf_8getColor11102321u) &Ue_102319210JumperCell10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102319210JumperCell10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102319210JumperCell10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102244Bond10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102319210JumperCell10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102319210JumperCell10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102319210JumperCell10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102319210JumperCell10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

