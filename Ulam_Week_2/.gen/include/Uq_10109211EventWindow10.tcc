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
    const u32 Uh_5tlreg3388 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3389(Uh_5tlreg3388); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3391 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3389); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3392 = Uh_5tlval3391.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3393(Uh_5tlreg3392); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval3395 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3393); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tuval3395.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Ut_r102961a<EC> Uh_6turef3396(Uh_5tuval3395); //gcnl:Node.cpp:1510
    return (Uh_6turef3396); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_4aref



//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_5tlreg3397 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3400 = Uv_5index.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3401(Uh_5tlreg3400); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3403 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3401); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3404 = Uh_5tlval3403.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3404, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      UlamRef<EC> Uh_3tur3406(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg3409 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3410(Uh_5tlreg3409); //gcnl:Node.cpp:1142
      Ui_Ut_r102961a<EC> Uh_5tuval3412 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3410); //gcnl:NodeFunctionCall.cpp:1043
      Ui_Ut_102961a<EC> Uh_5tuval3413(Uh_5tuval3412); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3415 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur3406, Uh_5tuval3413); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3416 = Uh_5tlval3415.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3397 = Uh_5tlreg3416; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3417(Uh_5tlreg3397); //gcnl:Node.cpp:1142
    return (Uh_5tlval3417); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3418 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3421 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3422(Uh_5tlreg3421); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3424 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3422); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3425 = Uh_5tlval3424.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3425, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3429 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3430(Uh_5tlreg3429); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3432 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3430); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3433 = Uh_5tlval3432.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3434(Uh_5tlreg3433); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3436 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3434); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3437 = Uh_5tlval3436.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3418 = Uh_5tlreg3437; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3438(Uh_5tlreg3418); //gcnl:Node.cpp:1142
    return (Uh_5tlval3438); //gcnl:NodeReturnStatement.cpp:343

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
    const Ui_Ut_102321u<EC> Uh_5tlval3441 = THE_INSTANCE.Uf_919getRadius(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3442 = Uh_5tlval3441.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uv_3rad(Uh_5tlreg3442); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:69:     return md.getFirstIndex((Radius) (rad + 1u));
    UlamRef<EC> Uh_3tur3444(0u, 0u, Uv_2md, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3445 = 1u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3446 = _Unsigned32ToUnsigned32(Uh_5tlreg3445, 1, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3448 = Uv_3rad.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3449 = _BinOpAddUnsigned32(Uh_5tlreg3448, Uh_5tlreg3446, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3450 = _Unsigned32ToUnsigned32(Uh_5tlreg3449, 32, 3); //gcnl:NodeCast.cpp:748
    Ui_Ut_10131u<EC> Uh_5tlval3451(Uh_5tlreg3450); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3453 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur3444, Uh_5tlval3451); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3454 = Uh_5tlval3453.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3455(Uh_5tlreg3454); //gcnl:Node.cpp:1142
    return (Uh_5tlval3455); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217getAccessibleSize



//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u<EC> Uh_5tlval3458 = THE_INSTANCE.Uf_4size(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3459 = Uh_5tlval3458.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3461 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3462 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3461, Uh_5tlreg3459, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval3463(Uh_5tlreg3462); //gcnl:Node.cpp:1142
    return (Uh_5tlval3463); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg3467 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3468(Uh_5tlreg3467); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3470 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3468); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3471 = Uh_5tlval3470.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3472(Uh_5tlreg3471); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3474 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3472); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3475 = Uh_5tlval3474.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3476(Uh_5tlreg3475); //gcnl:Node.cpp:1142
    return (Uh_5tlval3476); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
    u32 Uh_5tlreg3477 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const Ui_Ut_10161u<EC> Uh_5tlval3480 = THE_INSTANCE.Uf_9217getAccessibleSize(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3481 = Uh_5tlval3480.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3483 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3484 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3483, Uh_5tlreg3481, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3484, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3487 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3488(Uh_5tlreg3487); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3490 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3488); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3491 = Uh_5tlval3490.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3477 = Uh_5tlreg3491; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3492(Uh_5tlreg3477); //gcnl:Node.cpp:1142
    return (Uh_5tlval3492); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3493 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3496 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3497(Uh_5tlreg3496); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3499 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3497); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3500 = Uh_5tlval3499.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3500, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3504 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3505(Uh_5tlreg3504); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3507 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3505); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3508 = Uh_5tlval3507.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3509(Uh_5tlreg3508); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3511 = THE_INSTANCE.Uf_9212isAccessible(uc, ur, Uh_5tlval3509); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3512 = Uh_5tlval3511.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3493 = Uh_5tlreg3512; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3513(Uh_5tlreg3493); //gcnl:Node.cpp:1142
    return (Uh_5tlval3513); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3514 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3517 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3518(Uh_5tlreg3517); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3520 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3518); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3521 = Uh_5tlval3520.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3521, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3525 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3526(Uh_5tlreg3525); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3528 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3526); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3529 = Uh_5tlval3528.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3530(Uh_5tlreg3529); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3532 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3530); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3533 = Uh_5tlval3532.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3514 = Uh_5tlreg3533; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3534(Uh_5tlreg3514); //gcnl:Node.cpp:1142
    return (Uh_5tlval3534); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6isLive



//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_6coord1, Ui_Uq_102323C2D10<EC>& Uv_6coord2) const
  {

//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
    const u32 Uh_5tlreg3538 = Uv_6coord1.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3539(Uh_5tlreg3538); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3541 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3539); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3542 = Uh_5tlval3541.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3543(Uh_5tlreg3542); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3546 = Uv_6coord2.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3547(Uh_5tlreg3546); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3549 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3547); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3550 = Uh_5tlval3549.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3551(Uh_5tlreg3550); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3553 = THE_INSTANCE.Uf_4swap(uc, ur, Uh_5tlval3543, Uh_5tlval3551); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3554 = Uh_5tlval3553.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3555(Uh_5tlreg3554); //gcnl:Node.cpp:1142
    return (Uh_5tlval3555); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4swap



//! EventWindow.ulam:106:   C2D getCoordRaw(SiteNum siteNum) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_10109211EventWindow10<EC>::Uf_9211getCoordRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const
  {

//! EventWindow.ulam:107:     Symmetry old = changeSymmetry(cSYMMETRY_000L);
    const u32 Uh_5tlreg3557 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10131u<EC> Uh_5tlval3558(Uh_5tlreg3557); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval3560 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3558); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3561 = Uh_5tlval3560.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10131u<EC> Uv_3old(Uh_5tlreg3561); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:108:     C2D raw = getCoord(siteNum);
    const u32 Uh_5tlreg3564 = Uv_7siteNum.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3565(Uh_5tlreg3564); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3567 = THE_INSTANCE.Uf_8getCoord(uc, ur, Uh_5tlval3565); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_3raw(Uh_5tlval3567); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:109:     changeSymmetry(old);
    const u32 Uh_5tlreg3570 = Uv_3old.read(); //gcnl:Node.cpp:698
    Ui_Ut_10131u<EC> Uh_5tlval3571(Uh_5tlreg3570); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval3573 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3571); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3574 = Uh_5tlval3573.read(); //gcnl:Node.cpp:1170

//! EventWindow.ulam:110:     return raw;
    const u32 Uh_5tlreg3576 = Uv_3raw.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3577(Uh_5tlreg3576); //gcnl:Node.cpp:1142
    return (Uh_5tlval3577); //gcnl:NodeReturnStatement.cpp:343

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

