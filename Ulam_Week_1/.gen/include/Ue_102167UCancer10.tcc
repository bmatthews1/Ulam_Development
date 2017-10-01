/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_102167UCancer10<EC>::Ue_102167UCancer10() : UlamElement<EC>(MFM_UUID_FOR("Ue102167UCancer10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("U");  // figure this out later
    Element<EC>::SetName("UCancer"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102167UCancer10<EC>::~Ue_102167UCancer10(){} //gcnl:NodeBlockClass.cpp:1743


//! UCancer.ulam:16:   Void behave(){
  template<class EC>
  void Ue_102167UCancer10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! UCancer.ulam:17:     blue++;
    const u32 Uh_5tlreg43159 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43160 = _Int32ToUnsigned32(Uh_5tlreg43159, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg43162 = UlamRef<EC>(ur, 0u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
    const u32 Uh_5tlreg43163 = _BinOpAddUnsigned32(Uh_5tlreg43162, Uh_5tlreg43160, 8); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
    UlamRef<EC>(ur, 0u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43163); //gcnl:Node.cpp:898

//! UCancer.ulam:18:     red += 2;
    const u32 Uh_5tlreg43164 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43165 = _Int32ToUnsigned32(Uh_5tlreg43164, 3, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg43167 = UlamRef<EC>(ur, 8u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
    const u32 Uh_5tlreg43168 = _BinOpAddUnsigned32(Uh_5tlreg43167, Uh_5tlreg43165, 8); //gcnl:NodeBinaryOpEqualArith.cpp:244
    UlamRef<EC>(ur, 8u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43168); //gcnl:Node.cpp:898

//! UCancer.ulam:19:     if (blue == 255) blue = 0;
    {

//! UCancer.ulam:19:     if (blue == 255) blue = 0;
      const u32 Uh_5tlreg43169 = 255; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43171 = UlamRef<EC>(ur, 0u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      const u32 Uh_5tlreg43172 = _Unsigned32ToInt32(Uh_5tlreg43171, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43173 = _BinOpCompareEqEqInt32(Uh_5tlreg43172, Uh_5tlreg43169, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43173, 1)) //gcnl:NodeControl.cpp:213
      {

//! UCancer.ulam:19:     if (blue == 255) blue = 0;
          const u32 Uh_5tlreg43174 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg43175 = _Int32ToUnsigned32(Uh_5tlreg43174, 2, 8); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 0u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43175); //gcnl:Node.cpp:898
      } // end if
    }

//! UCancer.ulam:20:     if (red == 254) red = 0;
    {

//! UCancer.ulam:20:     if (red == 254) red = 0;
      const u32 Uh_5tlreg43177 = 254; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43179 = UlamRef<EC>(ur, 8u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      const u32 Uh_5tlreg43180 = _Unsigned32ToInt32(Uh_5tlreg43179, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg43181 = _BinOpCompareEqEqInt32(Uh_5tlreg43180, Uh_5tlreg43177, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43181, 1)) //gcnl:NodeControl.cpp:213
      {

//! UCancer.ulam:20:     if (red == 254) red = 0;
          const u32 Uh_5tlreg43182 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg43183 = _Int32ToUnsigned32(Uh_5tlreg43182, 2, 8); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 8u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43183); //gcnl:Node.cpp:898
      } // end if
    }

//! UCancer.ulam:21:     for (Unsigned(6) i = 0u; i < 41u; i++){
    {

//! UCancer.ulam:21:     for (Unsigned(6) i = 0u; i < 41u; i++){
      const u32 Uh_5tlreg43185 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43186 = _Unsigned32ToUnsigned32(Uh_5tlreg43185, 1, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg43186); //gcnl:NodeVarDecl.cpp:1095

//! UCancer.ulam:21:     for (Unsigned(6) i = 0u; i < 41u; i++){
      while(true)
      {
        const u32 Uh_5tlreg43187 = 41u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43189 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43190 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg43189, Uh_5tlreg43187, 6); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43190, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! UCancer.ulam:21:     for (Unsigned(6) i = 0u; i < 41u; i++){
        {

//! UCancer.ulam:22:       ew[i] = ew[0];
          UlamRef<EC> Uh_3tur43192(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg43193 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg43194 = _Int32ToUnsigned32(Uh_5tlreg43193, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval43195(Uh_5tlreg43194); //gcnl:Node.cpp:1148
          Ui_Ut_r102961a<EC> Uh_5tuval43197 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43192, Uh_5tlval43195); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur43199(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg43201 = Uv_1i.read(); //gcnl:Node.cpp:704
          Ui_Ut_10161u<EC> Uh_5tlval43202(Uh_5tlreg43201); //gcnl:Node.cpp:1148
          Ui_Ut_r102961a<EC> Uh_5tuval43204 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43199, Uh_5tlval43202); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval43204.WriteAtom(Uh_5tuval43197.read()); //write into atomof ref //gcnl:Node.cpp:998
        }

//! UCancer.ulam:21:     for (Unsigned(6) i = 0u; i < 41u; i++){
Ul_214endcontrolloop233:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! UCancer.ulam:21:     for (Unsigned(6) i = 0u; i < 41u; i++){
        const u32 Uh_5tlreg43205 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43206 = _Int32ToUnsigned32(Uh_5tlreg43205, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43208 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43209 = _BinOpAddUnsigned32(Uh_5tlreg43208, Uh_5tlreg43206, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg43209); //gcnl:Node.cpp:898
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_6behave



//! UCancer.ulam:6:   ARGB getColor(Unsigned selector){
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102167UCancer10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! UCancer.ulam:7:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1132

//! UCancer.ulam:8:     ARGB ret=cu.color(0xff00ff00u);
    UlamRef<EC> Uh_3tur43211(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg43212 = 4278255360u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval43213(Uh_5tlreg43212); //gcnl:Node.cpp:1148
    const Ui_Ut_14181u<EC> Uh_5tlval43215 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur43211, Uh_5tlval43213); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg43216 = Uh_5tlval43215.read(); //gcnl:Node.cpp:1176
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg43216); //gcnl:NodeVarDecl.cpp:1095

//! UCancer.ulam:9:     ret[1]=red;
    const u32 Uh_5tlreg43218 = UlamRef<EC>(ur, 8u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
    const u32 Uh_5tlreg43219 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg43219 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref43221(Uv_3ret, Uh_5tlreg43219 * 8u + 0u, uc); //gcnl:Node.cpp:1323
    Uh_6tlref43221.write(Uh_5tlreg43218);

//! UCancer.ulam:10:     ret[2]=255;
    const u32 Uh_5tlreg43222 = 255; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43223 = _Int32ToUnsigned32(Uh_5tlreg43222, 9, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg43224 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg43224 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref43226(Uv_3ret, Uh_5tlreg43224 * 8u + 0u, uc); //gcnl:Node.cpp:1323
    Uh_6tlref43226.write(Uh_5tlreg43223);

//! UCancer.ulam:11:     ret[3]=blue;
    const u32 Uh_5tlreg43228 = UlamRef<EC>(ur, 0u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
    const u32 Uh_5tlreg43229 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg43229 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref43231(Uv_3ret, Uh_5tlreg43229 * 8u + 0u, uc); //gcnl:Node.cpp:1323
    Uh_6tlref43231.write(Uh_5tlreg43228);

//! UCancer.ulam:13:     return ret;
    const u32 Uh_5tlreg43233 = Uv_3ret.read(); //gcnl:Node.cpp:704
    Ui_Ut_14181u<EC> Uh_5tlval43234(Uh_5tlreg43233); //gcnl:Node.cpp:1148
    return (Uh_5tlval43234); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102167UCancer10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 1: { static UlamClassDataMemberInfo i("Ut_10181u", "blue", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 2: { static UlamClassDataMemberInfo i("Ut_10181u", "red", 8u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102167UCancer10<EC>::GetDataMemberCount() const
  {
    return 3; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102167UCancer10<EC>::GetMangledClassName() const
  {
    return "Ue_102167UCancer10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102167UCancer10<EC>::GetClassLength( ) const
  {
    return 16; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102167UCancer10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102167UCancer10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102167UCancer10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102167UCancer10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102167UCancer10<EC>::Uf_6behave10) &Ue_102167UCancer10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102167UCancer10<EC>::Uf_8getColor11102321u) &Ue_102167UCancer10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102167UCancer10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102167UCancer10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102167UCancer10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102167UCancer10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102167UCancer10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102167UCancer10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

