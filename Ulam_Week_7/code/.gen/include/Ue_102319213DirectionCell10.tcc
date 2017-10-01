/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_102244Bond10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10106Random10.h"
#include "Uq_10114Once10.h"
#include "Uq_10109210ColorUtils10.h"

namespace MFM{

  template<class EC>
  Ue_102319213DirectionCell10<EC>::Ue_102319213DirectionCell10() : UlamElement<EC>(MFM_UUID_FOR("Ue102319213DirectionCell10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("D");  // figure this out later
    Element<EC>::SetName("DirectionCell"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102319213DirectionCell10<EC>::~Ue_102319213DirectionCell10(){} //gcnl:NodeBlockClass.cpp:1743


//! DirectionCell.ulam:30: 	Void behave(){
  template<class EC>
  void Ue_102319213DirectionCell10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! DirectionCell.ulam:31: 		if (once.new()){
    {

//! DirectionCell.ulam:31: 		if (once.new()){
      UlamRef<EC> Uh_3tur41938(ur, 30u, 1u, &Uq_10114Once10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const Ui_Ut_10111b<EC> Uh_5tlval41940 = Uq_10115OnceT11102151y10<EC>::THE_INSTANCE.Uf_3new(uc, Uh_3tur41938); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41941 = Uh_5tlval41940.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg41941, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DirectionCell.ulam:32: 			moveType = (SiteNum)rm.between(1, 4);
          UlamRef<EC> Uh_3tur41943(ur, 24u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg41944 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41945 = _Int32ToInt32(Uh_5tlreg41944, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41946(Uh_5tlreg41945); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41947 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41948 = _Int32ToInt32(Uh_5tlreg41947, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval41949(Uh_5tlreg41948); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval41951 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur41943, Uh_5tlval41946, Uh_5tlval41949); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41952 = Uh_5tlval41951.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg41953 = _Int32ToUnsigned32(Uh_5tlreg41952, 32, 6); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41953); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! DirectionCell.ulam:34: 		if (active){
    {

//! DirectionCell.ulam:34: 		if (active){
      const u32 Uh_5tlreg41956 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg41956, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DirectionCell.ulam:35: 			findBonds();
          Uq_102244Bond10<EC>::THE_INSTANCE.Uf_919findBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! DirectionCell.ulam:37: 			SiteNum s;
          Ui_Ut_10161u<EC> Uv_1s; //gcnl:NodeVarDecl.cpp:1118

//! DirectionCell.ulam:38: 			if (moveType == 0 || rm.oneIn(20)) s = (SiteNum)rm.between(1, 4);
          {

//! DirectionCell.ulam:38: 			if (moveType == 0 || rm.oneIn(20)) s = (SiteNum)rm.between(1, 4);
            u32 Uh_5tlreg41959 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg41960 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg41961 = _Int32ToInt32(Uh_5tlreg41960, 2, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg41963 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg41964 = _Unsigned32ToInt32(Uh_5tlreg41963, 6, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg41965 = _BinOpCompareEqEqInt32(Uh_5tlreg41964, Uh_5tlreg41961, 7); //gcnl:NodeBinaryOpCompare.cpp:441
            if(!_Bool32ToCbool(Uh_5tlreg41965, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              UlamRef<EC> Uh_3tur41967(ur, 24u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
              const u32 Uh_5tlreg41968 = 20; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg41969 = _Int32ToUnsigned32(Uh_5tlreg41968, 6, 32); //gcnl:NodeCast.cpp:748
              Ui_Ut_102321u<EC> Uh_5tlval41970(Uh_5tlreg41969); //gcnl:Node.cpp:1142
              const Ui_Ut_10111b<EC> Uh_5tlval41972 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur41967, Uh_5tlval41970); //gcnl:NodeFunctionCall.cpp:1043
              const u32 Uh_5tlreg41973 = Uh_5tlval41972.read(); //gcnl:Node.cpp:1170
              Uh_5tlreg41959 = Uh_5tlreg41973; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg41959 = Uh_5tlreg41965; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg41959, 1)) //gcnl:NodeControl.cpp:213
            {

//! DirectionCell.ulam:38: 			if (moveType == 0 || rm.oneIn(20)) s = (SiteNum)rm.between(1, 4);
                UlamRef<EC> Uh_3tur41975(ur, 24u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg41976 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg41977 = _Int32ToInt32(Uh_5tlreg41976, 2, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval41978(Uh_5tlreg41977); //gcnl:Node.cpp:1142
                const u32 Uh_5tlreg41979 = 4; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg41980 = _Int32ToInt32(Uh_5tlreg41979, 4, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval41981(Uh_5tlreg41980); //gcnl:Node.cpp:1142
                const Ui_Ut_102321i<EC> Uh_5tlval41983 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur41975, Uh_5tlval41978, Uh_5tlval41981); //gcnl:NodeFunctionCall.cpp:1043
                const u32 Uh_5tlreg41984 = Uh_5tlval41983.read(); //gcnl:Node.cpp:1170
                const u32 Uh_5tlreg41985 = _Int32ToUnsigned32(Uh_5tlreg41984, 32, 6); //gcnl:NodeCast.cpp:748
                Uv_1s.write(Uh_5tlreg41985); //gcnl:Node.cpp:892
            } // end if
            else
            {

//! DirectionCell.ulam:39: 			else SiteNum s = moveType;
                const u32 Uh_5tlreg41988 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg41988); //gcnl:NodeVarDecl.cpp:1081
            } //end else
          }

//! DirectionCell.ulam:40: 			moveTo(s);
          const u32 Uh_5tlreg41991 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval41992(Uh_5tlreg41991); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval41994 = Uq_102244Bond10<EC>::THE_INSTANCE.Uf_6moveTo(uc, ur, Uh_5tlval41992); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41995 = Uh_5tlval41994.read(); //gcnl:Node.cpp:1170
        }
      } // end if
    }

//! DirectionCell.ulam:42: 		drawBonds();
    Uq_102244Bond10<EC>::THE_INSTANCE.Uf_919drawBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_6behave



//! DirectionCell.ulam:21:   ARGB getColor(Unsigned selector) {
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102319213DirectionCell10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! DirectionCell.ulam:22:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! DirectionCell.ulam:23:     ARGB ret = cu.color(0x00000000U);
    UlamRef<EC> Uh_3tur41999(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42000 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42001 = _Unsigned32ToUnsigned32(Uh_5tlreg42000, 1, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42002(Uh_5tlreg42001); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42004 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur41999, Uh_5tlval42002); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42005 = Uh_5tlval42004.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42005); //gcnl:NodeVarDecl.cpp:1081

//! DirectionCell.ulam:24:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
    {

//! DirectionCell.ulam:24:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42006 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      u32 Uh_5tlreg42007 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42008 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42009 = _Int32ToInt32(Uh_5tlreg42008, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42011 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42012 = _Unsigned32ToInt32(Uh_5tlreg42011, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42013 = _BinOpCompareEqEqInt32(Uh_5tlreg42012, Uh_5tlreg42009, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42013, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42014 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42015 = _Int32ToInt32(Uh_5tlreg42014, 2, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42017 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42018 = _Unsigned32ToInt32(Uh_5tlreg42017, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42019 = _BinOpCompareEqEqInt32(Uh_5tlreg42018, Uh_5tlreg42015, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42007 = Uh_5tlreg42019; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42007 = Uh_5tlreg42013; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(!_Bool32ToCbool(Uh_5tlreg42007, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42020 = 2; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42021 = _Int32ToInt32(Uh_5tlreg42020, 3, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42023 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42024 = _Unsigned32ToInt32(Uh_5tlreg42023, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42025 = _BinOpCompareEqEqInt32(Uh_5tlreg42024, Uh_5tlreg42021, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42006 = Uh_5tlreg42025; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42006 = Uh_5tlreg42007; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42006, 1)) //gcnl:NodeControl.cpp:213
      {

//! DirectionCell.ulam:24:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42026 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42027 = _Int32ToInt32(Uh_5tlreg42026, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42029 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42030 = _Unsigned32ToInt32(Uh_5tlreg42029, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42031 = _BinOpMultiplyInt32(Uh_5tlreg42030, Uh_5tlreg42027, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42032 = _Int32ToUnsigned32(Uh_5tlreg42031, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42033 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42033 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42035(Uv_3ret, Uh_5tlreg42033 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42035.write(Uh_5tlreg42032);
      } // end if
    }

//! DirectionCell.ulam:25:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
    {

//! DirectionCell.ulam:25:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42036 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42037 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42038 = _Int32ToInt32(Uh_5tlreg42037, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42040 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42041 = _Unsigned32ToInt32(Uh_5tlreg42040, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42042 = _BinOpCompareEqEqInt32(Uh_5tlreg42041, Uh_5tlreg42038, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42042, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42043 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42044 = _Int32ToInt32(Uh_5tlreg42043, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42046 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42047 = _Unsigned32ToInt32(Uh_5tlreg42046, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42048 = _BinOpCompareEqEqInt32(Uh_5tlreg42047, Uh_5tlreg42044, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42036 = Uh_5tlreg42048; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42036 = Uh_5tlreg42042; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42036, 1)) //gcnl:NodeControl.cpp:213
      {

//! DirectionCell.ulam:25:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42049 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42050 = _Int32ToInt32(Uh_5tlreg42049, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42052 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42053 = _Unsigned32ToInt32(Uh_5tlreg42052, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42054 = _BinOpMultiplyInt32(Uh_5tlreg42053, Uh_5tlreg42050, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42055 = _Int32ToUnsigned32(Uh_5tlreg42054, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42056 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42056 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42058(Uv_3ret, Uh_5tlreg42056 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42058.write(Uh_5tlreg42055);
      } // end if
    }

//! DirectionCell.ulam:26:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
    {

//! DirectionCell.ulam:26:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42059 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42060 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42061 = _Int32ToInt32(Uh_5tlreg42060, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42063 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42064 = _Unsigned32ToInt32(Uh_5tlreg42063, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42065 = _BinOpCompareEqEqInt32(Uh_5tlreg42064, Uh_5tlreg42061, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42065, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42066 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42067 = _Int32ToInt32(Uh_5tlreg42066, 3, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42069 = UlamRef<EC>(ur, 24u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42070 = _Unsigned32ToInt32(Uh_5tlreg42069, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42071 = _BinOpCompareEqEqInt32(Uh_5tlreg42070, Uh_5tlreg42067, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42059 = Uh_5tlreg42071; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42059 = Uh_5tlreg42065; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42059, 1)) //gcnl:NodeControl.cpp:213
      {

//! DirectionCell.ulam:26:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42072 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42073 = _Int32ToInt32(Uh_5tlreg42072, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42075 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42076 = _Unsigned32ToInt32(Uh_5tlreg42075, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42077 = _BinOpMultiplyInt32(Uh_5tlreg42076, Uh_5tlreg42073, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42078 = _Int32ToUnsigned32(Uh_5tlreg42077, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42079 = 3; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42079 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42081(Uv_3ret, Uh_5tlreg42079 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42081.write(Uh_5tlreg42078);
      } // end if
    }

//! DirectionCell.ulam:27:     return ret;
    const u32 Uh_5tlreg42083 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42084(Uh_5tlreg42083); //gcnl:Node.cpp:1142
    return (Uh_5tlval42084); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102319213DirectionCell10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10111b", "active", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Ut_10131u", "bondCount", 1u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Ut_14151u", "bonds", 4u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 5: { static UlamClassDataMemberInfo i("Uq_10106Random10", "rm", 24u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 6: { static UlamClassDataMemberInfo i("Ut_10161u", "moveType", 24u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 7: { static UlamClassDataMemberInfo i("Uq_10114Once10", "once", 30u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102319213DirectionCell10<EC>::GetDataMemberCount() const
  {
    return 8; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102319213DirectionCell10<EC>::GetMangledClassName() const
  {
    return "Ue_102319213DirectionCell10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102319213DirectionCell10<EC>::GetClassLength( ) const
  {
    return 31; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102319213DirectionCell10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102319213DirectionCell10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102319213DirectionCell10<EC>::BuildDefaultAtom( ) const
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
      const Ui_Uq_10114Once10<EC> Uh_5tlreg42085; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg42086(Uh_5tlreg42085.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(55u, 1, Uh_5tlreg42086); //Um_4once //gcnl:NodeVarDeclDM.cpp:832
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102319213DirectionCell10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102319213DirectionCell10<EC>::Uf_6behave10) &Ue_102319213DirectionCell10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102319213DirectionCell10<EC>::Uf_8getColor11102321u) &Ue_102319213DirectionCell10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102319213DirectionCell10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102319213DirectionCell10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102244Bond10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102319213DirectionCell10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102319213DirectionCell10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102319213DirectionCell10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102319213DirectionCell10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

