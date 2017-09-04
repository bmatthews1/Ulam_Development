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
    const u32 Uh_5tlreg41165 = UlamRef<EC>(0u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41165); //gcnl:Node.cpp:892

//! C2D.inc:15:     y = s.y;
    const u32 Uh_5tlreg41169 = UlamRef<EC>(16u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41169); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:8:   Self(Coord ax, Coord ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4Self(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2ax, Ui_Ut_102161i<EC>& Uv_2ay) const
  {

//! C2D.inc:9:     x = ax;
    const u32 Uh_5tlreg41172 = Uv_2ax.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41172); //gcnl:Node.cpp:892

//! C2D.inc:10:     y = ay;
    const u32 Uh_5tlreg41175 = Uv_2ay.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41175); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:73:   Self max(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3max(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
    {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
      const u32 Uh_5tlreg41179 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41182 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41183 = _BinOpCompareLessThanInt32(Uh_5tlreg41182, Uh_5tlreg41179, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41183, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
          const u32 Uh_5tlreg41186 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41186); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
    {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
      const u32 Uh_5tlreg41191 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41194 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41195 = _BinOpCompareLessThanInt32(Uh_5tlreg41194, Uh_5tlreg41191, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41195, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
          const u32 Uh_5tlreg41198 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41198); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:76:     return other;
    const u32 Uh_5tlreg41202 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41203(Uh_5tlreg41202); //gcnl:Node.cpp:1142
    return (Uh_5tlval41203); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3max



//! C2D.inc:23:   Void set(Self c) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_1c) const
  {

//! C2D.inc:24:     set(c.x, c.y);
    const u32 Uh_5tlreg41207 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41208 = _Int32ToInt32(Uh_5tlreg41207, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41209(Uh_5tlreg41208); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41212 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41213 = _Int32ToInt32(Uh_5tlreg41212, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41214(Uh_5tlreg41213); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval41209, Uh_5tlval41214); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_3set



//! C2D.inc:18:   Void set(Int ax, Int ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:19:     x = (Coord) ax;
    const u32 Uh_5tlreg41217 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41218 = _Int32ToInt32(Uh_5tlreg41217, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41218); //gcnl:Node.cpp:892

//! C2D.inc:20:     y = (Coord) ay;
    const u32 Uh_5tlreg41221 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41222 = _Int32ToInt32(Uh_5tlreg41221, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41222); //gcnl:Node.cpp:892

  } // Uf_3set



//! C2D.inc:27:   Self & operator=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:28:     set(other);
    const u32 Uh_5tlreg41226 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41227(Uh_5tlreg41226); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval41227); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:29:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41230(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41230); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9211_operator3d



//! C2D.inc:32:   Self & operator+=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2b3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:35:     self = self + other;  
    const u32 Uh_5tlreg41236 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41237(Uh_5tlreg41236); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41239 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2b(uc, ur, Uh_5tlval41237); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41240(Uh_5tlval41239); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41242 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41240); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:36:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41244(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41244); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2b3d



//! C2D.inc:39:   Self & operator-=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:40:     self = self - other;
    const u32 Uh_5tlreg41250 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41251(Uh_5tlreg41250); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41253 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41251); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41254(Uh_5tlval41253); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41256 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41254); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:41:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41258(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41258); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2d3d



//! C2D.inc:44:   Self clamp(Self below, Self above) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_5clamp(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5below, Ui_Uq_102323C2D10<EC>& Uv_5above) const
  {

//! C2D.inc:45:     return (self | below) & above;
    const u32 Uh_5tlreg41262 = Uv_5below.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41263(Uh_5tlreg41262); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41265 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval41263); //gcnl:NodeFunctionCall.cpp:1043
    UlamRef<EC> Uh_3tur41266(0u, 32u, Uh_5tlval41265, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41268 = Uv_5above.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41269(Uh_5tlreg41268); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41271 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, Uh_3tur41266, Uh_5tlval41269); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41272(Uh_5tlval41271); //gcnl:Node.cpp:1142
    return (Uh_5tlval41272); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5clamp



//! C2D.inc:48:   Int getX() { return (Int) x; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getX(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:48:   Int getX() { return (Int) x; }
    const u32 Uh_5tlreg41274 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41275 = _Int32ToInt32(Uh_5tlreg41274, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41276(Uh_5tlreg41275); //gcnl:Node.cpp:1142
    return (Uh_5tlval41276); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getX



//! C2D.inc:49:   Int getY() { return (Int) y; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getY(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:49:   Int getY() { return (Int) y; }
    const u32 Uh_5tlreg41278 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41279 = _Int32ToInt32(Uh_5tlreg41278, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41280(Uh_5tlreg41279); //gcnl:Node.cpp:1142
    return (Uh_5tlval41280); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getY



//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setX(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax) const
  {

//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_5tlreg41282 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41283 = _Int32ToInt32(Uh_5tlreg41282, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41283); //gcnl:Node.cpp:892

  } // Uf_4setX



//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setY(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_5tlreg41286 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41287 = _Int32ToInt32(Uh_5tlreg41286, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41287); //gcnl:Node.cpp:892

  } // Uf_4setY



//! C2D.inc:54:   Self make(Int x, Int y)
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_4make(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1x, Ui_Ut_102321i<EC>& Uv_1y) const
  {

//! C2D.inc:56:     Self ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:57:     ret.set(x,y);
    UlamRef<EC> Uh_3tur41290(0u, 32u, Uv_3ret, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41292 = Uv_1x.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41293(Uh_5tlreg41292); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41295 = Uv_1y.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41296(Uh_5tlreg41295); //gcnl:Node.cpp:1142
    Uq_102323C2D10<EC>::THE_INSTANCE.Uf_3set(uc, Uh_3tur41290, Uh_5tlval41293, Uh_5tlval41296); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:58:     return ret;
    const u32 Uh_5tlreg41299 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41300(Uh_5tlreg41299); //gcnl:Node.cpp:1142
    return (Uh_5tlval41300); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4make



//! C2D.inc:61:   Bool equals(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_6equals(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:62:     return x == other.x && y == other.y;
    u32 Uh_5tlreg41301 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41304 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41306 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41307 = _BinOpCompareEqEqInt32(Uh_5tlreg41306, Uh_5tlreg41304, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41307, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41310 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41312 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41313 = _BinOpCompareEqEqInt32(Uh_5tlreg41312, Uh_5tlreg41310, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg41301 = Uh_5tlreg41313; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41314(Uh_5tlreg41301); //gcnl:Node.cpp:1142
    return (Uh_5tlval41314); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6equals



//! C2D.inc:65:   Bool operator==(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator3d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:66:     return equals(other);
    const u32 Uh_5tlreg41317 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41318(Uh_5tlreg41317); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41320 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval41318); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41321 = Uh_5tlval41320.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41322(Uh_5tlreg41321); //gcnl:Node.cpp:1142
    return (Uh_5tlval41322); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator3d3d



//! C2D.inc:69:   Bool operator!=(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator213d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:70:     return !equals(other);
    const u32 Uh_5tlreg41325 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41326(Uh_5tlreg41325); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41328 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval41326); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41329 = Uh_5tlval41328.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41330 = _LogicalBangBool32(Uh_5tlreg41329, 1); //gcnl:NodeUnaryOp.cpp:507
    Ui_Ut_10111b<EC> Uh_5tlval41331(Uh_5tlreg41330); //gcnl:Node.cpp:1142
    return (Uh_5tlval41331); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator213d



//! C2D.inc:79:   Self operator|(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator7c(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:80:     return max(other);
    const u32 Uh_5tlreg41334 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41335(Uh_5tlreg41334); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41337 = THE_INSTANCE.Uf_3max(uc, ur, Uh_5tlval41335); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41338(Uh_5tlval41337); //gcnl:Node.cpp:1142
    return (Uh_5tlval41338); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator7c



//! C2D.inc:83:   Self& operator|=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator7c3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:84:     self = self | other;
    const u32 Uh_5tlreg41344 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41345(Uh_5tlreg41344); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41347 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval41345); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41348(Uh_5tlval41347); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41350 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41348); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:85:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41352(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41352); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator7c3d



//! C2D.inc:88:   Self min(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3min(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
    {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
      const u32 Uh_5tlreg41355 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41358 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41359 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41358, Uh_5tlreg41355, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41359, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
          const u32 Uh_5tlreg41362 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41362); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
    {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
      const u32 Uh_5tlreg41367 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41370 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41371 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41370, Uh_5tlreg41367, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41371, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
          const u32 Uh_5tlreg41374 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41374); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:91:     return other;
    const u32 Uh_5tlreg41378 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41379(Uh_5tlreg41378); //gcnl:Node.cpp:1142
    return (Uh_5tlval41379); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3min



//! C2D.inc:94:   Self operator&(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator26(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:95:     return min(other);
    const u32 Uh_5tlreg41382 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41383(Uh_5tlreg41382); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41385 = THE_INSTANCE.Uf_3min(uc, ur, Uh_5tlval41383); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41386(Uh_5tlval41385); //gcnl:Node.cpp:1142
    return (Uh_5tlval41386); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator26



//! C2D.inc:98:   Self& operator&=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator263d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:99:     self = self & other;
    const u32 Uh_5tlreg41392 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41393(Uh_5tlreg41392); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41395 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, ur, Uh_5tlval41393); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41396(Uh_5tlval41395); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41398 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41396); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:100:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41400(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41400); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator263d



