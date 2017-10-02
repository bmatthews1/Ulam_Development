/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_102294Bond10.h"
#include "Uq_10106Random10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10109214CellParameters10.h"
#include "Uq_10114Once10.h"
#include "Uq_10109210ColorUtils10.h"

namespace MFM{

  template<class EC>
  Ue_102364Cell10<EC>::Ue_102364Cell10() : UlamElement<EC>(MFM_UUID_FOR("Ue102364Cell10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("C");  // figure this out later
    Element<EC>::SetName("Cell"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102364Cell10<EC>::~Ue_102364Cell10(){} //gcnl:NodeBlockClass.cpp:1743


//! Cell.ulam:66: 	Void behave(){
  template<class EC>
  void Ue_102364Cell10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Cell.ulam:67: 		if (once.new()){
    {

//! Cell.ulam:67: 		if (once.new()){
      UlamRef<EC> Uh_3tur42108(ur, 35u, 1u, &Uq_10114Once10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const Ui_Ut_10111b<EC> Uh_5tlval42110 = Uq_10115OnceT11102151y10<EC>::THE_INSTANCE.Uf_3new(uc, Uh_3tur42108); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg42111 = Uh_5tlval42110.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg42111, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Cell.ulam:68: 			CellParameters cp;
          Ui_Ue_10109214CellParameters10<EC> Uv_2cp; //gcnl:NodeVarDecl.cpp:1118

//! Cell.ulam:69: 			Unsigned total = cp.aRANDOM + cp.bRED + cp.cBLUE + cp.dYELLOW + cp.eGREEN;
          const u32 Uh_5tlreg42114 = Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_6eGREEN.read(uc); //gcnl:Node.cpp:681
          const u32 Uh_5tlreg42117 = Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_7dYELLOW.read(uc); //gcnl:Node.cpp:681
          const u32 Uh_5tlreg42120 = Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_5cBLUE.read(uc); //gcnl:Node.cpp:681
          const u32 Uh_5tlreg42123 = Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_4bRED.read(uc); //gcnl:Node.cpp:681
          const u32 Uh_5tlreg42126 = Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_7aRANDOM.read(uc); //gcnl:Node.cpp:681
          const u32 Uh_5tlreg42127 = _BinOpAddUnsigned32(Uh_5tlreg42126, Uh_5tlreg42123, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42128 = _BinOpAddUnsigned32(Uh_5tlreg42127, Uh_5tlreg42120, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42129 = _BinOpAddUnsigned32(Uh_5tlreg42128, Uh_5tlreg42117, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42130 = _BinOpAddUnsigned32(Uh_5tlreg42129, Uh_5tlreg42114, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_5total(Uh_5tlreg42130); //gcnl:NodeVarDecl.cpp:1081

//! Cell.ulam:70: 			Unsigned random = cp.aRANDOM;
          const u32 Uh_5tlreg42133 = Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_7aRANDOM.read(uc); //gcnl:Node.cpp:681
          Ui_Ut_102321u<EC> Uv_6random(Uh_5tlreg42133); //gcnl:NodeVarDecl.cpp:1081

//! Cell.ulam:71: 			Unsigned red = random + cp.bRED;
          const u32 Uh_5tlreg42136 = Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_4bRED.read(uc); //gcnl:Node.cpp:681
          const u32 Uh_5tlreg42138 = Uv_6random.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42139 = _BinOpAddUnsigned32(Uh_5tlreg42138, Uh_5tlreg42136, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_3red(Uh_5tlreg42139); //gcnl:NodeVarDecl.cpp:1081

//! Cell.ulam:72: 			Unsigned blue = red + cp.cBLUE;
          const u32 Uh_5tlreg42142 = Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_5cBLUE.read(uc); //gcnl:Node.cpp:681
          const u32 Uh_5tlreg42144 = Uv_3red.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42145 = _BinOpAddUnsigned32(Uh_5tlreg42144, Uh_5tlreg42142, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_4blue(Uh_5tlreg42145); //gcnl:NodeVarDecl.cpp:1081

//! Cell.ulam:73: 			Unsigned yellow = blue + cp.dYELLOW;
          const u32 Uh_5tlreg42148 = Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_7dYELLOW.read(uc); //gcnl:Node.cpp:681
          const u32 Uh_5tlreg42150 = Uv_4blue.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42151 = _BinOpAddUnsigned32(Uh_5tlreg42150, Uh_5tlreg42148, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_6yellow(Uh_5tlreg42151); //gcnl:NodeVarDecl.cpp:1081

//! Cell.ulam:74: 			Unsigned green = yellow + cp.eGREEN;
          const u32 Uh_5tlreg42154 = Ue_10109214CellParameters10<EC>::THE_INSTANCE.Up_6eGREEN.read(uc); //gcnl:Node.cpp:681
          const u32 Uh_5tlreg42156 = Uv_6yellow.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42157 = _BinOpAddUnsigned32(Uh_5tlreg42156, Uh_5tlreg42154, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_5green(Uh_5tlreg42157); //gcnl:NodeVarDecl.cpp:1081

//! Cell.ulam:76: 			Unsigned prob = (Unsigned)(rm.between(0, (Int)total));
          UlamRef<EC> Uh_3tur42159(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg42160 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42161 = _Int32ToInt32(Uh_5tlreg42160, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42162(Uh_5tlreg42161); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg42164 = Uv_5total.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg42165 = _Unsigned32ToInt32(Uh_5tlreg42164, 32, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval42166(Uh_5tlreg42165); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval42168 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42159, Uh_5tlval42162, Uh_5tlval42166); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42169 = Uh_5tlval42168.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg42170 = _Int32ToUnsigned32(Uh_5tlreg42169, 32, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uv_4prob(Uh_5tlreg42170); //gcnl:NodeVarDecl.cpp:1081

//! Cell.ulam:77: 			if (prob < random) moveType = 0;
          {

//! Cell.ulam:77: 			if (prob < random) moveType = 0;
            const u32 Uh_5tlreg42172 = Uv_6random.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg42174 = Uv_4prob.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg42175 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42174, Uh_5tlreg42172, 32); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg42175, 1)) //gcnl:NodeControl.cpp:213
            {

//! Cell.ulam:77: 			if (prob < random) moveType = 0;
                const u32 Uh_5tlreg42176 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42177 = _Int32ToUnsigned32(Uh_5tlreg42176, 2, 6); //gcnl:NodeCast.cpp:748
                UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42177); //gcnl:Node.cpp:892
            } // end if
            else
            {

//! Cell.ulam:78: 			else if (prob < red) moveType = 2;
                {

//! Cell.ulam:78: 			else if (prob < red) moveType = 2;
                  const u32 Uh_5tlreg42180 = Uv_3red.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg42182 = Uv_4prob.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg42183 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42182, Uh_5tlreg42180, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg42183, 1)) //gcnl:NodeControl.cpp:213
                  {

//! Cell.ulam:78: 			else if (prob < red) moveType = 2;
                      const u32 Uh_5tlreg42184 = 2; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg42185 = _Int32ToUnsigned32(Uh_5tlreg42184, 3, 6); //gcnl:NodeCast.cpp:748
                      UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42185); //gcnl:Node.cpp:892
                  } // end if
                  else
                  {

//! Cell.ulam:79: 			else if (prob < blue) moveType = 3;
                      {

//! Cell.ulam:79: 			else if (prob < blue) moveType = 3;
                        const u32 Uh_5tlreg42188 = Uv_4blue.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42190 = Uv_4prob.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42191 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42190, Uh_5tlreg42188, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(_Bool32ToCbool(Uh_5tlreg42191, 1)) //gcnl:NodeControl.cpp:213
                        {

//! Cell.ulam:79: 			else if (prob < blue) moveType = 3;
                            const u32 Uh_5tlreg42192 = 3; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg42193 = _Int32ToUnsigned32(Uh_5tlreg42192, 3, 6); //gcnl:NodeCast.cpp:748
                            UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42193); //gcnl:Node.cpp:892
                        } // end if
                        else
                        {

//! Cell.ulam:80: 			else if (prob < yellow) moveType = 4;
                            {

//! Cell.ulam:80: 			else if (prob < yellow) moveType = 4;
                              const u32 Uh_5tlreg42196 = Uv_6yellow.read(); //gcnl:Node.cpp:698
                              const u32 Uh_5tlreg42198 = Uv_4prob.read(); //gcnl:Node.cpp:698
                              const u32 Uh_5tlreg42199 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42198, Uh_5tlreg42196, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                              if(_Bool32ToCbool(Uh_5tlreg42199, 1)) //gcnl:NodeControl.cpp:213
                              {

//! Cell.ulam:80: 			else if (prob < yellow) moveType = 4;
                                  const u32 Uh_5tlreg42200 = 4; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg42201 = _Int32ToUnsigned32(Uh_5tlreg42200, 4, 6); //gcnl:NodeCast.cpp:748
                                  UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42201); //gcnl:Node.cpp:892
                              } // end if
                              else
                              {

//! Cell.ulam:81: 			else moveType = 1;
                                  const u32 Uh_5tlreg42203 = 1; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg42204 = _Int32ToUnsigned32(Uh_5tlreg42203, 2, 6); //gcnl:NodeCast.cpp:748
                                  UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42204); //gcnl:Node.cpp:892
                              } //end else
                            }
                        } //end else
                      }
                  } //end else
                }
            } //end else
          }
        }
      } // end if
    }

//! Cell.ulam:83: 		if (active){
    {

//! Cell.ulam:83: 		if (active){
      const u32 Uh_5tlreg42207 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg42207, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Cell.ulam:84: 			findBonds();
          Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919findBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! Cell.ulam:86: 			SiteNum s;
          Ui_Ut_10161u<EC> Uv_1s; //gcnl:NodeVarDecl.cpp:1118

//! Cell.ulam:87: 			if (moveType == 0 || rm.oneIn(3)) s = (SiteNum)rm.between(1, 4);
          {

//! Cell.ulam:87: 			if (moveType == 0 || rm.oneIn(3)) s = (SiteNum)rm.between(1, 4);
            u32 Uh_5tlreg42210 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
            const u32 Uh_5tlreg42211 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42212 = _Int32ToInt32(Uh_5tlreg42211, 2, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42214 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg42215 = _Unsigned32ToInt32(Uh_5tlreg42214, 6, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg42216 = _BinOpCompareEqEqInt32(Uh_5tlreg42215, Uh_5tlreg42212, 7); //gcnl:NodeBinaryOpCompare.cpp:441
            if(!_Bool32ToCbool(Uh_5tlreg42216, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
            {
              UlamRef<EC> Uh_3tur42218(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
              const u32 Uh_5tlreg42219 = 3; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42220 = _Int32ToUnsigned32(Uh_5tlreg42219, 3, 32); //gcnl:NodeCast.cpp:748
              Ui_Ut_102321u<EC> Uh_5tlval42221(Uh_5tlreg42220); //gcnl:Node.cpp:1142
              const Ui_Ut_10111b<EC> Uh_5tlval42223 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur42218, Uh_5tlval42221); //gcnl:NodeFunctionCall.cpp:1043
              const u32 Uh_5tlreg42224 = Uh_5tlval42223.read(); //gcnl:Node.cpp:1170
              Uh_5tlreg42210 = Uh_5tlreg42224; //gcnl:NodeBinaryOpLogicalOr.cpp:146
            }
            else
            {
              Uh_5tlreg42210 = Uh_5tlreg42216; //gcnl:NodeBinaryOpLogicalOr.cpp:163
            }
            if(_Bool32ToCbool(Uh_5tlreg42210, 1)) //gcnl:NodeControl.cpp:213
            {

//! Cell.ulam:87: 			if (moveType == 0 || rm.oneIn(3)) s = (SiteNum)rm.between(1, 4);
                UlamRef<EC> Uh_3tur42226(ur, 29u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg42227 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42228 = _Int32ToInt32(Uh_5tlreg42227, 2, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval42229(Uh_5tlreg42228); //gcnl:Node.cpp:1142
                const u32 Uh_5tlreg42230 = 4; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42231 = _Int32ToInt32(Uh_5tlreg42230, 4, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321i<EC> Uh_5tlval42232(Uh_5tlreg42231); //gcnl:Node.cpp:1142
                const Ui_Ut_102321i<EC> Uh_5tlval42234 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur42226, Uh_5tlval42229, Uh_5tlval42232); //gcnl:NodeFunctionCall.cpp:1043
                const u32 Uh_5tlreg42235 = Uh_5tlval42234.read(); //gcnl:Node.cpp:1170
                const u32 Uh_5tlreg42236 = _Int32ToUnsigned32(Uh_5tlreg42235, 32, 6); //gcnl:NodeCast.cpp:748
                Uv_1s.write(Uh_5tlreg42236); //gcnl:Node.cpp:892
            } // end if
            else
            {

//! Cell.ulam:88: 			else SiteNum s = moveType;
                const u32 Uh_5tlreg42239 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42239); //gcnl:NodeVarDecl.cpp:1081
            } //end else
          }

//! Cell.ulam:89: 			moveTo(s);
          const u32 Uh_5tlreg42242 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval42243(Uh_5tlreg42242); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval42245 = Uq_102294Bond10<EC>::THE_INSTANCE.Uf_6moveTo(uc, ur, Uh_5tlval42243); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg42246 = Uh_5tlval42245.read(); //gcnl:Node.cpp:1170
        }
      } // end if
    }

//! Cell.ulam:91: 		drawBonds();
    Uq_102294Bond10<EC>::THE_INSTANCE.Uf_919drawBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_6behave



//! Cell.ulam:57:   ARGB getColor(Unsigned selector) {
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102364Cell10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! Cell.ulam:58:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! Cell.ulam:59:     ARGB ret = cu.color(0x00000000U);
    UlamRef<EC> Uh_3tur42250(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42251 = 0u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg42252 = _Unsigned32ToUnsigned32(Uh_5tlreg42251, 1, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321u<EC> Uh_5tlval42253(Uh_5tlreg42252); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42255 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur42250, Uh_5tlval42253); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42256 = Uh_5tlval42255.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42256); //gcnl:NodeVarDecl.cpp:1081

//! Cell.ulam:60:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
    {

//! Cell.ulam:60:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42257 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      u32 Uh_5tlreg42258 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42259 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42260 = _Int32ToInt32(Uh_5tlreg42259, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42262 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42263 = _Unsigned32ToInt32(Uh_5tlreg42262, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42264 = _BinOpCompareEqEqInt32(Uh_5tlreg42263, Uh_5tlreg42260, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42264, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42265 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42266 = _Int32ToInt32(Uh_5tlreg42265, 2, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42268 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42269 = _Unsigned32ToInt32(Uh_5tlreg42268, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42270 = _BinOpCompareEqEqInt32(Uh_5tlreg42269, Uh_5tlreg42266, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42258 = Uh_5tlreg42270; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42258 = Uh_5tlreg42264; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(!_Bool32ToCbool(Uh_5tlreg42258, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42271 = 2; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42272 = _Int32ToInt32(Uh_5tlreg42271, 3, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42274 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42275 = _Unsigned32ToInt32(Uh_5tlreg42274, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42276 = _BinOpCompareEqEqInt32(Uh_5tlreg42275, Uh_5tlreg42272, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42257 = Uh_5tlreg42276; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42257 = Uh_5tlreg42258; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42257, 1)) //gcnl:NodeControl.cpp:213
      {

//! Cell.ulam:60:     if (moveType == 0 || moveType == 1 || moveType == 2) ret[1] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42277 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42278 = _Int32ToInt32(Uh_5tlreg42277, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42280 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42281 = _Unsigned32ToInt32(Uh_5tlreg42280, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42282 = _BinOpMultiplyInt32(Uh_5tlreg42281, Uh_5tlreg42278, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42283 = _Int32ToUnsigned32(Uh_5tlreg42282, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42284 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42284 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42286(Uv_3ret, Uh_5tlreg42284 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42286.write(Uh_5tlreg42283);
      } // end if
    }

//! Cell.ulam:61:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
    {

//! Cell.ulam:61:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42287 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42288 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42289 = _Int32ToInt32(Uh_5tlreg42288, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42291 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42292 = _Unsigned32ToInt32(Uh_5tlreg42291, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42293 = _BinOpCompareEqEqInt32(Uh_5tlreg42292, Uh_5tlreg42289, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42293, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42294 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42295 = _Int32ToInt32(Uh_5tlreg42294, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42297 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42298 = _Unsigned32ToInt32(Uh_5tlreg42297, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42299 = _BinOpCompareEqEqInt32(Uh_5tlreg42298, Uh_5tlreg42295, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42287 = Uh_5tlreg42299; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42287 = Uh_5tlreg42293; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42287, 1)) //gcnl:NodeControl.cpp:213
      {

//! Cell.ulam:61:     if (moveType == 1 || moveType == 4) ret[2] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42300 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42301 = _Int32ToInt32(Uh_5tlreg42300, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42303 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42304 = _Unsigned32ToInt32(Uh_5tlreg42303, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42305 = _BinOpMultiplyInt32(Uh_5tlreg42304, Uh_5tlreg42301, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42306 = _Int32ToUnsigned32(Uh_5tlreg42305, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42307 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42307 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42309(Uv_3ret, Uh_5tlreg42307 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42309.write(Uh_5tlreg42306);
      } // end if
    }

//! Cell.ulam:62:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
    {

//! Cell.ulam:62:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
      u32 Uh_5tlreg42310 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg42311 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42312 = _Int32ToInt32(Uh_5tlreg42311, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42314 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42315 = _Unsigned32ToInt32(Uh_5tlreg42314, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42316 = _BinOpCompareEqEqInt32(Uh_5tlreg42315, Uh_5tlreg42312, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg42316, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg42317 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42318 = _Int32ToInt32(Uh_5tlreg42317, 3, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42320 = UlamRef<EC>(ur, 29u, 6u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg42321 = _Unsigned32ToInt32(Uh_5tlreg42320, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42322 = _BinOpCompareEqEqInt32(Uh_5tlreg42321, Uh_5tlreg42318, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg42310 = Uh_5tlreg42322; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg42310 = Uh_5tlreg42316; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg42310, 1)) //gcnl:NodeControl.cpp:213
      {

//! Cell.ulam:62:     if (moveType == 0 || moveType == 3) ret[3] = (Byte)(bondCount*63);
          const u32 Uh_5tlreg42323 = 63; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42324 = _Int32ToInt32(Uh_5tlreg42323, 7, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42326 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42327 = _Unsigned32ToInt32(Uh_5tlreg42326, 3, 11); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42328 = _BinOpMultiplyInt32(Uh_5tlreg42327, Uh_5tlreg42324, 11); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg42329 = _Int32ToUnsigned32(Uh_5tlreg42328, 11, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42330 = 3; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg42330 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref42332(Uv_3ret, Uh_5tlreg42330 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref42332.write(Uh_5tlreg42329);
      } // end if
    }

//! Cell.ulam:63:     return ret;
    const u32 Uh_5tlreg42334 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42335(Uh_5tlreg42334); //gcnl:Node.cpp:1142
    return (Uh_5tlval42335); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102364Cell10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
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
  s32 Ue_102364Cell10<EC>::GetDataMemberCount() const
  {
    return 8; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102364Cell10<EC>::GetMangledClassName() const
  {
    return "Ue_102364Cell10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102364Cell10<EC>::GetClassLength( ) const
  {
    return 36; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102364Cell10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102364Cell10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102364Cell10<EC>::BuildDefaultAtom( ) const
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
      const Ui_Uq_10114Once10<EC> Uh_5tlreg42336; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg42337(Uh_5tlreg42336.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(60u, 1, Uh_5tlreg42337); //Um_4once //gcnl:NodeVarDeclDM.cpp:832
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102364Cell10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102364Cell10<EC>::Uf_6behave10) &Ue_102364Cell10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102364Cell10<EC>::Uf_8getColor11102321u) &Ue_102364Cell10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102364Cell10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102364Cell10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102294Bond10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102364Cell10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102364Cell10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102364Cell10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102364Cell10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

