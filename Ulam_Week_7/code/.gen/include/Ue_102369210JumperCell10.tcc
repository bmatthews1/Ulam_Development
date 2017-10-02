/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_102294Bond10.h"
#include "Uq_10106Random10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10114Once10.h"
#include "Uq_10109210ColorUtils10.h"

namespace MFM{

  template<class EC>
  Ue_102369210JumperCell10<EC>::Ue_102369210JumperCell10() : UlamElement<EC>(MFM_UUID_FOR("Ue102369210JumperCell10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("J");  // figure this out later
    Element<EC>::SetName("JumperCell"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102369210JumperCell10<EC>::~Ue_102369210JumperCell10(){} //gcnl:NodeBlockClass.cpp:1743


//! JumperCell.ulam:35: 	Void behave(){
  template<class EC>
  void Ue_102369210JumperCell10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! JumperCell.ulam:36: 		if (once.new()){
    {

//! JumperCell.ulam:36: 		if (once.new()){
      UlamRef<EC> Uh_3tur42526(ur, 35u, 1u, &Uq_10114Once10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const Ui_Ut_10111b<EC> Uh_5tlval42528 = Uq_10115OnceT11102151y10<EC>::THE_INSTANCE.Uf_3new(uc, Uh_3tur42526); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg42529 = Uh_5tlval42528.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg42529, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! JumperCell.ulam:37: 			moveType = (SiteNum)rm.between(5, 8);
          UlamRef<EC> Uh_3tur42531(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg42532 = 5; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42533 = _Int32ToInt32(Uh_5tlreg42532, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42534(Uh_5tlreg42533); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg42535 = 8; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42536 = _Int32ToInt32(Uh_5tlreg42535, 5, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42537(Uh_5tlreg42536); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval42539 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42531, Uh_5tlval42534, Uh_5tlval42537); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42540 = Uh_5tlval42539.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg42541 = _Int32ToUnsigned32(Uh_5tlreg42540, 32, 6); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42541); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! JumperCell.ulam:39: 		if (active){
    {

//! JumperCell.ulam:39: 		if (active){
      const u32 Uh_5tlreg42544 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg42544, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! JumperCell.ulam:40: 			checkBonds();
          Uq_102294Bond10<EC>::THE_INSTANCE.Uf_9210checkBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! JumperCell.ulam:41: 			findBonds();
          Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919findBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! JumperCell.ulam:42: 			moveTo(moveType);
          const u32 Uh_5tlreg42551 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          Ui_Ut_10161u<EC> Uh_5tlval42552(Uh_5tlreg42551); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval42554 = Uq_102294Bond10<EC>::THE_INSTANCE.Uf_6moveTo(uc, ur, Uh_5tlval42552); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42555 = Uh_5tlval42554.read(); //gcnl:Node.cpp:1170
        }
      } // end if
    }

//! JumperCell.ulam:44: 		drawBonds();
    Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919drawBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_6behave



//! JumperCell.ulam:22:   ARGB getColor(Unsigned selector) {
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102369210JumperCell10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! JumperCell.ulam:23:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! JumperCell.ulam:24:     ARGB ret = cu.color(0x00000000U);
    UlamRef<EC> Uh_3tur42559(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42560 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42561 = _Unsigned32ToUnsigned32(Uh_5tlreg42560, 1, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42562(Uh_5tlreg42561); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42564 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur42559, Uh_5tlval42562); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42565 = Uh_5tlval42564.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42565); //gcnl:NodeVarDecl.cpp:1081

//! JumperCell.ulam:25:     if (moveType == 5 || moveType == 6) ret[1] = (Byte)(bondCount*63);
    {

//! JumperCell.ulam:25:     if (moveType == 5 || moveType == 6) ret[1] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42566 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42567 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42568 = _Int32ToInt32(Uh_5tlreg42567, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42570 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42571 = _Unsigned32ToInt32(Uh_5tlreg42570, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42572 = _BinOpCompareEqEqInt32(Uh_5tlreg42571, Uh_5tlreg42568, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42572, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42573 = 6; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42574 = _Int32ToInt32(Uh_5tlreg42573, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42576 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42577 = _Unsigned32ToInt32(Uh_5tlreg42576, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42578 = _BinOpCompareEqEqInt32(Uh_5tlreg42577, Uh_5tlreg42574, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42566 = Uh_5tlreg42578; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42566 = Uh_5tlreg42572; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42566, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:25:     if (moveType == 5 || moveType == 6) ret[1] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42579 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42580 = _Int32ToInt32(Uh_5tlreg42579, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42582 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42583 = _Unsigned32ToInt32(Uh_5tlreg42582, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42584 = _BinOpMultiplyInt32(Uh_5tlreg42583, Uh_5tlreg42580, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42585 = _Int32ToUnsigned32(Uh_5tlreg42584, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42586 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42586 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42588(Uv_3ret, Uh_5tlreg42586 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42588.write(Uh_5tlreg42585);
      } // end if
    }

//! JumperCell.ulam:26:     if (moveType == 8) ret[1] = (Byte)(bondCount*31);
    {

//! JumperCell.ulam:26:     if (moveType == 8) ret[1] = (Byte)(bondCount*31);
      const u32 Uh_5tlreg42589 = 8; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42590 = _Int32ToInt32(Uh_5tlreg42589, 5, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42592 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42593 = _Unsigned32ToInt32(Uh_5tlreg42592, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42594 = _BinOpCompareEqEqInt32(Uh_5tlreg42593, Uh_5tlreg42590, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42594, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:26:     if (moveType == 8) ret[1] = (Byte)(bondCount*31);
          const u32 Uh_5tlreg42595 = 31; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42596 = _Int32ToInt32(Uh_5tlreg42595, 6, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42598 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42599 = _Unsigned32ToInt32(Uh_5tlreg42598, 3, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42600 = _BinOpMultiplyInt32(Uh_5tlreg42599, Uh_5tlreg42596, 10); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42601 = _Int32ToUnsigned32(Uh_5tlreg42600, 10, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42602 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42602 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42604(Uv_3ret, Uh_5tlreg42602 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42604.write(Uh_5tlreg42601);
      } // end if
    }

//! JumperCell.ulam:27:     if (moveType == 5 || moveType == 7) ret[2] = (Byte)(bondCount*31);
    {

//! JumperCell.ulam:27:     if (moveType == 5 || moveType == 7) ret[2] = (Byte)(bondCount*31);
      u32 Uh_5tlreg42605 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42606 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42607 = _Int32ToInt32(Uh_5tlreg42606, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42609 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42610 = _Unsigned32ToInt32(Uh_5tlreg42609, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42611 = _BinOpCompareEqEqInt32(Uh_5tlreg42610, Uh_5tlreg42607, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42611, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42612 = 7; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42613 = _Int32ToInt32(Uh_5tlreg42612, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42615 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42616 = _Unsigned32ToInt32(Uh_5tlreg42615, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42617 = _BinOpCompareEqEqInt32(Uh_5tlreg42616, Uh_5tlreg42613, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42605 = Uh_5tlreg42617; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42605 = Uh_5tlreg42611; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42605, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:27:     if (moveType == 5 || moveType == 7) ret[2] = (Byte)(bondCount*31);
          const u32 Uh_5tlreg42618 = 31; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42619 = _Int32ToInt32(Uh_5tlreg42618, 6, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42621 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42622 = _Unsigned32ToInt32(Uh_5tlreg42621, 3, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42623 = _BinOpMultiplyInt32(Uh_5tlreg42622, Uh_5tlreg42619, 10); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42624 = _Int32ToUnsigned32(Uh_5tlreg42623, 10, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42625 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42625 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42627(Uv_3ret, Uh_5tlreg42625 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42627.write(Uh_5tlreg42624);
      } // end if
    }

//! JumperCell.ulam:28:     if (moveType == 8) ret[2] = (Byte)(bondCount*63);
    {

//! JumperCell.ulam:28:     if (moveType == 8) ret[2] = (Byte)(bondCount*63);
      const u32 Uh_5tlreg42628 = 8; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42629 = _Int32ToInt32(Uh_5tlreg42628, 5, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42631 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42632 = _Unsigned32ToInt32(Uh_5tlreg42631, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42633 = _BinOpCompareEqEqInt32(Uh_5tlreg42632, Uh_5tlreg42629, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42633, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:28:     if (moveType == 8) ret[2] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42634 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42635 = _Int32ToInt32(Uh_5tlreg42634, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42637 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42638 = _Unsigned32ToInt32(Uh_5tlreg42637, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42639 = _BinOpMultiplyInt32(Uh_5tlreg42638, Uh_5tlreg42635, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42640 = _Int32ToUnsigned32(Uh_5tlreg42639, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42641 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42641 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42643(Uv_3ret, Uh_5tlreg42641 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42643.write(Uh_5tlreg42640);
      } // end if
    }

//! JumperCell.ulam:30:     if (moveType == 7) ret[3] = (Byte)(bondCount*63);
    {

//! JumperCell.ulam:30:     if (moveType == 7) ret[3] = (Byte)(bondCount*63);
      const u32 Uh_5tlreg42644 = 7; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42645 = _Int32ToInt32(Uh_5tlreg42644, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42647 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42648 = _Unsigned32ToInt32(Uh_5tlreg42647, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42649 = _BinOpCompareEqEqInt32(Uh_5tlreg42648, Uh_5tlreg42645, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42649, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:30:     if (moveType == 7) ret[3] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42650 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42651 = _Int32ToInt32(Uh_5tlreg42650, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42653 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42654 = _Unsigned32ToInt32(Uh_5tlreg42653, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42655 = _BinOpMultiplyInt32(Uh_5tlreg42654, Uh_5tlreg42651, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42656 = _Int32ToUnsigned32(Uh_5tlreg42655, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42657 = 3; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42657 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42659(Uv_3ret, Uh_5tlreg42657 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42659.write(Uh_5tlreg42656);
      } // end if
    }

//! JumperCell.ulam:31:     if (moveType == 6) ret[2] = (Byte)(bondCount*31);
    {

//! JumperCell.ulam:31:     if (moveType == 6) ret[2] = (Byte)(bondCount*31);
      const u32 Uh_5tlreg42660 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42661 = _Int32ToInt32(Uh_5tlreg42660, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42663 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42664 = _Unsigned32ToInt32(Uh_5tlreg42663, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42665 = _BinOpCompareEqEqInt32(Uh_5tlreg42664, Uh_5tlreg42661, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42665, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:31:     if (moveType == 6) ret[2] = (Byte)(bondCount*31);
          const u32 Uh_5tlreg42666 = 31; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42667 = _Int32ToInt32(Uh_5tlreg42666, 6, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42669 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42670 = _Unsigned32ToInt32(Uh_5tlreg42669, 3, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42671 = _BinOpMultiplyInt32(Uh_5tlreg42670, Uh_5tlreg42667, 10); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42672 = _Int32ToUnsigned32(Uh_5tlreg42671, 10, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42673 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42673 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42675(Uv_3ret, Uh_5tlreg42673 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42675.write(Uh_5tlreg42672);
      } // end if
    }

//! JumperCell.ulam:32:     return ret;
    const u32 Uh_5tlreg42677 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42678(Uh_5tlreg42677); //gcnl:Node.cpp:1142
    return (Uh_5tlval42678); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102369210JumperCell10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10111b", "active", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Ut_10131u", "bondCount", 1u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Ut_15151u", "bonds", 4u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 5: { static UlamClassDataMemberInfo i("Uq_10106Random10", "rm", 29u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 6: { static UlamClassDataMemberInfo i("Ut_10161u", "moveType", 29u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 7: { static UlamClassDataMemberInfo i("Uq_10114Once10", "once", 35u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102369210JumperCell10<EC>::GetDataMemberCount() const
  {
    return 8; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102369210JumperCell10<EC>::GetMangledClassName() const
  {
    return "Ue_102369210JumperCell10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102369210JumperCell10<EC>::GetClassLength( ) const
  {
    return 36; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102369210JumperCell10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102369210JumperCell10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102369210JumperCell10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x40, 0x0, 0x0 }; //gcnl:CompilerState.cpp:1395
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      //correct runtime regnum for strings
      const Ui_Uq_10114Once10<EC> Uh_5tlreg42679; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg42680(Uh_5tlreg42679.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(60u, 1, Uh_5tlreg42680); //Um_4once //gcnl:NodeVarDeclDM.cpp:832
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102369210JumperCell10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102369210JumperCell10<EC>::Uf_6behave10) &Ue_102369210JumperCell10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102369210JumperCell10<EC>::Uf_8getColor11102321u) &Ue_102369210JumperCell10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102369210JumperCell10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102369210JumperCell10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102294Bond10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102369210JumperCell10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102369210JumperCell10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102369210JumperCell10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102369210JumperCell10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

