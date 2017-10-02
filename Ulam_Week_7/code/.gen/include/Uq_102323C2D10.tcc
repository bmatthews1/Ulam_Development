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
    const u32 Uh_5tlreg41334 = UlamRef<EC>(0u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41334); //gcnl:Node.cpp:892

//! C2D.inc:15:     y = s.y;
    const u32 Uh_5tlreg41338 = UlamRef<EC>(16u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41338); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:8:   Self(Coord ax, Coord ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4Self(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2ax, Ui_Ut_102161i<EC>& Uv_2ay) const
  {

//! C2D.inc:9:     x = ax;
    const u32 Uh_5tlreg41341 = Uv_2ax.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41341); //gcnl:Node.cpp:892

//! C2D.inc:10:     y = ay;
    const u32 Uh_5tlreg41344 = Uv_2ay.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41344); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:73:   Self max(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3max(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
    {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
      const u32 Uh_5tlreg41348 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41351 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41352 = _BinOpCompareLessThanInt32(Uh_5tlreg41351, Uh_5tlreg41348, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41352, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
          const u32 Uh_5tlreg41355 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41355); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
    {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
      const u32 Uh_5tlreg41360 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41363 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41364 = _BinOpCompareLessThanInt32(Uh_5tlreg41363, Uh_5tlreg41360, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41364, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
          const u32 Uh_5tlreg41367 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41367); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:76:     return other;
    const u32 Uh_5tlreg41371 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41372(Uh_5tlreg41371); //gcnl:Node.cpp:1142
    return (Uh_5tlval41372); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3max



//! C2D.inc:23:   Void set(Self c) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_1c) const
  {

//! C2D.inc:24:     set(c.x, c.y);
    const u32 Uh_5tlreg41376 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41377 = _Int32ToInt32(Uh_5tlreg41376, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41378(Uh_5tlreg41377); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41381 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41382 = _Int32ToInt32(Uh_5tlreg41381, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41383(Uh_5tlreg41382); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval41378, Uh_5tlval41383); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_3set



//! C2D.inc:18:   Void set(Int ax, Int ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:19:     x = (Coord) ax;
    const u32 Uh_5tlreg41386 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41387 = _Int32ToInt32(Uh_5tlreg41386, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41387); //gcnl:Node.cpp:892

//! C2D.inc:20:     y = (Coord) ay;
    const u32 Uh_5tlreg41390 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41391 = _Int32ToInt32(Uh_5tlreg41390, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41391); //gcnl:Node.cpp:892

  } // Uf_3set



//! C2D.inc:27:   Self & operator=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:28:     set(other);
    const u32 Uh_5tlreg41395 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41396(Uh_5tlreg41395); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval41396); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:29:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41399(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41399); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9211_operator3d



//! C2D.inc:32:   Self & operator+=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2b3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:35:     self = self + other;  
    const u32 Uh_5tlreg41405 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41406(Uh_5tlreg41405); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41408 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2b(uc, ur, Uh_5tlval41406); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41409(Uh_5tlval41408); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41411 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41409); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:36:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41413(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41413); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2b3d



//! C2D.inc:39:   Self & operator-=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:40:     self = self - other;
    const u32 Uh_5tlreg41419 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41420(Uh_5tlreg41419); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41422 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41420); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41423(Uh_5tlval41422); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41425 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41423); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:41:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41427(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41427); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2d3d



//! C2D.inc:44:   Self clamp(Self below, Self above) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_5clamp(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5below, Ui_Uq_102323C2D10<EC>& Uv_5above) const
  {

//! C2D.inc:45:     return (self | below) & above;
    const u32 Uh_5tlreg41431 = Uv_5below.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41432(Uh_5tlreg41431); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41434 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval41432); //gcnl:NodeFunctionCall.cpp:1043
    UlamRef<EC> Uh_3tur41435(0u, 32u, Uh_5tlval41434, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41437 = Uv_5above.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41438(Uh_5tlreg41437); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41440 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, Uh_3tur41435, Uh_5tlval41438); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41441(Uh_5tlval41440); //gcnl:Node.cpp:1142
    return (Uh_5tlval41441); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5clamp



//! C2D.inc:48:   Int getX() { return (Int) x; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getX(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:48:   Int getX() { return (Int) x; }
    const u32 Uh_5tlreg41443 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41444 = _Int32ToInt32(Uh_5tlreg41443, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41445(Uh_5tlreg41444); //gcnl:Node.cpp:1142
    return (Uh_5tlval41445); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getX



//! C2D.inc:49:   Int getY() { return (Int) y; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getY(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:49:   Int getY() { return (Int) y; }
    const u32 Uh_5tlreg41447 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41448 = _Int32ToInt32(Uh_5tlreg41447, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41449(Uh_5tlreg41448); //gcnl:Node.cpp:1142
    return (Uh_5tlval41449); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getY



//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setX(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax) const
  {

//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_5tlreg41451 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41452 = _Int32ToInt32(Uh_5tlreg41451, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41452); //gcnl:Node.cpp:892

  } // Uf_4setX



//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setY(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_5tlreg41455 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41456 = _Int32ToInt32(Uh_5tlreg41455, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41456); //gcnl:Node.cpp:892

  } // Uf_4setY



//! C2D.inc:54:   Self make(Int x, Int y)
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_4make(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1x, Ui_Ut_102321i<EC>& Uv_1y) const
  {

//! C2D.inc:56:     Self ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:57:     ret.set(x,y);
    UlamRef<EC> Uh_3tur41459(0u, 32u, Uv_3ret, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41461 = Uv_1x.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41462(Uh_5tlreg41461); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41464 = Uv_1y.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41465(Uh_5tlreg41464); //gcnl:Node.cpp:1142
    Uq_102323C2D10<EC>::THE_INSTANCE.Uf_3set(uc, Uh_3tur41459, Uh_5tlval41462, Uh_5tlval41465); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:58:     return ret;
    const u32 Uh_5tlreg41468 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41469(Uh_5tlreg41468); //gcnl:Node.cpp:1142
    return (Uh_5tlval41469); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4make



//! C2D.inc:61:   Bool equals(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_6equals(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:62:     return x == other.x && y == other.y;
    u32 Uh_5tlreg41470 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41473 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41475 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41476 = _BinOpCompareEqEqInt32(Uh_5tlreg41475, Uh_5tlreg41473, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41476, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41479 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41481 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41482 = _BinOpCompareEqEqInt32(Uh_5tlreg41481, Uh_5tlreg41479, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg41470 = Uh_5tlreg41482; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41483(Uh_5tlreg41470); //gcnl:Node.cpp:1142
    return (Uh_5tlval41483); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6equals



//! C2D.inc:65:   Bool operator==(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator3d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:66:     return equals(other);
    const u32 Uh_5tlreg41486 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41487(Uh_5tlreg41486); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41489 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval41487); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41490 = Uh_5tlval41489.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41491(Uh_5tlreg41490); //gcnl:Node.cpp:1142
    return (Uh_5tlval41491); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator3d3d



//! C2D.inc:69:   Bool operator!=(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator213d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:70:     return !equals(other);
    const u32 Uh_5tlreg41494 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41495(Uh_5tlreg41494); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41497 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval41495); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41498 = Uh_5tlval41497.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41499 = _LogicalBangBool32(Uh_5tlreg41498, 1); //gcnl:NodeUnaryOp.cpp:507
    Ui_Ut_10111b<EC> Uh_5tlval41500(Uh_5tlreg41499); //gcnl:Node.cpp:1142
    return (Uh_5tlval41500); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator213d



//! C2D.inc:79:   Self operator|(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator7c(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:80:     return max(other);
    const u32 Uh_5tlreg41503 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41504(Uh_5tlreg41503); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41506 = THE_INSTANCE.Uf_3max(uc, ur, Uh_5tlval41504); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41507(Uh_5tlval41506); //gcnl:Node.cpp:1142
    return (Uh_5tlval41507); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator7c



//! C2D.inc:83:   Self& operator|=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator7c3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:84:     self = self | other;
    const u32 Uh_5tlreg41513 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41514(Uh_5tlreg41513); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41516 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval41514); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41517(Uh_5tlval41516); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41519 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41517); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:85:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41521(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41521); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator7c3d



//! C2D.inc:88:   Self min(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3min(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
    {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
      const u32 Uh_5tlreg41524 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41527 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41528 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41527, Uh_5tlreg41524, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41528, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
          const u32 Uh_5tlreg41531 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41531); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
    {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
      const u32 Uh_5tlreg41536 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41539 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41540 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41539, Uh_5tlreg41536, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41540, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
          const u32 Uh_5tlreg41543 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41543); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:91:     return other;
    const u32 Uh_5tlreg41547 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41548(Uh_5tlreg41547); //gcnl:Node.cpp:1142
    return (Uh_5tlval41548); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3min



//! C2D.inc:94:   Self operator&(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator26(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:95:     return min(other);
    const u32 Uh_5tlreg41551 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41552(Uh_5tlreg41551); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41554 = THE_INSTANCE.Uf_3min(uc, ur, Uh_5tlval41552); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41555(Uh_5tlval41554); //gcnl:Node.cpp:1142
    return (Uh_5tlval41555); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator26



//! C2D.inc:98:   Self& operator&=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator263d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:99:     self = self & other;
    const u32 Uh_5tlreg41561 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41562(Uh_5tlreg41561); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41564 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, ur, Uh_5tlval41562); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41565(Uh_5tlval41564); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41567 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41565); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:100:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41569(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41569); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator263d



