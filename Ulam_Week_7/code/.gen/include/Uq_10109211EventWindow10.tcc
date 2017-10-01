/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_102323C2D10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10105MDist10.h"

namespace MFM{

  template<class EC>
  Uq_10109211EventWindow10<EC>::Uq_10109211EventWindow10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109211EventWindow10", 0))
  { }

  template<class EC>
  Uq_10109211EventWindow10<EC>::~Uq_10109211EventWindow10(){} //gcnl:NodeBlockClass.cpp:1784


//! EventWindow.ulam:73:   Atom& aref(C2D coord) { return aref(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_r102961a<EC> Uq_10109211EventWindow10<EC>::Uf_4aref(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:73:   Atom& aref(C2D coord) { return aref(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg3931 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3932(Uh_5tlreg3931); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3934 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3932); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3935 = Uh_5tlval3934.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3936(Uh_5tlreg3935); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval3938 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3936); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tuval3938.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Ut_r102961a<EC> Uh_6turef3939(Uh_5tuval3938); //gcnl:Node.cpp:1510
    return (Uh_6turef3939); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_4aref



//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_5tlreg3940 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3943 = Uv_5index.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3944(Uh_5tlreg3943); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3946 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3944); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3947 = Uh_5tlval3946.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3947, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      UlamRef<EC> Uh_3tur3949(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg3952 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3953(Uh_5tlreg3952); //gcnl:Node.cpp:1142
      Ui_Ut_r102961a<EC> Uh_5tuval3955 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3953); //gcnl:NodeFunctionCall.cpp:1043
      Ui_Ut_102961a<EC> Uh_5tuval3956(Uh_5tuval3955); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3958 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur3949, Uh_5tuval3956); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3959 = Uh_5tlval3958.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3940 = Uh_5tlreg3959; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3960(Uh_5tlreg3940); //gcnl:Node.cpp:1142
    return (Uh_5tlval3960); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3961 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3964 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3965(Uh_5tlreg3964); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3967 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3965); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3968 = Uh_5tlval3967.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3968, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3972 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3973(Uh_5tlreg3972); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3975 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3973); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3976 = Uh_5tlval3975.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3977(Uh_5tlreg3976); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3979 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3977); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3980 = Uh_5tlval3979.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3961 = Uh_5tlreg3980; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3981(Uh_5tlreg3961); //gcnl:Node.cpp:1142
    return (Uh_5tlval3981); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:64:   SiteNum getAccessibleSize() {
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211EventWindow10<EC>::Uf_9217getAccessibleSize(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EventWindow.ulam:65:     MDist md;
    Ui_Uq_10105MDist10<EC> Uv_2md; //gcnl:NodeVarDecl.cpp:1118

//! EventWindow.ulam:66:     typedef MDist.Radius Radius;

//! EventWindow.ulam:67:     typedef MDist.Index Index;

//! EventWindow.ulam:68:     Unsigned rad = getRadius();
    const Ui_Ut_102321u<EC> Uh_5tlval3984 = THE_INSTANCE.Uf_919getRadius(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3985 = Uh_5tlval3984.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uv_3rad(Uh_5tlreg3985); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:69:     return md.getFirstIndex((Radius) (rad + 1u));
    UlamRef<EC> Uh_3tur3987(0u, 0u, Uv_2md, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3988 = 1u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3989 = _Unsigned32ToUnsigned32(Uh_5tlreg3988, 1, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3991 = Uv_3rad.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3992 = _BinOpAddUnsigned32(Uh_5tlreg3991, Uh_5tlreg3989, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3993 = _Unsigned32ToUnsigned32(Uh_5tlreg3992, 32, 3); //gcnl:NodeCast.cpp:748
    Ui_Ut_10131u<EC> Uh_5tlval3994(Uh_5tlreg3993); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3996 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur3987, Uh_5tlval3994); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3997 = Uh_5tlval3996.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3998(Uh_5tlreg3997); //gcnl:Node.cpp:1142
    return (Uh_5tlval3998); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217getAccessibleSize



//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u<EC> Uh_5tlval41001 = THE_INSTANCE.Uf_4size(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41002 = Uh_5tlval41001.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41004 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41005 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41004, Uh_5tlreg41002, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval41006(Uh_5tlreg41005); //gcnl:Node.cpp:1142
    return (Uh_5tlval41006); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg41010 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41011(Uh_5tlreg41010); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval41013 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41011); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41014 = Uh_5tlval41013.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval41015(Uh_5tlreg41014); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41017 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval41015); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41018 = Uh_5tlval41017.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41019(Uh_5tlreg41018); //gcnl:Node.cpp:1142
    return (Uh_5tlval41019); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
    u32 Uh_5tlreg41020 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const Ui_Ut_10161u<EC> Uh_5tlval41023 = THE_INSTANCE.Uf_9217getAccessibleSize(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41024 = Uh_5tlval41023.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41026 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41027 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41026, Uh_5tlreg41024, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41027, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41030 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval41031(Uh_5tlreg41030); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval41033 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval41031); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41034 = Uh_5tlval41033.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg41020 = Uh_5tlreg41034; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41035(Uh_5tlreg41020); //gcnl:Node.cpp:1142
    return (Uh_5tlval41035); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg41036 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41039 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41040(Uh_5tlreg41039); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41042 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval41040); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41043 = Uh_5tlval41042.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg41043, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41047 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval41048(Uh_5tlreg41047); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval41050 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41048); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41051 = Uh_5tlval41050.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval41052(Uh_5tlreg41051); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval41054 = THE_INSTANCE.Uf_9212isAccessible(uc, ur, Uh_5tlval41052); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41055 = Uh_5tlval41054.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg41036 = Uh_5tlreg41055; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41056(Uh_5tlreg41036); //gcnl:Node.cpp:1142
    return (Uh_5tlval41056); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg41057 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41060 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41061(Uh_5tlreg41060); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41063 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval41061); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41064 = Uh_5tlval41063.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg41064, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41068 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval41069(Uh_5tlreg41068); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval41071 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41069); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41072 = Uh_5tlval41071.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval41073(Uh_5tlreg41072); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval41075 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval41073); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41076 = Uh_5tlval41075.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg41057 = Uh_5tlreg41076; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41077(Uh_5tlreg41057); //gcnl:Node.cpp:1142
    return (Uh_5tlval41077); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6isLive



