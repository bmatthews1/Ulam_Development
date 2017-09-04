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

#ifndef Ud_Ui_Ut_r10141i
#define Ud_Ui_Ut_r10141i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10141i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10141i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 4u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10141i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 4u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10141i(const Ui_Ut_r10141i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 4); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10141i& operator=(const Ui_Ut_r10141i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10141i */

#ifndef Ud_Ui_Ut_10141i
#define Ud_Ui_Ut_10141i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10141i : public BitVectorBitStorage<EC, BitVector<4u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<4> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 4u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 4u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10141i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10141i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10141i(const Ui_Ut_10141i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10141i(const Ui_Ut_r10141i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10141i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10141i */

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

#ifndef Ud_Ui_Ut_r10161i
#define Ud_Ui_Ut_r10161i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10161i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10161i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 6u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10161i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 6u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10161i(const Ui_Ut_r10161i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 6); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10161i& operator=(const Ui_Ut_r10161i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10161i */

#ifndef Ud_Ui_Ut_10161i
#define Ud_Ui_Ut_10161i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10161i : public BitVectorBitStorage<EC, BitVector<6u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<6> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 6u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 6u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10161i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10161i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10161i(const Ui_Ut_10161i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10161i(const Ui_Ut_r10161i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10161i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10161i */

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

#ifndef Ud_Ui_Ut_r102171i
#define Ud_Ui_Ut_r102171i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102171i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r102171i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 17u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102171i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 17u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102171i(const Ui_Ut_r102171i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 17); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102171i& operator=(const Ui_Ut_r102171i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102171i */

#ifndef Ud_Ui_Ut_102171i
#define Ud_Ui_Ut_102171i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102171i : public BitVectorBitStorage<EC, BitVector<17u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<17> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 17u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 17u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_102171i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_102171i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_102171i(const Ui_Ut_102171i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_102171i(const Ui_Ut_r102171i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102171i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102171i */

#ifndef Ud_Ui_Ut_r102321i
#define Ud_Ui_Ut_r102321i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r102321i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321i(const Ui_Ut_r102321i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102321i& operator=(const Ui_Ut_r102321i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321i */

#ifndef Ud_Ui_Ut_102321i
#define Ud_Ui_Ut_102321i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321i : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_102321i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_102321i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_102321i(const Ui_Ut_102321i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_102321i(const Ui_Ut_r102321i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102321i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102321i */

#ifndef Ud_Ui_Ut_r10171u
#define Ud_Ui_Ut_r10171u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10171u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10171u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 7u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10171u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 7u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10171u(const Ui_Ut_r10171u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 7); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10171u& operator=(const Ui_Ut_r10171u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10171u */

#ifndef Ud_Ui_Ut_10171u
#define Ud_Ui_Ut_10171u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10171u : public BitVectorBitStorage<EC, BitVector<7u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<7> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 7u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 7u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10171u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10171u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10171u(const Ui_Ut_10171u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10171u(const Ui_Ut_r10171u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10171u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10171u */

#ifndef Ud_Ui_Ut_r10181u
#define Ud_Ui_Ut_r10181u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10181u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10181u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 8u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10181u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 8u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10181u(const Ui_Ut_r10181u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 8); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10181u& operator=(const Ui_Ut_r10181u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10181u */

#ifndef Ud_Ui_Ut_10181u
#define Ud_Ui_Ut_10181u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10181u : public BitVectorBitStorage<EC, BitVector<8u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<8> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 8u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 8u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10181u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10181u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10181u(const Ui_Ut_10181u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10181u(const Ui_Ut_r10181u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10181u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10181u */

#ifndef Ud_Ui_Ut_r14181u
#define Ud_Ui_Ut_r14181u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r14181u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 readArrayItem(const u32 index, const u32 itemlen) const { return UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitive.cpp:309
    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void writeArrayItem(const u32& v, const u32 index, const u32 itemlen) { UlamRef<EC>(*this, index * itemlen, itemlen, NULL, UlamRef<EC>::PRIMITIVE).Write(v); } //gcnl:UlamTypePrimitive.cpp:342
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r14181u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::ARRAY, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r14181u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::ARRAY) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r14181u(const Ui_Ut_r14181u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::ARRAY) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r14181u& operator=(const Ui_Ut_r14181u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r14181u */

#ifndef Ud_Ui_Ut_14181u
#define Ud_Ui_Ut_14181u
namespace MFM{

  template<class EC>
  struct Ui_Ut_14181u : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 32u); } //reads entire array //gcnl:UlamTypePrimitive.cpp:572
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //writes entire array //gcnl:UlamTypePrimitive.cpp:609
    Ui_Ut_14181u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_14181u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_14181u(const u32 d[1]) : BVS(d) { } //gcnl:UlamTypePrimitive.cpp:511
    Ui_Ut_14181u(const Ui_Ut_14181u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_14181u(const Ui_Ut_r14181u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_14181u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_14181u */

#ifndef Ud_Ui_Ut_r102181u
#define Ud_Ui_Ut_r102181u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102181u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r102181u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 18u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102181u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 18u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102181u(const Ui_Ut_r102181u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 18); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102181u& operator=(const Ui_Ut_r102181u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102181u */

#ifndef Ud_Ui_Ut_102181u
#define Ud_Ui_Ut_102181u
namespace MFM{

  template<class EC>
  struct Ui_Ut_102181u : public BitVectorBitStorage<EC, BitVector<18u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<18> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 18u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 18u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_102181u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_102181u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_102181u(const Ui_Ut_102181u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_102181u(const Ui_Ut_r102181u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102181u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102181u */

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

#ifndef Ud_Ui_Ut_r10181t
#define Ud_Ui_Ut_r10181t
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10181t : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10181t(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 8u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10181t(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 8u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10181t(const Ui_Ut_r10181t<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 8); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10181t& operator=(const Ui_Ut_r10181t& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10181t */

#ifndef Ud_Ui_Ut_10181t
#define Ud_Ui_Ut_10181t
namespace MFM{

  template<class EC>
  struct Ui_Ut_10181t : public BitVectorBitStorage<EC, BitVector<8u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<8> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 8u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 8u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10181t() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10181t(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10181t(const Ui_Ut_10181t& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10181t(const Ui_Ut_r10181t<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10181t"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10181t */

#ifndef Ud_Ui_Ut_r102321t
#define Ud_Ui_Ut_r102321t
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321t : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r102321t(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321t(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321t(const Ui_Ut_r102321t<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102321t& operator=(const Ui_Ut_r102321t& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321t */

#ifndef Ud_Ui_Ut_102321t
#define Ud_Ui_Ut_102321t
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321t : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_102321t() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_102321t(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_102321t(const Ui_Ut_102321t& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_102321t(const Ui_Ut_r102321t<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102321t"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102321t */

