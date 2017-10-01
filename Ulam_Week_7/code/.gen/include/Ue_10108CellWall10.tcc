/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_102244Bond10.h"
#include "Uq_10109211EventWindow10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_10108CellWall10<EC>::Ue_10108CellWall10() : UlamElement<EC>(MFM_UUID_FOR("Ue10108CellWall10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("C");  // figure this out later
    Element<EC>::SetName("CellWall"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_10108CellWall10<EC>::~Ue_10108CellWall10(){} //gcnl:NodeBlockClass.cpp:1743


//! CellWall.ulam:10:   Void behave(){
  template<class EC>
  void Ue_10108CellWall10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! CellWall.ulam:11:   	Bool alive = false;
    const u32 Uh_5tlreg41903 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uv_5alive(Uh_5tlreg41903); //gcnl:NodeVarDecl.cpp:1081

//! CellWall.ulam:12:   	for (SiteNum s = 1; s < 41; s++){
    {

//! CellWall.ulam:12:   	for (SiteNum s = 1; s < 41; s++){
      const u32 Uh_5tlreg41904 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41905 = _Int32ToUnsigned32(Uh_5tlreg41904, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg41905); //gcnl:NodeVarDecl.cpp:1081

//! CellWall.ulam:12:   	for (SiteNum s = 1; s < 41; s++){
      while(true)
      {
        const u32 Uh_5tlreg41906 = 41; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41908 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41909 = _Unsigned32ToInt32(Uh_5tlreg41908, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41910 = _BinOpCompareLessThanInt32(Uh_5tlreg41909, Uh_5tlreg41906, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41910, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! CellWall.ulam:12:   	for (SiteNum s = 1; s < 41; s++){
        {

//! CellWall.ulam:13:   		if (ew[s] is Bond) alive = true;
          {

//! CellWall.ulam:13:   		if (ew[s] is Bond) alive = true;
            UlamRef<EC> Uh_3tur41912(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg41914 = Uv_1s.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval41915(Uh_5tlreg41914); //gcnl:Node.cpp:1142
            Ui_Ut_r102961a<EC> Uh_5tuval41917 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41912, Uh_5tlval41915); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg41918 = UlamClass<EC>::IsMethod(uc, Uh_5tuval41917.GetType(), &Uq_102244Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalIs.cpp:294
            if(_Bool32ToCbool(Uh_5tlreg41918, 1)) //gcnl:NodeControl.cpp:213
            {

//! CellWall.ulam:13:   		if (ew[s] is Bond) alive = true;
                const u32 Uh_5tlreg41919 = 1u; //gcnl:NodeTerminal.cpp:690
                Uv_5alive.write(Uh_5tlreg41919); //gcnl:Node.cpp:892
            } // end if
          }
        }

//! CellWall.ulam:12:   	for (SiteNum s = 1; s < 41; s++){
Ul_214endcontrolloop214:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! CellWall.ulam:12:   	for (SiteNum s = 1; s < 41; s++){
        const u32 Uh_5tlreg41921 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41922 = _Int32ToUnsigned32(Uh_5tlreg41921, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41924 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41925 = _BinOpAddUnsigned32(Uh_5tlreg41924, Uh_5tlreg41922, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1s.write(Uh_5tlreg41925); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! CellWall.ulam:16:   	if (!alive) ew[0] = Empty.instanceof;
    {

//! CellWall.ulam:16:   	if (!alive) ew[0] = Empty.instanceof;
      const u32 Uh_5tlreg41927 = Uv_5alive.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41928 = _LogicalBangBool32(Uh_5tlreg41927, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg41928, 1)) //gcnl:NodeControl.cpp:213
      {

//! CellWall.ulam:16:   	if (!alive) ew[0] = Empty.instanceof;
          Ui_Ue_10105Empty10<EC> Uh_5tuval41929; //gcnl:NodeInstanceof.cpp:113
          UlamRef<EC> Uh_3tur41931(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg41932 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41933 = _Int32ToUnsigned32(Uh_5tlreg41932, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval41934(Uh_5tlreg41933); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval41936 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41931, Uh_5tlval41934); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval41936.WriteAtom(Uh_5tuval41929.read()); //write into atomof ref //gcnl:Node.cpp:992
      } // end if
    }

  } // Uf_6behave


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10108CellWall10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10108CellWall10<EC>::GetDataMemberCount() const
  {
    return 1; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10108CellWall10<EC>::GetMangledClassName() const
  {
    return "Ue_10108CellWall10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_10108CellWall10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_10108CellWall10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_10108CellWall10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_10108CellWall10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_10108CellWall10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_10108CellWall10<EC>::Uf_6behave10) &Ue_10108CellWall10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_10108CellWall10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_10108CellWall10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_10108CellWall10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_10108CellWall10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_10108CellWall10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_10108CellWall10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

