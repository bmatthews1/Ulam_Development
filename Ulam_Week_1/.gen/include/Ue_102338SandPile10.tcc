/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_102338SandPile10<EC>::Ue_102338SandPile10() : UlamElement<EC>(MFM_UUID_FOR("Ue102338SandPile10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("S");  // figure this out later
    Element<EC>::SetName("SandPile"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102338SandPile10<EC>::~Ue_102338SandPile10(){} //gcnl:NodeBlockClass.cpp:1743


//! SandPile.ulam:32:   Void behave(){
  template<class EC>
  void Ue_102338SandPile10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! SandPile.ulam:33:     if (isSeed) value += 173;
    {

//! SandPile.ulam:33:     if (isSeed) value += 173;
      const u32 Uh_5tlreg42413 = UlamRef<EC>(ur, 32u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      if(_Bool32ToCbool(Uh_5tlreg42413, 1)) //gcnl:NodeControl.cpp:213
      {

//! SandPile.ulam:33:     if (isSeed) value += 173;
          const u32 Uh_5tlreg42414 = 173; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42415 = _Int32ToUnsigned32(Uh_5tlreg42414, 9, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42417 = UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
          const u32 Uh_5tlreg42418 = _BinOpAddUnsigned32(Uh_5tlreg42417, Uh_5tlreg42415, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
          UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42418); //gcnl:Node.cpp:898
      } // end if
    }

//! SandPile.ulam:34:     if (value > 4u){
    {

//! SandPile.ulam:34:     if (value > 4u){
      const u32 Uh_5tlreg42419 = 4u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42420 = _Unsigned32ToUnsigned32(Uh_5tlreg42419, 3, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42422 = UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      const u32 Uh_5tlreg42423 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg42422, Uh_5tlreg42420, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42423, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SandPile.ulam:35:       Unsigned(32) rem = value%(4u);
          const u32 Uh_5tlreg42424 = 4u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42425 = _Unsigned32ToUnsigned32(Uh_5tlreg42424, 3, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42427 = UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
          const u32 Uh_5tlreg42428 = _BinOpModUnsigned32(Uh_5tlreg42427, Uh_5tlreg42425, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42429 = _Unsigned32ToUnsigned32(Uh_5tlreg42428, 32, 3); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42430 = _Unsigned32ToUnsigned32(Uh_5tlreg42429, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uv_3rem(Uh_5tlreg42430); //gcnl:NodeVarDecl.cpp:1095

//! SandPile.ulam:36:       Unsigned(32) spill = (value - rem)/4u;
          const u32 Uh_5tlreg42431 = 4u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42432 = _Unsigned32ToUnsigned32(Uh_5tlreg42431, 3, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42434 = Uv_3rem.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg42436 = UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
          const u32 Uh_5tlreg42437 = _BinOpSubtractUnsigned32(Uh_5tlreg42436, Uh_5tlreg42434, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42438 = _BinOpDivideUnsigned32(Uh_5tlreg42437, Uh_5tlreg42432, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_5spill(Uh_5tlreg42438); //gcnl:NodeVarDecl.cpp:1095

//! SandPile.ulam:37:       for (Unsigned(6) i = 0u; i < 5u; i++){
          {

//! SandPile.ulam:37:       for (Unsigned(6) i = 0u; i < 5u; i++){
            const u32 Uh_5tlreg42439 = 0u; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42440 = _Unsigned32ToUnsigned32(Uh_5tlreg42439, 1, 6); //gcnl:NodeCast.cpp:748
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg42440); //gcnl:NodeVarDecl.cpp:1095

//! SandPile.ulam:37:       for (Unsigned(6) i = 0u; i < 5u; i++){
            while(true)
            {
              const u32 Uh_5tlreg42441 = 5u; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42442 = _Unsigned32ToUnsigned32(Uh_5tlreg42441, 3, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42444 = Uv_1i.read(); //gcnl:Node.cpp:704
              const u32 Uh_5tlreg42445 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42444, Uh_5tlreg42442, 6); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg42445, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! SandPile.ulam:37:       for (Unsigned(6) i = 0u; i < 5u; i++){
              {

//! SandPile.ulam:38:         if (ew[i] is SandPile){
                {

//! SandPile.ulam:38:         if (ew[i] is SandPile){
                  UlamRef<EC> Uh_3tur42447(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                  const u32 Uh_5tlreg42449 = Uv_1i.read(); //gcnl:Node.cpp:704
                  Ui_Ut_10161u<EC> Uh_5tlval42450(Uh_5tlreg42449); //gcnl:Node.cpp:1148
                  Ui_Ut_r102961a<EC> Uh_5tuval42452 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42447, Uh_5tlval42450); //gcnl:NodeFunctionCall.cpp:1043
                  const u32 Uh_5tlreg42453 = Ue_102338SandPile10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval42452.read()); //gcnl:NodeConditionalIs.cpp:285
                  if(_Bool32ToCbool(Uh_5tlreg42453, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! SandPile.ulam:39:           SandPile sp = (SandPile) ew[i];
                      UlamRef<EC> Uh_3tur42455(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg42457 = Uv_1i.read(); //gcnl:Node.cpp:704
                      Ui_Ut_10161u<EC> Uh_5tlval42458(Uh_5tlreg42457); //gcnl:Node.cpp:1148
                      Ui_Ut_r102961a<EC> Uh_5tuval42460 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42455, Uh_5tlval42458); //gcnl:NodeFunctionCall.cpp:1043
                      if(!Ue_102338SandPile10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval42460.ReadAtom())) //gcnl:NodeCast.cpp:872
                        FAIL(BAD_CAST); //gcnl:NodeCast.cpp:876
                      Ui_Ue_102338SandPile10<EC> Uv_2sp(Uh_5tuval42460.read()); //gcnl:NodeVarDecl.cpp:1095

//! SandPile.ulam:40:           sp.value += spill;
                      const u32 Uh_5tlreg42462 = Uv_5spill.read(); //gcnl:Node.cpp:704
                      const u32 Uh_5tlreg42465 = UlamRef<EC>(25u, 32u, Uv_2sp, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:704
                      const u32 Uh_5tlreg42466 = _BinOpAddUnsigned32(Uh_5tlreg42465, Uh_5tlreg42462, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
                      UlamRef<EC>(25u, 32u, Uv_2sp, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg42466); //gcnl:Node.cpp:898

//! SandPile.ulam:41:           ew[i] = sp;
                      const T Uh_3tut42468 = Uv_2sp.read(); //gcnl:Node.cpp:704
                      UlamRef<EC> Uh_3tur42470(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg42472 = Uv_1i.read(); //gcnl:Node.cpp:704
                      Ui_Ut_10161u<EC> Uh_5tlval42473(Uh_5tlreg42472); //gcnl:Node.cpp:1148
                      Ui_Ut_r102961a<EC> Uh_5tuval42475 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42470, Uh_5tlval42473); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval42475.WriteAtom(Uh_3tut42468); //write into atomof ref //gcnl:Node.cpp:998
                    }
                  } // end if
                  else
                  {
                    {

//! SandPile.ulam:44:           SandPile sp = SandPile.instanceof;
                      Ui_Ue_102338SandPile10<EC> Uh_5tuval42476; //gcnl:NodeInstanceof.cpp:113
                      Ui_Ue_102338SandPile10<EC> Uv_2sp(Uh_5tuval42476); //gcnl:NodeVarDecl.cpp:1095

//! SandPile.ulam:45:           sp.isSeed = false;
                      const u32 Uh_5tlreg42477 = 0u; //gcnl:NodeTerminal.cpp:690
                      UlamRef<EC>(57u, 1u, Uv_2sp, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg42477); //gcnl:Node.cpp:898

//! SandPile.ulam:46:           sp.value += spill;
                      const u32 Uh_5tlreg42481 = Uv_5spill.read(); //gcnl:Node.cpp:704
                      const u32 Uh_5tlreg42484 = UlamRef<EC>(25u, 32u, Uv_2sp, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:704
                      const u32 Uh_5tlreg42485 = _BinOpAddUnsigned32(Uh_5tlreg42484, Uh_5tlreg42481, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
                      UlamRef<EC>(25u, 32u, Uv_2sp, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg42485); //gcnl:Node.cpp:898

//! SandPile.ulam:47:           ew[i] = sp;
                      const T Uh_3tut42487 = Uv_2sp.read(); //gcnl:Node.cpp:704
                      UlamRef<EC> Uh_3tur42489(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg42491 = Uv_1i.read(); //gcnl:Node.cpp:704
                      Ui_Ut_10161u<EC> Uh_5tlval42492(Uh_5tlreg42491); //gcnl:Node.cpp:1148
                      Ui_Ut_r102961a<EC> Uh_5tuval42494 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42489, Uh_5tlval42492); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval42494.WriteAtom(Uh_3tut42487); //write into atomof ref //gcnl:Node.cpp:998
                    }
                  } //end else
                }
              }

//! SandPile.ulam:37:       for (Unsigned(6) i = 0u; i < 5u; i++){
Ul_214endcontrolloop221:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! SandPile.ulam:37:       for (Unsigned(6) i = 0u; i < 5u; i++){
              const u32 Uh_5tlreg42495 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42496 = _Int32ToUnsigned32(Uh_5tlreg42495, 32, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42498 = Uv_1i.read(); //gcnl:Node.cpp:704
              const u32 Uh_5tlreg42499 = _BinOpAddUnsigned32(Uh_5tlreg42498, Uh_5tlreg42496, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1i.write(Uh_5tlreg42499); //gcnl:Node.cpp:898
            } // end while //gcnl:NodeControlWhile.cpp:145
          }

//! SandPile.ulam:50:       value = rem;       
          const u32 Uh_5tlreg42501 = Uv_3rem.read(); //gcnl:Node.cpp:704
          UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42501); //gcnl:Node.cpp:898
        }
      } // end if
    }

  } // Uf_6behave



//! SandPile.ulam:8:   ARGB getColor(Unsigned selector){
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102338SandPile10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! SandPile.ulam:9:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1132

//! SandPile.ulam:10:     ARGB ret=cu.color(0xff00ff00u);
    UlamRef<EC> Uh_3tur42504(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42505 = 4278255360u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval42506(Uh_5tlreg42505); //gcnl:Node.cpp:1148
    const Ui_Ut_14181u<EC> Uh_5tlval42508 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur42504, Uh_5tlval42506); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42509 = Uh_5tlval42508.read(); //gcnl:Node.cpp:1176
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42509); //gcnl:NodeVarDecl.cpp:1095

//! SandPile.ulam:12:     ret[1] = 64u;
    const u32 Uh_5tlreg42510 = 64u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42511 = _Unsigned32ToUnsigned32(Uh_5tlreg42510, 7, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42512 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42512 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42514(Uv_3ret, Uh_5tlreg42512 * 8u + 0u, uc); //gcnl:Node.cpp:1323
    Uh_6tlref42514.write(Uh_5tlreg42511);

//! SandPile.ulam:13:     ret[2] = 0u;
    const u32 Uh_5tlreg42515 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42516 = _Unsigned32ToUnsigned32(Uh_5tlreg42515, 1, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42517 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42517 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42519(Uv_3ret, Uh_5tlreg42517 * 8u + 0u, uc); //gcnl:Node.cpp:1323
    Uh_6tlref42519.write(Uh_5tlreg42516);

//! SandPile.ulam:14:     ret[3] = 0u;
    const u32 Uh_5tlreg42520 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42521 = _Unsigned32ToUnsigned32(Uh_5tlreg42520, 1, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg42522 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42522 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42524(Uv_3ret, Uh_5tlreg42522 * 8u + 0u, uc); //gcnl:Node.cpp:1323
    Uh_6tlref42524.write(Uh_5tlreg42521);

//! SandPile.ulam:16:     if (value%4u > 0u){ 
    {

//! SandPile.ulam:16:     if (value%4u > 0u){ 
      const u32 Uh_5tlreg42525 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42526 = _Unsigned32ToUnsigned32(Uh_5tlreg42525, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42527 = 4u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42528 = _Unsigned32ToUnsigned32(Uh_5tlreg42527, 3, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42530 = UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      const u32 Uh_5tlreg42531 = _BinOpModUnsigned32(Uh_5tlreg42530, Uh_5tlreg42528, 32); //gcnl:NodeBinaryOp.cpp:805
      const u32 Uh_5tlreg42532 = _Unsigned32ToUnsigned32(Uh_5tlreg42531, 32, 3); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42533 = _Unsigned32ToUnsigned32(Uh_5tlreg42532, 3, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42534 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg42533, Uh_5tlreg42526, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42534, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SandPile.ulam:17:       ret[1] = 128u;
          const u32 Uh_5tlreg42535 = 128u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42536 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42536 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42538(Uv_3ret, Uh_5tlreg42536 * 8u + 0u, uc); //gcnl:Node.cpp:1323
          Uh_6tlref42538.write(Uh_5tlreg42535);

//! SandPile.ulam:18:       ret[2] = 128u;
          const u32 Uh_5tlreg42539 = 128u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42540 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42540 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42542(Uv_3ret, Uh_5tlreg42540 * 8u + 0u, uc); //gcnl:Node.cpp:1323
          Uh_6tlref42542.write(Uh_5tlreg42539);
        }
      } // end if
    }

//! SandPile.ulam:20:     if (value%4u > 1u){
    {

//! SandPile.ulam:20:     if (value%4u > 1u){
      const u32 Uh_5tlreg42543 = 1u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42544 = _Unsigned32ToUnsigned32(Uh_5tlreg42543, 1, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42545 = 4u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42546 = _Unsigned32ToUnsigned32(Uh_5tlreg42545, 3, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42548 = UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      const u32 Uh_5tlreg42549 = _BinOpModUnsigned32(Uh_5tlreg42548, Uh_5tlreg42546, 32); //gcnl:NodeBinaryOp.cpp:805
      const u32 Uh_5tlreg42550 = _Unsigned32ToUnsigned32(Uh_5tlreg42549, 32, 3); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42551 = _Unsigned32ToUnsigned32(Uh_5tlreg42550, 3, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42552 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg42551, Uh_5tlreg42544, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42552, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SandPile.ulam:21:       ret[1] = 0u;
          const u32 Uh_5tlreg42553 = 0u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42554 = _Unsigned32ToUnsigned32(Uh_5tlreg42553, 1, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42555 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42555 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42557(Uv_3ret, Uh_5tlreg42555 * 8u + 0u, uc); //gcnl:Node.cpp:1323
          Uh_6tlref42557.write(Uh_5tlreg42554);

//! SandPile.ulam:22:       ret[2] = 192u;
          const u32 Uh_5tlreg42558 = 192u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42559 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42559 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42561(Uv_3ret, Uh_5tlreg42559 * 8u + 0u, uc); //gcnl:Node.cpp:1323
          Uh_6tlref42561.write(Uh_5tlreg42558);
        }
      } // end if
    }

//! SandPile.ulam:24:     if (value%4u > 2u) {
    {

//! SandPile.ulam:24:     if (value%4u > 2u) {
      const u32 Uh_5tlreg42562 = 2u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42563 = _Unsigned32ToUnsigned32(Uh_5tlreg42562, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42564 = 4u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42565 = _Unsigned32ToUnsigned32(Uh_5tlreg42564, 3, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42567 = UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      const u32 Uh_5tlreg42568 = _BinOpModUnsigned32(Uh_5tlreg42567, Uh_5tlreg42565, 32); //gcnl:NodeBinaryOp.cpp:805
      const u32 Uh_5tlreg42569 = _Unsigned32ToUnsigned32(Uh_5tlreg42568, 32, 3); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42570 = _Unsigned32ToUnsigned32(Uh_5tlreg42569, 3, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42571 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg42570, Uh_5tlreg42563, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42571, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! SandPile.ulam:25:       ret[2] = 0u;
          const u32 Uh_5tlreg42572 = 0u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42573 = _Unsigned32ToUnsigned32(Uh_5tlreg42572, 1, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42574 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42574 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42576(Uv_3ret, Uh_5tlreg42574 * 8u + 0u, uc); //gcnl:Node.cpp:1323
          Uh_6tlref42576.write(Uh_5tlreg42573);

//! SandPile.ulam:26:       ret[3] = 255u;
          const u32 Uh_5tlreg42577 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42578 = 3; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42578 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42580(Uv_3ret, Uh_5tlreg42578 * 8u + 0u, uc); //gcnl:Node.cpp:1323
          Uh_6tlref42580.write(Uh_5tlreg42577);
        }
      } // end if
    }

//! SandPile.ulam:29:     return ret;
    const u32 Uh_5tlreg42582 = Uv_3ret.read(); //gcnl:Node.cpp:704
    Ui_Ut_14181u<EC> Uh_5tlval42583(Uh_5tlreg42582); //gcnl:Node.cpp:1148
    return (Uh_5tlval42583); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102338SandPile10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 1: { static UlamClassDataMemberInfo i("Ut_102321u", "value", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 2: { static UlamClassDataMemberInfo i("Ut_10111b", "isSeed", 32u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102338SandPile10<EC>::GetDataMemberCount() const
  {
    return 3; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102338SandPile10<EC>::GetMangledClassName() const
  {
    return "Ue_102338SandPile10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102338SandPile10<EC>::GetClassLength( ) const
  {
    return 33; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102338SandPile10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102338SandPile10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102338SandPile10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x0, 0x40, 0x0 }; //gcnl:CompilerState.cpp:1395
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      //correct runtime regnum for strings
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102338SandPile10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102338SandPile10<EC>::Uf_6behave10) &Ue_102338SandPile10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102338SandPile10<EC>::Uf_8getColor11102321u) &Ue_102338SandPile10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102338SandPile10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102338SandPile10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102338SandPile10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102338SandPile10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102338SandPile10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102338SandPile10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

