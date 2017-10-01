#ifndef ULAMCUSTOMELEMENTS_H
#define ULAMCUSTOMELEMENTS_H

#include "AbstractDriver.h"

#include "Ue_10105Empty10.h"
#include "Ue_10188Stretchy10.h"
#include "Ue_102183RPS10.h"
#include "Uq_10104Fail10.h"
#include "Uq_10105MDist10.h"
#include "Uq_10106Random10.h"
#include "Uq_10106UrSelf10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10109210ByteStream10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10114Once10.h"
#include "Uq_10115OnceT11102151y10.h"
#include "Uq_102323C2D10.h"
#include "Un_102649216ByteStreamString10.h"

/* Metadata for UlamElementInfoForUe_10105Empty10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in '/usr/bin/../lib/ulam/ULAM/bin/../share/ulam/stdlib/Empty.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 15 11:29:19 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10105Empty10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10105Empty10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10105Empty10() { }
    const char * GetName() const { return "Empty"; }
    const char * GetSymbol() const { return "E"; }
    const char * GetSummary() const { return "This stub is linked to the actual Element_Empty by special-case setup code"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xff000000; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_10188Stretchy10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Stretchy.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 15 11:29:19 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10188Stretchy10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10188Stretchy10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10188Stretchy10() { }
    const char * GetName() const { return "Stretchy"; }
    const char * GetSymbol() const { return "St"; }
    const char * GetSummary() const { return "Stretchy (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xFFFFFFFF; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


/* Metadata for UlamElementInfoForUe_102183RPS10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './RPS.ulam'.
   Make any desired changes there!

   Generated on Fri Sep 15 11:29:19 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102183RPS10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102183RPS10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102183RPS10() { }
    const char * GetName() const { return "RPS"; }
    const char * GetSymbol() const { return "RP"; }
    const char * GetSummary() const { return "RPS (no summary provided)"; }
    const char * GetDetails() const { return "(no details provided)"; }
    const char * GetAuthor() const { return "--none specified--"; }
    const char * GetCopyright() const { return "--none specified--"; }
    const char * GetLicense() const { return "--none specified--"; }
    bool GetPlaceable() const { return true; }
    const u32 GetVersion() const { return 0; }

    const u32 GetElementColor() const { return 0xFFFFFFFF; }
    const u32 GetEventWindowBoundary() const { return 4 + 1; }
    const u32 GetSymmetry(const UlamContext<EC>& uc) const {
      return 0;
    }

    void AddModelParameters()
    {
    }
  };
} // MFM


#endif /* ULAMCUSTOMELEMENTS_H */
