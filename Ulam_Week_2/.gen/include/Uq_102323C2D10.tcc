/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Uq_102323C2D10<EC>::Uq_102323C2D10() : UlamQuark<EC>(MFM_UUID_FOR("Uq102323C2D10", 0))
  { }

  template<class EC>
  Uq_102323C2D10<EC>::~Uq_102323C2D10(){} //gcnl:NodeBlockClass.cpp:1784


//! C2D.inc:13:   Self(Self s) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4Self(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_1s) const
  {

//! C2D.inc:14:     x = s.x;
    const u32 Uh_5tlreg41309 = UlamRef<EC>(0u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41309); //gcnl:Node.cpp:892

//! C2D.inc:15:     y = s.y;
    const u32 Uh_5tlreg41313 = UlamRef<EC>(16u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41313); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:8:   Self(Coord ax, Coord ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4Self(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2ax, Ui_Ut_102161i<EC>& Uv_2ay) const
  {

//! C2D.inc:9:     x = ax;
    const u32 Uh_5tlreg41316 = Uv_2ax.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41316); //gcnl:Node.cpp:892

//! C2D.inc:10:     y = ay;
    const u32 Uh_5tlreg41319 = Uv_2ay.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41319); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:73:   Self max(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3max(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
    {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
      const u32 Uh_5tlreg41323 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41326 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41327 = _BinOpCompareLessThanInt32(Uh_5tlreg41326, Uh_5tlreg41323, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41327, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
          const u32 Uh_5tlreg41330 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41330); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
    {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
      const u32 Uh_5tlreg41335 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41338 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41339 = _BinOpCompareLessThanInt32(Uh_5tlreg41338, Uh_5tlreg41335, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41339, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
          const u32 Uh_5tlreg41342 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41342); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:76:     return other;
    const u32 Uh_5tlreg41346 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41347(Uh_5tlreg41346); //gcnl:Node.cpp:1142
    return (Uh_5tlval41347); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3max



//! C2D.inc:23:   Void set(Self c) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_1c) const
  {

//! C2D.inc:24:     set(c.x, c.y);
    const u32 Uh_5tlreg41351 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41352 = _Int32ToInt32(Uh_5tlreg41351, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41353(Uh_5tlreg41352); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41356 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41357 = _Int32ToInt32(Uh_5tlreg41356, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41358(Uh_5tlreg41357); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval41353, Uh_5tlval41358); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_3set



//! C2D.inc:18:   Void set(Int ax, Int ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:19:     x = (Coord) ax;
    const u32 Uh_5tlreg41361 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41362 = _Int32ToInt32(Uh_5tlreg41361, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41362); //gcnl:Node.cpp:892

//! C2D.inc:20:     y = (Coord) ay;
    const u32 Uh_5tlreg41365 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41366 = _Int32ToInt32(Uh_5tlreg41365, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41366); //gcnl:Node.cpp:892

  } // Uf_3set



//! C2D.inc:27:   Self & operator=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:28:     set(other);
    const u32 Uh_5tlreg41370 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41371(Uh_5tlreg41370); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval41371); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:29:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41374(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41374); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9211_operator3d



//! C2D.inc:32:   Self & operator+=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2b3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:35:     self = self + other;  
    const u32 Uh_5tlreg41380 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41381(Uh_5tlreg41380); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41383 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2b(uc, ur, Uh_5tlval41381); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41384(Uh_5tlval41383); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41386 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41384); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:36:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41388(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41388); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2b3d



//! C2D.inc:39:   Self & operator-=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:40:     self = self - other;
    const u32 Uh_5tlreg41394 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41395(Uh_5tlreg41394); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41397 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41395); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41398(Uh_5tlval41397); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41400 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41398); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:41:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41402(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41402); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2d3d



//! C2D.inc:44:   Self clamp(Self below, Self above) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_5clamp(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5below, Ui_Uq_102323C2D10<EC>& Uv_5above) const
  {

//! C2D.inc:45:     return (self | below) & above;
    const u32 Uh_5tlreg41406 = Uv_5below.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41407(Uh_5tlreg41406); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41409 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval41407); //gcnl:NodeFunctionCall.cpp:1043
    UlamRef<EC> Uh_3tur41410(0u, 32u, Uh_5tlval41409, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41412 = Uv_5above.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41413(Uh_5tlreg41412); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41415 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, Uh_3tur41410, Uh_5tlval41413); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41416(Uh_5tlval41415); //gcnl:Node.cpp:1142
    return (Uh_5tlval41416); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5clamp



//! C2D.inc:48:   Int getX() { return (Int) x; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getX(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:48:   Int getX() { return (Int) x; }
    const u32 Uh_5tlreg41418 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41419 = _Int32ToInt32(Uh_5tlreg41418, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41420(Uh_5tlreg41419); //gcnl:Node.cpp:1142
    return (Uh_5tlval41420); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getX



//! C2D.inc:49:   Int getY() { return (Int) y; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getY(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:49:   Int getY() { return (Int) y; }
    const u32 Uh_5tlreg41422 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41423 = _Int32ToInt32(Uh_5tlreg41422, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41424(Uh_5tlreg41423); //gcnl:Node.cpp:1142
    return (Uh_5tlval41424); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getY



//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setX(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax) const
  {

//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_5tlreg41426 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41427 = _Int32ToInt32(Uh_5tlreg41426, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41427); //gcnl:Node.cpp:892

  } // Uf_4setX



//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setY(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_5tlreg41430 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41431 = _Int32ToInt32(Uh_5tlreg41430, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41431); //gcnl:Node.cpp:892

  } // Uf_4setY



//! C2D.inc:54:   Self make(Int x, Int y)
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_4make(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1x, Ui_Ut_102321i<EC>& Uv_1y) const
  {

//! C2D.inc:56:     Self ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:57:     ret.set(x,y);
    UlamRef<EC> Uh_3tur41434(0u, 32u, Uv_3ret, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41436 = Uv_1x.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41437(Uh_5tlreg41436); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41439 = Uv_1y.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41440(Uh_5tlreg41439); //gcnl:Node.cpp:1142
    Uq_102323C2D10<EC>::THE_INSTANCE.Uf_3set(uc, Uh_3tur41434, Uh_5tlval41437, Uh_5tlval41440); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:58:     return ret;
    const u32 Uh_5tlreg41443 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41444(Uh_5tlreg41443); //gcnl:Node.cpp:1142
    return (Uh_5tlval41444); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4make



//! C2D.inc:61:   Bool equals(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_6equals(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:62:     return x == other.x && y == other.y;
    u32 Uh_5tlreg41445 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41448 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41450 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41451 = _BinOpCompareEqEqInt32(Uh_5tlreg41450, Uh_5tlreg41448, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41451, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41454 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41456 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41457 = _BinOpCompareEqEqInt32(Uh_5tlreg41456, Uh_5tlreg41454, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg41445 = Uh_5tlreg41457; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41458(Uh_5tlreg41445); //gcnl:Node.cpp:1142
    return (Uh_5tlval41458); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6equals



//! C2D.inc:65:   Bool operator==(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator3d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:66:     return equals(other);
    const u32 Uh_5tlreg41461 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41462(Uh_5tlreg41461); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41464 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval41462); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41465 = Uh_5tlval41464.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41466(Uh_5tlreg41465); //gcnl:Node.cpp:1142
    return (Uh_5tlval41466); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator3d3d



//! C2D.inc:69:   Bool operator!=(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator213d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:70:     return !equals(other);
    const u32 Uh_5tlreg41469 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41470(Uh_5tlreg41469); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41472 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval41470); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41473 = Uh_5tlval41472.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41474 = _LogicalBangBool32(Uh_5tlreg41473, 1); //gcnl:NodeUnaryOp.cpp:507
    Ui_Ut_10111b<EC> Uh_5tlval41475(Uh_5tlreg41474); //gcnl:Node.cpp:1142
    return (Uh_5tlval41475); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator213d



//! C2D.inc:79:   Self operator|(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator7c(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:80:     return max(other);
    const u32 Uh_5tlreg41478 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41479(Uh_5tlreg41478); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41481 = THE_INSTANCE.Uf_3max(uc, ur, Uh_5tlval41479); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41482(Uh_5tlval41481); //gcnl:Node.cpp:1142
    return (Uh_5tlval41482); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator7c



//! C2D.inc:83:   Self& operator|=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator7c3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:84:     self = self | other;
    const u32 Uh_5tlreg41488 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41489(Uh_5tlreg41488); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41491 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval41489); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41492(Uh_5tlval41491); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41494 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41492); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:85:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41496(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41496); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator7c3d



//! C2D.inc:88:   Self min(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3min(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
    {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
      const u32 Uh_5tlreg41499 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41502 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41503 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41502, Uh_5tlreg41499, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41503, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
          const u32 Uh_5tlreg41506 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41506); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
    {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
      const u32 Uh_5tlreg41511 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41514 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41515 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41514, Uh_5tlreg41511, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41515, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
          const u32 Uh_5tlreg41518 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41518); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:91:     return other;
    const u32 Uh_5tlreg41522 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41523(Uh_5tlreg41522); //gcnl:Node.cpp:1142
    return (Uh_5tlval41523); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3min



//! C2D.inc:94:   Self operator&(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator26(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:95:     return min(other);
    const u32 Uh_5tlreg41526 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41527(Uh_5tlreg41526); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41529 = THE_INSTANCE.Uf_3min(uc, ur, Uh_5tlval41527); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41530(Uh_5tlval41529); //gcnl:Node.cpp:1142
    return (Uh_5tlval41530); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator26



//! C2D.inc:98:   Self& operator&=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator263d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:99:     self = self & other;
    const u32 Uh_5tlreg41536 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41537(Uh_5tlreg41536); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41539 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, ur, Uh_5tlval41537); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41540(Uh_5tlval41539); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41542 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41540); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:100:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41544(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41544); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator263d



//! C2D.inc:109:   Bool contains(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8contains(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:110:     Int sx = self.getX();
    const Ui_Ut_102321i<EC> Uh_5tlval41548 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41549 = Uh_5tlval41548.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sx(Uh_5tlreg41549); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:111:     Int sy = self.getY();
    const Ui_Ut_102321i<EC> Uh_5tlval41553 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41554 = Uh_5tlval41553.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sy(Uh_5tlreg41554); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:112:     Int ox = other.getX();
    UlamRef<EC> Uh_3tur41556(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval41558 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, Uh_3tur41556); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41559 = Uh_5tlval41558.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2ox(Uh_5tlreg41559); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:113:     Int oy = other.getY();
    UlamRef<EC> Uh_3tur41561(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval41563 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, Uh_3tur41561); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41564 = Uh_5tlval41563.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2oy(Uh_5tlreg41564); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
    {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
      u32 Uh_5tlreg41565 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg41566 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41567 = _Int32ToInt32(Uh_5tlreg41566, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41569 = Uv_2ox.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41570 = _BinOpCompareLessThanInt32(Uh_5tlreg41569, Uh_5tlreg41567, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg41570, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg41572 = Uv_2sx.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41574 = Uv_2ox.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41575 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg41574, Uh_5tlreg41572, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41565 = Uh_5tlreg41575; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg41565 = Uh_5tlreg41570; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg41565, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
          const u32 Uh_5tlreg41576 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval41577(Uh_5tlreg41576); //gcnl:Node.cpp:1142
          return (Uh_5tlval41577); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
    {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
      u32 Uh_5tlreg41578 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg41579 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41580 = _Int32ToInt32(Uh_5tlreg41579, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41582 = Uv_2oy.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41583 = _BinOpCompareLessThanInt32(Uh_5tlreg41582, Uh_5tlreg41580, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg41583, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg41585 = Uv_2sy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41587 = Uv_2oy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41588 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg41587, Uh_5tlreg41585, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41578 = Uh_5tlreg41588; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg41578 = Uh_5tlreg41583; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg41578, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
          const u32 Uh_5tlreg41589 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval41590(Uh_5tlreg41589); //gcnl:Node.cpp:1142
          return (Uh_5tlval41590); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:116:     return true;
    const u32 Uh_5tlreg41591 = 1u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval41592(Uh_5tlreg41591); //gcnl:Node.cpp:1142
    return (Uh_5tlval41592); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8contains



//! C2D.inc:119:   Int dot(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_3dot(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:120:     return x * other.x + y * other.y;
    const u32 Uh_5tlreg41595 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41596 = _Int32ToInt32(Uh_5tlreg41595, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41598 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41599 = _Int32ToInt32(Uh_5tlreg41598, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41600 = _BinOpMultiplyInt32(Uh_5tlreg41599, Uh_5tlreg41596, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41603 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41604 = _Int32ToInt32(Uh_5tlreg41603, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41606 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41607 = _Int32ToInt32(Uh_5tlreg41606, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41608 = _BinOpMultiplyInt32(Uh_5tlreg41607, Uh_5tlreg41604, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41609 = _BinOpAddInt32(Uh_5tlreg41608, Uh_5tlreg41600, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval41610(Uh_5tlreg41609); //gcnl:Node.cpp:1142
    return (Uh_5tlval41610); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3dot



//! C2D.inc:123:   Int operator*(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_9211_operator2a(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:124:     return dot(other);
    const u32 Uh_5tlreg41613 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41614(Uh_5tlreg41613); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41616 = THE_INSTANCE.Uf_3dot(uc, ur, Uh_5tlval41614); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41617 = Uh_5tlval41616.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uh_5tlval41618(Uh_5tlreg41617); //gcnl:Node.cpp:1142
    return (Uh_5tlval41618); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2a



//! C2D.inc:127:   Self add(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3add(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:128:     return make((Coord) (x + other.x), (Coord) (y + other.y));
    const u32 Uh_5tlreg41622 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41623 = _Int32ToInt32(Uh_5tlreg41622, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41625 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41626 = _Int32ToInt32(Uh_5tlreg41625, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41627 = _BinOpAddInt32(Uh_5tlreg41626, Uh_5tlreg41623, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41628 = _Int32ToInt32(Uh_5tlreg41627, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41629 = _Int32ToInt32(Uh_5tlreg41628, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41630(Uh_5tlreg41629); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41633 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41634 = _Int32ToInt32(Uh_5tlreg41633, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41636 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41637 = _Int32ToInt32(Uh_5tlreg41636, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41638 = _BinOpAddInt32(Uh_5tlreg41637, Uh_5tlreg41634, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41639 = _Int32ToInt32(Uh_5tlreg41638, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41640 = _Int32ToInt32(Uh_5tlreg41639, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41641(Uh_5tlreg41640); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41643 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41630, Uh_5tlval41641); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41644(Uh_5tlval41643); //gcnl:Node.cpp:1142
    return (Uh_5tlval41644); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3add



//! C2D.inc:131:   Self operator+(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:132:     return add(other);
    const u32 Uh_5tlreg41647 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41648(Uh_5tlreg41647); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41650 = THE_INSTANCE.Uf_3add(uc, ur, Uh_5tlval41648); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41651(Uh_5tlval41650); //gcnl:Node.cpp:1142
    return (Uh_5tlval41651); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:151:   Self operator+() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:152:     return self;
    const u32 Uh_5tlreg41653 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41654(Uh_5tlreg41653); //gcnl:Node.cpp:1142
    return (Uh_5tlval41654); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:135:   Self subtract(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8subtract(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:136:     return make((Coord) (x - other.x), (Coord) (y - other.y));
    const u32 Uh_5tlreg41658 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41659 = _Int32ToInt32(Uh_5tlreg41658, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41661 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41662 = _Int32ToInt32(Uh_5tlreg41661, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41663 = _BinOpSubtractInt32(Uh_5tlreg41662, Uh_5tlreg41659, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41664 = _Int32ToInt32(Uh_5tlreg41663, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41665 = _Int32ToInt32(Uh_5tlreg41664, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41666(Uh_5tlreg41665); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41669 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41670 = _Int32ToInt32(Uh_5tlreg41669, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41672 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41673 = _Int32ToInt32(Uh_5tlreg41672, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41674 = _BinOpSubtractInt32(Uh_5tlreg41673, Uh_5tlreg41670, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41675 = _Int32ToInt32(Uh_5tlreg41674, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41676 = _Int32ToInt32(Uh_5tlreg41675, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41677(Uh_5tlreg41676); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41679 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41666, Uh_5tlval41677); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41680(Uh_5tlval41679); //gcnl:Node.cpp:1142
    return (Uh_5tlval41680); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8subtract



//! C2D.inc:139:   Self operator-(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:140:     return subtract(other);
    const u32 Uh_5tlreg41683 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41684(Uh_5tlreg41683); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41686 = THE_INSTANCE.Uf_8subtract(uc, ur, Uh_5tlval41684); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41687(Uh_5tlval41686); //gcnl:Node.cpp:1142
    return (Uh_5tlval41687); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:147:   Self operator-() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:148:     return negate();
    Ui_Uq_102323C2D10<EC> Uh_5tlval41690 = THE_INSTANCE.Uf_6negate(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41691(Uh_5tlval41690); //gcnl:Node.cpp:1142
    return (Uh_5tlval41691); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:143:   Self negate() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6negate(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:144:     return make((Coord) -(Int) x, (Coord) -(Int) y);
    const u32 Uh_5tlreg41694 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41695 = _Int32ToInt32(Uh_5tlreg41694, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41696 = _UnaryMinusInt32(Uh_5tlreg41695, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41697 = _Int32ToInt32(Uh_5tlreg41696, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41698 = _Int32ToInt32(Uh_5tlreg41697, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41699(Uh_5tlreg41698); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41701 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41702 = _Int32ToInt32(Uh_5tlreg41701, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41703 = _UnaryMinusInt32(Uh_5tlreg41702, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41704 = _Int32ToInt32(Uh_5tlreg41703, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41705 = _Int32ToInt32(Uh_5tlreg41704, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41706(Uh_5tlreg41705); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41708 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41699, Uh_5tlval41706); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41709(Uh_5tlval41708); //gcnl:Node.cpp:1142
    return (Uh_5tlval41709); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6negate



//! C2D.inc:158:   Self neighbor(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8neighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
    {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
      const u32 Uh_5tlreg41710 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41711 = _Int32ToInt32(Uh_5tlreg41710, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41713 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41714 = _Unsigned32ToInt32(Uh_5tlreg41713, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41715 = _BinOpCompareEqEqInt32(Uh_5tlreg41714, Uh_5tlreg41711, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41715, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
          const u32 Uh_5tlreg41717 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41718 = _Int32ToInt32(Uh_5tlreg41717, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41719(Uh_5tlreg41718); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41720 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41721 = _Int32ToInt32(Uh_5tlreg41720, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41722(Uh_5tlreg41721); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41724 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41719, Uh_5tlval41722); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41725(Uh_5tlval41724); //gcnl:Node.cpp:1142
          return (Uh_5tlval41725); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:160:     if (d==1) return make( 1, 1);
    {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
      const u32 Uh_5tlreg41726 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41727 = _Int32ToInt32(Uh_5tlreg41726, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41729 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41730 = _Unsigned32ToInt32(Uh_5tlreg41729, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41731 = _BinOpCompareEqEqInt32(Uh_5tlreg41730, Uh_5tlreg41727, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41731, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
          const u32 Uh_5tlreg41733 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41734 = _Int32ToInt32(Uh_5tlreg41733, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41735(Uh_5tlreg41734); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41736 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41737 = _Int32ToInt32(Uh_5tlreg41736, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41738(Uh_5tlreg41737); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41740 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41735, Uh_5tlval41738); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41741(Uh_5tlval41740); //gcnl:Node.cpp:1142
          return (Uh_5tlval41741); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:161:     if (d==2) return make( 1, 0);
    {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
      const u32 Uh_5tlreg41742 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41743 = _Int32ToInt32(Uh_5tlreg41742, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41745 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41746 = _Unsigned32ToInt32(Uh_5tlreg41745, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41747 = _BinOpCompareEqEqInt32(Uh_5tlreg41746, Uh_5tlreg41743, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41747, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
          const u32 Uh_5tlreg41749 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41750 = _Int32ToInt32(Uh_5tlreg41749, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41751(Uh_5tlreg41750); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41752 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41753 = _Int32ToInt32(Uh_5tlreg41752, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41754(Uh_5tlreg41753); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41756 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41751, Uh_5tlval41754); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41757(Uh_5tlval41756); //gcnl:Node.cpp:1142
          return (Uh_5tlval41757); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:162:     if (d==3) return make( 1,-1);
    {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
      const u32 Uh_5tlreg41758 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41759 = _Int32ToInt32(Uh_5tlreg41758, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41761 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41762 = _Unsigned32ToInt32(Uh_5tlreg41761, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41763 = _BinOpCompareEqEqInt32(Uh_5tlreg41762, Uh_5tlreg41759, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41763, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
          const u32 Uh_5tlreg41765 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41766 = _Int32ToInt32(Uh_5tlreg41765, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41767(Uh_5tlreg41766); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41768 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41769 = _Int32ToInt32(Uh_5tlreg41768, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41770(Uh_5tlreg41769); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41772 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41767, Uh_5tlval41770); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41773(Uh_5tlval41772); //gcnl:Node.cpp:1142
          return (Uh_5tlval41773); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:163:     if (d==4) return make( 0,-1);
    {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
      const u32 Uh_5tlreg41774 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41776 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41777 = _Unsigned32ToInt32(Uh_5tlreg41776, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41778 = _BinOpCompareEqEqInt32(Uh_5tlreg41777, Uh_5tlreg41774, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41778, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
          const u32 Uh_5tlreg41780 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41781 = _Int32ToInt32(Uh_5tlreg41780, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41782(Uh_5tlreg41781); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41783 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41784 = _Int32ToInt32(Uh_5tlreg41783, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41785(Uh_5tlreg41784); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41787 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41782, Uh_5tlval41785); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41788(Uh_5tlval41787); //gcnl:Node.cpp:1142
          return (Uh_5tlval41788); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:164:     if (d==5) return make(-1,-1);
    {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
      const u32 Uh_5tlreg41789 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41791 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41792 = _Unsigned32ToInt32(Uh_5tlreg41791, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41793 = _BinOpCompareEqEqInt32(Uh_5tlreg41792, Uh_5tlreg41789, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41793, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
          const u32 Uh_5tlreg41795 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41796 = _Int32ToInt32(Uh_5tlreg41795, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41797(Uh_5tlreg41796); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41798 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41799 = _Int32ToInt32(Uh_5tlreg41798, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41800(Uh_5tlreg41799); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41802 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41797, Uh_5tlval41800); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41803(Uh_5tlval41802); //gcnl:Node.cpp:1142
          return (Uh_5tlval41803); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:165:     if (d==6) return make(-1, 0);
    {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
      const u32 Uh_5tlreg41804 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41806 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41807 = _Unsigned32ToInt32(Uh_5tlreg41806, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41808 = _BinOpCompareEqEqInt32(Uh_5tlreg41807, Uh_5tlreg41804, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41808, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
          const u32 Uh_5tlreg41810 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41811 = _Int32ToInt32(Uh_5tlreg41810, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41812(Uh_5tlreg41811); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41813 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41814 = _Int32ToInt32(Uh_5tlreg41813, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41815(Uh_5tlreg41814); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41817 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41812, Uh_5tlval41815); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41818(Uh_5tlval41817); //gcnl:Node.cpp:1142
          return (Uh_5tlval41818); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:166:     /* d==7*/ return make(-1, 1);
    const u32 Uh_5tlreg41820 = (u32) -1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41821 = _Int32ToInt32(Uh_5tlreg41820, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41822(Uh_5tlreg41821); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41823 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41824 = _Int32ToInt32(Uh_5tlreg41823, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41825(Uh_5tlreg41824); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41827 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41822, Uh_5tlval41825); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41828(Uh_5tlval41827); //gcnl:Node.cpp:1142
    return (Uh_5tlval41828); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8neighbor



//! C2D.inc:172:   Self corner(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6corner(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
    {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
      const u32 Uh_5tlreg41829 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41830 = _Int32ToInt32(Uh_5tlreg41829, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41832 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41833 = _Unsigned32ToInt32(Uh_5tlreg41832, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41834 = _BinOpCompareEqEqInt32(Uh_5tlreg41833, Uh_5tlreg41830, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41834, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
          const u32 Uh_5tlreg41836 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41837 = _Int32ToInt32(Uh_5tlreg41836, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41838(Uh_5tlreg41837); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41839 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41840 = _Int32ToInt32(Uh_5tlreg41839, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41841(Uh_5tlreg41840); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41843 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41838, Uh_5tlval41841); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41844(Uh_5tlval41843); //gcnl:Node.cpp:1142
          return (Uh_5tlval41844); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:174:     if (d==1) return make( 2, 2);
    {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
      const u32 Uh_5tlreg41845 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41846 = _Int32ToInt32(Uh_5tlreg41845, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41848 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41849 = _Unsigned32ToInt32(Uh_5tlreg41848, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41850 = _BinOpCompareEqEqInt32(Uh_5tlreg41849, Uh_5tlreg41846, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41850, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
          const u32 Uh_5tlreg41852 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41853 = _Int32ToInt32(Uh_5tlreg41852, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41854(Uh_5tlreg41853); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41855 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41856 = _Int32ToInt32(Uh_5tlreg41855, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41857(Uh_5tlreg41856); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41859 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41854, Uh_5tlval41857); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41860(Uh_5tlval41859); //gcnl:Node.cpp:1142
          return (Uh_5tlval41860); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:175:     if (d==2) return make( 4, 0);
    {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
      const u32 Uh_5tlreg41861 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41862 = _Int32ToInt32(Uh_5tlreg41861, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41864 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41865 = _Unsigned32ToInt32(Uh_5tlreg41864, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41866 = _BinOpCompareEqEqInt32(Uh_5tlreg41865, Uh_5tlreg41862, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41866, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
          const u32 Uh_5tlreg41868 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41869 = _Int32ToInt32(Uh_5tlreg41868, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41870(Uh_5tlreg41869); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41871 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41872 = _Int32ToInt32(Uh_5tlreg41871, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41873(Uh_5tlreg41872); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41875 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41870, Uh_5tlval41873); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41876(Uh_5tlval41875); //gcnl:Node.cpp:1142
          return (Uh_5tlval41876); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:176:     if (d==3) return make( 2,-2);
    {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
      const u32 Uh_5tlreg41877 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41878 = _Int32ToInt32(Uh_5tlreg41877, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41880 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41881 = _Unsigned32ToInt32(Uh_5tlreg41880, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41882 = _BinOpCompareEqEqInt32(Uh_5tlreg41881, Uh_5tlreg41878, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41882, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
          const u32 Uh_5tlreg41884 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41885 = _Int32ToInt32(Uh_5tlreg41884, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41886(Uh_5tlreg41885); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41887 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41888 = _Int32ToInt32(Uh_5tlreg41887, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41889(Uh_5tlreg41888); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41891 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41886, Uh_5tlval41889); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41892(Uh_5tlval41891); //gcnl:Node.cpp:1142
          return (Uh_5tlval41892); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:177:     if (d==4) return make( 0,-4);
    {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
      const u32 Uh_5tlreg41893 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41895 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41896 = _Unsigned32ToInt32(Uh_5tlreg41895, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41897 = _BinOpCompareEqEqInt32(Uh_5tlreg41896, Uh_5tlreg41893, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41897, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
          const u32 Uh_5tlreg41899 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41900 = _Int32ToInt32(Uh_5tlreg41899, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41901(Uh_5tlreg41900); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41902 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41903 = _Int32ToInt32(Uh_5tlreg41902, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41904(Uh_5tlreg41903); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41906 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41901, Uh_5tlval41904); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41907(Uh_5tlval41906); //gcnl:Node.cpp:1142
          return (Uh_5tlval41907); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:178:     if (d==5) return make(-2,-2);
    {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
      const u32 Uh_5tlreg41908 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41910 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41911 = _Unsigned32ToInt32(Uh_5tlreg41910, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41912 = _BinOpCompareEqEqInt32(Uh_5tlreg41911, Uh_5tlreg41908, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41912, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
          const u32 Uh_5tlreg41914 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41915 = _Int32ToInt32(Uh_5tlreg41914, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41916(Uh_5tlreg41915); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41917 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41918 = _Int32ToInt32(Uh_5tlreg41917, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41919(Uh_5tlreg41918); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41921 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41916, Uh_5tlval41919); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41922(Uh_5tlval41921); //gcnl:Node.cpp:1142
          return (Uh_5tlval41922); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:179:     if (d==6) return make(-4, 0);
    {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
      const u32 Uh_5tlreg41923 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41925 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41926 = _Unsigned32ToInt32(Uh_5tlreg41925, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41927 = _BinOpCompareEqEqInt32(Uh_5tlreg41926, Uh_5tlreg41923, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41927, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
          const u32 Uh_5tlreg41929 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41930 = _Int32ToInt32(Uh_5tlreg41929, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41931(Uh_5tlreg41930); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41932 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41933 = _Int32ToInt32(Uh_5tlreg41932, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41934(Uh_5tlreg41933); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41936 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41931, Uh_5tlval41934); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41937(Uh_5tlval41936); //gcnl:Node.cpp:1142
          return (Uh_5tlval41937); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:180:     /* d==7*/ return make(-2, 2);
    const u32 Uh_5tlreg41939 = (u32) -2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41940 = _Int32ToInt32(Uh_5tlreg41939, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41941(Uh_5tlreg41940); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41942 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41943 = _Int32ToInt32(Uh_5tlreg41942, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41944(Uh_5tlreg41943); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41946 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41941, Uh_5tlval41944); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41947(Uh_5tlval41946); //gcnl:Node.cpp:1142
    return (Uh_5tlval41947); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6corner



//! C2D.inc:183:   Unsigned length() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_6length(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:184:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:185:     return origin.manhattanDistance(self);
    UlamRef<EC> Uh_3tur41949(0u, 32u, Uv_6origin, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41951 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41952(Uh_5tlreg41951); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41954 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9217manhattanDistance(uc, Uh_3tur41949, Uh_5tlval41952); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41955 = Uh_5tlval41954.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41956(Uh_5tlreg41955); //gcnl:Node.cpp:1142
    return (Uh_5tlval41956); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6length



//! C2D.inc:202:   Unsigned manhattanDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9217manhattanDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:203:     Self a = abs(self-other);
    const u32 Uh_5tlreg41961 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41962(Uh_5tlreg41961); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41964 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41962); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41965(Uh_5tlval41964); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41967 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval41965); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_1a(Uh_5tlval41967); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:204:     return (Unsigned) (a.x + a.y);
    const u32 Uh_5tlreg41970 = UlamRef<EC>(16u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41971 = _Int32ToInt32(Uh_5tlreg41970, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41974 = UlamRef<EC>(0u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41975 = _Int32ToInt32(Uh_5tlreg41974, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41976 = _BinOpAddInt32(Uh_5tlreg41975, Uh_5tlreg41971, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41977 = _Int32ToUnsigned32(Uh_5tlreg41976, 17, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41978(Uh_5tlreg41977); //gcnl:Node.cpp:1142
    return (Uh_5tlval41978); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217manhattanDistance



//! C2D.inc:188:   Bool isOrigin() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8isOrigin(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:189:     return x == 0 && y == 0;
    u32 Uh_5tlreg41979 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41980 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41981 = _Int32ToInt32(Uh_5tlreg41980, 2, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41983 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41984 = _BinOpCompareEqEqInt32(Uh_5tlreg41983, Uh_5tlreg41981, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41984, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41985 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41986 = _Int32ToInt32(Uh_5tlreg41985, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41988 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41989 = _BinOpCompareEqEqInt32(Uh_5tlreg41988, Uh_5tlreg41986, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg41979 = Uh_5tlreg41989; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41990(Uh_5tlreg41979); //gcnl:Node.cpp:1142
    return (Uh_5tlval41990); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8isOrigin



//! C2D.inc:196:   Self abs(Self of) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_2of) const
  {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
    {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
      const u32 Uh_5tlreg41991 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41992 = _Int32ToInt32(Uh_5tlreg41991, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41995 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41996 = _BinOpCompareLessThanInt32(Uh_5tlreg41995, Uh_5tlreg41992, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41996, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
          const u32 Uh_5tlreg41999 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42000 = _UnaryMinusInt32(Uh_5tlreg41999, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg42000); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
    {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
      const u32 Uh_5tlreg42003 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42004 = _Int32ToInt32(Uh_5tlreg42003, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42007 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42008 = _BinOpCompareLessThanInt32(Uh_5tlreg42007, Uh_5tlreg42004, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42008, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
          const u32 Uh_5tlreg42011 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42012 = _UnaryMinusInt32(Uh_5tlreg42011, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg42012); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:199:     return of;
    const u32 Uh_5tlreg42016 = Uv_2of.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval42017(Uh_5tlreg42016); //gcnl:Node.cpp:1142
    return (Uh_5tlval42017); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:192:   Self abs() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:193:     return abs(self);
    const u32 Uh_5tlreg42020 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval42021(Uh_5tlreg42020); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval42023 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval42021); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval42024(Uh_5tlval42023); //gcnl:Node.cpp:1142
    return (Uh_5tlval42024); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:210:   Unsigned euclideanSquaredDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9224euclideanSquaredDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:211:     Self diff = self-other;
    const u32 Uh_5tlreg42028 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval42029(Uh_5tlreg42028); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval42031 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval42029); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_4diff(Uh_5tlval42031); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:212:     return diff.euclideanSquaredLength();
    UlamRef<EC> Uh_3tur42033(0u, 32u, Uv_4diff, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321u<EC> Uh_5tlval42035 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9222euclideanSquaredLength(uc, Uh_3tur42033); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42036 = Uh_5tlval42035.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval42037(Uh_5tlreg42036); //gcnl:Node.cpp:1142
    return (Uh_5tlval42037); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9224euclideanSquaredDistance



//! C2D.inc:218:   Unsigned euclideanSquaredLength() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9222euclideanSquaredLength(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:219:     return (Unsigned) (self * self);
    const u32 Uh_5tlreg42041 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval42042(Uh_5tlreg42041); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval42044 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2a(uc, ur, Uh_5tlval42042); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42045 = Uh_5tlval42044.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg42046 = _Int32ToUnsigned32(Uh_5tlreg42045, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42047(Uh_5tlreg42046); //gcnl:Node.cpp:1142
    return (Uh_5tlval42047); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9222euclideanSquaredLength


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_102323C2D10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Ut_102161i", "x", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Ut_102161i", "y", 16u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_102323C2D10<EC>::GetDataMemberCount() const
  {
    return 2; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_102323C2D10<EC>::GetMangledClassName() const
  {
    return "Uq_102323C2D10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_102323C2D10<EC>::GetClassLength( ) const
  {
    return 32; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_102323C2D10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_102323C2D10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_102323C2D10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_102323C2D10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_102323C2D10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_102323C2D10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102323C2D10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