//! C2D.inc:109:   Bool contains(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8contains(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:110:     Int sx = self.getX();
    const Ui_Ut_102321i<EC> Uh_5tlval41573 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41574 = Uh_5tlval41573.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sx(Uh_5tlreg41574); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:111:     Int sy = self.getY();
    const Ui_Ut_102321i<EC> Uh_5tlval41578 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41579 = Uh_5tlval41578.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sy(Uh_5tlreg41579); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:112:     Int ox = other.getX();
    UlamRef<EC> Uh_3tur41581(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval41583 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, Uh_3tur41581); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41584 = Uh_5tlval41583.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2ox(Uh_5tlreg41584); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:113:     Int oy = other.getY();
    UlamRef<EC> Uh_3tur41586(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval41588 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, Uh_3tur41586); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41589 = Uh_5tlval41588.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2oy(Uh_5tlreg41589); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
    {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
      u32 Uh_5tlreg41590 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg41591 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41592 = _Int32ToInt32(Uh_5tlreg41591, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41594 = Uv_2ox.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41595 = _BinOpCompareLessThanInt32(Uh_5tlreg41594, Uh_5tlreg41592, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg41595, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg41597 = Uv_2sx.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41599 = Uv_2ox.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41600 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg41599, Uh_5tlreg41597, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41590 = Uh_5tlreg41600; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg41590 = Uh_5tlreg41595; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg41590, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
          const u32 Uh_5tlreg41601 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval41602(Uh_5tlreg41601); //gcnl:Node.cpp:1142
          return (Uh_5tlval41602); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
    {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
      u32 Uh_5tlreg41603 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg41604 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41605 = _Int32ToInt32(Uh_5tlreg41604, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41607 = Uv_2oy.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41608 = _BinOpCompareLessThanInt32(Uh_5tlreg41607, Uh_5tlreg41605, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg41608, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg41610 = Uv_2sy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41612 = Uv_2oy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41613 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg41612, Uh_5tlreg41610, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41603 = Uh_5tlreg41613; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg41603 = Uh_5tlreg41608; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg41603, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
          const u32 Uh_5tlreg41614 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval41615(Uh_5tlreg41614); //gcnl:Node.cpp:1142
          return (Uh_5tlval41615); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:116:     return true;
    const u32 Uh_5tlreg41616 = 1u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval41617(Uh_5tlreg41616); //gcnl:Node.cpp:1142
    return (Uh_5tlval41617); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8contains



//! C2D.inc:119:   Int dot(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_3dot(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:120:     return x * other.x + y * other.y;
    const u32 Uh_5tlreg41620 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41621 = _Int32ToInt32(Uh_5tlreg41620, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41623 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41624 = _Int32ToInt32(Uh_5tlreg41623, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41625 = _BinOpMultiplyInt32(Uh_5tlreg41624, Uh_5tlreg41621, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41628 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41629 = _Int32ToInt32(Uh_5tlreg41628, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41631 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41632 = _Int32ToInt32(Uh_5tlreg41631, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41633 = _BinOpMultiplyInt32(Uh_5tlreg41632, Uh_5tlreg41629, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41634 = _BinOpAddInt32(Uh_5tlreg41633, Uh_5tlreg41625, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval41635(Uh_5tlreg41634); //gcnl:Node.cpp:1142
    return (Uh_5tlval41635); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3dot



//! C2D.inc:123:   Int operator*(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_9211_operator2a(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:124:     return dot(other);
    const u32 Uh_5tlreg41638 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41639(Uh_5tlreg41638); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41641 = THE_INSTANCE.Uf_3dot(uc, ur, Uh_5tlval41639); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41642 = Uh_5tlval41641.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uh_5tlval41643(Uh_5tlreg41642); //gcnl:Node.cpp:1142
    return (Uh_5tlval41643); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2a



//! C2D.inc:127:   Self add(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3add(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:128:     return make((Coord) (x + other.x), (Coord) (y + other.y));
    const u32 Uh_5tlreg41647 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41648 = _Int32ToInt32(Uh_5tlreg41647, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41650 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41651 = _Int32ToInt32(Uh_5tlreg41650, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41652 = _BinOpAddInt32(Uh_5tlreg41651, Uh_5tlreg41648, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41653 = _Int32ToInt32(Uh_5tlreg41652, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41654 = _Int32ToInt32(Uh_5tlreg41653, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41655(Uh_5tlreg41654); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41658 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41659 = _Int32ToInt32(Uh_5tlreg41658, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41661 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41662 = _Int32ToInt32(Uh_5tlreg41661, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41663 = _BinOpAddInt32(Uh_5tlreg41662, Uh_5tlreg41659, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41664 = _Int32ToInt32(Uh_5tlreg41663, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41665 = _Int32ToInt32(Uh_5tlreg41664, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41666(Uh_5tlreg41665); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41668 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41655, Uh_5tlval41666); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41669(Uh_5tlval41668); //gcnl:Node.cpp:1142
    return (Uh_5tlval41669); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3add



//! C2D.inc:131:   Self operator+(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:132:     return add(other);
    const u32 Uh_5tlreg41672 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41673(Uh_5tlreg41672); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41675 = THE_INSTANCE.Uf_3add(uc, ur, Uh_5tlval41673); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41676(Uh_5tlval41675); //gcnl:Node.cpp:1142
    return (Uh_5tlval41676); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:151:   Self operator+() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:152:     return self;
    const u32 Uh_5tlreg41678 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41679(Uh_5tlreg41678); //gcnl:Node.cpp:1142
    return (Uh_5tlval41679); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:135:   Self subtract(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8subtract(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:136:     return make((Coord) (x - other.x), (Coord) (y - other.y));
    const u32 Uh_5tlreg41683 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41684 = _Int32ToInt32(Uh_5tlreg41683, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41686 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41687 = _Int32ToInt32(Uh_5tlreg41686, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41688 = _BinOpSubtractInt32(Uh_5tlreg41687, Uh_5tlreg41684, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41689 = _Int32ToInt32(Uh_5tlreg41688, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41690 = _Int32ToInt32(Uh_5tlreg41689, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41691(Uh_5tlreg41690); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41694 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41695 = _Int32ToInt32(Uh_5tlreg41694, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41697 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41698 = _Int32ToInt32(Uh_5tlreg41697, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41699 = _BinOpSubtractInt32(Uh_5tlreg41698, Uh_5tlreg41695, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41700 = _Int32ToInt32(Uh_5tlreg41699, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41701 = _Int32ToInt32(Uh_5tlreg41700, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41702(Uh_5tlreg41701); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41704 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41691, Uh_5tlval41702); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41705(Uh_5tlval41704); //gcnl:Node.cpp:1142
    return (Uh_5tlval41705); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8subtract



//! C2D.inc:139:   Self operator-(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:140:     return subtract(other);
    const u32 Uh_5tlreg41708 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41709(Uh_5tlreg41708); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41711 = THE_INSTANCE.Uf_8subtract(uc, ur, Uh_5tlval41709); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41712(Uh_5tlval41711); //gcnl:Node.cpp:1142
    return (Uh_5tlval41712); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:147:   Self operator-() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:148:     return negate();
    Ui_Uq_102323C2D10<EC> Uh_5tlval41715 = THE_INSTANCE.Uf_6negate(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41716(Uh_5tlval41715); //gcnl:Node.cpp:1142
    return (Uh_5tlval41716); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:143:   Self negate() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6negate(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:144:     return make((Coord) -(Int) x, (Coord) -(Int) y);
    const u32 Uh_5tlreg41719 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41720 = _Int32ToInt32(Uh_5tlreg41719, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41721 = _UnaryMinusInt32(Uh_5tlreg41720, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41722 = _Int32ToInt32(Uh_5tlreg41721, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41723 = _Int32ToInt32(Uh_5tlreg41722, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41724(Uh_5tlreg41723); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41726 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41727 = _Int32ToInt32(Uh_5tlreg41726, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41728 = _UnaryMinusInt32(Uh_5tlreg41727, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41729 = _Int32ToInt32(Uh_5tlreg41728, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41730 = _Int32ToInt32(Uh_5tlreg41729, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41731(Uh_5tlreg41730); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41733 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41724, Uh_5tlval41731); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41734(Uh_5tlval41733); //gcnl:Node.cpp:1142
    return (Uh_5tlval41734); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6negate



//! C2D.inc:158:   Self neighbor(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8neighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
    {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
      const u32 Uh_5tlreg41735 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41736 = _Int32ToInt32(Uh_5tlreg41735, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41738 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41739 = _Unsigned32ToInt32(Uh_5tlreg41738, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41740 = _BinOpCompareEqEqInt32(Uh_5tlreg41739, Uh_5tlreg41736, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41740, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
          const u32 Uh_5tlreg41742 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41743 = _Int32ToInt32(Uh_5tlreg41742, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41744(Uh_5tlreg41743); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41745 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41746 = _Int32ToInt32(Uh_5tlreg41745, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41747(Uh_5tlreg41746); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41749 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41744, Uh_5tlval41747); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41750(Uh_5tlval41749); //gcnl:Node.cpp:1142
          return (Uh_5tlval41750); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:160:     if (d==1) return make( 1, 1);
    {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
      const u32 Uh_5tlreg41751 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41752 = _Int32ToInt32(Uh_5tlreg41751, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41754 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41755 = _Unsigned32ToInt32(Uh_5tlreg41754, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41756 = _BinOpCompareEqEqInt32(Uh_5tlreg41755, Uh_5tlreg41752, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41756, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
          const u32 Uh_5tlreg41758 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41759 = _Int32ToInt32(Uh_5tlreg41758, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41760(Uh_5tlreg41759); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41761 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41762 = _Int32ToInt32(Uh_5tlreg41761, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41763(Uh_5tlreg41762); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41765 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41760, Uh_5tlval41763); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41766(Uh_5tlval41765); //gcnl:Node.cpp:1142
          return (Uh_5tlval41766); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:161:     if (d==2) return make( 1, 0);
    {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
      const u32 Uh_5tlreg41767 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41768 = _Int32ToInt32(Uh_5tlreg41767, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41770 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41771 = _Unsigned32ToInt32(Uh_5tlreg41770, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41772 = _BinOpCompareEqEqInt32(Uh_5tlreg41771, Uh_5tlreg41768, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41772, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
          const u32 Uh_5tlreg41774 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41775 = _Int32ToInt32(Uh_5tlreg41774, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41776(Uh_5tlreg41775); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41777 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41778 = _Int32ToInt32(Uh_5tlreg41777, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41779(Uh_5tlreg41778); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41781 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41776, Uh_5tlval41779); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41782(Uh_5tlval41781); //gcnl:Node.cpp:1142
          return (Uh_5tlval41782); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:162:     if (d==3) return make( 1,-1);
    {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
      const u32 Uh_5tlreg41783 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41784 = _Int32ToInt32(Uh_5tlreg41783, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41786 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41787 = _Unsigned32ToInt32(Uh_5tlreg41786, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41788 = _BinOpCompareEqEqInt32(Uh_5tlreg41787, Uh_5tlreg41784, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41788, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
          const u32 Uh_5tlreg41790 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41791 = _Int32ToInt32(Uh_5tlreg41790, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41792(Uh_5tlreg41791); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41793 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41794 = _Int32ToInt32(Uh_5tlreg41793, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41795(Uh_5tlreg41794); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41797 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41792, Uh_5tlval41795); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41798(Uh_5tlval41797); //gcnl:Node.cpp:1142
          return (Uh_5tlval41798); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:163:     if (d==4) return make( 0,-1);
    {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
      const u32 Uh_5tlreg41799 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41801 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41802 = _Unsigned32ToInt32(Uh_5tlreg41801, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41803 = _BinOpCompareEqEqInt32(Uh_5tlreg41802, Uh_5tlreg41799, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41803, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
          const u32 Uh_5tlreg41805 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41806 = _Int32ToInt32(Uh_5tlreg41805, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41807(Uh_5tlreg41806); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41808 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41809 = _Int32ToInt32(Uh_5tlreg41808, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41810(Uh_5tlreg41809); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41812 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41807, Uh_5tlval41810); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41813(Uh_5tlval41812); //gcnl:Node.cpp:1142
          return (Uh_5tlval41813); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:164:     if (d==5) return make(-1,-1);
    {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
      const u32 Uh_5tlreg41814 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41816 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41817 = _Unsigned32ToInt32(Uh_5tlreg41816, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41818 = _BinOpCompareEqEqInt32(Uh_5tlreg41817, Uh_5tlreg41814, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41818, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
          const u32 Uh_5tlreg41820 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41821 = _Int32ToInt32(Uh_5tlreg41820, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41822(Uh_5tlreg41821); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41823 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41824 = _Int32ToInt32(Uh_5tlreg41823, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41825(Uh_5tlreg41824); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41827 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41822, Uh_5tlval41825); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41828(Uh_5tlval41827); //gcnl:Node.cpp:1142
          return (Uh_5tlval41828); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:165:     if (d==6) return make(-1, 0);
    {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
      const u32 Uh_5tlreg41829 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41831 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41832 = _Unsigned32ToInt32(Uh_5tlreg41831, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41833 = _BinOpCompareEqEqInt32(Uh_5tlreg41832, Uh_5tlreg41829, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41833, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
          const u32 Uh_5tlreg41835 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41836 = _Int32ToInt32(Uh_5tlreg41835, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41837(Uh_5tlreg41836); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41838 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41839 = _Int32ToInt32(Uh_5tlreg41838, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41840(Uh_5tlreg41839); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41842 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41837, Uh_5tlval41840); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41843(Uh_5tlval41842); //gcnl:Node.cpp:1142
          return (Uh_5tlval41843); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:166:     /* d==7*/ return make(-1, 1);
    const u32 Uh_5tlreg41845 = (u32) -1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41846 = _Int32ToInt32(Uh_5tlreg41845, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41847(Uh_5tlreg41846); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41848 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41849 = _Int32ToInt32(Uh_5tlreg41848, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41850(Uh_5tlreg41849); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41852 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41847, Uh_5tlval41850); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41853(Uh_5tlval41852); //gcnl:Node.cpp:1142
    return (Uh_5tlval41853); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8neighbor



//! C2D.inc:172:   Self corner(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6corner(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
    {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
      const u32 Uh_5tlreg41854 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41855 = _Int32ToInt32(Uh_5tlreg41854, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41857 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41858 = _Unsigned32ToInt32(Uh_5tlreg41857, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41859 = _BinOpCompareEqEqInt32(Uh_5tlreg41858, Uh_5tlreg41855, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41859, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
          const u32 Uh_5tlreg41861 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41862 = _Int32ToInt32(Uh_5tlreg41861, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41863(Uh_5tlreg41862); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41864 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41865 = _Int32ToInt32(Uh_5tlreg41864, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41866(Uh_5tlreg41865); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41868 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41863, Uh_5tlval41866); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41869(Uh_5tlval41868); //gcnl:Node.cpp:1142
          return (Uh_5tlval41869); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:174:     if (d==1) return make( 2, 2);
    {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
      const u32 Uh_5tlreg41870 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41871 = _Int32ToInt32(Uh_5tlreg41870, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41873 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41874 = _Unsigned32ToInt32(Uh_5tlreg41873, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41875 = _BinOpCompareEqEqInt32(Uh_5tlreg41874, Uh_5tlreg41871, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41875, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
          const u32 Uh_5tlreg41877 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41878 = _Int32ToInt32(Uh_5tlreg41877, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41879(Uh_5tlreg41878); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41880 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41881 = _Int32ToInt32(Uh_5tlreg41880, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41882(Uh_5tlreg41881); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41884 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41879, Uh_5tlval41882); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41885(Uh_5tlval41884); //gcnl:Node.cpp:1142
          return (Uh_5tlval41885); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:175:     if (d==2) return make( 4, 0);
    {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
      const u32 Uh_5tlreg41886 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41887 = _Int32ToInt32(Uh_5tlreg41886, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41889 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41890 = _Unsigned32ToInt32(Uh_5tlreg41889, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41891 = _BinOpCompareEqEqInt32(Uh_5tlreg41890, Uh_5tlreg41887, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41891, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
          const u32 Uh_5tlreg41893 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41894 = _Int32ToInt32(Uh_5tlreg41893, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41895(Uh_5tlreg41894); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41896 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41897 = _Int32ToInt32(Uh_5tlreg41896, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41898(Uh_5tlreg41897); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41900 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41895, Uh_5tlval41898); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41901(Uh_5tlval41900); //gcnl:Node.cpp:1142
          return (Uh_5tlval41901); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:176:     if (d==3) return make( 2,-2);
    {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
      const u32 Uh_5tlreg41902 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41903 = _Int32ToInt32(Uh_5tlreg41902, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41905 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41906 = _Unsigned32ToInt32(Uh_5tlreg41905, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41907 = _BinOpCompareEqEqInt32(Uh_5tlreg41906, Uh_5tlreg41903, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41907, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
          const u32 Uh_5tlreg41909 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41910 = _Int32ToInt32(Uh_5tlreg41909, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41911(Uh_5tlreg41910); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41912 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41913 = _Int32ToInt32(Uh_5tlreg41912, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41914(Uh_5tlreg41913); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41916 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41911, Uh_5tlval41914); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41917(Uh_5tlval41916); //gcnl:Node.cpp:1142
          return (Uh_5tlval41917); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:177:     if (d==4) return make( 0,-4);
    {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
      const u32 Uh_5tlreg41918 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41920 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41921 = _Unsigned32ToInt32(Uh_5tlreg41920, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41922 = _BinOpCompareEqEqInt32(Uh_5tlreg41921, Uh_5tlreg41918, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41922, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
          const u32 Uh_5tlreg41924 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41925 = _Int32ToInt32(Uh_5tlreg41924, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41926(Uh_5tlreg41925); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41927 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41928 = _Int32ToInt32(Uh_5tlreg41927, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41929(Uh_5tlreg41928); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41931 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41926, Uh_5tlval41929); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41932(Uh_5tlval41931); //gcnl:Node.cpp:1142
          return (Uh_5tlval41932); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:178:     if (d==5) return make(-2,-2);
    {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
      const u32 Uh_5tlreg41933 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41935 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41936 = _Unsigned32ToInt32(Uh_5tlreg41935, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41937 = _BinOpCompareEqEqInt32(Uh_5tlreg41936, Uh_5tlreg41933, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41937, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
          const u32 Uh_5tlreg41939 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41940 = _Int32ToInt32(Uh_5tlreg41939, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41941(Uh_5tlreg41940); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41942 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41943 = _Int32ToInt32(Uh_5tlreg41942, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41944(Uh_5tlreg41943); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41946 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41941, Uh_5tlval41944); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41947(Uh_5tlval41946); //gcnl:Node.cpp:1142
          return (Uh_5tlval41947); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:179:     if (d==6) return make(-4, 0);
    {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
      const u32 Uh_5tlreg41948 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41950 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41951 = _Unsigned32ToInt32(Uh_5tlreg41950, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41952 = _BinOpCompareEqEqInt32(Uh_5tlreg41951, Uh_5tlreg41948, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41952, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
          const u32 Uh_5tlreg41954 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41955 = _Int32ToInt32(Uh_5tlreg41954, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41956(Uh_5tlreg41955); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41957 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41958 = _Int32ToInt32(Uh_5tlreg41957, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41959(Uh_5tlreg41958); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41961 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41956, Uh_5tlval41959); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41962(Uh_5tlval41961); //gcnl:Node.cpp:1142
          return (Uh_5tlval41962); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:180:     /* d==7*/ return make(-2, 2);
    const u32 Uh_5tlreg41964 = (u32) -2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41965 = _Int32ToInt32(Uh_5tlreg41964, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41966(Uh_5tlreg41965); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41967 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41968 = _Int32ToInt32(Uh_5tlreg41967, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41969(Uh_5tlreg41968); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41971 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41966, Uh_5tlval41969); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41972(Uh_5tlval41971); //gcnl:Node.cpp:1142
    return (Uh_5tlval41972); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6corner



//! C2D.inc:183:   Unsigned length() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_6length(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:184:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:185:     return origin.manhattanDistance(self);
    UlamRef<EC> Uh_3tur41974(0u, 32u, Uv_6origin, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41976 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41977(Uh_5tlreg41976); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41979 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9217manhattanDistance(uc, Uh_3tur41974, Uh_5tlval41977); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41980 = Uh_5tlval41979.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41981(Uh_5tlreg41980); //gcnl:Node.cpp:1142
    return (Uh_5tlval41981); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6length



//! C2D.inc:202:   Unsigned manhattanDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9217manhattanDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:203:     Self a = abs(self-other);
    const u32 Uh_5tlreg41986 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41987(Uh_5tlreg41986); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41989 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41987); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41990(Uh_5tlval41989); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41992 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval41990); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_1a(Uh_5tlval41992); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:204:     return (Unsigned) (a.x + a.y);
    const u32 Uh_5tlreg41995 = UlamRef<EC>(16u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41996 = _Int32ToInt32(Uh_5tlreg41995, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41999 = UlamRef<EC>(0u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42000 = _Int32ToInt32(Uh_5tlreg41999, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42001 = _BinOpAddInt32(Uh_5tlreg42000, Uh_5tlreg41996, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42002 = _Int32ToUnsigned32(Uh_5tlreg42001, 17, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42003(Uh_5tlreg42002); //gcnl:Node.cpp:1142
    return (Uh_5tlval42003); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217manhattanDistance



//! C2D.inc:188:   Bool isOrigin() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8isOrigin(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:189:     return x == 0 && y == 0;
    u32 Uh_5tlreg42004 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg42005 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42006 = _Int32ToInt32(Uh_5tlreg42005, 2, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42008 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg42009 = _BinOpCompareEqEqInt32(Uh_5tlreg42008, Uh_5tlreg42006, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg42009, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg42010 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42011 = _Int32ToInt32(Uh_5tlreg42010, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42013 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42014 = _BinOpCompareEqEqInt32(Uh_5tlreg42013, Uh_5tlreg42011, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg42004 = Uh_5tlreg42014; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval42015(Uh_5tlreg42004); //gcnl:Node.cpp:1142
    return (Uh_5tlval42015); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8isOrigin



//! C2D.inc:196:   Self abs(Self of) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_2of) const
  {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
    {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
      const u32 Uh_5tlreg42016 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42017 = _Int32ToInt32(Uh_5tlreg42016, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42020 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42021 = _BinOpCompareLessThanInt32(Uh_5tlreg42020, Uh_5tlreg42017, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42021, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
          const u32 Uh_5tlreg42024 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42025 = _UnaryMinusInt32(Uh_5tlreg42024, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg42025); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
    {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
      const u32 Uh_5tlreg42028 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42029 = _Int32ToInt32(Uh_5tlreg42028, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42032 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42033 = _BinOpCompareLessThanInt32(Uh_5tlreg42032, Uh_5tlreg42029, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42033, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
          const u32 Uh_5tlreg42036 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42037 = _UnaryMinusInt32(Uh_5tlreg42036, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg42037); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:199:     return of;
    const u32 Uh_5tlreg42041 = Uv_2of.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval42042(Uh_5tlreg42041); //gcnl:Node.cpp:1142
    return (Uh_5tlval42042); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:192:   Self abs() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:193:     return abs(self);
    const u32 Uh_5tlreg42045 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval42046(Uh_5tlreg42045); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval42048 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval42046); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval42049(Uh_5tlval42048); //gcnl:Node.cpp:1142
    return (Uh_5tlval42049); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:210:   Unsigned euclideanSquaredDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9224euclideanSquaredDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:211:     Self diff = self-other;
    const u32 Uh_5tlreg42053 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval42054(Uh_5tlreg42053); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval42056 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval42054); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_4diff(Uh_5tlval42056); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:212:     return diff.euclideanSquaredLength();
    UlamRef<EC> Uh_3tur42058(0u, 32u, Uv_4diff, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321u<EC> Uh_5tlval42060 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9222euclideanSquaredLength(uc, Uh_3tur42058); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42061 = Uh_5tlval42060.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval42062(Uh_5tlreg42061); //gcnl:Node.cpp:1142
    return (Uh_5tlval42062); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9224euclideanSquaredDistance



//! C2D.inc:218:   Unsigned euclideanSquaredLength() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9222euclideanSquaredLength(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:219:     return (Unsigned) (self * self);
    const u32 Uh_5tlreg42066 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval42067(Uh_5tlreg42066); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval42069 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2a(uc, ur, Uh_5tlval42067); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42070 = Uh_5tlval42069.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg42071 = _Int32ToUnsigned32(Uh_5tlreg42070, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42072(Uh_5tlreg42071); //gcnl:Node.cpp:1142
    return (Uh_5tlval42072); //gcnl:NodeReturnStatement.cpp:343

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

