/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Uq_10109210ColorUtils10<EC>::Uq_10109210ColorUtils10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109210ColorUtils10", 0))
  { }

  template<class EC>
  Uq_10109210ColorUtils10<EC>::~Uq_10109210ColorUtils10(){} //gcnl:NodeBlockClass.cpp:1784


//! ColorUtils.ulam:24:   ARGB color(Byte red, Byte green, Byte blue) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181t<EC>& Uv_3red, Ui_Ut_10181t<EC>& Uv_5green, Ui_Ut_10181t<EC>& Uv_4blue) const
  {

//! ColorUtils.ulam:25:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! ColorUtils.ulam:26:     ret[0] = (Channel) 0xff;
    const u32 Uh_5tlreg3578 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3579 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3579 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3581(Uv_3ret, Uh_5tlreg3579 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3581.write(Uh_5tlreg3578);

//! ColorUtils.ulam:27:     ret[1] = (Channel) (red & 0xff);
    const u32 Uh_5tlreg3582 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3583 = _Unsigned32ToBits32(Uh_5tlreg3582, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3585 = Uv_3red.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3586 = _BitwiseAndBits32(Uh_5tlreg3585, Uh_5tlreg3583, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3587 = _Bits32ToUnsigned32(Uh_5tlreg3586, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3588 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3588 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3590(Uv_3ret, Uh_5tlreg3588 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3590.write(Uh_5tlreg3587);

//! ColorUtils.ulam:28:     ret[2] = (Channel) (green & 0xff);
    const u32 Uh_5tlreg3591 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3592 = _Unsigned32ToBits32(Uh_5tlreg3591, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3594 = Uv_5green.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3595 = _BitwiseAndBits32(Uh_5tlreg3594, Uh_5tlreg3592, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3596 = _Bits32ToUnsigned32(Uh_5tlreg3595, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3597 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3597 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3599(Uv_3ret, Uh_5tlreg3597 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3599.write(Uh_5tlreg3596);

//! ColorUtils.ulam:29:     ret[3] = (Channel) (blue & 0xff);
    const u32 Uh_5tlreg3600 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3601 = _Unsigned32ToBits32(Uh_5tlreg3600, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3603 = Uv_4blue.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3604 = _BitwiseAndBits32(Uh_5tlreg3603, Uh_5tlreg3601, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3605 = _Bits32ToUnsigned32(Uh_5tlreg3604, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3606 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3606 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3608(Uv_3ret, Uh_5tlreg3606 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3608.write(Uh_5tlreg3605);

//! ColorUtils.ulam:30:     return ret;
    const u32 Uh_5tlreg3610 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3611(Uh_5tlreg3610); //gcnl:Node.cpp:1142
    return (Uh_5tlval3611); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:8:   ARGB color(Int hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:9:     return color((Bits) hex);
    const u32 Uh_5tlreg3614 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3615 = _Int32ToBits32(Uh_5tlreg3614, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval3616(Uh_5tlreg3615); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval3618 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval3616); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3619 = Uh_5tlval3618.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval3620(Uh_5tlreg3619); //gcnl:Node.cpp:1142
    return (Uh_5tlval3620); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:12:   ARGB color(Unsigned hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:13:     return color((Bits) hex);
    const u32 Uh_5tlreg3623 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3624 = _Unsigned32ToBits32(Uh_5tlreg3623, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval3625(Uh_5tlreg3624); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval3627 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval3625); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3628 = Uh_5tlval3627.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval3629(Uh_5tlreg3628); //gcnl:Node.cpp:1142
    return (Uh_5tlval3629); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:16:   ARGB color(Bits hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:17:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! ColorUtils.ulam:18:     ret[0] = (Channel) ((hex >> 24) & 0xff);
    const u32 Uh_5tlreg3630 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3631 = _Unsigned32ToBits32(Uh_5tlreg3630, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3632 = 24; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3633 = _Int32ToUnsigned32(Uh_5tlreg3632, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3635 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3636 = _ShiftOpRightBits32(Uh_5tlreg3635, Uh_5tlreg3633, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3637 = _BitwiseAndBits32(Uh_5tlreg3636, Uh_5tlreg3631, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3638 = _Bits32ToUnsigned32(Uh_5tlreg3637, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3639 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3639 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3641(Uv_3ret, Uh_5tlreg3639 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3641.write(Uh_5tlreg3638);

//! ColorUtils.ulam:19:     ret[1] = (Channel) ((hex >> 16) & 0xff);
    const u32 Uh_5tlreg3642 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3643 = _Unsigned32ToBits32(Uh_5tlreg3642, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3644 = 16; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3645 = _Int32ToUnsigned32(Uh_5tlreg3644, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3647 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3648 = _ShiftOpRightBits32(Uh_5tlreg3647, Uh_5tlreg3645, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3649 = _BitwiseAndBits32(Uh_5tlreg3648, Uh_5tlreg3643, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3650 = _Bits32ToUnsigned32(Uh_5tlreg3649, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3651 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3651 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3653(Uv_3ret, Uh_5tlreg3651 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3653.write(Uh_5tlreg3650);

//! ColorUtils.ulam:20:     ret[2] = (Channel) ((hex >>  8) & 0xff);
    const u32 Uh_5tlreg3654 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3655 = _Unsigned32ToBits32(Uh_5tlreg3654, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3656 = 8; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3657 = _Int32ToUnsigned32(Uh_5tlreg3656, 5, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3659 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3660 = _ShiftOpRightBits32(Uh_5tlreg3659, Uh_5tlreg3657, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3661 = _BitwiseAndBits32(Uh_5tlreg3660, Uh_5tlreg3655, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3662 = _Bits32ToUnsigned32(Uh_5tlreg3661, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3663 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3663 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3665(Uv_3ret, Uh_5tlreg3663 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3665.write(Uh_5tlreg3662);

//! ColorUtils.ulam:21:     ret[3] = (Channel) ((hex >>  0) & 0xff);
    const u32 Uh_5tlreg3666 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3667 = _Unsigned32ToBits32(Uh_5tlreg3666, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3668 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3669 = _Int32ToUnsigned32(Uh_5tlreg3668, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3671 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3672 = _ShiftOpRightBits32(Uh_5tlreg3671, Uh_5tlreg3669, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3673 = _BitwiseAndBits32(Uh_5tlreg3672, Uh_5tlreg3667, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3674 = _Bits32ToUnsigned32(Uh_5tlreg3673, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3675 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3675 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3677(Uv_3ret, Uh_5tlreg3675 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3677.write(Uh_5tlreg3674);

//! ColorUtils.ulam:22:     return ret;
    const u32 Uh_5tlreg3679 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3680(Uh_5tlreg3679); //gcnl:Node.cpp:1142
    return (Uh_5tlval3680); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:33:   ARGB modify(ARGB this, Unsigned percent) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6modify(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4this, Ui_Ut_102321u<EC>& Uv_7percent) const
  {

//! ColorUtils.ulam:34:     Unsigned rest = (Unsigned) 100 - percent;
    const u32 Uh_5tlreg3682 = Uv_7percent.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3683 = 100; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3684 = _Int32ToUnsigned32(Uh_5tlreg3683, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3685 = _BinOpSubtractUnsigned32(Uh_5tlreg3684, Uh_5tlreg3682, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321u<EC> Uv_4rest(Uh_5tlreg3685); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg3686 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3687 = _Int32ToInt32(Uh_5tlreg3686, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg3687); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg3688 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3689 = _Int32ToInt32(Uh_5tlreg3688, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3691 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3692 = _BinOpCompareLessThanInt32(Uh_5tlreg3691, Uh_5tlreg3689, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3692, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:36:       Unsigned old = (Unsigned) this[i];
          const u32 Uh_5tlreg3694 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3694 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3696(Uv_4this, Uh_5tlreg3694 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3697 = Uh_6tlref3696.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3698 = _Unsigned32ToUnsigned32(Uh_5tlreg3697, 8, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uv_3old(Uh_5tlreg3698); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:37:       Unsigned new = (old * rest + (Unsigned) 0xff * percent) / 100u;
          const u32 Uh_5tlreg3699 = 100u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3700 = _Unsigned32ToUnsigned32(Uh_5tlreg3699, 7, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3702 = Uv_7percent.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3703 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3704 = _Unsigned32ToUnsigned32(Uh_5tlreg3703, 8, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3705 = _BinOpMultiplyUnsigned32(Uh_5tlreg3704, Uh_5tlreg3702, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3707 = Uv_4rest.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3709 = Uv_3old.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3710 = _BinOpMultiplyUnsigned32(Uh_5tlreg3709, Uh_5tlreg3707, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3711 = _BinOpAddUnsigned32(Uh_5tlreg3710, Uh_5tlreg3705, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3712 = _BinOpDivideUnsigned32(Uh_5tlreg3711, Uh_5tlreg3700, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_3new(Uh_5tlreg3712); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:38:       this[i] = (Channel) new;
          const u32 Uh_5tlreg3714 = Uv_3new.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3715 = _Unsigned32ToUnsigned32(Uh_5tlreg3714, 32, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3717 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3717 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3719(Uv_4this, Uh_5tlreg3717 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3719.write(Uh_5tlreg3715);
        }

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop16:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg3720 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3722 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3723 = _BinOpAddInt32(Uh_5tlreg3722, Uh_5tlreg3720, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg3723); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:40:     return this;
    const u32 Uh_5tlreg3725 = Uv_4this.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3726(Uh_5tlreg3725); //gcnl:Node.cpp:1142
    return (Uh_5tlval3726); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6modify



//! ColorUtils.ulam:51:   ARGB brighter(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_8brighter(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:52:     than[0] = 0xff;
    const u32 Uh_5tlreg3727 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3728 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3728 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3730(Uv_4than, Uh_5tlreg3728 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3730.write(Uh_5tlreg3727);

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
    {

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
      u32 Uh_5tlreg3731 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg3732 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3733 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3734 = _Int32ToInt32(Uh_5tlreg3733, 2, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3735 = 1; //gcnl:NodeTerminal.cpp:690
      if(Uh_5tlreg3735 >= 4) //gcnl:NodeSquareBracket.cpp:874
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
      Ui_Ut_r10181u<EC> Uh_6tlref3737(Uv_4than, Uh_5tlreg3735 * 8u + 0u, uc); //gcnl:Node.cpp:1317
      const u32 Uh_5tlreg3738 = Uh_6tlref3737.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3739 = _Unsigned32ToInt32(Uh_5tlreg3738, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3740 = _BinOpCompareEqEqInt32(Uh_5tlreg3739, Uh_5tlreg3734, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3740, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3741 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3742 = _Int32ToInt32(Uh_5tlreg3741, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3743 = 2; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg3743 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref3745(Uv_4than, Uh_5tlreg3743 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg3746 = Uh_6tlref3745.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3747 = _Unsigned32ToInt32(Uh_5tlreg3746, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3748 = _BinOpCompareEqEqInt32(Uh_5tlreg3747, Uh_5tlreg3742, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3732 = Uh_5tlreg3748; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3732, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3749 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3750 = _Int32ToInt32(Uh_5tlreg3749, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3751 = 3; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg3751 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref3753(Uv_4than, Uh_5tlreg3751 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg3754 = Uh_6tlref3753.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3755 = _Unsigned32ToInt32(Uh_5tlreg3754, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3756 = _BinOpCompareEqEqInt32(Uh_5tlreg3755, Uh_5tlreg3750, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3731 = Uh_5tlreg3756; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3731, 1)) //gcnl:NodeControl.cpp:213
      {

//! ColorUtils.ulam:54:       return color((Unsigned) 0x030303);
          const u32 Uh_5tlreg3758 = 197379u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3759 = _Unsigned32ToUnsigned32(Uh_5tlreg3758, 18, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval3760(Uh_5tlreg3759); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval3762 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval3760); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg3763 = Uh_5tlval3762.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval3764(Uh_5tlreg3763); //gcnl:Node.cpp:1142
          return (Uh_5tlval3764); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg3765 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3766 = _Int32ToInt32(Uh_5tlreg3765, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg3766); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg3767 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3768 = _Int32ToInt32(Uh_5tlreg3767, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3770 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3771 = _BinOpCompareLessThanInt32(Uh_5tlreg3770, Uh_5tlreg3768, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3771, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
          {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
            const u32 Uh_5tlreg3772 = 3; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3773 = _Int32ToInt32(Uh_5tlreg3772, 3, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3775 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg3775 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10181u<EC> Uh_6tlref3777(Uv_4than, Uh_5tlreg3775 * 8u + 0u, uc); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg3778 = Uh_6tlref3777.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3779 = _Unsigned32ToInt32(Uh_5tlreg3778, 8, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3780 = _BinOpCompareLessThanInt32(Uh_5tlreg3779, Uh_5tlreg3773, 9); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3780, 1)) //gcnl:NodeControl.cpp:213
            {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
                const u32 Uh_5tlreg3781 = 3; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3782 = _Int32ToUnsigned32(Uh_5tlreg3781, 3, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3784 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg3784 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref3786(Uv_4than, Uh_5tlreg3784 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref3786.write(Uh_5tlreg3782);
            } // end if
          }

//! ColorUtils.ulam:57:       than[i] = (Channel) (100*than[i]/70);
          const u32 Uh_5tlreg3787 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3788 = _Int32ToInt32(Uh_5tlreg3787, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3790 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3790 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3792(Uv_4than, Uh_5tlreg3790 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3793 = Uh_6tlref3792.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3794 = _Unsigned32ToInt32(Uh_5tlreg3793, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3795 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3796 = _Int32ToInt32(Uh_5tlreg3795, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3797 = _BinOpMultiplyInt32(Uh_5tlreg3796, Uh_5tlreg3794, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3798 = _BinOpDivideInt32(Uh_5tlreg3797, Uh_5tlreg3788, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3799 = _Int32ToUnsigned32(Uh_5tlreg3798, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3801 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3801 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3803(Uv_4than, Uh_5tlreg3801 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3803.write(Uh_5tlreg3799);
        }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop17:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg3804 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3806 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3807 = _BinOpAddInt32(Uh_5tlreg3806, Uh_5tlreg3804, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg3807); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:60:     return than;
    const u32 Uh_5tlreg3809 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3810(Uh_5tlreg3809); //gcnl:Node.cpp:1142
    return (Uh_5tlval3810); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8brighter



//! ColorUtils.ulam:66:   ARGB dimmer(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6dimmer(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:67:     than[0] = 0xff;
    const u32 Uh_5tlreg3811 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3812 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3812 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3814(Uv_4than, Uh_5tlreg3812 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3814.write(Uh_5tlreg3811);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
    {

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      const u32 Uh_5tlreg3815 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3816 = _Int32ToInt32(Uh_5tlreg3815, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg3816); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      while(true)
      {
        const u32 Uh_5tlreg3817 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3818 = _Int32ToInt32(Uh_5tlreg3817, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3820 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3821 = _BinOpCompareLessThanInt32(Uh_5tlreg3820, Uh_5tlreg3818, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3821, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);
          const u32 Uh_5tlreg3822 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3823 = _Int32ToInt32(Uh_5tlreg3822, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3825 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3825 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3827(Uv_4than, Uh_5tlreg3825 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3828 = Uh_6tlref3827.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3829 = _Unsigned32ToInt32(Uh_5tlreg3828, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3830 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3831 = _Int32ToInt32(Uh_5tlreg3830, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3832 = _BinOpMultiplyInt32(Uh_5tlreg3831, Uh_5tlreg3829, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3833 = _BinOpDivideInt32(Uh_5tlreg3832, Uh_5tlreg3823, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3834 = _Int32ToUnsigned32(Uh_5tlreg3833, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3836 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3836 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3838(Uv_4than, Uh_5tlreg3836 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3838.write(Uh_5tlreg3834);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
Ul_214endcontrolloop18:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
        const u32 Uh_5tlreg3839 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3841 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3842 = _BinOpAddInt32(Uh_5tlreg3841, Uh_5tlreg3839, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg3842); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:70:     return than;
    const u32 Uh_5tlreg3844 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3845(Uh_5tlreg3844); //gcnl:Node.cpp:1142
    return (Uh_5tlval3845); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6dimmer


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10109210ColorUtils10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10109210ColorUtils10<EC>::GetDataMemberCount() const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10109210ColorUtils10<EC>::GetMangledClassName() const
  {
    return "Uq_10109210ColorUtils10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10109210ColorUtils10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10109210ColorUtils10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10109210ColorUtils10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_10109210ColorUtils10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10109210ColorUtils10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_10109210ColorUtils10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_10109210ColorUtils10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109210ColorUtils10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

