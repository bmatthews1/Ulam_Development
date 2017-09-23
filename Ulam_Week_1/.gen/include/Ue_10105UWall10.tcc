/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10104Wall10.h"

namespace MFM{

  template<class EC>
  Ue_10105UWall10<EC>::Ue_10105UWall10() : UlamElement<EC>(MFM_UUID_FOR("Ue10105UWall10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("U");  // figure this out later
    Element<EC>::SetName("UWall"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_10105UWall10<EC>::~Ue_10105UWall10(){} //gcnl:NodeBlockClass.cpp:1743


//! UWall.ulam:10:   Void behave(){
  template<class EC>
  void Ue_10105UWall10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! UWall.ulam:11:     for (Unsigned(6) i = 0; i < 41; i++){
    {

//! UWall.ulam:11:     for (Unsigned(6) i = 0; i < 41; i++){
      const u32 Uh_5tlreg43235 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg43236 = _Int32ToUnsigned32(Uh_5tlreg43235, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg43236); //gcnl:NodeVarDecl.cpp:1095

//! UWall.ulam:11:     for (Unsigned(6) i = 0; i < 41; i++){
      while(true)
      {
        const u32 Uh_5tlreg43237 = 41; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43239 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43240 = _Unsigned32ToInt32(Uh_5tlreg43239, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43241 = _BinOpCompareLessThanInt32(Uh_5tlreg43240, Uh_5tlreg43237, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg43241, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! UWall.ulam:11:     for (Unsigned(6) i = 0; i < 41; i++){
        {

//! UWall.ulam:12:       if (!(ew[i] is Wall)) ew[i] = ew[0];
          {

//! UWall.ulam:12:       if (!(ew[i] is Wall)) ew[i] = ew[0];
            UlamRef<EC> Uh_3tur43243(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg43245 = Uv_1i.read(); //gcnl:Node.cpp:704
            Ui_Ut_10161u<EC> Uh_5tlval43246(Uh_5tlreg43245); //gcnl:Node.cpp:1148
            Ui_Ut_r102961a<EC> Uh_5tuval43248 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43243, Uh_5tlval43246); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg43249 = Ue_10104Wall10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval43248.read()); //gcnl:NodeConditionalIs.cpp:285
            const u32 Uh_5tlreg43250 = _LogicalBangBool32(Uh_5tlreg43249, 1); //gcnl:NodeUnaryOp.cpp:507
            if(_Bool32ToCbool(Uh_5tlreg43250, 1)) //gcnl:NodeControl.cpp:213
            {

//! UWall.ulam:12:       if (!(ew[i] is Wall)) ew[i] = ew[0];
                UlamRef<EC> Uh_3tur43252(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg43253 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg43254 = _Int32ToUnsigned32(Uh_5tlreg43253, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval43255(Uh_5tlreg43254); //gcnl:Node.cpp:1148
                Ui_Ut_r102961a<EC> Uh_5tuval43257 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43252, Uh_5tlval43255); //gcnl:NodeFunctionCall.cpp:1043
                UlamRef<EC> Uh_3tur43259(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg43261 = Uv_1i.read(); //gcnl:Node.cpp:704
                Ui_Ut_10161u<EC> Uh_5tlval43262(Uh_5tlreg43261); //gcnl:Node.cpp:1148
                Ui_Ut_r102961a<EC> Uh_5tuval43264 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur43259, Uh_5tlval43262); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval43264.WriteAtom(Uh_5tuval43257.read()); //write into atomof ref //gcnl:Node.cpp:998
            } // end if
          }
        }

//! UWall.ulam:11:     for (Unsigned(6) i = 0; i < 41; i++){
Ul_214endcontrolloop234:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! UWall.ulam:11:     for (Unsigned(6) i = 0; i < 41; i++){
        const u32 Uh_5tlreg43265 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg43266 = _Int32ToUnsigned32(Uh_5tlreg43265, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg43268 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg43269 = _BinOpAddUnsigned32(Uh_5tlreg43268, Uh_5tlreg43266, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg43269); //gcnl:Node.cpp:898
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_6behave


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10105UWall10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10105UWall10<EC>::GetDataMemberCount() const
  {
    return 1; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10105UWall10<EC>::GetMangledClassName() const
  {
    return "Ue_10105UWall10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_10105UWall10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_10105UWall10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_10105UWall10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_10105UWall10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_10105UWall10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_10105UWall10<EC>::Uf_6behave10) &Ue_10105UWall10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_10105UWall10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_10105UWall10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_10105UWall10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_10105UWall10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_10105UWall10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_10105UWall10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

