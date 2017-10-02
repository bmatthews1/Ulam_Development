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
      UlamRef<EC> Uh_3tur42108(ur, 35u, 1u, &Uq_10114Once10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const Ui_Ut_10111b<EC> Uh_5tlval42110 = Uq_10115OnceT11102151y10<EC>::THE_INSTANCE.Uf_3new(uc, Uh_3tur42108); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg42111 = Uh_5tlval42110.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg42111, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DirectionCell.ulam:33: 			moveType = (SiteNum)rm.between(1, 4);
          UlamRef<EC> Uh_3tur42113(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg42114 = 1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42115 = _Int32ToInt32(Uh_5tlreg42114, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42116(Uh_5tlreg42115); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg42117 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42118 = _Int32ToInt32(Uh_5tlreg42117, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42119(Uh_5tlreg42118); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval42121 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42113, Uh_5tlval42116, Uh_5tlval42119); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42122 = Uh_5tlval42121.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg42123 = _Int32ToUnsigned32(Uh_5tlreg42122, 32, 6); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42123); //gcnl:Node.cpp:892
        }
      } // end if
    }

//! DirectionCell.ulam:35: 		if (active){
    {

//! DirectionCell.ulam:35: 		if (active){
      const u32 Uh_5tlreg42126 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg42126, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DirectionCell.ulam:36: 			findBonds();
          Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919findBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! DirectionCell.ulam:38: 			SiteNum s;
          Ui_Ut_10161u<EC> Uv_1s; //gcnl:NodeVarDecl.cpp:1118

//! DirectionCell.ulam:39: 			if (moveType == 0 || rm.oneIn(3)) s = (SiteNum)rm.between(1, 4);
          {

//! DirectionCell.ulam:39: 			if (moveType == 0 || rm.oneIn(3)) s = (SiteNum)rm.between(1, 4);
            u32 Uh_5tlreg42129 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg42130 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42131 = _Int32ToInt32(Uh_5tlreg42130, 2, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42133 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg42134 = _Unsigned32ToInt32(Uh_5tlreg42133, 6, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42135 = _BinOpCompareEqEqInt32(Uh_5tlreg42134, Uh_5tlreg42131, 7); //gcnl:NodeBinaryOpCompare.cpp:441
            if(!_Bool32ToCbool(Uh_5tlreg42135, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              UlamRef<EC> Uh_3tur42137(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
              const u32 Uh_5tlreg42138 = 3; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42139 = _Int32ToUnsigned32(Uh_5tlreg42138, 3, 32); //gcnl:NodeCast.cpp:748
              Ui_Ut_102321u<EC> Uh_5tlval42140(Uh_5tlreg42139); //gcnl:Node.cpp:1142
              const Ui_Ut_10111b<EC> Uh_5tlval42142 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur42137, Uh_5tlval42140); //gcnl:NodeFunctionCall.cpp:1043
              const u32 Uh_5tlreg42143 = Uh_5tlval42142.read(); //gcnl:Node.cpp:1170
              Uh_5tlreg42129 = Uh_5tlreg42143; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42129 = Uh_5tlreg42135; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg42129, 1)) //gcnl:NodeControl.cpp:213
            {

//! DirectionCell.ulam:39: 			if (moveType == 0 || rm.oneIn(3)) s = (SiteNum)rm.between(1, 4);
                UlamRef<EC> Uh_3tur42145(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg42146 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42147 = _Int32ToInt32(Uh_5tlreg42146, 2, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval42148(Uh_5tlreg42147); //gcnl:Node.cpp:1142
                const u32 Uh_5tlreg42149 = 4; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42150 = _Int32ToInt32(Uh_5tlreg42149, 4, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval42151(Uh_5tlreg42150); //gcnl:Node.cpp:1142
                const Ui_Ut_102321i<EC> Uh_5tlval42153 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42145, Uh_5tlval42148, Uh_5tlval42151); //gcnl:NodeFunctionCall.cpp:1043
                const u32 Uh_5tlreg42154 = Uh_5tlval42153.read(); //gcnl:Node.cpp:1170
                const u32 Uh_5tlreg42155 = _Int32ToUnsigned32(Uh_5tlreg42154, 32, 6); //gcnl:NodeCast.cpp:748
                Uv_1s.write(Uh_5tlreg42155); //gcnl:Node.cpp:892
            } // end if
            else
            {

//! DirectionCell.ulam:40: 			else SiteNum s = moveType;
                const u32 Uh_5tlreg42158 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42158); //gcnl:NodeVarDecl.cpp:1081
            } //end else
          }

//! DirectionCell.ulam:41: 			moveTo(s);
          const u32 Uh_5tlreg42161 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval42162(Uh_5tlreg42161); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval42164 = Uq_102294Bond10<EC>::THE_INSTANCE.Uf_6moveTo(uc, ur, Uh_5tlval42162); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42165 = Uh_5tlval42164.read(); //gcnl:Node.cpp:1170
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
    UlamRef<EC> Uh_3tur42169(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42170 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42171 = _Unsigned32ToUnsigned32(Uh_5tlreg42170, 1, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42172(Uh_5tlreg42171); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42174 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur42169, Uh_5tlval42172); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42175 = Uh_5tlval42174.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42175); //gcnl:NodeVarDecl.cpp:1081

//! DirectionCell.ulam:25:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
    {

//! DirectionCell.ulam:25:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42176 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      u32 Uh_5tlreg42177 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42178 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42179 = _Int32ToInt32(Uh_5tlreg42178, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42181 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42182 = _Unsigned32ToInt32(Uh_5tlreg42181, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42183 = _BinOpCompareEqEqInt32(Uh_5tlreg42182, Uh_5tlreg42179, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42183, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42184 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42185 = _Int32ToInt32(Uh_5tlreg42184, 2, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42187 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42188 = _Unsigned32ToInt32(Uh_5tlreg42187, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42189 = _BinOpCompareEqEqInt32(Uh_5tlreg42188, Uh_5tlreg42185, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42177 = Uh_5tlreg42189; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42177 = Uh_5tlreg42183; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(!_Bool32ToCbool(Uh_5tlreg42177, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42190 = 2; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42191 = _Int32ToInt32(Uh_5tlreg42190, 3, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42193 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42194 = _Unsigned32ToInt32(Uh_5tlreg42193, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42195 = _BinOpCompareEqEqInt32(Uh_5tlreg42194, Uh_5tlreg42191, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42176 = Uh_5tlreg42195; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42176 = Uh_5tlreg42177; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42176, 1)) //gcnl:NodeControl.cpp:213
      {

//! DirectionCell.ulam:25:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42196 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42197 = _Int32ToInt32(Uh_5tlreg42196, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42199 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42200 = _Unsigned32ToInt32(Uh_5tlreg42199, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42201 = _BinOpMultiplyInt32(Uh_5tlreg42200, Uh_5tlreg42197, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42202 = _Int32ToUnsigned32(Uh_5tlreg42201, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42203 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42203 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42205(Uv_3ret, Uh_5tlreg42203 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42205.write(Uh_5tlreg42202);
      } // end if
    }

//! DirectionCell.ulam:26:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
    {

//! DirectionCell.ulam:26:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42206 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42207 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42208 = _Int32ToInt32(Uh_5tlreg42207, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42210 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42211 = _Unsigned32ToInt32(Uh_5tlreg42210, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42212 = _BinOpCompareEqEqInt32(Uh_5tlreg42211, Uh_5tlreg42208, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42212, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42213 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42214 = _Int32ToInt32(Uh_5tlreg42213, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42216 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42217 = _Unsigned32ToInt32(Uh_5tlreg42216, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42218 = _BinOpCompareEqEqInt32(Uh_5tlreg42217, Uh_5tlreg42214, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42206 = Uh_5tlreg42218; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42206 = Uh_5tlreg42212; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42206, 1)) //gcnl:NodeControl.cpp:213
      {

//! DirectionCell.ulam:26:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42219 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42220 = _Int32ToInt32(Uh_5tlreg42219, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42222 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42223 = _Unsigned32ToInt32(Uh_5tlreg42222, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42224 = _BinOpMultiplyInt32(Uh_5tlreg42223, Uh_5tlreg42220, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42225 = _Int32ToUnsigned32(Uh_5tlreg42224, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42226 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42226 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42228(Uv_3ret, Uh_5tlreg42226 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42228.write(Uh_5tlreg42225);
      } // end if
    }

//! DirectionCell.ulam:27:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
    {

//! DirectionCell.ulam:27:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42229 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42230 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42231 = _Int32ToInt32(Uh_5tlreg42230, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42233 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42234 = _Unsigned32ToInt32(Uh_5tlreg42233, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42235 = _BinOpCompareEqEqInt32(Uh_5tlreg42234, Uh_5tlreg42231, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42235, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42236 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42237 = _Int32ToInt32(Uh_5tlreg42236, 3, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42239 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42240 = _Unsigned32ToInt32(Uh_5tlreg42239, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42241 = _BinOpCompareEqEqInt32(Uh_5tlreg42240, Uh_5tlreg42237, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42229 = Uh_5tlreg42241; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42229 = Uh_5tlreg42235; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42229, 1)) //gcnl:NodeControl.cpp:213
      {

//! DirectionCell.ulam:27:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42242 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42243 = _Int32ToInt32(Uh_5tlreg42242, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42245 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42246 = _Unsigned32ToInt32(Uh_5tlreg42245, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42247 = _BinOpMultiplyInt32(Uh_5tlreg42246, Uh_5tlreg42243, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42248 = _Int32ToUnsigned32(Uh_5tlreg42247, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42249 = 3; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42249 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42251(Uv_3ret, Uh_5tlreg42249 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42251.write(Uh_5tlreg42248);
      } // end if
    }

//! DirectionCell.ulam:28:     return ret;
    const u32 Uh_5tlreg42253 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42254(Uh_5tlreg42253); //gcnl:Node.cpp:1142
    return (Uh_5tlval42254); //gcnl:NodeReturnStatement.cpp:343

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
      const Ui_Uq_10114Once10<EC> Uh_5tlreg42255; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg42256(Uh_5tlreg42255.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(60u, 1, Uh_5tlreg42256); //Um_4once //gcnl:NodeVarDeclDM.cpp:832
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

