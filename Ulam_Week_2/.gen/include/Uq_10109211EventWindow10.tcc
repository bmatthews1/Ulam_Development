/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10105MDist10.h"
#include "Uq_102323C2D10.h"

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
    const u32 Uh_5tlreg3419 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3420(Uh_5tlreg3419); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3422 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3420); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3423 = Uh_5tlval3422.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3424(Uh_5tlreg3423); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval3426 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3424); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tuval3426.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Ut_r102961a<EC> Uh_6turef3427(Uh_5tuval3426); //gcnl:Node.cpp:1510
    return (Uh_6turef3427); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_4aref



//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_5tlreg3428 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3431 = Uv_5index.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3432(Uh_5tlreg3431); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3434 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3432); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3435 = Uh_5tlval3434.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3435, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      UlamRef<EC> Uh_3tur3437(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg3440 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3441(Uh_5tlreg3440); //gcnl:Node.cpp:1142
      Ui_Ut_r102961a<EC> Uh_5tuval3443 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3441); //gcnl:NodeFunctionCall.cpp:1043
      Ui_Ut_102961a<EC> Uh_5tuval3444(Uh_5tuval3443); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3446 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur3437, Uh_5tuval3444); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3447 = Uh_5tlval3446.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3428 = Uh_5tlreg3447; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3448(Uh_5tlreg3428); //gcnl:Node.cpp:1142
    return (Uh_5tlval3448); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3449 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3452 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3453(Uh_5tlreg3452); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3455 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3453); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3456 = Uh_5tlval3455.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3456, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3460 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3461(Uh_5tlreg3460); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3463 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3461); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3464 = Uh_5tlval3463.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3465(Uh_5tlreg3464); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3467 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3465); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3468 = Uh_5tlval3467.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3449 = Uh_5tlreg3468; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3469(Uh_5tlreg3449); //gcnl:Node.cpp:1142
    return (Uh_5tlval3469); //gcnl:NodeReturnStatement.cpp:343

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
    const Ui_Ut_102321u<EC> Uh_5tlval3472 = THE_INSTANCE.Uf_919getRadius(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3473 = Uh_5tlval3472.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uv_3rad(Uh_5tlreg3473); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:69:     return md.getFirstIndex((Radius) (rad + 1u));
    UlamRef<EC> Uh_3tur3475(0u, 0u, Uv_2md, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3476 = 1u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3477 = _Unsigned32ToUnsigned32(Uh_5tlreg3476, 1, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3479 = Uv_3rad.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3480 = _BinOpAddUnsigned32(Uh_5tlreg3479, Uh_5tlreg3477, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3481 = _Unsigned32ToUnsigned32(Uh_5tlreg3480, 32, 3); //gcnl:NodeCast.cpp:748
    Ui_Ut_10131u<EC> Uh_5tlval3482(Uh_5tlreg3481); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3484 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur3475, Uh_5tlval3482); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3485 = Uh_5tlval3484.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3486(Uh_5tlreg3485); //gcnl:Node.cpp:1142
    return (Uh_5tlval3486); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217getAccessibleSize



//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u<EC> Uh_5tlval3489 = THE_INSTANCE.Uf_4size(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3490 = Uh_5tlval3489.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3492 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3493 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3492, Uh_5tlreg3490, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval3494(Uh_5tlreg3493); //gcnl:Node.cpp:1142
    return (Uh_5tlval3494); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg3498 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3499(Uh_5tlreg3498); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3501 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3499); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3502 = Uh_5tlval3501.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3503(Uh_5tlreg3502); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3505 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3503); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3506 = Uh_5tlval3505.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3507(Uh_5tlreg3506); //gcnl:Node.cpp:1142
    return (Uh_5tlval3507); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
    u32 Uh_5tlreg3508 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const Ui_Ut_10161u<EC> Uh_5tlval3511 = THE_INSTANCE.Uf_9217getAccessibleSize(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3512 = Uh_5tlval3511.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3514 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3515 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3514, Uh_5tlreg3512, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3515, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3518 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3519(Uh_5tlreg3518); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3521 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3519); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3522 = Uh_5tlval3521.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3508 = Uh_5tlreg3522; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3523(Uh_5tlreg3508); //gcnl:Node.cpp:1142
    return (Uh_5tlval3523); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3524 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3527 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3528(Uh_5tlreg3527); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3530 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3528); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3531 = Uh_5tlval3530.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3531, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3535 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3536(Uh_5tlreg3535); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3538 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3536); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3539 = Uh_5tlval3538.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3540(Uh_5tlreg3539); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3542 = THE_INSTANCE.Uf_9212isAccessible(uc, ur, Uh_5tlval3540); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3543 = Uh_5tlval3542.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3524 = Uh_5tlreg3543; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3544(Uh_5tlreg3524); //gcnl:Node.cpp:1142
    return (Uh_5tlval3544); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3545 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3548 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3549(Uh_5tlreg3548); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3551 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3549); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3552 = Uh_5tlval3551.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3552, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3556 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3557(Uh_5tlreg3556); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3559 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3557); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3560 = Uh_5tlval3559.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3561(Uh_5tlreg3560); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3563 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3561); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3564 = Uh_5tlval3563.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3545 = Uh_5tlreg3564; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3565(Uh_5tlreg3545); //gcnl:Node.cpp:1142
    return (Uh_5tlval3565); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6isLive



//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_6coord1, Ui_Uq_102323C2D10<EC>& Uv_6coord2) const
  {

//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
    const u32 Uh_5tlreg3569 = Uv_6coord1.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3570(Uh_5tlreg3569); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3572 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3570); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3573 = Uh_5tlval3572.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3574(Uh_5tlreg3573); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3577 = Uv_6coord2.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3578(Uh_5tlreg3577); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3580 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3578); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3581 = Uh_5tlval3580.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3582(Uh_5tlreg3581); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3584 = THE_INSTANCE.Uf_4swap(uc, ur, Uh_5tlval3574, Uh_5tlval3582); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3585 = Uh_5tlval3584.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3586(Uh_5tlreg3585); //gcnl:Node.cpp:1142
    return (Uh_5tlval3586); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4swap



//! EventWindow.ulam:106:   C2D getCoordRaw(SiteNum siteNum) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_10109211EventWindow10<EC>::Uf_9211getCoordRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const
  {

//! EventWindow.ulam:107:     Symmetry old = changeSymmetry(cSYMMETRY_000L);
    const u32 Uh_5tlreg3588 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10131u<EC> Uh_5tlval3589(Uh_5tlreg3588); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval3591 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3589); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3592 = Uh_5tlval3591.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10131u<EC> Uv_3old(Uh_5tlreg3592); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:108:     C2D raw = getCoord(siteNum);
    const u32 Uh_5tlreg3595 = Uv_7siteNum.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3596(Uh_5tlreg3595); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3598 = THE_INSTANCE.Uf_8getCoord(uc, ur, Uh_5tlval3596); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_3raw(Uh_5tlval3598); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:109:     changeSymmetry(old);
    const u32 Uh_5tlreg3601 = Uv_3old.read(); //gcnl:Node.cpp:698
    Ui_Ut_10131u<EC> Uh_5tlval3602(Uh_5tlreg3601); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval3604 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3602); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3605 = Uh_5tlval3604.read(); //gcnl:Node.cpp:1170

//! EventWindow.ulam:110:     return raw;
    const u32 Uh_5tlreg3607 = Uv_3raw.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3608(Uh_5tlreg3607); //gcnl:Node.cpp:1142
    return (Uh_5tlval3608); //gcnl:NodeReturnStatement.cpp:343

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

