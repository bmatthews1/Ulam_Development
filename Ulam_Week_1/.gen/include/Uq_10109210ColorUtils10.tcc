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
    const u32 Uh_5tlreg41476 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41477 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41477 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41479(Uv_3ret, Uh_5tlreg41477 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41479.write(Uh_5tlreg41476);

//! ColorUtils.ulam:27:     ret[1] = (Channel) (red & 0xff);
    const u32 Uh_5tlreg41480 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41481 = _Unsigned32ToBits32(Uh_5tlreg41480, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41483 = Uv_3red.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41484 = _BitwiseAndBits32(Uh_5tlreg41483, Uh_5tlreg41481, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41485 = _Bits32ToUnsigned32(Uh_5tlreg41484, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41486 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41486 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41488(Uv_3ret, Uh_5tlreg41486 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41488.write(Uh_5tlreg41485);

//! ColorUtils.ulam:28:     ret[2] = (Channel) (green & 0xff);
    const u32 Uh_5tlreg41489 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41490 = _Unsigned32ToBits32(Uh_5tlreg41489, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41492 = Uv_5green.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41493 = _BitwiseAndBits32(Uh_5tlreg41492, Uh_5tlreg41490, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41494 = _Bits32ToUnsigned32(Uh_5tlreg41493, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41495 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41495 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41497(Uv_3ret, Uh_5tlreg41495 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41497.write(Uh_5tlreg41494);

//! ColorUtils.ulam:29:     ret[3] = (Channel) (blue & 0xff);
    const u32 Uh_5tlreg41498 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41499 = _Unsigned32ToBits32(Uh_5tlreg41498, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41501 = Uv_4blue.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41502 = _BitwiseAndBits32(Uh_5tlreg41501, Uh_5tlreg41499, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41503 = _Bits32ToUnsigned32(Uh_5tlreg41502, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41504 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41504 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41506(Uv_3ret, Uh_5tlreg41504 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41506.write(Uh_5tlreg41503);

//! ColorUtils.ulam:30:     return ret;
    const u32 Uh_5tlreg41508 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval41509(Uh_5tlreg41508); //gcnl:Node.cpp:1142
    return (Uh_5tlval41509); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:8:   ARGB color(Int hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:9:     return color((Bits) hex);
    const u32 Uh_5tlreg41512 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41513 = _Int32ToBits32(Uh_5tlreg41512, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval41514(Uh_5tlreg41513); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval41516 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval41514); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41517 = Uh_5tlval41516.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval41518(Uh_5tlreg41517); //gcnl:Node.cpp:1142
    return (Uh_5tlval41518); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:12:   ARGB color(Unsigned hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:13:     return color((Bits) hex);
    const u32 Uh_5tlreg41521 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41522 = _Unsigned32ToBits32(Uh_5tlreg41521, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval41523(Uh_5tlreg41522); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval41525 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval41523); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg41526 = Uh_5tlval41525.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval41527(Uh_5tlreg41526); //gcnl:Node.cpp:1142
    return (Uh_5tlval41527); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:16:   ARGB color(Bits hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:17:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! ColorUtils.ulam:18:     ret[0] = (Channel) ((hex >> 24) & 0xff);
    const u32 Uh_5tlreg41528 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41529 = _Unsigned32ToBits32(Uh_5tlreg41528, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41530 = 24; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41531 = _Int32ToUnsigned32(Uh_5tlreg41530, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41533 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41534 = _ShiftOpRightBits32(Uh_5tlreg41533, Uh_5tlreg41531, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41535 = _BitwiseAndBits32(Uh_5tlreg41534, Uh_5tlreg41529, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41536 = _Bits32ToUnsigned32(Uh_5tlreg41535, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41537 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41537 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41539(Uv_3ret, Uh_5tlreg41537 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41539.write(Uh_5tlreg41536);

//! ColorUtils.ulam:19:     ret[1] = (Channel) ((hex >> 16) & 0xff);
    const u32 Uh_5tlreg41540 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41541 = _Unsigned32ToBits32(Uh_5tlreg41540, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41542 = 16; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41543 = _Int32ToUnsigned32(Uh_5tlreg41542, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41545 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41546 = _ShiftOpRightBits32(Uh_5tlreg41545, Uh_5tlreg41543, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41547 = _BitwiseAndBits32(Uh_5tlreg41546, Uh_5tlreg41541, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41548 = _Bits32ToUnsigned32(Uh_5tlreg41547, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41549 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41549 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41551(Uv_3ret, Uh_5tlreg41549 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41551.write(Uh_5tlreg41548);

//! ColorUtils.ulam:20:     ret[2] = (Channel) ((hex >>  8) & 0xff);
    const u32 Uh_5tlreg41552 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41553 = _Unsigned32ToBits32(Uh_5tlreg41552, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41554 = 8; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41555 = _Int32ToUnsigned32(Uh_5tlreg41554, 5, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41557 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41558 = _ShiftOpRightBits32(Uh_5tlreg41557, Uh_5tlreg41555, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41559 = _BitwiseAndBits32(Uh_5tlreg41558, Uh_5tlreg41553, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41560 = _Bits32ToUnsigned32(Uh_5tlreg41559, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41561 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41561 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41563(Uv_3ret, Uh_5tlreg41561 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41563.write(Uh_5tlreg41560);

//! ColorUtils.ulam:21:     ret[3] = (Channel) ((hex >>  0) & 0xff);
    const u32 Uh_5tlreg41564 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41565 = _Unsigned32ToBits32(Uh_5tlreg41564, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41566 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41567 = _Int32ToUnsigned32(Uh_5tlreg41566, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41569 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41570 = _ShiftOpRightBits32(Uh_5tlreg41569, Uh_5tlreg41567, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41571 = _BitwiseAndBits32(Uh_5tlreg41570, Uh_5tlreg41565, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg41572 = _Bits32ToUnsigned32(Uh_5tlreg41571, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41573 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41573 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41575(Uv_3ret, Uh_5tlreg41573 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41575.write(Uh_5tlreg41572);

//! ColorUtils.ulam:22:     return ret;
    const u32 Uh_5tlreg41577 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval41578(Uh_5tlreg41577); //gcnl:Node.cpp:1142
    return (Uh_5tlval41578); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:33:   ARGB modify(ARGB this, Unsigned percent) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6modify(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4this, Ui_Ut_102321u<EC>& Uv_7percent) const
  {

//! ColorUtils.ulam:34:     Unsigned rest = (Unsigned) 100 - percent;
    const u32 Uh_5tlreg41580 = Uv_7percent.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg41581 = 100; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41582 = _Int32ToUnsigned32(Uh_5tlreg41581, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg41583 = _BinOpSubtractUnsigned32(Uh_5tlreg41582, Uh_5tlreg41580, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321u<EC> Uv_4rest(Uh_5tlreg41583); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg41584 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41585 = _Int32ToInt32(Uh_5tlreg41584, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg41585); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg41586 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41587 = _Int32ToInt32(Uh_5tlreg41586, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41589 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41590 = _BinOpCompareLessThanInt32(Uh_5tlreg41589, Uh_5tlreg41587, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41590, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:36:       Unsigned old = (Unsigned) this[i];
          const u32 Uh_5tlreg41592 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg41592 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref41594(Uv_4this, Uh_5tlreg41592 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg41595 = Uh_6tlref41594.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41596 = _Unsigned32ToUnsigned32(Uh_5tlreg41595, 8, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uv_3old(Uh_5tlreg41596); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:37:       Unsigned new = (old * rest + (Unsigned) 0xff * percent) / 100u;
          const u32 Uh_5tlreg41597 = 100u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41598 = _Unsigned32ToUnsigned32(Uh_5tlreg41597, 7, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41600 = Uv_7percent.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41601 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41602 = _Unsigned32ToUnsigned32(Uh_5tlreg41601, 8, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41603 = _BinOpMultiplyUnsigned32(Uh_5tlreg41602, Uh_5tlreg41600, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41605 = Uv_4rest.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41607 = Uv_3old.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41608 = _BinOpMultiplyUnsigned32(Uh_5tlreg41607, Uh_5tlreg41605, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41609 = _BinOpAddUnsigned32(Uh_5tlreg41608, Uh_5tlreg41603, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41610 = _BinOpDivideUnsigned32(Uh_5tlreg41609, Uh_5tlreg41598, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_3new(Uh_5tlreg41610); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:38:       this[i] = (Channel) new;
          const u32 Uh_5tlreg41612 = Uv_3new.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41613 = _Unsigned32ToUnsigned32(Uh_5tlreg41612, 32, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41615 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg41615 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref41617(Uv_4this, Uh_5tlreg41615 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref41617.write(Uh_5tlreg41613);
        }

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop235:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg41618 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41620 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41621 = _BinOpAddInt32(Uh_5tlreg41620, Uh_5tlreg41618, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg41621); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:40:     return this;
    const u32 Uh_5tlreg41623 = Uv_4this.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval41624(Uh_5tlreg41623); //gcnl:Node.cpp:1142
    return (Uh_5tlval41624); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6modify



//! ColorUtils.ulam:51:   ARGB brighter(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_8brighter(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:52:     than[0] = 0xff;
    const u32 Uh_5tlreg41625 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41626 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41626 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41628(Uv_4than, Uh_5tlreg41626 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41628.write(Uh_5tlreg41625);

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
    {

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
      u32 Uh_5tlreg41629 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg41630 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg41631 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41632 = _Int32ToInt32(Uh_5tlreg41631, 2, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41633 = 1; //gcnl:NodeTerminal.cpp:690
      if(Uh_5tlreg41633 >= 4) //gcnl:NodeSquareBracket.cpp:874
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
      Ui_Ut_r10181u<EC> Uh_6tlref41635(Uv_4than, Uh_5tlreg41633 * 8u + 0u, uc); //gcnl:Node.cpp:1317
      const u32 Uh_5tlreg41636 = Uh_6tlref41635.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg41637 = _Unsigned32ToInt32(Uh_5tlreg41636, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg41638 = _BinOpCompareEqEqInt32(Uh_5tlreg41637, Uh_5tlreg41632, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg41638, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg41639 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41640 = _Int32ToInt32(Uh_5tlreg41639, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41641 = 2; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg41641 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref41643(Uv_4than, Uh_5tlreg41641 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg41644 = Uh_6tlref41643.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41645 = _Unsigned32ToInt32(Uh_5tlreg41644, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41646 = _BinOpCompareEqEqInt32(Uh_5tlreg41645, Uh_5tlreg41640, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41630 = Uh_5tlreg41646; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg41630, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg41647 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41648 = _Int32ToInt32(Uh_5tlreg41647, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41649 = 3; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg41649 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref41651(Uv_4than, Uh_5tlreg41649 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg41652 = Uh_6tlref41651.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41653 = _Unsigned32ToInt32(Uh_5tlreg41652, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41654 = _BinOpCompareEqEqInt32(Uh_5tlreg41653, Uh_5tlreg41648, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg41629 = Uh_5tlreg41654; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg41629, 1)) //gcnl:NodeControl.cpp:213
      {

//! ColorUtils.ulam:54:       return color((Unsigned) 0x030303);
          const u32 Uh_5tlreg41656 = 197379u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41657 = _Unsigned32ToUnsigned32(Uh_5tlreg41656, 18, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval41658(Uh_5tlreg41657); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval41660 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval41658); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41661 = Uh_5tlval41660.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval41662(Uh_5tlreg41661); //gcnl:Node.cpp:1142
          return (Uh_5tlval41662); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg41663 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41664 = _Int32ToInt32(Uh_5tlreg41663, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg41664); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg41665 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41666 = _Int32ToInt32(Uh_5tlreg41665, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41668 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41669 = _BinOpCompareLessThanInt32(Uh_5tlreg41668, Uh_5tlreg41666, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41669, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
          {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
            const u32 Uh_5tlreg41670 = 3; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg41671 = _Int32ToInt32(Uh_5tlreg41670, 3, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg41673 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg41673 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10181u<EC> Uh_6tlref41675(Uv_4than, Uh_5tlreg41673 * 8u + 0u, uc); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg41676 = Uh_6tlref41675.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg41677 = _Unsigned32ToInt32(Uh_5tlreg41676, 8, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg41678 = _BinOpCompareLessThanInt32(Uh_5tlreg41677, Uh_5tlreg41671, 9); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg41678, 1)) //gcnl:NodeControl.cpp:213
            {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
                const u32 Uh_5tlreg41679 = 3; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg41680 = _Int32ToUnsigned32(Uh_5tlreg41679, 3, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg41682 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg41682 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref41684(Uv_4than, Uh_5tlreg41682 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref41684.write(Uh_5tlreg41680);
            } // end if
          }

//! ColorUtils.ulam:57:       than[i] = (Channel) (100*than[i]/70);
          const u32 Uh_5tlreg41685 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41686 = _Int32ToInt32(Uh_5tlreg41685, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41688 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg41688 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref41690(Uv_4than, Uh_5tlreg41688 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg41691 = Uh_6tlref41690.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41692 = _Unsigned32ToInt32(Uh_5tlreg41691, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41693 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41694 = _Int32ToInt32(Uh_5tlreg41693, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41695 = _BinOpMultiplyInt32(Uh_5tlreg41694, Uh_5tlreg41692, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41696 = _BinOpDivideInt32(Uh_5tlreg41695, Uh_5tlreg41686, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41697 = _Int32ToUnsigned32(Uh_5tlreg41696, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41699 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg41699 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref41701(Uv_4than, Uh_5tlreg41699 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref41701.write(Uh_5tlreg41697);
        }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop236:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg41702 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41704 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41705 = _BinOpAddInt32(Uh_5tlreg41704, Uh_5tlreg41702, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg41705); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:60:     return than;
    const u32 Uh_5tlreg41707 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval41708(Uh_5tlreg41707); //gcnl:Node.cpp:1142
    return (Uh_5tlval41708); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8brighter



//! ColorUtils.ulam:66:   ARGB dimmer(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6dimmer(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:67:     than[0] = 0xff;
    const u32 Uh_5tlreg41709 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41710 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41710 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41712(Uv_4than, Uh_5tlreg41710 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41712.write(Uh_5tlreg41709);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
    {

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      const u32 Uh_5tlreg41713 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41714 = _Int32ToInt32(Uh_5tlreg41713, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg41714); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      while(true)
      {
        const u32 Uh_5tlreg41715 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41716 = _Int32ToInt32(Uh_5tlreg41715, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41718 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41719 = _BinOpCompareLessThanInt32(Uh_5tlreg41718, Uh_5tlreg41716, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41719, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);
          const u32 Uh_5tlreg41720 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41721 = _Int32ToInt32(Uh_5tlreg41720, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41723 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg41723 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref41725(Uv_4than, Uh_5tlreg41723 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg41726 = Uh_6tlref41725.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41727 = _Unsigned32ToInt32(Uh_5tlreg41726, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41728 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41729 = _Int32ToInt32(Uh_5tlreg41728, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41730 = _BinOpMultiplyInt32(Uh_5tlreg41729, Uh_5tlreg41727, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41731 = _BinOpDivideInt32(Uh_5tlreg41730, Uh_5tlreg41721, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41732 = _Int32ToUnsigned32(Uh_5tlreg41731, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41734 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg41734 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref41736(Uv_4than, Uh_5tlreg41734 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref41736.write(Uh_5tlreg41732);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
Ul_214endcontrolloop237:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
        const u32 Uh_5tlreg41737 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41739 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41740 = _BinOpAddInt32(Uh_5tlreg41739, Uh_5tlreg41737, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg41740); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:70:     return than;
    const u32 Uh_5tlreg41742 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval41743(Uh_5tlreg41742); //gcnl:Node.cpp:1142
    return (Uh_5tlval41743); //gcnl:NodeReturnStatement.cpp:343

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

