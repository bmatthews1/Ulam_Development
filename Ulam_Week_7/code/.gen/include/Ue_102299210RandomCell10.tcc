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
      const u32 Uh_5tlreg42915 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg42915, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! RandomCell.ulam:29: 			findBonds();
          Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919findBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! RandomCell.ulam:30: 			SiteNum s = (SiteNum)rm.between(1, 4);
          UlamRef<EC> Uh_3tur42919(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg42920 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42921 = _Int32ToInt32(Uh_5tlreg42920, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42922(Uh_5tlreg42921); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg42923 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42924 = _Int32ToInt32(Uh_5tlreg42923, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42925(Uh_5tlreg42924); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval42927 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42919, Uh_5tlval42922, Uh_5tlval42925); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42928 = Uh_5tlval42927.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg42929 = _Int32ToUnsigned32(Uh_5tlreg42928, 32, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42929); //gcnl:NodeVarDecl.cpp:1081

//! RandomCell.ulam:31: 			if (rm.oneIn(9)) s = (SiteNum)rm.between(2, 4);
          {

//! RandomCell.ulam:31: 			if (rm.oneIn(9)) s = (SiteNum)rm.between(2, 4);
            UlamRef<EC> Uh_3tur42931(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg42932 = 9; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42933 = _Int32ToUnsigned32(Uh_5tlreg42932, 5, 32); //gcnl:NodeCast.cpp:748
            Ui_Ut_102321u<EC> Uh_5tlval42934(Uh_5tlreg42933); //gcnl:Node.cpp:1142
            const Ui_Ut_10111b<EC> Uh_5tlval42936 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur42931, Uh_5tlval42934); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg42937 = Uh_5tlval42936.read(); //gcnl:Node.cpp:1170
            if(_Bool32ToCbool(Uh_5tlreg42937, 1)) //gcnl:NodeControl.cpp:213
            {

//! RandomCell.ulam:31: 			if (rm.oneIn(9)) s = (SiteNum)rm.between(2, 4);
                UlamRef<EC> Uh_3tur42939(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg42940 = 2; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42941 = _Int32ToInt32(Uh_5tlreg42940, 3, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval42942(Uh_5tlreg42941); //gcnl:Node.cpp:1142
                const u32 Uh_5tlreg42943 = 4; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42944 = _Int32ToInt32(Uh_5tlreg42943, 4, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval42945(Uh_5tlreg42944); //gcnl:Node.cpp:1142
                const Ui_Ut_102321i<EC> Uh_5tlval42947 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42939, Uh_5tlval42942, Uh_5tlval42945); //gcnl:NodeFunctionCall.cpp:1043
                const u32 Uh_5tlreg42948 = Uh_5tlval42947.read(); //gcnl:Node.cpp:1170
                const u32 Uh_5tlreg42949 = _Int32ToUnsigned32(Uh_5tlreg42948, 32, 6); //gcnl:NodeCast.cpp:748
                Uv_1s.write(Uh_5tlreg42949); //gcnl:Node.cpp:892
            } // end if
          }

//! RandomCell.ulam:32: 			moveTo(s);
          const u32 Uh_5tlreg42953 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval42954(Uh_5tlreg42953); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval42956 = Uq_102294Bond10<EC>::THE_INSTANCE.Uf_6moveTo(uc, ur, Uh_5tlval42954); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42957 = Uh_5tlval42956.read(); //gcnl:Node.cpp:1170
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
    UlamRef<EC> Uh_3tur42959(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42960 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42961 = _Unsigned32ToUnsigned32(Uh_5tlreg42960, 1, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42962(Uh_5tlreg42961); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42964 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur42959, Uh_5tlval42962); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42965 = Uh_5tlval42964.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42965); //gcnl:NodeVarDecl.cpp:1081

//! RandomCell.ulam:18:     ret[1] = (Unsigned(8))(bondCount*63);
    const u32 Uh_5tlreg42966 = 63; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42967 = _Int32ToInt32(Uh_5tlreg42966, 7, 11); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42969 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg42970 = _Unsigned32ToInt32(Uh_5tlreg42969, 3, 11); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42971 = _BinOpMultiplyInt32(Uh_5tlreg42970, Uh_5tlreg42967, 11); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42972 = _Int32ToUnsigned32(Uh_5tlreg42971, 11, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42973 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42973 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42975(Uv_3ret, Uh_5tlreg42973 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42975.write(Uh_5tlreg42972);

//! RandomCell.ulam:20:     ret[2] = 0;
    const u32 Uh_5tlreg42976 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42977 = _Int32ToUnsigned32(Uh_5tlreg42976, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42978 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42978 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42980(Uv_3ret, Uh_5tlreg42978 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42980.write(Uh_5tlreg42977);

//! RandomCell.ulam:21:     ret[3] = (Unsigned(8))(bondCount*63);
    const u32 Uh_5tlreg42981 = 63; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42982 = _Int32ToInt32(Uh_5tlreg42981, 7, 11); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42984 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg42985 = _Unsigned32ToInt32(Uh_5tlreg42984, 3, 11); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42986 = _BinOpMultiplyInt32(Uh_5tlreg42985, Uh_5tlreg42982, 11); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42987 = _Int32ToUnsigned32(Uh_5tlreg42986, 11, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42988 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42988 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42990(Uv_3ret, Uh_5tlreg42988 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42990.write(Uh_5tlreg42987);

//! RandomCell.ulam:22:     return ret;
    const u32 Uh_5tlreg42992 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42993(Uh_5tlreg42992); //gcnl:Node.cpp:1142
    return (Uh_5tlval42993); //gcnl:NodeReturnStatement.cpp:343

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

