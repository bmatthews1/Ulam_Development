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
    const u32 Uh_5tlreg42186 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42187 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42187 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42189(Uv_3ret, Uh_5tlreg42187 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42189.write(Uh_5tlreg42186);

//! ColorUtils.ulam:27:     ret[1] = (Channel) (red & 0xff);
    const u32 Uh_5tlreg42190 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42191 = _Unsigned32ToBits32(Uh_5tlreg42190, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42193 = Uv_3red.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42194 = _BitwiseAndBits32(Uh_5tlreg42193, Uh_5tlreg42191, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42195 = _Bits32ToUnsigned32(Uh_5tlreg42194, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42196 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42196 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42198(Uv_3ret, Uh_5tlreg42196 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42198.write(Uh_5tlreg42195);

//! ColorUtils.ulam:28:     ret[2] = (Channel) (green & 0xff);
    const u32 Uh_5tlreg42199 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42200 = _Unsigned32ToBits32(Uh_5tlreg42199, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42202 = Uv_5green.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42203 = _BitwiseAndBits32(Uh_5tlreg42202, Uh_5tlreg42200, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42204 = _Bits32ToUnsigned32(Uh_5tlreg42203, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42205 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42205 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42207(Uv_3ret, Uh_5tlreg42205 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42207.write(Uh_5tlreg42204);

//! ColorUtils.ulam:29:     ret[3] = (Channel) (blue & 0xff);
    const u32 Uh_5tlreg42208 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42209 = _Unsigned32ToBits32(Uh_5tlreg42208, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42211 = Uv_4blue.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42212 = _BitwiseAndBits32(Uh_5tlreg42211, Uh_5tlreg42209, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42213 = _Bits32ToUnsigned32(Uh_5tlreg42212, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42214 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42214 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42216(Uv_3ret, Uh_5tlreg42214 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42216.write(Uh_5tlreg42213);

//! ColorUtils.ulam:30:     return ret;
    const u32 Uh_5tlreg42218 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42219(Uh_5tlreg42218); //gcnl:Node.cpp:1142
    return (Uh_5tlval42219); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:8:   ARGB color(Int hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:9:     return color((Bits) hex);
    const u32 Uh_5tlreg42222 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42223 = _Int32ToBits32(Uh_5tlreg42222, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval42224(Uh_5tlreg42223); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42226 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42224); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42227 = Uh_5tlval42226.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval42228(Uh_5tlreg42227); //gcnl:Node.cpp:1142
    return (Uh_5tlval42228); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:12:   ARGB color(Unsigned hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:13:     return color((Bits) hex);
    const u32 Uh_5tlreg42231 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42232 = _Unsigned32ToBits32(Uh_5tlreg42231, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval42233(Uh_5tlreg42232); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42235 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42233); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42236 = Uh_5tlval42235.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval42237(Uh_5tlreg42236); //gcnl:Node.cpp:1142
    return (Uh_5tlval42237); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:16:   ARGB color(Bits hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:17:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! ColorUtils.ulam:18:     ret[0] = (Channel) ((hex >> 24) & 0xff);
    const u32 Uh_5tlreg42238 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42239 = _Unsigned32ToBits32(Uh_5tlreg42238, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42240 = 24; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42241 = _Int32ToUnsigned32(Uh_5tlreg42240, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42243 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42244 = _ShiftOpRightBits32(Uh_5tlreg42243, Uh_5tlreg42241, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42245 = _BitwiseAndBits32(Uh_5tlreg42244, Uh_5tlreg42239, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42246 = _Bits32ToUnsigned32(Uh_5tlreg42245, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42247 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42247 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42249(Uv_3ret, Uh_5tlreg42247 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42249.write(Uh_5tlreg42246);

//! ColorUtils.ulam:19:     ret[1] = (Channel) ((hex >> 16) & 0xff);
    const u32 Uh_5tlreg42250 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42251 = _Unsigned32ToBits32(Uh_5tlreg42250, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42252 = 16; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42253 = _Int32ToUnsigned32(Uh_5tlreg42252, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42255 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42256 = _ShiftOpRightBits32(Uh_5tlreg42255, Uh_5tlreg42253, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42257 = _BitwiseAndBits32(Uh_5tlreg42256, Uh_5tlreg42251, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42258 = _Bits32ToUnsigned32(Uh_5tlreg42257, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42259 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42259 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42261(Uv_3ret, Uh_5tlreg42259 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42261.write(Uh_5tlreg42258);

//! ColorUtils.ulam:20:     ret[2] = (Channel) ((hex >>  8) & 0xff);
    const u32 Uh_5tlreg42262 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42263 = _Unsigned32ToBits32(Uh_5tlreg42262, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42264 = 8; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42265 = _Int32ToUnsigned32(Uh_5tlreg42264, 5, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42267 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42268 = _ShiftOpRightBits32(Uh_5tlreg42267, Uh_5tlreg42265, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42269 = _BitwiseAndBits32(Uh_5tlreg42268, Uh_5tlreg42263, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42270 = _Bits32ToUnsigned32(Uh_5tlreg42269, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42271 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42271 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42273(Uv_3ret, Uh_5tlreg42271 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42273.write(Uh_5tlreg42270);

//! ColorUtils.ulam:21:     ret[3] = (Channel) ((hex >>  0) & 0xff);
    const u32 Uh_5tlreg42274 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42275 = _Unsigned32ToBits32(Uh_5tlreg42274, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42276 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42277 = _Int32ToUnsigned32(Uh_5tlreg42276, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42279 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42280 = _ShiftOpRightBits32(Uh_5tlreg42279, Uh_5tlreg42277, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42281 = _BitwiseAndBits32(Uh_5tlreg42280, Uh_5tlreg42275, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg42282 = _Bits32ToUnsigned32(Uh_5tlreg42281, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42283 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42283 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42285(Uv_3ret, Uh_5tlreg42283 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42285.write(Uh_5tlreg42282);

//! ColorUtils.ulam:22:     return ret;
    const u32 Uh_5tlreg42287 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42288(Uh_5tlreg42287); //gcnl:Node.cpp:1142
    return (Uh_5tlval42288); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:33:   ARGB modify(ARGB this, Unsigned percent) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6modify(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4this, Ui_Ut_102321u<EC>& Uv_7percent) const
  {

//! ColorUtils.ulam:34:     Unsigned rest = (Unsigned) 100 - percent;
    const u32 Uh_5tlreg42290 = Uv_7percent.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg42291 = 100; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42292 = _Int32ToUnsigned32(Uh_5tlreg42291, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42293 = _BinOpSubtractUnsigned32(Uh_5tlreg42292, Uh_5tlreg42290, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321u<EC> Uv_4rest(Uh_5tlreg42293); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42294 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42295 = _Int32ToInt32(Uh_5tlreg42294, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42295); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42296 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42297 = _Int32ToInt32(Uh_5tlreg42296, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42299 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42300 = _BinOpCompareLessThanInt32(Uh_5tlreg42299, Uh_5tlreg42297, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42300, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:36:       Unsigned old = (Unsigned) this[i];
          const u32 Uh_5tlreg42302 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42302 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42304(Uv_4this, Uh_5tlreg42302 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg42305 = Uh_6tlref42304.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42306 = _Unsigned32ToUnsigned32(Uh_5tlreg42305, 8, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uv_3old(Uh_5tlreg42306); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:37:       Unsigned new = (old * rest + (Unsigned) 0xff * percent) / 100u;
          const u32 Uh_5tlreg42307 = 100u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42308 = _Unsigned32ToUnsigned32(Uh_5tlreg42307, 7, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42310 = Uv_7percent.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42311 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42312 = _Unsigned32ToUnsigned32(Uh_5tlreg42311, 8, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42313 = _BinOpMultiplyUnsigned32(Uh_5tlreg42312, Uh_5tlreg42310, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42315 = Uv_4rest.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42317 = Uv_3old.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42318 = _BinOpMultiplyUnsigned32(Uh_5tlreg42317, Uh_5tlreg42315, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42319 = _BinOpAddUnsigned32(Uh_5tlreg42318, Uh_5tlreg42313, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42320 = _BinOpDivideUnsigned32(Uh_5tlreg42319, Uh_5tlreg42308, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_3new(Uh_5tlreg42320); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:38:       this[i] = (Channel) new;
          const u32 Uh_5tlreg42322 = Uv_3new.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42323 = _Unsigned32ToUnsigned32(Uh_5tlreg42322, 32, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42325 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42325 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42327(Uv_4this, Uh_5tlreg42325 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42327.write(Uh_5tlreg42323);
        }

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop215:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42328 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42330 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42331 = _BinOpAddInt32(Uh_5tlreg42330, Uh_5tlreg42328, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42331); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:40:     return this;
    const u32 Uh_5tlreg42333 = Uv_4this.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42334(Uh_5tlreg42333); //gcnl:Node.cpp:1142
    return (Uh_5tlval42334); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6modify



//! ColorUtils.ulam:51:   ARGB brighter(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_8brighter(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:52:     than[0] = 0xff;
    const u32 Uh_5tlreg42335 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42336 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42336 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42338(Uv_4than, Uh_5tlreg42336 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42338.write(Uh_5tlreg42335);

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
    {

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
      u32 Uh_5tlreg42339 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg42340 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg42341 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42342 = _Int32ToInt32(Uh_5tlreg42341, 2, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42343 = 1; //gcnl:NodeTerminal.cpp:690
      if(Uh_5tlreg42343 >= 4) //gcnl:NodeSquareBracket.cpp:874
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
      Ui_Ut_r10181u<EC> Uh_6tlref42345(Uv_4than, Uh_5tlreg42343 * 8u + 0u, uc); //gcnl:Node.cpp:1317
      const u32 Uh_5tlreg42346 = Uh_6tlref42345.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg42347 = _Unsigned32ToInt32(Uh_5tlreg42346, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42348 = _BinOpCompareEqEqInt32(Uh_5tlreg42347, Uh_5tlreg42342, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42348, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42349 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42350 = _Int32ToInt32(Uh_5tlreg42349, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42351 = 2; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg42351 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref42353(Uv_4than, Uh_5tlreg42351 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg42354 = Uh_6tlref42353.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42355 = _Unsigned32ToInt32(Uh_5tlreg42354, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42356 = _BinOpCompareEqEqInt32(Uh_5tlreg42355, Uh_5tlreg42350, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42340 = Uh_5tlreg42356; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42340, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg42357 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42358 = _Int32ToInt32(Uh_5tlreg42357, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42359 = 3; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg42359 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref42361(Uv_4than, Uh_5tlreg42359 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg42362 = Uh_6tlref42361.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42363 = _Unsigned32ToInt32(Uh_5tlreg42362, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42364 = _BinOpCompareEqEqInt32(Uh_5tlreg42363, Uh_5tlreg42358, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42339 = Uh_5tlreg42364; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg42339, 1)) //gcnl:NodeControl.cpp:213
      {

//! ColorUtils.ulam:54:       return color((Unsigned) 0x030303);
          const u32 Uh_5tlreg42366 = 197379u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42367 = _Unsigned32ToUnsigned32(Uh_5tlreg42366, 18, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval42368(Uh_5tlreg42367); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval42370 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval42368); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42371 = Uh_5tlval42370.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval42372(Uh_5tlreg42371); //gcnl:Node.cpp:1142
          return (Uh_5tlval42372); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg42373 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42374 = _Int32ToInt32(Uh_5tlreg42373, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42374); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg42375 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42376 = _Int32ToInt32(Uh_5tlreg42375, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42378 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42379 = _BinOpCompareLessThanInt32(Uh_5tlreg42378, Uh_5tlreg42376, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42379, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
          {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
            const u32 Uh_5tlreg42380 = 3; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42381 = _Int32ToInt32(Uh_5tlreg42380, 3, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42383 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg42383 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10181u<EC> Uh_6tlref42385(Uv_4than, Uh_5tlreg42383 * 8u + 0u, uc); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg42386 = Uh_6tlref42385.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg42387 = _Unsigned32ToInt32(Uh_5tlreg42386, 8, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42388 = _BinOpCompareLessThanInt32(Uh_5tlreg42387, Uh_5tlreg42381, 9); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg42388, 1)) //gcnl:NodeControl.cpp:213
            {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
                const u32 Uh_5tlreg42389 = 3; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42390 = _Int32ToUnsigned32(Uh_5tlreg42389, 3, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg42392 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg42392 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref42394(Uv_4than, Uh_5tlreg42392 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref42394.write(Uh_5tlreg42390);
            } // end if
          }

//! ColorUtils.ulam:57:       than[i] = (Channel) (100*than[i]/70);
          const u32 Uh_5tlreg42395 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42396 = _Int32ToInt32(Uh_5tlreg42395, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42398 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42398 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42400(Uv_4than, Uh_5tlreg42398 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg42401 = Uh_6tlref42400.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42402 = _Unsigned32ToInt32(Uh_5tlreg42401, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42403 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42404 = _Int32ToInt32(Uh_5tlreg42403, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42405 = _BinOpMultiplyInt32(Uh_5tlreg42404, Uh_5tlreg42402, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42406 = _BinOpDivideInt32(Uh_5tlreg42405, Uh_5tlreg42396, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42407 = _Int32ToUnsigned32(Uh_5tlreg42406, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42409 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42409 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42411(Uv_4than, Uh_5tlreg42409 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42411.write(Uh_5tlreg42407);
        }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop216:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg42412 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42414 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42415 = _BinOpAddInt32(Uh_5tlreg42414, Uh_5tlreg42412, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42415); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:60:     return than;
    const u32 Uh_5tlreg42417 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42418(Uh_5tlreg42417); //gcnl:Node.cpp:1142
    return (Uh_5tlval42418); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8brighter



//! ColorUtils.ulam:66:   ARGB dimmer(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6dimmer(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:67:     than[0] = 0xff;
    const u32 Uh_5tlreg42419 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42420 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42420 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42422(Uv_4than, Uh_5tlreg42420 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42422.write(Uh_5tlreg42419);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
    {

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      const u32 Uh_5tlreg42423 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42424 = _Int32ToInt32(Uh_5tlreg42423, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg42424); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      while(true)
      {
        const u32 Uh_5tlreg42425 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42426 = _Int32ToInt32(Uh_5tlreg42425, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42428 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42429 = _BinOpCompareLessThanInt32(Uh_5tlreg42428, Uh_5tlreg42426, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42429, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);
          const u32 Uh_5tlreg42430 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42431 = _Int32ToInt32(Uh_5tlreg42430, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42433 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42433 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42435(Uv_4than, Uh_5tlreg42433 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg42436 = Uh_6tlref42435.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42437 = _Unsigned32ToInt32(Uh_5tlreg42436, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42438 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42439 = _Int32ToInt32(Uh_5tlreg42438, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42440 = _BinOpMultiplyInt32(Uh_5tlreg42439, Uh_5tlreg42437, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42441 = _BinOpDivideInt32(Uh_5tlreg42440, Uh_5tlreg42431, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42442 = _Int32ToUnsigned32(Uh_5tlreg42441, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42444 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg42444 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42446(Uv_4than, Uh_5tlreg42444 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42446.write(Uh_5tlreg42442);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
Ul_214endcontrolloop217:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
        const u32 Uh_5tlreg42447 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42449 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42450 = _BinOpAddInt32(Uh_5tlreg42449, Uh_5tlreg42447, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg42450); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:70:     return than;
    const u32 Uh_5tlreg42452 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42453(Uh_5tlreg42452); //gcnl:Node.cpp:1142
    return (Uh_5tlval42453); //gcnl:NodeReturnStatement.cpp:343

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

