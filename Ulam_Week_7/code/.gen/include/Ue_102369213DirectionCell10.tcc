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
  Ue_102369213DirectionCell10<EC>::Ue_102369213DirectionCell10() : UlamElement<EC>(MFM_UUID_FOR("Ue102369213DirectionCell10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("D");  // figure this out later
    Element<EC>::SetName("DirectionCell"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102369213DirectionCell10<EC>::~Ue_102369213DirectionCell10(){} //gcnl:NodeBlockClass.cpp:1743


//! DirectionCell.ulam:31: 	Void behave(){
  template<class EC>
  void Ue_102369213DirectionCell10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! DirectionCell.ulam:32: 		if (once.new()){
    {

//! DirectionCell.ulam:32: 		if (once.new()){
      UlamRef<EC> Uh_3tur42607(ur, 35u, 1u, &Uq_10114Once10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const Ui_Ut_10111b<EC> Uh_5tlval42609 = Uq_10115OnceT11102151y10<EC>::THE_INSTANCE.Uf_3new(uc, Uh_3tur42607); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg42610 = Uh_5tlval42609.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg42610, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DirectionCell.ulam:33: 			moveType = (SiteNum)rm.between(1, 4);
          UlamRef<EC> Uh_3tur42612(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg42613 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42614 = _Int32ToInt32(Uh_5tlreg42613, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42615(Uh_5tlreg42614); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg42616 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42617 = _Int32ToInt32(Uh_5tlreg42616, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42618(Uh_5tlreg42617); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval42620 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42612, Uh_5tlval42615, Uh_5tlval42618); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42621 = Uh_5tlval42620.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg42622 = _Int32ToUnsigned32(Uh_5tlreg42621, 32, 6); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42622); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! DirectionCell.ulam:35: 		if (active){
    {

//! DirectionCell.ulam:35: 		if (active){
      const u32 Uh_5tlreg42625 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg42625, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DirectionCell.ulam:36: 			findBonds();
          Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919findBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! DirectionCell.ulam:38: 			SiteNum s;
          Ui_Ut_10161u<EC> Uv_1s; //gcnl:NodeVarDecl.cpp:1118

//! DirectionCell.ulam:39: 			if (moveType == 0 || rm.oneIn(3)) s = (SiteNum)rm.between(1, 4);
          {

//! DirectionCell.ulam:39: 			if (moveType == 0 || rm.oneIn(3)) s = (SiteNum)rm.between(1, 4);
            u32 Uh_5tlreg42628 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg42629 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42630 = _Int32ToInt32(Uh_5tlreg42629, 2, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42632 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg42633 = _Unsigned32ToInt32(Uh_5tlreg42632, 6, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42634 = _BinOpCompareEqEqInt32(Uh_5tlreg42633, Uh_5tlreg42630, 7); //gcnl:NodeBinaryOpCompare.cpp:441
            if(!_Bool32ToCbool(Uh_5tlreg42634, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              UlamRef<EC> Uh_3tur42636(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
              const u32 Uh_5tlreg42637 = 3; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42638 = _Int32ToUnsigned32(Uh_5tlreg42637, 3, 32); //gcnl:NodeCast.cpp:748
              Ui_Ut_102321u<EC> Uh_5tlval42639(Uh_5tlreg42638); //gcnl:Node.cpp:1142
              const Ui_Ut_10111b<EC> Uh_5tlval42641 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur42636, Uh_5tlval42639); //gcnl:NodeFunctionCall.cpp:1043
              const u32 Uh_5tlreg42642 = Uh_5tlval42641.read(); //gcnl:Node.cpp:1170
              Uh_5tlreg42628 = Uh_5tlreg42642; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42628 = Uh_5tlreg42634; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg42628, 1)) //gcnl:NodeControl.cpp:213
            {

//! DirectionCell.ulam:39: 			if (moveType == 0 || rm.oneIn(3)) s = (SiteNum)rm.between(1, 4);
                UlamRef<EC> Uh_3tur42644(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg42645 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42646 = _Int32ToInt32(Uh_5tlreg42645, 2, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval42647(Uh_5tlreg42646); //gcnl:Node.cpp:1142
                const u32 Uh_5tlreg42648 = 4; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42649 = _Int32ToInt32(Uh_5tlreg42648, 4, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval42650(Uh_5tlreg42649); //gcnl:Node.cpp:1142
                const Ui_Ut_102321i<EC> Uh_5tlval42652 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42644, Uh_5tlval42647, Uh_5tlval42650); //gcnl:NodeFunctionCall.cpp:1043
                const u32 Uh_5tlreg42653 = Uh_5tlval42652.read(); //gcnl:Node.cpp:1170
                const u32 Uh_5tlreg42654 = _Int32ToUnsigned32(Uh_5tlreg42653, 32, 6); //gcnl:NodeCast.cpp:748
                Uv_1s.write(Uh_5tlreg42654); //gcnl:Node.cpp:892
            } // end if
            else
            {

//! DirectionCell.ulam:40: 			else SiteNum s = moveType;
                const u32 Uh_5tlreg42657 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42657); //gcnl:NodeVarDecl.cpp:1081
            } //end else
          }

//! DirectionCell.ulam:41: 			moveTo(s);
          const u32 Uh_5tlreg42660 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval42661(Uh_5tlreg42660); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval42663 = Uq_102294Bond10<EC>::THE_INSTANCE.Uf_6moveTo(uc, ur, Uh_5tlval42661); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42664 = Uh_5tlval42663.read(); //gcnl:Node.cpp:1170
        }
      } // end if
    }

//! DirectionCell.ulam:43: 		drawBonds();
    Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919drawBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_6behave



//! DirectionCell.ulam:22:   ARGB getColor(Unsigned selector) {
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102369213DirectionCell10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! DirectionCell.ulam:23:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! DirectionCell.ulam:24:     ARGB ret = cu.color(0x00000000U);
    UlamRef<EC> Uh_3tur42668(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42669 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42670 = _Unsigned32ToUnsigned32(Uh_5tlreg42669, 1, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42671(Uh_5tlreg42670); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42673 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur42668, Uh_5tlval42671); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42674 = Uh_5tlval42673.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42674); //gcnl:NodeVarDecl.cpp:1081

//! DirectionCell.ulam:25:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
    {

//! DirectionCell.ulam:25:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42675 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      u32 Uh_5tlreg42676 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42677 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42678 = _Int32ToInt32(Uh_5tlreg42677, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42680 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42681 = _Unsigned32ToInt32(Uh_5tlreg42680, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42682 = _BinOpCompareEqEqInt32(Uh_5tlreg42681, Uh_5tlreg42678, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42682, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42683 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42684 = _Int32ToInt32(Uh_5tlreg42683, 2, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42686 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42687 = _Unsigned32ToInt32(Uh_5tlreg42686, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42688 = _BinOpCompareEqEqInt32(Uh_5tlreg42687, Uh_5tlreg42684, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42676 = Uh_5tlreg42688; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42676 = Uh_5tlreg42682; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(!_Bool32ToCbool(Uh_5tlreg42676, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42689 = 2; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42690 = _Int32ToInt32(Uh_5tlreg42689, 3, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42692 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42693 = _Unsigned32ToInt32(Uh_5tlreg42692, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42694 = _BinOpCompareEqEqInt32(Uh_5tlreg42693, Uh_5tlreg42690, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42675 = Uh_5tlreg42694; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42675 = Uh_5tlreg42676; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42675, 1)) //gcnl:NodeControl.cpp:213
      {

//! DirectionCell.ulam:25:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42695 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42696 = _Int32ToInt32(Uh_5tlreg42695, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42698 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42699 = _Unsigned32ToInt32(Uh_5tlreg42698, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42700 = _BinOpMultiplyInt32(Uh_5tlreg42699, Uh_5tlreg42696, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42701 = _Int32ToUnsigned32(Uh_5tlreg42700, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42702 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42702 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42704(Uv_3ret, Uh_5tlreg42702 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42704.write(Uh_5tlreg42701);
      } // end if
    }

//! DirectionCell.ulam:26:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
    {

//! DirectionCell.ulam:26:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42705 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42706 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42707 = _Int32ToInt32(Uh_5tlreg42706, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42709 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42710 = _Unsigned32ToInt32(Uh_5tlreg42709, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42711 = _BinOpCompareEqEqInt32(Uh_5tlreg42710, Uh_5tlreg42707, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42711, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42712 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42713 = _Int32ToInt32(Uh_5tlreg42712, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42715 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42716 = _Unsigned32ToInt32(Uh_5tlreg42715, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42717 = _BinOpCompareEqEqInt32(Uh_5tlreg42716, Uh_5tlreg42713, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42705 = Uh_5tlreg42717; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42705 = Uh_5tlreg42711; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42705, 1)) //gcnl:NodeControl.cpp:213
      {

//! DirectionCell.ulam:26:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42718 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42719 = _Int32ToInt32(Uh_5tlreg42718, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42721 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42722 = _Unsigned32ToInt32(Uh_5tlreg42721, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42723 = _BinOpMultiplyInt32(Uh_5tlreg42722, Uh_5tlreg42719, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42724 = _Int32ToUnsigned32(Uh_5tlreg42723, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42725 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42725 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42727(Uv_3ret, Uh_5tlreg42725 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42727.write(Uh_5tlreg42724);
      } // end if
    }

//! DirectionCell.ulam:27:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
    {

//! DirectionCell.ulam:27:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42728 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42729 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42730 = _Int32ToInt32(Uh_5tlreg42729, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42732 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42733 = _Unsigned32ToInt32(Uh_5tlreg42732, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42734 = _BinOpCompareEqEqInt32(Uh_5tlreg42733, Uh_5tlreg42730, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42734, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42735 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42736 = _Int32ToInt32(Uh_5tlreg42735, 3, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42738 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42739 = _Unsigned32ToInt32(Uh_5tlreg42738, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42740 = _BinOpCompareEqEqInt32(Uh_5tlreg42739, Uh_5tlreg42736, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42728 = Uh_5tlreg42740; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42728 = Uh_5tlreg42734; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42728, 1)) //gcnl:NodeControl.cpp:213
      {

//! DirectionCell.ulam:27:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42741 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42742 = _Int32ToInt32(Uh_5tlreg42741, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42744 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42745 = _Unsigned32ToInt32(Uh_5tlreg42744, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42746 = _BinOpMultiplyInt32(Uh_5tlreg42745, Uh_5tlreg42742, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42747 = _Int32ToUnsigned32(Uh_5tlreg42746, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42748 = 3; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42748 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42750(Uv_3ret, Uh_5tlreg42748 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42750.write(Uh_5tlreg42747);
      } // end if
    }

//! DirectionCell.ulam:28:     return ret;
    const u32 Uh_5tlreg42752 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42753(Uh_5tlreg42752); //gcnl:Node.cpp:1142
    return (Uh_5tlval42753); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102369213DirectionCell10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
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
  s32 Ue_102369213DirectionCell10<EC>::GetDataMemberCount() const
  {
    return 8; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102369213DirectionCell10<EC>::GetMangledClassName() const
  {
    return "Ue_102369213DirectionCell10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102369213DirectionCell10<EC>::GetClassLength( ) const
  {
    return 36; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102369213DirectionCell10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102369213DirectionCell10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102369213DirectionCell10<EC>::BuildDefaultAtom( ) const
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
      const Ui_Uq_10114Once10<EC> Uh_5tlreg42754; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg42755(Uh_5tlreg42754.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(60u, 1, Uh_5tlreg42755); //Um_4once //gcnl:NodeVarDeclDM.cpp:832
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102369213DirectionCell10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102369213DirectionCell10<EC>::Uf_6behave10) &Ue_102369213DirectionCell10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102369213DirectionCell10<EC>::Uf_8getColor11102321u) &Ue_102369213DirectionCell10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102369213DirectionCell10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102369213DirectionCell10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102294Bond10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102369213DirectionCell10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102369213DirectionCell10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102369213DirectionCell10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102369213DirectionCell10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

