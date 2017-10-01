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
    const u32 Uh_5tlreg41164 = UlamRef<EC>(0u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41164); //gcnl:Node.cpp:892

//! C2D.inc:15:     y = s.y;
    const u32 Uh_5tlreg41168 = UlamRef<EC>(16u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41168); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:8:   Self(Coord ax, Coord ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4Self(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2ax, Ui_Ut_102161i<EC>& Uv_2ay) const
  {

//! C2D.inc:9:     x = ax;
    const u32 Uh_5tlreg41171 = Uv_2ax.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41171); //gcnl:Node.cpp:892

//! C2D.inc:10:     y = ay;
    const u32 Uh_5tlreg41174 = Uv_2ay.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41174); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:23:   Void set(Self c) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_1c) const
  {

//! C2D.inc:24:     set(c.x, c.y);
    const u32 Uh_5tlreg41179 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41180 = _Int32ToInt32(Uh_5tlreg41179, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41181(Uh_5tlreg41180); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41184 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41185 = _Int32ToInt32(Uh_5tlreg41184, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41186(Uh_5tlreg41185); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval41181, Uh_5tlval41186); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_3set



//! C2D.inc:18:   Void set(Int ax, Int ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:19:     x = (Coord) ax;
    const u32 Uh_5tlreg41189 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41190 = _Int32ToInt32(Uh_5tlreg41189, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41190); //gcnl:Node.cpp:892

//! C2D.inc:20:     y = (Coord) ay;
    const u32 Uh_5tlreg41193 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41194 = _Int32ToInt32(Uh_5tlreg41193, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41194); //gcnl:Node.cpp:892

  } // Uf_3set



//! C2D.inc:27:   Self & operator=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:28:     set(other);
    const u32 Uh_5tlreg41198 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41199(Uh_5tlreg41198); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval41199); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:29:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41202(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41202); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9211_operator3d



//! C2D.inc:32:   Self & operator+=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2b3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:35:     self = self + other;  
    const u32 Uh_5tlreg41208 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41209(Uh_5tlreg41208); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41211 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2b(uc, ur, Uh_5tlval41209); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41212(Uh_5tlval41211); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41214 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41212); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:36:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41216(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41216); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2b3d



//! C2D.inc:39:   Self & operator-=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:40:     self = self - other;
    const u32 Uh_5tlreg41222 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41223(Uh_5tlreg41222); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41225 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41223); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41226(Uh_5tlval41225); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41228 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41226); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:41:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41230(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41230); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2d3d



//! C2D.inc:44:   Self clamp(Self below, Self above) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_5clamp(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5below, Ui_Uq_102323C2D10<EC>& Uv_5above) const
  {

//! C2D.inc:45:     return (self | below) & above;
    const u32 Uh_5tlreg41234 = Uv_5below.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41235(Uh_5tlreg41234); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41237 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval41235); //gcnl:NodeFunctionCall.cpp:1043
    UlamRef<EC> Uh_3tur41238(0u, 32u, Uh_5tlval41237, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41240 = Uv_5above.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41241(Uh_5tlreg41240); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41243 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, Uh_3tur41238, Uh_5tlval41241); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41244(Uh_5tlval41243); //gcnl:Node.cpp:1142
    return (Uh_5tlval41244); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5clamp