//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_6coord1, Ui_Uq_102323C2D10<EC>& Uv_6coord2) const
  {

//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
    const u32 Uh_5tlreg41081 = Uv_6coord1.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41082(Uh_5tlreg41081); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval41084 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41082); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41085 = Uh_5tlval41084.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval41086(Uh_5tlreg41085); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41089 = Uv_6coord2.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41090(Uh_5tlreg41089); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval41092 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41090); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41093 = Uh_5tlval41092.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval41094(Uh_5tlreg41093); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41096 = THE_INSTANCE.Uf_4swap(uc, ur, Uh_5tlval41086, Uh_5tlval41094); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41097 = Uh_5tlval41096.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41098(Uh_5tlreg41097); //gcnl:Node.cpp:1142
    return (Uh_5tlval41098); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4swap



//! EventWindow.ulam:106:   C2D getCoordRaw(SiteNum siteNum) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_10109211EventWindow10<EC>::Uf_9211getCoordRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const
  {

//! EventWindow.ulam:107:     Symmetry old = changeSymmetry(cSYMMETRY_000L);
    const u32 Uh_5tlreg41100 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10131u<EC> Uh_5tlval41101(Uh_5tlreg41100); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval41103 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval41101); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41104 = Uh_5tlval41103.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10131u<EC> Uv_3old(Uh_5tlreg41104); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:108:     C2D raw = getCoord(siteNum);
    const u32 Uh_5tlreg41107 = Uv_7siteNum.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval41108(Uh_5tlreg41107); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41110 = THE_INSTANCE.Uf_8getCoord(uc, ur, Uh_5tlval41108); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_3raw(Uh_5tlval41110); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:109:     changeSymmetry(old);
    const u32 Uh_5tlreg41113 = Uv_3old.read(); //gcnl:Node.cpp:698
    Ui_Ut_10131u<EC> Uh_5tlval41114(Uh_5tlreg41113); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval41116 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval41114); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41117 = Uh_5tlval41116.read(); //gcnl:Node.cpp:1170

//! EventWindow.ulam:110:     return raw;
    const u32 Uh_5tlreg41119 = Uv_3raw.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41120(Uh_5tlreg41119); //gcnl:Node.cpp:1142
    return (Uh_5tlval41120); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211getCoordRaw


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10109211EventWindow10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10109211EventWindow10<EC>::GetDataMemberCount() const
  {
    return 1; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10109211EventWindow10<EC>::GetMangledClassName() const
  {
    return "Uq_10109211EventWindow10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10109211EventWindow10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10109211EventWindow10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10109211EventWindow10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_10109211EventWindow10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10109211EventWindow10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_10109211EventWindow10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_10109211EventWindow10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109211EventWindow10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

