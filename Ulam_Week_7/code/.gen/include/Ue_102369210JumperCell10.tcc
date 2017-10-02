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
      UlamRef<EC> Uh_3tur42757(ur, 35u, 1u, &Uq_10114Once10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const Ui_Ut_10111b<EC> Uh_5tlval42759 = Uq_10115OnceT11102151y10<EC>::THE_INSTANCE.Uf_3new(uc, Uh_3tur42757); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg42760 = Uh_5tlval42759.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg42760, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! JumperCell.ulam:37: 			moveType = (SiteNum)rm.between(5, 8);
          UlamRef<EC> Uh_3tur42762(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg42763 = 5; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42764 = _Int32ToInt32(Uh_5tlreg42763, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42765(Uh_5tlreg42764); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg42766 = 8; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42767 = _Int32ToInt32(Uh_5tlreg42766, 5, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42768(Uh_5tlreg42767); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval42770 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42762, Uh_5tlval42765, Uh_5tlval42768); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42771 = Uh_5tlval42770.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg42772 = _Int32ToUnsigned32(Uh_5tlreg42771, 32, 6); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42772); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! JumperCell.ulam:39: 		if (active){
    {

//! JumperCell.ulam:39: 		if (active){
      const u32 Uh_5tlreg42775 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg42775, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! JumperCell.ulam:40: 			checkBonds();
          Uq_102294Bond10<EC>::THE_INSTANCE.Uf_9210checkBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! JumperCell.ulam:41: 			findBonds();
          Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919findBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! JumperCell.ulam:42: 			moveTo(moveType);
          const u32 Uh_5tlreg42782 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          Ui_Ut_10161u<EC> Uh_5tlval42783(Uh_5tlreg42782); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval42785 = Uq_102294Bond10<EC>::THE_INSTANCE.Uf_6moveTo(uc, ur, Uh_5tlval42783); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42786 = Uh_5tlval42785.read(); //gcnl:Node.cpp:1170
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
    UlamRef<EC> Uh_3tur42790(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42791 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42792 = _Unsigned32ToUnsigned32(Uh_5tlreg42791, 1, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42793(Uh_5tlreg42792); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42795 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur42790, Uh_5tlval42793); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42796 = Uh_5tlval42795.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42796); //gcnl:NodeVarDecl.cpp:1081

//! JumperCell.ulam:25:     if (moveType == 5 || moveType == 6) ret[1] = (Byte)(bondCount*63);
    {

//! JumperCell.ulam:25:     if (moveType == 5 || moveType == 6) ret[1] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42797 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42798 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42799 = _Int32ToInt32(Uh_5tlreg42798, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42801 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42802 = _Unsigned32ToInt32(Uh_5tlreg42801, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42803 = _BinOpCompareEqEqInt32(Uh_5tlreg42802, Uh_5tlreg42799, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42803, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42804 = 6; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42805 = _Int32ToInt32(Uh_5tlreg42804, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42807 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42808 = _Unsigned32ToInt32(Uh_5tlreg42807, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42809 = _BinOpCompareEqEqInt32(Uh_5tlreg42808, Uh_5tlreg42805, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42797 = Uh_5tlreg42809; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42797 = Uh_5tlreg42803; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42797, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:25:     if (moveType == 5 || moveType == 6) ret[1] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42810 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42811 = _Int32ToInt32(Uh_5tlreg42810, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42813 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42814 = _Unsigned32ToInt32(Uh_5tlreg42813, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42815 = _BinOpMultiplyInt32(Uh_5tlreg42814, Uh_5tlreg42811, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42816 = _Int32ToUnsigned32(Uh_5tlreg42815, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42817 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42817 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42819(Uv_3ret, Uh_5tlreg42817 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42819.write(Uh_5tlreg42816);
      } // end if
    }

//! JumperCell.ulam:26:     if (moveType == 8) ret[1] = (Byte)(bondCount*31);
    {

//! JumperCell.ulam:26:     if (moveType == 8) ret[1] = (Byte)(bondCount*31);
      const u32 Uh_5tlreg42820 = 8; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42821 = _Int32ToInt32(Uh_5tlreg42820, 5, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42823 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42824 = _Unsigned32ToInt32(Uh_5tlreg42823, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42825 = _BinOpCompareEqEqInt32(Uh_5tlreg42824, Uh_5tlreg42821, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42825, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:26:     if (moveType == 8) ret[1] = (Byte)(bondCount*31);
          const u32 Uh_5tlreg42826 = 31; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42827 = _Int32ToInt32(Uh_5tlreg42826, 6, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42829 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42830 = _Unsigned32ToInt32(Uh_5tlreg42829, 3, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42831 = _BinOpMultiplyInt32(Uh_5tlreg42830, Uh_5tlreg42827, 10); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42832 = _Int32ToUnsigned32(Uh_5tlreg42831, 10, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42833 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42833 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42835(Uv_3ret, Uh_5tlreg42833 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42835.write(Uh_5tlreg42832);
      } // end if
    }

//! JumperCell.ulam:27:     if (moveType == 5 || moveType == 7) ret[2] = (Byte)(bondCount*31);
    {

//! JumperCell.ulam:27:     if (moveType == 5 || moveType == 7) ret[2] = (Byte)(bondCount*31);
      u32 Uh_5tlreg42836 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42837 = 5; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42838 = _Int32ToInt32(Uh_5tlreg42837, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42840 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42841 = _Unsigned32ToInt32(Uh_5tlreg42840, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42842 = _BinOpCompareEqEqInt32(Uh_5tlreg42841, Uh_5tlreg42838, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42842, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42843 = 7; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42844 = _Int32ToInt32(Uh_5tlreg42843, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42846 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42847 = _Unsigned32ToInt32(Uh_5tlreg42846, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42848 = _BinOpCompareEqEqInt32(Uh_5tlreg42847, Uh_5tlreg42844, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42836 = Uh_5tlreg42848; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42836 = Uh_5tlreg42842; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42836, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:27:     if (moveType == 5 || moveType == 7) ret[2] = (Byte)(bondCount*31);
          const u32 Uh_5tlreg42849 = 31; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42850 = _Int32ToInt32(Uh_5tlreg42849, 6, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42852 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42853 = _Unsigned32ToInt32(Uh_5tlreg42852, 3, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42854 = _BinOpMultiplyInt32(Uh_5tlreg42853, Uh_5tlreg42850, 10); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42855 = _Int32ToUnsigned32(Uh_5tlreg42854, 10, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42856 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42856 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42858(Uv_3ret, Uh_5tlreg42856 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42858.write(Uh_5tlreg42855);
      } // end if
    }

//! JumperCell.ulam:28:     if (moveType == 8) ret[2] = (Byte)(bondCount*63);
    {

//! JumperCell.ulam:28:     if (moveType == 8) ret[2] = (Byte)(bondCount*63);
      const u32 Uh_5tlreg42859 = 8; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42860 = _Int32ToInt32(Uh_5tlreg42859, 5, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42862 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42863 = _Unsigned32ToInt32(Uh_5tlreg42862, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42864 = _BinOpCompareEqEqInt32(Uh_5tlreg42863, Uh_5tlreg42860, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42864, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:28:     if (moveType == 8) ret[2] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42865 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42866 = _Int32ToInt32(Uh_5tlreg42865, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42868 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42869 = _Unsigned32ToInt32(Uh_5tlreg42868, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42870 = _BinOpMultiplyInt32(Uh_5tlreg42869, Uh_5tlreg42866, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42871 = _Int32ToUnsigned32(Uh_5tlreg42870, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42872 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42872 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42874(Uv_3ret, Uh_5tlreg42872 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42874.write(Uh_5tlreg42871);
      } // end if
    }

//! JumperCell.ulam:30:     if (moveType == 7) ret[3] = (Byte)(bondCount*63);
    {

//! JumperCell.ulam:30:     if (moveType == 7) ret[3] = (Byte)(bondCount*63);
      const u32 Uh_5tlreg42875 = 7; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42876 = _Int32ToInt32(Uh_5tlreg42875, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42878 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42879 = _Unsigned32ToInt32(Uh_5tlreg42878, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42880 = _BinOpCompareEqEqInt32(Uh_5tlreg42879, Uh_5tlreg42876, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42880, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:30:     if (moveType == 7) ret[3] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42881 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42882 = _Int32ToInt32(Uh_5tlreg42881, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42884 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42885 = _Unsigned32ToInt32(Uh_5tlreg42884, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42886 = _BinOpMultiplyInt32(Uh_5tlreg42885, Uh_5tlreg42882, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42887 = _Int32ToUnsigned32(Uh_5tlreg42886, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42888 = 3; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42888 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42890(Uv_3ret, Uh_5tlreg42888 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42890.write(Uh_5tlreg42887);
      } // end if
    }

//! JumperCell.ulam:31:     if (moveType == 6) ret[2] = (Byte)(bondCount*31);
    {

//! JumperCell.ulam:31:     if (moveType == 6) ret[2] = (Byte)(bondCount*31);
      const u32 Uh_5tlreg42891 = 6; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42892 = _Int32ToInt32(Uh_5tlreg42891, 4, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42894 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42895 = _Unsigned32ToInt32(Uh_5tlreg42894, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42896 = _BinOpCompareEqEqInt32(Uh_5tlreg42895, Uh_5tlreg42892, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42896, 1)) //gcnl:NodeControl.cpp:213
      {

//! JumperCell.ulam:31:     if (moveType == 6) ret[2] = (Byte)(bondCount*31);
          const u32 Uh_5tlreg42897 = 31; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42898 = _Int32ToInt32(Uh_5tlreg42897, 6, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42900 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42901 = _Unsigned32ToInt32(Uh_5tlreg42900, 3, 10); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42902 = _BinOpMultiplyInt32(Uh_5tlreg42901, Uh_5tlreg42898, 10); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42903 = _Int32ToUnsigned32(Uh_5tlreg42902, 10, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42904 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42904 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42906(Uv_3ret, Uh_5tlreg42904 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42906.write(Uh_5tlreg42903);
      } // end if
    }

//! JumperCell.ulam:32:     return ret;
    const u32 Uh_5tlreg42908 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42909(Uh_5tlreg42908); //gcnl:Node.cpp:1142
    return (Uh_5tlval42909); //gcnl:NodeReturnStatement.cpp:343

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
      const Ui_Uq_10114Once10<EC> Uh_5tlreg42910; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg42911(Uh_5tlreg42910.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(60u, 1, Uh_5tlreg42911); //Um_4once //gcnl:NodeVarDeclDM.cpp:832
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

