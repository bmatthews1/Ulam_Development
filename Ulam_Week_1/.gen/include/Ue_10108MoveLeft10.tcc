/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_10108MoveLeft10<EC>::Ue_10108MoveLeft10() : UlamElement<EC>(MFM_UUID_FOR("Ue10108MoveLeft10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("M");  // figure this out later
    Element<EC>::SetName("MoveLeft"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_10108MoveLeft10<EC>::~Ue_10108MoveLeft10(){} //gcnl:NodeBlockClass.cpp:1743


//! MoveLeft.ulam:7:   Void behave(){
  template<class EC>
  void Ue_10108MoveLeft10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! MoveLeft.ulam:8:     ew[4] = ew[0];
    UlamRef<EC> Uh_3tur41987(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41988 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41989 = _Int32ToUnsigned32(Uh_5tlreg41988, 2, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval41990(Uh_5tlreg41989); //gcnl:Node.cpp:1148
    Ui_Ut_r102961a<EC> Uh_5tuval41992 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41987, Uh_5tlval41990); //gcnl:NodeFunctionCall.cpp:1043
    UlamRef<EC> Uh_3tur41994(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41995 = 4; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41996 = _Int32ToUnsigned32(Uh_5tlreg41995, 4, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval41997(Uh_5tlreg41996); //gcnl:Node.cpp:1148
    Ui_Ut_r102961a<EC> Uh_5tuval41999 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41994, Uh_5tlval41997); //gcnl:NodeFunctionCall.cpp:1043
    Uh_5tuval41999.WriteAtom(Uh_5tuval41992.read()); //write into atomof ref //gcnl:Node.cpp:998

//! MoveLeft.ulam:9:     ew[12] = ew[0];
    UlamRef<EC> Uh_3tur42001(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42002 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42003 = _Int32ToUnsigned32(Uh_5tlreg42002, 2, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval42004(Uh_5tlreg42003); //gcnl:Node.cpp:1148
    Ui_Ut_r102961a<EC> Uh_5tuval42006 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42001, Uh_5tlval42004); //gcnl:NodeFunctionCall.cpp:1043
    UlamRef<EC> Uh_3tur42008(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42009 = 12; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42010 = _Int32ToUnsigned32(Uh_5tlreg42009, 5, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval42011(Uh_5tlreg42010); //gcnl:Node.cpp:1148
    Ui_Ut_r102961a<EC> Uh_5tuval42013 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42008, Uh_5tlval42011); //gcnl:NodeFunctionCall.cpp:1043
    Uh_5tuval42013.WriteAtom(Uh_5tuval42006.read()); //write into atomof ref //gcnl:Node.cpp:998

//! MoveLeft.ulam:10:     ew[24] = ew[0];
    UlamRef<EC> Uh_3tur42015(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42016 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42017 = _Int32ToUnsigned32(Uh_5tlreg42016, 2, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval42018(Uh_5tlreg42017); //gcnl:Node.cpp:1148
    Ui_Ut_r102961a<EC> Uh_5tuval42020 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42015, Uh_5tlval42018); //gcnl:NodeFunctionCall.cpp:1043
    UlamRef<EC> Uh_3tur42022(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42023 = 24; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42024 = _Int32ToUnsigned32(Uh_5tlreg42023, 6, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval42025(Uh_5tlreg42024); //gcnl:Node.cpp:1148
    Ui_Ut_r102961a<EC> Uh_5tuval42027 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42022, Uh_5tlval42025); //gcnl:NodeFunctionCall.cpp:1043
    Uh_5tuval42027.WriteAtom(Uh_5tuval42020.read()); //write into atomof ref //gcnl:Node.cpp:998

//! MoveLeft.ulam:11:     ew[40] = ew[0];
    UlamRef<EC> Uh_3tur42029(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42030 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42031 = _Int32ToUnsigned32(Uh_5tlreg42030, 2, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval42032(Uh_5tlreg42031); //gcnl:Node.cpp:1148
    Ui_Ut_r102961a<EC> Uh_5tuval42034 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42029, Uh_5tlval42032); //gcnl:NodeFunctionCall.cpp:1043
    UlamRef<EC> Uh_3tur42036(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42037 = 40; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42038 = _Int32ToUnsigned32(Uh_5tlreg42037, 7, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval42039(Uh_5tlreg42038); //gcnl:Node.cpp:1148
    Ui_Ut_r102961a<EC> Uh_5tuval42041 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42036, Uh_5tlval42039); //gcnl:NodeFunctionCall.cpp:1043
    Uh_5tuval42041.WriteAtom(Uh_5tuval42034.read()); //write into atomof ref //gcnl:Node.cpp:998

  } // Uf_6behave


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10108MoveLeft10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10108MoveLeft10<EC>::GetDataMemberCount() const
  {
    return 1; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10108MoveLeft10<EC>::GetMangledClassName() const
  {
    return "Ue_10108MoveLeft10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_10108MoveLeft10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_10108MoveLeft10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_10108MoveLeft10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_10108MoveLeft10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_10108MoveLeft10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_10108MoveLeft10<EC>::Uf_6behave10) &Ue_10108MoveLeft10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_10108MoveLeft10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_10108MoveLeft10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_10108MoveLeft10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_10108MoveLeft10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_10108MoveLeft10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_10108MoveLeft10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

