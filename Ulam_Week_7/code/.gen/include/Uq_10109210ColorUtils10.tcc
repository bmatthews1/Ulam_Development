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
    const u32 Uh_5tlreg42257 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42258 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42258 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42260(Uv_3ret, Uh_5tlreg42258 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42260.write(Uh_5tlreg42257);

//! ColorUtils.ulam:27:     ret[1] = (Channel) (red & 0xff);
    const u32 Uh_5tlreg42261 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42262 = _Unsigned32ToBits32(Uh_5tlreg42261, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42264 = Uv_3red.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42265 = _BitwiseAndBits32(Uh_5tlreg42264, Uh_5tlreg42262, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42266 = _Bits32ToUnsigned32(Uh_5tlreg42265, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42267 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42267 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42269(Uv_3ret, Uh_5tlreg42267 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42269.write(Uh_5tlreg42266);

//! ColorUtils.ulam:28:     ret[2] = (Channel) (green & 0xff);
    const u32 Uh_5tlreg42270 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42271 = _Unsigned32ToBits32(Uh_5tlreg42270, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42273 = Uv_5green.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42274 = _BitwiseAndBits32(Uh_5tlreg42273, Uh_5tlreg42271, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42275 = _Bits32ToUnsigned32(Uh_5tlreg42274, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42276 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42276 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42278(Uv_3ret, Uh_5tlreg42276 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42278.write(Uh_5tlreg42275);

//! ColorUtils.ulam:29:     ret[3] = (Channel) (blue & 0xff);
    const u32 Uh_5tlreg42279 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42280 = _Unsigned32ToBits32(Uh_5tlreg42279, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42282 = Uv_4blue.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42283 = _BitwiseAndBits32(Uh_5tlreg42282, Uh_5tlreg42280, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42284 = _Bits32ToUnsigned32(Uh_5tlreg42283, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42285 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42285 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42287(Uv_3ret, Uh_5tlreg42285 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42287.write(Uh_5tlreg42284);

//! ColorUtils.ulam:30:     return ret;
    const u32 Uh_5tlreg42289 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42290(Uh_5tlreg42289); //gcnl:Node.cpp:1142
    return (Uh_5tlval42290); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:8:   ARGB color(Int hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:9:     return color((Bits) hex);
    const u32 Uh_5tlreg42293 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42294 = _Int32ToBits32(Uh_5tlreg42293, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval42295(Uh_5tlreg42294); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42297 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42295); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42298 = Uh_5tlval42297.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval42299(Uh_5tlreg42298); //gcnl:Node.cpp:1142
    return (Uh_5tlval42299); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:12:   ARGB color(Unsigned hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:13:     return color((Bits) hex);
    const u32 Uh_5tlreg42302 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42303 = _Unsigned32ToBits32(Uh_5tlreg42302, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval42304(Uh_5tlreg42303); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42306 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42304); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42307 = Uh_5tlval42306.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval42308(Uh_5tlreg42307); //gcnl:Node.cpp:1142
    return (Uh_5tlval42308); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:16:   ARGB color(Bits hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:17:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! ColorUtils.ulam:18:     ret[0] = (Channel) ((hex >> 24) & 0xff);
    const u32 Uh_5tlreg42309 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42310 = _Unsigned32ToBits32(Uh_5tlreg42309, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42311 = 24; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42312 = _Int32ToUnsigned32(Uh_5tlreg42311, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42314 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42315 = _ShiftOpRightBits32(Uh_5tlreg42314, Uh_5tlreg42312, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42316 = _BitwiseAndBits32(Uh_5tlreg42315, Uh_5tlreg42310, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42317 = _Bits32ToUnsigned32(Uh_5tlreg42316, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42318 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42318 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42320(Uv_3ret, Uh_5tlreg42318 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42320.write(Uh_5tlreg42317);

//! ColorUtils.ulam:19:     ret[1] = (Channel) ((hex >> 16) & 0xff);
    const u32 Uh_5tlreg42321 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42322 = _Unsigned32ToBits32(Uh_5tlreg42321, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42323 = 16; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42324 = _Int32ToUnsigned32(Uh_5tlreg42323, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42326 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42327 = _ShiftOpRightBits32(Uh_5tlreg42326, Uh_5tlreg42324, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42328 = _BitwiseAndBits32(Uh_5tlreg42327, Uh_5tlreg42322, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42329 = _Bits32ToUnsigned32(Uh_5tlreg42328, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42330 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42330 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42332(Uv_3ret, Uh_5tlreg42330 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42332.write(Uh_5tlreg42329);

//! ColorUtils.ulam:20:     ret[2] = (Channel) ((hex >>  8) & 0xff);
    const u32 Uh_5tlreg42333 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42334 = _Unsigned32ToBits32(Uh_5tlreg42333, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42335 = 8; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42336 = _Int32ToUnsigned32(Uh_5tlreg42335, 5, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42338 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42339 = _ShiftOpRightBits32(Uh_5tlreg42338, Uh_5tlreg42336, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42340 = _BitwiseAndBits32(Uh_5tlreg42339, Uh_5tlreg42334, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42341 = _Bits32ToUnsigned32(Uh_5tlreg42340, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42342 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42342 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42344(Uv_3ret, Uh_5tlreg42342 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42344.write(Uh_5tlreg42341);

//! ColorUtils.ulam:21:     ret[3] = (Channel) ((hex >>  0) & 0xff);
    const u32 Uh_5tlreg42345 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42346 = _Unsigned32ToBits32(Uh_5tlreg42345, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42347 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42348 = _Int32ToUnsigned32(Uh_5tlreg42347, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42350 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42351 = _ShiftOpRightBits32(Uh_5tlreg42350, Uh_5tlreg42348, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42352 = _BitwiseAndBits32(Uh_5tlreg42351, Uh_5tlreg42346, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42353 = _Bits32ToUnsigned32(Uh_5tlreg42352, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42354 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42354 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42356(Uv_3ret, Uh_5tlreg42354 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42356.write(Uh_5tlreg42353);

//! ColorUtils.ulam:22:     return ret;
    const u32 Uh_5tlreg42358 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42359(Uh_5tlreg42358); //gcnl:Node.cpp:1142
    return (Uh_5tlval42359); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:33:   ARGB modify(ARGB this, Unsigned percent) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6modify(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4this, Ui_Ut_102321u<EC>& Uv_7percent) const
  {

//! ColorUtils.ulam:34:     Unsigned rest = (Unsigned) 100 - percent;
    const u32 Uh_5tlreg42361 = Uv_7percent.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42362 = 100; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42363 = _Int32ToUnsigned32(Uh_5tlreg42362, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42364 = _BinOpSubtractUnsigned32(Uh_5tlreg42363, Uh_5tlreg42361, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321u<EC> Uv_4rest(Uh_5tlreg42364); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42365 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42366 = _Int32ToInt32(Uh_5tlreg42365, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42366); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42367 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42368 = _Int32ToInt32(Uh_5tlreg42367, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42370 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42371 = _BinOpCompareLessThanInt32(Uh_5tlreg42370, Uh_5tlreg42368, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42371, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:36:       Unsigned old = (Unsigned) this[i];
          const u32 Uh_5tlreg42373 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42373 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42375(Uv_4this, Uh_5tlreg42373 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg42376 = Uh_6tlref42375.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42377 = _Unsigned32ToUnsigned32(Uh_5tlreg42376, 8, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uv_3old(Uh_5tlreg42377); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:37:       Unsigned new = (old * rest + (Unsigned) 0xff * percent) / 100u;
          const u32 Uh_5tlreg42378 = 100u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42379 = _Unsigned32ToUnsigned32(Uh_5tlreg42378, 7, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42381 = Uv_7percent.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42382 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42383 = _Unsigned32ToUnsigned32(Uh_5tlreg42382, 8, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42384 = _BinOpMultiplyUnsigned32(Uh_5tlreg42383, Uh_5tlreg42381, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42386 = Uv_4rest.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42388 = Uv_3old.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42389 = _BinOpMultiplyUnsigned32(Uh_5tlreg42388, Uh_5tlreg42386, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42390 = _BinOpAddUnsigned32(Uh_5tlreg42389, Uh_5tlreg42384, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42391 = _BinOpDivideUnsigned32(Uh_5tlreg42390, Uh_5tlreg42379, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_3new(Uh_5tlreg42391); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:38:       this[i] = (Channel) new;
          const u32 Uh_5tlreg42393 = Uv_3new.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42394 = _Unsigned32ToUnsigned32(Uh_5tlreg42393, 32, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42396 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42396 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42398(Uv_4this, Uh_5tlreg42396 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42398.write(Uh_5tlreg42394);
        }

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop217:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42399 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42401 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42402 = _BinOpAddInt32(Uh_5tlreg42401, Uh_5tlreg42399, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42402); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:40:     return this;
    const u32 Uh_5tlreg42404 = Uv_4this.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42405(Uh_5tlreg42404); //gcnl:Node.cpp:1142
    return (Uh_5tlval42405); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6modify



//! ColorUtils.ulam:51:   ARGB brighter(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_8brighter(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:52:     than[0] = 0xff;
    const u32 Uh_5tlreg42406 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42407 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42407 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42409(Uv_4than, Uh_5tlreg42407 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42409.write(Uh_5tlreg42406);

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
    {

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
      u32 Uh_5tlreg42410 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg42411 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg42412 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42413 = _Int32ToInt32(Uh_5tlreg42412, 2, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42414 = 1; //gcnl:NodeTerminal.cpp:690
      if(Uh_5tlreg42414 >= 4) //gcnl:NodeSquareBracket.cpp:874
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
      Ui_Ut_r10181u<EC> Uh_6tlref42416(Uv_4than, Uh_5tlreg42414 * 8u + 0u, uc); //gcnl:Node.cpp:1317
      const u32 Uh_5tlreg42417 = Uh_6tlref42416.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42418 = _Unsigned32ToInt32(Uh_5tlreg42417, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42419 = _BinOpCompareEqEqInt32(Uh_5tlreg42418, Uh_5tlreg42413, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42419, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42420 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42421 = _Int32ToInt32(Uh_5tlreg42420, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42422 = 2; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg42422 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref42424(Uv_4than, Uh_5tlreg42422 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg42425 = Uh_6tlref42424.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42426 = _Unsigned32ToInt32(Uh_5tlreg42425, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42427 = _BinOpCompareEqEqInt32(Uh_5tlreg42426, Uh_5tlreg42421, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42411 = Uh_5tlreg42427; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42411, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42428 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42429 = _Int32ToInt32(Uh_5tlreg42428, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42430 = 3; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg42430 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref42432(Uv_4than, Uh_5tlreg42430 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg42433 = Uh_6tlref42432.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42434 = _Unsigned32ToInt32(Uh_5tlreg42433, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42435 = _BinOpCompareEqEqInt32(Uh_5tlreg42434, Uh_5tlreg42429, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42410 = Uh_5tlreg42435; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42410, 1)) //gcnl:NodeControl.cpp:213
      {

//! ColorUtils.ulam:54:       return color((Unsigned) 0x030303);
          const u32 Uh_5tlreg42437 = 197379u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42438 = _Unsigned32ToUnsigned32(Uh_5tlreg42437, 18, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval42439(Uh_5tlreg42438); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval42441 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42439); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42442 = Uh_5tlval42441.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval42443(Uh_5tlreg42442); //gcnl:Node.cpp:1142
          return (Uh_5tlval42443); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42444 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42445 = _Int32ToInt32(Uh_5tlreg42444, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42445); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42446 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42447 = _Int32ToInt32(Uh_5tlreg42446, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42449 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42450 = _BinOpCompareLessThanInt32(Uh_5tlreg42449, Uh_5tlreg42447, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42450, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
          {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
            const u32 Uh_5tlreg42451 = 3; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42452 = _Int32ToInt32(Uh_5tlreg42451, 3, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42454 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg42454 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10181u<EC> Uh_6tlref42456(Uv_4than, Uh_5tlreg42454 * 8u + 0u, uc); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg42457 = Uh_6tlref42456.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg42458 = _Unsigned32ToInt32(Uh_5tlreg42457, 8, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42459 = _BinOpCompareLessThanInt32(Uh_5tlreg42458, Uh_5tlreg42452, 9); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg42459, 1)) //gcnl:NodeControl.cpp:213
            {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
                const u32 Uh_5tlreg42460 = 3; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42461 = _Int32ToUnsigned32(Uh_5tlreg42460, 3, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg42463 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg42463 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref42465(Uv_4than, Uh_5tlreg42463 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref42465.write(Uh_5tlreg42461);
            } // end if
          }

//! ColorUtils.ulam:57:       than[i] = (Channel) (100*than[i]/70);
          const u32 Uh_5tlreg42466 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42467 = _Int32ToInt32(Uh_5tlreg42466, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42469 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42469 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42471(Uv_4than, Uh_5tlreg42469 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg42472 = Uh_6tlref42471.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42473 = _Unsigned32ToInt32(Uh_5tlreg42472, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42474 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42475 = _Int32ToInt32(Uh_5tlreg42474, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42476 = _BinOpMultiplyInt32(Uh_5tlreg42475, Uh_5tlreg42473, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42477 = _BinOpDivideInt32(Uh_5tlreg42476, Uh_5tlreg42467, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42478 = _Int32ToUnsigned32(Uh_5tlreg42477, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42480 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42480 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42482(Uv_4than, Uh_5tlreg42480 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42482.write(Uh_5tlreg42478);
        }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop218:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42483 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42485 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42486 = _BinOpAddInt32(Uh_5tlreg42485, Uh_5tlreg42483, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42486); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:60:     return than;
    const u32 Uh_5tlreg42488 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42489(Uh_5tlreg42488); //gcnl:Node.cpp:1142
    return (Uh_5tlval42489); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8brighter



//! ColorUtils.ulam:66:   ARGB dimmer(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6dimmer(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:67:     than[0] = 0xff;
    const u32 Uh_5tlreg42490 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42491 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42491 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42493(Uv_4than, Uh_5tlreg42491 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42493.write(Uh_5tlreg42490);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
    {

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      const u32 Uh_5tlreg42494 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42495 = _Int32ToInt32(Uh_5tlreg42494, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42495); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42496 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42497 = _Int32ToInt32(Uh_5tlreg42496, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42499 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42500 = _BinOpCompareLessThanInt32(Uh_5tlreg42499, Uh_5tlreg42497, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42500, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);
          const u32 Uh_5tlreg42501 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42502 = _Int32ToInt32(Uh_5tlreg42501, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42504 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42504 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42506(Uv_4than, Uh_5tlreg42504 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg42507 = Uh_6tlref42506.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42508 = _Unsigned32ToInt32(Uh_5tlreg42507, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42509 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42510 = _Int32ToInt32(Uh_5tlreg42509, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42511 = _BinOpMultiplyInt32(Uh_5tlreg42510, Uh_5tlreg42508, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42512 = _BinOpDivideInt32(Uh_5tlreg42511, Uh_5tlreg42502, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42513 = _Int32ToUnsigned32(Uh_5tlreg42512, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42515 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42515 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42517(Uv_4than, Uh_5tlreg42515 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42517.write(Uh_5tlreg42513);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
Ul_214endcontrolloop219:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
        const u32 Uh_5tlreg42518 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42520 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42521 = _BinOpAddInt32(Uh_5tlreg42520, Uh_5tlreg42518, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42521); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:70:     return than;
    const u32 Uh_5tlreg42523 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42524(Uh_5tlreg42523); //gcnl:Node.cpp:1142
    return (Uh_5tlval42524); //gcnl:NodeReturnStatement.cpp:343

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

