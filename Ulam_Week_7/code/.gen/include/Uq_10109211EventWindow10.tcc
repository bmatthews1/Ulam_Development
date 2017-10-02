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
    const u32 Uh_5tlreg41002 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41003(Uh_5tlreg41002); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval41005 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41003); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41006 = Uh_5tlval41005.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval41007(Uh_5tlreg41006); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval41009 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval41007); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tuval41009.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Ut_r102961a<EC> Uh_6turef41010(Uh_5tuval41009); //gcnl:Node.cpp:1510
    return (Uh_6turef41010); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_4aref



//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_5tlreg41011 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41014 = Uv_5index.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval41015(Uh_5tlreg41014); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41017 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval41015); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41018 = Uh_5tlval41017.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg41018, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      UlamRef<EC> Uh_3tur41020(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg41023 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval41024(Uh_5tlreg41023); //gcnl:Node.cpp:1142
      Ui_Ut_r102961a<EC> Uh_5tuval41026 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval41024); //gcnl:NodeFunctionCall.cpp:1043
      Ui_Ut_102961a<EC> Uh_5tuval41027(Uh_5tuval41026); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval41029 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur41020, Uh_5tuval41027); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41030 = Uh_5tlval41029.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg41011 = Uh_5tlreg41030; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41031(Uh_5tlreg41011); //gcnl:Node.cpp:1142
    return (Uh_5tlval41031); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg41032 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41035 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41036(Uh_5tlreg41035); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41038 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval41036); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41039 = Uh_5tlval41038.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg41039, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41043 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval41044(Uh_5tlreg41043); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval41046 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41044); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41047 = Uh_5tlval41046.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval41048(Uh_5tlreg41047); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval41050 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval41048); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41051 = Uh_5tlval41050.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg41032 = Uh_5tlreg41051; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41052(Uh_5tlreg41032); //gcnl:Node.cpp:1142
    return (Uh_5tlval41052); //gcnl:NodeReturnStatement.cpp:343

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
    const Ui_Ut_102321u<EC> Uh_5tlval41055 = THE_INSTANCE.Uf_919getRadius(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41056 = Uh_5tlval41055.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uv_3rad(Uh_5tlreg41056); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:69:     return md.getFirstIndex((Radius) (rad + 1u));
    UlamRef<EC> Uh_3tur41058(0u, 0u, Uv_2md, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41059 = 1u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41060 = _Unsigned32ToUnsigned32(Uh_5tlreg41059, 1, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41062 = Uv_3rad.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41063 = _BinOpAddUnsigned32(Uh_5tlreg41062, Uh_5tlreg41060, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41064 = _Unsigned32ToUnsigned32(Uh_5tlreg41063, 32, 3); //gcnl:NodeCast.cpp:748
    Ui_Ut_10131u<EC> Uh_5tlval41065(Uh_5tlreg41064); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval41067 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur41058, Uh_5tlval41065); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41068 = Uh_5tlval41067.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval41069(Uh_5tlreg41068); //gcnl:Node.cpp:1142
    return (Uh_5tlval41069); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217getAccessibleSize



//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u<EC> Uh_5tlval41072 = THE_INSTANCE.Uf_4size(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41073 = Uh_5tlval41072.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41075 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41076 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41075, Uh_5tlreg41073, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval41077(Uh_5tlreg41076); //gcnl:Node.cpp:1142
    return (Uh_5tlval41077); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg41081 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41082(Uh_5tlreg41081); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval41084 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41082); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41085 = Uh_5tlval41084.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval41086(Uh_5tlreg41085); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41088 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval41086); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41089 = Uh_5tlval41088.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41090(Uh_5tlreg41089); //gcnl:Node.cpp:1142
    return (Uh_5tlval41090); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
    u32 Uh_5tlreg41091 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const Ui_Ut_10161u<EC> Uh_5tlval41094 = THE_INSTANCE.Uf_9217getAccessibleSize(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41095 = Uh_5tlval41094.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41097 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41098 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg41097, Uh_5tlreg41095, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41098, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41101 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval41102(Uh_5tlreg41101); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval41104 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval41102); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41105 = Uh_5tlval41104.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg41091 = Uh_5tlreg41105; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41106(Uh_5tlreg41091); //gcnl:Node.cpp:1142
    return (Uh_5tlval41106); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg41107 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41110 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41111(Uh_5tlreg41110); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41113 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval41111); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41114 = Uh_5tlval41113.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg41114, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41118 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval41119(Uh_5tlreg41118); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval41121 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41119); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41122 = Uh_5tlval41121.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval41123(Uh_5tlreg41122); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval41125 = THE_INSTANCE.Uf_9212isAccessible(uc, ur, Uh_5tlval41123); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41126 = Uh_5tlval41125.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg41107 = Uh_5tlreg41126; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41127(Uh_5tlreg41107); //gcnl:Node.cpp:1142
    return (Uh_5tlval41127); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg41128 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41131 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41132(Uh_5tlreg41131); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41134 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval41132); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41135 = Uh_5tlval41134.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg41135, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41139 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval41140(Uh_5tlreg41139); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval41142 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41140); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41143 = Uh_5tlval41142.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval41144(Uh_5tlreg41143); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval41146 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval41144); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41147 = Uh_5tlval41146.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg41128 = Uh_5tlreg41147; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41148(Uh_5tlreg41128); //gcnl:Node.cpp:1142
    return (Uh_5tlval41148); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6isLive