//! C2D.inc:109:   Bool contains(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8contains(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:110:     Int sx = self.getX();
    const Ui_Ut_102321i<EC> Uh_5tlval41404 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41405 = Uh_5tlval41404.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sx(Uh_5tlreg41405); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:111:     Int sy = self.getY();
    const Ui_Ut_102321i<EC> Uh_5tlval41409 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41410 = Uh_5tlval41409.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sy(Uh_5tlreg41410); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:112:     Int ox = other.getX();
    UlamRef<EC> Uh_3tur41412(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval41414 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, Uh_3tur41412); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41415 = Uh_5tlval41414.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2ox(Uh_5tlreg41415); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:113:     Int oy = other.getY();
    UlamRef<EC> Uh_3tur41417(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval41419 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, Uh_3tur41417); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41420 = Uh_5tlval41419.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2oy(Uh_5tlreg41420); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
    {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
      u32 Uh_5tlreg41421 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg41422 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41423 = _Int32ToInt32(Uh_5tlreg41422, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41425 = Uv_2ox.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41426 = _BinOpCompareLessThanInt32(Uh_5tlreg41425, Uh_5tlreg41423, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg41426, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg41428 = Uv_2sx.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41430 = Uv_2ox.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41431 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg41430, Uh_5tlreg41428, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41421 = Uh_5tlreg41431; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg41421 = Uh_5tlreg41426; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg41421, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
          const u32 Uh_5tlreg41432 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval41433(Uh_5tlreg41432); //gcnl:Node.cpp:1142
          return (Uh_5tlval41433); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
    {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
      u32 Uh_5tlreg41434 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg41435 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41436 = _Int32ToInt32(Uh_5tlreg41435, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41438 = Uv_2oy.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41439 = _BinOpCompareLessThanInt32(Uh_5tlreg41438, Uh_5tlreg41436, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg41439, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg41441 = Uv_2sy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41443 = Uv_2oy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41444 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg41443, Uh_5tlreg41441, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41434 = Uh_5tlreg41444; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg41434 = Uh_5tlreg41439; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg41434, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
          const u32 Uh_5tlreg41445 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval41446(Uh_5tlreg41445); //gcnl:Node.cpp:1142
          return (Uh_5tlval41446); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:116:     return true;
    const u32 Uh_5tlreg41447 = 1u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval41448(Uh_5tlreg41447); //gcnl:Node.cpp:1142
    return (Uh_5tlval41448); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8contains



//! C2D.inc:119:   Int dot(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_3dot(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:120:     return x * other.x + y * other.y;
    const u32 Uh_5tlreg41451 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41452 = _Int32ToInt32(Uh_5tlreg41451, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41454 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41455 = _Int32ToInt32(Uh_5tlreg41454, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41456 = _BinOpMultiplyInt32(Uh_5tlreg41455, Uh_5tlreg41452, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41459 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41460 = _Int32ToInt32(Uh_5tlreg41459, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41462 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41463 = _Int32ToInt32(Uh_5tlreg41462, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41464 = _BinOpMultiplyInt32(Uh_5tlreg41463, Uh_5tlreg41460, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41465 = _BinOpAddInt32(Uh_5tlreg41464, Uh_5tlreg41456, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval41466(Uh_5tlreg41465); //gcnl:Node.cpp:1142
    return (Uh_5tlval41466); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3dot



//! C2D.inc:123:   Int operator*(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_9211_operator2a(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:124:     return dot(other);
    const u32 Uh_5tlreg41469 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41470(Uh_5tlreg41469); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41472 = THE_INSTANCE.Uf_3dot(uc, ur, Uh_5tlval41470); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41473 = Uh_5tlval41472.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uh_5tlval41474(Uh_5tlreg41473); //gcnl:Node.cpp:1142
    return (Uh_5tlval41474); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2a



//! C2D.inc:127:   Self add(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3add(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:128:     return make((Coord) (x + other.x), (Coord) (y + other.y));
    const u32 Uh_5tlreg41478 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41479 = _Int32ToInt32(Uh_5tlreg41478, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41481 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41482 = _Int32ToInt32(Uh_5tlreg41481, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41483 = _BinOpAddInt32(Uh_5tlreg41482, Uh_5tlreg41479, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41484 = _Int32ToInt32(Uh_5tlreg41483, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41485 = _Int32ToInt32(Uh_5tlreg41484, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41486(Uh_5tlreg41485); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41489 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41490 = _Int32ToInt32(Uh_5tlreg41489, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41492 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41493 = _Int32ToInt32(Uh_5tlreg41492, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41494 = _BinOpAddInt32(Uh_5tlreg41493, Uh_5tlreg41490, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41495 = _Int32ToInt32(Uh_5tlreg41494, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41496 = _Int32ToInt32(Uh_5tlreg41495, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41497(Uh_5tlreg41496); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41499 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41486, Uh_5tlval41497); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41500(Uh_5tlval41499); //gcnl:Node.cpp:1142
    return (Uh_5tlval41500); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3add



//! C2D.inc:131:   Self operator+(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:132:     return add(other);
    const u32 Uh_5tlreg41503 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41504(Uh_5tlreg41503); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41506 = THE_INSTANCE.Uf_3add(uc, ur, Uh_5tlval41504); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41507(Uh_5tlval41506); //gcnl:Node.cpp:1142
    return (Uh_5tlval41507); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:151:   Self operator+() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:152:     return self;
    const u32 Uh_5tlreg41509 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41510(Uh_5tlreg41509); //gcnl:Node.cpp:1142
    return (Uh_5tlval41510); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:135:   Self subtract(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8subtract(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:136:     return make((Coord) (x - other.x), (Coord) (y - other.y));
    const u32 Uh_5tlreg41514 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41515 = _Int32ToInt32(Uh_5tlreg41514, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41517 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41518 = _Int32ToInt32(Uh_5tlreg41517, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41519 = _BinOpSubtractInt32(Uh_5tlreg41518, Uh_5tlreg41515, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41520 = _Int32ToInt32(Uh_5tlreg41519, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41521 = _Int32ToInt32(Uh_5tlreg41520, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41522(Uh_5tlreg41521); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41525 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41526 = _Int32ToInt32(Uh_5tlreg41525, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41528 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41529 = _Int32ToInt32(Uh_5tlreg41528, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41530 = _BinOpSubtractInt32(Uh_5tlreg41529, Uh_5tlreg41526, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41531 = _Int32ToInt32(Uh_5tlreg41530, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41532 = _Int32ToInt32(Uh_5tlreg41531, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41533(Uh_5tlreg41532); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41535 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41522, Uh_5tlval41533); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41536(Uh_5tlval41535); //gcnl:Node.cpp:1142
    return (Uh_5tlval41536); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8subtract



//! C2D.inc:139:   Self operator-(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:140:     return subtract(other);
    const u32 Uh_5tlreg41539 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41540(Uh_5tlreg41539); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41542 = THE_INSTANCE.Uf_8subtract(uc, ur, Uh_5tlval41540); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41543(Uh_5tlval41542); //gcnl:Node.cpp:1142
    return (Uh_5tlval41543); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:147:   Self operator-() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:148:     return negate();
    Ui_Uq_102323C2D10<EC> Uh_5tlval41546 = THE_INSTANCE.Uf_6negate(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41547(Uh_5tlval41546); //gcnl:Node.cpp:1142
    return (Uh_5tlval41547); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:143:   Self negate() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6negate(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:144:     return make((Coord) -(Int) x, (Coord) -(Int) y);
    const u32 Uh_5tlreg41550 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41551 = _Int32ToInt32(Uh_5tlreg41550, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41552 = _UnaryMinusInt32(Uh_5tlreg41551, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41553 = _Int32ToInt32(Uh_5tlreg41552, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41554 = _Int32ToInt32(Uh_5tlreg41553, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41555(Uh_5tlreg41554); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41557 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41558 = _Int32ToInt32(Uh_5tlreg41557, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41559 = _UnaryMinusInt32(Uh_5tlreg41558, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41560 = _Int32ToInt32(Uh_5tlreg41559, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41561 = _Int32ToInt32(Uh_5tlreg41560, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41562(Uh_5tlreg41561); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41564 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41555, Uh_5tlval41562); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41565(Uh_5tlval41564); //gcnl:Node.cpp:1142
    return (Uh_5tlval41565); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6negate



//! C2D.inc:158:   Self neighbor(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8neighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
    {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
      const u32 Uh_5tlreg41566 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41567 = _Int32ToInt32(Uh_5tlreg41566, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41569 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41570 = _Unsigned32ToInt32(Uh_5tlreg41569, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41571 = _BinOpCompareEqEqInt32(Uh_5tlreg41570, Uh_5tlreg41567, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41571, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
          const u32 Uh_5tlreg41573 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41574 = _Int32ToInt32(Uh_5tlreg41573, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41575(Uh_5tlreg41574); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41576 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41577 = _Int32ToInt32(Uh_5tlreg41576, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41578(Uh_5tlreg41577); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41580 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41575, Uh_5tlval41578); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41581(Uh_5tlval41580); //gcnl:Node.cpp:1142
          return (Uh_5tlval41581); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:160:     if (d==1) return make( 1, 1);
    {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
      const u32 Uh_5tlreg41582 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41583 = _Int32ToInt32(Uh_5tlreg41582, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41585 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41586 = _Unsigned32ToInt32(Uh_5tlreg41585, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41587 = _BinOpCompareEqEqInt32(Uh_5tlreg41586, Uh_5tlreg41583, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41587, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
          const u32 Uh_5tlreg41589 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41590 = _Int32ToInt32(Uh_5tlreg41589, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41591(Uh_5tlreg41590); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41592 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41593 = _Int32ToInt32(Uh_5tlreg41592, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41594(Uh_5tlreg41593); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41596 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41591, Uh_5tlval41594); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41597(Uh_5tlval41596); //gcnl:Node.cpp:1142
          return (Uh_5tlval41597); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:161:     if (d==2) return make( 1, 0);
    {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
      const u32 Uh_5tlreg41598 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41599 = _Int32ToInt32(Uh_5tlreg41598, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41601 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41602 = _Unsigned32ToInt32(Uh_5tlreg41601, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41603 = _BinOpCompareEqEqInt32(Uh_5tlreg41602, Uh_5tlreg41599, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41603, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
          const u32 Uh_5tlreg41605 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41606 = _Int32ToInt32(Uh_5tlreg41605, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41607(Uh_5tlreg41606); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41608 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41609 = _Int32ToInt32(Uh_5tlreg41608, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41610(Uh_5tlreg41609); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41612 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41607, Uh_5tlval41610); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41613(Uh_5tlval41612); //gcnl:Node.cpp:1142
          return (Uh_5tlval41613); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:162:     if (d==3) return make( 1,-1);
    {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
      const u32 Uh_5tlreg41614 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41615 = _Int32ToInt32(Uh_5tlreg41614, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41617 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41618 = _Unsigned32ToInt32(Uh_5tlreg41617, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41619 = _BinOpCompareEqEqInt32(Uh_5tlreg41618, Uh_5tlreg41615, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41619, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
          const u32 Uh_5tlreg41621 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41622 = _Int32ToInt32(Uh_5tlreg41621, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41623(Uh_5tlreg41622); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41624 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41625 = _Int32ToInt32(Uh_5tlreg41624, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41626(Uh_5tlreg41625); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41628 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41623, Uh_5tlval41626); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41629(Uh_5tlval41628); //gcnl:Node.cpp:1142
          return (Uh_5tlval41629); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:163:     if (d==4) return make( 0,-1);
    {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
      const u32 Uh_5tlreg41630 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41632 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41633 = _Unsigned32ToInt32(Uh_5tlreg41632, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41634 = _BinOpCompareEqEqInt32(Uh_5tlreg41633, Uh_5tlreg41630, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41634, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
          const u32 Uh_5tlreg41636 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41637 = _Int32ToInt32(Uh_5tlreg41636, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41638(Uh_5tlreg41637); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41639 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41640 = _Int32ToInt32(Uh_5tlreg41639, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41641(Uh_5tlreg41640); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41643 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41638, Uh_5tlval41641); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41644(Uh_5tlval41643); //gcnl:Node.cpp:1142
          return (Uh_5tlval41644); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:164:     if (d==5) return make(-1,-1);
    {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
      const u32 Uh_5tlreg41645 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41647 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41648 = _Unsigned32ToInt32(Uh_5tlreg41647, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41649 = _BinOpCompareEqEqInt32(Uh_5tlreg41648, Uh_5tlreg41645, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41649, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
          const u32 Uh_5tlreg41651 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41652 = _Int32ToInt32(Uh_5tlreg41651, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41653(Uh_5tlreg41652); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41654 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41655 = _Int32ToInt32(Uh_5tlreg41654, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41656(Uh_5tlreg41655); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41658 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41653, Uh_5tlval41656); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41659(Uh_5tlval41658); //gcnl:Node.cpp:1142
          return (Uh_5tlval41659); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:165:     if (d==6) return make(-1, 0);
    {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
      const u32 Uh_5tlreg41660 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41662 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41663 = _Unsigned32ToInt32(Uh_5tlreg41662, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41664 = _BinOpCompareEqEqInt32(Uh_5tlreg41663, Uh_5tlreg41660, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41664, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
          const u32 Uh_5tlreg41666 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41667 = _Int32ToInt32(Uh_5tlreg41666, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41668(Uh_5tlreg41667); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41669 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41670 = _Int32ToInt32(Uh_5tlreg41669, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41671(Uh_5tlreg41670); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41673 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41668, Uh_5tlval41671); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41674(Uh_5tlval41673); //gcnl:Node.cpp:1142
          return (Uh_5tlval41674); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:166:     /* d==7*/ return make(-1, 1);
    const u32 Uh_5tlreg41676 = (u32) -1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41677 = _Int32ToInt32(Uh_5tlreg41676, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41678(Uh_5tlreg41677); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41679 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41680 = _Int32ToInt32(Uh_5tlreg41679, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41681(Uh_5tlreg41680); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41683 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41678, Uh_5tlval41681); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41684(Uh_5tlval41683); //gcnl:Node.cpp:1142
    return (Uh_5tlval41684); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8neighbor



//! C2D.inc:172:   Self corner(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6corner(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
    {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
      const u32 Uh_5tlreg41685 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41686 = _Int32ToInt32(Uh_5tlreg41685, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41688 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41689 = _Unsigned32ToInt32(Uh_5tlreg41688, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41690 = _BinOpCompareEqEqInt32(Uh_5tlreg41689, Uh_5tlreg41686, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41690, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
          const u32 Uh_5tlreg41692 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41693 = _Int32ToInt32(Uh_5tlreg41692, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41694(Uh_5tlreg41693); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41695 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41696 = _Int32ToInt32(Uh_5tlreg41695, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41697(Uh_5tlreg41696); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41699 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41694, Uh_5tlval41697); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41700(Uh_5tlval41699); //gcnl:Node.cpp:1142
          return (Uh_5tlval41700); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:174:     if (d==1) return make( 2, 2);
    {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
      const u32 Uh_5tlreg41701 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41702 = _Int32ToInt32(Uh_5tlreg41701, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41704 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41705 = _Unsigned32ToInt32(Uh_5tlreg41704, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41706 = _BinOpCompareEqEqInt32(Uh_5tlreg41705, Uh_5tlreg41702, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41706, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
          const u32 Uh_5tlreg41708 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41709 = _Int32ToInt32(Uh_5tlreg41708, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41710(Uh_5tlreg41709); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41711 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41712 = _Int32ToInt32(Uh_5tlreg41711, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41713(Uh_5tlreg41712); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41715 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41710, Uh_5tlval41713); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41716(Uh_5tlval41715); //gcnl:Node.cpp:1142
          return (Uh_5tlval41716); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:175:     if (d==2) return make( 4, 0);
    {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
      const u32 Uh_5tlreg41717 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41718 = _Int32ToInt32(Uh_5tlreg41717, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41720 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41721 = _Unsigned32ToInt32(Uh_5tlreg41720, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41722 = _BinOpCompareEqEqInt32(Uh_5tlreg41721, Uh_5tlreg41718, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41722, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
          const u32 Uh_5tlreg41724 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41725 = _Int32ToInt32(Uh_5tlreg41724, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41726(Uh_5tlreg41725); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41727 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41728 = _Int32ToInt32(Uh_5tlreg41727, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41729(Uh_5tlreg41728); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41731 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41726, Uh_5tlval41729); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41732(Uh_5tlval41731); //gcnl:Node.cpp:1142
          return (Uh_5tlval41732); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:176:     if (d==3) return make( 2,-2);
    {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
      const u32 Uh_5tlreg41733 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41734 = _Int32ToInt32(Uh_5tlreg41733, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41736 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41737 = _Unsigned32ToInt32(Uh_5tlreg41736, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41738 = _BinOpCompareEqEqInt32(Uh_5tlreg41737, Uh_5tlreg41734, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41738, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
          const u32 Uh_5tlreg41740 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41741 = _Int32ToInt32(Uh_5tlreg41740, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41742(Uh_5tlreg41741); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41743 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41744 = _Int32ToInt32(Uh_5tlreg41743, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41745(Uh_5tlreg41744); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41747 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41742, Uh_5tlval41745); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41748(Uh_5tlval41747); //gcnl:Node.cpp:1142
          return (Uh_5tlval41748); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:177:     if (d==4) return make( 0,-4);
    {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
      const u32 Uh_5tlreg41749 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41751 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41752 = _Unsigned32ToInt32(Uh_5tlreg41751, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41753 = _BinOpCompareEqEqInt32(Uh_5tlreg41752, Uh_5tlreg41749, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41753, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
          const u32 Uh_5tlreg41755 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41756 = _Int32ToInt32(Uh_5tlreg41755, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41757(Uh_5tlreg41756); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41758 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41759 = _Int32ToInt32(Uh_5tlreg41758, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41760(Uh_5tlreg41759); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41762 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41757, Uh_5tlval41760); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41763(Uh_5tlval41762); //gcnl:Node.cpp:1142
          return (Uh_5tlval41763); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:178:     if (d==5) return make(-2,-2);
    {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
      const u32 Uh_5tlreg41764 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41766 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41767 = _Unsigned32ToInt32(Uh_5tlreg41766, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41768 = _BinOpCompareEqEqInt32(Uh_5tlreg41767, Uh_5tlreg41764, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41768, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
          const u32 Uh_5tlreg41770 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41771 = _Int32ToInt32(Uh_5tlreg41770, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41772(Uh_5tlreg41771); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41773 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41774 = _Int32ToInt32(Uh_5tlreg41773, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41775(Uh_5tlreg41774); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41777 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41772, Uh_5tlval41775); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41778(Uh_5tlval41777); //gcnl:Node.cpp:1142
          return (Uh_5tlval41778); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:179:     if (d==6) return make(-4, 0);
    {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
      const u32 Uh_5tlreg41779 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41781 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41782 = _Unsigned32ToInt32(Uh_5tlreg41781, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41783 = _BinOpCompareEqEqInt32(Uh_5tlreg41782, Uh_5tlreg41779, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41783, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
          const u32 Uh_5tlreg41785 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41786 = _Int32ToInt32(Uh_5tlreg41785, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41787(Uh_5tlreg41786); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41788 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41789 = _Int32ToInt32(Uh_5tlreg41788, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41790(Uh_5tlreg41789); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41792 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41787, Uh_5tlval41790); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41793(Uh_5tlval41792); //gcnl:Node.cpp:1142
          return (Uh_5tlval41793); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:180:     /* d==7*/ return make(-2, 2);
    const u32 Uh_5tlreg41795 = (u32) -2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41796 = _Int32ToInt32(Uh_5tlreg41795, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41797(Uh_5tlreg41796); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41798 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41799 = _Int32ToInt32(Uh_5tlreg41798, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41800(Uh_5tlreg41799); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41802 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41797, Uh_5tlval41800); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41803(Uh_5tlval41802); //gcnl:Node.cpp:1142
    return (Uh_5tlval41803); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6corner



//! C2D.inc:183:   Unsigned length() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_6length(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:184:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:185:     return origin.manhattanDistance(self);
    UlamRef<EC> Uh_3tur41805(0u, 32u, Uv_6origin, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41807 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41808(Uh_5tlreg41807); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41810 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9217manhattanDistance(uc, Uh_3tur41805, Uh_5tlval41808); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41811 = Uh_5tlval41810.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41812(Uh_5tlreg41811); //gcnl:Node.cpp:1142
    return (Uh_5tlval41812); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6length



//! C2D.inc:202:   Unsigned manhattanDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9217manhattanDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:203:     Self a = abs(self-other);
    const u32 Uh_5tlreg41817 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41818(Uh_5tlreg41817); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41820 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41818); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41821(Uh_5tlval41820); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41823 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval41821); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_1a(Uh_5tlval41823); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:204:     return (Unsigned) (a.x + a.y);
    const u32 Uh_5tlreg41826 = UlamRef<EC>(16u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41827 = _Int32ToInt32(Uh_5tlreg41826, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41830 = UlamRef<EC>(0u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41831 = _Int32ToInt32(Uh_5tlreg41830, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41832 = _BinOpAddInt32(Uh_5tlreg41831, Uh_5tlreg41827, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41833 = _Int32ToUnsigned32(Uh_5tlreg41832, 17, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41834(Uh_5tlreg41833); //gcnl:Node.cpp:1142
    return (Uh_5tlval41834); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217manhattanDistance



//! C2D.inc:188:   Bool isOrigin() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8isOrigin(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:189:     return x == 0 && y == 0;
    u32 Uh_5tlreg41835 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41836 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41837 = _Int32ToInt32(Uh_5tlreg41836, 2, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41839 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41840 = _BinOpCompareEqEqInt32(Uh_5tlreg41839, Uh_5tlreg41837, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41840, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41841 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41842 = _Int32ToInt32(Uh_5tlreg41841, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41844 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41845 = _BinOpCompareEqEqInt32(Uh_5tlreg41844, Uh_5tlreg41842, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg41835 = Uh_5tlreg41845; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41846(Uh_5tlreg41835); //gcnl:Node.cpp:1142
    return (Uh_5tlval41846); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8isOrigin



//! C2D.inc:196:   Self abs(Self of) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_2of) const
  {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
    {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
      const u32 Uh_5tlreg41847 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41848 = _Int32ToInt32(Uh_5tlreg41847, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41851 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41852 = _BinOpCompareLessThanInt32(Uh_5tlreg41851, Uh_5tlreg41848, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41852, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
          const u32 Uh_5tlreg41855 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41856 = _UnaryMinusInt32(Uh_5tlreg41855, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41856); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
    {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
      const u32 Uh_5tlreg41859 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41860 = _Int32ToInt32(Uh_5tlreg41859, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41863 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41864 = _BinOpCompareLessThanInt32(Uh_5tlreg41863, Uh_5tlreg41860, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41864, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
          const u32 Uh_5tlreg41867 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41868 = _UnaryMinusInt32(Uh_5tlreg41867, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41868); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:199:     return of;
    const u32 Uh_5tlreg41872 = Uv_2of.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41873(Uh_5tlreg41872); //gcnl:Node.cpp:1142
    return (Uh_5tlval41873); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:192:   Self abs() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:193:     return abs(self);
    const u32 Uh_5tlreg41876 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41877(Uh_5tlreg41876); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41879 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval41877); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41880(Uh_5tlval41879); //gcnl:Node.cpp:1142
    return (Uh_5tlval41880); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:210:   Unsigned euclideanSquaredDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9224euclideanSquaredDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:211:     Self diff = self-other;
    const u32 Uh_5tlreg41884 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41885(Uh_5tlreg41884); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41887 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41885); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_4diff(Uh_5tlval41887); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:212:     return diff.euclideanSquaredLength();
    UlamRef<EC> Uh_3tur41889(0u, 32u, Uv_4diff, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321u<EC> Uh_5tlval41891 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9222euclideanSquaredLength(uc, Uh_3tur41889); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41892 = Uh_5tlval41891.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41893(Uh_5tlreg41892); //gcnl:Node.cpp:1142
    return (Uh_5tlval41893); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9224euclideanSquaredDistance



//! C2D.inc:218:   Unsigned euclideanSquaredLength() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9222euclideanSquaredLength(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:219:     return (Unsigned) (self * self);
    const u32 Uh_5tlreg41897 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41898(Uh_5tlreg41897); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41900 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2a(uc, ur, Uh_5tlval41898); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41901 = Uh_5tlval41900.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41902 = _Int32ToUnsigned32(Uh_5tlreg41901, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41903(Uh_5tlreg41902); //gcnl:Node.cpp:1142
    return (Uh_5tlval41903); //gcnl:NodeReturnStatement.cpp:343

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

