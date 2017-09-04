/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Uq_10109210ColorUtils10<EC>::Uq_10109210ColorUtils10() : UlamQuark<EC>(MFM_UUID_FOR("Uq10109210ColorUtils10", 0))
  { }

  template<class EC>
  Uq_10109210ColorUtils10<EC>::~Uq_10109210ColorUtils10(){} //gcnl:NodeBlockClass.cpp:1784


//! ColorUtils.ulam:24:   ARGB color(Byte red, Byte green, Byte blue) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181t<EC>& Uv_3red, Ui_Ut_10181t<EC>& Uv_5green, Ui_Ut_10181t<EC>& Uv_4blue) const
  {

//! ColorUtils.ulam:25:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! ColorUtils.ulam:26:     ret[0] = (Channel) 0xff;
    const u32 Uh_5tlreg3831 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3832 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3832 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3834(Uv_3ret, Uh_5tlreg3832 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3834.write(Uh_5tlreg3831);

//! ColorUtils.ulam:27:     ret[1] = (Channel) (red & 0xff);
    const u32 Uh_5tlreg3835 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3836 = _Unsigned32ToBits32(Uh_5tlreg3835, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3838 = Uv_3red.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3839 = _BitwiseAndBits32(Uh_5tlreg3838, Uh_5tlreg3836, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3840 = _Bits32ToUnsigned32(Uh_5tlreg3839, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3841 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3841 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3843(Uv_3ret, Uh_5tlreg3841 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3843.write(Uh_5tlreg3840);

//! ColorUtils.ulam:28:     ret[2] = (Channel) (green & 0xff);
    const u32 Uh_5tlreg3844 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3845 = _Unsigned32ToBits32(Uh_5tlreg3844, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3847 = Uv_5green.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3848 = _BitwiseAndBits32(Uh_5tlreg3847, Uh_5tlreg3845, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3849 = _Bits32ToUnsigned32(Uh_5tlreg3848, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3850 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3850 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3852(Uv_3ret, Uh_5tlreg3850 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3852.write(Uh_5tlreg3849);

//! ColorUtils.ulam:29:     ret[3] = (Channel) (blue & 0xff);
    const u32 Uh_5tlreg3853 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3854 = _Unsigned32ToBits32(Uh_5tlreg3853, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3856 = Uv_4blue.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3857 = _BitwiseAndBits32(Uh_5tlreg3856, Uh_5tlreg3854, 8); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3858 = _Bits32ToUnsigned32(Uh_5tlreg3857, 8, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3859 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3859 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3861(Uv_3ret, Uh_5tlreg3859 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3861.write(Uh_5tlreg3858);

//! ColorUtils.ulam:30:     return ret;
    const u32 Uh_5tlreg3863 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3864(Uh_5tlreg3863); //gcnl:Node.cpp:1142
    return (Uh_5tlval3864); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:8:   ARGB color(Int hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:9:     return color((Bits) hex);
    const u32 Uh_5tlreg3867 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3868 = _Int32ToBits32(Uh_5tlreg3867, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval3869(Uh_5tlreg3868); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval3871 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval3869); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3872 = Uh_5tlval3871.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval3873(Uh_5tlreg3872); //gcnl:Node.cpp:1142
    return (Uh_5tlval3873); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:12:   ARGB color(Unsigned hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:13:     return color((Bits) hex);
    const u32 Uh_5tlreg3876 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3877 = _Unsigned32ToBits32(Uh_5tlreg3876, 32, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321t<EC> Uh_5tlval3878(Uh_5tlreg3877); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval3880 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval3878); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3881 = Uh_5tlval3880.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uh_5tlval3882(Uh_5tlreg3881); //gcnl:Node.cpp:1142
    return (Uh_5tlval3882); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:16:   ARGB color(Bits hex) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_5color(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321t<EC>& Uv_3hex) const
  {

//! ColorUtils.ulam:17:     ARGB ret;
    Ui_Ut_14181u<EC> Uv_3ret; //gcnl:NodeVarDecl.cpp:1118

//! ColorUtils.ulam:18:     ret[0] = (Channel) ((hex >> 24) & 0xff);
    const u32 Uh_5tlreg3883 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3884 = _Unsigned32ToBits32(Uh_5tlreg3883, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3885 = 24; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3886 = _Int32ToUnsigned32(Uh_5tlreg3885, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3888 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3889 = _ShiftOpRightBits32(Uh_5tlreg3888, Uh_5tlreg3886, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3890 = _BitwiseAndBits32(Uh_5tlreg3889, Uh_5tlreg3884, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3891 = _Bits32ToUnsigned32(Uh_5tlreg3890, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3892 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3892 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3894(Uv_3ret, Uh_5tlreg3892 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3894.write(Uh_5tlreg3891);

//! ColorUtils.ulam:19:     ret[1] = (Channel) ((hex >> 16) & 0xff);
    const u32 Uh_5tlreg3895 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3896 = _Unsigned32ToBits32(Uh_5tlreg3895, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3897 = 16; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3898 = _Int32ToUnsigned32(Uh_5tlreg3897, 6, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3900 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3901 = _ShiftOpRightBits32(Uh_5tlreg3900, Uh_5tlreg3898, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3902 = _BitwiseAndBits32(Uh_5tlreg3901, Uh_5tlreg3896, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3903 = _Bits32ToUnsigned32(Uh_5tlreg3902, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3904 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3904 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3906(Uv_3ret, Uh_5tlreg3904 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3906.write(Uh_5tlreg3903);

//! ColorUtils.ulam:20:     ret[2] = (Channel) ((hex >>  8) & 0xff);
    const u32 Uh_5tlreg3907 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3908 = _Unsigned32ToBits32(Uh_5tlreg3907, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3909 = 8; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3910 = _Int32ToUnsigned32(Uh_5tlreg3909, 5, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3912 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3913 = _ShiftOpRightBits32(Uh_5tlreg3912, Uh_5tlreg3910, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3914 = _BitwiseAndBits32(Uh_5tlreg3913, Uh_5tlreg3908, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3915 = _Bits32ToUnsigned32(Uh_5tlreg3914, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3916 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3916 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3918(Uv_3ret, Uh_5tlreg3916 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3918.write(Uh_5tlreg3915);

//! ColorUtils.ulam:21:     ret[3] = (Channel) ((hex >>  0) & 0xff);
    const u32 Uh_5tlreg3919 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3920 = _Unsigned32ToBits32(Uh_5tlreg3919, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3921 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3922 = _Int32ToUnsigned32(Uh_5tlreg3921, 2, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3924 = Uv_3hex.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3925 = _ShiftOpRightBits32(Uh_5tlreg3924, Uh_5tlreg3922, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3926 = _BitwiseAndBits32(Uh_5tlreg3925, Uh_5tlreg3920, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3927 = _Bits32ToUnsigned32(Uh_5tlreg3926, 32, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3928 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3928 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3930(Uv_3ret, Uh_5tlreg3928 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3930.write(Uh_5tlreg3927);

//! ColorUtils.ulam:22:     return ret;
    const u32 Uh_5tlreg3932 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3933(Uh_5tlreg3932); //gcnl:Node.cpp:1142
    return (Uh_5tlval3933); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_5color



//! ColorUtils.ulam:33:   ARGB modify(ARGB this, Unsigned percent) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6modify(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4this, Ui_Ut_102321u<EC>& Uv_7percent) const
  {

//! ColorUtils.ulam:34:     Unsigned rest = (Unsigned) 100 - percent;
    const u32 Uh_5tlreg3935 = Uv_7percent.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3936 = 100; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3937 = _Int32ToUnsigned32(Uh_5tlreg3936, 8, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3938 = _BinOpSubtractUnsigned32(Uh_5tlreg3937, Uh_5tlreg3935, 32); //gcnl:NodeBinaryOp.cpp:805
    Ui_Ut_102321u<EC> Uv_4rest(Uh_5tlreg3938); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg3939 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3940 = _Int32ToInt32(Uh_5tlreg3939, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg3940); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg3941 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3942 = _Int32ToInt32(Uh_5tlreg3941, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3944 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3945 = _BinOpCompareLessThanInt32(Uh_5tlreg3944, Uh_5tlreg3942, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3945, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:36:       Unsigned old = (Unsigned) this[i];
          const u32 Uh_5tlreg3947 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3947 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3949(Uv_4this, Uh_5tlreg3947 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3950 = Uh_6tlref3949.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3951 = _Unsigned32ToUnsigned32(Uh_5tlreg3950, 8, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uv_3old(Uh_5tlreg3951); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:37:       Unsigned new = (old * rest + (Unsigned) 0xff * percent) / 100u;
          const u32 Uh_5tlreg3952 = 100u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3953 = _Unsigned32ToUnsigned32(Uh_5tlreg3952, 7, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3955 = Uv_7percent.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3956 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3957 = _Unsigned32ToUnsigned32(Uh_5tlreg3956, 8, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3958 = _BinOpMultiplyUnsigned32(Uh_5tlreg3957, Uh_5tlreg3955, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3960 = Uv_4rest.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3962 = Uv_3old.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3963 = _BinOpMultiplyUnsigned32(Uh_5tlreg3962, Uh_5tlreg3960, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3964 = _BinOpAddUnsigned32(Uh_5tlreg3963, Uh_5tlreg3958, 32); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg3965 = _BinOpDivideUnsigned32(Uh_5tlreg3964, Uh_5tlreg3953, 32); //gcnl:NodeBinaryOp.cpp:805
          Ui_Ut_102321u<EC> Uv_3new(Uh_5tlreg3965); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:38:       this[i] = (Channel) new;
          const u32 Uh_5tlreg3967 = Uv_3new.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3968 = _Unsigned32ToUnsigned32(Uh_5tlreg3967, 32, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3970 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3970 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3972(Uv_4this, Uh_5tlreg3970 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3972.write(Uh_5tlreg3968);
        }

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop13:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:35:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg3973 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3975 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3976 = _BinOpAddInt32(Uh_5tlreg3975, Uh_5tlreg3973, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg3976); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:40:     return this;
    const u32 Uh_5tlreg3978 = Uv_4this.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3979(Uh_5tlreg3978); //gcnl:Node.cpp:1142
    return (Uh_5tlval3979); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6modify



//! ColorUtils.ulam:51:   ARGB brighter(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_8brighter(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:52:     than[0] = 0xff;
    const u32 Uh_5tlreg3980 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3981 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3981 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3983(Uv_4than, Uh_5tlreg3981 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3983.write(Uh_5tlreg3980);

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
    {

//! ColorUtils.ulam:53:     if (than[1] == 0 && than[2] == 0 && than[3] == 0)
      u32 Uh_5tlreg3984 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg3985 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3986 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3987 = _Int32ToInt32(Uh_5tlreg3986, 2, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3988 = 1; //gcnl:NodeTerminal.cpp:690
      if(Uh_5tlreg3988 >= 4) //gcnl:NodeSquareBracket.cpp:874
        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
      Ui_Ut_r10181u<EC> Uh_6tlref3990(Uv_4than, Uh_5tlreg3988 * 8u + 0u, uc); //gcnl:Node.cpp:1317
      const u32 Uh_5tlreg3991 = Uh_6tlref3990.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3992 = _Unsigned32ToInt32(Uh_5tlreg3991, 8, 9); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3993 = _BinOpCompareEqEqInt32(Uh_5tlreg3992, Uh_5tlreg3987, 9); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3993, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3994 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3995 = _Int32ToInt32(Uh_5tlreg3994, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3996 = 2; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg3996 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref3998(Uv_4than, Uh_5tlreg3996 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg3999 = Uh_6tlref3998.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41000 = _Unsigned32ToInt32(Uh_5tlreg3999, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41001 = _BinOpCompareEqEqInt32(Uh_5tlreg41000, Uh_5tlreg3995, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3985 = Uh_5tlreg41001; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3985, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg41002 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41003 = _Int32ToInt32(Uh_5tlreg41002, 2, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41004 = 3; //gcnl:NodeTerminal.cpp:690
        if(Uh_5tlreg41004 >= 4) //gcnl:NodeSquareBracket.cpp:874
          FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
        Ui_Ut_r10181u<EC> Uh_6tlref41006(Uv_4than, Uh_5tlreg41004 * 8u + 0u, uc); //gcnl:Node.cpp:1317
        const u32 Uh_5tlreg41007 = Uh_6tlref41006.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41008 = _Unsigned32ToInt32(Uh_5tlreg41007, 8, 9); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41009 = _BinOpCompareEqEqInt32(Uh_5tlreg41008, Uh_5tlreg41003, 9); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3984 = Uh_5tlreg41009; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3984, 1)) //gcnl:NodeControl.cpp:213
      {

//! ColorUtils.ulam:54:       return color((Unsigned) 0x030303);
          const u32 Uh_5tlreg41011 = 197379u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41012 = _Unsigned32ToUnsigned32(Uh_5tlreg41011, 18, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval41013(Uh_5tlreg41012); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval41015 = THE_INSTANCE.Uf_5color(uc, ur, Uh_5tlval41013); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41016 = Uh_5tlval41015.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval41017(Uh_5tlreg41016); //gcnl:Node.cpp:1142
          return (Uh_5tlval41017); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
    {

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      const u32 Uh_5tlreg41018 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41019 = _Int32ToInt32(Uh_5tlreg41018, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg41019); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
      while(true)
      {
        const u32 Uh_5tlreg41020 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41021 = _Int32ToInt32(Uh_5tlreg41020, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41023 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41024 = _BinOpCompareLessThanInt32(Uh_5tlreg41023, Uh_5tlreg41021, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41024, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
          {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
            const u32 Uh_5tlreg41025 = 3; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg41026 = _Int32ToInt32(Uh_5tlreg41025, 3, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg41028 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg41028 >= 4) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10181u<EC> Uh_6tlref41030(Uv_4than, Uh_5tlreg41028 * 8u + 0u, uc); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg41031 = Uh_6tlref41030.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg41032 = _Unsigned32ToInt32(Uh_5tlreg41031, 8, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg41033 = _BinOpCompareLessThanInt32(Uh_5tlreg41032, Uh_5tlreg41026, 9); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg41033, 1)) //gcnl:NodeControl.cpp:213
            {

//! ColorUtils.ulam:56:       if (than[i] < 3) than[i] = 3;
                const u32 Uh_5tlreg41034 = 3; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg41035 = _Int32ToUnsigned32(Uh_5tlreg41034, 3, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg41037 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg41037 >= 4) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10181u<EC> Uh_6tlref41039(Uv_4than, Uh_5tlreg41037 * 8u + 0u, uc); //gcnl:Node.cpp:1317
                Uh_6tlref41039.write(Uh_5tlreg41035);
            } // end if
          }

//! ColorUtils.ulam:57:       than[i] = (Channel) (100*than[i]/70);
          const u32 Uh_5tlreg41040 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41041 = _Int32ToInt32(Uh_5tlreg41040, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41043 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg41043 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref41045(Uv_4than, Uh_5tlreg41043 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg41046 = Uh_6tlref41045.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41047 = _Unsigned32ToInt32(Uh_5tlreg41046, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41048 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41049 = _Int32ToInt32(Uh_5tlreg41048, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41050 = _BinOpMultiplyInt32(Uh_5tlreg41049, Uh_5tlreg41047, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41051 = _BinOpDivideInt32(Uh_5tlreg41050, Uh_5tlreg41041, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41052 = _Int32ToUnsigned32(Uh_5tlreg41051, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41054 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg41054 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref41056(Uv_4than, Uh_5tlreg41054 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref41056.write(Uh_5tlreg41052);
        }

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
Ul_214endcontrolloop14:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:55:     for (Int i = 1; i < 4; ++i) {
        const u32 Uh_5tlreg41057 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41059 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41060 = _BinOpAddInt32(Uh_5tlreg41059, Uh_5tlreg41057, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg41060); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:60:     return than;
    const u32 Uh_5tlreg41062 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval41063(Uh_5tlreg41062); //gcnl:Node.cpp:1142
    return (Uh_5tlval41063); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8brighter



//! ColorUtils.ulam:66:   ARGB dimmer(ARGB than) {
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109210ColorUtils10<EC>::Uf_6dimmer(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_14181u<EC>& Uv_4than) const
  {

//! ColorUtils.ulam:67:     than[0] = 0xff;
    const u32 Uh_5tlreg41064 = 255u; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg41065 = 0; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg41065 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref41067(Uv_4than, Uh_5tlreg41065 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref41067.write(Uh_5tlreg41064);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
    {

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      const u32 Uh_5tlreg41068 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg41069 = _Int32ToInt32(Uh_5tlreg41068, 2, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321i<EC> Uv_1i(Uh_5tlreg41069); //gcnl:NodeVarDecl.cpp:1081

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
      while(true)
      {
        const u32 Uh_5tlreg41070 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41071 = _Int32ToInt32(Uh_5tlreg41070, 4, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg41073 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41074 = _BinOpCompareLessThanInt32(Uh_5tlreg41073, Uh_5tlreg41071, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg41074, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);

//! ColorUtils.ulam:69:       than[i] = (Channel) (70*than[i]/100);
          const u32 Uh_5tlreg41075 = 100; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41076 = _Int32ToInt32(Uh_5tlreg41075, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41078 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg41078 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref41080(Uv_4than, Uh_5tlreg41078 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg41081 = Uh_6tlref41080.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg41082 = _Unsigned32ToInt32(Uh_5tlreg41081, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41083 = 70; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41084 = _Int32ToInt32(Uh_5tlreg41083, 8, 17); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41085 = _BinOpMultiplyInt32(Uh_5tlreg41084, Uh_5tlreg41082, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41086 = _BinOpDivideInt32(Uh_5tlreg41085, Uh_5tlreg41076, 17); //gcnl:NodeBinaryOp.cpp:805
          const u32 Uh_5tlreg41087 = _Int32ToUnsigned32(Uh_5tlreg41086, 17, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg41089 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg41089 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref41091(Uv_4than, Uh_5tlreg41089 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref41091.write(Uh_5tlreg41087);

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
Ul_214endcontrolloop15:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! ColorUtils.ulam:68:     for (Int i = 1; i < 4; ++i)
        const u32 Uh_5tlreg41092 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg41094 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg41095 = _BinOpAddInt32(Uh_5tlreg41094, Uh_5tlreg41092, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
        Uv_1i.write(Uh_5tlreg41095); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! ColorUtils.ulam:70:     return than;
    const u32 Uh_5tlreg41097 = Uv_4than.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval41098(Uh_5tlreg41097); //gcnl:Node.cpp:1142
    return (Uh_5tlval41098); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6dimmer


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_10109210ColorUtils10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_10109210ColorUtils10<EC>::GetDataMemberCount() const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_10109210ColorUtils10<EC>::GetMangledClassName() const
  {
    return "Uq_10109210ColorUtils10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_10109210ColorUtils10<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_10109210ColorUtils10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_10109210ColorUtils10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_10109210ColorUtils10<EC>::getDefaultQuark( ) const
  {
    return 0x0; //=0 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_10109210ColorUtils10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_10109210ColorUtils10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_10109210ColorUtils10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109210ColorUtils10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

