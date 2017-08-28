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
    const u32 Uh_5tlreg3635 = UlamRef<EC>(0u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3635); //gcnl:Node.cpp:892

//! C2D.inc:15:     y = s.y;
    const u32 Uh_5tlreg3639 = UlamRef<EC>(16u, 16u, Uv_1s, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3639); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:8:   Self(Coord ax, Coord ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4Self(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2ax, Ui_Ut_102161i<EC>& Uv_2ay) const
  {

//! C2D.inc:9:     x = ax;
    const u32 Uh_5tlreg3642 = Uv_2ax.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3642); //gcnl:Node.cpp:892

//! C2D.inc:10:     y = ay;
    const u32 Uh_5tlreg3645 = Uv_2ay.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3645); //gcnl:Node.cpp:892

  } // Uf_4Self



//! C2D.inc:73:   Self max(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3max(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
    {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
      const u32 Uh_5tlreg3649 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3652 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3653 = _BinOpCompareLessThanInt32(Uh_5tlreg3652, Uh_5tlreg3649, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3653, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:74:     if (other.x < self.x) other.x = self.x;
          const u32 Uh_5tlreg3656 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3656); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
    {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
      const u32 Uh_5tlreg3661 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3664 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3665 = _BinOpCompareLessThanInt32(Uh_5tlreg3664, Uh_5tlreg3661, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3665, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:75:     if (other.y < self.y) other.y = self.y;
          const u32 Uh_5tlreg3668 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3668); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:76:     return other;
    const u32 Uh_5tlreg3672 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3673(Uh_5tlreg3672); //gcnl:Node.cpp:1142
    return (Uh_5tlval3673); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3max



//! C2D.inc:23:   Void set(Self c) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_1c) const
  {

//! C2D.inc:24:     set(c.x, c.y);
    const u32 Uh_5tlreg3677 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3678 = _Int32ToInt32(Uh_5tlreg3677, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3679(Uh_5tlreg3678); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3682 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3683 = _Int32ToInt32(Uh_5tlreg3682, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3684(Uh_5tlreg3683); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval3679, Uh_5tlval3684); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_3set



//! C2D.inc:18:   Void set(Int ax, Int ay) {
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_3set(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:19:     x = (Coord) ax;
    const u32 Uh_5tlreg3687 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3688 = _Int32ToInt32(Uh_5tlreg3687, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3688); //gcnl:Node.cpp:892

//! C2D.inc:20:     y = (Coord) ay;
    const u32 Uh_5tlreg3691 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3692 = _Int32ToInt32(Uh_5tlreg3691, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3692); //gcnl:Node.cpp:892

  } // Uf_3set



//! C2D.inc:27:   Self & operator=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:28:     set(other);
    const u32 Uh_5tlreg3696 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3697(Uh_5tlreg3696); //gcnl:Node.cpp:1142
    THE_INSTANCE.Uf_3set(uc, ur, Uh_5tlval3697); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:29:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref3700(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref3700); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9211_operator3d



//! C2D.inc:32:   Self & operator+=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2b3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:35:     self = self + other;  
    const u32 Uh_5tlreg3706 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3707(Uh_5tlreg3706); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3709 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2b(uc, ur, Uh_5tlval3707); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval3710(Uh_5tlval3709); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval3712 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval3710); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:36:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref3714(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref3714); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2b3d



//! C2D.inc:39:   Self & operator-=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator2d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:40:     self = self - other;
    const u32 Uh_5tlreg3720 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3721(Uh_5tlreg3720); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3723 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval3721); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval3724(Uh_5tlval3723); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval3726 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval3724); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:41:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref3728(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref3728); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator2d3d



//! C2D.inc:44:   Self clamp(Self below, Self above) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_5clamp(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5below, Ui_Uq_102323C2D10<EC>& Uv_5above) const
  {

//! C2D.inc:45:     return (self | below) & above;
    const u32 Uh_5tlreg3732 = Uv_5below.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3733(Uh_5tlreg3732); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3735 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval3733); //gcnl:NodeFunctionCall.cpp:1043
    UlamRef<EC> Uh_3tur3736(0u, 32u, Uh_5tlval3735, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3738 = Uv_5above.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3739(Uh_5tlreg3738); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3741 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, Uh_3tur3736, Uh_5tlval3739); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval3742(Uh_5tlval3741); //gcnl:Node.cpp:1142
    return (Uh_5tlval3742); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5clamp



//! C2D.inc:48:   Int getX() { return (Int) x; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getX(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:48:   Int getX() { return (Int) x; }
    const u32 Uh_5tlreg3744 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg3745 = _Int32ToInt32(Uh_5tlreg3744, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3746(Uh_5tlreg3745); //gcnl:Node.cpp:1142
    return (Uh_5tlval3746); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getX



//! C2D.inc:49:   Int getY() { return (Int) y; }
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_4getY(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:49:   Int getY() { return (Int) y; }
    const u32 Uh_5tlreg3748 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg3749 = _Int32ToInt32(Uh_5tlreg3748, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3750(Uh_5tlreg3749); //gcnl:Node.cpp:1142
    return (Uh_5tlval3750); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4getY



//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setX(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ax) const
  {

//! C2D.inc:51:   Void setX(Int ax) { x = (Coord) ax; }
    const u32 Uh_5tlreg3752 = Uv_2ax.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3753 = _Int32ToInt32(Uh_5tlreg3752, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3753); //gcnl:Node.cpp:892

  } // Uf_4setX



//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
  template<class EC>
  void Uq_102323C2D10<EC>::Uf_4setY(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_2ay) const
  {

//! C2D.inc:52:   Void setY(Int ay) { y = (Coord) ay; }
    const u32 Uh_5tlreg3756 = Uv_2ay.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3757 = _Int32ToInt32(Uh_5tlreg3756, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3757); //gcnl:Node.cpp:892

  } // Uf_4setY



//! C2D.inc:54:   Self make(Int x, Int y)
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_4make(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1x, Ui_Ut_102321i<EC>& Uv_1y) const
  {

//! C2D.inc:56:     Self ret;
    Ui_Uq_102323C2D10<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:57:     ret.set(x,y);
    UlamRef<EC> Uh_3tur3760(0u, 32u, Uv_3ret, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3762 = Uv_1x.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval3763(Uh_5tlreg3762); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3765 = Uv_1y.read(); //gcnl:Node.cpp:698
    Ui_Ut_102321i<EC> Uh_5tlval3766(Uh_5tlreg3765); //gcnl:Node.cpp:1142
    Uq_102323C2D10<EC>::THE_INSTANCE.Uf_3set(uc, Uh_3tur3760, Uh_5tlval3763, Uh_5tlval3766); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:58:     return ret;
    const u32 Uh_5tlreg3769 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3770(Uh_5tlreg3769); //gcnl:Node.cpp:1142
    return (Uh_5tlval3770); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_4make



//! C2D.inc:61:   Bool equals(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_6equals(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:62:     return x == other.x && y == other.y;
    u32 Uh_5tlreg3771 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg3774 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3776 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg3777 = _BinOpCompareEqEqInt32(Uh_5tlreg3776, Uh_5tlreg3774, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3777, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg3780 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3782 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3783 = _BinOpCompareEqEqInt32(Uh_5tlreg3782, Uh_5tlreg3780, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg3771 = Uh_5tlreg3783; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval3784(Uh_5tlreg3771); //gcnl:Node.cpp:1142
    return (Uh_5tlval3784); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6equals



//! C2D.inc:65:   Bool operator==(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator3d3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:66:     return equals(other);
    const u32 Uh_5tlreg3787 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3788(Uh_5tlreg3787); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3790 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval3788); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3791 = Uh_5tlval3790.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10111b<EC> Uh_5tlval3792(Uh_5tlreg3791); //gcnl:Node.cpp:1142
    return (Uh_5tlval3792); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator3d3d



//! C2D.inc:69:   Bool operator!=(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_9213_operator213d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:70:     return !equals(other);
    const u32 Uh_5tlreg3795 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3796(Uh_5tlreg3795); //gcnl:Node.cpp:1142
    const Ui_Ut_10111b<EC> Uh_5tlval3798 = THE_INSTANCE.Uf_6equals(uc, ur, Uh_5tlval3796); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3799 = Uh_5tlval3798.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg3800 = _LogicalBangBool32(Uh_5tlreg3799, 1); //gcnl:NodeUnaryOp.cpp:507
    Ui_Ut_10111b<EC> Uh_5tlval3801(Uh_5tlreg3800); //gcnl:Node.cpp:1142
    return (Uh_5tlval3801); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9213_operator213d



//! C2D.inc:79:   Self operator|(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator7c(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:80:     return max(other);
    const u32 Uh_5tlreg3804 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3805(Uh_5tlreg3804); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3807 = THE_INSTANCE.Uf_3max(uc, ur, Uh_5tlval3805); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval3808(Uh_5tlval3807); //gcnl:Node.cpp:1142
    return (Uh_5tlval3808); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator7c



//! C2D.inc:83:   Self& operator|=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator7c3d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:84:     self = self | other;
    const u32 Uh_5tlreg3814 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3815(Uh_5tlreg3814); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3817 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator7c(uc, ur, Uh_5tlval3815); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval3818(Uh_5tlval3817); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval3820 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval3818); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:85:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref3822(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref3822); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator7c3d



//! C2D.inc:88:   Self min(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3min(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
    {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
      const u32 Uh_5tlreg3825 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3828 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3829 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3828, Uh_5tlreg3825, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3829, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:89:     if (other.x > self.x) other.x = self.x;
          const u32 Uh_5tlreg3832 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3832); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
    {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
      const u32 Uh_5tlreg3837 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3840 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3841 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3840, Uh_5tlreg3837, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3841, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:90:     if (other.y > self.y) other.y = self.y;
          const u32 Uh_5tlreg3844 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3844); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:91:     return other;
    const u32 Uh_5tlreg3848 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3849(Uh_5tlreg3848); //gcnl:Node.cpp:1142
    return (Uh_5tlval3849); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3min



//! C2D.inc:94:   Self operator&(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator26(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:95:     return min(other);
    const u32 Uh_5tlreg3852 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3853(Uh_5tlreg3852); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3855 = THE_INSTANCE.Uf_3min(uc, ur, Uh_5tlval3853); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval3856(Uh_5tlval3855); //gcnl:Node.cpp:1142
    return (Uh_5tlval3856); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator26



//! C2D.inc:98:   Self& operator&=(Self other) {
  template<class EC>
  Ui_Uq_r102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9213_operator263d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:99:     self = self & other;
    const u32 Uh_5tlreg3862 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3863(Uh_5tlreg3862); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3865 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator26(uc, ur, Uh_5tlval3863); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval3866(Uh_5tlval3865); //gcnl:Node.cpp:1142
    Ui_Uq_r102323C2D10<EC> Uh_5tlval3868 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, ur, Uh_5tlval3866); //gcnl:NodeFunctionCall.cpp:1043

//! C2D.inc:100:     return self;
    Ui_Uq_r102323C2D10<EC> Uh_6tlref3870(ur, 0u, ur.GetEffectiveSelf()); //gcnl:Node.cpp:1510
    return (Uh_6tlref3870); //gcnl:NodeReturnStatement.cpp:407

  } // Uf_9213_operator263d



//! C2D.inc:109:   Bool contains(Self other) {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8contains(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:110:     Int sx = self.getX();
    const Ui_Ut_102321i<EC> Uh_5tlval3874 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3875 = Uh_5tlval3874.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sx(Uh_5tlreg3875); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:111:     Int sy = self.getY();
    const Ui_Ut_102321i<EC> Uh_5tlval3879 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3880 = Uh_5tlval3879.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2sy(Uh_5tlreg3880); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:112:     Int ox = other.getX();
    UlamRef<EC> Uh_3tur3882(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval3884 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getX(uc, Uh_3tur3882); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3885 = Uh_5tlval3884.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2ox(Uh_5tlreg3885); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:113:     Int oy = other.getY();
    UlamRef<EC> Uh_3tur3887(0u, 32u, Uv_5other, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321i<EC> Uh_5tlval3889 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_4getY(uc, Uh_3tur3887); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3890 = Uh_5tlval3889.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uv_2oy(Uh_5tlreg3890); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
    {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
      u32 Uh_5tlreg3891 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg3892 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3893 = _Int32ToInt32(Uh_5tlreg3892, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3895 = Uv_2ox.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3896 = _BinOpCompareLessThanInt32(Uh_5tlreg3895, Uh_5tlreg3893, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg3896, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg3898 = Uv_2sx.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3900 = Uv_2ox.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3901 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg3900, Uh_5tlreg3898, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3891 = Uh_5tlreg3901; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg3891 = Uh_5tlreg3896; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg3891, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:114:     if (ox < 0 || ox >= sx) return false;
          const u32 Uh_5tlreg3902 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval3903(Uh_5tlreg3902); //gcnl:Node.cpp:1142
          return (Uh_5tlval3903); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
    {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
      u32 Uh_5tlreg3904 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg3905 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3906 = _Int32ToInt32(Uh_5tlreg3905, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3908 = Uv_2oy.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3909 = _BinOpCompareLessThanInt32(Uh_5tlreg3908, Uh_5tlreg3906, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg3909, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg3911 = Uv_2sy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3913 = Uv_2oy.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3914 = _BinOpCompareGreaterEqualInt32(Uh_5tlreg3913, Uh_5tlreg3911, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3904 = Uh_5tlreg3914; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg3904 = Uh_5tlreg3909; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg3904, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:115:     if (oy < 0 || oy >= sy) return false;
          const u32 Uh_5tlreg3915 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval3916(Uh_5tlreg3915); //gcnl:Node.cpp:1142
          return (Uh_5tlval3916); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:116:     return true;
    const u32 Uh_5tlreg3917 = 1u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval3918(Uh_5tlreg3917); //gcnl:Node.cpp:1142
    return (Uh_5tlval3918); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8contains



//! C2D.inc:119:   Int dot(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_3dot(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:120:     return x * other.x + y * other.y;
    const u32 Uh_5tlreg3921 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3922 = _Int32ToInt32(Uh_5tlreg3921, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3924 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg3925 = _Int32ToInt32(Uh_5tlreg3924, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3926 = _BinOpMultiplyInt32(Uh_5tlreg3925, Uh_5tlreg3922, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3929 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3930 = _Int32ToInt32(Uh_5tlreg3929, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3932 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg3933 = _Int32ToInt32(Uh_5tlreg3932, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3934 = _BinOpMultiplyInt32(Uh_5tlreg3933, Uh_5tlreg3930, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3935 = _BinOpAddInt32(Uh_5tlreg3934, Uh_5tlreg3926, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321i<EC> Uh_5tlval3936(Uh_5tlreg3935); //gcnl:Node.cpp:1142
    return (Uh_5tlval3936); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3dot



//! C2D.inc:123:   Int operator*(Self other) {
  template<class EC>
  Ui_Ut_102321i<EC> Uq_102323C2D10<EC>::Uf_9211_operator2a(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:124:     return dot(other);
    const u32 Uh_5tlreg3939 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3940(Uh_5tlreg3939); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval3942 = THE_INSTANCE.Uf_3dot(uc, ur, Uh_5tlval3940); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3943 = Uh_5tlval3942.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321i<EC> Uh_5tlval3944(Uh_5tlreg3943); //gcnl:Node.cpp:1142
    return (Uh_5tlval3944); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2a



//! C2D.inc:127:   Self add(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3add(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:128:     return make((Coord) (x + other.x), (Coord) (y + other.y));
    const u32 Uh_5tlreg3948 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3949 = _Int32ToInt32(Uh_5tlreg3948, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3951 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg3952 = _Int32ToInt32(Uh_5tlreg3951, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3953 = _BinOpAddInt32(Uh_5tlreg3952, Uh_5tlreg3949, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3954 = _Int32ToInt32(Uh_5tlreg3953, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3955 = _Int32ToInt32(Uh_5tlreg3954, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3956(Uh_5tlreg3955); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3959 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3960 = _Int32ToInt32(Uh_5tlreg3959, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3962 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg3963 = _Int32ToInt32(Uh_5tlreg3962, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3964 = _BinOpAddInt32(Uh_5tlreg3963, Uh_5tlreg3960, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3965 = _Int32ToInt32(Uh_5tlreg3964, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3966 = _Int32ToInt32(Uh_5tlreg3965, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3967(Uh_5tlreg3966); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3969 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval3956, Uh_5tlval3967); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval3970(Uh_5tlval3969); //gcnl:Node.cpp:1142
    return (Uh_5tlval3970); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3add



//! C2D.inc:131:   Self operator+(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:132:     return add(other);
    const u32 Uh_5tlreg3973 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3974(Uh_5tlreg3973); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3976 = THE_INSTANCE.Uf_3add(uc, ur, Uh_5tlval3974); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval3977(Uh_5tlval3976); //gcnl:Node.cpp:1142
    return (Uh_5tlval3977); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:151:   Self operator+() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2b(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:152:     return self;
    const u32 Uh_5tlreg3979 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval3980(Uh_5tlreg3979); //gcnl:Node.cpp:1142
    return (Uh_5tlval3980); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2b



//! C2D.inc:135:   Self subtract(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8subtract(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:136:     return make((Coord) (x - other.x), (Coord) (y - other.y));
    const u32 Uh_5tlreg3984 = UlamRef<EC>(0u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3985 = _Int32ToInt32(Uh_5tlreg3984, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3987 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg3988 = _Int32ToInt32(Uh_5tlreg3987, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3989 = _BinOpSubtractInt32(Uh_5tlreg3988, Uh_5tlreg3985, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3990 = _Int32ToInt32(Uh_5tlreg3989, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3991 = _Int32ToInt32(Uh_5tlreg3990, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3992(Uh_5tlreg3991); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3995 = UlamRef<EC>(16u, 16u, Uv_5other, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3996 = _Int32ToInt32(Uh_5tlreg3995, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3998 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg3999 = _Int32ToInt32(Uh_5tlreg3998, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41000 = _BinOpSubtractInt32(Uh_5tlreg3999, Uh_5tlreg3996, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41001 = _Int32ToInt32(Uh_5tlreg41000, 17, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41002 = _Int32ToInt32(Uh_5tlreg41001, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41003(Uh_5tlreg41002); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41005 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval3992, Uh_5tlval41003); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41006(Uh_5tlval41005); //gcnl:Node.cpp:1142
    return (Uh_5tlval41006); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8subtract



//! C2D.inc:139:   Self operator-(Self other) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:140:     return subtract(other);
    const u32 Uh_5tlreg41009 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41010(Uh_5tlreg41009); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41012 = THE_INSTANCE.Uf_8subtract(uc, ur, Uh_5tlval41010); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41013(Uh_5tlval41012); //gcnl:Node.cpp:1142
    return (Uh_5tlval41013); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:147:   Self operator-() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_9211_operator2d(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:148:     return negate();
    Ui_Uq_102323C2D10<EC> Uh_5tlval41016 = THE_INSTANCE.Uf_6negate(uc, ur); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41017(Uh_5tlval41016); //gcnl:Node.cpp:1142
    return (Uh_5tlval41017); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211_operator2d



//! C2D.inc:143:   Self negate() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6negate(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:144:     return make((Coord) -(Int) x, (Coord) -(Int) y);
    const u32 Uh_5tlreg41020 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41021 = _Int32ToInt32(Uh_5tlreg41020, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41022 = _UnaryMinusInt32(Uh_5tlreg41021, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41023 = _Int32ToInt32(Uh_5tlreg41022, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41024 = _Int32ToInt32(Uh_5tlreg41023, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41025(Uh_5tlreg41024); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41027 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41028 = _Int32ToInt32(Uh_5tlreg41027, 16, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41029 = _UnaryMinusInt32(Uh_5tlreg41028, 32); //gcnl:NodeUnaryOp.cpp:507
    const u32 Uh_5tlreg41030 = _Int32ToInt32(Uh_5tlreg41029, 32, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41031 = _Int32ToInt32(Uh_5tlreg41030, 16, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41032(Uh_5tlreg41031); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41034 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41025, Uh_5tlval41032); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41035(Uh_5tlval41034); //gcnl:Node.cpp:1142
    return (Uh_5tlval41035); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6negate



//! C2D.inc:158:   Self neighbor(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_8neighbor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
    {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
      const u32 Uh_5tlreg41036 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41037 = _Int32ToInt32(Uh_5tlreg41036, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41039 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41040 = _Unsigned32ToInt32(Uh_5tlreg41039, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41041 = _BinOpCompareEqEqInt32(Uh_5tlreg41040, Uh_5tlreg41037, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41041, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:159:     if (d==0) return make( 0, 1);
          const u32 Uh_5tlreg41043 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41044 = _Int32ToInt32(Uh_5tlreg41043, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41045(Uh_5tlreg41044); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41046 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41047 = _Int32ToInt32(Uh_5tlreg41046, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41048(Uh_5tlreg41047); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41050 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41045, Uh_5tlval41048); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41051(Uh_5tlval41050); //gcnl:Node.cpp:1142
          return (Uh_5tlval41051); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:160:     if (d==1) return make( 1, 1);
    {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
      const u32 Uh_5tlreg41052 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41053 = _Int32ToInt32(Uh_5tlreg41052, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41055 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41056 = _Unsigned32ToInt32(Uh_5tlreg41055, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41057 = _BinOpCompareEqEqInt32(Uh_5tlreg41056, Uh_5tlreg41053, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41057, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:160:     if (d==1) return make( 1, 1);
          const u32 Uh_5tlreg41059 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41060 = _Int32ToInt32(Uh_5tlreg41059, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41061(Uh_5tlreg41060); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41062 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41063 = _Int32ToInt32(Uh_5tlreg41062, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41064(Uh_5tlreg41063); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41066 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41061, Uh_5tlval41064); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41067(Uh_5tlval41066); //gcnl:Node.cpp:1142
          return (Uh_5tlval41067); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:161:     if (d==2) return make( 1, 0);
    {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
      const u32 Uh_5tlreg41068 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41069 = _Int32ToInt32(Uh_5tlreg41068, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41071 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41072 = _Unsigned32ToInt32(Uh_5tlreg41071, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41073 = _BinOpCompareEqEqInt32(Uh_5tlreg41072, Uh_5tlreg41069, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41073, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:161:     if (d==2) return make( 1, 0);
          const u32 Uh_5tlreg41075 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41076 = _Int32ToInt32(Uh_5tlreg41075, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41077(Uh_5tlreg41076); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41078 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41079 = _Int32ToInt32(Uh_5tlreg41078, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41080(Uh_5tlreg41079); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41082 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41077, Uh_5tlval41080); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41083(Uh_5tlval41082); //gcnl:Node.cpp:1142
          return (Uh_5tlval41083); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:162:     if (d==3) return make( 1,-1);
    {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
      const u32 Uh_5tlreg41084 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41085 = _Int32ToInt32(Uh_5tlreg41084, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41087 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41088 = _Unsigned32ToInt32(Uh_5tlreg41087, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41089 = _BinOpCompareEqEqInt32(Uh_5tlreg41088, Uh_5tlreg41085, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41089, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:162:     if (d==3) return make( 1,-1);
          const u32 Uh_5tlreg41091 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41092 = _Int32ToInt32(Uh_5tlreg41091, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41093(Uh_5tlreg41092); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41094 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41095 = _Int32ToInt32(Uh_5tlreg41094, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41096(Uh_5tlreg41095); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41098 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41093, Uh_5tlval41096); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41099(Uh_5tlval41098); //gcnl:Node.cpp:1142
          return (Uh_5tlval41099); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:163:     if (d==4) return make( 0,-1);
    {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
      const u32 Uh_5tlreg41100 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41102 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41103 = _Unsigned32ToInt32(Uh_5tlreg41102, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41104 = _BinOpCompareEqEqInt32(Uh_5tlreg41103, Uh_5tlreg41100, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41104, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:163:     if (d==4) return make( 0,-1);
          const u32 Uh_5tlreg41106 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41107 = _Int32ToInt32(Uh_5tlreg41106, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41108(Uh_5tlreg41107); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41109 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41110 = _Int32ToInt32(Uh_5tlreg41109, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41111(Uh_5tlreg41110); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41113 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41108, Uh_5tlval41111); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41114(Uh_5tlval41113); //gcnl:Node.cpp:1142
          return (Uh_5tlval41114); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:164:     if (d==5) return make(-1,-1);
    {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
      const u32 Uh_5tlreg41115 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41117 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41118 = _Unsigned32ToInt32(Uh_5tlreg41117, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41119 = _BinOpCompareEqEqInt32(Uh_5tlreg41118, Uh_5tlreg41115, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41119, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:164:     if (d==5) return make(-1,-1);
          const u32 Uh_5tlreg41121 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41122 = _Int32ToInt32(Uh_5tlreg41121, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41123(Uh_5tlreg41122); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41124 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41125 = _Int32ToInt32(Uh_5tlreg41124, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41126(Uh_5tlreg41125); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41128 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41123, Uh_5tlval41126); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41129(Uh_5tlval41128); //gcnl:Node.cpp:1142
          return (Uh_5tlval41129); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:165:     if (d==6) return make(-1, 0);
    {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
      const u32 Uh_5tlreg41130 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41132 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41133 = _Unsigned32ToInt32(Uh_5tlreg41132, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41134 = _BinOpCompareEqEqInt32(Uh_5tlreg41133, Uh_5tlreg41130, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41134, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:165:     if (d==6) return make(-1, 0);
          const u32 Uh_5tlreg41136 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41137 = _Int32ToInt32(Uh_5tlreg41136, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41138(Uh_5tlreg41137); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41139 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41140 = _Int32ToInt32(Uh_5tlreg41139, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41141(Uh_5tlreg41140); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41143 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41138, Uh_5tlval41141); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41144(Uh_5tlval41143); //gcnl:Node.cpp:1142
          return (Uh_5tlval41144); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:166:     /* d==7*/ return make(-1, 1);
    const u32 Uh_5tlreg41146 = (u32) -1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41147 = _Int32ToInt32(Uh_5tlreg41146, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41148(Uh_5tlreg41147); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41149 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41150 = _Int32ToInt32(Uh_5tlreg41149, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41151(Uh_5tlreg41150); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41153 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41148, Uh_5tlval41151); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41154(Uh_5tlval41153); //gcnl:Node.cpp:1142
    return (Uh_5tlval41154); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8neighbor



//! C2D.inc:172:   Self corner(Dir d) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_6corner(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_1d) const
  {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
    {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
      const u32 Uh_5tlreg41155 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41156 = _Int32ToInt32(Uh_5tlreg41155, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41158 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41159 = _Unsigned32ToInt32(Uh_5tlreg41158, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41160 = _BinOpCompareEqEqInt32(Uh_5tlreg41159, Uh_5tlreg41156, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41160, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:173:     if (d==0) return make( 0, 4);
          const u32 Uh_5tlreg41162 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41163 = _Int32ToInt32(Uh_5tlreg41162, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41164(Uh_5tlreg41163); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41165 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41166 = _Int32ToInt32(Uh_5tlreg41165, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41167(Uh_5tlreg41166); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41169 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41164, Uh_5tlval41167); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41170(Uh_5tlval41169); //gcnl:Node.cpp:1142
          return (Uh_5tlval41170); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:174:     if (d==1) return make( 2, 2);
    {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
      const u32 Uh_5tlreg41171 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41172 = _Int32ToInt32(Uh_5tlreg41171, 2, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41174 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41175 = _Unsigned32ToInt32(Uh_5tlreg41174, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41176 = _BinOpCompareEqEqInt32(Uh_5tlreg41175, Uh_5tlreg41172, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41176, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:174:     if (d==1) return make( 2, 2);
          const u32 Uh_5tlreg41178 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41179 = _Int32ToInt32(Uh_5tlreg41178, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41180(Uh_5tlreg41179); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41181 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41182 = _Int32ToInt32(Uh_5tlreg41181, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41183(Uh_5tlreg41182); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41185 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41180, Uh_5tlval41183); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41186(Uh_5tlval41185); //gcnl:Node.cpp:1142
          return (Uh_5tlval41186); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:175:     if (d==2) return make( 4, 0);
    {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
      const u32 Uh_5tlreg41187 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41188 = _Int32ToInt32(Uh_5tlreg41187, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41190 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41191 = _Unsigned32ToInt32(Uh_5tlreg41190, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41192 = _BinOpCompareEqEqInt32(Uh_5tlreg41191, Uh_5tlreg41188, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41192, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:175:     if (d==2) return make( 4, 0);
          const u32 Uh_5tlreg41194 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41195 = _Int32ToInt32(Uh_5tlreg41194, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41196(Uh_5tlreg41195); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41197 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41198 = _Int32ToInt32(Uh_5tlreg41197, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41199(Uh_5tlreg41198); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41201 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41196, Uh_5tlval41199); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41202(Uh_5tlval41201); //gcnl:Node.cpp:1142
          return (Uh_5tlval41202); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:176:     if (d==3) return make( 2,-2);
    {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
      const u32 Uh_5tlreg41203 = 3; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41204 = _Int32ToInt32(Uh_5tlreg41203, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41206 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41207 = _Unsigned32ToInt32(Uh_5tlreg41206, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41208 = _BinOpCompareEqEqInt32(Uh_5tlreg41207, Uh_5tlreg41204, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41208, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:176:     if (d==3) return make( 2,-2);
          const u32 Uh_5tlreg41210 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41211 = _Int32ToInt32(Uh_5tlreg41210, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41212(Uh_5tlreg41211); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41213 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41214 = _Int32ToInt32(Uh_5tlreg41213, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41215(Uh_5tlreg41214); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41217 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41212, Uh_5tlval41215); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41218(Uh_5tlval41217); //gcnl:Node.cpp:1142
          return (Uh_5tlval41218); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:177:     if (d==4) return make( 0,-4);
    {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
      const u32 Uh_5tlreg41219 = 4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41221 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41222 = _Unsigned32ToInt32(Uh_5tlreg41221, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41223 = _BinOpCompareEqEqInt32(Uh_5tlreg41222, Uh_5tlreg41219, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41223, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:177:     if (d==4) return make( 0,-4);
          const u32 Uh_5tlreg41225 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41226 = _Int32ToInt32(Uh_5tlreg41225, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41227(Uh_5tlreg41226); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41228 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41229 = _Int32ToInt32(Uh_5tlreg41228, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41230(Uh_5tlreg41229); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41232 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41227, Uh_5tlval41230); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41233(Uh_5tlval41232); //gcnl:Node.cpp:1142
          return (Uh_5tlval41233); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:178:     if (d==5) return make(-2,-2);
    {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
      const u32 Uh_5tlreg41234 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41236 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41237 = _Unsigned32ToInt32(Uh_5tlreg41236, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41238 = _BinOpCompareEqEqInt32(Uh_5tlreg41237, Uh_5tlreg41234, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41238, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:178:     if (d==5) return make(-2,-2);
          const u32 Uh_5tlreg41240 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41241 = _Int32ToInt32(Uh_5tlreg41240, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41242(Uh_5tlreg41241); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41243 = (u32) -2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41244 = _Int32ToInt32(Uh_5tlreg41243, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41245(Uh_5tlreg41244); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41247 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41242, Uh_5tlval41245); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41248(Uh_5tlval41247); //gcnl:Node.cpp:1142
          return (Uh_5tlval41248); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:179:     if (d==6) return make(-4, 0);
    {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
      const u32 Uh_5tlreg41249 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41251 = Uv_1d.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41252 = _Unsigned32ToInt32(Uh_5tlreg41251, 3, 4); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41253 = _BinOpCompareEqEqInt32(Uh_5tlreg41252, Uh_5tlreg41249, 4); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41253, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:179:     if (d==6) return make(-4, 0);
          const u32 Uh_5tlreg41255 = (u32) -4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41256 = _Int32ToInt32(Uh_5tlreg41255, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41257(Uh_5tlreg41256); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41258 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41259 = _Int32ToInt32(Uh_5tlreg41258, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41260(Uh_5tlreg41259); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval41262 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41257, Uh_5tlval41260); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uh_5tlval41263(Uh_5tlval41262); //gcnl:Node.cpp:1142
          return (Uh_5tlval41263); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! C2D.inc:180:     /* d==7*/ return make(-2, 2);
    const u32 Uh_5tlreg41265 = (u32) -2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41266 = _Int32ToInt32(Uh_5tlreg41265, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41267(Uh_5tlreg41266); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg41268 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41269 = _Int32ToInt32(Uh_5tlreg41268, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval41270(Uh_5tlreg41269); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41272 = THE_INSTANCE.Uf_4make(uc, ur, Uh_5tlval41267, Uh_5tlval41270); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41273(Uh_5tlval41272); //gcnl:Node.cpp:1142
    return (Uh_5tlval41273); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6corner



//! C2D.inc:183:   Unsigned length() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_6length(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:184:     Self origin;
    Ui_Uq_102323C2D10<EC> Uv_6origin; //gcnl:NodeVarDecl.cpp:1118

//! C2D.inc:185:     return origin.manhattanDistance(self);
    UlamRef<EC> Uh_3tur41275(0u, 32u, Uv_6origin, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg41277 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41278(Uh_5tlreg41277); //gcnl:Node.cpp:1142
    const Ui_Ut_102321u<EC> Uh_5tlval41280 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9217manhattanDistance(uc, Uh_3tur41275, Uh_5tlval41278); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41281 = Uh_5tlval41280.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41282(Uh_5tlreg41281); //gcnl:Node.cpp:1142
    return (Uh_5tlval41282); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6length



//! C2D.inc:202:   Unsigned manhattanDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9217manhattanDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:203:     Self a = abs(self-other);
    const u32 Uh_5tlreg41287 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41288(Uh_5tlreg41287); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41290 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41288); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41291(Uh_5tlval41290); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41293 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval41291); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_1a(Uh_5tlval41293); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:204:     return (Unsigned) (a.x + a.y);
    const u32 Uh_5tlreg41296 = UlamRef<EC>(16u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41297 = _Int32ToInt32(Uh_5tlreg41296, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41300 = UlamRef<EC>(0u, 16u, Uv_1a, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41301 = _Int32ToInt32(Uh_5tlreg41300, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41302 = _BinOpAddInt32(Uh_5tlreg41301, Uh_5tlreg41297, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41303 = _Int32ToUnsigned32(Uh_5tlreg41302, 17, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41304(Uh_5tlreg41303); //gcnl:Node.cpp:1142
    return (Uh_5tlval41304); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9217manhattanDistance



//! C2D.inc:188:   Bool isOrigin() {
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102323C2D10<EC>::Uf_8isOrigin(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:189:     return x == 0 && y == 0;
    u32 Uh_5tlreg41305 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
    const u32 Uh_5tlreg41306 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41307 = _Int32ToInt32(Uh_5tlreg41306, 2, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41309 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg41310 = _BinOpCompareEqEqInt32(Uh_5tlreg41309, Uh_5tlreg41307, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg41310, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
    {
      const u32 Uh_5tlreg41311 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41312 = _Int32ToInt32(Uh_5tlreg41311, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41314 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg41315 = _BinOpCompareEqEqInt32(Uh_5tlreg41314, Uh_5tlreg41312, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      Uh_5tlreg41305 = Uh_5tlreg41315; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
    }
    Ui_Ut_10111b<EC> Uh_5tlval41316(Uh_5tlreg41305); //gcnl:Node.cpp:1142
    return (Uh_5tlval41316); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8isOrigin



//! C2D.inc:196:   Self abs(Self of) {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_2of) const
  {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
    {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
      const u32 Uh_5tlreg41317 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41318 = _Int32ToInt32(Uh_5tlreg41317, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41321 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41322 = _BinOpCompareLessThanInt32(Uh_5tlreg41321, Uh_5tlreg41318, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41322, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:197:     if (of.x < 0) of.x = -of.x;
          const u32 Uh_5tlreg41325 = UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41326 = _UnaryMinusInt32(Uh_5tlreg41325, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(0u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41326); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
    {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
      const u32 Uh_5tlreg41329 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41330 = _Int32ToInt32(Uh_5tlreg41329, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41333 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41334 = _BinOpCompareLessThanInt32(Uh_5tlreg41333, Uh_5tlreg41330, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41334, 1)) //gcnl:NodeControl.cpp:213
      {

//! C2D.inc:198:     if (of.y < 0) of.y = -of.y;
          const u32 Uh_5tlreg41337 = UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41338 = _UnaryMinusInt32(Uh_5tlreg41337, 16); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(16u, 16u, Uv_2of, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg41338); //gcnl:Node.cpp:892
      } // end if
    }

//! C2D.inc:199:     return of;
    const u32 Uh_5tlreg41342 = Uv_2of.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41343(Uh_5tlreg41342); //gcnl:Node.cpp:1142
    return (Uh_5tlval41343); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:192:   Self abs() {
  template<class EC>
  Ui_Uq_102323C2D10<EC> Uq_102323C2D10<EC>::Uf_3abs(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:193:     return abs(self);
    const u32 Uh_5tlreg41346 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41347(Uh_5tlreg41346); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41349 = THE_INSTANCE.Uf_3abs(uc, ur, Uh_5tlval41347); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uh_5tlval41350(Uh_5tlval41349); //gcnl:Node.cpp:1142
    return (Uh_5tlval41350); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_3abs



//! C2D.inc:210:   Unsigned euclideanSquaredDistance(Self other) {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9224euclideanSquaredDistance(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5other) const
  {

//! C2D.inc:211:     Self diff = self-other;
    const u32 Uh_5tlreg41354 = Uv_5other.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval41355(Uh_5tlreg41354); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval41357 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2d(uc, ur, Uh_5tlval41355); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_4diff(Uh_5tlval41357); //gcnl:NodeVarDecl.cpp:1081

//! C2D.inc:212:     return diff.euclideanSquaredLength();
    UlamRef<EC> Uh_3tur41359(0u, 32u, Uv_4diff, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const Ui_Ut_102321u<EC> Uh_5tlval41361 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9222euclideanSquaredLength(uc, Uh_3tur41359); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41362 = Uh_5tlval41361.read(); //gcnl:Node.cpp:1170
    Ui_Ut_102321u<EC> Uh_5tlval41363(Uh_5tlreg41362); //gcnl:Node.cpp:1142
    return (Uh_5tlval41363); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9224euclideanSquaredDistance



//! C2D.inc:218:   Unsigned euclideanSquaredLength() {
  template<class EC>
  Ui_Ut_102321u<EC> Uq_102323C2D10<EC>::Uf_9222euclideanSquaredLength(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! C2D.inc:219:     return (Unsigned) (self * self);
    const u32 Uh_5tlreg41367 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:721
    Ui_Uq_102323C2D10<EC> Uh_5tlval41368(Uh_5tlreg41367); //gcnl:Node.cpp:1142
    const Ui_Ut_102321i<EC> Uh_5tlval41370 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator2a(uc, ur, Uh_5tlval41368); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41371 = Uh_5tlval41370.read(); //gcnl:Node.cpp:1170
    const u32 Uh_5tlreg41372 = _Int32ToUnsigned32(Uh_5tlreg41371, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval41373(Uh_5tlreg41372); //gcnl:Node.cpp:1142
    return (Uh_5tlval41373); //gcnl:NodeReturnStatement.cpp:343

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

