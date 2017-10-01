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
    const u32 Uh_5tlreg3487 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3488 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3488 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3490(Uv_3ret, Uh_5tlreg3488 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3490.write(Uh_5tlreg3487);

//! ColorUtils.ulam:27:     ret[1] = (Channel) (red & 0xff);
    const u32 Uh_5tlreg3491 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3492 = _Unsigned32ToBits32(Uh_5tlreg3491, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3494 = Uv_3red.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3495 = _BitwiseAndBits32(Uh_5tlreg3494, Uh_5tlreg3492, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3496 = _Bits32ToUnsigned32(Uh_5tlreg3495, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3497 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3497 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3499(Uv_3ret, Uh_5tlreg3497 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3499.write(Uh_5tlreg3496);

//! ColorUtils.ulam:28:     ret[2] = (Channel) (green & 0xff);
    const u32 Uh_5tlreg3500 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3501 = _Unsigned32ToBits32(Uh_5tlreg3500, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3503 = Uv_5green.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3504 = _BitwiseAndBits32(Uh_5tlreg3503, Uh_5tlreg3501, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3505 = _Bits32ToUnsigned32(Uh_5tlreg3504, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3506 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3506 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3508(Uv_3ret, Uh_5tlreg3506 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3508.write(Uh_5tlreg3505);

//! ColorUtils.ulam:29:     ret[3] = (Channel) (blue & 0xff);
    const u32 Uh_5tlreg3509 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3510 = _Unsigned32ToBits32(Uh_5tlreg3509, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3512 = Uv_4blue.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3513 = _BitwiseAndBits32(Uh_5tlreg3512, Uh_5tlreg3510, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3514 = _Bits32ToUnsigned32(Uh_5tlreg3513, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3515 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3515 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3517(Uv_3ret, Uh_5tlreg3515 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3517.write(Uh_5tlreg3514);

//! ColorUtils.ulam:30:     return ret;
    const u32 Uh_5tlreg3519 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3520(Uh_5tlreg3519); //gcnl:Node.cpp:1142
    return (Uh_5tlval3520); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:8:   ARGB color(Int hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:9:     return color((Bits) hex);
    const u32 Uh_5tlreg3523 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3524 = _Int32ToBits32(Uh_5tlreg3523, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval3525(Uh_5tlreg3524); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval3527 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval3525); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3528 = Uh_5tlval3527.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval3529(Uh_5tlreg3528); //gcnl:Node.cpp:1142
    return (Uh_5tlval3529); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:12:   ARGB color(Unsigned hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:13:     return color((Bits) hex);
    const u32 Uh_5tlreg3532 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3533 = _Unsigned32ToBits32(Uh_5tlreg3532, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval3534(Uh_5tlreg3533); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval3536 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval3534); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3537 = Uh_5tlval3536.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval3538(Uh_5tlreg3537); //gcnl:Node.cpp:1142
    return (Uh_5tlval3538); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:16:   ARGB color(Bits hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:17:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! ColorUtils.ulam:18:     ret[0] = (Channel) ((hex >> 24) & 0xff);
    const u32 Uh_5tlreg3539 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3540 = _Unsigned32ToBits32(Uh_5tlreg3539, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3541 = 24; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3542 = _Int32ToUnsigned32(Uh_5tlreg3541, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3544 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3545 = _ShiftOpRightBits32(Uh_5tlreg3544, Uh_5tlreg3542, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3546 = _BitwiseAndBits32(Uh_5tlreg3545, Uh_5tlreg3540, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3547 = _Bits32ToUnsigned32(Uh_5tlreg3546, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3548 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3548 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3550(Uv_3ret, Uh_5tlreg3548 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3550.write(Uh_5tlreg3547);

//! ColorUtils.ulam:19:     ret[1] = (Channel) ((hex >> 16) & 0xff);
    const u32 Uh_5tlreg3551 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3552 = _Unsigned32ToBits32(Uh_5tlreg3551, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3553 = 16; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3554 = _Int32ToUnsigned32(Uh_5tlreg3553, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3556 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3557 = _ShiftOpRightBits32(Uh_5tlreg3556, Uh_5tlreg3554, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3558 = _BitwiseAndBits32(Uh_5tlreg3557, Uh_5tlreg3552, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3559 = _Bits32ToUnsigned32(Uh_5tlreg3558, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3560 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3560 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3562(Uv_3ret, Uh_5tlreg3560 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3562.write(Uh_5tlreg3559);

//! ColorUtils.ulam:20:     ret[2] = (Channel) ((hex >>  8) & 0xff);
    const u32 Uh_5tlreg3563 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3564 = _Unsigned32ToBits32(Uh_5tlreg3563, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3565 = 8; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3566 = _Int32ToUnsigned32(Uh_5tlreg3565, 5, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3568 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3569 = _ShiftOpRightBits32(Uh_5tlreg3568, Uh_5tlreg3566, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3570 = _BitwiseAndBits32(Uh_5tlreg3569, Uh_5tlreg3564, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3571 = _Bits32ToUnsigned32(Uh_5tlreg3570, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3572 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3572 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3574(Uv_3ret, Uh_5tlreg3572 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3574.write(Uh_5tlreg3571);

//! ColorUtils.ulam:21:     ret[3] = (Channel) ((hex >>  0) & 0xff);
    const u32 Uh_5tlreg3575 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3576 = _Unsigned32ToBits32(Uh_5tlreg3575, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3577 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3578 = _Int32ToUnsigned32(Uh_5tlreg3577, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3580 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3581 = _ShiftOpRightBits32(Uh_5tlreg3580, Uh_5tlreg3578, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3582 = _BitwiseAndBits32(Uh_5tlreg3581, Uh_5tlreg3576, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3583 = _Bits32ToUnsigned32(Uh_5tlreg3582, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3584 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3584 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3586(Uv_3ret, Uh_5tlreg3584 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3586.write(Uh_5tlreg3583);

//! ColorUtils.ulam:22:     return ret;
    const u32 Uh_5tlreg3588 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3589(Uh_5tlreg3588); //gcnl:Node.cpp:1142
    return (Uh_5tlval3589); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:33:   ARGB modify(ARGB this, Unsigned percent) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6modify(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4this, Ui_Ut_102321u<EC>& Uv_7percent) const
  {

//! ColorUtils.ulam:34:     Unsigned rest = (Unsigned) 100 - percent;
    const u32 Uh_5tlreg3591 = Uv_7percent.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3592 = 100; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3593 = _Int32ToUnsigned32(Uh_5tlreg3592, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3594 = _BinOpSubtractUnsigned32(Uh_5tlreg3593, Uh_5tlreg3591, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321u<EC> Uv_4rest(Uh_5tlreg3594); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg3595 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3596 = _Int32ToInt32(Uh_5tlreg3595, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg3596); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg3597 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3598 = _Int32ToInt32(Uh_5tlreg3597, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3600 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3601 = _BinOpCompareLessThanInt32(Uh_5tlreg3600, Uh_5tlreg3598, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3601, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:36:       Unsigned old = (Unsigned) this[i];
          const u32 Uh_5tlreg3603 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3603 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3605(Uv_4this, Uh_5tlreg3603 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3606 = Uh_6tlref3605.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3607 = _Unsigned32ToUnsigned32(Uh_5tlreg3606, 8, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uv_3old(Uh_5tlreg3607); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:37:       Unsigned new = (old * rest + (Unsigned) 0xff * percent) / 100u;
          const u32 Uh_5tlreg3608 = 100u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3609 = _Unsigned32ToUnsigned32(Uh_5tlreg3608, 7, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3611 = Uv_7percent.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3612 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3613 = _Unsigned32ToUnsigned32(Uh_5tlreg3612, 8, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3614 = _BinOpMultiplyUnsigned32(Uh_5tlreg3613, Uh_5tlreg3611, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3616 = Uv_4rest.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3618 = Uv_3old.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3619 = _BinOpMultiplyUnsigned32(Uh_5tlreg3618, Uh_5tlreg3616, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3620 = _BinOpAddUnsigned32(Uh_5tlreg3619, Uh_5tlreg3614, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3621 = _BinOpDivideUnsigned32(Uh_5tlreg3620, Uh_5tlreg3609, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_3new(Uh_5tlreg3621); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:38:       this[i] = (Channel) new;
          const u32 Uh_5tlreg3623 = Uv_3new.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3624 = _Unsigned32ToUnsigned32(Uh_5tlreg3623, 32, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3626 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3626 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3628(Uv_4this, Uh_5tlreg3626 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3628.write(Uh_5tlreg3624);
        }

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop15:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg3629 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3631 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3632 = _BinOpAddInt32(Uh_5tlreg3631, Uh_5tlreg3629, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg3632); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:40:     return this;
    const u32 Uh_5tlreg3634 = Uv_4this.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3635(Uh_5tlreg3634); //gcnl:Node.cpp:1142
    return (Uh_5tlval3635); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6modify



//! ColorUtils.ulam:51:   ARGB brighter(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_8brighter(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:52:     than[0] = 0xff;
    const u32 Uh_5tlreg3636 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3637 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3637 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3639(Uv_4than, Uh_5tlreg3637 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3639.write(Uh_5tlreg3636);

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
    {

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
      u32 Uh_5tlreg3640 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg3641 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3642 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3643 = _Int32ToInt32(Uh_5tlreg3642, 2, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3644 = 1; //gcnl:NodeTerminal.cpp:690
      if(Uh_5tlreg3644 >= 4) //gcnl:NodeSquareBracket.cpp:874
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
      Ui_Ut_r10181u<EC> Uh_6tlref3646(Uv_4than, Uh_5tlreg3644 * 8u + 0u, uc); //gcnl:Node.cpp:1317
      const u32 Uh_5tlreg3647 = Uh_6tlref3646.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3648 = _Unsigned32ToInt32(Uh_5tlreg3647, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3649 = _BinOpCompareEqEqInt32(Uh_5tlreg3648, Uh_5tlreg3643, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3649, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3650 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3651 = _Int32ToInt32(Uh_5tlreg3650, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3652 = 2; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg3652 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref3654(Uv_4than, Uh_5tlreg3652 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg3655 = Uh_6tlref3654.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3656 = _Unsigned32ToInt32(Uh_5tlreg3655, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3657 = _BinOpCompareEqEqInt32(Uh_5tlreg3656, Uh_5tlreg3651, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3641 = Uh_5tlreg3657; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3641, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3658 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3659 = _Int32ToInt32(Uh_5tlreg3658, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3660 = 3; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg3660 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref3662(Uv_4than, Uh_5tlreg3660 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg3663 = Uh_6tlref3662.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3664 = _Unsigned32ToInt32(Uh_5tlreg3663, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3665 = _BinOpCompareEqEqInt32(Uh_5tlreg3664, Uh_5tlreg3659, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3640 = Uh_5tlreg3665; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3640, 1)) //gcnl:NodeControl.cpp:213
      {

//! ColorUtils.ulam:54:       return color((Unsigned) 0x030303);
          const u32 Uh_5tlreg3667 = 197379u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3668 = _Unsigned32ToUnsigned32(Uh_5tlreg3667, 18, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval3669(Uh_5tlreg3668); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval3671 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval3669); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg3672 = Uh_5tlval3671.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval3673(Uh_5tlreg3672); //gcnl:Node.cpp:1142
          return (Uh_5tlval3673); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg3674 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3675 = _Int32ToInt32(Uh_5tlreg3674, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg3675); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg3676 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3677 = _Int32ToInt32(Uh_5tlreg3676, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3679 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3680 = _BinOpCompareLessThanInt32(Uh_5tlreg3679, Uh_5tlreg3677, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3680, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
          {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
            const u32 Uh_5tlreg3681 = 3; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3682 = _Int32ToInt32(Uh_5tlreg3681, 3, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3684 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg3684 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10181u<EC> Uh_6tlref3686(Uv_4than, Uh_5tlreg3684 * 8u + 0u, uc); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg3687 = Uh_6tlref3686.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3688 = _Unsigned32ToInt32(Uh_5tlreg3687, 8, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3689 = _BinOpCompareLessThanInt32(Uh_5tlreg3688, Uh_5tlreg3682, 9); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3689, 1)) //gcnl:NodeControl.cpp:213
            {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
                const u32 Uh_5tlreg3690 = 3; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3691 = _Int32ToUnsigned32(Uh_5tlreg3690, 3, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3693 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg3693 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref3695(Uv_4than, Uh_5tlreg3693 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref3695.write(Uh_5tlreg3691);
            } // end if
          }

//! ColorUtils.ulam:57:       than[i] = (Channel) (100*than[i]/70);
          const u32 Uh_5tlreg3696 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3697 = _Int32ToInt32(Uh_5tlreg3696, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3699 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3699 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3701(Uv_4than, Uh_5tlreg3699 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3702 = Uh_6tlref3701.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3703 = _Unsigned32ToInt32(Uh_5tlreg3702, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3704 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3705 = _Int32ToInt32(Uh_5tlreg3704, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3706 = _BinOpMultiplyInt32(Uh_5tlreg3705, Uh_5tlreg3703, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3707 = _BinOpDivideInt32(Uh_5tlreg3706, Uh_5tlreg3697, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3708 = _Int32ToUnsigned32(Uh_5tlreg3707, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3710 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3710 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3712(Uv_4than, Uh_5tlreg3710 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3712.write(Uh_5tlreg3708);
        }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop16:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg3713 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3715 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3716 = _BinOpAddInt32(Uh_5tlreg3715, Uh_5tlreg3713, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg3716); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:60:     return than;
    const u32 Uh_5tlreg3718 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3719(Uh_5tlreg3718); //gcnl:Node.cpp:1142
    return (Uh_5tlval3719); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8brighter



//! ColorUtils.ulam:66:   ARGB dimmer(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6dimmer(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:67:     than[0] = 0xff;
    const u32 Uh_5tlreg3720 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3721 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3721 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3723(Uv_4than, Uh_5tlreg3721 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3723.write(Uh_5tlreg3720);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
    {

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      const u32 Uh_5tlreg3724 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3725 = _Int32ToInt32(Uh_5tlreg3724, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg3725); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      while(true)
      {
        const u32 Uh_5tlreg3726 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3727 = _Int32ToInt32(Uh_5tlreg3726, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3729 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3730 = _BinOpCompareLessThanInt32(Uh_5tlreg3729, Uh_5tlreg3727, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3730, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);
          const u32 Uh_5tlreg3731 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3732 = _Int32ToInt32(Uh_5tlreg3731, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3734 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3734 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3736(Uv_4than, Uh_5tlreg3734 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3737 = Uh_6tlref3736.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3738 = _Unsigned32ToInt32(Uh_5tlreg3737, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3739 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3740 = _Int32ToInt32(Uh_5tlreg3739, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3741 = _BinOpMultiplyInt32(Uh_5tlreg3740, Uh_5tlreg3738, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3742 = _BinOpDivideInt32(Uh_5tlreg3741, Uh_5tlreg3732, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3743 = _Int32ToUnsigned32(Uh_5tlreg3742, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3745 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3745 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3747(Uv_4than, Uh_5tlreg3745 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3747.write(Uh_5tlreg3743);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
Ul_214endcontrolloop17:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
        const u32 Uh_5tlreg3748 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3750 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3751 = _BinOpAddInt32(Uh_5tlreg3750, Uh_5tlreg3748, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg3751); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:70:     return than;
    const u32 Uh_5tlreg3753 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3754(Uh_5tlreg3753); //gcnl:Node.cpp:1142
    return (Uh_5tlval3754); //gcnl:NodeReturnStatement.cpp:343

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

