/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_102323C2D10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10109210DebugUtils10.h"

namespace MFM{

  template<class EC>
  Ue_102568NotLife210<EC>::Ue_102568NotLife210() : UlamElement<EC>(MFM_UUID_FOR("Ue102568NotLife210", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("N");  // figure this out later
    Element<EC>::SetName("NotLife2"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102568NotLife210<EC>::~Ue_102568NotLife210(){} //gcnl:NodeBlockClass.cpp:1743


//! NotLife2.ulam:31:   Void behave(){
  template<class EC>
  void Ue_102568NotLife210<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! NotLife2.ulam:32:     updateColor();
    THE_INSTANCE.Uf_9211updateColor(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! NotLife2.ulam:33:     for (Int(15) x = -1; x < 2; x++){
    {

//! NotLife2.ulam:33:     for (Int(15) x = -1; x < 2; x++){
      const u32 Uh_5tlreg42044 = (u32) -1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42045 = _Int32ToInt32(Uh_5tlreg42044, 2, 15); //gcnl:NodeCast.cpp:748
      Ui_Ut_102151i<EC> Uv_1x(Uh_5tlreg42045); //gcnl:NodeVarDecl.cpp:1081

//! NotLife2.ulam:33:     for (Int(15) x = -1; x < 2; x++){
      while(true)
      {
        const u32 Uh_5tlreg42046 = 2; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42047 = _Int32ToInt32(Uh_5tlreg42046, 3, 15); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42049 = Uv_1x.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42050 = _BinOpCompareLessThanInt32(Uh_5tlreg42049, Uh_5tlreg42047, 15); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42050, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! NotLife2.ulam:33:     for (Int(15) x = -1; x < 2; x++){
        {

//! NotLife2.ulam:34:       for (Int(15) y = -1; y < 2; y++){
          {

//! NotLife2.ulam:34:       for (Int(15) y = -1; y < 2; y++){
            const u32 Uh_5tlreg42051 = (u32) -1; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42052 = _Int32ToInt32(Uh_5tlreg42051, 2, 15); //gcnl:NodeCast.cpp:748
            Ui_Ut_102151i<EC> Uv_1y(Uh_5tlreg42052); //gcnl:NodeVarDecl.cpp:1081

//! NotLife2.ulam:34:       for (Int(15) y = -1; y < 2; y++){
            while(true)
            {
              const u32 Uh_5tlreg42053 = 2; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42054 = _Int32ToInt32(Uh_5tlreg42053, 3, 15); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42056 = Uv_1y.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg42057 = _BinOpCompareLessThanInt32(Uh_5tlreg42056, Uh_5tlreg42054, 15); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg42057, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! NotLife2.ulam:34:       for (Int(15) y = -1; y < 2; y++){
              {

//! NotLife2.ulam:35:         Unsigned neighbors = 0;
                const u32 Uh_5tlreg42058 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42059 = _Int32ToUnsigned32(Uh_5tlreg42058, 2, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321u<EC> Uv_919neighbors(Uh_5tlreg42059); //gcnl:NodeVarDecl.cpp:1081

//! NotLife2.ulam:36:       	for (Int(15) dx = -1; dx < 2; dx++){
                {

//! NotLife2.ulam:36:       	for (Int(15) dx = -1; dx < 2; dx++){
                  const u32 Uh_5tlreg42060 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg42061 = _Int32ToInt32(Uh_5tlreg42060, 2, 15); //gcnl:NodeCast.cpp:748
                  Ui_Ut_102151i<EC> Uv_2dx(Uh_5tlreg42061); //gcnl:NodeVarDecl.cpp:1081

//! NotLife2.ulam:36:       	for (Int(15) dx = -1; dx < 2; dx++){
                  while(true)
                  {
                    const u32 Uh_5tlreg42062 = 2; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42063 = _Int32ToInt32(Uh_5tlreg42062, 3, 15); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42065 = Uv_2dx.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42066 = _BinOpCompareLessThanInt32(Uh_5tlreg42065, Uh_5tlreg42063, 15); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg42066, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! NotLife2.ulam:36:       	for (Int(15) dx = -1; dx < 2; dx++){
                    {

//! NotLife2.ulam:37:           for (Int(15) dy = -1; dy < 2; dy++){
                      {

//! NotLife2.ulam:37:           for (Int(15) dy = -1; dy < 2; dy++){
                        const u32 Uh_5tlreg42067 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42068 = _Int32ToInt32(Uh_5tlreg42067, 2, 15); //gcnl:NodeCast.cpp:748
                        Ui_Ut_102151i<EC> Uv_2dy(Uh_5tlreg42068); //gcnl:NodeVarDecl.cpp:1081

//! NotLife2.ulam:37:           for (Int(15) dy = -1; dy < 2; dy++){
                        while(true)
                        {
                          const u32 Uh_5tlreg42069 = 2; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42070 = _Int32ToInt32(Uh_5tlreg42069, 3, 15); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42072 = Uv_2dy.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42073 = _BinOpCompareLessThanInt32(Uh_5tlreg42072, Uh_5tlreg42070, 15); //gcnl:NodeBinaryOpCompare.cpp:441

                          if(!_Bool32ToCbool(Uh_5tlreg42073, 1))
                            break; //gcnl:NodeControlWhile.cpp:135

//! NotLife2.ulam:37:           for (Int(15) dy = -1; dy < 2; dy++){
                          {

//! NotLife2.ulam:38:             if (dx == 0 && dy == 0) continue;
                            {

//! NotLife2.ulam:38:             if (dx == 0 && dy == 0) continue;
                              u32 Uh_5tlreg42074 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              const u32 Uh_5tlreg42075 = 0; //gcnl:NodeTerminal.cpp:690
                              const u32 Uh_5tlreg42076 = _Int32ToInt32(Uh_5tlreg42075, 2, 15); //gcnl:NodeCast.cpp:748
                              const u32 Uh_5tlreg42078 = Uv_2dx.read(); //gcnl:Node.cpp:698
                              const u32 Uh_5tlreg42079 = _BinOpCompareEqEqInt32(Uh_5tlreg42078, Uh_5tlreg42076, 15); //gcnl:NodeBinaryOpCompare.cpp:441
                              if(_Bool32ToCbool(Uh_5tlreg42079, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg42080 = 0; //gcnl:NodeTerminal.cpp:690
                                const u32 Uh_5tlreg42081 = _Int32ToInt32(Uh_5tlreg42080, 2, 15); //gcnl:NodeCast.cpp:748
                                const u32 Uh_5tlreg42083 = Uv_2dy.read(); //gcnl:Node.cpp:698
                                const u32 Uh_5tlreg42084 = _BinOpCompareEqEqInt32(Uh_5tlreg42083, Uh_5tlreg42081, 15); //gcnl:NodeBinaryOpCompare.cpp:441
                                Uh_5tlreg42074 = Uh_5tlreg42084; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg42074, 1)) //gcnl:NodeControl.cpp:213
                              {

//! NotLife2.ulam:38:             if (dx == 0 && dy == 0) continue;
                                  goto Ul_214endcontrolloop216; //continue nearest loop //gcnl:NodeContinueStatement.cpp:64
                              } // end if
                            }

//! NotLife2.ulam:39:             c.x = x + dx;
                            const u32 Uh_5tlreg42086 = Uv_2dx.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg42087 = _Int32ToInt32(Uh_5tlreg42086, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg42089 = Uv_1x.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg42090 = _Int32ToInt32(Uh_5tlreg42089, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg42091 = _BinOpAddInt32(Uh_5tlreg42090, Uh_5tlreg42087, 16); //gcnl:NodeBinaryOp.cpp:805
                            UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42091); //gcnl:Node.cpp:892

//! NotLife2.ulam:40:             c.y = y + dy;
                            const u32 Uh_5tlreg42095 = Uv_2dy.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg42096 = _Int32ToInt32(Uh_5tlreg42095, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg42098 = Uv_1y.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg42099 = _Int32ToInt32(Uh_5tlreg42098, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg42100 = _BinOpAddInt32(Uh_5tlreg42099, Uh_5tlreg42096, 16); //gcnl:NodeBinaryOp.cpp:805
                            UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42100); //gcnl:Node.cpp:892

//! NotLife2.ulam:41:             if (!ew.isEmpty(ew.getSiteNumber(c))){neighbors++;}
                            {

//! NotLife2.ulam:41:             if (!ew.isEmpty(ew.getSiteNumber(c))){neighbors++;}
                              UlamRef<EC> Uh_3tur42104(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                              UlamRef<EC> Uh_3tur42106(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                              const u32 Uh_5tlreg42108 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:664
                              Ui_Uq_102323C2D10<EC> Uh_5tlval42109(Uh_5tlreg42108); //gcnl:Node.cpp:1142
                              const Ui_Ut_10161u<EC> Uh_5tlval42111 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur42106, Uh_5tlval42109); //gcnl:NodeFunctionCall.cpp:1043
                              const u32 Uh_5tlreg42112 = Uh_5tlval42111.read(); //gcnl:Node.cpp:1170
                              Ui_Ut_10161u<EC> Uh_5tlval42113(Uh_5tlreg42112); //gcnl:Node.cpp:1142
                              const Ui_Ut_10111b<EC> Uh_5tlval42115 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur42104, Uh_5tlval42113); //gcnl:NodeFunctionCall.cpp:1043
                              const u32 Uh_5tlreg42116 = Uh_5tlval42115.read(); //gcnl:Node.cpp:1170
                              const u32 Uh_5tlreg42117 = _LogicalBangBool32(Uh_5tlreg42116, 1); //gcnl:NodeUnaryOp.cpp:507
                              if(_Bool32ToCbool(Uh_5tlreg42117, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! NotLife2.ulam:41:             if (!ew.isEmpty(ew.getSiteNumber(c))){neighbors++;}
                                  const u32 Uh_5tlreg42118 = 1; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg42119 = _Int32ToUnsigned32(Uh_5tlreg42118, 32, 32); //gcnl:NodeCast.cpp:748
                                  const u32 Uh_5tlreg42121 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                                  const u32 Uh_5tlreg42122 = _BinOpAddUnsigned32(Uh_5tlreg42121, Uh_5tlreg42119, 32); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                                  Uv_919neighbors.write(Uh_5tlreg42122); //gcnl:Node.cpp:892
                                }
                              } // end if
                            }
                          }

//! NotLife2.ulam:37:           for (Int(15) dy = -1; dy < 2; dy++){
Ul_214endcontrolloop216:
                          __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! NotLife2.ulam:37:           for (Int(15) dy = -1; dy < 2; dy++){
                          const u32 Uh_5tlreg42123 = 1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42124 = _Int32ToInt32(Uh_5tlreg42123, 32, 15); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42126 = Uv_2dy.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42127 = _BinOpAddInt32(Uh_5tlreg42126, Uh_5tlreg42124, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                          Uv_2dy.write(Uh_5tlreg42127); //gcnl:Node.cpp:892
                        } // end while //gcnl:NodeControlWhile.cpp:145
                      }
                    }

//! NotLife2.ulam:36:       	for (Int(15) dx = -1; dx < 2; dx++){
Ul_214endcontrolloop215:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! NotLife2.ulam:36:       	for (Int(15) dx = -1; dx < 2; dx++){
                    const u32 Uh_5tlreg42128 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42129 = _Int32ToInt32(Uh_5tlreg42128, 32, 15); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42131 = Uv_2dx.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42132 = _BinOpAddInt32(Uh_5tlreg42131, Uh_5tlreg42129, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                    Uv_2dx.write(Uh_5tlreg42132); //gcnl:Node.cpp:892
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }

//! NotLife2.ulam:44:         c.x = x;
                const u32 Uh_5tlreg42134 = Uv_1x.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg42135 = _Int32ToInt32(Uh_5tlreg42134, 15, 16); //gcnl:NodeCast.cpp:748
                UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42135); //gcnl:Node.cpp:892

//! NotLife2.ulam:45:         c.y = y;
                const u32 Uh_5tlreg42139 = Uv_1y.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg42140 = _Int32ToInt32(Uh_5tlreg42139, 15, 16); //gcnl:NodeCast.cpp:748
                UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42140); //gcnl:Node.cpp:892

//! NotLife2.ulam:46:         Unsigned(6) s = ew.getSiteNumber(c);
                UlamRef<EC> Uh_3tur42144(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg42146 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:664
                Ui_Uq_102323C2D10<EC> Uh_5tlval42147(Uh_5tlreg42146); //gcnl:Node.cpp:1142
                const Ui_Ut_10161u<EC> Uh_5tlval42149 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur42144, Uh_5tlval42147); //gcnl:NodeFunctionCall.cpp:1043
                const u32 Uh_5tlreg42150 = Uh_5tlval42149.read(); //gcnl:Node.cpp:1170
                Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42150); //gcnl:NodeVarDecl.cpp:1081

//! NotLife2.ulam:48:         if (ew[s] is NotLife2){
                {

//! NotLife2.ulam:48:         if (ew[s] is NotLife2){
                  UlamRef<EC> Uh_3tur42152(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                  const u32 Uh_5tlreg42154 = Uv_1s.read(); //gcnl:Node.cpp:698
                  Ui_Ut_10161u<EC> Uh_5tlval42155(Uh_5tlreg42154); //gcnl:Node.cpp:1142
                  Ui_Ut_r102961a<EC> Uh_5tuval42157 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42152, Uh_5tlval42155); //gcnl:NodeFunctionCall.cpp:1043
                  const u32 Uh_5tlreg42158 = Ue_102568NotLife210<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval42157.read()); //gcnl:NodeConditionalIs.cpp:285
                  if(_Bool32ToCbool(Uh_5tlreg42158, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! NotLife2.ulam:49:           if (neighbors < 2u || neighbors > 3u){ ew[s] = Empty.instanceof;}
                      {

//! NotLife2.ulam:49:           if (neighbors < 2u || neighbors > 3u){ ew[s] = Empty.instanceof;}
                        u32 Uh_5tlreg42159 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
                        const u32 Uh_5tlreg42160 = 2u; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42161 = _Unsigned32ToUnsigned32(Uh_5tlreg42160, 2, 32); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42163 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42164 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42163, Uh_5tlreg42161, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(!_Bool32ToCbool(Uh_5tlreg42164, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
                        {
                          const u32 Uh_5tlreg42165 = 3u; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42166 = _Unsigned32ToUnsigned32(Uh_5tlreg42165, 2, 32); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42168 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42169 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg42168, Uh_5tlreg42166, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                          Uh_5tlreg42159 = Uh_5tlreg42169; //gcnl:NodeBinaryOpLogicalOr.cpp:146
                        }
                        else
                        {
                          Uh_5tlreg42159 = Uh_5tlreg42164; //gcnl:NodeBinaryOpLogicalOr.cpp:163
                        }
                        if(_Bool32ToCbool(Uh_5tlreg42159, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! NotLife2.ulam:49:           if (neighbors < 2u || neighbors > 3u){ ew[s] = Empty.instanceof;}
                            Ui_Ue_10105Empty10<EC> Uh_5tuval42170; //gcnl:NodeInstanceof.cpp:113
                            UlamRef<EC> Uh_3tur42172(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg42174 = Uv_1s.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval42175(Uh_5tlreg42174); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval42177 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42172, Uh_5tlval42175); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval42177.WriteAtom(Uh_5tuval42170.read()); //write into atomof ref //gcnl:Node.cpp:992
                          }
                        } // end if
                      }
                    }
                  } // end if
                  else
                  {

//! NotLife2.ulam:51:         else if (neighbors == 3u && ew[s] is Empty){ ew[s] = NotLife2.instanceof;}
                      {

//! NotLife2.ulam:51:         else if (neighbors == 3u && ew[s] is Empty){ ew[s] = NotLife2.instanceof;}
                        u32 Uh_5tlreg42178 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                        const u32 Uh_5tlreg42179 = 3u; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42180 = _Unsigned32ToUnsigned32(Uh_5tlreg42179, 2, 32); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42182 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42183 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42182, Uh_5tlreg42180, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(_Bool32ToCbool(Uh_5tlreg42183, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                        {
                          UlamRef<EC> Uh_3tur42185(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                          const u32 Uh_5tlreg42187 = Uv_1s.read(); //gcnl:Node.cpp:698
                          Ui_Ut_10161u<EC> Uh_5tlval42188(Uh_5tlreg42187); //gcnl:Node.cpp:1142
                          Ui_Ut_r102961a<EC> Uh_5tuval42190 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42185, Uh_5tlval42188); //gcnl:NodeFunctionCall.cpp:1043
                          const u32 Uh_5tlreg42191 = Ue_10105Empty10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval42190.read()); //gcnl:NodeConditionalIs.cpp:285
                          Uh_5tlreg42178 = Uh_5tlreg42191; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                        }
                        if(_Bool32ToCbool(Uh_5tlreg42178, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! NotLife2.ulam:51:         else if (neighbors == 3u && ew[s] is Empty){ ew[s] = NotLife2.instanceof;}
                            Ui_Ue_102568NotLife210<EC> Uh_5tuval42192; //gcnl:NodeInstanceof.cpp:113
                            UlamRef<EC> Uh_3tur42194(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg42196 = Uv_1s.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval42197(Uh_5tlreg42196); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval42199 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42194, Uh_5tlval42197); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval42199.WriteAtom(Uh_5tuval42192.read()); //write into atomof ref //gcnl:Node.cpp:992
                          }
                        } // end if
                      }
                  } //end else
                }
              }

//! NotLife2.ulam:34:       for (Int(15) y = -1; y < 2; y++){
Ul_214endcontrolloop214:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! NotLife2.ulam:34:       for (Int(15) y = -1; y < 2; y++){
              const u32 Uh_5tlreg42200 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42201 = _Int32ToInt32(Uh_5tlreg42200, 32, 15); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42203 = Uv_1y.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg42204 = _BinOpAddInt32(Uh_5tlreg42203, Uh_5tlreg42201, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1y.write(Uh_5tlreg42204); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }

//! NotLife2.ulam:33:     for (Int(15) x = -1; x < 2; x++){
Ul_214endcontrolloop213:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! NotLife2.ulam:33:     for (Int(15) x = -1; x < 2; x++){
        const u32 Uh_5tlreg42205 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42206 = _Int32ToInt32(Uh_5tlreg42205, 32, 15); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42208 = Uv_1x.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42209 = _BinOpAddInt32(Uh_5tlreg42208, Uh_5tlreg42206, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1x.write(Uh_5tlreg42209); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_6behave



//! NotLife2.ulam:21:   ARGB getColor(Unsigned selector){
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102568NotLife210<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! NotLife2.ulam:22:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! NotLife2.ulam:23:     ARGB ret=cu.color(0xff00ff00u);
    UlamRef<EC> Uh_3tur42211(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg42212 = 4278255360u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval42213(Uh_5tlreg42212); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval42215 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur42211, Uh_5tlval42213); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg42216 = Uh_5tlval42215.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg42216); //gcnl:NodeVarDecl.cpp:1081

//! NotLife2.ulam:24:     ret[1]=red;
    const u32 Uh_5tlreg42218 = UlamRef<EC>(ur, 32u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg42219 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42219 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42221(Uv_3ret, Uh_5tlreg42219 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42221.write(Uh_5tlreg42218);

//! NotLife2.ulam:25:     ret[2]=green;
    const u32 Uh_5tlreg42223 = UlamRef<EC>(ur, 40u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg42224 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42224 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42226(Uv_3ret, Uh_5tlreg42224 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42226.write(Uh_5tlreg42223);

//! NotLife2.ulam:26:     ret[3]=blue;
    const u32 Uh_5tlreg42228 = UlamRef<EC>(ur, 48u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg42229 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg42229 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref42231(Uv_3ret, Uh_5tlreg42229 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref42231.write(Uh_5tlreg42228);

//! NotLife2.ulam:28:     return ret;
    const u32 Uh_5tlreg42233 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval42234(Uh_5tlreg42233); //gcnl:Node.cpp:1142
    return (Uh_5tlval42234); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor



//! NotLife2.ulam:16:   Void updateColor(){
  template<class EC>
  void Ue_102568NotLife210<EC>::Uf_9211updateColor(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! NotLife2.ulam:17:     if (green > 0u) green -= 4;
    {

//! NotLife2.ulam:17:     if (green > 0u) green -= 4;
      const u32 Uh_5tlreg42235 = 0u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42236 = _Unsigned32ToUnsigned32(Uh_5tlreg42235, 1, 8); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg42238 = UlamRef<EC>(ur, 40u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42239 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg42238, Uh_5tlreg42236, 8); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42239, 1)) //gcnl:NodeControl.cpp:213
      {

//! NotLife2.ulam:17:     if (green > 0u) green -= 4;
          const u32 Uh_5tlreg42240 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42241 = _Int32ToUnsigned32(Uh_5tlreg42240, 4, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42243 = UlamRef<EC>(ur, 40u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42244 = _BinOpSubtractUnsigned32(Uh_5tlreg42243, Uh_5tlreg42241, 8); //gcnl:NodeBinaryOpEqualArith.cpp:244
          UlamRef<EC>(ur, 40u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42244); //gcnl:Node.cpp:892
      } // end if
    }

//! NotLife2.ulam:18:     if (red < 255u) red += 8;
    {

//! NotLife2.ulam:18:     if (red < 255u) red += 8;
      const u32 Uh_5tlreg42245 = 255u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42247 = UlamRef<EC>(ur, 32u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg42248 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42247, Uh_5tlreg42245, 8); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg42248, 1)) //gcnl:NodeControl.cpp:213
      {

//! NotLife2.ulam:18:     if (red < 255u) red += 8;
          const u32 Uh_5tlreg42249 = 8; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg42250 = _Int32ToUnsigned32(Uh_5tlreg42249, 5, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg42252 = UlamRef<EC>(ur, 32u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg42253 = _BinOpAddUnsigned32(Uh_5tlreg42252, Uh_5tlreg42250, 8); //gcnl:NodeBinaryOpEqualArith.cpp:244
          UlamRef<EC>(ur, 32u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42253); //gcnl:Node.cpp:892
      } // end if
    }

  } // Uf_9211updateColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102568NotLife210<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_10109210DebugUtils10", "du", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Uq_102323C2D10", "c", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Ut_10181u", "red", 32u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Ut_10181u", "green", 40u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 5: { static UlamClassDataMemberInfo i("Ut_10181u", "blue", 48u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102568NotLife210<EC>::GetDataMemberCount() const
  {
    return 6; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102568NotLife210<EC>::GetMangledClassName() const
  {
    return "Ue_102568NotLife210"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102568NotLife210<EC>::GetClassLength( ) const
  {
    return 56; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102568NotLife210<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102568NotLife210<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102568NotLife210<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x0, 0x0, 0x40000000 }; //gcnl:CompilerState.cpp:1395
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      //correct runtime regnum for strings
      const Ui_Uq_102323C2D10<EC> Uh_5tlreg42254; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg42255(Uh_5tlreg42254.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(25u, 32, Uh_5tlreg42255); //Um_1c //gcnl:NodeVarDeclDM.cpp:832
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102568NotLife210<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102568NotLife210<EC>::Uf_6behave10) &Ue_102568NotLife210<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102568NotLife210<EC>::Uf_8getColor11102321u) &Ue_102568NotLife210<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102568NotLife210<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102568NotLife210<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102568NotLife210<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102568NotLife210<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102568NotLife210<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102568NotLife210<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

