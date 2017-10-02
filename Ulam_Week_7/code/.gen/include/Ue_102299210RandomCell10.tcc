/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_102294Bond10.h"
#include "Uq_10106Random10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10109210ColorUtils10.h"

namespace MFM{

  template<class EC>
  Ue_102299210RandomCell10<EC>::Ue_102299210RandomCell10() : UlamElement<EC>(MFM_UUID_FOR("Ue102299210RandomCell10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("R");  // figure this out later
    Element<EC>::SetName("RandomCell"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102299210RandomCell10<EC>::~Ue_102299210RandomCell10(){} //gcnl:NodeBlockClass.cpp:1743


//! RandomCell.ulam:25: 	Void behave(){
  template<class EC>
  void Ue_102299210RandomCell10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! RandomCell.ulam:26: 		drawBonds();
    Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919drawBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! RandomCell.ulam:28: 		if (active){
    {

//! RandomCell.ulam:28: 		if (active){
      const u32 Uh_5tlreg42684 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg42684, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! RandomCell.ulam:29: 			findBonds();
          Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919findBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! RandomCell.ulam:30: 			SiteNum s = (SiteNum)rm.between(1, 4);
          UlamRef<EC> Uh_3tur42688(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg42689 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42690 = _Int32ToInt32(Uh_5tlreg42689, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42691(Uh_5tlreg42690); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg42692 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42693 = _Int32ToInt32(Uh_5tlreg42692, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42694(Uh_5tlreg42693); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval42696 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42688, Uh_5tlval42691, Uh_5tlval42694); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42697 = Uh_5tlval42696.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg42698 = _Int32ToUnsigned32(Uh_5tlreg42697, 32, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42698); //gcnl:NodeVarDecl.cpp:1081

//! RandomCell.ulam:31: 			if (rm.oneIn(9)) s = (SiteNum)rm.between(2, 4);
          {

//! RandomCell.ulam:31: 			if (rm.oneIn(9)) s = (SiteNum)rm.between(2, 4);
            UlamRef<EC> Uh_3tur42700(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg42701 = 9; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42702 = _Int32ToUnsigned32(Uh_5tlreg42701, 5, 32); //gcnl:NodeCast.cpp:748
            Ui_Ut_102321u<EC> Uh_5tlval42703(Uh_5tlreg42702); //gcnl:Node.cpp:1142
            const Ui_Ut_10111b<EC> Uh_5tlval42705 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur42700, Uh_5tlval42703); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg42706 = Uh_5tlval42705.read(); //gcnl:Node.cpp:1170
            if(_Bool32ToCbool(Uh_5tlreg42706, 1)) //gcnl:NodeControl.cpp:213
            {

//! RandomCell.ulam:31: 			if (rm.oneIn(9)) s = (SiteNum)rm.between(2, 4);
                UlamRef<EC> Uh_3tur42708(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg42709 = 2; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42710 = _Int32ToInt32(Uh_5tlreg42709, 3, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval42711(Uh_5tlreg42710); //gcnl:Node.cpp:1142
                const u32 Uh_5tlreg42712 = 4; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42713 = _Int32ToInt32(Uh_5tlreg42712, 4, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval42714(Uh_5tlreg42713); //gcnl:Node.cpp:1142
                const Ui_Ut_102321i<EC> Uh_5tlval42716 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42708, Uh_5tlval42711, Uh_5tlval42714); //gcnl:NodeFunctionCall.cpp:1043
                const u32 Uh_5tlreg42717 = Uh_5tlval42716.read(); //gcnl:Node.cpp:1170
                const u32 Uh_5tlreg42718 = _Int32ToUnsigned32(Uh_5tlreg42717, 32, 6); //gcnl:NodeCast.cpp:748
                Uv_1s.write(Uh_5tlreg42718); //gcnl:Node.cpp:892
            } // end if
          }

//! RandomCell.ulam:32: 			moveTo(s);
          const u32 Uh_5tlreg42722 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval42723(Uh_5tlreg42722); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval42725 = Uq_102294Bond10<EC>::THE_INSTANCE.Uf_6moveTo(uc, ur, Uh_5tlval42723); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42726 = Uh_5tlval42725.read(); //gcnl:Node.cpp:1170
        }
      } // end if
    }

  } // Uf_6behave



//! RandomCell.ulam:15:   ARGB getColor(Unsigned selector) {
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102299210RandomCell10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! RandomCell.ulam:16:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! RandomCell.ulam:17:     ARGB ret = cu.color(0x00000000U);
    UlamRef<EC> Uh_3tur42728(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42729 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42730 = _Unsigned32ToUnsigned32(Uh_5tlreg42729, 1, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42731(Uh_5tlreg42730); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42733 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur42728, Uh_5tlval42731); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42734 = Uh_5tlval42733.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42734); //gcnl:NodeVarDecl.cpp:1081

//! RandomCell.ulam:18:     ret[1] = (Unsigned(8))(bondCount*63);
    const u32 Uh_5tlreg42735 = 63; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42736 = _Int32ToInt32(Uh_5tlreg42735, 7, 11); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42738 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg42739 = _Unsigned32ToInt32(Uh_5tlreg42738, 3, 11); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42740 = _BinOpMultiplyInt32(Uh_5tlreg42739, Uh_5tlreg42736, 11); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42741 = _Int32ToUnsigned32(Uh_5tlreg42740, 11, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42742 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42742 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42744(Uv_3ret, Uh_5tlreg42742 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42744.write(Uh_5tlreg42741);

//! RandomCell.ulam:20:     ret[2] = 0;
    const u32 Uh_5tlreg42745 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42746 = _Int32ToUnsigned32(Uh_5tlreg42745, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42747 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42747 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42749(Uv_3ret, Uh_5tlreg42747 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42749.write(Uh_5tlreg42746);

//! RandomCell.ulam:21:     ret[3] = (Unsigned(8))(bondCount*63);
    const u32 Uh_5tlreg42750 = 63; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42751 = _Int32ToInt32(Uh_5tlreg42750, 7, 11); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42753 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg42754 = _Unsigned32ToInt32(Uh_5tlreg42753, 3, 11); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42755 = _BinOpMultiplyInt32(Uh_5tlreg42754, Uh_5tlreg42751, 11); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42756 = _Int32ToUnsigned32(Uh_5tlreg42755, 11, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42757 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42757 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42759(Uv_3ret, Uh_5tlreg42757 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42759.write(Uh_5tlreg42756);

//! RandomCell.ulam:22:     return ret;
    const u32 Uh_5tlreg42761 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42762(Uh_5tlreg42761); //gcnl:Node.cpp:1142
    return (Uh_5tlval42762); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102299210RandomCell10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10111b", "active", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Ut_10131u", "bondCount", 1u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Ut_15151u", "bonds", 4u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 5: { static UlamClassDataMemberInfo i("Uq_10106Random10", "rm", 29u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102299210RandomCell10<EC>::GetDataMemberCount() const
  {
    return 6; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102299210RandomCell10<EC>::GetMangledClassName() const
  {
    return "Ue_102299210RandomCell10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102299210RandomCell10<EC>::GetClassLength( ) const
  {
    return 29; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102299210RandomCell10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102299210RandomCell10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102299210RandomCell10<EC>::BuildDefaultAtom( ) const
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
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102299210RandomCell10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102299210RandomCell10<EC>::Uf_6behave10) &Ue_102299210RandomCell10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102299210RandomCell10<EC>::Uf_8getColor11102321u) &Ue_102299210RandomCell10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102299210RandomCell10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102299210RandomCell10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102294Bond10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102299210RandomCell10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102299210RandomCell10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102299210RandomCell10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102299210RandomCell10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

