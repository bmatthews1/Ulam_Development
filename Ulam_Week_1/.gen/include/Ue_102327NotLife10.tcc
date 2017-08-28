/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_102323C2D10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_102327NotLife10<EC>::Ue_102327NotLife10() : UlamElement<EC>(MFM_UUID_FOR("Ue102327NotLife10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("N");  // figure this out later
    Element<EC>::SetName("NotLife"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102327NotLife10<EC>::~Ue_102327NotLife10(){} //gcnl:NodeBlockClass.cpp:1743


//! NotLife.ulam:9:   Void behave(){
  template<class EC>
  void Ue_102327NotLife10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! NotLife.ulam:10:     for (Int(15) x = -1; x < 1; x++){
    {

//! NotLife.ulam:10:     for (Int(15) x = -1; x < 1; x++){
      const u32 Uh_5tlreg42256 = (u32) -1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg42257 = _Int32ToInt32(Uh_5tlreg42256, 2, 15); //gcnl:NodeCast.cpp:748
      Ui_Ut_102151i<EC> Uv_1x(Uh_5tlreg42257); //gcnl:NodeVarDecl.cpp:1081

//! NotLife.ulam:10:     for (Int(15) x = -1; x < 1; x++){
      while(true)
      {
        const u32 Uh_5tlreg42258 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42259 = _Int32ToInt32(Uh_5tlreg42258, 2, 15); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42261 = Uv_1x.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42262 = _BinOpCompareLessThanInt32(Uh_5tlreg42261, Uh_5tlreg42259, 15); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg42262, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! NotLife.ulam:10:     for (Int(15) x = -1; x < 1; x++){
        {

//! NotLife.ulam:11:       for (Int(15) y = -1; y < 1; y++){
          {

//! NotLife.ulam:11:       for (Int(15) y = -1; y < 1; y++){
            const u32 Uh_5tlreg42263 = (u32) -1; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg42264 = _Int32ToInt32(Uh_5tlreg42263, 2, 15); //gcnl:NodeCast.cpp:748
            Ui_Ut_102151i<EC> Uv_1y(Uh_5tlreg42264); //gcnl:NodeVarDecl.cpp:1081

//! NotLife.ulam:11:       for (Int(15) y = -1; y < 1; y++){
            while(true)
            {
              const u32 Uh_5tlreg42265 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42266 = _Int32ToInt32(Uh_5tlreg42265, 2, 15); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42268 = Uv_1y.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg42269 = _BinOpCompareLessThanInt32(Uh_5tlreg42268, Uh_5tlreg42266, 15); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg42269, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! NotLife.ulam:11:       for (Int(15) y = -1; y < 1; y++){
              {

//! NotLife.ulam:12:         Unsigned neighbors = 0;
                const u32 Uh_5tlreg42270 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg42271 = _Int32ToUnsigned32(Uh_5tlreg42270, 2, 32); //gcnl:NodeCast.cpp:748
                Ui_Ut_102321u<EC> Uv_919neighbors(Uh_5tlreg42271); //gcnl:NodeVarDecl.cpp:1081

//! NotLife.ulam:13:       	for (Int(15) dx = -1; dx < 1; dx++){
                {

//! NotLife.ulam:13:       	for (Int(15) dx = -1; dx < 1; dx++){
                  const u32 Uh_5tlreg42272 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg42273 = _Int32ToInt32(Uh_5tlreg42272, 2, 15); //gcnl:NodeCast.cpp:748
                  Ui_Ut_102151i<EC> Uv_2dx(Uh_5tlreg42273); //gcnl:NodeVarDecl.cpp:1081

//! NotLife.ulam:13:       	for (Int(15) dx = -1; dx < 1; dx++){
                  while(true)
                  {
                    const u32 Uh_5tlreg42274 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42275 = _Int32ToInt32(Uh_5tlreg42274, 2, 15); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42277 = Uv_2dx.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42278 = _BinOpCompareLessThanInt32(Uh_5tlreg42277, Uh_5tlreg42275, 15); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg42278, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! NotLife.ulam:13:       	for (Int(15) dx = -1; dx < 1; dx++){
                    {

//! NotLife.ulam:14:           for (Int(15) dy = -1; dy < 1; dy++){
                      {

//! NotLife.ulam:14:           for (Int(15) dy = -1; dy < 1; dy++){
                        const u32 Uh_5tlreg42279 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42280 = _Int32ToInt32(Uh_5tlreg42279, 2, 15); //gcnl:NodeCast.cpp:748
                        Ui_Ut_102151i<EC> Uv_2dy(Uh_5tlreg42280); //gcnl:NodeVarDecl.cpp:1081

//! NotLife.ulam:14:           for (Int(15) dy = -1; dy < 1; dy++){
                        while(true)
                        {
                          const u32 Uh_5tlreg42281 = 1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42282 = _Int32ToInt32(Uh_5tlreg42281, 2, 15); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42284 = Uv_2dy.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42285 = _BinOpCompareLessThanInt32(Uh_5tlreg42284, Uh_5tlreg42282, 15); //gcnl:NodeBinaryOpCompare.cpp:441

                          if(!_Bool32ToCbool(Uh_5tlreg42285, 1))
                            break; //gcnl:NodeControlWhile.cpp:135

//! NotLife.ulam:14:           for (Int(15) dy = -1; dy < 1; dy++){
                          {

//! NotLife.ulam:15:             c.x = x + dx;
                            const u32 Uh_5tlreg42287 = Uv_2dx.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg42288 = _Int32ToInt32(Uh_5tlreg42287, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg42290 = Uv_1x.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg42291 = _Int32ToInt32(Uh_5tlreg42290, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg42292 = _BinOpAddInt32(Uh_5tlreg42291, Uh_5tlreg42288, 16); //gcnl:NodeBinaryOp.cpp:805
                            UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42292); //gcnl:Node.cpp:892

//! NotLife.ulam:16:             c.y = y + dy;
                            const u32 Uh_5tlreg42296 = Uv_2dy.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg42297 = _Int32ToInt32(Uh_5tlreg42296, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg42299 = Uv_1y.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg42300 = _Int32ToInt32(Uh_5tlreg42299, 15, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg42301 = _BinOpAddInt32(Uh_5tlreg42300, Uh_5tlreg42297, 16); //gcnl:NodeBinaryOp.cpp:805
                            UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42301); //gcnl:Node.cpp:892

//! NotLife.ulam:17:             if (!ew.isEmpty(ew.getSiteNumber(c))){neighbors++;}
                            {

//! NotLife.ulam:17:             if (!ew.isEmpty(ew.getSiteNumber(c))){neighbors++;}
                              UlamRef<EC> Uh_3tur42305(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                              UlamRef<EC> Uh_3tur42307(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                              const u32 Uh_5tlreg42309 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:664
                              Ui_Uq_102323C2D10<EC> Uh_5tlval42310(Uh_5tlreg42309); //gcnl:Node.cpp:1142
                              const Ui_Ut_10161u<EC> Uh_5tlval42312 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur42307, Uh_5tlval42310); //gcnl:NodeFunctionCall.cpp:1043
                              const u32 Uh_5tlreg42313 = Uh_5tlval42312.read(); //gcnl:Node.cpp:1170
                              Ui_Ut_10161u<EC> Uh_5tlval42314(Uh_5tlreg42313); //gcnl:Node.cpp:1142
                              const Ui_Ut_10111b<EC> Uh_5tlval42316 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur42305, Uh_5tlval42314); //gcnl:NodeFunctionCall.cpp:1043
                              const u32 Uh_5tlreg42317 = Uh_5tlval42316.read(); //gcnl:Node.cpp:1170
                              const u32 Uh_5tlreg42318 = _LogicalBangBool32(Uh_5tlreg42317, 1); //gcnl:NodeUnaryOp.cpp:507
                              if(_Bool32ToCbool(Uh_5tlreg42318, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! NotLife.ulam:17:             if (!ew.isEmpty(ew.getSiteNumber(c))){neighbors++;}
                                  const u32 Uh_5tlreg42319 = 1; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg42320 = _Int32ToUnsigned32(Uh_5tlreg42319, 32, 32); //gcnl:NodeCast.cpp:748
                                  const u32 Uh_5tlreg42322 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                                  const u32 Uh_5tlreg42323 = _BinOpAddUnsigned32(Uh_5tlreg42322, Uh_5tlreg42320, 32); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                                  Uv_919neighbors.write(Uh_5tlreg42323); //gcnl:Node.cpp:892
                                }
                              } // end if
                            }
                          }

//! NotLife.ulam:14:           for (Int(15) dy = -1; dy < 1; dy++){
Ul_214endcontrolloop220:
                          __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! NotLife.ulam:14:           for (Int(15) dy = -1; dy < 1; dy++){
                          const u32 Uh_5tlreg42324 = 1; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42325 = _Int32ToInt32(Uh_5tlreg42324, 32, 15); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42327 = Uv_2dy.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42328 = _BinOpAddInt32(Uh_5tlreg42327, Uh_5tlreg42325, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                          Uv_2dy.write(Uh_5tlreg42328); //gcnl:Node.cpp:892
                        } // end while //gcnl:NodeControlWhile.cpp:145
                      }
                    }

//! NotLife.ulam:13:       	for (Int(15) dx = -1; dx < 1; dx++){
Ul_214endcontrolloop219:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! NotLife.ulam:13:       	for (Int(15) dx = -1; dx < 1; dx++){
                    const u32 Uh_5tlreg42329 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg42330 = _Int32ToInt32(Uh_5tlreg42329, 32, 15); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg42332 = Uv_2dx.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg42333 = _BinOpAddInt32(Uh_5tlreg42332, Uh_5tlreg42330, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                    Uv_2dx.write(Uh_5tlreg42333); //gcnl:Node.cpp:892
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }

//! NotLife.ulam:20:         c.x = x;
                const u32 Uh_5tlreg42335 = Uv_1x.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg42336 = _Int32ToInt32(Uh_5tlreg42335, 15, 16); //gcnl:NodeCast.cpp:748
                UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42336); //gcnl:Node.cpp:892

//! NotLife.ulam:21:         c.y = y;
                const u32 Uh_5tlreg42340 = Uv_1y.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg42341 = _Int32ToInt32(Uh_5tlreg42340, 15, 16); //gcnl:NodeCast.cpp:748
                UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg42341); //gcnl:Node.cpp:892

//! NotLife.ulam:22:         Unsigned(6) s = ew.getSiteNumber(c);
                UlamRef<EC> Uh_3tur42345(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg42347 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:664
                Ui_Uq_102323C2D10<EC> Uh_5tlval42348(Uh_5tlreg42347); //gcnl:Node.cpp:1142
                const Ui_Ut_10161u<EC> Uh_5tlval42350 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur42345, Uh_5tlval42348); //gcnl:NodeFunctionCall.cpp:1043
                const u32 Uh_5tlreg42351 = Uh_5tlval42350.read(); //gcnl:Node.cpp:1170
                Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg42351); //gcnl:NodeVarDecl.cpp:1081

//! NotLife.ulam:23:         if (!ew.isEmpty(s)){
                {

//! NotLife.ulam:23:         if (!ew.isEmpty(s)){
                  UlamRef<EC> Uh_3tur42353(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                  const u32 Uh_5tlreg42355 = Uv_1s.read(); //gcnl:Node.cpp:698
                  Ui_Ut_10161u<EC> Uh_5tlval42356(Uh_5tlreg42355); //gcnl:Node.cpp:1142
                  const Ui_Ut_10111b<EC> Uh_5tlval42358 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_7isEmpty(uc, Uh_3tur42353, Uh_5tlval42356); //gcnl:NodeFunctionCall.cpp:1043
                  const u32 Uh_5tlreg42359 = Uh_5tlval42358.read(); //gcnl:Node.cpp:1170
                  const u32 Uh_5tlreg42360 = _LogicalBangBool32(Uh_5tlreg42359, 1); //gcnl:NodeUnaryOp.cpp:507
                  if(_Bool32ToCbool(Uh_5tlreg42360, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! NotLife.ulam:24:           if (neighbors < 2u || neighbors > 3u){ ew[s] = Empty.instanceof;}
                      {

//! NotLife.ulam:24:           if (neighbors < 2u || neighbors > 3u){ ew[s] = Empty.instanceof;}
                        u32 Uh_5tlreg42361 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
                        const u32 Uh_5tlreg42362 = 2u; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42363 = _Unsigned32ToUnsigned32(Uh_5tlreg42362, 2, 32); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42365 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42366 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg42365, Uh_5tlreg42363, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(!_Bool32ToCbool(Uh_5tlreg42366, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
                        {
                          const u32 Uh_5tlreg42367 = 3u; //gcnl:NodeTerminal.cpp:690
                          const u32 Uh_5tlreg42368 = _Unsigned32ToUnsigned32(Uh_5tlreg42367, 2, 32); //gcnl:NodeCast.cpp:748
                          const u32 Uh_5tlreg42370 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg42371 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg42370, Uh_5tlreg42368, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                          Uh_5tlreg42361 = Uh_5tlreg42371; //gcnl:NodeBinaryOpLogicalOr.cpp:146
                        }
                        else
                        {
                          Uh_5tlreg42361 = Uh_5tlreg42366; //gcnl:NodeBinaryOpLogicalOr.cpp:163
                        }
                        if(_Bool32ToCbool(Uh_5tlreg42361, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! NotLife.ulam:24:           if (neighbors < 2u || neighbors > 3u){ ew[s] = Empty.instanceof;}
                            Ui_Ue_10105Empty10<EC> Uh_5tuval42372; //gcnl:NodeInstanceof.cpp:113
                            UlamRef<EC> Uh_3tur42374(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg42376 = Uv_1s.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval42377(Uh_5tlreg42376); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval42379 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42374, Uh_5tlval42377); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval42379.WriteAtom(Uh_5tuval42372.read()); //write into atomof ref //gcnl:Node.cpp:992
                          }
                        } // end if
                      }
                    }
                  } // end if
                  else
                  {

//! NotLife.ulam:25:         } else if (neighbors == 3u && ew[s] is Empty){ ew[s] = NotLife.instanceof;}
                      {

//! NotLife.ulam:25:         } else if (neighbors == 3u && ew[s] is Empty){ ew[s] = NotLife.instanceof;}
                        u32 Uh_5tlreg42380 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                        const u32 Uh_5tlreg42381 = 3u; //gcnl:NodeTerminal.cpp:690
                        const u32 Uh_5tlreg42382 = _Unsigned32ToUnsigned32(Uh_5tlreg42381, 2, 32); //gcnl:NodeCast.cpp:748
                        const u32 Uh_5tlreg42384 = Uv_919neighbors.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg42385 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg42384, Uh_5tlreg42382, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                        if(_Bool32ToCbool(Uh_5tlreg42385, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                        {
                          UlamRef<EC> Uh_3tur42387(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                          const u32 Uh_5tlreg42389 = Uv_1s.read(); //gcnl:Node.cpp:698
                          Ui_Ut_10161u<EC> Uh_5tlval42390(Uh_5tlreg42389); //gcnl:Node.cpp:1142
                          Ui_Ut_r102961a<EC> Uh_5tuval42392 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42387, Uh_5tlval42390); //gcnl:NodeFunctionCall.cpp:1043
                          const u32 Uh_5tlreg42393 = Ue_10105Empty10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval42392.read()); //gcnl:NodeConditionalIs.cpp:285
                          Uh_5tlreg42380 = Uh_5tlreg42393; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                        }
                        if(_Bool32ToCbool(Uh_5tlreg42380, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! NotLife.ulam:25:         } else if (neighbors == 3u && ew[s] is Empty){ ew[s] = NotLife.instanceof;}
                            Ui_Ue_102327NotLife10<EC> Uh_5tuval42394; //gcnl:NodeInstanceof.cpp:113
                            UlamRef<EC> Uh_3tur42396(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg42398 = Uv_1s.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval42399(Uh_5tlreg42398); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval42401 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur42396, Uh_5tlval42399); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval42401.WriteAtom(Uh_5tuval42394.read()); //write into atomof ref //gcnl:Node.cpp:992
                          }
                        } // end if
                      }
                  } //end else
                }
              }

//! NotLife.ulam:11:       for (Int(15) y = -1; y < 1; y++){
Ul_214endcontrolloop218:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! NotLife.ulam:11:       for (Int(15) y = -1; y < 1; y++){
              const u32 Uh_5tlreg42402 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg42403 = _Int32ToInt32(Uh_5tlreg42402, 32, 15); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg42405 = Uv_1y.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg42406 = _BinOpAddInt32(Uh_5tlreg42405, Uh_5tlreg42403, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1y.write(Uh_5tlreg42406); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }

//! NotLife.ulam:10:     for (Int(15) x = -1; x < 1; x++){
Ul_214endcontrolloop217:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! NotLife.ulam:10:     for (Int(15) x = -1; x < 1; x++){
        const u32 Uh_5tlreg42407 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg42408 = _Int32ToInt32(Uh_5tlreg42407, 32, 15); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg42410 = Uv_1x.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg42411 = _BinOpAddInt32(Uh_5tlreg42410, Uh_5tlreg42408, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1x.write(Uh_5tlreg42411); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_6behave


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102327NotLife10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_102323C2D10", "c", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102327NotLife10<EC>::GetDataMemberCount() const
  {
    return 2; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102327NotLife10<EC>::GetMangledClassName() const
  {
    return "Ue_102327NotLife10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102327NotLife10<EC>::GetClassLength( ) const
  {
    return 32; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102327NotLife10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102327NotLife10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102327NotLife10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102327NotLife10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102327NotLife10<EC>::Uf_6behave10) &Ue_102327NotLife10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102327NotLife10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102327NotLife10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102327NotLife10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102327NotLife10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102327NotLife10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102327NotLife10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

