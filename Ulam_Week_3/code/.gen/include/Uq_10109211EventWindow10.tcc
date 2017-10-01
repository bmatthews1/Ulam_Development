/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10105Empty10.h"
#include "Uq_1010919AtomUtils10.h"
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
    const u32 Uh_5tlreg3198 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3199(Uh_5tlreg3198); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3201 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3199); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3202 = Uh_5tlval3201.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3203(Uh_5tlreg3202); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval3205 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3203); //gcnl:NodeFunctionCall.cpp:1043
    if(_IsLocal((void *) &Uh_5tuval3205.GetStorage())) //gcnl:NodeReturnStatement.cpp:376
      FAIL(UNRETURNABLE_REFERENCE); //gcnl:NodeReturnStatement.cpp:380
    Ui_Ut_r102961a<EC> Uh_6turef3206(Uh_5tuval3205); //gcnl:Node.cpp:1510
    return (Uh_6turef3206); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_4aref



//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:84:   Bool isEmpty(SiteNum index) { return isLive(index) && au.isEmpty(aref(index)); }
    u32 Uh_5tlreg3207 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3210 = Uv_5index.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3211(Uh_5tlreg3210); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3213 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3211); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3214 = Uh_5tlval3213.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3214, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      UlamRef<EC> Uh_3tur3216(ur, 0u, 0u, &Uq_1010919AtomUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg3219 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3220(Uh_5tlreg3219); //gcnl:Node.cpp:1142
      Ui_Ut_r102961a<EC> Uh_5tuval3222 = THE_INSTANCE.Uf_4aref(uc, ur, Uh_5tlval3220); //gcnl:NodeFunctionCall.cpp:1043
      Ui_Ut_102961a<EC> Uh_5tuval3223(Uh_5tuval3222); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3225 = Uq_1010919AtomUtils10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur3216, Uh_5tuval3223); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3226 = Uh_5tlval3225.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3207 = Uh_5tlreg3226; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3227(Uh_5tlreg3207); //gcnl:Node.cpp:1142
    return (Uh_5tlval3227); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isEmpty



