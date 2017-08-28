/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_102323C2D10.h"
#include "Ue_10105Empty10.h"
#include "Uq_1010919AtomUtils10.h"
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
    const u32 Uh_5tlreg3344 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3345(Uh_5tlreg3344); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3347 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3345); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3348 = Uh_5tlval3347.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3349(Uh_5tlreg3348); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval3351 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3349); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tuval3351.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Ut_r102961a<EC> Uh_6turef3352(Uh_5tuval3351); //gcnl:Node.cpp:1510
    return (Uh_6turef3352); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_4aref



//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_5tlreg3353 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3356 = Uv_5index.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3357(Uh_5tlreg3356); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3359 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3357); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3360 = Uh_5tlval3359.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3360, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      UlamRef<EC> Uh_3tur3362(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg3365 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3366(Uh_5tlreg3365); //gcnl:Node.cpp:1142
      Ui_Ut_r102961a<EC> Uh_5tuval3368 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3366); //gcnl:NodeFunctionCall.cpp:1043
      Ui_Ut_102961a<EC> Uh_5tuval3369(Uh_5tuval3368); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3371 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur3362, Uh_5tuval3369); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3372 = Uh_5tlval3371.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3353 = Uh_5tlreg3372; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3373(Uh_5tlreg3353); //gcnl:Node.cpp:1142
    return (Uh_5tlval3373); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3374 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3377 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3378(Uh_5tlreg3377); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3380 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3378); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3381 = Uh_5tlval3380.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3381, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3385 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3386(Uh_5tlreg3385); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3388 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3386); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3389 = Uh_5tlval3388.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3390(Uh_5tlreg3389); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3392 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3390); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3393 = Uh_5tlval3392.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3374 = Uh_5tlreg3393; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3394(Uh_5tlreg3374); //gcnl:Node.cpp:1142
    return (Uh_5tlval3394); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_6coord1, Ui_Uq_102323C2D10<EC>& Uv_6coord2) const
  {

//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
    const u32 Uh_5tlreg3398 = Uv_6coord1.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3399(Uh_5tlreg3398); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3401 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3399); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3402 = Uh_5tlval3401.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3403(Uh_5tlreg3402); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3406 = Uv_6coord2.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3407(Uh_5tlreg3406); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3409 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3407); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3410 = Uh_5tlval3409.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3411(Uh_5tlreg3410); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3413 = THE_INSTANCE.Uf_4swap(uc, ur, Uh_5tlval3403, Uh_5tlval3411); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3414 = Uh_5tlval3413.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3415(Uh_5tlreg3414); //gcnl:Node.cpp:1142
    return (Uh_5tlval3415); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4swap



