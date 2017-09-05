/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Uq_102329210DataHolder10<EC>::Uq_102329210DataHolder10() : UlamQuark<EC>(MFM_UUID_FOR("Uq102329210DataHolder10", 0))
  { }

  template<class EC>
  Uq_102329210DataHolder10<EC>::~Uq_102329210DataHolder10(){} //gcnl:NodeBlockClass.cpp:1784


//! DataHolder.ulam:20:   ARGB getColor(Unsigned selector){
  template<class EC>
  Ui_Ut_14181u<EC> Uq_102329210DataHolder10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! DataHolder.ulam:21:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! DataHolder.ulam:22:     ARGB ret=cu.color(0xff00ff00u);
    UlamRef<EC> Uh_3tur3847(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3848 = 4278255360u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval3849(Uh_5tlreg3848); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval3851 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur3847, Uh_5tlval3849); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3852 = Uh_5tlval3851.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg3852); //gcnl:NodeVarDecl.cpp:1081

//! DataHolder.ulam:23:     ret[1] = 0;
    const u32 Uh_5tlreg3853 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3854 = _Int32ToUnsigned32(Uh_5tlreg3853, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3855 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3855 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3857(Uv_3ret, Uh_5tlreg3855 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3857.write(Uh_5tlreg3854);

//! DataHolder.ulam:24:     ret[2] = 0;
    const u32 Uh_5tlreg3858 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3859 = _Int32ToUnsigned32(Uh_5tlreg3858, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3860 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3860 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3862(Uv_3ret, Uh_5tlreg3860 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3862.write(Uh_5tlreg3859);

//! DataHolder.ulam:25:     ret[3] = 128;
    const u32 Uh_5tlreg3863 = 128; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3864 = _Int32ToUnsigned32(Uh_5tlreg3863, 9, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3865 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3865 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3867(Uv_3ret, Uh_5tlreg3865 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3867.write(Uh_5tlreg3864);

//! DataHolder.ulam:27:     if (hasData){
    {

//! DataHolder.ulam:27:     if (hasData){
      const u32 Uh_5tlreg3869 = UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg3869, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! DataHolder.ulam:28:       ret[1] = 255;
          const u32 Uh_5tlreg3870 = 255; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3871 = _Int32ToUnsigned32(Uh_5tlreg3870, 9, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3872 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg3872 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3874(Uv_3ret, Uh_5tlreg3872 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3874.write(Uh_5tlreg3871);

//! DataHolder.ulam:29:       ret[3] = 0;
          const u32 Uh_5tlreg3875 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3876 = _Int32ToUnsigned32(Uh_5tlreg3875, 2, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3877 = 3; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg3877 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3879(Uv_3ret, Uh_5tlreg3877 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3879.write(Uh_5tlreg3876);
        }
      } // end if
      else
      {

//! DataHolder.ulam:31:     else if (cooldown){
          {

//! DataHolder.ulam:31:     else if (cooldown){
            const u32 Uh_5tlreg3881 = UlamRef<EC>(ur, 31u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            if(_Bool32ToCbool(Uh_5tlreg3881, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DataHolder.ulam:32:       ret[1] = 255;
                const u32 Uh_5tlreg3882 = 255; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3883 = _Int32ToUnsigned32(Uh_5tlreg3882, 9, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3884 = 1; //gcnl:NodeTerminal.cpp:690
                if(Uh_5tlreg3884 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref3886(Uv_3ret, Uh_5tlreg3884 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref3886.write(Uh_5tlreg3883);

//! DataHolder.ulam:33:       ret[2] = 255;
                const u32 Uh_5tlreg3887 = 255; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3888 = _Int32ToUnsigned32(Uh_5tlreg3887, 9, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3889 = 2; //gcnl:NodeTerminal.cpp:690
                if(Uh_5tlreg3889 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref3891(Uv_3ret, Uh_5tlreg3889 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref3891.write(Uh_5tlreg3888);

//! DataHolder.ulam:34:       ret[3] = 0;
                const u32 Uh_5tlreg3892 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3893 = _Int32ToUnsigned32(Uh_5tlreg3892, 2, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3894 = 3; //gcnl:NodeTerminal.cpp:690
                if(Uh_5tlreg3894 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref3896(Uv_3ret, Uh_5tlreg3894 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref3896.write(Uh_5tlreg3893);
              }
            } // end if
          }
      } //end else
    }

//! DataHolder.ulam:37:     return ret;
    const u32 Uh_5tlreg3898 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3899(Uh_5tlreg3898); //gcnl:Node.cpp:1142
    return (Uh_5tlval3899); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor



//! DataHolder.ulam:41:   Bool canTransmit(){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102329210DataHolder10<EC>::Uf_9211canTransmit(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! DataHolder.ulam:42:     return !cooldown;
    const u32 Uh_5tlreg3901 = UlamRef<EC>(ur, 31u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
    const u32 Uh_5tlreg3902 = _LogicalBangBool32(Uh_5tlreg3901, 1); //gcnl:NodeUnaryOp.cpp:507
    Ui_Ut_10111b<EC> Uh_5tlval3903(Uh_5tlreg3902); //gcnl:Node.cpp:1142
    return (Uh_5tlval3903); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_9211canTransmit



//! DataHolder.ulam:46:   Void setData(Data d){
  template<class EC>
  void Uq_102329210DataHolder10<EC>::Uf_7setData(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102301u<EC>& Uv_1d) const
  {

//! DataHolder.ulam:47:     if (cooldown) return;
    {

//! DataHolder.ulam:47:     if (cooldown) return;
      const u32 Uh_5tlreg3905 = UlamRef<EC>(ur, 31u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg3905, 1)) //gcnl:NodeControl.cpp:213
      {

//! DataHolder.ulam:47:     if (cooldown) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! DataHolder.ulam:48:     data = d;
    const u32 Uh_5tlreg3907 = Uv_1d.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 30u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3907); //gcnl:Node.cpp:892

//! DataHolder.ulam:49:     hasData = true;
    const u32 Uh_5tlreg3909 = 1u; //gcnl:NodeTerminal.cpp:690
    UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3909); //gcnl:Node.cpp:892

  } // Uf_7setData



//! DataHolder.ulam:55:   Void transmit(){
  template<class EC>
  void Uq_102329210DataHolder10<EC>::Uf_8transmit(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! DataHolder.ulam:56:     if (!hasData || cooldown) return;
    {

//! DataHolder.ulam:56:     if (!hasData || cooldown) return;
      u32 Uh_5tlreg3911 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg3913 = UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3914 = _LogicalBangBool32(Uh_5tlreg3913, 1); //gcnl:NodeUnaryOp.cpp:507
      if(!_Bool32ToCbool(Uh_5tlreg3914, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg3916 = UlamRef<EC>(ur, 31u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        Uh_5tlreg3911 = Uh_5tlreg3916; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg3911 = Uh_5tlreg3914; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg3911, 1)) //gcnl:NodeControl.cpp:213
      {

//! DataHolder.ulam:56:     if (!hasData || cooldown) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! DataHolder.ulam:58:     for (SiteNumber i = 1; i < 5; i++){
    {

//! DataHolder.ulam:58:     for (SiteNumber i = 1; i < 5; i++){
      const u32 Uh_5tlreg3917 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3918 = _Int32ToUnsigned32(Uh_5tlreg3917, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg3918); //gcnl:NodeVarDecl.cpp:1081

//! DataHolder.ulam:58:     for (SiteNumber i = 1; i < 5; i++){
      while(true)
      {
        const u32 Uh_5tlreg3919 = 5; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3920 = _Int32ToInt32(Uh_5tlreg3919, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3922 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3923 = _Unsigned32ToInt32(Uh_5tlreg3922, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3924 = _BinOpCompareLessThanInt32(Uh_5tlreg3923, Uh_5tlreg3920, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3924, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DataHolder.ulam:58:     for (SiteNumber i = 1; i < 5; i++){
        {

//! DataHolder.ulam:59:       Atom dh = ew[i];
          UlamRef<EC> Uh_3tur3926(ur, 32u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3928 = Uv_1i.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval3929(Uh_5tlreg3928); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3931 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3926, Uh_5tlval3929); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Ut_102961a<EC> Uv_2dh(Uh_5tuval3931); //gcnl:NodeVarDecl.cpp:1081

//! DataHolder.ulam:60:       if (dh as DataHolder){
          {

//! DataHolder.ulam:60:       if (dh as DataHolder){
            const T Uh_3tut3933 = Uv_2dh.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3934 = UlamClass<EC>::IsMethod(uc, Uh_3tut3933.GetType(), &Uq_102329210DataHolder10<EC>::THE_INSTANCE); //gcnl:NodeConditionalAs.cpp:453
            if(_Bool32ToCbool(Uh_5tlreg3934, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DataHolder.ulam:60:       if (dh as DataHolder){
                Ui_Ut_102961a<EC> & Uh_5tuval3935 = Uv_2dh; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Uq_r102329210DataHolder10<EC> Uv_2dh(Uh_5tuval3935, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3935.GetType()), UlamRef<EC>::ELEMENTAL, uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DataHolder.ulam:61:         if (dh.canTransmit()){
                {

//! DataHolder.ulam:61:         if (dh.canTransmit()){
                  UlamRef<EC> Uh_3tur3937(Uv_2dh, 32u); //gcnl:NodeFunctionCall.cpp:960
                  const Ui_Ut_10111b<EC> Uh_5tlval3939 = Uq_102329210DataHolder10<EC>::THE_INSTANCE.Uf_9211canTransmit(uc, Uh_3tur3937); //gcnl:NodeFunctionCall.cpp:1043
                  const u32 Uh_5tlreg3940 = Uh_5tlval3939.read(); //gcnl:Node.cpp:1170
                  if(_Bool32ToCbool(Uh_5tlreg3940, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! DataHolder.ulam:62:           dh.setData(data);
                      UlamRef<EC> Uh_3tur3942(Uv_2dh, 32u); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3944 = UlamRef<EC>(ur, 0u, 30u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                      Ui_Ut_102301u<EC> Uh_5tlval3945(Uh_5tlreg3944); //gcnl:Node.cpp:1142
                      Uq_102329210DataHolder10<EC>::THE_INSTANCE.Uf_7setData(uc, Uh_3tur3942, Uh_5tlval3945); //gcnl:NodeFunctionCall.cpp:1043
                    }
                  } // end if
                }

//! DataHolder.ulam:64:         ew[i] = (Atom)dh;
                const u32 Uh_5tlreg3948 = Uv_2dh.read(); //gcnl:Node.cpp:698
                const bool Uh_5tlreg3950 = (Uv_2dh.GetType() != T::ATOM_UNDEFINED_TYPE); //gcnl:NodeCast.cpp:1086
                if(!Uh_5tlreg3950)
                  FAIL(BAD_CAST); //gcnl:NodeCast.cpp:1096

                const T Uh_3tut3951 = Uv_2dh.ReadAtom(); //gcnl:NodeCast.cpp:1164
                Ui_Ut_102961a<EC> Uh_5tuval3952(Uh_3tut3951); //gcnl:NodeCast.cpp:1174
                UlamRef<EC> Uh_3tur3954(ur, 32u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3956 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval3957(Uh_5tlreg3956); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3959 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3954, Uh_5tlval3957); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3959.WriteAtom(Uh_5tuval3952.read()); //write into atomof ref //gcnl:Node.cpp:992
              }
            } // end if
          }
        }

//! DataHolder.ulam:58:     for (SiteNumber i = 1; i < 5; i++){
Ul_214endcontrolloop13:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! DataHolder.ulam:58:     for (SiteNumber i = 1; i < 5; i++){
        const u32 Uh_5tlreg3960 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3961 = _Int32ToUnsigned32(Uh_5tlreg3960, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3963 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3964 = _BinOpAddUnsigned32(Uh_5tlreg3963, Uh_5tlreg3961, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3964); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! DataHolder.ulam:67:     hasData = false;
    const u32 Uh_5tlreg3965 = 0u; //gcnl:NodeTerminal.cpp:690
    UlamRef<EC>(ur, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3965); //gcnl:Node.cpp:892

//! DataHolder.ulam:68:     cooldown = true;
    const u32 Uh_5tlreg3967 = 1u; //gcnl:NodeTerminal.cpp:690
    UlamRef<EC>(ur, 31u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3967); //gcnl:Node.cpp:892

  } // Uf_8transmit



//! DataHolder.ulam:74:   Void checkCoolDown(){
  template<class EC>
  void Uq_102329210DataHolder10<EC>::Uf_9213checkCoolDown(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! DataHolder.ulam:75:     cooldown = false;
    const u32 Uh_5tlreg3969 = 0u; //gcnl:NodeTerminal.cpp:690
    UlamRef<EC>(ur, 31u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3969); //gcnl:Node.cpp:892

//! DataHolder.ulam:76:     for (SiteNumber i = 1; i < 5; i++){
    {

//! DataHolder.ulam:76:     for (SiteNumber i = 1; i < 5; i++){
      const u32 Uh_5tlreg3971 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3972 = _Int32ToUnsigned32(Uh_5tlreg3971, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg3972); //gcnl:NodeVarDecl.cpp:1081

//! DataHolder.ulam:76:     for (SiteNumber i = 1; i < 5; i++){
      while(true)
      {
        const u32 Uh_5tlreg3973 = 5; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3974 = _Int32ToInt32(Uh_5tlreg3973, 4, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3976 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3977 = _Unsigned32ToInt32(Uh_5tlreg3976, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3978 = _BinOpCompareLessThanInt32(Uh_5tlreg3977, Uh_5tlreg3974, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3978, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! DataHolder.ulam:76:     for (SiteNumber i = 1; i < 5; i++){
        {

//! DataHolder.ulam:77:       Atom dh = ew[i];
          UlamRef<EC> Uh_3tur3980(ur, 32u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3982 = Uv_1i.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval3983(Uh_5tlreg3982); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3985 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3980, Uh_5tlval3983); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Ut_102961a<EC> Uv_2dh(Uh_5tuval3985); //gcnl:NodeVarDecl.cpp:1081

//! DataHolder.ulam:78:       if (dh as DataHolder){
          {

//! DataHolder.ulam:78:       if (dh as DataHolder){
            const T Uh_3tut3987 = Uv_2dh.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3988 = UlamClass<EC>::IsMethod(uc, Uh_3tut3987.GetType(), &Uq_102329210DataHolder10<EC>::THE_INSTANCE); //gcnl:NodeConditionalAs.cpp:453
            if(_Bool32ToCbool(Uh_5tlreg3988, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! DataHolder.ulam:78:       if (dh as DataHolder){
                Ui_Ut_102961a<EC> & Uh_5tuval3989 = Uv_2dh; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Uq_r102329210DataHolder10<EC> Uv_2dh(Uh_5tuval3989, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3989.GetType()), UlamRef<EC>::ELEMENTAL, uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! DataHolder.ulam:79:         if (dh.hasData) cooldown = true;
                {

//! DataHolder.ulam:79:         if (dh.hasData) cooldown = true;
                  const u32 Uh_5tlreg3992 = UlamRef<EC>(Uv_2dh, 30u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:698
                  if(_Bool32ToCbool(Uh_5tlreg3992, 1)) //gcnl:NodeControl.cpp:213
                  {

//! DataHolder.ulam:79:         if (dh.hasData) cooldown = true;
                      const u32 Uh_5tlreg3993 = 1u; //gcnl:NodeTerminal.cpp:690
                      UlamRef<EC>(ur, 31u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3993); //gcnl:Node.cpp:892
                  } // end if
                }
              }
            } // end if
          }
        }

//! DataHolder.ulam:76:     for (SiteNumber i = 1; i < 5; i++){
Ul_214endcontrolloop14:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! DataHolder.ulam:76:     for (SiteNumber i = 1; i < 5; i++){
        const u32 Uh_5tlreg3995 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3996 = _Int32ToUnsigned32(Uh_5tlreg3995, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3998 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3999 = _BinOpAddUnsigned32(Uh_5tlreg3998, Uh_5tlreg3996, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3999); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9213checkCoolDown


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_102329210DataHolder10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Ut_102301u", "data", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Ut_10111b", "hasData", 30u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10111b", "cooldown", 31u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 32u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_102329210DataHolder10<EC>::GetDataMemberCount() const
  {
    return 4; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_102329210DataHolder10<EC>::GetMangledClassName() const
  {
    return "Uq_102329210DataHolder10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_102329210DataHolder10<EC>::GetClassLength( ) const
  {
    return 32; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_102329210DataHolder10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_102329210DataHolder10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_102329210DataHolder10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_102329210DataHolder10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_102329210DataHolder10<EC>::Uf_8getColor11102321u) &Uq_102329210DataHolder10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_102329210DataHolder10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_102329210DataHolder10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102329210DataHolder10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

