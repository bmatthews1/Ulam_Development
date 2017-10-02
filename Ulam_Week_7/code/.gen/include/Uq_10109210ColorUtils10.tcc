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
    const u32 Uh_5tlreg42338 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42339 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42339 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42341(Uv_3ret, Uh_5tlreg42339 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42341.write(Uh_5tlreg42338);

//! ColorUtils.ulam:27:     ret[1] = (Channel) (red & 0xff);
    const u32 Uh_5tlreg42342 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42343 = _Unsigned32ToBits32(Uh_5tlreg42342, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42345 = Uv_3red.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42346 = _BitwiseAndBits32(Uh_5tlreg42345, Uh_5tlreg42343, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42347 = _Bits32ToUnsigned32(Uh_5tlreg42346, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42348 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42348 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42350(Uv_3ret, Uh_5tlreg42348 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42350.write(Uh_5tlreg42347);

//! ColorUtils.ulam:28:     ret[2] = (Channel) (green & 0xff);
    const u32 Uh_5tlreg42351 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42352 = _Unsigned32ToBits32(Uh_5tlreg42351, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42354 = Uv_5green.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42355 = _BitwiseAndBits32(Uh_5tlreg42354, Uh_5tlreg42352, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42356 = _Bits32ToUnsigned32(Uh_5tlreg42355, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42357 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42357 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42359(Uv_3ret, Uh_5tlreg42357 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42359.write(Uh_5tlreg42356);

//! ColorUtils.ulam:29:     ret[3] = (Channel) (blue & 0xff);
    const u32 Uh_5tlreg42360 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42361 = _Unsigned32ToBits32(Uh_5tlreg42360, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42363 = Uv_4blue.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42364 = _BitwiseAndBits32(Uh_5tlreg42363, Uh_5tlreg42361, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42365 = _Bits32ToUnsigned32(Uh_5tlreg42364, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42366 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42366 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42368(Uv_3ret, Uh_5tlreg42366 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42368.write(Uh_5tlreg42365);

//! ColorUtils.ulam:30:     return ret;
    const u32 Uh_5tlreg42370 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42371(Uh_5tlreg42370); //gcnl:Node.cpp:1142
    return (Uh_5tlval42371); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:8:   ARGB color(Int hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:9:     return color((Bits) hex);
    const u32 Uh_5tlreg42374 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42375 = _Int32ToBits32(Uh_5tlreg42374, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval42376(Uh_5tlreg42375); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42378 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42376); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42379 = Uh_5tlval42378.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval42380(Uh_5tlreg42379); //gcnl:Node.cpp:1142
    return (Uh_5tlval42380); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:12:   ARGB color(Unsigned hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:13:     return color((Bits) hex);
    const u32 Uh_5tlreg42383 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42384 = _Unsigned32ToBits32(Uh_5tlreg42383, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval42385(Uh_5tlreg42384); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42387 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42385); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42388 = Uh_5tlval42387.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval42389(Uh_5tlreg42388); //gcnl:Node.cpp:1142
    return (Uh_5tlval42389); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:16:   ARGB color(Bits hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:17:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! ColorUtils.ulam:18:     ret[0] = (Channel) ((hex >> 24) & 0xff);
    const u32 Uh_5tlreg42390 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42391 = _Unsigned32ToBits32(Uh_5tlreg42390, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42392 = 24; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42393 = _Int32ToUnsigned32(Uh_5tlreg42392, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42395 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42396 = _ShiftOpRightBits32(Uh_5tlreg42395, Uh_5tlreg42393, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42397 = _BitwiseAndBits32(Uh_5tlreg42396, Uh_5tlreg42391, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42398 = _Bits32ToUnsigned32(Uh_5tlreg42397, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42399 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42399 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42401(Uv_3ret, Uh_5tlreg42399 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42401.write(Uh_5tlreg42398);

//! ColorUtils.ulam:19:     ret[1] = (Channel) ((hex >> 16) & 0xff);
    const u32 Uh_5tlreg42402 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42403 = _Unsigned32ToBits32(Uh_5tlreg42402, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42404 = 16; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42405 = _Int32ToUnsigned32(Uh_5tlreg42404, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42407 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42408 = _ShiftOpRightBits32(Uh_5tlreg42407, Uh_5tlreg42405, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42409 = _BitwiseAndBits32(Uh_5tlreg42408, Uh_5tlreg42403, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42410 = _Bits32ToUnsigned32(Uh_5tlreg42409, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42411 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42411 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42413(Uv_3ret, Uh_5tlreg42411 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42413.write(Uh_5tlreg42410);

//! ColorUtils.ulam:20:     ret[2] = (Channel) ((hex >>  8) & 0xff);
    const u32 Uh_5tlreg42414 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42415 = _Unsigned32ToBits32(Uh_5tlreg42414, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42416 = 8; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42417 = _Int32ToUnsigned32(Uh_5tlreg42416, 5, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42419 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42420 = _ShiftOpRightBits32(Uh_5tlreg42419, Uh_5tlreg42417, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42421 = _BitwiseAndBits32(Uh_5tlreg42420, Uh_5tlreg42415, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42422 = _Bits32ToUnsigned32(Uh_5tlreg42421, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42423 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42423 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42425(Uv_3ret, Uh_5tlreg42423 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42425.write(Uh_5tlreg42422);

//! ColorUtils.ulam:21:     ret[3] = (Channel) ((hex >>  0) & 0xff);
    const u32 Uh_5tlreg42426 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42427 = _Unsigned32ToBits32(Uh_5tlreg42426, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42428 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42429 = _Int32ToUnsigned32(Uh_5tlreg42428, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42431 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42432 = _ShiftOpRightBits32(Uh_5tlreg42431, Uh_5tlreg42429, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42433 = _BitwiseAndBits32(Uh_5tlreg42432, Uh_5tlreg42427, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42434 = _Bits32ToUnsigned32(Uh_5tlreg42433, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42435 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42435 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42437(Uv_3ret, Uh_5tlreg42435 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42437.write(Uh_5tlreg42434);

//! ColorUtils.ulam:22:     return ret;
    const u32 Uh_5tlreg42439 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42440(Uh_5tlreg42439); //gcnl:Node.cpp:1142
    return (Uh_5tlval42440); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:33:   ARGB modify(ARGB this, Unsigned percent) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6modify(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4this, Ui_Ut_102321u<EC>& Uv_7percent) const
  {

//! ColorUtils.ulam:34:     Unsigned rest = (Unsigned) 100 - percent;
    const u32 Uh_5tlreg42442 = Uv_7percent.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42443 = 100; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42444 = _Int32ToUnsigned32(Uh_5tlreg42443, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42445 = _BinOpSubtractUnsigned32(Uh_5tlreg42444, Uh_5tlreg42442, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321u<EC> Uv_4rest(Uh_5tlreg42445); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42446 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42447 = _Int32ToInt32(Uh_5tlreg42446, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42447); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42448 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42449 = _Int32ToInt32(Uh_5tlreg42448, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42451 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42452 = _BinOpCompareLessThanInt32(Uh_5tlreg42451, Uh_5tlreg42449, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42452, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:36:       Unsigned old = (Unsigned) this[i];
          const u32 Uh_5tlreg42454 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42454 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42456(Uv_4this, Uh_5tlreg42454 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg42457 = Uh_6tlref42456.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42458 = _Unsigned32ToUnsigned32(Uh_5tlreg42457, 8, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uv_3old(Uh_5tlreg42458); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:37:       Unsigned new = (old * rest + (Unsigned) 0xff * percent) / 100u;
          const u32 Uh_5tlreg42459 = 100u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42460 = _Unsigned32ToUnsigned32(Uh_5tlreg42459, 7, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42462 = Uv_7percent.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42463 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42464 = _Unsigned32ToUnsigned32(Uh_5tlreg42463, 8, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42465 = _BinOpMultiplyUnsigned32(Uh_5tlreg42464, Uh_5tlreg42462, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42467 = Uv_4rest.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42469 = Uv_3old.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42470 = _BinOpMultiplyUnsigned32(Uh_5tlreg42469, Uh_5tlreg42467, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42471 = _BinOpAddUnsigned32(Uh_5tlreg42470, Uh_5tlreg42465, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42472 = _BinOpDivideUnsigned32(Uh_5tlreg42471, Uh_5tlreg42460, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_3new(Uh_5tlreg42472); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:38:       this[i] = (Channel) new;
          const u32 Uh_5tlreg42474 = Uv_3new.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42475 = _Unsigned32ToUnsigned32(Uh_5tlreg42474, 32, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42477 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42477 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42479(Uv_4this, Uh_5tlreg42477 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42479.write(Uh_5tlreg42475);
        }

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop217:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42480 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42482 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42483 = _BinOpAddInt32(Uh_5tlreg42482, Uh_5tlreg42480, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42483); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:40:     return this;
    const u32 Uh_5tlreg42485 = Uv_4this.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42486(Uh_5tlreg42485); //gcnl:Node.cpp:1142
    return (Uh_5tlval42486); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6modify



//! ColorUtils.ulam:51:   ARGB brighter(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_8brighter(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:52:     than[0] = 0xff;
    const u32 Uh_5tlreg42487 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42488 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42488 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42490(Uv_4than, Uh_5tlreg42488 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42490.write(Uh_5tlreg42487);

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
    {

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
      u32 Uh_5tlreg42491 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg42492 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg42493 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42494 = _Int32ToInt32(Uh_5tlreg42493, 2, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42495 = 1; //gcnl:NodeTerminal.cpp:690
      if(Uh_5tlreg42495 >= 4) //gcnl:NodeSquareBracket.cpp:874
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
      Ui_Ut_r10181u<EC> Uh_6tlref42497(Uv_4than, Uh_5tlreg42495 * 8u + 0u, uc); //gcnl:Node.cpp:1317
      const u32 Uh_5tlreg42498 = Uh_6tlref42497.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42499 = _Unsigned32ToInt32(Uh_5tlreg42498, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42500 = _BinOpCompareEqEqInt32(Uh_5tlreg42499, Uh_5tlreg42494, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42500, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42501 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42502 = _Int32ToInt32(Uh_5tlreg42501, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42503 = 2; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg42503 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref42505(Uv_4than, Uh_5tlreg42503 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg42506 = Uh_6tlref42505.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42507 = _Unsigned32ToInt32(Uh_5tlreg42506, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42508 = _BinOpCompareEqEqInt32(Uh_5tlreg42507, Uh_5tlreg42502, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42492 = Uh_5tlreg42508; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42492, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42509 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42510 = _Int32ToInt32(Uh_5tlreg42509, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42511 = 3; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg42511 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref42513(Uv_4than, Uh_5tlreg42511 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg42514 = Uh_6tlref42513.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42515 = _Unsigned32ToInt32(Uh_5tlreg42514, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42516 = _BinOpCompareEqEqInt32(Uh_5tlreg42515, Uh_5tlreg42510, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42491 = Uh_5tlreg42516; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42491, 1)) //gcnl:NodeControl.cpp:213
      {

//! ColorUtils.ulam:54:       return color((Unsigned) 0x030303);
          const u32 Uh_5tlreg42518 = 197379u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42519 = _Unsigned32ToUnsigned32(Uh_5tlreg42518, 18, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval42520(Uh_5tlreg42519); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval42522 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42520); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42523 = Uh_5tlval42522.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval42524(Uh_5tlreg42523); //gcnl:Node.cpp:1142
          return (Uh_5tlval42524); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42525 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42526 = _Int32ToInt32(Uh_5tlreg42525, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42526); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42527 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42528 = _Int32ToInt32(Uh_5tlreg42527, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42530 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42531 = _BinOpCompareLessThanInt32(Uh_5tlreg42530, Uh_5tlreg42528, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42531, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
          {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
            const u32 Uh_5tlreg42532 = 3; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42533 = _Int32ToInt32(Uh_5tlreg42532, 3, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42535 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg42535 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10181u<EC> Uh_6tlref42537(Uv_4than, Uh_5tlreg42535 * 8u + 0u, uc); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg42538 = Uh_6tlref42537.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg42539 = _Unsigned32ToInt32(Uh_5tlreg42538, 8, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42540 = _BinOpCompareLessThanInt32(Uh_5tlreg42539, Uh_5tlreg42533, 9); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg42540, 1)) //gcnl:NodeControl.cpp:213
            {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
                const u32 Uh_5tlreg42541 = 3; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42542 = _Int32ToUnsigned32(Uh_5tlreg42541, 3, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg42544 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg42544 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref42546(Uv_4than, Uh_5tlreg42544 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref42546.write(Uh_5tlreg42542);
            } // end if
          }

//! ColorUtils.ulam:57:       than[i] = (Channel) (100*than[i]/70);
          const u32 Uh_5tlreg42547 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42548 = _Int32ToInt32(Uh_5tlreg42547, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42550 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42550 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42552(Uv_4than, Uh_5tlreg42550 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg42553 = Uh_6tlref42552.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42554 = _Unsigned32ToInt32(Uh_5tlreg42553, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42555 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42556 = _Int32ToInt32(Uh_5tlreg42555, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42557 = _BinOpMultiplyInt32(Uh_5tlreg42556, Uh_5tlreg42554, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42558 = _BinOpDivideInt32(Uh_5tlreg42557, Uh_5tlreg42548, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42559 = _Int32ToUnsigned32(Uh_5tlreg42558, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42561 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42561 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42563(Uv_4than, Uh_5tlreg42561 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42563.write(Uh_5tlreg42559);
        }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop218:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42564 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42566 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42567 = _BinOpAddInt32(Uh_5tlreg42566, Uh_5tlreg42564, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42567); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:60:     return than;
    const u32 Uh_5tlreg42569 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42570(Uh_5tlreg42569); //gcnl:Node.cpp:1142
    return (Uh_5tlval42570); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8brighter



//! ColorUtils.ulam:66:   ARGB dimmer(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6dimmer(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:67:     than[0] = 0xff;
    const u32 Uh_5tlreg42571 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42572 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42572 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42574(Uv_4than, Uh_5tlreg42572 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42574.write(Uh_5tlreg42571);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
    {

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      const u32 Uh_5tlreg42575 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42576 = _Int32ToInt32(Uh_5tlreg42575, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42576); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42577 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42578 = _Int32ToInt32(Uh_5tlreg42577, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42580 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42581 = _BinOpCompareLessThanInt32(Uh_5tlreg42580, Uh_5tlreg42578, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42581, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);
          const u32 Uh_5tlreg42582 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42583 = _Int32ToInt32(Uh_5tlreg42582, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42585 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42585 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42587(Uv_4than, Uh_5tlreg42585 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg42588 = Uh_6tlref42587.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42589 = _Unsigned32ToInt32(Uh_5tlreg42588, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42590 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42591 = _Int32ToInt32(Uh_5tlreg42590, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42592 = _BinOpMultiplyInt32(Uh_5tlreg42591, Uh_5tlreg42589, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42593 = _BinOpDivideInt32(Uh_5tlreg42592, Uh_5tlreg42583, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42594 = _Int32ToUnsigned32(Uh_5tlreg42593, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42596 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42596 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42598(Uv_4than, Uh_5tlreg42596 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42598.write(Uh_5tlreg42594);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
Ul_214endcontrolloop219:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
        const u32 Uh_5tlreg42599 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42601 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42602 = _BinOpAddInt32(Uh_5tlreg42601, Uh_5tlreg42599, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42602); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:70:     return than;
    const u32 Uh_5tlreg42604 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42605(Uh_5tlreg42604); //gcnl:Node.cpp:1142
    return (Uh_5tlval42605); //gcnl:NodeReturnStatement.cpp:343

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