//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:85:   Bool isEmpty(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3228 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3231 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3232(Uh_5tlreg3231); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3234 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3232); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3235 = Uh_5tlval3234.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3235, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3239 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3240(Uh_5tlreg3239); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3242 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3240); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3243 = Uh_5tlval3242.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3244(Uh_5tlreg3243); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3246 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3244); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3247 = Uh_5tlval3246.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3228 = Uh_5tlreg3247; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3248(Uh_5tlreg3228); //gcnl:Node.cpp:1142
    return (Uh_5tlval3248); //gcnl:NodeReturnStatement.cpp:343

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
    const Ui_Ut_102321u<EC> Uh_5tlval3251 = THE_INSTANCE.Uf_919getRadius(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3252 = Uh_5tlval3251.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uv_3rad(Uh_5tlreg3252); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:69:     return md.getFirstIndex((Radius) (rad + 1u));
    UlamRef<EC> Uh_3tur3254(0u, 0u, Uv_2md, &Uq_10105MDist10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3255 = 1u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3256 = _Unsigned32ToUnsigned32(Uh_5tlreg3255, 1, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3258 = Uv_3rad.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3259 = _BinOpAddUnsigned32(Uh_5tlreg3258, Uh_5tlreg3256, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3260 = _Unsigned32ToUnsigned32(Uh_5tlreg3259, 32, 3); //gcnl:NodeCast.cpp:748
    Ui_Ut_10131u<EC> Uh_5tlval3261(Uh_5tlreg3260); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3263 = Uq_10105MDist10<EC>::THE_INSTANCE.Uf_9213getFirstIndex(uc, Uh_3tur3254, Uh_5tlval3261); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3264 = Uh_5tlval3263.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3265(Uh_5tlreg3264); //gcnl:Node.cpp:1142
    return (Uh_5tlval3265); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217getAccessibleSize



//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:75:   Bool isLegal(SiteNum index) { return index < size(); }
    const Ui_Ut_10161u<EC> Uh_5tlval3268 = THE_INSTANCE.Uf_4size(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3269 = Uh_5tlval3268.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3271 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3272 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3271, Uh_5tlreg3269, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    Ui_Ut_10111b<EC> Uh_5tlval3273(Uh_5tlreg3272); //gcnl:Node.cpp:1142
    return (Uh_5tlval3273); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:76:   Bool isLegal(C2D coord) { return isLegal(getSiteNumberRaw(coord)); }
    const u32 Uh_5tlreg3277 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3278(Uh_5tlreg3277); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3280 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3278); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3281 = Uh_5tlval3280.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3282(Uh_5tlreg3281); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3284 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3282); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3285 = Uh_5tlval3284.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3286(Uh_5tlreg3285); //gcnl:Node.cpp:1142
    return (Uh_5tlval3286); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7isLegal



//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const
  {

//! EventWindow.ulam:78:   Bool isAccessible(SiteNum index) { return index < getAccessibleSize() && isLive(index); }
    u32 Uh_5tlreg3287 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const Ui_Ut_10161u<EC> Uh_5tlval3290 = THE_INSTANCE.Uf_9217getAccessibleSize(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3291 = Uh_5tlval3290.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3293 = Uv_5index.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3294 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3293, Uh_5tlreg3291, 6); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3294, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3297 = Uv_5index.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3298(Uh_5tlreg3297); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3300 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3298); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3301 = Uh_5tlval3300.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3287 = Uh_5tlreg3301; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3302(Uh_5tlreg3287); //gcnl:Node.cpp:1142
    return (Uh_5tlval3302); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:79:   Bool isAccessible(C2D coord) { return isLegal(coord) && isAccessible(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3303 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3306 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3307(Uh_5tlreg3306); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3309 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3307); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3310 = Uh_5tlval3309.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3310, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3314 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3315(Uh_5tlreg3314); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3317 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3315); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3318 = Uh_5tlval3317.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3319(Uh_5tlreg3318); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3321 = THE_INSTANCE.Uf_9212isAccessible(uc, ur, Uh_5tlval3319); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3322 = Uh_5tlval3321.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3303 = Uh_5tlreg3322; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3323(Uh_5tlreg3303); //gcnl:Node.cpp:1142
    return (Uh_5tlval3323); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9212isAccessible



//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const
  {

//! EventWindow.ulam:82:   Bool isLive(C2D coord) { return isLegal(coord) && isLive(getSiteNumberRaw(coord)); }
    u32 Uh_5tlreg3324 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3327 = Uv_5coord.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3328(Uh_5tlreg3327); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3330 = THE_INSTANCE.Uf_7isLegal(uc, ur, Uh_5tlval3328); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3331 = Uh_5tlval3330.read(); //gcnl:Node.cpp:1170
    if(_Bool32ToCbool(Uh_5tlreg3331, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3335 = Uv_5coord.read(); //gcnl:Node.cpp:698
      Ui_Uq_102323C2D10<EC> Uh_5tlval3336(Uh_5tlreg3335); //gcnl:Node.cpp:1142
      const Ui_Ut_10161u<EC> Uh_5tlval3338 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3336); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3339 = Uh_5tlval3338.read(); //gcnl:Node.cpp:1170
      Ui_Ut_10161u<EC> Uh_5tlval3340(Uh_5tlreg3339); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3342 = THE_INSTANCE.Uf_6isLive(uc, ur, Uh_5tlval3340); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3343 = Uh_5tlval3342.read(); //gcnl:Node.cpp:1170
      Uh_5tlreg3324 = Uh_5tlreg3343; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3344(Uh_5tlreg3324); //gcnl:Node.cpp:1142
    return (Uh_5tlval3344); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6isLive



//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211EventWindow10<EC>::Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_6coord1, Ui_Uq_102323C2D10<EC>& Uv_6coord2) const
  {

//! EventWindow.ulam:88:   Bool swap(C2D coord1, C2D coord2) { return swap(getSiteNumberRaw(coord1), getSiteNumberRaw(coord2)); }
    const u32 Uh_5tlreg3348 = Uv_6coord1.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3349(Uh_5tlreg3348); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3351 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3349); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3352 = Uh_5tlval3351.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3353(Uh_5tlreg3352); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3356 = Uv_6coord2.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3357(Uh_5tlreg3356); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3359 = THE_INSTANCE.Uf_9216getSiteNumberRaw(uc, ur, Uh_5tlval3357); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3360 = Uh_5tlval3359.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3361(Uh_5tlreg3360); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3363 = THE_INSTANCE.Uf_4swap(uc, ur, Uh_5tlval3353, Uh_5tlval3361); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3364 = Uh_5tlval3363.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3365(Uh_5tlreg3364); //gcnl:Node.cpp:1142
    return (Uh_5tlval3365); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4swap



//! EventWindow.ulam:106:   C2D getCoordRaw(SiteNum siteNum) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_10109211EventWindow10<EC>::Uf_9211getCoordRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const
  {

//! EventWindow.ulam:107:     Symmetry old = changeSymmetry(cSYMMETRY_000L);
    const u32 Uh_5tlreg3367 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10131u<EC> Uh_5tlval3368(Uh_5tlreg3367); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval3370 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3368); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3371 = Uh_5tlval3370.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10131u<EC> Uv_3old(Uh_5tlreg3371); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:108:     C2D raw = getCoord(siteNum);
    const u32 Uh_5tlreg3374 = Uv_7siteNum.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3375(Uh_5tlreg3374); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3377 = THE_INSTANCE.Uf_8getCoord(uc, ur, Uh_5tlval3375); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_3raw(Uh_5tlval3377); //gcnl:NodeVarDecl.cpp:1081

//! EventWindow.ulam:109:     changeSymmetry(old);
    const u32 Uh_5tlreg3380 = Uv_3old.read(); //gcnl:Node.cpp:698
    Ui_Ut_10131u<EC> Uh_5tlval3381(Uh_5tlreg3380); //gcnl:Node.cpp:1142
    const Ui_Ut_10131u<EC> Uh_5tlval3383 = THE_INSTANCE.Uf_9214changeSymmetry(uc, ur, Uh_5tlval3381); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3384 = Uh_5tlval3383.read(); //gcnl:Node.cpp:1170

//! EventWindow.ulam:110:     return raw;
    const u32 Uh_5tlreg3386 = Uv_3raw.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3387(Uh_5tlreg3386); //gcnl:Node.cpp:1142
    return (Uh_5tlval3387); //gcnl:NodeReturnStatement.cpp:343

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

