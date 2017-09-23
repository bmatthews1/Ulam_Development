/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_102125SwapE10<EC>::Ue_102125SwapE10() : UlamElement<EC>(MFM_UUID_FOR("Ue102125SwapE10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("S");  // figure this out later
    Element<EC>::SetName("SwapE"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102125SwapE10<EC>::~Ue_102125SwapE10(){} //gcnl:NodeBlockClass.cpp:1743


//! SwapE.ulam:13:   Void behave(){
  template<class EC>
  void Ue_102125SwapE10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! SwapE.ulam:14:     if (ew.isEmpty(s4){
    {

//! SwapE.ulam:15:       ew.swap(s4, s0);
      UlamRef<EC> Uh_3tur43129(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg43131 = UlamRef<EC>(ur, 6u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      Ui_Ut_10161u<EC> Uh_5tlval43132(Uh_5tlreg43131); //gcnl:Node.cpp:1148
      const u32 Uh_5tlreg43134 = UlamRef<EC>(ur, 0u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      Ui_Ut_10161u<EC> Uh_5tlval43135(Uh_5tlreg43134); //gcnl:Node.cpp:1148
      const Ui_Ut_10111b<EC> Uh_5tlval43137 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4swap(uc, Uh_3tur43129, Uh_5tlval43132, Uh_5tlval43135); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg43138 = Uh_5tlval43137.read(); //gcnl:Node.cpp:1176
    }

  } // Uf_6behave


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102125SwapE10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 1: { static UlamClassDataMemberInfo i("Ut_10161u", "s0", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 2: { static UlamClassDataMemberInfo i("Ut_10161u", "s4", 6u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102125SwapE10<EC>::GetDataMemberCount() const
  {
    return 3; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102125SwapE10<EC>::GetMangledClassName() const
  {
    return "Ue_102125SwapE10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102125SwapE10<EC>::GetClassLength( ) const
  {
    return 12; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102125SwapE10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102125SwapE10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102125SwapE10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x0, 0x20000000, 0x0 }; //gcnl:CompilerState.cpp:1395
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
  VfuncPtr Ue_102125SwapE10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102125SwapE10<EC>::Uf_6behave10) &Ue_102125SwapE10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102125SwapE10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102125SwapE10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102125SwapE10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102125SwapE10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102125SwapE10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102125SwapE10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