//! EventWindow.ulam:64:   SiteNum getAccessibleSize() {
  template<class EC>
  Ui_Ut_10161u<EC> Uq_10109211EventWindow10<EC>::Uf_9217getAccessibleSize(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! EventWindow.ulam:65:     MDist md;
    Ui_Uq_10105MDist10<EC> Uv_2md; //gcnl:NodeVarDecl.cpp:1118

//! EventWindow.ulam:66:     typedef MDist.Radius Radius;

//! EventWindow.ulam:67:     typedef MDist.Index Index;

//! EventWindow.ulam:68:     Unsigned rad = getRadius();
    const Ui_Ut_102321u<EC> Uh_5tlval3418 = THE_INSTANCE.Uf_919getRadius(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3419 = Uh_5tlval3418.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uv_3rad(Uh_5tlreg3419); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:69:     return md.getFirstIndex((Radius) (rad + 1u));
    UlamRef<EC> Uh_3tur3421(0u, 0u, Uv_2md, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3422 = 1u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3423 = _Unsigned32ToUnsigned32(Uh_5tlreg3422, 1, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3425 = Uv_3rad.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3426 = _BinOpAddUnsigned32(Uh_5tlreg3425, Uh_5tlreg3423, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3427 = _Unsigned32ToUnsigned32(Uh_5tlreg3426, 32, 3); //gcnl:NodeCast.cpp:748
    Ui_Ut_10131u<EC> Uh_5tlval3428(Uh_5tlreg3427); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3430 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur3421, Uh_5tlval3428); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3431 = Uh_5tlval3430.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3432(Uh_5tlreg3431); //gcnl:Node.cpp:1142
    return (Uh_5tlval3432); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217getAccessibleSize



//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u<EC> Uh_5tlval3435 = THE_INSTANCE.Uf_4size(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3436 = Uh_5tlval3435.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3438 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3439 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3438, Uh_5tlreg3436, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval3440(Uh_5tlreg3439); //gcnl:Node.cpp:1142
    return (Uh_5tlval3440); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg3444 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3445(Uh_5tlreg3444); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3447 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3445); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3448 = Uh_5tlval3447.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3449(Uh_5tlreg3448); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3451 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3449); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3452 = Uh_5tlval3451.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3453(Uh_5tlreg3452); //gcnl:Node.cpp:1142
    return (Uh_5tlval3453); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
    u32 Uh_5tlreg3454 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const Ui_Ut_10161u<EC> Uh_5tlval3457 = THE_INSTANCE.Uf_9217getAccessibleSize(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3458 = Uh_5tlval3457.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3460 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3461 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3460, Uh_5tlreg3458, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3461, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3464 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3465(Uh_5tlreg3464); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3467 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3465); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3468 = Uh_5tlval3467.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3454 = Uh_5tlreg3468; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3469(Uh_5tlreg3454); //gcnl:Node.cpp:1142
    return (Uh_5tlval3469); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3470 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3473 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3474(Uh_5tlreg3473); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3476 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3474); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3477 = Uh_5tlval3476.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3477, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3481 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3482(Uh_5tlreg3481); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3484 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3482); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3485 = Uh_5tlval3484.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3486(Uh_5tlreg3485); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3488 = THE_INSTANCE.Uf_9212isAccessible(uc, ur, Uh_5tlval3486); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3489 = Uh_5tlval3488.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3470 = Uh_5tlreg3489; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3490(Uh_5tlreg3470); //gcnl:Node.cpp:1142
    return (Uh_5tlval3490); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3491 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3494 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3495(Uh_5tlreg3494); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3497 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3495); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3498 = Uh_5tlval3497.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3498, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3502 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3503(Uh_5tlreg3502); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3505 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3503); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3506 = Uh_5tlval3505.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3507(Uh_5tlreg3506); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3509 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3507); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3510 = Uh_5tlval3509.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3491 = Uh_5tlreg3510; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3511(Uh_5tlreg3491); //gcnl:Node.cpp:1142
    return (Uh_5tlval3511); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6isLive



//! EventWindow.ulam:106:   C2D getCoordRaw(SiteNum siteNum) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_10109211EventWindow10<EC>::Uf_9211getCoordRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const
  {

//! EventWindow.ulam:107:     Symmetry old = changeSymmetry(cSYMMETRY_000L);
    const u32 Uh_5tlreg3513 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10131u<EC> Uh_5tlval3514(Uh_5tlreg3513); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval3516 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3514); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3517 = Uh_5tlval3516.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10131u<EC> Uv_3old(Uh_5tlreg3517); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:108:     C2D raw = getCoord(siteNum);
    const u32 Uh_5tlreg3520 = Uv_7siteNum.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3521(Uh_5tlreg3520); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3523 = THE_INSTANCE.Uf_8getCoord(uc, ur, Uh_5tlval3521); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_3raw(Uh_5tlval3523); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:109:     changeSymmetry(old);
    const u32 Uh_5tlreg3526 = Uv_3old.read(); //gcnl:Node.cpp:698
    Ui_Ut_10131u<EC> Uh_5tlval3527(Uh_5tlreg3526); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval3529 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3527); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3530 = Uh_5tlval3529.read(); //gcnl:Node.cpp:1170

//! EventWindow.ulam:110:     return raw;
    const u32 Uh_5tlreg3532 = Uv_3raw.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3533(Uh_5tlreg3532); //gcnl:Node.cpp:1142
    return (Uh_5tlval3533); //gcnl:NodeReturnStatement.cpp:343

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