//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_6coord1, Ui_Uq_102323C2D10<EC>& Uv_6coord2) const
  {

//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
    const u32 Uh_5tlreg41152 = Uv_6coord1.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41153(Uh_5tlreg41152); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval41155 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41153); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41156 = Uh_5tlval41155.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval41157(Uh_5tlreg41156); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41160 = Uv_6coord2.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41161(Uh_5tlreg41160); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval41163 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval41161); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41164 = Uh_5tlval41163.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval41165(Uh_5tlreg41164); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41167 = THE_INSTANCE.Uf_4swap(uc, ur, Uh_5tlval41157, Uh_5tlval41165); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41168 = Uh_5tlval41167.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41169(Uh_5tlreg41168); //gcnl:Node.cpp:1142
    return (Uh_5tlval41169); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4swap



//! EventWindow.ulam:106:   C2D getCoordRaw(SiteNum siteNum) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_10109211EventWindow10<EC>::Uf_9211getCoordRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const
  {

//! EventWindow.ulam:107:     Symmetry old = changeSymmetry(cSYMMETRY_000L);
    const u32 Uh_5tlreg41171 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10131u<EC> Uh_5tlval41172(Uh_5tlreg41171); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval41174 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval41172); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41175 = Uh_5tlval41174.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10131u<EC> Uv_3old(Uh_5tlreg41175); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:108:     C2D raw = getCoord(siteNum);
    const u32 Uh_5tlreg41178 = Uv_7siteNum.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval41179(Uh_5tlreg41178); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41181 = THE_INSTANCE.Uf_8getCoord(uc, ur, Uh_5tlval41179); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_3raw(Uh_5tlval41181); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:109:     changeSymmetry(old);
    const u32 Uh_5tlreg41184 = Uv_3old.read(); //gcnl:Node.cpp:698
    Ui_Ut_10131u<EC> Uh_5tlval41185(Uh_5tlreg41184); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval41187 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval41185); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41188 = Uh_5tlval41187.read(); //gcnl:Node.cpp:1170

//! EventWindow.ulam:110:     return raw;
    const u32 Uh_5tlreg41190 = Uv_3raw.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41191(Uh_5tlreg41190); //gcnl:Node.cpp:1142
    return (Uh_5tlval41191); //gcnl:NodeReturnStatement.cpp:343

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

