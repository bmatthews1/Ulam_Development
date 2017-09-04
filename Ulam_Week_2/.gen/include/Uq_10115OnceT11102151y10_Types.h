/**                                      -*- mode:C++ -*- */

//#include "itype.h"
//#include "BitVector.h"
//#include "BitField.h"

#include "UlamDefs.h"

#ifndef Ud_Ui_Ut_r10121i
#define Ud_Ui_Ut_r10121i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10121i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10121i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 2u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10121i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 2u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10121i(const Ui_Ut_r10121i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 2); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10121i& operator=(const Ui_Ut_r10121i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10121i */

#ifndef Ud_Ui_Ut_10121i
#define Ud_Ui_Ut_10121i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10121i : public BitVectorBitStorage<EC, BitVector<2u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<2> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 2u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 2u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10121i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10121i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10121i(const Ui_Ut_10121i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10121i(const Ui_Ut_r10121i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10121i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10121i */

#ifndef Ud_Ui_Ut_r10131i
#define Ud_Ui_Ut_r10131i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10131i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10131i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 3u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10131i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 3u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10131i(const Ui_Ut_r10131i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 3); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10131i& operator=(const Ui_Ut_r10131i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10131i */

#ifndef Ud_Ui_Ut_10131i
#define Ud_Ui_Ut_10131i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10131i : public BitVectorBitStorage<EC, BitVector<3u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<3> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 3u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 3u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10131i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10131i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10131i(const Ui_Ut_10131i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10131i(const Ui_Ut_r10131i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10131i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10131i */

#ifndef Ud_Ui_Ut_r10151i
#define Ud_Ui_Ut_r10151i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10151i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10151i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 5u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10151i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 5u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10151i(const Ui_Ut_r10151i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 5); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10151i& operator=(const Ui_Ut_r10151i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10151i */

#ifndef Ud_Ui_Ut_10151i
#define Ud_Ui_Ut_10151i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10151i : public BitVectorBitStorage<EC, BitVector<5u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<5> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 5u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 5u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10151i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10151i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10151i(const Ui_Ut_10151i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10151i(const Ui_Ut_r10151i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10151i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10151i */

#ifndef Ud_Ui_Ut_r10181i
#define Ud_Ui_Ut_r10181i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10181i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10181i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 8u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10181i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 8u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10181i(const Ui_Ut_r10181i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 8); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10181i& operator=(const Ui_Ut_r10181i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10181i */

#ifndef Ud_Ui_Ut_10181i
#define Ud_Ui_Ut_10181i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10181i : public BitVectorBitStorage<EC, BitVector<8u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<8> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 8u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 8u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10181i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10181i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10181i(const Ui_Ut_10181i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10181i(const Ui_Ut_r10181i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10181i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10181i */

#ifndef Ud_Ui_Ut_r10191i
#define Ud_Ui_Ut_r10191i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10191i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10191i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 9u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10191i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 9u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10191i(const Ui_Ut_r10191i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 9); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10191i& operator=(const Ui_Ut_r10191i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10191i */

#ifndef Ud_Ui_Ut_10191i
#define Ud_Ui_Ut_10191i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10191i : public BitVectorBitStorage<EC, BitVector<9u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<9> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 9u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 9u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10191i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10191i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10191i(const Ui_Ut_10191i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10191i(const Ui_Ut_r10191i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10191i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10191i */

#ifndef Ud_Ui_Ut_r102321u
#define Ud_Ui_Ut_r102321u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r102321u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321u(const Ui_Ut_r102321u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102321u& operator=(const Ui_Ut_r102321u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321u */

#ifndef Ud_Ui_Ut_102321u
#define Ud_Ui_Ut_102321u
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321u : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_102321u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_102321u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_102321u(const Ui_Ut_102321u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_102321u(const Ui_Ut_r102321u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102321u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102321u */

#ifndef Ud_Ui_Ut_r10111b
#define Ud_Ui_Ut_r10111b
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10111b : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10111b(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 1u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10111b(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 1u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10111b(const Ui_Ut_r10111b<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 1); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10111b& operator=(const Ui_Ut_r10111b& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10111b */

#ifndef Ud_Ui_Ut_10111b
#define Ud_Ui_Ut_10111b
namespace MFM{

  template<class EC>
  struct Ui_Ut_10111b : public BitVectorBitStorage<EC, BitVector<1u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<1> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 1u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 1u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10111b() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10111b(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10111b(const Ui_Ut_10111b& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10111b(const Ui_Ut_r10111b<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10111b"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10111b */

#ifndef Ud_Ui_Ut_r102151y
#define Ud_Ui_Ut_r102151y
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102151y : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r102151y(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 15u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102151y(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 15u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102151y(const Ui_Ut_r102151y<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 15); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102151y& operator=(const Ui_Ut_r102151y& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102151y */

#ifndef Ud_Ui_Ut_102151y
#define Ud_Ui_Ut_102151y
namespace MFM{

  template<class EC>
  struct Ui_Ut_102151y : public BitVectorBitStorage<EC, BitVector<15u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<15> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 15u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 15u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_102151y() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_102151y(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_102151y(const Ui_Ut_102151y& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_102151y(const Ui_Ut_r102151y<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102151y"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102151y */