//! C2D.inc:48:   Int getX() { return (Int) x; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getX(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:48:   Int getX() { return (Int) x; }
    const u32 Uh_5tlreg41246 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41247 = _Int32ToInt32(Uh_5tlreg41246, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41248(Uh_5tlreg41247); //gcnl:Node.cpp:1142
    return (Uh_5tlval41248); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getX



//! C2D.inc:49:   Int getY() { return (Int) y; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getY(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:49:   Int getY() { return (Int) y; }
    const u32 Uh_5tlreg41250 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41251 = _Int32ToInt32(Uh_5tlreg41250, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41252(Uh_5tlreg41251); //gcnl:Node.cpp:1142
    return (Uh_5tlval41252); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getY



//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setX(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax) const
  {

//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_5tlreg41254 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41255 = _Int32ToInt32(Uh_5tlreg41254, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41255); //gcnl:Node.cpp:892

  } // Uf_4setX



//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setY(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_5tlreg41258 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41259 = _Int32ToInt32(Uh_5tlreg41258, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41259); //gcnl:Node.cpp:892

  } // Uf_4setY



//! C2D.inc:54:   Self make(Int x, Int y)
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_4make(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1x, Ui_Ut_102321i<EC>& Uv_1y) const
  {

//! C2D.inc:56:     Self ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:57:     ret.set(x,y);
    UlamRef<EC> Uh_3tur41262(0u, 32u, Uv_3ret, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41264 = Uv_1x.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41265(Uh_5tlreg41264); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41267 = Uv_1y.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41268(Uh_5tlreg41267); //gcnl:Node.cpp:1142
    Uq_102323C2D10<EC>::THE_INSTANCE.Uf_3set(uc, Uh_3tur41262, Uh_5tlval41265, Uh_5tlval41268); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:58:     return ret;
    const u32 Uh_5tlreg41271 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41272(Uh_5tlreg41271); //gcnl:Node.cpp:1142
    return (Uh_5tlval41272); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4make



//! C2D.inc:61:   Bool equals(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_6equals(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:62:     return x == other.x && y == other.y;
    u32 Uh_5tlreg41273 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41276 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41278 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41279 = _BinOpCompareEqEqInt32(Uh_5tlreg41278, Uh_5tlreg41276, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41279, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41282 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41284 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41285 = _BinOpCompareEqEqInt32(Uh_5tlreg41284, Uh_5tlreg41282, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg41273 = Uh_5tlreg41285; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41286(Uh_5tlreg41273); //gcnl:Node.cpp:1142
    return (Uh_5tlval41286); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6equals



//! C2D.inc:65:   Bool operator==(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator3d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:66:     return equals(other);
    const u32 Uh_5tlreg41289 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41290(Uh_5tlreg41289); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41292 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval41290); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41293 = Uh_5tlval41292.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41294(Uh_5tlreg41293); //gcnl:Node.cpp:1142
    return (Uh_5tlval41294); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator3d3d



//! C2D.inc:69:   Bool operator!=(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator213d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:70:     return !equals(other);
    const u32 Uh_5tlreg41297 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41298(Uh_5tlreg41297); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41300 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval41298); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41301 = Uh_5tlval41300.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41302 = _LogicalBangBool32(Uh_5tlreg41301, 1); //gcnl:NodeUnaryOp.cpp:507
    Ui_Ut_10111b<EC> Uh_5tlval41303(Uh_5tlreg41302); //gcnl:Node.cpp:1142
    return (Uh_5tlval41303); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator213d



//! C2D.inc:73:   Self max(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3max(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
    {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
      const u32 Uh_5tlreg41306 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41309 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41310 = _BinOpCompareLessThanInt32(Uh_5tlreg41309, Uh_5tlreg41306, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41310, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
          const u32 Uh_5tlreg41313 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41313); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
    {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
      const u32 Uh_5tlreg41318 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41321 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41322 = _BinOpCompareLessThanInt32(Uh_5tlreg41321, Uh_5tlreg41318, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41322, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
          const u32 Uh_5tlreg41325 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41325); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:76:     return other;
    const u32 Uh_5tlreg41329 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41330(Uh_5tlreg41329); //gcnl:Node.cpp:1142
    return (Uh_5tlval41330); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3max



//! C2D.inc:79:   Self operator|(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator7c(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:80:     return max(other);
    const u32 Uh_5tlreg41333 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41334(Uh_5tlreg41333); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41336 = THE_INSTANCE.Uf_3max(uc, ur, Uh_5tlval41334); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41337(Uh_5tlval41336); //gcnl:Node.cpp:1142
    return (Uh_5tlval41337); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator7c



//! C2D.inc:83:   Self& operator|=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator7c3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:84:     self = self | other;
    const u32 Uh_5tlreg41343 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41344(Uh_5tlreg41343); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41346 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval41344); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41347(Uh_5tlval41346); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41349 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41347); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:85:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41351(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41351); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator7c3d



//! C2D.inc:88:   Self min(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3min(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
    {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
      const u32 Uh_5tlreg41354 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41357 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41358 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41357, Uh_5tlreg41354, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41358, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
          const u32 Uh_5tlreg41361 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41361); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
    {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
      const u32 Uh_5tlreg41366 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41369 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41370 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41369, Uh_5tlreg41366, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41370, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
          const u32 Uh_5tlreg41373 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41373); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:91:     return other;
    const u32 Uh_5tlreg41377 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41378(Uh_5tlreg41377); //gcnl:Node.cpp:1142
    return (Uh_5tlval41378); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3min



//! C2D.inc:94:   Self operator&(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator26(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:95:     return min(other);
    const u32 Uh_5tlreg41381 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41382(Uh_5tlreg41381); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41384 = THE_INSTANCE.Uf_3min(uc, ur, Uh_5tlval41382); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41385(Uh_5tlval41384); //gcnl:Node.cpp:1142
    return (Uh_5tlval41385); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator26



//! C2D.inc:98:   Self& operator&=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator263d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:99:     self = self & other;
    const u32 Uh_5tlreg41391 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41392(Uh_5tlreg41391); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41394 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, ur, Uh_5tlval41392); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41395(Uh_5tlval41394); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41397 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41395); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:100:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41399(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41399); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator263d



//! C2D.inc:109:   Bool contains(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8contains(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:110:     Int sx = self.getX();
    const Ui_Ut_102321i<EC> Uh_5tlval41403 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41404 = Uh_5tlval41403.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sx(Uh_5tlreg41404); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:111:     Int sy = self.getY();
    const Ui_Ut_102321i<EC> Uh_5tlval41408 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41409 = Uh_5tlval41408.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sy(Uh_5tlreg41409); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:112:     Int ox = other.getX();
    UlamRef<EC> Uh_3tur41411(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval41413 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, Uh_3tur41411); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41414 = Uh_5tlval41413.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2ox(Uh_5tlreg41414); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:113:     Int oy = other.getY();
    UlamRef<EC> Uh_3tur41416(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval41418 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, Uh_3tur41416); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41419 = Uh_5tlval41418.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2oy(Uh_5tlreg41419); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
    {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
      u32 Uh_5tlreg41420 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg41421 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41422 = _Int32ToInt32(Uh_5tlreg41421, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41424 = Uv_2ox.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41425 = _BinOpCompareLessThanInt32(Uh_5tlreg41424, Uh_5tlreg41422, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg41425, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg41427 = Uv_2sx.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41429 = Uv_2ox.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41430 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg41429, Uh_5tlreg41427, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41420 = Uh_5tlreg41430; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg41420 = Uh_5tlreg41425; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg41420, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
          const u32 Uh_5tlreg41431 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval41432(Uh_5tlreg41431); //gcnl:Node.cpp:1142
          return (Uh_5tlval41432); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
    {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
      u32 Uh_5tlreg41433 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg41434 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41435 = _Int32ToInt32(Uh_5tlreg41434, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41437 = Uv_2oy.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41438 = _BinOpCompareLessThanInt32(Uh_5tlreg41437, Uh_5tlreg41435, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg41438, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg41440 = Uv_2sy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41442 = Uv_2oy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41443 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg41442, Uh_5tlreg41440, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41433 = Uh_5tlreg41443; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg41433 = Uh_5tlreg41438; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg41433, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
          const u32 Uh_5tlreg41444 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval41445(Uh_5tlreg41444); //gcnl:Node.cpp:1142
          return (Uh_5tlval41445); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:116:     return true;
    const u32 Uh_5tlreg41446 = 1u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval41447(Uh_5tlreg41446); //gcnl:Node.cpp:1142
    return (Uh_5tlval41447); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8contains



//! C2D.inc:119:   Int dot(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_3dot(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:120:     return x * other.x + y * other.y;
    const u32 Uh_5tlreg41450 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41451 = _Int32ToInt32(Uh_5tlreg41450, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41453 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41454 = _Int32ToInt32(Uh_5tlreg41453, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41455 = _BinOpMultiplyInt32(Uh_5tlreg41454, Uh_5tlreg41451, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41458 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41459 = _Int32ToInt32(Uh_5tlreg41458, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41461 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41462 = _Int32ToInt32(Uh_5tlreg41461, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41463 = _BinOpMultiplyInt32(Uh_5tlreg41462, Uh_5tlreg41459, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41464 = _BinOpAddInt32(Uh_5tlreg41463, Uh_5tlreg41455, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval41465(Uh_5tlreg41464); //gcnl:Node.cpp:1142
    return (Uh_5tlval41465); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3dot



//! C2D.inc:123:   Int operator*(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_9211_operator2a(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:124:     return dot(other);
    const u32 Uh_5tlreg41468 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41469(Uh_5tlreg41468); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41471 = THE_INSTANCE.Uf_3dot(uc, ur, Uh_5tlval41469); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41472 = Uh_5tlval41471.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uh_5tlval41473(Uh_5tlreg41472); //gcnl:Node.cpp:1142
    return (Uh_5tlval41473); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2a



//! C2D.inc:127:   Self add(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3add(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:128:     return make((Coord) (x + other.x), (Coord) (y + other.y));
    const u32 Uh_5tlreg41477 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41478 = _Int32ToInt32(Uh_5tlreg41477, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41480 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41481 = _Int32ToInt32(Uh_5tlreg41480, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41482 = _BinOpAddInt32(Uh_5tlreg41481, Uh_5tlreg41478, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41483 = _Int32ToInt32(Uh_5tlreg41482, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41484 = _Int32ToInt32(Uh_5tlreg41483, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41485(Uh_5tlreg41484); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41488 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41489 = _Int32ToInt32(Uh_5tlreg41488, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41491 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41492 = _Int32ToInt32(Uh_5tlreg41491, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41493 = _BinOpAddInt32(Uh_5tlreg41492, Uh_5tlreg41489, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41494 = _Int32ToInt32(Uh_5tlreg41493, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41495 = _Int32ToInt32(Uh_5tlreg41494, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41496(Uh_5tlreg41495); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41498 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41485, Uh_5tlval41496); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41499(Uh_5tlval41498); //gcnl:Node.cpp:1142
    return (Uh_5tlval41499); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3add



//! C2D.inc:131:   Self operator+(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:132:     return add(other);
    const u32 Uh_5tlreg41502 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41503(Uh_5tlreg41502); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41505 = THE_INSTANCE.Uf_3add(uc, ur, Uh_5tlval41503); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41506(Uh_5tlval41505); //gcnl:Node.cpp:1142
    return (Uh_5tlval41506); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:151:   Self operator+() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:152:     return self;
    const u32 Uh_5tlreg41508 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41509(Uh_5tlreg41508); //gcnl:Node.cpp:1142
    return (Uh_5tlval41509); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:135:   Self subtract(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8subtract(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:136:     return make((Coord) (x - other.x), (Coord) (y - other.y));
    const u32 Uh_5tlreg41513 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41514 = _Int32ToInt32(Uh_5tlreg41513, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41516 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41517 = _Int32ToInt32(Uh_5tlreg41516, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41518 = _BinOpSubtractInt32(Uh_5tlreg41517, Uh_5tlreg41514, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41519 = _Int32ToInt32(Uh_5tlreg41518, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41520 = _Int32ToInt32(Uh_5tlreg41519, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41521(Uh_5tlreg41520); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41524 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41525 = _Int32ToInt32(Uh_5tlreg41524, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41527 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41528 = _Int32ToInt32(Uh_5tlreg41527, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41529 = _BinOpSubtractInt32(Uh_5tlreg41528, Uh_5tlreg41525, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41530 = _Int32ToInt32(Uh_5tlreg41529, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41531 = _Int32ToInt32(Uh_5tlreg41530, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41532(Uh_5tlreg41531); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41534 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41521, Uh_5tlval41532); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41535(Uh_5tlval41534); //gcnl:Node.cpp:1142
    return (Uh_5tlval41535); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8subtract



//! C2D.inc:139:   Self operator-(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:140:     return subtract(other);
    const u32 Uh_5tlreg41538 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41539(Uh_5tlreg41538); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41541 = THE_INSTANCE.Uf_8subtract(uc, ur, Uh_5tlval41539); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41542(Uh_5tlval41541); //gcnl:Node.cpp:1142
    return (Uh_5tlval41542); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:147:   Self operator-() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:148:     return negate();
    Ui_Uq_102323C2D10<EC> Uh_5tlval41545 = THE_INSTANCE.Uf_6negate(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41546(Uh_5tlval41545); //gcnl:Node.cpp:1142
    return (Uh_5tlval41546); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:143:   Self negate() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6negate(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:144:     return make((Coord) -(Int) x, (Coord) -(Int) y);
    const u32 Uh_5tlreg41549 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41550 = _Int32ToInt32(Uh_5tlreg41549, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41551 = _UnaryMinusInt32(Uh_5tlreg41550, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41552 = _Int32ToInt32(Uh_5tlreg41551, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41553 = _Int32ToInt32(Uh_5tlreg41552, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41554(Uh_5tlreg41553); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41556 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41557 = _Int32ToInt32(Uh_5tlreg41556, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41558 = _UnaryMinusInt32(Uh_5tlreg41557, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41559 = _Int32ToInt32(Uh_5tlreg41558, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41560 = _Int32ToInt32(Uh_5tlreg41559, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41561(Uh_5tlreg41560); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41563 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41554, Uh_5tlval41561); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41564(Uh_5tlval41563); //gcnl:Node.cpp:1142
    return (Uh_5tlval41564); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6negate



//! C2D.inc:158:   Self neighbor(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8neighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
    {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
      const u32 Uh_5tlreg41565 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41566 = _Int32ToInt32(Uh_5tlreg41565, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41568 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41569 = _Unsigned32ToInt32(Uh_5tlreg41568, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41570 = _BinOpCompareEqEqInt32(Uh_5tlreg41569, Uh_5tlreg41566, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41570, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
          const u32 Uh_5tlreg41572 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41573 = _Int32ToInt32(Uh_5tlreg41572, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41574(Uh_5tlreg41573); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41575 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41576 = _Int32ToInt32(Uh_5tlreg41575, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41577(Uh_5tlreg41576); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41579 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41574, Uh_5tlval41577); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41580(Uh_5tlval41579); //gcnl:Node.cpp:1142
          return (Uh_5tlval41580); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:160:     if (d==1) return make( 1, 1);
    {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
      const u32 Uh_5tlreg41581 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41582 = _Int32ToInt32(Uh_5tlreg41581, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41584 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41585 = _Unsigned32ToInt32(Uh_5tlreg41584, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41586 = _BinOpCompareEqEqInt32(Uh_5tlreg41585, Uh_5tlreg41582, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41586, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
          const u32 Uh_5tlreg41588 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41589 = _Int32ToInt32(Uh_5tlreg41588, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41590(Uh_5tlreg41589); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41591 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41592 = _Int32ToInt32(Uh_5tlreg41591, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41593(Uh_5tlreg41592); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41595 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41590, Uh_5tlval41593); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41596(Uh_5tlval41595); //gcnl:Node.cpp:1142
          return (Uh_5tlval41596); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:161:     if (d==2) return make( 1, 0);
    {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
      const u32 Uh_5tlreg41597 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41598 = _Int32ToInt32(Uh_5tlreg41597, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41600 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41601 = _Unsigned32ToInt32(Uh_5tlreg41600, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41602 = _BinOpCompareEqEqInt32(Uh_5tlreg41601, Uh_5tlreg41598, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41602, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
          const u32 Uh_5tlreg41604 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41605 = _Int32ToInt32(Uh_5tlreg41604, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41606(Uh_5tlreg41605); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41607 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41608 = _Int32ToInt32(Uh_5tlreg41607, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41609(Uh_5tlreg41608); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41611 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41606, Uh_5tlval41609); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41612(Uh_5tlval41611); //gcnl:Node.cpp:1142
          return (Uh_5tlval41612); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:162:     if (d==3) return make( 1,-1);
    {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
      const u32 Uh_5tlreg41613 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41614 = _Int32ToInt32(Uh_5tlreg41613, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41616 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41617 = _Unsigned32ToInt32(Uh_5tlreg41616, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41618 = _BinOpCompareEqEqInt32(Uh_5tlreg41617, Uh_5tlreg41614, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41618, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
          const u32 Uh_5tlreg41620 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41621 = _Int32ToInt32(Uh_5tlreg41620, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41622(Uh_5tlreg41621); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41623 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41624 = _Int32ToInt32(Uh_5tlreg41623, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41625(Uh_5tlreg41624); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41627 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41622, Uh_5tlval41625); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41628(Uh_5tlval41627); //gcnl:Node.cpp:1142
          return (Uh_5tlval41628); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:163:     if (d==4) return make( 0,-1);
    {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
      const u32 Uh_5tlreg41629 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41631 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41632 = _Unsigned32ToInt32(Uh_5tlreg41631, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41633 = _BinOpCompareEqEqInt32(Uh_5tlreg41632, Uh_5tlreg41629, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41633, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
          const u32 Uh_5tlreg41635 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41636 = _Int32ToInt32(Uh_5tlreg41635, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41637(Uh_5tlreg41636); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41638 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41639 = _Int32ToInt32(Uh_5tlreg41638, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41640(Uh_5tlreg41639); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41642 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41637, Uh_5tlval41640); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41643(Uh_5tlval41642); //gcnl:Node.cpp:1142
          return (Uh_5tlval41643); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:164:     if (d==5) return make(-1,-1);
    {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
      const u32 Uh_5tlreg41644 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41646 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41647 = _Unsigned32ToInt32(Uh_5tlreg41646, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41648 = _BinOpCompareEqEqInt32(Uh_5tlreg41647, Uh_5tlreg41644, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41648, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
          const u32 Uh_5tlreg41650 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41651 = _Int32ToInt32(Uh_5tlreg41650, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41652(Uh_5tlreg41651); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41653 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41654 = _Int32ToInt32(Uh_5tlreg41653, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41655(Uh_5tlreg41654); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41657 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41652, Uh_5tlval41655); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41658(Uh_5tlval41657); //gcnl:Node.cpp:1142
          return (Uh_5tlval41658); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:165:     if (d==6) return make(-1, 0);
    {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
      const u32 Uh_5tlreg41659 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41661 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41662 = _Unsigned32ToInt32(Uh_5tlreg41661, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41663 = _BinOpCompareEqEqInt32(Uh_5tlreg41662, Uh_5tlreg41659, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41663, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
          const u32 Uh_5tlreg41665 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41666 = _Int32ToInt32(Uh_5tlreg41665, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41667(Uh_5tlreg41666); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41668 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41669 = _Int32ToInt32(Uh_5tlreg41668, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41670(Uh_5tlreg41669); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41672 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41667, Uh_5tlval41670); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41673(Uh_5tlval41672); //gcnl:Node.cpp:1142
          return (Uh_5tlval41673); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:166:     /* d==7*/ return make(-1, 1);
    const u32 Uh_5tlreg41675 = (u32) -1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41676 = _Int32ToInt32(Uh_5tlreg41675, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41677(Uh_5tlreg41676); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41678 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41679 = _Int32ToInt32(Uh_5tlreg41678, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41680(Uh_5tlreg41679); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41682 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41677, Uh_5tlval41680); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41683(Uh_5tlval41682); //gcnl:Node.cpp:1142
    return (Uh_5tlval41683); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8neighbor



//! C2D.inc:172:   Self corner(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6corner(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
    {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
      const u32 Uh_5tlreg41684 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41685 = _Int32ToInt32(Uh_5tlreg41684, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41687 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41688 = _Unsigned32ToInt32(Uh_5tlreg41687, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41689 = _BinOpCompareEqEqInt32(Uh_5tlreg41688, Uh_5tlreg41685, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41689, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
          const u32 Uh_5tlreg41691 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41692 = _Int32ToInt32(Uh_5tlreg41691, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41693(Uh_5tlreg41692); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41694 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41695 = _Int32ToInt32(Uh_5tlreg41694, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41696(Uh_5tlreg41695); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41698 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41693, Uh_5tlval41696); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41699(Uh_5tlval41698); //gcnl:Node.cpp:1142
          return (Uh_5tlval41699); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:174:     if (d==1) return make( 2, 2);
    {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
      const u32 Uh_5tlreg41700 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41701 = _Int32ToInt32(Uh_5tlreg41700, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41703 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41704 = _Unsigned32ToInt32(Uh_5tlreg41703, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41705 = _BinOpCompareEqEqInt32(Uh_5tlreg41704, Uh_5tlreg41701, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41705, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
          const u32 Uh_5tlreg41707 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41708 = _Int32ToInt32(Uh_5tlreg41707, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41709(Uh_5tlreg41708); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41710 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41711 = _Int32ToInt32(Uh_5tlreg41710, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41712(Uh_5tlreg41711); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41714 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41709, Uh_5tlval41712); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41715(Uh_5tlval41714); //gcnl:Node.cpp:1142
          return (Uh_5tlval41715); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:175:     if (d==2) return make( 4, 0);
    {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
      const u32 Uh_5tlreg41716 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41717 = _Int32ToInt32(Uh_5tlreg41716, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41719 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41720 = _Unsigned32ToInt32(Uh_5tlreg41719, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41721 = _BinOpCompareEqEqInt32(Uh_5tlreg41720, Uh_5tlreg41717, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41721, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
          const u32 Uh_5tlreg41723 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41724 = _Int32ToInt32(Uh_5tlreg41723, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41725(Uh_5tlreg41724); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41726 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41727 = _Int32ToInt32(Uh_5tlreg41726, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41728(Uh_5tlreg41727); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41730 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41725, Uh_5tlval41728); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41731(Uh_5tlval41730); //gcnl:Node.cpp:1142
          return (Uh_5tlval41731); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:176:     if (d==3) return make( 2,-2);
    {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
      const u32 Uh_5tlreg41732 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41733 = _Int32ToInt32(Uh_5tlreg41732, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41735 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41736 = _Unsigned32ToInt32(Uh_5tlreg41735, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41737 = _BinOpCompareEqEqInt32(Uh_5tlreg41736, Uh_5tlreg41733, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41737, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
          const u32 Uh_5tlreg41739 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41740 = _Int32ToInt32(Uh_5tlreg41739, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41741(Uh_5tlreg41740); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41742 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41743 = _Int32ToInt32(Uh_5tlreg41742, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41744(Uh_5tlreg41743); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41746 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41741, Uh_5tlval41744); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41747(Uh_5tlval41746); //gcnl:Node.cpp:1142
          return (Uh_5tlval41747); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:177:     if (d==4) return make( 0,-4);
    {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
      const u32 Uh_5tlreg41748 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41750 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41751 = _Unsigned32ToInt32(Uh_5tlreg41750, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41752 = _BinOpCompareEqEqInt32(Uh_5tlreg41751, Uh_5tlreg41748, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41752, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
          const u32 Uh_5tlreg41754 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41755 = _Int32ToInt32(Uh_5tlreg41754, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41756(Uh_5tlreg41755); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41757 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41758 = _Int32ToInt32(Uh_5tlreg41757, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41759(Uh_5tlreg41758); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41761 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41756, Uh_5tlval41759); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41762(Uh_5tlval41761); //gcnl:Node.cpp:1142
          return (Uh_5tlval41762); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:178:     if (d==5) return make(-2,-2);
    {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
      const u32 Uh_5tlreg41763 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41765 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41766 = _Unsigned32ToInt32(Uh_5tlreg41765, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41767 = _BinOpCompareEqEqInt32(Uh_5tlreg41766, Uh_5tlreg41763, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41767, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
          const u32 Uh_5tlreg41769 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41770 = _Int32ToInt32(Uh_5tlreg41769, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41771(Uh_5tlreg41770); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41772 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41773 = _Int32ToInt32(Uh_5tlreg41772, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41774(Uh_5tlreg41773); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41776 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41771, Uh_5tlval41774); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41777(Uh_5tlval41776); //gcnl:Node.cpp:1142
          return (Uh_5tlval41777); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:179:     if (d==6) return make(-4, 0);
    {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
      const u32 Uh_5tlreg41778 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41780 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41781 = _Unsigned32ToInt32(Uh_5tlreg41780, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41782 = _BinOpCompareEqEqInt32(Uh_5tlreg41781, Uh_5tlreg41778, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41782, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
          const u32 Uh_5tlreg41784 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41785 = _Int32ToInt32(Uh_5tlreg41784, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41786(Uh_5tlreg41785); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41787 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41788 = _Int32ToInt32(Uh_5tlreg41787, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41789(Uh_5tlreg41788); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41791 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41786, Uh_5tlval41789); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41792(Uh_5tlval41791); //gcnl:Node.cpp:1142
          return (Uh_5tlval41792); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:180:     /* d==7*/ return make(-2, 2);
    const u32 Uh_5tlreg41794 = (u32) -2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41795 = _Int32ToInt32(Uh_5tlreg41794, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41796(Uh_5tlreg41795); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41797 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41798 = _Int32ToInt32(Uh_5tlreg41797, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41799(Uh_5tlreg41798); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41801 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41796, Uh_5tlval41799); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41802(Uh_5tlval41801); //gcnl:Node.cpp:1142
    return (Uh_5tlval41802); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6corner



//! C2D.inc:183:   Unsigned length() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_6length(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:184:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:185:     return origin.manhattanDistance(self);
    UlamRef<EC> Uh_3tur41804(0u, 32u, Uv_6origin, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41806 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41807(Uh_5tlreg41806); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41809 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9217manhattanDistance(uc, Uh_3tur41804, Uh_5tlval41807); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41810 = Uh_5tlval41809.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41811(Uh_5tlreg41810); //gcnl:Node.cpp:1142
    return (Uh_5tlval41811); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6length



//! C2D.inc:202:   Unsigned manhattanDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9217manhattanDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:203:     Self a = abs(self-other);
    const u32 Uh_5tlreg41816 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41817(Uh_5tlreg41816); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41819 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41817); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41820(Uh_5tlval41819); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41822 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval41820); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_1a(Uh_5tlval41822); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:204:     return (Unsigned) (a.x + a.y);
    const u32 Uh_5tlreg41825 = UlamRef<EC>(16u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41826 = _Int32ToInt32(Uh_5tlreg41825, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41829 = UlamRef<EC>(0u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41830 = _Int32ToInt32(Uh_5tlreg41829, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41831 = _BinOpAddInt32(Uh_5tlreg41830, Uh_5tlreg41826, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41832 = _Int32ToUnsigned32(Uh_5tlreg41831, 17, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41833(Uh_5tlreg41832); //gcnl:Node.cpp:1142
    return (Uh_5tlval41833); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217manhattanDistance



//! C2D.inc:188:   Bool isOrigin() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8isOrigin(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:189:     return x == 0 && y == 0;
    u32 Uh_5tlreg41834 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41835 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41836 = _Int32ToInt32(Uh_5tlreg41835, 2, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41838 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41839 = _BinOpCompareEqEqInt32(Uh_5tlreg41838, Uh_5tlreg41836, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41839, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41840 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41841 = _Int32ToInt32(Uh_5tlreg41840, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41843 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41844 = _BinOpCompareEqEqInt32(Uh_5tlreg41843, Uh_5tlreg41841, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg41834 = Uh_5tlreg41844; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41845(Uh_5tlreg41834); //gcnl:Node.cpp:1142
    return (Uh_5tlval41845); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8isOrigin



//! C2D.inc:196:   Self abs(Self of) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_2of) const
  {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
    {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
      const u32 Uh_5tlreg41846 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41847 = _Int32ToInt32(Uh_5tlreg41846, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41850 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41851 = _BinOpCompareLessThanInt32(Uh_5tlreg41850, Uh_5tlreg41847, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41851, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
          const u32 Uh_5tlreg41854 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41855 = _UnaryMinusInt32(Uh_5tlreg41854, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41855); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
    {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
      const u32 Uh_5tlreg41858 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41859 = _Int32ToInt32(Uh_5tlreg41858, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41862 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41863 = _BinOpCompareLessThanInt32(Uh_5tlreg41862, Uh_5tlreg41859, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41863, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
          const u32 Uh_5tlreg41866 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41867 = _UnaryMinusInt32(Uh_5tlreg41866, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41867); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:199:     return of;
    const u32 Uh_5tlreg41871 = Uv_2of.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41872(Uh_5tlreg41871); //gcnl:Node.cpp:1142
    return (Uh_5tlval41872); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:192:   Self abs() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:193:     return abs(self);
    const u32 Uh_5tlreg41875 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41876(Uh_5tlreg41875); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41878 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval41876); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41879(Uh_5tlval41878); //gcnl:Node.cpp:1142
    return (Uh_5tlval41879); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:210:   Unsigned euclideanSquaredDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9224euclideanSquaredDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:211:     Self diff = self-other;
    const u32 Uh_5tlreg41883 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41884(Uh_5tlreg41883); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41886 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41884); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_4diff(Uh_5tlval41886); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:212:     return diff.euclideanSquaredLength();
    UlamRef<EC> Uh_3tur41888(0u, 32u, Uv_4diff, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321u<EC> Uh_5tlval41890 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9222euclideanSquaredLength(uc, Uh_3tur41888); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41891 = Uh_5tlval41890.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41892(Uh_5tlreg41891); //gcnl:Node.cpp:1142
    return (Uh_5tlval41892); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9224euclideanSquaredDistance



//! C2D.inc:218:   Unsigned euclideanSquaredLength() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9222euclideanSquaredLength(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:219:     return (Unsigned) (self * self);
    const u32 Uh_5tlreg41896 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41897(Uh_5tlreg41896); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41899 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2a(uc, ur, Uh_5tlval41897); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41900 = Uh_5tlval41899.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41901 = _Int32ToUnsigned32(Uh_5tlreg41900, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41902(Uh_5tlreg41901); //gcnl:Node.cpp:1142
    return (Uh_5tlval41902); //gcnl:NodeReturnStatement.cpp:343

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

