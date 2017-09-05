/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_102329210DataHolder10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_102324Wire10<EC>::Ue_102324Wire10() : UlamElement<EC>(MFM_UUID_FOR("Ue102324Wire10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("W");  // figure this out later
    Element<EC>::SetName("Wire"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102324Wire10<EC>::~Ue_102324Wire10(){} //gcnl:NodeBlockClass.cpp:1743


//! DataHolder.ulam:86:   Void behave(){
  template<class EC>
  void Ue_102324Wire10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! DataHolder.ulam:87:     transmit();
    Uq_102329210DataHolder10<EC>::THE_INSTANCE.Uf_8transmit(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! DataHolder.ulam:88:     checkCoolDown();
    Uq_102329210DataHolder10<EC>::THE_INSTANCE.Uf_9213checkCoolDown(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_6behave


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102324Wire10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Ut_102301u", "data", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Ut_10111b", "hasData", 30u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10111b", "cooldown", 31u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 32u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102324Wire10<EC>::GetDataMemberCount() const
  {
    return 4; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102324Wire10<EC>::GetMangledClassName() const
  {
    return "Ue_102324Wire10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102324Wire10<EC>::GetClassLength( ) const
  {
    return 32; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102324Wire10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102324Wire10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102324Wire10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102324Wire10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102324Wire10<EC>::Uf_6behave10) &Ue_102324Wire10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_102329210DataHolder10<EC>::Uf_8getColor11102321u) &Uq_102329210DataHolder10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102324Wire10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102324Wire10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102329210DataHolder10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102324Wire10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102324Wire10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102324Wire10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102324Wire10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

