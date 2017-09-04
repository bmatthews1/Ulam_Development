#ifndef ULAMCUSTOMELEMENTS_H
#define ULAMCUSTOMELEMENTS_H

#include "AbstractDriver.h"

#include "Ue_10105Empty10.h"
#include "Ue_10106Check310.h"
#include "Ue_102108Majority10.h"
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

   Generated on Mon Sep  4 03:46:32 2017 UTC
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


/* Metadata for UlamElementInfoForUe_10106Check310 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Check3.ulam'.
   Make any desired changes there!

   Generated on Mon Sep  4 03:46:32 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_10106Check310 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_10106Check310(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_10106Check310() { }
    const char * GetName() const { return "Check3"; }
    const char * GetSymbol() const { return "Ch"; }
    const char * GetSummary() const { return "Check3 (no summary provided)"; }
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


/* Metadata for UlamElementInfoForUe_102108Majority10 */
/* This is generated code!  Avoid hand editing!
   The content of this file is based on the information
   found in './Majority.ulam'.
   Make any desired changes there!

   Generated on Mon Sep  4 03:46:32 2017 UTC
   by the ULAM compilation system
*/

#include "UlamDefs.h"

namespace MFM {
  template <class EC>
  struct UlamElementInfoForUe_102108Majority10 : public UlamElementInfo<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;

    UlamElement<EC> & m_ulamElement;
    UlamElementInfoForUe_102108Majority10(UlamElement<EC> & ue)
        : m_ulamElement(ue)
    {
      AddModelParameters();
    }

    UlamElementInfoForUe_102108Majority10() { }
    const char * GetName() const { return "Majority"; }
    const char * GetSymbol() const { return "Ma"; }
    const char * GetSummary() const { return "The goal of Majority element atoms is to all be the same color, red or green, matching whichever was more common after initialization across the entire simulation grid"; }
    const char * GetDetails() const { return "A Majority element initially sets its own color at random, but later may change its own color to try to agree with the majority.\n\nNote well the following:\n\n(1) A Majority element is allowed to change ONLY its own state! In other words, ew[0] (or 'self') is the ONLY site allowed to change during an event. (Note this rule is enforced by your honor as an ulam programmer, not the architecture.)\n\n(2) A Majority element may have OTHER DATA MEMBERS beyond just the mUp declared below. It can fill itself up with whatever it wants that fits in the bit budget.\n\n(3) A Majority element never creates or deletes any other Majority elements. However many Majority atoms there are 'in the beginning', that same number should remain indefinitely.\n\n(Just to be clear, a Majority element can READ those data members from neighboring Majority atoms if it wishes, it just cannot WRITE them. It cannot change anything other than ew[0].)\n\nNote that depending on the size and shape of the grid and the initial layout of Majority atoms, this can be a DIFFICULT or IMPOSSIBLE problem to solve. (For example, a grid may contain two isolated clumps of Majority atoms with different majorities.)\n\nYour solution should make its best effort to determine the majority in as many cases as it can, but is not expected to get the correct answer in ALL possible cases."; }
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
