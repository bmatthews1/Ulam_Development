/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_102294Bond10.h"
#include "Uq_10109211EventWindow10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_10168CellWall10<EC>::Ue_10168CellWall10() : UlamElement<EC>(MFM_UUID_FOR("Ue10168CellWall10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("C");  // figure this out later
    Element<EC>::SetName("CellWall"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_10168CellWall10<EC>::~Ue_10168CellWall10(){} //gcnl:NodeBlockClass.cpp:1743


//! CellWall.ulam:13:   Void behave(){
  template<class EC>
  void Ue_10168CellWall10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! CellWall.ulam:14:   	Bool alive = false;
    const u32 Uh_5tlreg42073 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uv_5alive(Uh_5tlreg42073); //gcnl:NodeVarDecl.cpp:1081

//! CellWall.ulam:16:   	for (SiteNum s = 1; s < 41; s++){
    {

//! CellWall.ulam:16:   	for (SiteNum s = 1; s < 41; s++){
      const u32 Uh_5tlreg42074 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42075 = _Int32ToUnsigned32(Uh_5tlreg42074, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42075); //gcnl:NodeVarDecl.cpp:1081

//! CellWall.ulam:16:   	for (SiteNum s = 1; s < 41; s++){
      while(true)
      {
        const u32 Uh_5tlreg42076 = 41; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42078 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42079 = _Unsigned32ToInt32(Uh_5tlreg42078, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42080 = _BinOpCompareLessThanInt32(Uh_5tlreg42079, Uh_5tlreg42076, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42080, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! CellWall.ulam:16:   	for (SiteNum s = 1; s < 41; s++){
        {

//! CellWall.ulam:17:   		if (ew[s] is Bond) alive = true;
          {

//! CellWall.ulam:17:   		if (ew[s] is Bond) alive = true;
            UlamRef<EC> Uh_3tur42082(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg42084 = Uv_1s.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval42085(Uh_5tlreg42084); //gcnl:Node.cpp:1142
            Ui_Ut_r102961a<EC> Uh_5tuval42087 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42082, Uh_5tlval42085); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg42088 = UlamClass<EC>::IsMethod(uc, Uh_5tuval42087.GetType(), &Uq_102294Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalIs.cpp:294
            if(_Bool32ToCbool(Uh_5tlreg42088, 1)) //gcnl:NodeControl.cpp:213
            {

//! CellWall.ulam:17:   		if (ew[s] is Bond) alive = true;
                const u32 Uh_5tlreg42089 = 1u; //gcnl:NodeTerminal.cpp:690
                Uv_5alive.write(Uh_5tlreg42089); //gcnl:Node.cpp:892
            } // end if
          }
        }

//! CellWall.ulam:16:   	for (SiteNum s = 1; s < 41; s++){
Ul_214endcontrolloop216:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! CellWall.ulam:16:   	for (SiteNum s = 1; s < 41; s++){
        const u32 Uh_5tlreg42091 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42092 = _Int32ToUnsigned32(Uh_5tlreg42091, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42094 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42095 = _BinOpAddUnsigned32(Uh_5tlreg42094, Uh_5tlreg42092, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1s.write(Uh_5tlreg42095); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! CellWall.ulam:20:   	if (!alive) ew[0] = Empty.instanceof;
    {

//! CellWall.ulam:20:   	if (!alive) ew[0] = Empty.instanceof;
      const u32 Uh_5tlreg42097 = Uv_5alive.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42098 = _LogicalBangBool32(Uh_5tlreg42097, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg42098, 1)) //gcnl:NodeControl.cpp:213
      {

//! CellWall.ulam:20:   	if (!alive) ew[0] = Empty.instanceof;
          Ui_Ue_10105Empty10<EC> Uh_5tuval42099; //gcnl:NodeInstanceof.cpp:113
          UlamRef<EC> Uh_3tur42101(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg42102 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42103 = _Int32ToUnsigned32(Uh_5tlreg42102, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval42104(Uh_5tlreg42103); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval42106 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42101, Uh_5tlval42104); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval42106.WriteAtom(Uh_5tuval42099.read()); //write into atomof ref //gcnl:Node.cpp:992
      } // end if
    }

  } // Uf_6behave


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10168CellWall10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Ut_10161u", "borderCount", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10168CellWall10<EC>::GetDataMemberCount() const
  {
    return 2; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10168CellWall10<EC>::GetMangledClassName() const
  {
    return "Ue_10168CellWall10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_10168CellWall10<EC>::GetClassLength( ) const
  {
    return 6; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_10168CellWall10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_10168CellWall10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_10168CellWall10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_10168CellWall10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_10168CellWall10<EC>::Uf_6behave10) &Ue_10168CellWall10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_10168CellWall10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_10168CellWall10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_10168CellWall10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_10168CellWall10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_10168CellWall10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_10168CellWall10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

