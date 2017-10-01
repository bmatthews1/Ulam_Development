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
    const u32 Uh_5tlreg3958 = UlamRef<EC>(0u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3958); //gcnl:Node.cpp:892

//! C2D.inc:15:     y = s.y;
    const u32 Uh_5tlreg3962 = UlamRef<EC>(16u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3962); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:8:   Self(Coord ax, Coord ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4Self(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2ax, Ui_Ut_102161i<EC>& Uv_2ay) const
  {

//! C2D.inc:9:     x = ax;
    const u32 Uh_5tlreg3965 = Uv_2ax.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3965); //gcnl:Node.cpp:892

//! C2D.inc:10:     y = ay;
    const u32 Uh_5tlreg3968 = Uv_2ay.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3968); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:73:   Self max(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3max(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
    {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
      const u32 Uh_5tlreg3972 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3975 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3976 = _BinOpCompareLessThanInt32(Uh_5tlreg3975, Uh_5tlreg3972, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3976, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
          const u32 Uh_5tlreg3979 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3979); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
    {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
      const u32 Uh_5tlreg3984 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3987 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3988 = _BinOpCompareLessThanInt32(Uh_5tlreg3987, Uh_5tlreg3984, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3988, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
          const u32 Uh_5tlreg3991 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3991); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:76:     return other;
    const u32 Uh_5tlreg3995 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3996(Uh_5tlreg3995); //gcnl:Node.cpp:1142
    return (Uh_5tlval3996); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3max



//! C2D.inc:23:   Void set(Self c) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_1c) const
  {

//! C2D.inc:24:     set(c.x, c.y);
    const u32 Uh_5tlreg41000 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41001 = _Int32ToInt32(Uh_5tlreg41000, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41002(Uh_5tlreg41001); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41005 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41006 = _Int32ToInt32(Uh_5tlreg41005, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41007(Uh_5tlreg41006); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval41002, Uh_5tlval41007); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_3set



//! C2D.inc:18:   Void set(Int ax, Int ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:19:     x = (Coord) ax;
    const u32 Uh_5tlreg41010 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41011 = _Int32ToInt32(Uh_5tlreg41010, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41011); //gcnl:Node.cpp:892

//! C2D.inc:20:     y = (Coord) ay;
    const u32 Uh_5tlreg41014 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41015 = _Int32ToInt32(Uh_5tlreg41014, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41015); //gcnl:Node.cpp:892

  } // Uf_3set



//! C2D.inc:27:   Self & operator=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:28:     set(other);
    const u32 Uh_5tlreg41019 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41020(Uh_5tlreg41019); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval41020); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:29:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41023(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41023); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9211_operator3d



//! C2D.inc:32:   Self & operator+=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2b3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:35:     self = self + other;  
    const u32 Uh_5tlreg41029 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41030(Uh_5tlreg41029); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41032 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2b(uc, ur, Uh_5tlval41030); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41033(Uh_5tlval41032); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41035 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41033); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:36:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41037(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41037); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2b3d



//! C2D.inc:39:   Self & operator-=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:40:     self = self - other;
    const u32 Uh_5tlreg41043 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41044(Uh_5tlreg41043); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41046 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41044); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41047(Uh_5tlval41046); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41049 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41047); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:41:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41051(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41051); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2d3d



//! C2D.inc:44:   Self clamp(Self below, Self above) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_5clamp(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5below, Ui_Uq_102323C2D10<EC>& Uv_5above) const
  {

//! C2D.inc:45:     return (self | below) & above;
    const u32 Uh_5tlreg41055 = Uv_5below.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41056(Uh_5tlreg41055); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41058 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval41056); //gcnl:NodeFunctionCall.cpp:1043
    UlamRef<EC> Uh_3tur41059(0u, 32u, Uh_5tlval41058, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41061 = Uv_5above.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41062(Uh_5tlreg41061); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41064 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, Uh_3tur41059, Uh_5tlval41062); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41065(Uh_5tlval41064); //gcnl:Node.cpp:1142
    return (Uh_5tlval41065); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5clamp



//! C2D.inc:48:   Int getX() { return (Int) x; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getX(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:48:   Int getX() { return (Int) x; }
    const u32 Uh_5tlreg41067 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41068 = _Int32ToInt32(Uh_5tlreg41067, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41069(Uh_5tlreg41068); //gcnl:Node.cpp:1142
    return (Uh_5tlval41069); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getX



//! C2D.inc:49:   Int getY() { return (Int) y; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getY(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:49:   Int getY() { return (Int) y; }
    const u32 Uh_5tlreg41071 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41072 = _Int32ToInt32(Uh_5tlreg41071, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41073(Uh_5tlreg41072); //gcnl:Node.cpp:1142
    return (Uh_5tlval41073); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getY



//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setX(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax) const
  {

//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_5tlreg41075 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41076 = _Int32ToInt32(Uh_5tlreg41075, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41076); //gcnl:Node.cpp:892

  } // Uf_4setX



//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setY(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_5tlreg41079 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41080 = _Int32ToInt32(Uh_5tlreg41079, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41080); //gcnl:Node.cpp:892

  } // Uf_4setY



//! C2D.inc:54:   Self make(Int x, Int y)
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_4make(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1x, Ui_Ut_102321i<EC>& Uv_1y) const
  {

//! C2D.inc:56:     Self ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:57:     ret.set(x,y);
    UlamRef<EC> Uh_3tur41083(0u, 32u, Uv_3ret, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41085 = Uv_1x.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41086(Uh_5tlreg41085); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41088 = Uv_1y.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval41089(Uh_5tlreg41088); //gcnl:Node.cpp:1142
    Uq_102323C2D10<EC>::THE_INSTANCE.Uf_3set(uc, Uh_3tur41083, Uh_5tlval41086, Uh_5tlval41089); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:58:     return ret;
    const u32 Uh_5tlreg41092 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41093(Uh_5tlreg41092); //gcnl:Node.cpp:1142
    return (Uh_5tlval41093); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4make



//! C2D.inc:61:   Bool equals(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_6equals(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:62:     return x == other.x && y == other.y;
    u32 Uh_5tlreg41094 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41097 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41099 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41100 = _BinOpCompareEqEqInt32(Uh_5tlreg41099, Uh_5tlreg41097, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41100, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41103 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41105 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41106 = _BinOpCompareEqEqInt32(Uh_5tlreg41105, Uh_5tlreg41103, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg41094 = Uh_5tlreg41106; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41107(Uh_5tlreg41094); //gcnl:Node.cpp:1142
    return (Uh_5tlval41107); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6equals



//! C2D.inc:65:   Bool operator==(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator3d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:66:     return equals(other);
    const u32 Uh_5tlreg41110 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41111(Uh_5tlreg41110); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41113 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval41111); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41114 = Uh_5tlval41113.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval41115(Uh_5tlreg41114); //gcnl:Node.cpp:1142
    return (Uh_5tlval41115); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator3d3d



//! C2D.inc:69:   Bool operator!=(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator213d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:70:     return !equals(other);
    const u32 Uh_5tlreg41118 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41119(Uh_5tlreg41118); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval41121 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval41119); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41122 = Uh_5tlval41121.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41123 = _LogicalBangBool32(Uh_5tlreg41122, 1); //gcnl:NodeUnaryOp.cpp:507
    Ui_Ut_10111b<EC> Uh_5tlval41124(Uh_5tlreg41123); //gcnl:Node.cpp:1142
    return (Uh_5tlval41124); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator213d



//! C2D.inc:79:   Self operator|(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator7c(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:80:     return max(other);
    const u32 Uh_5tlreg41127 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41128(Uh_5tlreg41127); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41130 = THE_INSTANCE.Uf_3max(uc, ur, Uh_5tlval41128); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41131(Uh_5tlval41130); //gcnl:Node.cpp:1142
    return (Uh_5tlval41131); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator7c



//! C2D.inc:83:   Self& operator|=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator7c3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:84:     self = self | other;
    const u32 Uh_5tlreg41137 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41138(Uh_5tlreg41137); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41140 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval41138); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41141(Uh_5tlval41140); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41143 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41141); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:85:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41145(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41145); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator7c3d



//! C2D.inc:88:   Self min(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3min(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
    {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
      const u32 Uh_5tlreg41148 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41151 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41152 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41151, Uh_5tlreg41148, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41152, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
          const u32 Uh_5tlreg41155 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41155); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
    {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
      const u32 Uh_5tlreg41160 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41163 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41164 = _BinOpCompareGreaterThanInt32(Uh_5tlreg41163, Uh_5tlreg41160, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41164, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
          const u32 Uh_5tlreg41167 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41167); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:91:     return other;
    const u32 Uh_5tlreg41171 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41172(Uh_5tlreg41171); //gcnl:Node.cpp:1142
    return (Uh_5tlval41172); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3min



//! C2D.inc:94:   Self operator&(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator26(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:95:     return min(other);
    const u32 Uh_5tlreg41175 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41176(Uh_5tlreg41175); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41178 = THE_INSTANCE.Uf_3min(uc, ur, Uh_5tlval41176); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41179(Uh_5tlval41178); //gcnl:Node.cpp:1142
    return (Uh_5tlval41179); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator26



//! C2D.inc:98:   Self& operator&=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator263d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:99:     self = self & other;
    const u32 Uh_5tlreg41185 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41186(Uh_5tlreg41185); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41188 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, ur, Uh_5tlval41186); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41189(Uh_5tlval41188); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval41191 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval41189); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:100:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref41193(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref41193); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator263d



//! C2D.inc:109:   Bool contains(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8contains(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:110:     Int sx = self.getX();
    const Ui_Ut_102321i<EC> Uh_5tlval41197 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41198 = Uh_5tlval41197.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sx(Uh_5tlreg41198); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:111:     Int sy = self.getY();
    const Ui_Ut_102321i<EC> Uh_5tlval41202 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41203 = Uh_5tlval41202.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sy(Uh_5tlreg41203); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:112:     Int ox = other.getX();
    UlamRef<EC> Uh_3tur41205(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval41207 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, Uh_3tur41205); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41208 = Uh_5tlval41207.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2ox(Uh_5tlreg41208); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:113:     Int oy = other.getY();
    UlamRef<EC> Uh_3tur41210(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval41212 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, Uh_3tur41210); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41213 = Uh_5tlval41212.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2oy(Uh_5tlreg41213); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
    {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
      u32 Uh_5tlreg41214 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg41215 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41216 = _Int32ToInt32(Uh_5tlreg41215, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41218 = Uv_2ox.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41219 = _BinOpCompareLessThanInt32(Uh_5tlreg41218, Uh_5tlreg41216, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg41219, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg41221 = Uv_2sx.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41223 = Uv_2ox.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41224 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg41223, Uh_5tlreg41221, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41214 = Uh_5tlreg41224; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg41214 = Uh_5tlreg41219; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg41214, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
          const u32 Uh_5tlreg41225 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval41226(Uh_5tlreg41225); //gcnl:Node.cpp:1142
          return (Uh_5tlval41226); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
    {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
      u32 Uh_5tlreg41227 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg41228 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41229 = _Int32ToInt32(Uh_5tlreg41228, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41231 = Uv_2oy.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41232 = _BinOpCompareLessThanInt32(Uh_5tlreg41231, Uh_5tlreg41229, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg41232, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg41234 = Uv_2sy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41236 = Uv_2oy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41237 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg41236, Uh_5tlreg41234, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41227 = Uh_5tlreg41237; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg41227 = Uh_5tlreg41232; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg41227, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
          const u32 Uh_5tlreg41238 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval41239(Uh_5tlreg41238); //gcnl:Node.cpp:1142
          return (Uh_5tlval41239); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:116:     return true;
    const u32 Uh_5tlreg41240 = 1u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval41241(Uh_5tlreg41240); //gcnl:Node.cpp:1142
    return (Uh_5tlval41241); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8contains



//! C2D.inc:119:   Int dot(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_3dot(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:120:     return x * other.x + y * other.y;
    const u32 Uh_5tlreg41244 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41245 = _Int32ToInt32(Uh_5tlreg41244, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41247 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41248 = _Int32ToInt32(Uh_5tlreg41247, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41249 = _BinOpMultiplyInt32(Uh_5tlreg41248, Uh_5tlreg41245, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41252 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41253 = _Int32ToInt32(Uh_5tlreg41252, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41255 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41256 = _Int32ToInt32(Uh_5tlreg41255, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41257 = _BinOpMultiplyInt32(Uh_5tlreg41256, Uh_5tlreg41253, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41258 = _BinOpAddInt32(Uh_5tlreg41257, Uh_5tlreg41249, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval41259(Uh_5tlreg41258); //gcnl:Node.cpp:1142
    return (Uh_5tlval41259); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3dot



//! C2D.inc:123:   Int operator*(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_9211_operator2a(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:124:     return dot(other);
    const u32 Uh_5tlreg41262 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41263(Uh_5tlreg41262); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41265 = THE_INSTANCE.Uf_3dot(uc, ur, Uh_5tlval41263); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41266 = Uh_5tlval41265.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uh_5tlval41267(Uh_5tlreg41266); //gcnl:Node.cpp:1142
    return (Uh_5tlval41267); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2a



//! C2D.inc:127:   Self add(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3add(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:128:     return make((Coord) (x + other.x), (Coord) (y + other.y));
    const u32 Uh_5tlreg41271 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41272 = _Int32ToInt32(Uh_5tlreg41271, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41274 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41275 = _Int32ToInt32(Uh_5tlreg41274, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41276 = _BinOpAddInt32(Uh_5tlreg41275, Uh_5tlreg41272, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41277 = _Int32ToInt32(Uh_5tlreg41276, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41278 = _Int32ToInt32(Uh_5tlreg41277, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41279(Uh_5tlreg41278); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41282 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41283 = _Int32ToInt32(Uh_5tlreg41282, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41285 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41286 = _Int32ToInt32(Uh_5tlreg41285, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41287 = _BinOpAddInt32(Uh_5tlreg41286, Uh_5tlreg41283, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41288 = _Int32ToInt32(Uh_5tlreg41287, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41289 = _Int32ToInt32(Uh_5tlreg41288, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41290(Uh_5tlreg41289); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41292 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41279, Uh_5tlval41290); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41293(Uh_5tlval41292); //gcnl:Node.cpp:1142
    return (Uh_5tlval41293); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3add



//! C2D.inc:131:   Self operator+(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:132:     return add(other);
    const u32 Uh_5tlreg41296 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41297(Uh_5tlreg41296); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41299 = THE_INSTANCE.Uf_3add(uc, ur, Uh_5tlval41297); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41300(Uh_5tlval41299); //gcnl:Node.cpp:1142
    return (Uh_5tlval41300); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:151:   Self operator+() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:152:     return self;
    const u32 Uh_5tlreg41302 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41303(Uh_5tlreg41302); //gcnl:Node.cpp:1142
    return (Uh_5tlval41303); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:135:   Self subtract(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8subtract(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:136:     return make((Coord) (x - other.x), (Coord) (y - other.y));
    const u32 Uh_5tlreg41307 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41308 = _Int32ToInt32(Uh_5tlreg41307, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41310 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41311 = _Int32ToInt32(Uh_5tlreg41310, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41312 = _BinOpSubtractInt32(Uh_5tlreg41311, Uh_5tlreg41308, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41313 = _Int32ToInt32(Uh_5tlreg41312, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41314 = _Int32ToInt32(Uh_5tlreg41313, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41315(Uh_5tlreg41314); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41318 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41319 = _Int32ToInt32(Uh_5tlreg41318, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41321 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41322 = _Int32ToInt32(Uh_5tlreg41321, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41323 = _BinOpSubtractInt32(Uh_5tlreg41322, Uh_5tlreg41319, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41324 = _Int32ToInt32(Uh_5tlreg41323, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41325 = _Int32ToInt32(Uh_5tlreg41324, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41326(Uh_5tlreg41325); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41328 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41315, Uh_5tlval41326); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41329(Uh_5tlval41328); //gcnl:Node.cpp:1142
    return (Uh_5tlval41329); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8subtract



//! C2D.inc:139:   Self operator-(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:140:     return subtract(other);
    const u32 Uh_5tlreg41332 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41333(Uh_5tlreg41332); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41335 = THE_INSTANCE.Uf_8subtract(uc, ur, Uh_5tlval41333); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41336(Uh_5tlval41335); //gcnl:Node.cpp:1142
    return (Uh_5tlval41336); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:147:   Self operator-() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:148:     return negate();
    Ui_Uq_102323C2D10<EC> Uh_5tlval41339 = THE_INSTANCE.Uf_6negate(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41340(Uh_5tlval41339); //gcnl:Node.cpp:1142
    return (Uh_5tlval41340); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:143:   Self negate() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6negate(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:144:     return make((Coord) -(Int) x, (Coord) -(Int) y);
    const u32 Uh_5tlreg41343 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41344 = _Int32ToInt32(Uh_5tlreg41343, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41345 = _UnaryMinusInt32(Uh_5tlreg41344, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41346 = _Int32ToInt32(Uh_5tlreg41345, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41347 = _Int32ToInt32(Uh_5tlreg41346, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41348(Uh_5tlreg41347); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41350 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41351 = _Int32ToInt32(Uh_5tlreg41350, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41352 = _UnaryMinusInt32(Uh_5tlreg41351, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41353 = _Int32ToInt32(Uh_5tlreg41352, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41354 = _Int32ToInt32(Uh_5tlreg41353, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41355(Uh_5tlreg41354); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41357 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41348, Uh_5tlval41355); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41358(Uh_5tlval41357); //gcnl:Node.cpp:1142
    return (Uh_5tlval41358); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6negate



//! C2D.inc:158:   Self neighbor(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8neighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
    {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
      const u32 Uh_5tlreg41359 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41360 = _Int32ToInt32(Uh_5tlreg41359, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41362 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41363 = _Unsigned32ToInt32(Uh_5tlreg41362, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41364 = _BinOpCompareEqEqInt32(Uh_5tlreg41363, Uh_5tlreg41360, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41364, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
          const u32 Uh_5tlreg41366 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41367 = _Int32ToInt32(Uh_5tlreg41366, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41368(Uh_5tlreg41367); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41369 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41370 = _Int32ToInt32(Uh_5tlreg41369, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41371(Uh_5tlreg41370); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41373 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41368, Uh_5tlval41371); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41374(Uh_5tlval41373); //gcnl:Node.cpp:1142
          return (Uh_5tlval41374); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:160:     if (d==1) return make( 1, 1);
    {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
      const u32 Uh_5tlreg41375 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41376 = _Int32ToInt32(Uh_5tlreg41375, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41378 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41379 = _Unsigned32ToInt32(Uh_5tlreg41378, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41380 = _BinOpCompareEqEqInt32(Uh_5tlreg41379, Uh_5tlreg41376, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41380, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
          const u32 Uh_5tlreg41382 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41383 = _Int32ToInt32(Uh_5tlreg41382, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41384(Uh_5tlreg41383); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41385 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41386 = _Int32ToInt32(Uh_5tlreg41385, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41387(Uh_5tlreg41386); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41389 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41384, Uh_5tlval41387); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41390(Uh_5tlval41389); //gcnl:Node.cpp:1142
          return (Uh_5tlval41390); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:161:     if (d==2) return make( 1, 0);
    {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
      const u32 Uh_5tlreg41391 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41392 = _Int32ToInt32(Uh_5tlreg41391, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41394 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41395 = _Unsigned32ToInt32(Uh_5tlreg41394, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41396 = _BinOpCompareEqEqInt32(Uh_5tlreg41395, Uh_5tlreg41392, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41396, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
          const u32 Uh_5tlreg41398 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41399 = _Int32ToInt32(Uh_5tlreg41398, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41400(Uh_5tlreg41399); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41401 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41402 = _Int32ToInt32(Uh_5tlreg41401, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41403(Uh_5tlreg41402); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41405 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41400, Uh_5tlval41403); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41406(Uh_5tlval41405); //gcnl:Node.cpp:1142
          return (Uh_5tlval41406); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:162:     if (d==3) return make( 1,-1);
    {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
      const u32 Uh_5tlreg41407 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41408 = _Int32ToInt32(Uh_5tlreg41407, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41410 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41411 = _Unsigned32ToInt32(Uh_5tlreg41410, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41412 = _BinOpCompareEqEqInt32(Uh_5tlreg41411, Uh_5tlreg41408, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41412, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
          const u32 Uh_5tlreg41414 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41415 = _Int32ToInt32(Uh_5tlreg41414, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41416(Uh_5tlreg41415); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41417 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41418 = _Int32ToInt32(Uh_5tlreg41417, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41419(Uh_5tlreg41418); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41421 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41416, Uh_5tlval41419); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41422(Uh_5tlval41421); //gcnl:Node.cpp:1142
          return (Uh_5tlval41422); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:163:     if (d==4) return make( 0,-1);
    {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
      const u32 Uh_5tlreg41423 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41425 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41426 = _Unsigned32ToInt32(Uh_5tlreg41425, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41427 = _BinOpCompareEqEqInt32(Uh_5tlreg41426, Uh_5tlreg41423, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41427, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
          const u32 Uh_5tlreg41429 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41430 = _Int32ToInt32(Uh_5tlreg41429, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41431(Uh_5tlreg41430); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41432 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41433 = _Int32ToInt32(Uh_5tlreg41432, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41434(Uh_5tlreg41433); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41436 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41431, Uh_5tlval41434); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41437(Uh_5tlval41436); //gcnl:Node.cpp:1142
          return (Uh_5tlval41437); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:164:     if (d==5) return make(-1,-1);
    {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
      const u32 Uh_5tlreg41438 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41440 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41441 = _Unsigned32ToInt32(Uh_5tlreg41440, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41442 = _BinOpCompareEqEqInt32(Uh_5tlreg41441, Uh_5tlreg41438, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41442, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
          const u32 Uh_5tlreg41444 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41445 = _Int32ToInt32(Uh_5tlreg41444, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41446(Uh_5tlreg41445); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41447 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41448 = _Int32ToInt32(Uh_5tlreg41447, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41449(Uh_5tlreg41448); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41451 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41446, Uh_5tlval41449); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41452(Uh_5tlval41451); //gcnl:Node.cpp:1142
          return (Uh_5tlval41452); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:165:     if (d==6) return make(-1, 0);
    {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
      const u32 Uh_5tlreg41453 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41455 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41456 = _Unsigned32ToInt32(Uh_5tlreg41455, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41457 = _BinOpCompareEqEqInt32(Uh_5tlreg41456, Uh_5tlreg41453, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41457, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
          const u32 Uh_5tlreg41459 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41460 = _Int32ToInt32(Uh_5tlreg41459, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41461(Uh_5tlreg41460); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41462 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41463 = _Int32ToInt32(Uh_5tlreg41462, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41464(Uh_5tlreg41463); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41466 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41461, Uh_5tlval41464); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41467(Uh_5tlval41466); //gcnl:Node.cpp:1142
          return (Uh_5tlval41467); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:166:     /* d==7*/ return make(-1, 1);
    const u32 Uh_5tlreg41469 = (u32) -1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41470 = _Int32ToInt32(Uh_5tlreg41469, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41471(Uh_5tlreg41470); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41472 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41473 = _Int32ToInt32(Uh_5tlreg41472, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41474(Uh_5tlreg41473); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41476 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41471, Uh_5tlval41474); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41477(Uh_5tlval41476); //gcnl:Node.cpp:1142
    return (Uh_5tlval41477); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8neighbor



//! C2D.inc:172:   Self corner(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6corner(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
    {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
      const u32 Uh_5tlreg41478 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41479 = _Int32ToInt32(Uh_5tlreg41478, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41481 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41482 = _Unsigned32ToInt32(Uh_5tlreg41481, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41483 = _BinOpCompareEqEqInt32(Uh_5tlreg41482, Uh_5tlreg41479, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41483, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
          const u32 Uh_5tlreg41485 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41486 = _Int32ToInt32(Uh_5tlreg41485, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41487(Uh_5tlreg41486); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41488 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41489 = _Int32ToInt32(Uh_5tlreg41488, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41490(Uh_5tlreg41489); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41492 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41487, Uh_5tlval41490); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41493(Uh_5tlval41492); //gcnl:Node.cpp:1142
          return (Uh_5tlval41493); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:174:     if (d==1) return make( 2, 2);
    {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
      const u32 Uh_5tlreg41494 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41495 = _Int32ToInt32(Uh_5tlreg41494, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41497 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41498 = _Unsigned32ToInt32(Uh_5tlreg41497, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41499 = _BinOpCompareEqEqInt32(Uh_5tlreg41498, Uh_5tlreg41495, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41499, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
          const u32 Uh_5tlreg41501 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41502 = _Int32ToInt32(Uh_5tlreg41501, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41503(Uh_5tlreg41502); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41504 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41505 = _Int32ToInt32(Uh_5tlreg41504, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41506(Uh_5tlreg41505); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41508 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41503, Uh_5tlval41506); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41509(Uh_5tlval41508); //gcnl:Node.cpp:1142
          return (Uh_5tlval41509); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:175:     if (d==2) return make( 4, 0);
    {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
      const u32 Uh_5tlreg41510 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41511 = _Int32ToInt32(Uh_5tlreg41510, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41513 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41514 = _Unsigned32ToInt32(Uh_5tlreg41513, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41515 = _BinOpCompareEqEqInt32(Uh_5tlreg41514, Uh_5tlreg41511, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41515, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
          const u32 Uh_5tlreg41517 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41518 = _Int32ToInt32(Uh_5tlreg41517, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41519(Uh_5tlreg41518); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41520 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41521 = _Int32ToInt32(Uh_5tlreg41520, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41522(Uh_5tlreg41521); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41524 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41519, Uh_5tlval41522); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41525(Uh_5tlval41524); //gcnl:Node.cpp:1142
          return (Uh_5tlval41525); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:176:     if (d==3) return make( 2,-2);
    {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
      const u32 Uh_5tlreg41526 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41527 = _Int32ToInt32(Uh_5tlreg41526, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41529 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41530 = _Unsigned32ToInt32(Uh_5tlreg41529, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41531 = _BinOpCompareEqEqInt32(Uh_5tlreg41530, Uh_5tlreg41527, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41531, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
          const u32 Uh_5tlreg41533 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41534 = _Int32ToInt32(Uh_5tlreg41533, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41535(Uh_5tlreg41534); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41536 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41537 = _Int32ToInt32(Uh_5tlreg41536, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41538(Uh_5tlreg41537); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41540 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41535, Uh_5tlval41538); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41541(Uh_5tlval41540); //gcnl:Node.cpp:1142
          return (Uh_5tlval41541); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:177:     if (d==4) return make( 0,-4);
    {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
      const u32 Uh_5tlreg41542 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41544 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41545 = _Unsigned32ToInt32(Uh_5tlreg41544, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41546 = _BinOpCompareEqEqInt32(Uh_5tlreg41545, Uh_5tlreg41542, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41546, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
          const u32 Uh_5tlreg41548 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41549 = _Int32ToInt32(Uh_5tlreg41548, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41550(Uh_5tlreg41549); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41551 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41552 = _Int32ToInt32(Uh_5tlreg41551, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41553(Uh_5tlreg41552); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41555 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41550, Uh_5tlval41553); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41556(Uh_5tlval41555); //gcnl:Node.cpp:1142
          return (Uh_5tlval41556); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:178:     if (d==5) return make(-2,-2);
    {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
      const u32 Uh_5tlreg41557 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41559 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41560 = _Unsigned32ToInt32(Uh_5tlreg41559, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41561 = _BinOpCompareEqEqInt32(Uh_5tlreg41560, Uh_5tlreg41557, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41561, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
          const u32 Uh_5tlreg41563 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41564 = _Int32ToInt32(Uh_5tlreg41563, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41565(Uh_5tlreg41564); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41566 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41567 = _Int32ToInt32(Uh_5tlreg41566, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41568(Uh_5tlreg41567); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41570 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41565, Uh_5tlval41568); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41571(Uh_5tlval41570); //gcnl:Node.cpp:1142
          return (Uh_5tlval41571); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:179:     if (d==6) return make(-4, 0);
    {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
      const u32 Uh_5tlreg41572 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41574 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41575 = _Unsigned32ToInt32(Uh_5tlreg41574, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41576 = _BinOpCompareEqEqInt32(Uh_5tlreg41575, Uh_5tlreg41572, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41576, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
          const u32 Uh_5tlreg41578 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41579 = _Int32ToInt32(Uh_5tlreg41578, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41580(Uh_5tlreg41579); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41581 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41582 = _Int32ToInt32(Uh_5tlreg41581, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41583(Uh_5tlreg41582); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41585 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41580, Uh_5tlval41583); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41586(Uh_5tlval41585); //gcnl:Node.cpp:1142
          return (Uh_5tlval41586); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:180:     /* d==7*/ return make(-2, 2);
    const u32 Uh_5tlreg41588 = (u32) -2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41589 = _Int32ToInt32(Uh_5tlreg41588, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41590(Uh_5tlreg41589); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41591 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41592 = _Int32ToInt32(Uh_5tlreg41591, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41593(Uh_5tlreg41592); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41595 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41590, Uh_5tlval41593); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41596(Uh_5tlval41595); //gcnl:Node.cpp:1142
    return (Uh_5tlval41596); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6corner



//! C2D.inc:183:   Unsigned length() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_6length(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:184:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:185:     return origin.manhattanDistance(self);
    UlamRef<EC> Uh_3tur41598(0u, 32u, Uv_6origin, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41600 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41601(Uh_5tlreg41600); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41603 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9217manhattanDistance(uc, Uh_3tur41598, Uh_5tlval41601); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41604 = Uh_5tlval41603.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41605(Uh_5tlreg41604); //gcnl:Node.cpp:1142
    return (Uh_5tlval41605); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6length



//! C2D.inc:202:   Unsigned manhattanDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9217manhattanDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:203:     Self a = abs(self-other);
    const u32 Uh_5tlreg41610 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41611(Uh_5tlreg41610); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41613 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41611); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41614(Uh_5tlval41613); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41616 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval41614); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_1a(Uh_5tlval41616); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:204:     return (Unsigned) (a.x + a.y);
    const u32 Uh_5tlreg41619 = UlamRef<EC>(16u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41620 = _Int32ToInt32(Uh_5tlreg41619, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41623 = UlamRef<EC>(0u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41624 = _Int32ToInt32(Uh_5tlreg41623, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41625 = _BinOpAddInt32(Uh_5tlreg41624, Uh_5tlreg41620, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41626 = _Int32ToUnsigned32(Uh_5tlreg41625, 17, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41627(Uh_5tlreg41626); //gcnl:Node.cpp:1142
    return (Uh_5tlval41627); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217manhattanDistance



//! C2D.inc:188:   Bool isOrigin() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8isOrigin(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:189:     return x == 0 && y == 0;
    u32 Uh_5tlreg41628 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41629 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41630 = _Int32ToInt32(Uh_5tlreg41629, 2, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41632 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41633 = _BinOpCompareEqEqInt32(Uh_5tlreg41632, Uh_5tlreg41630, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41633, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41634 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41635 = _Int32ToInt32(Uh_5tlreg41634, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41637 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41638 = _BinOpCompareEqEqInt32(Uh_5tlreg41637, Uh_5tlreg41635, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg41628 = Uh_5tlreg41638; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41639(Uh_5tlreg41628); //gcnl:Node.cpp:1142
    return (Uh_5tlval41639); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8isOrigin



//! C2D.inc:196:   Self abs(Self of) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_2of) const
  {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
    {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
      const u32 Uh_5tlreg41640 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41641 = _Int32ToInt32(Uh_5tlreg41640, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41644 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41645 = _BinOpCompareLessThanInt32(Uh_5tlreg41644, Uh_5tlreg41641, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41645, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
          const u32 Uh_5tlreg41648 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41649 = _UnaryMinusInt32(Uh_5tlreg41648, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41649); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
    {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
      const u32 Uh_5tlreg41652 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41653 = _Int32ToInt32(Uh_5tlreg41652, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41656 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41657 = _BinOpCompareLessThanInt32(Uh_5tlreg41656, Uh_5tlreg41653, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41657, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
          const u32 Uh_5tlreg41660 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41661 = _UnaryMinusInt32(Uh_5tlreg41660, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41661); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:199:     return of;
    const u32 Uh_5tlreg41665 = Uv_2of.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41666(Uh_5tlreg41665); //gcnl:Node.cpp:1142
    return (Uh_5tlval41666); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:192:   Self abs() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:193:     return abs(self);
    const u32 Uh_5tlreg41669 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41670(Uh_5tlreg41669); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41672 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval41670); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41673(Uh_5tlval41672); //gcnl:Node.cpp:1142
    return (Uh_5tlval41673); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:210:   Unsigned euclideanSquaredDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9224euclideanSquaredDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:211:     Self diff = self-other;
    const u32 Uh_5tlreg41677 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41678(Uh_5tlreg41677); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41680 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41678); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_4diff(Uh_5tlval41680); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:212:     return diff.euclideanSquaredLength();
    UlamRef<EC> Uh_3tur41682(0u, 32u, Uv_4diff, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321u<EC> Uh_5tlval41684 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9222euclideanSquaredLength(uc, Uh_3tur41682); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41685 = Uh_5tlval41684.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41686(Uh_5tlreg41685); //gcnl:Node.cpp:1142
    return (Uh_5tlval41686); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9224euclideanSquaredDistance



//! C2D.inc:218:   Unsigned euclideanSquaredLength() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9222euclideanSquaredLength(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:219:     return (Unsigned) (self * self);
    const u32 Uh_5tlreg41690 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41691(Uh_5tlreg41690); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41693 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2a(uc, ur, Uh_5tlval41691); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41694 = Uh_5tlval41693.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41695 = _Int32ToUnsigned32(Uh_5tlreg41694, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41696(Uh_5tlreg41695); //gcnl:Node.cpp:1142
    return (Uh_5tlval41696); //gcnl:NodeReturnStatement.cpp:343

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

