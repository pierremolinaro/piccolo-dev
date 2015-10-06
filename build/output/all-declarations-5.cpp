#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap::GALGAS_branchOverflowMap (void) :
AC_GALGAS_listmap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap GALGAS_branchOverflowMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_branchOverflowMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchOverflowMap::addAssign_operation (const GALGAS_string & inKey,
                                                    const GALGAS_string & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_stringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_branchOverflowMap::reader_listForKey (const GALGAS_string & inKey
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_stringlist (listForKey (inKey)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_branchOverflowMap::cEnumerator_branchOverflowMap (const GALGAS_branchOverflowMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap_2D_element cEnumerator_branchOverflowMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_branchOverflowMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_branchOverflowMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_branchOverflowMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_stringlist (p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @branchOverflowMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchOverflowMap ("branchOverflowMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_branchOverflowMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_branchOverflowMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchOverflowMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap GALGAS_branchOverflowMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_branchOverflowMap result ;
  const GALGAS_branchOverflowMap * p = (const GALGAS_branchOverflowMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchOverflowMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_piccoloDevice_grammar [] = {
// At index 0 : <start_symbol>, in file 'piccoloDevice_syntax.ggs', line 10
  TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_controller) // $controller$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_) // ${$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_processor) // $processor$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_romsize) // $romsize$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (1) // <select_piccoloDevice_5F_syntax_0>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_bank) // $bank$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (2) // <select_piccoloDevice_5F_syntax_1>
, NONTERMINAL (4) // <select_piccoloDevice_5F_syntax_3>
, NONTERMINAL (7) // <select_piccoloDevice_5F_syntax_6>
, NONTERMINAL (13) // <select_piccoloDevice_5F_syntax_12>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 19 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 35
, END_PRODUCTION
// At index 20 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 35
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize) // $eepromsize$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 26 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 50
, END_PRODUCTION
// At index 27 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 50
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister) // $unusedregister$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (3) // <select_piccoloDevice_5F_syntax_2>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (2) // <select_piccoloDevice_5F_syntax_1>
, END_PRODUCTION
// At index 33 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 54
, END_PRODUCTION
// At index 34 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 54
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_to) // $to$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, END_PRODUCTION
// At index 37 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 62
, END_PRODUCTION
// At index 38 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 62
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_ram) // $ram$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3A_) // $:$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_to) // $to$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (5) // <select_piccoloDevice_5F_syntax_4>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (4) // <select_piccoloDevice_5F_syntax_3>
, END_PRODUCTION
// At index 48 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 71
, END_PRODUCTION
// At index 49 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 71
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat) // $mirrorat$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (6) // <select_piccoloDevice_5F_syntax_5>
, END_PRODUCTION
// At index 53 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 74
, END_PRODUCTION
// At index 54 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 74
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (6) // <select_piccoloDevice_5F_syntax_5>
, END_PRODUCTION
// At index 58 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 91
, END_PRODUCTION
// At index 59 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 91
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_register) // $register$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (8) // <select_piccoloDevice_5F_syntax_7>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3C_) // $<$
, NONTERMINAL (10) // <select_piccoloDevice_5F_syntax_9>
, NONTERMINAL (9) // <select_piccoloDevice_5F_syntax_8>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3E_) // $>$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (7) // <select_piccoloDevice_5F_syntax_6>
, END_PRODUCTION
// At index 71 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 97
, END_PRODUCTION
// At index 72 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 97
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (8) // <select_piccoloDevice_5F_syntax_7>
, END_PRODUCTION
// At index 76 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 107
, END_PRODUCTION
// At index 77 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 107
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, NONTERMINAL (10) // <select_piccoloDevice_5F_syntax_9>
, NONTERMINAL (9) // <select_piccoloDevice_5F_syntax_8>
, END_PRODUCTION
// At index 81 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 108
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_piccoloDevice_5F_syntax_11>
, NONTERMINAL (11) // <select_piccoloDevice_5F_syntax_10>
, END_PRODUCTION
// At index 85 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 108
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2D_) // $-$
, END_PRODUCTION
// At index 87 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 110
, END_PRODUCTION
// At index 88 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 110
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2F_) // $/$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_piccoloDevice_5F_syntax_11>
, NONTERMINAL (11) // <select_piccoloDevice_5F_syntax_10>
, END_PRODUCTION
// At index 93 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 113
, END_PRODUCTION
// At index 94 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 113
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 98 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 154
, END_PRODUCTION
// At index 99 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 154
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_configuration) // $configuration$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_width) // $width$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (14) // <select_piccoloDevice_5F_syntax_13>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (15) // <select_piccoloDevice_5F_syntax_14>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (13) // <select_piccoloDevice_5F_syntax_12>
, END_PRODUCTION
// At index 111 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 163
, END_PRODUCTION
// At index 112 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 163
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_illegal) // $illegal$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_message) // $message$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, NONTERMINAL (14) // <select_piccoloDevice_5F_syntax_13>
, END_PRODUCTION
// At index 120 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 176
, END_PRODUCTION
// At index 121 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 176
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_setting) // $setting$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, NONTERMINAL (16) // <select_piccoloDevice_5F_syntax_15>
, NONTERMINAL (15) // <select_piccoloDevice_5F_syntax_14>
, END_PRODUCTION
// At index 135 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 188
, END_PRODUCTION
// At index 136 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 188
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_setting) // $setting$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, NONTERMINAL (16) // <select_piccoloDevice_5F_syntax_15>
, END_PRODUCTION
// At index 144 : <>, in file '.ggs', line 0
, NONTERMINAL (0) // <start_symbol>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          P R O D U C T I O N    N A M E S                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_piccoloDevice_grammar [34] = {
 {"<start_symbol>", "piccoloDevice_syntax", 0}, // at index 0
 {"<select_piccoloDevice_5F_syntax_0>", "piccoloDevice_syntax", 19}, // at index 1
 {"<select_piccoloDevice_5F_syntax_0>", "piccoloDevice_syntax", 20}, // at index 2
 {"<select_piccoloDevice_5F_syntax_1>", "piccoloDevice_syntax", 26}, // at index 3
 {"<select_piccoloDevice_5F_syntax_1>", "piccoloDevice_syntax", 27}, // at index 4
 {"<select_piccoloDevice_5F_syntax_2>", "piccoloDevice_syntax", 33}, // at index 5
 {"<select_piccoloDevice_5F_syntax_2>", "piccoloDevice_syntax", 34}, // at index 6
 {"<select_piccoloDevice_5F_syntax_3>", "piccoloDevice_syntax", 37}, // at index 7
 {"<select_piccoloDevice_5F_syntax_3>", "piccoloDevice_syntax", 38}, // at index 8
 {"<select_piccoloDevice_5F_syntax_4>", "piccoloDevice_syntax", 48}, // at index 9
 {"<select_piccoloDevice_5F_syntax_4>", "piccoloDevice_syntax", 49}, // at index 10
 {"<select_piccoloDevice_5F_syntax_5>", "piccoloDevice_syntax", 53}, // at index 11
 {"<select_piccoloDevice_5F_syntax_5>", "piccoloDevice_syntax", 54}, // at index 12
 {"<select_piccoloDevice_5F_syntax_6>", "piccoloDevice_syntax", 58}, // at index 13
 {"<select_piccoloDevice_5F_syntax_6>", "piccoloDevice_syntax", 59}, // at index 14
 {"<select_piccoloDevice_5F_syntax_7>", "piccoloDevice_syntax", 71}, // at index 15
 {"<select_piccoloDevice_5F_syntax_7>", "piccoloDevice_syntax", 72}, // at index 16
 {"<select_piccoloDevice_5F_syntax_8>", "piccoloDevice_syntax", 76}, // at index 17
 {"<select_piccoloDevice_5F_syntax_8>", "piccoloDevice_syntax", 77}, // at index 18
 {"<select_piccoloDevice_5F_syntax_9>", "piccoloDevice_syntax", 81}, // at index 19
 {"<select_piccoloDevice_5F_syntax_9>", "piccoloDevice_syntax", 85}, // at index 20
 {"<select_piccoloDevice_5F_syntax_10>", "piccoloDevice_syntax", 87}, // at index 21
 {"<select_piccoloDevice_5F_syntax_10>", "piccoloDevice_syntax", 88}, // at index 22
 {"<select_piccoloDevice_5F_syntax_11>", "piccoloDevice_syntax", 93}, // at index 23
 {"<select_piccoloDevice_5F_syntax_11>", "piccoloDevice_syntax", 94}, // at index 24
 {"<select_piccoloDevice_5F_syntax_12>", "piccoloDevice_syntax", 98}, // at index 25
 {"<select_piccoloDevice_5F_syntax_12>", "piccoloDevice_syntax", 99}, // at index 26
 {"<select_piccoloDevice_5F_syntax_13>", "piccoloDevice_syntax", 111}, // at index 27
 {"<select_piccoloDevice_5F_syntax_13>", "piccoloDevice_syntax", 112}, // at index 28
 {"<select_piccoloDevice_5F_syntax_14>", "piccoloDevice_syntax", 120}, // at index 29
 {"<select_piccoloDevice_5F_syntax_14>", "piccoloDevice_syntax", 121}, // at index 30
 {"<select_piccoloDevice_5F_syntax_15>", "piccoloDevice_syntax", 135}, // at index 31
 {"<select_piccoloDevice_5F_syntax_15>", "piccoloDevice_syntax", 136}, // at index 32
 {"<>", "", 144} // at index 33
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_piccoloDevice_grammar [34] = {
0, // index 0 : <start_symbol>, in file 'piccoloDevice_syntax.ggs', line 10
19, // index 1 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 35
20, // index 2 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 35
26, // index 3 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 50
27, // index 4 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 50
33, // index 5 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 54
34, // index 6 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 54
37, // index 7 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 62
38, // index 8 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 62
48, // index 9 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 71
49, // index 10 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 71
53, // index 11 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 74
54, // index 12 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 74
58, // index 13 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 91
59, // index 14 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 91
71, // index 15 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 97
72, // index 16 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 97
76, // index 17 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 107
77, // index 18 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 107
81, // index 19 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 108
85, // index 20 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 108
87, // index 21 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 110
88, // index 22 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 110
93, // index 23 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 113
94, // index 24 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 113
98, // index 25 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 154
99, // index 26 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 154
111, // index 27 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 163
112, // index 28 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 163
120, // index 29 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 176
121, // index 30 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 176
135, // index 31 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 188
136, // index 32 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 188
144 // index 33 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_piccoloDevice_grammar [19] = {
0, // at 0 : <start_symbol>
1, // at 1 : <select_piccoloDevice_5F_syntax_0>
3, // at 2 : <select_piccoloDevice_5F_syntax_1>
5, // at 3 : <select_piccoloDevice_5F_syntax_2>
7, // at 4 : <select_piccoloDevice_5F_syntax_3>
9, // at 5 : <select_piccoloDevice_5F_syntax_4>
11, // at 6 : <select_piccoloDevice_5F_syntax_5>
13, // at 7 : <select_piccoloDevice_5F_syntax_6>
15, // at 8 : <select_piccoloDevice_5F_syntax_7>
17, // at 9 : <select_piccoloDevice_5F_syntax_8>
19, // at 10 : <select_piccoloDevice_5F_syntax_9>
21, // at 11 : <select_piccoloDevice_5F_syntax_10>
23, // at 12 : <select_piccoloDevice_5F_syntax_11>
25, // at 13 : <select_piccoloDevice_5F_syntax_12>
27, // at 14 : <select_piccoloDevice_5F_syntax_13>
29, // at 15 : <select_piccoloDevice_5F_syntax_14>
31, // at 16 : <select_piccoloDevice_5F_syntax_15>
33, // at 17 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_piccoloDevice_grammar [] = {
// At index 0 : <start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 1 : <select_piccoloDevice_5F_syntax_0>
C_Lexique_piccoloDevice_5F_lexique::kToken_bank, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize, -1, // Choice 2
  -1,
// At index 6 : <select_piccoloDevice_5F_syntax_1>
C_Lexique_piccoloDevice_5F_lexique::kToken_ram, C_Lexique_piccoloDevice_5F_lexique::kToken_register, C_Lexique_piccoloDevice_5F_lexique::kToken_configuration, C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister, -1, // Choice 2
  -1,
// At index 14 : <select_piccoloDevice_5F_syntax_2>
C_Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_to, -1, // Choice 2
  -1,
// At index 19 : <select_piccoloDevice_5F_syntax_3>
C_Lexique_piccoloDevice_5F_lexique::kToken_register, C_Lexique_piccoloDevice_5F_lexique::kToken_configuration, C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_ram, -1, // Choice 2
  -1,
// At index 26 : <select_piccoloDevice_5F_syntax_4>
C_Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat, -1, // Choice 2
  -1,
// At index 31 : <select_piccoloDevice_5F_syntax_5>
C_Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 36 : <select_piccoloDevice_5F_syntax_6>
C_Lexique_piccoloDevice_5F_lexique::kToken_configuration, C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_register, -1, // Choice 2
  -1,
// At index 42 : <select_piccoloDevice_5F_syntax_7>
C_Lexique_piccoloDevice_5F_lexique::kToken__3C_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 47 : <select_piccoloDevice_5F_syntax_8>
C_Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 52 : <select_piccoloDevice_5F_syntax_9>
C_Lexique_piccoloDevice_5F_lexique::kToken_identifier, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__2D_, -1, // Choice 2
  -1,
// At index 57 : <select_piccoloDevice_5F_syntax_10>
C_Lexique_piccoloDevice_5F_lexique::kToken__2C_, C_Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__2F_, -1, // Choice 2
  -1,
// At index 63 : <select_piccoloDevice_5F_syntax_11>
C_Lexique_piccoloDevice_5F_lexique::kToken__2C_, C_Lexique_piccoloDevice_5F_lexique::kToken__2F_, C_Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__5B_, -1, // Choice 2
  -1,
// At index 70 : <select_piccoloDevice_5F_syntax_12>
C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_configuration, -1, // Choice 2
  -1,
// At index 75 : <select_piccoloDevice_5F_syntax_13>
C_Lexique_piccoloDevice_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_illegal, -1, // Choice 2
  -1,
// At index 80 : <select_piccoloDevice_5F_syntax_14>
C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_identifier, -1, // Choice 2
  -1,
// At index 85 : <select_piccoloDevice_5F_syntax_15>
C_Lexique_piccoloDevice_5F_lexique::kToken_identifier, C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_setting, -1, // Choice 2
  -1,
// At index 91 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_piccoloDevice_grammar [19] = {
0, // at 0 : <start_symbol>
1, // at 1 : <select_piccoloDevice_5F_syntax_0>
6, // at 2 : <select_piccoloDevice_5F_syntax_1>
14, // at 3 : <select_piccoloDevice_5F_syntax_2>
19, // at 4 : <select_piccoloDevice_5F_syntax_3>
26, // at 5 : <select_piccoloDevice_5F_syntax_4>
31, // at 6 : <select_piccoloDevice_5F_syntax_5>
36, // at 7 : <select_piccoloDevice_5F_syntax_6>
42, // at 8 : <select_piccoloDevice_5F_syntax_7>
47, // at 9 : <select_piccoloDevice_5F_syntax_8>
52, // at 10 : <select_piccoloDevice_5F_syntax_9>
57, // at 11 : <select_piccoloDevice_5F_syntax_10>
63, // at 12 : <select_piccoloDevice_5F_syntax_11>
70, // at 13 : <select_piccoloDevice_5F_syntax_12>
75, // at 14 : <select_piccoloDevice_5F_syntax_13>
80, // at 15 : <select_piccoloDevice_5F_syntax_14>
85, // at 16 : <select_piccoloDevice_5F_syntax_15>
91, // at 17 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     'start_symbol' non terminal implementation                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_parse (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_ (GALGAS_piccoloDeviceModel & parameter_1,
                                C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_(parameter_1, inLexique) ;
}

void cGrammar_piccoloDevice_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_piccoloDevice_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_piccoloDevice_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_piccoloDevice_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_piccoloDevice_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                    gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Grammar start symbol implementation                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_piccoloDevice_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_piccoloDeviceModel &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.reader_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_piccoloDevice_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, "", "", filePath COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                      gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_piccoloDevice_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.reader_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.reader_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_piccoloDeviceModel &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_piccoloDevice_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                    gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_piccoloDevice_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        'select_piccoloDevice_5F_syntax_0' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_0 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        'select_piccoloDevice_5F_syntax_1' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_1 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        'select_piccoloDevice_5F_syntax_2' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_2 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        'select_piccoloDevice_5F_syntax_3' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_3 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        'select_piccoloDevice_5F_syntax_4' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_4 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        'select_piccoloDevice_5F_syntax_5' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_5 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        'select_piccoloDevice_5F_syntax_6' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_6 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        'select_piccoloDevice_5F_syntax_7' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_7 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        'select_piccoloDevice_5F_syntax_8' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_8 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        'select_piccoloDevice_5F_syntax_9' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_9 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       'select_piccoloDevice_5F_syntax_10' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_10 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       'select_piccoloDevice_5F_syntax_11' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_11 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       'select_piccoloDevice_5F_syntax_12' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_12 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       'select_piccoloDevice_5F_syntax_13' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_13 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       'select_piccoloDevice_5F_syntax_14' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_14 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       'select_piccoloDevice_5F_syntax_15' added non terminal implementation                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_15 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_piccolo_5F_options_doNotReorderCluster ("piccolo_options",
                                         "doNotReorderCluster",
                                         78,
                                         "no-relative-resolution",
                                         "Do not try to re order blocks for using relatives branches (PIC18 compiler only)") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_doNotWarnRecursive ("piccolo_options",
                                         "doNotWarnRecursive",
                                         82,
                                         "no-warning-on-recursive-routines",
                                         "Do not warn when there are recursive routines (PIC18 compiler only)") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_generateAssembly ("piccolo_options",
                                         "generateAssembly",
                                         83,
                                         "asm",
                                         "Generate also an assembly language text file (with .asm extension)") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_generateGraphvizFiles ("piccolo_options",
                                         "generateGraphvizFiles",
                                         71,
                                         "generate-graphviz-files",
                                         "Generate Graphviz files  containing block invocation, block sorting constraints, ...") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_ouputListingFile ("piccolo_options",
                                         "ouputListingFile",
                                         76,
                                         "list",
                                         "Output a list file") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_output_5F_C_5F_Array ("piccolo_options",
                                         "output_C_Array",
                                         67,
                                         "output-c-files",
                                         "Generate output code in a C header file and C source file") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_performOptimizations ("piccolo_options",
                                         "performOptimizations",
                                         79,
                                         "optimize",
                                         "Perform code optimizations") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_StringCommandLineOption gOption_piccolo_5F_options_optimizationFlags ("piccolo_options",
                                         "optimizationFlags",
                                         0,
                                         "optimization-flags",
                                         "Fine tuning of optimizations (PIC18 compiler only)",
                                         "") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputBaselineDeviceList",
                                         0,
                                         "baseline",
                                         "Output the list of supported baseline devices") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputDeviceList",
                                         68,
                                         "device-list",
                                         "Output the list of supported devices") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputMidrangeDeviceList",
                                         0,
                                         "midrange",
                                         "Output the list of supported mid-range devices") ;

C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList ("piccolo_options_not_in_cocoa",
                                         "outputPic18DeviceList",
                                         0,
                                         "pic18",
                                         "Output the list of supported pic18 devices") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription ("piccolo_options_not_in_cocoa",
                                         "configDescription",
                                         70,
                                         "configuration",
                                         "Output the configuration register description of the device named by string",
                                         "") ;

C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles ("piccolo_options_not_in_cocoa",
                                         "exportDeviceFiles",
                                         69,
                                         "export",
                                         "Export device definition files to the directory named by string",
                                         "") ;

C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription ("piccolo_options_not_in_cocoa",
                                         "memoryDescription",
                                         77,
                                         "memory",
                                         "Output the RAM, ROM and EEPROM description of the device named by string",
                                         "") ;

C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription ("piccolo_options_not_in_cocoa",
                                         "registerDescription",
                                         82,
                                         "registers",
                                         "Output the special register description of the device named by string",
                                         "") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'checkCurrentEmitAddress'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkCurrentEmitAddress (const GALGAS_uint constinArgument_inCurrentAddress,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addr ;
  {
  routine_currentEmitAddress (var_addr, inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 41)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("intermediate_generic.galgas", 42)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_addr.objectCompare (constinArgument_inCurrentAddress)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 42)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)), GALGAS_string ("internal error: current emit address is ").add_operation (var_addr.reader_hexString (SOURCE_FILE ("intermediate_generic.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (GALGAS_string ("; it should be "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (constinArgument_inCurrentAddress.reader_hexString (SOURCE_FILE ("intermediate_generic.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 44))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'print_constant_definition'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_print_5F_constant_5F_definition (const GALGAS_constantMap constinArgument_inConstantMap,
                                              GALGAS_string & ioArgument_ioListFileContents,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inConstantMap.reader_count (SOURCE_FILE ("intermediate_generic.galgas", 483)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 484)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 484))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 484)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("CONSTANTS").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Constant").reader_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)).add_operation (GALGAS_string (" Value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)) ;
    cEnumerator_constantMap enumerator_18920 (constinArgument_inConstantMap, kEnumeration_up) ;
    while (enumerator_18920.hasCurrentObject ()) {
      ioArgument_ioListFileContents.dotAssign_operation (enumerator_18920.current_lkey (HERE).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 489)).reader_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (enumerator_18920.current_mValue (HERE).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)) ;
      enumerator_18920.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'actualBuildConfig'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_actualBuildConfig (const GALGAS_configRegisterMap constinArgument_inConfigRegisterMap,
                                const GALGAS_configDefinitionList constinArgument_inConfigDefinitionList,
                                GALGAS_string & ioArgument_ioListFileContents,
                                GALGAS_actualConfigurationMap & outArgument_outActualConfigurationMap,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualConfigurationMap.drop () ; // Release 'out' argument
  outArgument_outActualConfigurationMap = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 24)) ;
  GALGAS_configFieldMap var_configFieldMap = GALGAS_configFieldMap::constructor_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 25)) ;
  cEnumerator_configRegisterMap enumerator_988 (constinArgument_inConfigRegisterMap, kEnumeration_up) ;
  while (enumerator_988.hasCurrentObject ()) {
    GALGAS_uint var_defaultValue = GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_988.current_mRegisterWidth (HERE).reader_uint (SOURCE_FILE ("piccolo_config.galgas", 27)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)) ;
    {
    outArgument_outActualConfigurationMap.modifier_insertKey (enumerator_988.current_lkey (HERE), enumerator_988.current_mRegisterAddress (HERE).reader_uint (SOURCE_FILE ("piccolo_config.galgas", 28)), var_defaultValue, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 28)) ;
    }
    GALGAS_lstring var_registerName = enumerator_988.current_lkey (HERE) ;
    cEnumerator_configRegisterMaskMap enumerator_1217 (enumerator_988.current_mConfigRegisterMaskMap (HERE), kEnumeration_up) ;
    while (enumerator_1217.hasCurrentObject ()) {
      {
      var_configFieldMap.modifier_insertKey (enumerator_1217.current_lkey (HERE), var_registerName, enumerator_1217.current_mMaskValue (HERE), enumerator_1217.current_mDescription (HERE), enumerator_1217.current_mFieldSettingMap (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 31)) ;
      }
      enumerator_1217.gotoNextObject () ;
    }
    enumerator_988.gotoNextObject () ;
  }
  GALGAS_stringset var_actualSettingNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("piccolo_config.galgas", 35)) ;
  cEnumerator_configDefinitionList enumerator_1469 (constinArgument_inConfigDefinitionList, kEnumeration_up) ;
  while (enumerator_1469.hasCurrentObject ()) {
    cEnumerator_configSettingList enumerator_1500 (enumerator_1469.current_mSettingList (HERE), kEnumeration_up) ;
    while (enumerator_1500.hasCurrentObject ()) {
      const enumGalgasBool test_0 = var_actualSettingNameSet.reader_hasKey (enumerator_1500.current_mSettingName (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 38)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 38)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (enumerator_1500.current_mSettingName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_1500.current_mSettingName (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)).add_operation (GALGAS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)) ;
      }
      var_actualSettingNameSet.addAssign_operation (enumerator_1500.current_mSettingName (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 41))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 41)) ;
      GALGAS_lstring var_registerName ;
      GALGAS_luint var_maskValue ;
      GALGAS_lstring var_settingDescription ;
      GALGAS_fieldSettingMap var_fieldSettingMap ;
      var_configFieldMap.method_searchKey (enumerator_1500.current_mSettingName (HERE), var_registerName, var_maskValue, var_settingDescription, var_fieldSettingMap, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 46)) ;
      const enumGalgasBool test_2 = var_fieldSettingMap.reader_hasKey (enumerator_1500.current_mSettingValue (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 47)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_settingValue ;
        GALGAS_uint var_settingMask ;
        var_fieldSettingMap.method_searchKey (enumerator_1500.current_mSettingValue (HERE), var_settingValue, var_settingMask, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)) ;
        GALGAS_uint var_registerValue ;
        GALGAS_uint joker_2233 ; // Joker input parameter
        outArgument_outActualConfigurationMap.method_searchKey (var_registerName, joker_2233, var_registerValue, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 52)) ;
        var_registerValue = var_registerValue.operator_and (var_settingMask.operator_tilde (SOURCE_FILE ("piccolo_config.galgas", 53)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 53)).operator_or (var_settingValue COMMA_SOURCE_FILE ("piccolo_config.galgas", 53)) ;
        {
        outArgument_outActualConfigurationMap.modifier_setMRegisterValueForKey (var_registerValue, var_registerName.reader_string (SOURCE_FILE ("piccolo_config.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 54)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_fieldSettingMap.reader_count (SOURCE_FILE ("piccolo_config.galgas", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_string var_errorMessage = GALGAS_string ("the '").add_operation (enumerator_1500.current_mSettingValue (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (GALGAS_string ("' value is not defined for configuration setting '"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (enumerator_1500.current_mSettingName (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (GALGAS_string ("'; possible values are:"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 57)) ;
          cEnumerator_fieldSettingMap enumerator_2662 (var_fieldSettingMap, kEnumeration_up) ;
          while (enumerator_2662.hasCurrentObject ()) {
            var_errorMessage.dotAssign_operation (GALGAS_string ("\n"
              "-  \"").add_operation (enumerator_2662.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 59)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 59))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 59)) ;
            enumerator_2662.gotoNextObject () ;
          }
          GALGAS_location location_4 (enumerator_1500.current_mSettingValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, var_errorMessage  COMMA_SOURCE_FILE ("piccolo_config.galgas", 61)) ;
        }
      }
      enumerator_1500.gotoNextObject () ;
    }
    enumerator_1469.gotoNextObject () ;
  }
  GALGAS_stringset var_notDefinedSetting = var_configFieldMap.reader_keySet (SOURCE_FILE ("piccolo_config.galgas", 66)).substract_operation (var_actualSettingNameSet, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 66)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_notDefinedSetting.reader_count (SOURCE_FILE ("piccolo_config.galgas", 67)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_errorMessage = GALGAS_string ("the following configuration settings are not defined:") ;
    cEnumerator_stringset enumerator_3081 (var_notDefinedSetting, kEnumeration_up) ;
    while (enumerator_3081.hasCurrentObject ()) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("\n"
        "-  ").add_operation (enumerator_3081.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 70))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 70)) ;
      enumerator_3081.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 72)), var_errorMessage  COMMA_SOURCE_FILE ("piccolo_config.galgas", 72)) ;
  }
  cEnumerator_actualConfigurationMap enumerator_3262 (outArgument_outActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_3262.hasCurrentObject ()) {
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Register '").add_operation (enumerator_3262.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).add_operation (enumerator_3262.current_mRegisterAddress (HERE).reader_hexString (SOURCE_FILE ("piccolo_config.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).add_operation (GALGAS_string (" set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).add_operation (enumerator_3262.current_mRegisterValue (HERE).reader_hexString (SOURCE_FILE ("piccolo_config.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)) ;
    GALGAS_configRegisterMaskMap var_configRegisterMaskMap ;
    GALGAS_luint joker_3493 ; // Joker input parameter
    GALGAS_luint joker_3496 ; // Joker input parameter
    GALGAS_illegalMaskList joker_3522 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_3262.current_lkey (HERE), joker_3493, joker_3496, var_configRegisterMaskMap, joker_3522, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 78)) ;
    cEnumerator_configRegisterMaskMap enumerator_3569 (var_configRegisterMaskMap, kEnumeration_up) ;
    while (enumerator_3569.hasCurrentObject ()) {
      GALGAS_lstring var_settingName = enumerator_3569.current_lkey (HERE) ;
      cEnumerator_fieldSettingMap enumerator_3662 (enumerator_3569.current_mFieldSettingMap (HERE), kEnumeration_up) ;
      while (enumerator_3662.hasCurrentObject ()) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_3262.current_mRegisterValue (HERE).operator_and (enumerator_3569.current_mMaskValue (HERE).reader_uint (SOURCE_FILE ("piccolo_config.galgas", 82)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 82)).objectCompare (enumerator_3662.current_mValue (HERE))).boolEnum () ;
        if (kBoolTrue == test_6) {
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  setting '").add_operation (var_settingName.reader_string (SOURCE_FILE ("piccolo_config.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).add_operation (GALGAS_string ("' set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).add_operation (enumerator_3662.current_mValue (HERE).reader_hexString (SOURCE_FILE ("piccolo_config.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).add_operation (GALGAS_string (" (\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).add_operation (enumerator_3662.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)) ;
        }
        enumerator_3662.gotoNextObject () ;
      }
      enumerator_3569.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_config.galgas", 87)) ;
    enumerator_3262.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_4018 (outArgument_outActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_4018.hasCurrentObject ()) {
    GALGAS_illegalMaskList var_illegalMaskList ;
    GALGAS_luint joker_4101 ; // Joker input parameter
    GALGAS_luint joker_4104 ; // Joker input parameter
    GALGAS_configRegisterMaskMap joker_4107 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_4018.current_lkey (HERE), joker_4101, joker_4104, joker_4107, var_illegalMaskList, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 92)) ;
    cEnumerator_illegalMaskList enumerator_4158 (var_illegalMaskList, kEnumeration_up) ;
    while (enumerator_4158.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_4018.current_mRegisterValue (HERE).operator_and (enumerator_4158.current_mIllegalMask (HERE).reader_uint (SOURCE_FILE ("piccolo_config.galgas", 94)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 94)).objectCompare (enumerator_4158.current_mIllegalValue (HERE).reader_uint (SOURCE_FILE ("piccolo_config.galgas", 94)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)), GALGAS_string ("illegal setting for '").add_operation (enumerator_4018.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)).add_operation (GALGAS_string ("' register: "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)).add_operation (enumerator_4158.current_mDescription (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 95))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*** ILLEGAL SETTING for register '").add_operation (enumerator_4018.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)).add_operation (GALGAS_string ("' ***\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  message: ").add_operation (enumerator_4158.current_mDescription (HERE).reader_string (SOURCE_FILE ("piccolo_config.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 97))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)) ;
      }
      enumerator_4158.gotoNextObject () ;
    }
    enumerator_4018.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Routine 'buildConfig'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildConfig (const GALGAS_configRegisterMap constinArgument_inConfigRegisterMap,
                          const GALGAS_configDefinitionList constinArgument_inConfigDefinitionList,
                          GALGAS_string & ioArgument_ioListFileContents,
                          GALGAS_actualConfigurationMap & outArgument_outActualConfigurationMap,
                          C_Compiler * inCompiler
                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualConfigurationMap.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 111)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 111))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 111)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("MICROCONTROLLER CONFIGURATION").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 112))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 113))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inConfigDefinitionList.reader_length (SOURCE_FILE ("piccolo_config.galgas", 115)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_actualBuildConfig (constinArgument_inConfigRegisterMap, constinArgument_inConfigDefinitionList, ioArgument_ioListFileContents, outArgument_outActualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 116)) ;
    }
  }else if (kBoolFalse == test_0) {
    outArgument_outActualConfigurationMap = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 123)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("No configuration.\n"
      "\n")  COMMA_SOURCE_FILE ("piccolo_config.galgas", 124)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Routine 'addBaselineUsedRoutinesFromInstructionList'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addBaselineUsedRoutinesFromInstructionList (const GALGAS_baseline_5F_instructionList constinArgument_inInstructionList,
                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_baseline_5F_instructionList enumerator_4496 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_4496.hasCurrentObject ()) {
    callCategoryMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) enumerator_4496.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 137)) ;
    enumerator_4496.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'baseline_computeUsedRoutines'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_baseline_5F_computeUsedRoutines (const GALGAS_baseline_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 147)) ;
  GALGAS_stringset var_s = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_used_routines.galgas", 149)) ;
  if (constinArgument_inRoutineDefinitionList.reader_length (SOURCE_FILE ("baseline_used_routines.galgas", 150)).isValid ()) {
    uint32_t variant_4936 = constinArgument_inRoutineDefinitionList.reader_length (SOURCE_FILE ("baseline_used_routines.galgas", 150)).uintValue () ;
    bool loop_4936 = true ;
    while (loop_4936) {
      loop_4936 = GALGAS_bool (kIsNotEqual, var_s.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_4936) {
        loop_4936 = GALGAS_bool (kIsNotEqual, var_s.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_4936 && (0 == variant_4936)) {
        loop_4936 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_used_routines.galgas", 150)) ;
      }
      if (loop_4936) {
        variant_4936 -- ;
        var_s = result_outUsedRoutineSet ;
        cEnumerator_baseline_5F_routineDefinitionList enumerator_5070 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
        while (enumerator_5070.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.reader_hasKey (enumerator_5070.current_mRoutineName (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 154)).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            routine_addBaselineUsedRoutinesFromInstructionList (enumerator_5070.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 155)) ;
            }
          }
          enumerator_5070.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_baseline_5F_computeUsedRoutines [2] = {
  & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_baseline_5F_computeUsedRoutines (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* §§ inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_baseline_5F_routineDefinitionList operand0 = GALGAS_baseline_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  return function_baseline_5F_computeUsedRoutines (operand0,
                                                   inCompiler
                                                   COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_baseline_5F_computeUsedRoutines ("baseline_computeUsedRoutines",
                                                                                 functionWithGenericHeader_baseline_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 1,
                                                                                 functionArgs_baseline_5F_computeUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'baseline_analysis'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_baseline_5F_analysis (const GALGAS_baseline_5F_model constinArgument_inPiccoloModel,
                                   const GALGAS_string constinArgument_inSourceFileName,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName = constinArgument_inSourceFileName.reader_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 95)).reader_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 95)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName.objectCompare (constinArgument_inPiccoloModel.reader_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 96)).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 96)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inPiccoloModel.reader_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 97)).reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.reader_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 97)).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)).add_operation (var_sourceFileBaseName, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 98)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 98))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)) ;
  }
  GALGAS_string var_listFileContents = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
  {
  routine_parseDeviceDefinition (constinArgument_inPiccoloModel.mAttribute_mDeviceName, var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 103)) ;
  }
  switch (var_piccoloDeviceModel.reader_mProcessorType (SOURCE_FILE ("baseline_compilation.galgas", 104)).enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      GALGAS_location location_2 (constinArgument_inPiccoloModel.reader_mDeviceName (SOURCE_FILE ("baseline_compilation.galgas", 106)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a pic18 device is not accepted here : only a baseline device")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 106)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
      GALGAS_location location_3 (constinArgument_inPiccoloModel.reader_mDeviceName (SOURCE_FILE ("baseline_compilation.galgas", 107)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("a mid-ranfe device is not accepted here : only a baseline device")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 107)) ;
    }
    break ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap ;
  {
  routine_buildConfig (var_piccoloDeviceModel.reader_mConfigRegisterMap (SOURCE_FILE ("baseline_compilation.galgas", 112)), constinArgument_inPiccoloModel.reader_mConfigDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 113)), var_listFileContents, var_actualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 111)) ;
  }
  GALGAS_registerTable var_registerTable = var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("baseline_compilation.galgas", 118)) ;
  GALGAS_ramBankTable var_ramBank = var_piccoloDeviceModel.reader_mRamBankTable (SOURCE_FILE ("baseline_compilation.galgas", 119)) ;
  GALGAS_declaredByteMap var_declaredByteMap ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.mAttribute_mRamDefinitionList, var_ramBank, var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("baseline_compilation.galgas", 124)), var_listFileContents, var_registerTable, var_declaredByteMap, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 120)) ;
  }
  GALGAS_baselineRoutineMap var_routineMap = GALGAS_baselineRoutineMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 130)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_5681 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_5681.hasCurrentObject ()) {
    {
    var_routineMap.modifier_insertKey (enumerator_5681.current_mRoutineName (HERE), enumerator_5681.current_mIsNoReturn (HERE), enumerator_5681.current_mPage (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 132)) ;
    }
    enumerator_5681.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 135)) ;
  GALGAS_stringset var_usedRegisters = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 140)) ;
  cEnumerator_constantDefinitionList enumerator_6138 (constinArgument_inPiccoloModel.reader_mConstantDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 141)), kEnumeration_up) ;
  while (enumerator_6138.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result ;
    callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_6138.current_mExpression (HERE).ptr (), var_registerTable, var_constantMap, var_result, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 142)) ;
    const enumGalgasBool test_4 = var_registerTable.reader_hasKey (enumerator_6138.current_mConstantName (HERE).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 143)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 143)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_6138.current_mConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("'").add_operation (enumerator_6138.current_mConstantName (HERE).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 144)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 144))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 144)) ;
    }else if (kBoolFalse == test_4) {
      {
      var_constantMap.modifier_insertKey (enumerator_6138.current_mConstantName (HERE), var_result, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 146)) ;
      }
    }
    enumerator_6138.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_print_5F_constant_5F_definition (var_constantMap, var_listFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 151)) ;
    }
  }
  const enumGalgasBool test_7 = var_routineMap.reader_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_luint var_page ;
    var_routineMap.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 158))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 158)), var_isNoReturn, var_page, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 158)) ;
    const enumGalgasBool test_8 = var_isNoReturn.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_8) {
      inCompiler->emitSemanticError (var_routineMap.reader_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 160)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main page 0\"")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 160)) ;
    }
    const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_page.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_location location_10 (var_page.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_10, GALGAS_string ("the \"main\" should be declared in page 0: \"noreturn main page 0\"")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 163)) ;
    }
  }else if (kBoolFalse == test_7) {
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.reader_mEndOfProgram (SOURCE_FILE ("baseline_compilation.galgas", 166)), GALGAS_string ("the program should declare the \"main\" routine")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 166)) ;
  }
  GALGAS_bool var_needsToSavePCLATH = GALGAS_bool (false) ;
  GALGAS_uint var_totalPageCount = var_piccoloDeviceModel.mAttribute_mRomSize.reader_uint (SOURCE_FILE ("baseline_compilation.galgas", 170)).add_operation (GALGAS_uint ((uint32_t) 511U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 170)).divide_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 170)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_7548 (constinArgument_inPiccoloModel.reader_mRoutineDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 171)), kEnumeration_up) ;
  while (enumerator_7548.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, enumerator_7548.current_mPage (HERE).reader_uint (SOURCE_FILE ("baseline_compilation.galgas", 172)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      var_needsToSavePCLATH = GALGAS_bool (true) ;
    }
    const enumGalgasBool test_12 = GALGAS_bool (kIsSupOrEqual, enumerator_7548.current_mPage (HERE).reader_uint (SOURCE_FILE ("baseline_compilation.galgas", 175)).objectCompare (var_totalPageCount)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_location location_13 (enumerator_7548.current_mPage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_13, GALGAS_string ("invalid value (").add_operation (enumerator_7548.current_mPage (HERE).mAttribute_uint.reader_string (SOURCE_FILE ("baseline_compilation.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 176)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 176)).add_operation (var_totalPageCount.reader_string (SOURCE_FILE ("baseline_compilation.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 176)).add_operation (GALGAS_string (" 512 word page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 176))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 176)) ;
    }
    enumerator_7548.gotoNextObject () ;
  }
  GALGAS_baseline_5F_routineDefinitionList var_sortedRoutineDefinitionList = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 180)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_8002 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_8002.hasCurrentObject ()) {
    const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, enumerator_8002.current_mRoutineName (HERE).mAttribute_string.objectCompare (GALGAS_string ("main"))).boolEnum () ;
    if (kBoolTrue == test_14) {
      {
      var_sortedRoutineDefinitionList.modifier_insertAtIndex (enumerator_8002.current_mRoutineName (HERE), enumerator_8002.current_mPage (HERE), enumerator_8002.current_mIsNoReturn (HERE), enumerator_8002.current_mInstructionList (HERE), enumerator_8002.current_mEndOfRoutineLocation (HERE), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 183)) ;
      }
    }else if (kBoolFalse == test_14) {
      var_sortedRoutineDefinitionList.addAssign_operation (enumerator_8002.current_mRoutineName (HERE), enumerator_8002.current_mPage (HERE), enumerator_8002.current_mIsNoReturn (HERE), enumerator_8002.current_mInstructionList (HERE), enumerator_8002.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 192)) ;
    }
    enumerator_8002.gotoNextObject () ;
  }
  GALGAS_baseline_5F_intermediate_5F_instructionList var_intermediateInstructionList = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 201)) ;
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 202)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_uint var_currentPage = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_localLabelIndex = GALGAS_uint ((uint32_t) 0U) ;
    if (var_totalPageCount.isValid ()) {
      uint32_t variant_8656 = var_totalPageCount.uintValue () ;
      bool loop_8656 = true ;
      while (loop_8656) {
        loop_8656 = GALGAS_bool (kIsStrictInf, var_currentPage.objectCompare (var_totalPageCount)).isValid () ;
        if (loop_8656) {
          loop_8656 = GALGAS_bool (kIsStrictInf, var_currentPage.objectCompare (var_totalPageCount)).boolValue () ;
        }
        if (loop_8656 && (0 == variant_8656)) {
          loop_8656 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_compilation.galgas", 205)) ;
        }
        if (loop_8656) {
          variant_8656 -- ;
          GALGAS_bool var_pseudo_5F_PAGE_5F_generated = GALGAS_bool (false) ;
          cEnumerator_baseline_5F_routineDefinitionList enumerator_8798 (var_sortedRoutineDefinitionList, kEnumeration_up) ;
          while (enumerator_8798.hasCurrentObject ()) {
            const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, enumerator_8798.current_mPage (HERE).reader_uint (SOURCE_FILE ("baseline_compilation.galgas", 208)).objectCompare (var_currentPage)).boolEnum () ;
            if (kBoolTrue == test_16) {
              const enumGalgasBool test_17 = var_pseudo_5F_PAGE_5F_generated.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 210)).boolEnum () ;
              if (kBoolTrue == test_17) {
                var_pseudo_5F_PAGE_5F_generated = GALGAS_bool (true) ;
                var_intermediateInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_new (var_currentPage  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 212))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 212)) ;
              }
              GALGAS_routineKind var_routineKind ;
              const enumGalgasBool test_18 = enumerator_8798.current_mIsNoReturn (HERE).boolEnum () ;
              if (kBoolTrue == test_18) {
                var_routineKind = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("baseline_compilation.galgas", 217)) ;
                const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, enumerator_8798.current_mInstructionList (HERE).reader_length (SOURCE_FILE ("baseline_compilation.galgas", 219)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_19) {
                  GALGAS_location location_20 (enumerator_8798.current_mRoutineName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                  inCompiler->emitSemanticError (location_20, GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 220)) ;
                }else if (kBoolFalse == test_19) {
                  GALGAS_baseline_5F_instruction var_lastInstruction ;
                  enumerator_8798.current_mInstructionList (HERE).method_last (var_lastInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 222)) ;
                  callCategoryMethod_shouldNotContinueInSequence ((const cPtr_baseline_5F_instruction *) var_lastInstruction.ptr (), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 223)) ;
                }
              }else if (kBoolFalse == test_18) {
                var_routineKind = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("baseline_compilation.galgas", 226)) ;
                const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, enumerator_8798.current_mInstructionList (HERE).reader_length (SOURCE_FILE ("baseline_compilation.galgas", 228)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_21) {
                  GALGAS_location location_22 (enumerator_8798.current_mRoutineName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                  inCompiler->emitSemanticError (location_22, GALGAS_string ("a baseline routine must end with a MOVLW instruction")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 229)) ;
                }else if (kBoolFalse == test_21) {
                  GALGAS_baseline_5F_instruction var_lastInstruction ;
                  enumerator_8798.current_mInstructionList (HERE).method_last (var_lastInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 231)) ;
                  callCategoryMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction.ptr (), GALGAS_string ("the last routine instruction should be MOVLW"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 232)) ;
                }
              }
              const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, enumerator_8798.current_mRoutineName (HERE).mAttribute_string.objectCompare (GALGAS_string ("main"))).boolEnum () ;
              if (kBoolTrue == test_23) {
                var_intermediateInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_new (enumerator_8798.current_mRoutineName (HERE), enumerator_8798.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 237))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237)) ;
                var_intermediateInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_8798.current_mRoutineName (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 238))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 238)) ;
              }
              GALGAS_bool var_continuesInSequence ;
              {
              routine_handleBaselineInstructionList (var_currentPage, enumerator_8798.current_mInstructionList (HERE), var_routineMap, var_registerTable, var_constantMap, var_localLabelIndex, var_intermediateInstructionList, var_listFileContents, var_continuesInSequence, var_routineKind, enumerator_8798.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 251)), var_usedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 240)) ;
              }
              var_intermediateInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_new (enumerator_8798.current_mRoutineName (HERE), var_currentPage  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 254))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 254)) ;
              const enumGalgasBool test_24 = enumerator_8798.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence COMMA_SOURCE_FILE ("baseline_compilation.galgas", 255)).boolEnum () ;
              if (kBoolTrue == test_24) {
                GALGAS_location location_25 (enumerator_8798.current_mRoutineName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                inCompiler->emitSemanticError (location_25, GALGAS_string ("execution should not reach the end of a \"noreturn\" routine")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 256)) ;
              }
            }
            enumerator_8798.gotoNextObject () ;
          }
          var_currentPage.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 260)) ;
        }
      }
    }
  }
  GALGAS_stringset var_usedRoutineSet = function_baseline_5F_computeUsedRoutines (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 264)) ;
  GALGAS_baseline_5F_declaredRoutineMap var_declaredRoutineMap = GALGAS_baseline_5F_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 267)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_11558 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_11558.hasCurrentObject ()) {
    {
    var_declaredRoutineMap.modifier_insertKey (enumerator_11558.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 269)) ;
    }
    enumerator_11558.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 272)) ;
  cEnumerator_lstringlist enumerator_11780 (constinArgument_inPiccoloModel.mAttribute_mUnusedRoutineList, kEnumeration_up) ;
  while (enumerator_11780.hasCurrentObject ()) {
    const enumGalgasBool test_26 = var_declaredRoutineMap.reader_hasKey (enumerator_11780.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 274)).boolEnum () ;
    if (kBoolTrue == test_26) {
      GALGAS_location location_27 (enumerator_11780.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_27, GALGAS_string ("the '").add_operation (enumerator_11780.current_mValue (HERE).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275)) ;
    }else if (kBoolFalse == test_26) {
      const enumGalgasBool test_28 = var_unusedRoutineDeclarationUnicity.reader_hasKey (enumerator_11780.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)).boolEnum () ;
      if (kBoolTrue == test_28) {
        GALGAS_location location_29 (enumerator_11780.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_29, GALGAS_string ("the '").add_operation (enumerator_11780.current_mValue (HERE).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277)) ;
      }else if (kBoolFalse == test_28) {
        const enumGalgasBool test_30 = var_usedRoutineSet.reader_hasKey (enumerator_11780.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)).boolEnum () ;
        if (kBoolTrue == test_30) {
          GALGAS_location location_31 (enumerator_11780.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticWarning (location_31, GALGAS_string ("the '").add_operation (enumerator_11780.current_mValue (HERE).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 279)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 279))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 279)) ;
        }
      }
    }
    var_unusedRoutineDeclarationUnicity.addAssign_operation (enumerator_11780.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 281)) ;
    enumerator_11780.gotoNextObject () ;
  }
  cEnumerator_baseline_5F_declaredRoutineMap enumerator_12308 (var_declaredRoutineMap, kEnumeration_up) ;
  while (enumerator_12308.hasCurrentObject ()) {
    const enumGalgasBool test_32 = var_usedRoutineSet.reader_hasKey (enumerator_12308.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 284)).operator_and (var_unusedRoutineDeclarationUnicity.reader_hasKey (enumerator_12308.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 284)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_location location_33 (enumerator_12308.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_33, GALGAS_string ("the '").add_operation (enumerator_12308.current_lkey (HERE).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 285)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 285))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 285)) ;
    }
    enumerator_12308.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 289)) ;
  cEnumerator_lstringlist enumerator_12695 (constinArgument_inPiccoloModel.mAttribute_mUnusedRegisterList, kEnumeration_up) ;
  while (enumerator_12695.hasCurrentObject ()) {
    const enumGalgasBool test_34 = var_registerTable.reader_hasKey (enumerator_12695.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 291)).boolEnum () ;
    if (kBoolTrue == test_34) {
      GALGAS_location location_35 (enumerator_12695.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_35, GALGAS_string ("the '").add_operation (enumerator_12695.current_mValue (HERE).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292)) ;
    }else if (kBoolFalse == test_34) {
      const enumGalgasBool test_36 = var_unusedDeclarationUnicity.reader_hasKey (enumerator_12695.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)).boolEnum () ;
      if (kBoolTrue == test_36) {
        GALGAS_location location_37 (enumerator_12695.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_37, GALGAS_string ("the '").add_operation (enumerator_12695.current_mValue (HERE).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294)) ;
      }else if (kBoolFalse == test_36) {
        const enumGalgasBool test_38 = var_usedRegisters.reader_hasKey (enumerator_12695.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)).boolEnum () ;
        if (kBoolTrue == test_38) {
          GALGAS_location location_39 (enumerator_12695.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticWarning (location_39, GALGAS_string ("the '").add_operation (enumerator_12695.current_mValue (HERE).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 296)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 296))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 296)) ;
        }
      }
    }
    var_unusedDeclarationUnicity.addAssign_operation (enumerator_12695.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 298)) ;
    enumerator_12695.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_13191 (var_declaredByteMap, kEnumeration_up) ;
  while (enumerator_13191.hasCurrentObject ()) {
    const enumGalgasBool test_40 = var_usedRegisters.reader_hasKey (enumerator_13191.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 301)).operator_and (var_unusedDeclarationUnicity.reader_hasKey (enumerator_13191.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 301)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)).boolEnum () ;
    if (kBoolTrue == test_40) {
      GALGAS_location location_41 (enumerator_13191.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_41, GALGAS_string ("the '").add_operation (enumerator_13191.current_lkey (HERE).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 302)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 302))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 302)) ;
    }
    enumerator_13191.gotoNextObject () ;
  }
  const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 306)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.reader_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)).boolEnum () ;
  if (kBoolTrue == test_42) {
    var_listFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)) ;
    var_listFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("INTERMEDIATE INSTRUCTION LIST").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)) ;
    var_listFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)) ;
    var_listFileContents.dotAssign_operation (GALGAS_string ("Generated intermediate code:\n")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 310)) ;
    var_listFileContents.dotAssign_operation (GALGAS_string (" Line Length Mnemonic\n")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 311)) ;
    GALGAS_uint var_currentAddress = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_13968 (var_intermediateInstructionList, kEnumeration_up) ;
    GALGAS_uint index_13933 ((uint32_t) 0) ;
    while (enumerator_13968.hasCurrentObject ()) {
      var_listFileContents.dotAssign_operation (index_13933.reader_string (SOURCE_FILE ("baseline_compilation.galgas", 314)).reader_stringByLeftPadding (GALGAS_uint ((uint32_t) 5U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)) ;
      var_listFileContents.dotAssign_operation (callCategoryReader_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13968.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)).reader_string (SOURCE_FILE ("baseline_compilation.galgas", 315)).reader_stringByLeftPadding (GALGAS_uint ((uint32_t) 6U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)) ;
      callCategoryMethod_print ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13968.current_mInstruction (HERE).ptr (), var_listFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 316)) ;
      var_listFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 317)) ;
      callCategoryMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13968.current_mInstruction (HERE).ptr (), var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 318)) ;
      enumerator_13968.gotoNextObject () ;
      index_13933.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)) ;
    }
    var_listFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)) ;
    var_listFileContents.dotAssign_operation (GALGAS_string ("Code size without optimization: ").add_operation (var_currentAddress.reader_string (SOURCE_FILE ("baseline_compilation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 321)).add_operation (GALGAS_string (" words.\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 321))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 321)) ;
  }
  const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 324)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 324)).boolEnum () ;
  if (kBoolTrue == test_43) {
    {
    routine_perform_5F_baseline_5F_optimizations (var_intermediateInstructionList, var_listFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 325)) ;
    }
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 328)) ;
  }
  GALGAS_registerExpression var_sr = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 332))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 329)) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_statusRegister ;
  GALGAS_bitSliceTable var_statusRegisterBitSliceTable ;
  callCategoryMethod_resolveBaselineAccess ((const cPtr_registerExpression *) var_sr.ptr (), var_registerTable, var_constantMap, var_statusRegister, var_statusRegisterBitSliceTable, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 334)) ;
  GALGAS_baseline_5F_assembly_5F_instructionList var_assemblyInstructionList = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 341)) ;
  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 342)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_44) {
    {
    routine_build_5F_baseline_5F_assembly_5F_code (var_intermediateInstructionList, var_actualConfigurationMap, var_statusRegister, var_statusRegisterBitSliceTable, var_assemblyInstructionList, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 343)) ;
    }
  }
  const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 352)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_45) {
    var_listFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)) ;
    var_listFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)) ;
    var_listFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)) ;
    var_listFileContents.dotAssign_operation (GALGAS_string ("Address Code Mnemonic\n")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 356)) ;
    GALGAS_uint var_usedROMsize ;
    {
    routine_build_5F_baseline_5F_binary_5F_code (var_assemblyInstructionList, var_piccoloDeviceModel.mAttribute_mRomSize.reader_uint (SOURCE_FILE ("baseline_compilation.galgas", 359)), var_listFileContents, var_usedROMsize, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 357)) ;
    }
  }
  const enumGalgasBool test_46 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_46) {
    GALGAS_string var_listFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 366)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 366)) ;
    GALGAS_bool joker_16203 ; // Joker input parameter
    var_listFileContents.method_writeToFileWhenDifferentContents (var_listFile, joker_16203, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 367)) ;
  }
  const enumGalgasBool test_47 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 371)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_47) {
    GALGAS_string var_contents ;
    {
    routine_getGeneratedContents (var_contents, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 382)) ;
    }
    GALGAS_string var_destinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 383)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 383)) ;
    GALGAS_bool joker_16842 ; // Joker input parameter
    var_contents.method_writeToFileWhenDifferentContents (var_destinationFile, joker_16842, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 384)) ;
    const enumGalgasBool test_48 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_48) {
      GALGAS_string var_baseName = constinArgument_inSourceFileName.reader_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 386)).reader_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 386)) ;
      {
      routine_get_5F_C_5F_ArrayImplementation (var_baseName, var_contents, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 387)) ;
      }
      var_destinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 388)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 388)) ;
      GALGAS_bool joker_17204 ; // Joker input parameter
      var_contents.method_writeToFileWhenDifferentContents (var_destinationFile, joker_17204, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 389)) ;
      {
      routine_get_5F_C_5F_ArrayHeader (var_baseName, var_contents, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 390)) ;
      }
      var_destinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 391)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 391)) ;
      GALGAS_bool joker_17402 ; // Joker input parameter
      var_contents.method_writeToFileWhenDifferentContents (var_destinationFile, joker_17402, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 392)) ;
    }
    const enumGalgasBool test_49 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_49) {
      GALGAS_string var_assemblyCode = GALGAS_string ("  processor ").add_operation (constinArgument_inPiccoloModel.mAttribute_mDeviceName.reader_string (SOURCE_FILE ("baseline_compilation.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 411)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 411)) ;
      cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_18503 (var_assemblyInstructionList, kEnumeration_up) ;
      while (enumerator_18503.hasCurrentObject ()) {
        callCategoryMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_18503.current_mInstruction (HERE).ptr (), var_assemblyCode, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 413)) ;
        var_assemblyCode.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 414)) ;
        enumerator_18503.gotoNextObject () ;
      }
      var_assemblyCode.dotAssign_operation (GALGAS_string ("\n"
        ";--- Registers\n")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 416)) ;
      cEnumerator_registerTable enumerator_18663 (var_registerTable, kEnumeration_up) ;
      while (enumerator_18663.hasCurrentObject ()) {
        GALGAS_uint var_address ;
        enumerator_18663.current_mRegisterAddressList (HERE).method_first (var_address, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)) ;
        var_assemblyCode.dotAssign_operation (enumerator_18663.current_lkey (HERE).mAttribute_string.add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 419)).add_operation (var_address.reader_hexString (SOURCE_FILE ("baseline_compilation.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 419)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 419))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 419)) ;
        enumerator_18663.gotoNextObject () ;
      }
      var_assemblyCode.dotAssign_operation (GALGAS_string ("W EQU 0\n"
        "\n")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 421)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (";--- Configuration\n")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 422)) ;
      cEnumerator_actualConfigurationMap enumerator_18928 (var_actualConfigurationMap, kEnumeration_up) ;
      while (enumerator_18928.hasCurrentObject ()) {
        var_assemblyCode.dotAssign_operation (GALGAS_string ("  __config ").add_operation (enumerator_18928.current_mRegisterAddress (HERE).reader_hexString (SOURCE_FILE ("baseline_compilation.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)).add_operation (enumerator_18928.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)).reader_hexString (SOURCE_FILE ("baseline_compilation.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)) ;
        enumerator_18928.gotoNextObject () ;
      }
      var_assemblyCode.dotAssign_operation (GALGAS_string ("\n"
        "  END\n")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 426)) ;
      GALGAS_string var_asmDestinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 427)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 427)) ;
      GALGAS_bool joker_19261 ; // Joker input parameter
      var_assemblyCode.method_writeToFileWhenDifferentContents (var_asmDestinationFile, joker_19261, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 428)) ;
    }
  }else if (kBoolFalse == test_47) {
    GALGAS_string var_hexDestinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 431)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 431)) ;
    const enumGalgasBool test_50 = var_hexDestinationFile.reader_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 432)).boolEnum () ;
    if (kBoolTrue == test_50) {
      {
      GALGAS_string::class_method_deleteFile (var_hexDestinationFile, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 433)) ;
      }
    }
    GALGAS_string var_asmDestinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 435)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 435)) ;
    const enumGalgasBool test_51 = var_asmDestinationFile.reader_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 436)).boolEnum () ;
    if (kBoolTrue == test_51) {
      {
      GALGAS_string::class_method_deleteFile (var_asmDestinationFile, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 437)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleBaselineInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleBaselineInstructionList (const GALGAS_uint constinArgument_inCurrentPage,
                                            const GALGAS_baseline_5F_instructionList constinArgument_inInstructionList,
                                            const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                            GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            GALGAS_bool & outArgument_outContinuesInSequence,
                                            const GALGAS_routineKind constinArgument_inRoutineKind,
                                            const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GALGAS_bool (true) ;
  cEnumerator_baseline_5F_instructionList enumerator_2271 (constinArgument_inInstructionList, kEnumeration_up) ;
  GALGAS_uint index_2246 ((uint32_t) 0) ;
  while (enumerator_2271.hasCurrentObject ()) {
    const enumGalgasBool test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_2271.current_mInstruction (HERE).reader_mInstructionLocation (SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)), GALGAS_string ("Unreachable code")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)) ;
      outArgument_outContinuesInSequence = GALGAS_bool (true) ;
    }
    GALGAS_bool temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, index_2246.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 86)).objectCompare (constinArgument_inInstructionList.reader_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 86)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = constinArgument_inLastInstructionShouldReturn ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_bool (false) ;
    }
    callCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) enumerator_2271.current_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, temp_1, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 76)) ;
    enumerator_2271.gotoNextObject () ;
    index_2246.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 71)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'acceptableTRISoperand'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset onceFunction_acceptableTRISoperand (C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_set ; // Returned variable
  result_set = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_semantic_analysis.galgas", 130)) ;
  result_set.addAssign_operation (GALGAS_string ("GPIO")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 131)) ;
  result_set.addAssign_operation (GALGAS_string ("PORTA")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 132)) ;
  result_set.addAssign_operation (GALGAS_string ("PORTB")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 133)) ;
  result_set.addAssign_operation (GALGAS_string ("PORTC")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 134)) ;
  result_set.addAssign_operation (GALGAS_string ("PORTD")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 135)) ;
  result_set.addAssign_operation (GALGAS_string ("PORTE")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 136)) ;
//---
  return result_set ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_acceptableTRISoperand = false ;
static GALGAS_stringset gOnceFunctionResult_acceptableTRISoperand ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_acceptableTRISoperand (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptableTRISoperand) {
    gOnceFunctionResult_acceptableTRISoperand = onceFunction_acceptableTRISoperand (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptableTRISoperand = true ;
  }
  return gOnceFunctionResult_acceptableTRISoperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_acceptableTRISoperand (void) {
  gOnceFunctionResult_acceptableTRISoperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_acceptableTRISoperand (NULL,
                                                                   releaseOnceFunctionResult_acceptableTRISoperand) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_acceptableTRISoperand [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_acceptableTRISoperand (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_acceptableTRISoperand (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_acceptableTRISoperand ("acceptableTRISoperand",
                                                                       functionWithGenericHeader_acceptableTRISoperand,
                                                                       & kTypeDescriptor_GALGAS_stringset,
                                                                       0,
                                                                       functionArgs_acceptableTRISoperand) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'findBaselineFirstInstructionFromAddress'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findBaselineFirstInstructionFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                      const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                      GALGAS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GALGAS_uint var_currentAddress = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 203)) ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("baseline_optimizations.galgas", 205)).isValid ()) {
    uint32_t variant_8042 = constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("baseline_optimizations.galgas", 205)).uintValue () ;
    bool loop_8042 = true ;
    while (loop_8042) {
      loop_8042 = GALGAS_bool (kIsStrictInf, var_currentAddress.objectCompare (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).isValid () ;
      if (loop_8042) {
        loop_8042 = GALGAS_bool (kIsStrictInf, var_currentAddress.objectCompare (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).boolValue () ;
      }
      if (loop_8042 && (0 == variant_8042)) {
        loop_8042 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 205)) ;
      }
      if (loop_8042) {
        variant_8042 -- ;
        if (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_actualInstruction cast_8293_instr ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8293_instr ;
            var_found = GALGAS_bool (true) ;
          }else{
            var_currentAddress.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 213)) ;
          }
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Routine 'findBaselineFirstInstructionOrLabelFromAddress'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findBaselineFirstInstructionOrLabelFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                             const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                             GALGAS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                             GALGAS_stringset & outArgument_outReachedLabelSet,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 225)) ;
  GALGAS_uint var_currentAddress = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 229)) ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("baseline_optimizations.galgas", 231)).isValid ()) {
    uint32_t variant_8972 = constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("baseline_optimizations.galgas", 231)).uintValue () ;
    bool loop_8972 = true ;
    while (loop_8972) {
      loop_8972 = GALGAS_bool (kIsStrictInf, var_currentAddress.objectCompare (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)))).operator_and (var_found.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 232)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 232)).isValid () ;
      if (loop_8972) {
        loop_8972 = GALGAS_bool (kIsStrictInf, var_currentAddress.objectCompare (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)))).operator_and (var_found.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 232)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 232)).boolValue () ;
      }
      if (loop_8972 && (0 == variant_8972)) {
        loop_8972 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 231)) ;
      }
      if (loop_8972) {
        variant_8972 -- ;
        if (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_actualInstruction cast_9223_instr ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9223_instr ;
            var_found = GALGAS_bool (true) ;
          }else if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE cast_9331_instr ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9331_instr ;
            var_found = GALGAS_bool (true) ;
          }else if (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL cast_9440_instr ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9440_instr ;
            outArgument_outReachedLabelSet.addAssign_operation (cast_9440_instr.reader_mLabel (SOURCE_FILE ("baseline_optimizations.galgas", 243)).reader_string (SOURCE_FILE ("baseline_optimizations.galgas", 243))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 243)) ;
            var_currentAddress.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 244)) ;
          }else{
            var_currentAddress.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 246)) ;
          }
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'perform_baseline_optimizations'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_perform_5F_baseline_5F_optimizations (GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)) ;
  GALGAS_baselineSymbolTableForOptimizations var_symbolTable = GALGAS_baselineSymbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("baseline_optimizations.galgas", 525)) ;
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_20670 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
  GALGAS_uint index_20636 ((uint32_t) 0) ;
  while (enumerator_20670.hasCurrentObject ()) {
    callCategoryMethod_defineLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_20670.current_mInstruction (HERE).ptr (), var_symbolTable, index_20636, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 527)) ;
    enumerator_20670.gotoNextObject () ;
    index_20636.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 526)) ;
  }
  GALGAS_bool var_optimizationsDone = GALGAS_bool (true) ;
  GALGAS_uint var_iteration = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.reader_length (SOURCE_FILE ("baseline_optimizations.galgas", 532)).isValid ()) {
    uint32_t variant_20866 = ioArgument_ioGeneratedInstructionList.reader_length (SOURCE_FILE ("baseline_optimizations.galgas", 532)).uintValue () ;
    bool loop_20866 = true ;
    while (loop_20866) {
      loop_20866 = var_optimizationsDone.isValid () ;
      if (loop_20866) {
        loop_20866 = var_optimizationsDone.boolValue () ;
      }
      if (loop_20866 && (0 == variant_20866)) {
        loop_20866 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 532)) ;
      }
      if (loop_20866) {
        variant_20866 -- ;
        var_optimizationsDone = GALGAS_bool (false) ;
        var_iteration.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 536)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Pass ").add_operation (var_iteration.reader_string (SOURCE_FILE ("baseline_optimizations.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_21112 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        GALGAS_uint index_21078 ((uint32_t) 0) ;
        while (enumerator_21112.hasCurrentObject ()) {
          if (enumerator_21112.current_mInstruction (HERE).isValid ()) {
            if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) {
              GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE cast_21207_inst ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeBEGIN_5F_ROUTINE ((const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) cast_21207_inst.ptr (), index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 542)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
              GALGAS_baseline_5F_intermediate_5F_GOTO cast_21368_inst ((cPtr_baseline_5F_intermediate_5F_GOTO *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeGOTO ((const cPtr_baseline_5F_intermediate_5F_GOTO *) cast_21368_inst.ptr (), var_symbolTable, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 544)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP) {
              GALGAS_baseline_5F_intermediate_5F_JUMP cast_21533_inst ((cPtr_baseline_5F_intermediate_5F_JUMP *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeJUMP ((const cPtr_baseline_5F_intermediate_5F_JUMP *) cast_21533_inst.ptr (), var_symbolTable, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 546)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL) {
              GALGAS_baseline_5F_intermediate_5F_CALL cast_21698_inst ((cPtr_baseline_5F_intermediate_5F_CALL *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeCALL ((const cPtr_baseline_5F_intermediate_5F_CALL *) cast_21698_inst.ptr (), var_symbolTable, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 548)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR) {
              GALGAS_baseline_5F_intermediate_5F_JSR cast_21862_inst ((cPtr_baseline_5F_intermediate_5F_JSR *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeJSR ((const cPtr_baseline_5F_intermediate_5F_JSR *) cast_21862_inst.ptr (), var_symbolTable, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 550)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition) {
              GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition cast_22047_inst ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeTestDecInc ((const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) cast_22047_inst.ptr (), var_symbolTable, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 552)) ;
            }
          }
          enumerator_21112.gotoNextObject () ;
          index_21078.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 539)) ;
        }
        GALGAS_stringset var_referencedLabels = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 557)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_22326 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        while (enumerator_22326.hasCurrentObject ()) {
          callCategoryMethod_enterReferencedLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_22326.current_mInstruction (HERE).ptr (), var_referencedLabels, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 559)) ;
          enumerator_22326.gotoNextObject () ;
        }
        cEnumerator_baselineSymbolTableForOptimizations enumerator_22425 (var_symbolTable, kEnumeration_up) ;
        while (enumerator_22425.hasCurrentObject ()) {
          const enumGalgasBool test_0 = var_referencedLabels.reader_hasKey (enumerator_22425.current_lkey (HERE).reader_string (SOURCE_FILE ("baseline_optimizations.galgas", 562)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 562)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 562)).boolEnum () ;
          if (kBoolTrue == test_0) {
            GALGAS_uint var_definitionLine ;
            var_symbolTable.method_searchKey (enumerator_22425.current_lkey (HERE), var_definitionLine, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 563)) ;
            ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (var_definitionLine.reader_string (SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (enumerator_22425.current_lkey (HERE).reader_string (SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)) ;
            {
            ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 565)), var_definitionLine, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 565)) ;
            }
            {
            GALGAS_uint joker_22824 ; // Joker input parameter
            var_symbolTable.modifier_removeKey (enumerator_22425.current_lkey (HERE), joker_22824, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 566)) ;
            }
          }
          enumerator_22425.gotoNextObject () ;
        }
        GALGAS_bool var_reachable = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction = GALGAS_bool (false) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_23029 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        GALGAS_uint index_22995 ((uint32_t) 0) ;
        while (enumerator_23029.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_reachable.operator_or (var_previousWasSkippingInstruction COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 574)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_reachable = callCategoryReader_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 575)) ;
            var_previousWasSkippingInstruction = var_skippingInstruction ;
            var_skippingInstruction = callCategoryReader_isSkippingInstruction ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 577)) ;
          }else if (kBoolFalse == test_1) {
            GALGAS_bool var_isLABEL = callCategoryReader_isLABEL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 579)) ;
            const enumGalgasBool test_2 = var_isLABEL.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_and (callCategoryReader_isNULL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).boolEnum () ;
            if (kBoolTrue == test_2) {
              ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (index_22995.reader_string (SOURCE_FILE ("baseline_optimizations.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)) ;
              {
              ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 582)), index_22995, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)) ;
              }
            }else if (kBoolFalse == test_2) {
              const enumGalgasBool test_3 = var_isLABEL.boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachable = callCategoryReader_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 584)) ;
                var_previousWasSkippingInstruction = GALGAS_bool (false) ;
                var_skippingInstruction = GALGAS_bool (false) ;
              }
            }
          }
          enumerator_23029.gotoNextObject () ;
          index_22995.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 573)) ;
        }
        const enumGalgasBool test_4 = var_optimizationsDone.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 590)).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  No optimization\n"
            "\n")  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 591)) ;
          GALGAS_uint var_currentAddress = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_23997 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
          while (enumerator_23997.hasCurrentObject ()) {
            callCategoryMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23997.current_mInstruction (HERE).ptr (), var_currentAddress, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 595)) ;
            enumerator_23997.gotoNextObject () ;
          }
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress.reader_string (SOURCE_FILE ("baseline_optimizations.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)).add_operation (GALGAS_string (" words\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'build_baseline_assembly_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_baseline_5F_assembly_5F_code (const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                    const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                    const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                    GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_13977 (constinArgument_inGeneratedInstructionList, kEnumeration_up) ;
  while (enumerator_13977.hasCurrentObject ()) {
    callCategoryMethod_generateAssemblyCode ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13977.current_mInstruction (HERE).ptr (), constinArgument_inSTATUSregister, constinArgument_inStatusRegisterBitSliceTable, ioArgument_ioAssemblyInstructionList, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 333)) ;
    enumerator_13977.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_14193 (constinArgument_inActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_14193.hasCurrentObject ()) {
    {
    routine_setEmitAddress (enumerator_14193.current_mRegisterAddress (HERE).add_operation (enumerator_14193.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)) ;
    }
    {
    routine_emitCode (enumerator_14193.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 338)) ;
    }
    enumerator_14193.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emitBaselineCodeAtWordAddress'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitBaselineCodeAtWordAddress (const GALGAS_uint constinArgument_inCode,
                                            GALGAS_uint & ioArgument_ioWordAddress,
                                            const GALGAS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("   ").add_operation (categoryReader_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10))  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11))  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)) ;
  callCategoryMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 15)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'emitNoBaselineCodeAtWordAddress'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitNoBaselineCodeAtWordAddress (const GALGAS_uint constinArgument_inWordAddress,
                                              const GALGAS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                              GALGAS_string & ioArgument_ioListFileContents,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("   ").add_operation (categoryReader_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24))  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("      ")  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 25)) ;
  callCategoryMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 27)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'build_baseline_binary_code'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_baseline_5F_binary_5F_code (const GALGAS_baseline_5F_assembly_5F_instructionList constinArgument_inAssemblyInstructionList,
                                                  const GALGAS_uint constinArgument_inROMsize,
                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                  GALGAS_uint & outArgument_outUsedROMsize,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GALGAS_baseline_5F_symbolTable var_symbolTable = GALGAS_baseline_5F_symbolTable::constructor_emptyMap (SOURCE_FILE ("baseline_build_binary_code.galgas", 324)) ;
  GALGAS_uint var_currentWordAddress = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12111 (constinArgument_inAssemblyInstructionList, kEnumeration_up) ;
  while (enumerator_12111.hasCurrentObject ()) {
    callCategoryMethod_enterLabelAtAddress ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12111.current_mInstruction (HERE).ptr (), var_symbolTable, var_currentWordAddress, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 327)) ;
    enumerator_12111.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass = var_currentWordAddress ;
  outArgument_outUsedROMsize = var_currentWordAddress ;
  var_currentWordAddress = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_setEmitAddress (GALGAS_uint ((uint32_t) 0U), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 333)) ;
  }
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12434 (constinArgument_inAssemblyInstructionList, kEnumeration_up) ;
  while (enumerator_12434.hasCurrentObject ()) {
    callCategoryMethod_generateBinaryCodeAtAddress ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12434.current_mInstruction (HERE).ptr (), var_symbolTable, ioArgument_ioListFileContents, var_currentWordAddress, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 335)) ;
    {
    routine_checkCurrentEmitAddress (var_currentWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 340)) ;
    }
    enumerator_12434.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass.objectCompare (var_currentWordAddress)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentWordAddress.reader_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)).add_operation (var_lastAddressForFirstPass.reader_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 344)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345))  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass.objectCompare (constinArgument_inROMsize)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass.reader_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)).add_operation (constinArgument_inROMsize.reader_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 348)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 349))  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Routine 'addMidRangeUsedRoutinesFromInstructionList'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addMidRangeUsedRoutinesFromInstructionList (const GALGAS_midrange_5F_instructionList constinArgument_inInstructionList,
                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_midrange_5F_instructionList enumerator_6043 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_6043.hasCurrentObject ()) {
    callCategoryMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) enumerator_6043.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 186)) ;
    enumerator_6043.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'midrange_computeUsedRoutines'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_midrange_5F_computeUsedRoutines (const GALGAS_midrange_5F_interruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                           const GALGAS_midrange_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 197)) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_6562 (constinArgument_inInterruptDefinitionList, kEnumeration_up) ;
  while (enumerator_6562.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList (enumerator_6562.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 200)) ;
    }
    enumerator_6562.gotoNextObject () ;
  }
  GALGAS_stringset var_s = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_used_routines.galgas", 206)) ;
  if (constinArgument_inRoutineDefinitionList.reader_length (SOURCE_FILE ("midrange_used_routines.galgas", 207)).isValid ()) {
    uint32_t variant_6757 = constinArgument_inRoutineDefinitionList.reader_length (SOURCE_FILE ("midrange_used_routines.galgas", 207)).uintValue () ;
    bool loop_6757 = true ;
    while (loop_6757) {
      loop_6757 = GALGAS_bool (kIsNotEqual, var_s.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_6757) {
        loop_6757 = GALGAS_bool (kIsNotEqual, var_s.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_6757 && (0 == variant_6757)) {
        loop_6757 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_used_routines.galgas", 207)) ;
      }
      if (loop_6757) {
        variant_6757 -- ;
        var_s = result_outUsedRoutineSet ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_6891 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
        while (enumerator_6891.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.reader_hasKey (enumerator_6891.current_mRoutineName (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 211)).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            routine_addMidRangeUsedRoutinesFromInstructionList (enumerator_6891.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 212)) ;
            }
          }
          enumerator_6891.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_midrange_5F_computeUsedRoutines [3] = {
  & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList,
  & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_midrange_5F_computeUsedRoutines (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* §§ inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_midrange_5F_interruptDefinitionList operand0 = GALGAS_midrange_5F_interruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                         inCompiler
                                                                                                                         COMMA_THERE) ;
  const GALGAS_midrange_5F_routineDefinitionList operand1 = GALGAS_midrange_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  return function_midrange_5F_computeUsedRoutines (operand0,
                                                   operand1,
                                                   inCompiler
                                                   COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_midrange_5F_computeUsedRoutines ("midrange_computeUsedRoutines",
                                                                                 functionWithGenericHeader_midrange_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 2,
                                                                                 functionArgs_midrange_5F_computeUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleMidrangeInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleMidrangeInstructionList (const GALGAS_midrange_5F_instructionList constinArgument_inInstructionList,
                                            const GALGAS_routineMap constinArgument_inRoutineMap,
                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                            GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            const GALGAS_uint constinArgument_inTotalBankCount,
                                            GALGAS_uint & ioArgument_ioCurrentBank,
                                            const GALGAS_bool constinArgument_inShouldPreserveBank,
                                            GALGAS_bool & outArgument_outContinuesInSequence,
                                            const GALGAS_routineKind constinArgument_inRoutineKind,
                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GALGAS_bool (true) ;
  cEnumerator_midrange_5F_instructionList enumerator_2948 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_2948.hasCurrentObject ()) {
    const enumGalgasBool test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 89)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_2948.current_mInstruction (HERE).reader_mInstructionLocation (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)), GALGAS_string ("Unreachable code")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)) ;
      outArgument_outContinuesInSequence = GALGAS_bool (true) ;
    }
    callCategoryMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) enumerator_2948.current_mInstruction (HERE).ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 93)) ;
    enumerator_2948.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'build_midrange_assembly_instruction_list'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (const GALGAS_uint constinArgument_inTotalPageCount,
                                                                   const GALGAS_uint constinArgument_inTotalBankCount,
                                                                   const GALGAS_sint constinArgument_inROMSize,
                                                                   const GALGAS_string constinArgument_inSharedRAMBankName,
                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                   const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                                                   const GALGAS_bool constinArgument_inHasInterrupt,
                                                                   GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  GALGAS_string var_generationOptimizationMessages = GALGAS_string::makeEmptyString () ;
  GALGAS_routineMap var_routineMap = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1651)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_57200 (constinArgument_inPiccoloModel.reader_mRoutineDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1652)), kEnumeration_up) ;
  while (enumerator_57200.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_57200.current_mRequiredBank (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1653)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1653)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57200.current_mRequiredBank (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1653)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1653)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_57200.current_mRequiredBank (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the required bank value should be lower or equal to 15")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1654)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_57200.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57200.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_57200.current_mReturnedBank (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the returned bank value should be lower or equal to 15")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1657)) ;
    }
    {
    var_routineMap.modifier_insertKey (enumerator_57200.current_mRoutineName (HERE), enumerator_57200.current_mIsNoReturn (HERE), enumerator_57200.current_mRequiredBank (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)), enumerator_57200.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)), enumerator_57200.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)) ;
    }
    enumerator_57200.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1662)) ;
  GALGAS_lstring var_romSizeString = GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1664))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1664)) ;
  {
  var_constantMap.modifier_insertKey (var_romSizeString, constinArgument_inROMSize.reader_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1665)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1665)) ;
  }
  cEnumerator_constantDefinitionList enumerator_57999 (constinArgument_inPiccoloModel.reader_mConstantDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1667)), kEnumeration_up) ;
  while (enumerator_57999.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result ;
    callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_57999.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1668)) ;
    const enumGalgasBool test_4 = constinArgument_inRegisterTable.reader_hasKey (enumerator_57999.current_mConstantName (HERE).reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1669)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1669)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_57999.current_mConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("'").add_operation (enumerator_57999.current_mConstantName (HERE).reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)) ;
    }else if (kBoolFalse == test_4) {
      {
      var_constantMap.modifier_insertKey (enumerator_57999.current_mConstantName (HERE), var_result, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1672)) ;
      }
    }
    enumerator_57999.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_print_5F_constant_5F_definition (var_constantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1677)) ;
    }
  }
  const enumGalgasBool test_7 = var_routineMap.reader_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1683)).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_uint var_requiredBank ;
    GALGAS_uint joker_58767 ; // Joker input parameter
    GALGAS_bool joker_58770 ; // Joker input parameter
    var_routineMap.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1684))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1684)), var_isNoReturn, var_requiredBank, joker_58767, joker_58770, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1684)) ;
    GALGAS_location var_mainDeclarationLocation = var_routineMap.reader_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1685)) ;
    const enumGalgasBool test_8 = var_isNoReturn.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1686)).boolEnum () ;
    if (kBoolTrue == test_8) {
      inCompiler->emitSemanticError (var_mainDeclarationLocation, GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\"")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1687)) ;
    }
    const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      inCompiler->emitSemanticError (var_mainDeclarationLocation, GALGAS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\"")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1690)) ;
    }
  }else if (kBoolFalse == test_7) {
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.reader_mEndOfProgram (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1693)), GALGAS_string ("the program should declare the \"main\" routine")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1693)) ;
  }
  GALGAS_uint var_localLabelIndex = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_handleInterruptRoutine (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap, constinArgument_inTotalBankCount, var_constantMap, constinArgument_inTotalPageCount, var_generationOptimizationMessages, var_localLabelIndex, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1697)) ;
  }
  GALGAS_uint var_currentPage = GALGAS_uint ((uint32_t) 0U) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_59818 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_59818 = true ;
    while (loop_59818) {
      loop_59818 = GALGAS_bool (kIsStrictInf, var_currentPage.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_59818) {
        loop_59818 = GALGAS_bool (kIsStrictInf, var_currentPage.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_59818 && (0 == variant_59818)) {
        loop_59818 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1714)) ;
      }
      if (loop_59818) {
        variant_59818 -- ;
        GALGAS_bool var_orgGenerated = GALGAS_bool (kIsEqual, var_currentPage.objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_59998 (constinArgument_inPiccoloModel.reader_mRoutineDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1716)), kEnumeration_up) ;
        while (enumerator_59998.hasCurrentObject ()) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_59998.current_mPage (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1717)).objectCompare (var_currentPage)).boolEnum () ;
          if (kBoolTrue == test_10) {
            const enumGalgasBool test_11 = var_orgGenerated.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1718)).boolEnum () ;
            if (kBoolTrue == test_11) {
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (var_currentPage.multiply_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1719))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1719))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1719)) ;
              var_orgGenerated = GALGAS_bool (true) ;
            }
            GALGAS_bool var_continuesInSequence ;
            GALGAS_uint var_currentBank = enumerator_59998.current_mRequiredBank (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1723)) ;
            GALGAS_routineKind var_routineKind ;
            const enumGalgasBool test_12 = enumerator_59998.current_mIsNoReturn (HERE).boolEnum () ;
            if (kBoolTrue == test_12) {
              var_routineKind = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1726)) ;
            }else if (kBoolFalse == test_12) {
              var_routineKind = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728)) ;
            }
            outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_59998.current_mRoutineName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1730))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1730)) ;
            {
            routine_handleMidrangeInstructionList (enumerator_59998.current_mInstructionList (HERE), var_routineMap, constinArgument_inRegisterTable, var_constantMap, var_localLabelIndex, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank, enumerator_59998.current_mPreservesBank (HERE), var_continuesInSequence, var_routineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1731)) ;
            }
            const enumGalgasBool test_13 = enumerator_59998.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_59998.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (enumerator_59998.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).boolEnum () ;
            if (kBoolTrue == test_13) {
              GALGAS_location location_14 (enumerator_59998.current_mRoutineName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_14, GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_59998.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)).reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)) ;
            }
            const enumGalgasBool test_15 = enumerator_59998.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)).boolEnum () ;
            if (kBoolTrue == test_15) {
              GALGAS_location location_16 (enumerator_59998.current_mRoutineName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_16, GALGAS_string ("execution should not reach the end of a \"noreturn\" routine")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)) ;
            }
            const enumGalgasBool test_17 = enumerator_59998.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1753)).boolEnum () ;
            if (kBoolTrue == test_17) {
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (enumerator_59998.current_mRoutineName (HERE).reader_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1754))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1754))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1754)) ;
            }
          }
          enumerator_59998.gotoNextObject () ;
        }
        var_currentPage.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1758)) ;
      }
    }
  }
  const enumGalgasBool test_18 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_18) {
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1762)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1762))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1762)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("IPIC INSTRUCTION LIST").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1763)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1763)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1763))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1763)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Generated intermediate code:\n")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1765)) ;
    GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_currentAddress = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_62165 (outArgument_outGeneratedInstructionList, kEnumeration_up) ;
    while (enumerator_62165.hasCurrentObject ()) {
      callCategoryMethod_setCurrentAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62165.current_mInstruction (HERE).ptr (), var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)) ;
      ioArgument_ioListFileContents.dotAssign_operation (var_idx.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1770)).reader_stringByLeftPadding (GALGAS_uint ((uint32_t) 5U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1770)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1770))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1770)) ;
      callCategoryMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62165.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)) ;
      var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1773)) ;
      enumerator_62165.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1775)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1776)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1776)).add_operation (GALGAS_string (" instructions.\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1776))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1776)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'interruptRoutineShouldSavePCLATH'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_interruptRoutineShouldSavePCLATH (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                               const GALGAS_uint constinArgument_inTotalPageCount,
                                               GALGAS_string & ioArgument_ioListFileContents,
                                               GALGAS_bool & outArgument_outShouldSavePCLATH,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outShouldSavePCLATH.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("PCLATH should be saved \?\n")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1787)) ;
  outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_62980 (constinArgument_inPiccoloModel.reader_mRoutineDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1790)), kEnumeration_up) ;
  while (enumerator_62980.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_62980.current_mPage (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1791)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outShouldSavePCLATH = GALGAS_bool (true) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, enumerator_62980.current_mPage (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1794)).objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_62980.current_mPage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("invalid value (").add_operation (enumerator_62980.current_mPage (HERE).reader_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).add_operation (constinArgument_inTotalPageCount.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).add_operation (GALGAS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)) ;
    }
    enumerator_62980.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1798)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  No, program uses only page 0.\n")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1799)) ;
  }
  const enumGalgasBool test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
    cEnumerator_midrange_5F_interruptDefinitionList enumerator_63543 (constinArgument_inPiccoloModel.reader_mInterruptDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1804)), kEnumeration_up) ;
    bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1804)).isValidAndTrue () ;
    if (enumerator_63543.hasCurrentObject () && bool_5) {
      while (enumerator_63543.hasCurrentObject () && bool_5) {
        cEnumerator_midrange_5F_instructionList enumerator_63610 (enumerator_63543.current_mInstructionList (HERE), kEnumeration_up) ;
        bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1805)).isValidAndTrue () ;
        if (enumerator_63610.hasCurrentObject () && bool_6) {
          while (enumerator_63610.hasCurrentObject () && bool_6) {
            callCategoryMethod_instructionUsesGOTOorCALL ((const cPtr_midrange_5F_instruction *) enumerator_63610.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1806)) ;
            enumerator_63610.gotoNextObject () ;
            if (enumerator_63610.hasCurrentObject ()) {
              bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1805)).isValidAndTrue () ;
            }
          }
        }
        enumerator_63543.gotoNextObject () ;
        if (enumerator_63543.hasCurrentObject ()) {
          bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1804)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_7 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1810)) ;
    }else if (kBoolFalse == test_7) {
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1812)) ;
    }
  }
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1815)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'handleInterruptRoutine'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleInterruptRoutine (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                     const GALGAS_bool constinArgument_inHasInterrupt,
                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                     const GALGAS_string constinArgument_inSharedRAMBankName,
                                     const GALGAS_routineMap constinArgument_inRoutineMap,
                                     const GALGAS_uint constinArgument_inTotalBankCount,
                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                     const GALGAS_uint constinArgument_inTotalPageCount,
                                     GALGAS_string & ioArgument_ioGenerationOptimizationMessages,
                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                     GALGAS_string & ioArgument_ioListFileContents,
                                     GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  outArgument_outGeneratedInstructionList = GALGAS_midrange_5F_intermediate_5F_instructionList::constructor_emptyList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1839)) ;
  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1842)), GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1843))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1843)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1844)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1845))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1841))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1841)) ;
  const enumGalgasBool test_0 = constinArgument_inHasInterrupt.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1848)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1848))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1848)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("INTERRUPT ROUTINE").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1849)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1849)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1849))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1849)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)) ;
    GALGAS_bool var_shouldSavePCLATH ;
    {
    routine_interruptRoutineShouldSavePCLATH (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)) ;
    }
    outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (GALGAS_uint ((uint32_t) 4U)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1859))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1859)) ;
    cEnumerator_midrange_5F_interruptDefinitionList enumerator_66015 (constinArgument_inPiccoloModel.reader_mInterruptDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1860)), kEnumeration_up) ;
    while (enumerator_66015.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSharedRAMBankName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_generateInterruptRoutineForControllerWithSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66015.current_mFirstSaveRegister (HERE), enumerator_66015.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH, enumerator_66015.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66015.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1862)) ;
        }
      }else if (kBoolFalse == test_1) {
        {
        routine_generateInterruptRoutineForControllerWithoutSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66015.current_mFirstSaveRegister (HERE), enumerator_66015.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH, enumerator_66015.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66015.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1878)) ;
        }
      }
      enumerator_66015.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Routine 'generateInterruptRoutineForControllerWithSharedRAM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateInterruptRoutineForControllerWithSharedRAM (const GALGAS_uint constinArgument_inTotalBankCount,
                                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                 const GALGAS_lstring constinArgument_inFirstSaveRegister,
                                                                 const GALGAS_lstring constinArgument_inSecondSaveRegister,
                                                                 const GALGAS_bool constinArgument_inNeedsToSavePCLATH,
                                                                 const GALGAS_midrange_5F_instructionList constinArgument_inInterruptRoutineInstructionList,
                                                                 const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                                 const GALGAS_location constinArgument_inEndOfInterruptLocation,
                                                                 GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                 GALGAS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_registerAddressList ;
  GALGAS_uint var_size ;
  GALGAS_bitSliceTable joker_67909 ; // Joker input parameter
  GALGAS_string joker_67912 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList, var_size, joker_67909, joker_67912, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1915)) ;
  GALGAS_uint var_bankAccessibility = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_67977 (var_registerAddressList, kEnumeration_up) ;
  while (enumerator_67977.hasCurrentObject ()) {
    var_bankAccessibility = var_bankAccessibility.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_67977.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1918)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1918)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1918)) ;
    enumerator_67977.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_bankAccessibility.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920)).objectCompare (GALGAS_uint ((uint32_t) 1U).left_shift_operation (constinArgument_inTotalBankCount COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inFirstSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)).add_operation (GALGAS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (constinArgument_inFirstSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (var_size.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)) ;
  }
  GALGAS_bitSliceTable joker_68564 ; // Joker input parameter
  GALGAS_string joker_68567 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList, var_size, joker_68564, joker_68567, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)) ;
  var_bankAccessibility = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_68626 (var_registerAddressList, kEnumeration_up) ;
  while (enumerator_68626.hasCurrentObject ()) {
    var_bankAccessibility = var_bankAccessibility.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_68626.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1930)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1930)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1930)) ;
    enumerator_68626.gotoNextObject () ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_bankAccessibility.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1932)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (constinArgument_inSecondSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)) ;
  }
  const enumGalgasBool test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1935)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (constinArgument_inSecondSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).add_operation (var_size.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)) ;
  }else if (kBoolFalse == test_6) {
    const enumGalgasBool test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)).operator_and (GALGAS_bool (kIsNotEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_location location_9 (constinArgument_inSecondSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_9, GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)).add_operation (var_size.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)) ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1941)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_registerExpression var_first_5F_register = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1944))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1944))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1944)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1945))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription ;
    GALGAS_bitSliceTable joker_69665 ; // Joker input parameter
    callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription, joker_69665, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948)) ;
    GALGAS_registerExpression var_second_5F_register = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1959))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1959))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1959)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1960))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1957)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription ;
    GALGAS_bitSliceTable joker_70117 ; // Joker input parameter
    callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_second_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription, joker_70117, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)) ;
    GALGAS_registerExpression var_STATUS_5F_register = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1974))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1974)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1975))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1975))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1975)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1976))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1973)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription ;
    GALGAS_bitSliceTable joker_70597 ; // Joker input parameter
    callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1981)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription, joker_70597, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1979)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1988)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1988)), var_first_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1988))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1988)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)), var_STATUS_5F_IPICregisterDescription, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1990)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1990)), var_STATUS_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1990))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1990)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1991)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1991)), var_second_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1991))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1991)) ;
    const enumGalgasBool test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_registerExpression var_reg = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1993)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description ;
      GALGAS_bitSliceTable joker_71829 ; // Joker input parameter
      callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_reg.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description, joker_71829, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999)) ;
      GALGAS_registerExpression var_PCLATH_5F_register = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2010))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2010)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2011))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2011))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2011)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2012))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2009)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription ;
      GALGAS_bitSliceTable joker_72352 ; // Joker input parameter
      callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2017)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription, joker_72352, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2015)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024)), var_PCLATH_5F_IPICregisterDescription, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026)), var_PCLATH_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026)) ;
    }
    GALGAS_bool var_continuesInSequence ;
    GALGAS_uint var_currentBank = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank, GALGAS_bool (false), var_continuesInSequence, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2043)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2031)) ;
    }
    const enumGalgasBool test_12 = var_continuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2046)).boolEnum () ;
    if (kBoolTrue == test_12) {
      inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2047)) ;
    }
    const enumGalgasBool test_13 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_registerExpression var_reg = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2052))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2052))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2052)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2053))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description ;
      GALGAS_bitSliceTable joker_73999 ; // Joker input parameter
      callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_reg.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description, joker_73999, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)) ;
      GALGAS_registerExpression var_PCLATH_5F_register = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2066))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2066)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2067))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2067))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2067)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2068))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2065)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription ;
      GALGAS_bitSliceTable joker_74521 ; // Joker input parameter
      callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2073)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription, joker_74521, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2071)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2080)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2080)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2080))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2080)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081)), var_PCLATH_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)), var_second_5F_IPICregisterDescription, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)), var_STATUS_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)), var_first_5F_IPICregisterDescription, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087)), var_first_5F_IPICregisterDescription, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2089)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Routine 'generateInterruptRoutineForControllerWithoutSharedRAM'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateInterruptRoutineForControllerWithoutSharedRAM (const GALGAS_uint constinArgument_inTotalBankCount,
                                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                    const GALGAS_lstring constinArgument_inFirstSaveRegister,
                                                                    const GALGAS_lstring constinArgument_inSecondSaveRegister,
                                                                    const GALGAS_bool constinArgument_inNeedsToSavePCLATH,
                                                                    const GALGAS_midrange_5F_instructionList constinArgument_inInterruptRoutineInstructionList,
                                                                    const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                                    const GALGAS_location constinArgument_inEndOfInterruptLocation,
                                                                    GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                    GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                    GALGAS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inFirstSaveRegister.mAttribute_string  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2110)) ;
  GALGAS_uintlist var_registerAddressList ;
  GALGAS_uint var_size ;
  GALGAS_bitSliceTable joker_76697 ; // Joker input parameter
  GALGAS_string joker_76700 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList, var_size, joker_76697, joker_76700, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2111)) ;
  GALGAS_bool var_accessibleFromBank_30_ = GALGAS_bool (false) ;
  GALGAS_uint var_offset = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_76802 (var_registerAddressList, kEnumeration_up) ;
  bool bool_0 = var_accessibleFromBank_30_.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2114)).isValidAndTrue () ;
  if (enumerator_76802.hasCurrentObject () && bool_0) {
    while (enumerator_76802.hasCurrentObject () && bool_0) {
      var_offset = enumerator_76802.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2115)) ;
      var_accessibleFromBank_30_ = GALGAS_bool (kIsEqual, enumerator_76802.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2116)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_76802.gotoNextObject () ;
      if (enumerator_76802.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30_.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2114)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_accessibleFromBank_30_.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2118)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (constinArgument_inFirstSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)) ;
  }
  const enumGalgasBool test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 3U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (constinArgument_inFirstSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (var_size.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (GALGAS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).operator_and (GALGAS_bool (kIsNotEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (constinArgument_inFirstSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).add_operation (var_size.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)) ;
    }
  }
  GALGAS_uintlist var_saveStatusRegisterAddressList = var_registerAddressList ;
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inSecondSaveRegister.mAttribute_string  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)) ;
  GALGAS_bitSliceTable joker_77711 ; // Joker input parameter
  GALGAS_string joker_77714 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList, var_size, joker_77711, joker_77714, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)) ;
  var_saveStatusRegisterAddressList = var_saveStatusRegisterAddressList.add_operation (var_registerAddressList, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)) ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_location location_8 (constinArgument_inSecondSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)).add_operation (var_size.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)) ;
  }
  GALGAS_bool var_accessibleFromBank_31_ = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_78072 (var_registerAddressList, kEnumeration_up) ;
  bool bool_9 = var_accessibleFromBank_31_.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2136)).isValidAndTrue () ;
  if (enumerator_78072.hasCurrentObject () && bool_9) {
    while (enumerator_78072.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31_ = GALGAS_bool (kIsEqual, enumerator_78072.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2137)).objectCompare (GALGAS_uint ((uint32_t) 128U))) ;
      enumerator_78072.gotoNextObject () ;
      if (enumerator_78072.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31_.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2136)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_10 = var_accessibleFromBank_31_.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (constinArgument_inSecondSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)) ;
  }
  GALGAS_bool var_offsetOk = GALGAS_bool (true) ;
  cEnumerator_uintlist enumerator_78463 (var_registerAddressList, kEnumeration_up) ;
  bool bool_12 = var_offsetOk.isValidAndTrue () ;
  if (enumerator_78463.hasCurrentObject () && bool_12) {
    while (enumerator_78463.hasCurrentObject () && bool_12) {
      var_offsetOk = GALGAS_bool (kIsEqual, var_offset.objectCompare (enumerator_78463.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2145)))) ;
      const enumGalgasBool test_13 = var_offsetOk.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2146)).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_location location_14 (constinArgument_inSecondSaveRegister.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_14, GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (GALGAS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (enumerator_78463.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).reader_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (GALGAS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (constinArgument_inFirstSaveRegister.reader_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (GALGAS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (var_offset.reader_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2149)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (GALGAS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2149))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)) ;
      }
      enumerator_78463.gotoNextObject () ;
      if (enumerator_78463.hasCurrentObject ()) {
        bool_12 = var_offsetOk.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2153)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_registerExpression var_first_5F_register = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2157))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription ;
    GALGAS_bitSliceTable joker_79290 ; // Joker input parameter
    callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription, joker_79290, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2160)) ;
    GALGAS_registerExpression var_first_5F_register_5F_second_5F_byte = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2169)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription ;
    GALGAS_bitSliceTable joker_79772 ; // Joker input parameter
    callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription, joker_79772, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2175)) ;
    GALGAS_registerExpression var_STATUS_5F_register = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2186))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2186)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2187))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2187))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2187)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2188))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2185)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription ;
    GALGAS_bitSliceTable joker_80271 ; // Joker input parameter
    callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription, joker_80271, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2191)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2200)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2200)), var_first_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2200))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2200)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2201)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2201)), var_STATUS_5F_IPICregisterDescription, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2201))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2201)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2202)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2202)), var_STATUS_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2202))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2202)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2203)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2203)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2203))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2203)) ;
    const enumGalgasBool test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription ;
      GALGAS_bitSliceTable joker_81508 ; // Joker input parameter
      callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription, joker_81508, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2211)) ;
      GALGAS_registerExpression var_PCLATH_5F_register = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2222))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2222)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2223))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2223))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2223)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2224))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2221)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription ;
      GALGAS_bitSliceTable joker_82037 ; // Joker input parameter
      callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2229)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription, joker_82037, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2227)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236)), var_PCLATH_5F_IPICregisterDescription, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2237)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2237)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2237))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2237)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2238)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2238)), var_PCLATH_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2238))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2238)) ;
    }
    GALGAS_bool var_continuesInSequence ;
    GALGAS_uint var_currentBank = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank, GALGAS_bool (true), var_continuesInSequence, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2255)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2243)) ;
    }
    const enumGalgasBool test_17 = var_continuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2258)).boolEnum () ;
    if (kBoolTrue == test_17) {
      inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)) ;
    }
    const enumGalgasBool test_18 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_18) {
      GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 2U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2262)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription ;
      GALGAS_bitSliceTable joker_83730 ; // Joker input parameter
      callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription, joker_83730, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2267)) ;
      GALGAS_registerExpression var_PCLATH_5F_register = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2278))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2278)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2279))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2279))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2279)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2280))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2277)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription ;
      GALGAS_bitSliceTable joker_84260 ; // Joker input parameter
      callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2285)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription, joker_84260, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2283)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2292)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2292)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2292))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2292)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2293)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2293)), var_PCLATH_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2293))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2293)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2296)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2296)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2296))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2296)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2297)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2297)), var_STATUS_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2297))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2297)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2298)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2298)), var_first_5F_IPICregisterDescription, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2298))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2298)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)), var_first_5F_IPICregisterDescription, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2301))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2301))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2301)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'findMidRangeFirstInstructionFromAddress'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findMidRangeFirstInstructionFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                      const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                      GALGAS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GALGAS_uint var_currentAddress = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 167)) ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_optimizations.galgas", 169)).isValid ()) {
    uint32_t variant_6972 = constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_optimizations.galgas", 169)).uintValue () ;
    bool loop_6972 = true ;
    while (loop_6972) {
      loop_6972 = GALGAS_bool (kIsStrictInf, var_currentAddress.objectCompare (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).isValid () ;
      if (loop_6972) {
        loop_6972 = GALGAS_bool (kIsStrictInf, var_currentAddress.objectCompare (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).boolValue () ;
      }
      if (loop_6972 && (0 == variant_6972)) {
        loop_6972 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 169)) ;
      }
      if (loop_6972) {
        variant_6972 -- ;
        if (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_actualInstruction cast_7223_instr ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ()) ;
            outArgument_outFirstInstruction = cast_7223_instr ;
            var_found = GALGAS_bool (true) ;
          }else{
            var_currentAddress.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 177)) ;
          }
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Routine 'findMidRangeFirstInstructionOrLabelFromAddress'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findMidRangeFirstInstructionOrLabelFromAddress (const GALGAS_uint constinArgument_inLineIndex,
                                                             const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                             GALGAS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                             GALGAS_stringset & outArgument_outReachedLabelSet,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 189)) ;
  GALGAS_uint var_currentAddress = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 193)) ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_optimizations.galgas", 195)).isValid ()) {
    uint32_t variant_7902 = constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_optimizations.galgas", 195)).uintValue () ;
    bool loop_7902 = true ;
    while (loop_7902) {
      loop_7902 = GALGAS_bool (kIsStrictInf, var_currentAddress.objectCompare (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)))).operator_and (var_found.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 196)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 196)).isValid () ;
      if (loop_7902) {
        loop_7902 = GALGAS_bool (kIsStrictInf, var_currentAddress.objectCompare (constinArgument_inGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)))).operator_and (var_found.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 196)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 196)).boolValue () ;
      }
      if (loop_7902 && (0 == variant_7902)) {
        loop_7902 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 195)) ;
      }
      if (loop_7902) {
        variant_7902 -- ;
        if (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_actualInstruction cast_8153_instr ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8153_instr ;
            var_found = GALGAS_bool (true) ;
          }else if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG cast_8260_instr ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8260_instr ;
            var_found = GALGAS_bool (true) ;
          }else if (constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL cast_8369_instr ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) constinArgument_inGeneratedInstructionList.reader_mInstructionAtIndex (var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8369_instr ;
            outArgument_outReachedLabelSet.addAssign_operation (cast_8369_instr.reader_mLabel (SOURCE_FILE ("midrange_optimizations.galgas", 207)).reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 207))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 207)) ;
            var_currentAddress.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 208)) ;
          }else{
            var_currentAddress.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 210)) ;
          }
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'perform_midrange_optimizations'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_perform_5F_midrange_5F_optimizations (GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 530)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 530))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 530)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)) ;
  GALGAS_symbolTableForOptimizations var_symbolTable = GALGAS_symbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("midrange_optimizations.galgas", 534)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_22438 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
  GALGAS_uint index_22404 ((uint32_t) 0) ;
  while (enumerator_22438.hasCurrentObject ()) {
    callCategoryMethod_defineLabel ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_22438.current_mInstruction (HERE).ptr (), var_symbolTable, index_22404, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 536)) ;
    enumerator_22438.gotoNextObject () ;
    index_22404.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 535)) ;
  }
  GALGAS_bool var_optimizationsDone = GALGAS_bool (true) ;
  GALGAS_uint var_iteration = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_optimizations.galgas", 541)).isValid ()) {
    uint32_t variant_22634 = ioArgument_ioGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_optimizations.galgas", 541)).uintValue () ;
    bool loop_22634 = true ;
    while (loop_22634) {
      loop_22634 = var_optimizationsDone.isValid () ;
      if (loop_22634) {
        loop_22634 = var_optimizationsDone.boolValue () ;
      }
      if (loop_22634 && (0 == variant_22634)) {
        loop_22634 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 541)) ;
      }
      if (loop_22634) {
        variant_22634 -- ;
        var_optimizationsDone = GALGAS_bool (false) ;
        var_iteration.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 545)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Pass ").add_operation (var_iteration.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_22880 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        GALGAS_uint index_22846 ((uint32_t) 0) ;
        while (enumerator_22880.hasCurrentObject ()) {
          if (enumerator_22880.current_mInstruction (HERE).isValid ()) {
            if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO) {
              GALGAS_midrange_5F_intermediate_5F_GOTO cast_22964_ipic_GOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeGOTO ((const cPtr_midrange_5F_intermediate_5F_GOTO *) cast_22964_ipic_GOTO.ptr (), var_symbolTable, index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 551)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
              GALGAS_midrange_5F_intermediate_5F_JUMP cast_23139_ipic_JUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeJUMP ((const cPtr_midrange_5F_intermediate_5F_JUMP *) cast_23139_ipic_JUMP.ptr (), var_symbolTable, index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 553)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation) {
              GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation cast_23507_ipic_literal ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeMOVLW ((const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) cast_23507_ipic_literal.ptr (), index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition) {
              GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition cast_23696_ipic_decInc ((cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeTestDecInc ((const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) cast_23696_ipic_decInc.ptr (), var_symbolTable, index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 559)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) {
              GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip cast_23905_ipic_bitTestSkip ((cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callCategoryMethod_optimizeBitTestSkip ((const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) cast_23905_ipic_bitTestSkip.ptr (), index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 561)) ;
            }
          }
          enumerator_22880.gotoNextObject () ;
          index_22846.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 548)) ;
        }
        GALGAS_stringset var_referencedLabels = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 566)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24184 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        while (enumerator_24184.hasCurrentObject ()) {
          callCategoryMethod_enterReferencedLabel ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24184.current_mInstruction (HERE).ptr (), var_referencedLabels, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)) ;
          enumerator_24184.gotoNextObject () ;
        }
        cEnumerator_symbolTableForOptimizations enumerator_24283 (var_symbolTable, kEnumeration_up) ;
        while (enumerator_24283.hasCurrentObject ()) {
          const enumGalgasBool test_0 = var_referencedLabels.reader_hasKey (enumerator_24283.current_lkey (HERE).reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 571)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 571)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 571)).boolEnum () ;
          if (kBoolTrue == test_0) {
            GALGAS_uint var_definitionLine ;
            GALGAS_bool joker_24410 ; // Joker input parameter
            var_symbolTable.method_searchKey (enumerator_24283.current_lkey (HERE), var_definitionLine, joker_24410, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 572)) ;
            ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (var_definitionLine.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)).add_operation (enumerator_24283.current_lkey (HERE).reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)) ;
            {
            ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 574)), var_definitionLine, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 574)) ;
            }
            {
            GALGAS_uint joker_24685 ; // Joker input parameter
            GALGAS_bool joker_24688 ; // Joker input parameter
            var_symbolTable.modifier_removeKey (enumerator_24283.current_lkey (HERE), joker_24685, joker_24688, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 575)) ;
            }
          }
          enumerator_24283.gotoNextObject () ;
        }
        GALGAS_bool var_reachable = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction = GALGAS_bool (false) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24893 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        GALGAS_uint index_24859 ((uint32_t) 0) ;
        while (enumerator_24893.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_reachable.operator_or (var_previousWasSkippingInstruction COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 583)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_reachable = callCategoryReader_nextInstructionIsReachable ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 584)) ;
            var_previousWasSkippingInstruction = var_skippingInstruction ;
            var_skippingInstruction = callCategoryReader_isSkippingInstruction ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 586)) ;
          }else if (kBoolFalse == test_1) {
            GALGAS_bool var_isLABELorORG = callCategoryReader_isLABELorORG ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 588)) ;
            const enumGalgasBool test_2 = var_isLABELorORG.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 589)).operator_and (callCategoryReader_isNULL ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 589)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 589)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 589)).boolEnum () ;
            if (kBoolTrue == test_2) {
              ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (index_24859.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)).add_operation (GALGAS_string (": unreachable instruction is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)) ;
              {
              ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 591)), index_24859, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 591)) ;
              }
            }else if (kBoolFalse == test_2) {
              const enumGalgasBool test_3 = var_isLABELorORG.boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachable = GALGAS_bool (true) ;
                var_previousWasSkippingInstruction = GALGAS_bool (false) ;
                var_skippingInstruction = GALGAS_bool (false) ;
              }
            }
          }
          enumerator_24893.gotoNextObject () ;
          index_24859.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 582)) ;
        }
        const enumGalgasBool test_4 = var_optimizationsDone.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 599)).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  No optimization\n"
            "\n")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 600)) ;
          GALGAS_uint var_currentAddress = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_25867 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
          while (enumerator_25867.hasCurrentObject ()) {
            callCategoryMethod_setCurrentAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_25867.current_mInstruction (HERE).ptr (), var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 604)) ;
            enumerator_25867.gotoNextObject () ;
          }
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 606)).add_operation (GALGAS_string (" instructions\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 606))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 606)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'midrange_compute_JSR_JUMP'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_midrange_5F_compute_5F_JSR_5F_JUMP (GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 318))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 318)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("COMPUTE JSR and JUMP").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)) ;
  GALGAS_bool var_JUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
  GALGAS_uint var_iteration = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 323)).isValid ()) {
    uint32_t variant_13108 = ioArgument_ioGeneratedInstructionList.reader_length (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 323)).uintValue () ;
    bool loop_13108 = true ;
    while (loop_13108) {
      loop_13108 = var_JUMP_5F_or_5F_JSR_5F_fixed.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).isValid () ;
      if (loop_13108) {
        loop_13108 = var_JUMP_5F_or_5F_JSR_5F_fixed.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).boolValue () ;
      }
      if (loop_13108 && (0 == variant_13108)) {
        loop_13108 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 323)) ;
      }
      if (loop_13108) {
        variant_13108 -- ;
        var_JUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (false) ;
        var_iteration.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 327)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Pass ").add_operation (var_iteration.reader_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)) ;
        GALGAS_midrange_5F_symbolTableForConvertingRelatives var_symbolTable = GALGAS_midrange_5F_symbolTableForConvertingRelatives::constructor_emptyMap (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 330)) ;
        GALGAS_uint var_currentAddress = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13525 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        while (enumerator_13525.hasCurrentObject ()) {
          callCategoryMethod_defineLabelAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13525.current_mInstruction (HERE).ptr (), var_symbolTable, var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 333)) ;
          enumerator_13525.gotoNextObject () ;
        }
        GALGAS_uint var_lastAddressForFirstPass = var_currentAddress ;
        var_currentAddress = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13788 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        GALGAS_uint index_13754 ((uint32_t) 0) ;
        while (enumerator_13788.hasCurrentObject ()) {
          callCategoryMethod_compute ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13788.current_mInstruction (HERE).ptr (), var_symbolTable, var_currentAddress, var_JUMP_5F_or_5F_JSR_5F_fixed, ioArgument_ioGeneratedInstructionList, index_13754, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 339)) ;
          var_currentAddress = var_currentAddress.add_operation (callCategoryReader_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13788.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)) ;
          enumerator_13788.gotoNextObject () ;
          index_13754.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 338)) ;
        }
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass.objectCompare (var_currentAddress)).boolEnum () ;
        if (kBoolTrue == test_0) {
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress.reader_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)).add_operation (GALGAS_string (" value when checking relative branches, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)).add_operation (var_lastAddressForFirstPass.reader_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 344)).add_operation (GALGAS_string (" value when computing routine map"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)) ;
        }
        const enumGalgasBool test_1 = var_JUMP_5F_or_5F_JSR_5F_fixed.operator_not (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 347)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  No JUMP, no JSR to fix\n"
            "\n")  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 348)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Program size: ").add_operation (var_currentAddress.reader_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)).add_operation (GALGAS_string (" instructions\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'midrange_build_assembly_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_midrange_5F_build_5F_assembly_5F_code (const GALGAS_string constinArgument_inProcessorName,
                                                    const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                    const GALGAS_registerTable constinArgument_inAllRegisters,
                                                    const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inInstructionList,
                                                    const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                    GALGAS_string & outArgument_outAssemblyCode,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAssemblyCode.drop () ; // Release 'out' argument
  outArgument_outAssemblyCode = GALGAS_string ("  errorlevel -302 ; No Warning on registers not in bank 0\n") ;
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string ("  errorlevel -306 ; No Warning on crossing page boundary\n"
    "\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 304)) ;
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)) ;
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string (";--- Code\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 307)) ;
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string ("  ORG 0\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 308)) ;
  GALGAS_uint var_bccLabelIndex = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9030 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_9030.hasCurrentObject ()) {
    callCategoryMethod_buildAssemblyCode ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9030.current_mInstruction (HERE).ptr (), outArgument_outAssemblyCode, var_bccLabelIndex, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 311)) ;
    enumerator_9030.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 313)) ;
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string (";--- Prefefined registers\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 315)) ;
  cEnumerator_registerTable enumerator_9246 (constinArgument_inPredefinedRegisters, kEnumeration_up) ;
  while (enumerator_9246.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister ;
    enumerator_9246.current_mRegisterAddressList (HERE).method_first (var_firstRegister, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 317)) ;
    outArgument_outAssemblyCode.dotAssign_operation (enumerator_9246.current_lkey (HERE).reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (var_firstRegister.reader_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)) ;
    enumerator_9246.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 320)) ;
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string (";--- User defined registers (in RAM)\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 322)) ;
  cEnumerator_registerTable enumerator_9556 (constinArgument_inAllRegisters, kEnumeration_up) ;
  while (enumerator_9556.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inPredefinedRegisters.reader_hasKey (enumerator_9556.current_lkey (HERE).reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).operator_not (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_firstRegister ;
      enumerator_9556.current_mRegisterAddressList (HERE).method_first (var_firstRegister, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 325)) ;
      outArgument_outAssemblyCode.dotAssign_operation (enumerator_9556.current_lkey (HERE).reader_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (var_firstRegister.reader_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)) ;
    }
    enumerator_9556.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 329)) ;
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string (";--- Piccolo defined symbol\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 331)) ;
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string ("W EQU 1\n"
    "\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 332)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inActualConfigurationMap.reader_count (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 334)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string (";--- Configuration\n"
      "\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 335)) ;
    cEnumerator_actualConfigurationMap enumerator_10119 (constinArgument_inActualConfigurationMap, kEnumeration_up) ;
    while (enumerator_10119.hasCurrentObject ()) {
      outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string ("  __config ").add_operation (enumerator_10119.current_mRegisterAddress (HERE).reader_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (enumerator_10119.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).reader_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337))  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)) ;
      enumerator_10119.gotoNextObject () ;
    }
  }
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string (";---\n"
    "\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 341)) ;
  outArgument_outAssemblyCode.dotAssign_operation (GALGAS_string ("  END\n"
    "\n")  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 342)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emitMidrangeCodeAtWordAddress'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitMidrangeCodeAtWordAddress (const GALGAS_uint constinArgument_inCode,
                                            GALGAS_uint & ioArgument_ioWordAddress,
                                            const GALGAS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("   ").add_operation (categoryReader_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)) ;
  callCategoryMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 15)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'emitMidrangeDirectCodeAtWordAddress'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitMidrangeDirectCodeAtWordAddress (const GALGAS_uint constinArgument_inCode,
                                                  GALGAS_uint & ioArgument_ioWordAddress,
                                                  const GALGAS_string constinArgument_inInstructionDescriptionString,
                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("   ").add_operation (categoryReader_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" ").add_operation (constinArgument_inInstructionDescriptionString, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 28)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 29)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'emitNoMidrangeCodeAtWordAddress'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitNoMidrangeCodeAtWordAddress (const GALGAS_uint constinArgument_inWordAddress,
                                              const GALGAS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                              GALGAS_string & ioArgument_ioListFileContents,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("   ").add_operation (categoryReader_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("      ")  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 39)) ;
  callCategoryMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 40)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 41)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'emit_midrange_GOTOinstruction_nocheck'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck (const GALGAS_string constinArgument_inTargetLabel,
                                                             const GALGAS_uint constinArgument_inTargetAddress,
                                                             GALGAS_uint & ioArgument_ioAddress,
                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code = GALGAS_uint ((uint32_t) 10240U).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint ((uint32_t) 2047U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code, ioArgument_ioAddress, GALGAS_string ("GOTO ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emit_midrange_GOTOinstruction'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emit_5F_midrange_5F_GOTOinstruction (const GALGAS_location constinArgument_inIntructionLocation,
                                                  GALGAS_uint & ioArgument_ioAddress,
                                                  const GALGAS_string constinArgument_inTargetLabel,
                                                  const GALGAS_uint constinArgument_inTargetAddress,
                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).operator_and (GALGAS_uint ((uint32_t) 63488U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GALGAS_string ("GOTO (from ").add_operation (ioArgument_ioAddress.reader_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (constinArgument_inTargetAddress.reader_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GALGAS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)) ;
  }
  {
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 261)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'emit_midrange_CALLinstruction_nocheck'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck (const GALGAS_string constinArgument_inTargetLabel,
                                                             const GALGAS_uint constinArgument_inTargetAddress,
                                                             GALGAS_uint & ioArgument_ioAddress,
                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code = GALGAS_uint ((uint32_t) 8192U).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint ((uint32_t) 2047U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code, ioArgument_ioAddress, GALGAS_string ("CALL ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emit_midrange_CALLinstruction'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emit_5F_midrange_5F_CALLinstruction (const GALGAS_location constinArgument_inIntructionLocation,
                                                  GALGAS_uint & ioArgument_ioAddress,
                                                  const GALGAS_string constinArgument_inTargetLabel,
                                                  const GALGAS_uint constinArgument_inTargetAddress,
                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).operator_and (GALGAS_uint ((uint32_t) 63488U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GALGAS_string ("CALL (from ").add_operation (ioArgument_ioAddress.reader_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (constinArgument_inTargetAddress.reader_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GALGAS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)) ;
  }
  {
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 286)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'build_midrange_ipic_binary_code'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_midrange_5F_ipic_5F_binary_5F_code (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                          const GALGAS_uint constinArgument_inTotalBankCount,
                                                          const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                          const GALGAS_uint constinArgument_inROMsize,
                                                          const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                          GALGAS_uint & outArgument_outUsedROMsize,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GALGAS_midrange_5F_symbolTable var_symbolTable = GALGAS_midrange_5F_symbolTable::constructor_emptyMap (SOURCE_FILE ("midrange_build_binary_code.galgas", 678)) ;
  GALGAS_uint var_currentAddress = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24037 (constinArgument_inGeneratedInstructionList, kEnumeration_up) ;
  while (enumerator_24037.hasCurrentObject ()) {
    callCategoryMethod_enterLabelAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24037.current_mInstruction (HERE).ptr (), var_symbolTable, var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)) ;
    enumerator_24037.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass = var_currentAddress ;
  outArgument_outUsedROMsize = var_currentAddress ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 686)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 686))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 686)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 688)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 688))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 688)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Address Code Mnemonic\n")  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 689)) ;
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 690)) ;
  }
  var_currentAddress = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_setEmitAddress (GALGAS_uint ((uint32_t) 0U), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 692)) ;
  }
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24664 (constinArgument_inGeneratedInstructionList, kEnumeration_up) ;
  while (enumerator_24664.hasCurrentObject ()) {
    callCategoryMethod_generateBinaryCodeAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24664.current_mInstruction (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, constinArgument_inTotalBankCount, var_symbolTable, ioArgument_ioListFileContents, var_currentAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 694)) ;
    {
    routine_checkCurrentEmitAddress (var_currentAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)) ;
    }
    enumerator_24664.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass.objectCompare (var_currentAddress)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress.reader_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)).add_operation (var_lastAddressForFirstPass.reader_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 707)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 708))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass.objectCompare (constinArgument_inROMsize)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass.reader_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)).add_operation (constinArgument_inROMsize.reader_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 711)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 712))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)) ;
    }
  }
  cEnumerator_actualConfigurationMap enumerator_25557 (constinArgument_inActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_25557.hasCurrentObject ()) {
    {
    routine_setEmitAddress (enumerator_25557.current_mRegisterAddress (HERE).add_operation (enumerator_25557.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 716)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 716)) ;
    }
    {
    routine_emitCode (enumerator_25557.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 717)) ;
    }
    enumerator_25557.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'midrange_analyze'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_midrange_5F_analyze (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                  const GALGAS_string constinArgument_inSourceFileName,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName = constinArgument_inSourceFileName.reader_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 17)).reader_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 17)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName.objectCompare (constinArgument_inPiccoloModel.reader_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 18)).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 18)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inPiccoloModel.reader_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 19)).reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.reader_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 19)).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (var_sourceFileBaseName, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)) ;
  }
  GALGAS_string var_listFileContents = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
  {
  routine_parseDeviceDefinition (constinArgument_inPiccoloModel.reader_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 25)), var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 25)) ;
  }
  switch (var_piccoloDeviceModel.reader_mProcessorType (SOURCE_FILE ("midrange_semantics.galgas", 26)).enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      GALGAS_location location_2 (constinArgument_inPiccoloModel.reader_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 28)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a pic18 device is not accepted here : only a mid-range device")  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 28)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      GALGAS_location location_3 (constinArgument_inPiccoloModel.reader_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 29)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("a baseline device is not accepted here : only a mid-range device")  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 29)) ;
    }
    break ;
  }
  GALGAS_bool var_hasInterrupt = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_1753 (constinArgument_inPiccoloModel.reader_mInterruptDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 33)), kEnumeration_up) ;
  while (enumerator_1753.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_hasInterrupt.boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticError (enumerator_1753.current_mInterruptLocation (HERE), GALGAS_string ("only one interrupt routine can be defined")  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 35)) ;
    }
    var_hasInterrupt = GALGAS_bool (true) ;
    enumerator_1753.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap ;
  {
  routine_buildConfig (var_piccoloDeviceModel.reader_mConfigRegisterMap (SOURCE_FILE ("midrange_semantics.galgas", 42)), constinArgument_inPiccoloModel.reader_mConfigDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 43)), var_listFileContents, var_actualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 41)) ;
  }
  GALGAS_ramBankTable var_ramBank = var_piccoloDeviceModel.reader_mRamBankTable (SOURCE_FILE ("midrange_semantics.galgas", 48)) ;
  GALGAS_registerTable var_registerTable = var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("midrange_semantics.galgas", 49)) ;
  GALGAS_declaredByteMap var_declaredByteMap ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.reader_mRamDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 52)), var_ramBank, var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("midrange_semantics.galgas", 54)), var_listFileContents, var_registerTable, var_declaredByteMap, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 50)) ;
  }
  GALGAS_stringset var_usedRegisters = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 60)) ;
  GALGAS_midrange_5F_intermediate_5F_instructionList var_generatedInstructionList ;
  {
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("midrange_semantics.galgas", 62)).reader_uint (SOURCE_FILE ("midrange_semantics.galgas", 62)).add_operation (GALGAS_uint ((uint32_t) 2047U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 62)).divide_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 62)), var_piccoloDeviceModel.reader_mBankCount (SOURCE_FILE ("midrange_semantics.galgas", 63)).reader_uint (SOURCE_FILE ("midrange_semantics.galgas", 63)), var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("midrange_semantics.galgas", 64)).reader_uint (SOURCE_FILE ("midrange_semantics.galgas", 64)).reader_sint (inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 64)), var_piccoloDeviceModel.mAttribute_mSharedBankName, var_registerTable, constinArgument_inPiccoloModel, var_hasInterrupt, var_generatedInstructionList, var_listFileContents, var_usedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 61)) ;
  }
  GALGAS_stringset var_usedRoutineSet = function_midrange_5F_computeUsedRoutines (constinArgument_inPiccoloModel.mAttribute_mInterruptDefinitionList, constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 74)) ;
  GALGAS_midrange_5F_declaredRoutineMap var_declaredRoutineMap = GALGAS_midrange_5F_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 78)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_3430 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_3430.hasCurrentObject ()) {
    {
    var_declaredRoutineMap.modifier_insertKey (enumerator_3430.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 80)) ;
    }
    enumerator_3430.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 83)) ;
  cEnumerator_lstringlist enumerator_3652 (constinArgument_inPiccoloModel.mAttribute_mUnusedRoutineList, kEnumeration_up) ;
  while (enumerator_3652.hasCurrentObject ()) {
    const enumGalgasBool test_5 = var_declaredRoutineMap.reader_hasKey (enumerator_3652.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 85)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 85)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_3652.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("the '").add_operation (enumerator_3652.current_mValue (HERE).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 86)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 86))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 86)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_7 = var_unusedRoutineDeclarationUnicity.reader_hasKey (enumerator_3652.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (enumerator_3652.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_8, GALGAS_string ("the '").add_operation (enumerator_3652.current_mValue (HERE).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 88)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 88))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 88)) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_9 = var_usedRoutineSet.reader_hasKey (enumerator_3652.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 89)).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (enumerator_3652.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticWarning (location_10, GALGAS_string ("the '").add_operation (enumerator_3652.current_mValue (HERE).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 90)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 90))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 90)) ;
        }
      }
    }
    var_unusedRoutineDeclarationUnicity.addAssign_operation (enumerator_3652.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 92)) ;
    enumerator_3652.gotoNextObject () ;
  }
  cEnumerator_midrange_5F_declaredRoutineMap enumerator_4180 (var_declaredRoutineMap, kEnumeration_up) ;
  while (enumerator_4180.hasCurrentObject ()) {
    const enumGalgasBool test_11 = var_usedRoutineSet.reader_hasKey (enumerator_4180.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 95)).operator_and (var_unusedRoutineDeclarationUnicity.reader_hasKey (enumerator_4180.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 95)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_location location_12 (enumerator_4180.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_12, GALGAS_string ("the '").add_operation (enumerator_4180.current_lkey (HERE).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 96)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 96))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 96)) ;
    }
    enumerator_4180.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedByteDeclarationUnicity = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 100)) ;
  cEnumerator_lstringlist enumerator_4571 (constinArgument_inPiccoloModel.mAttribute_mUnusedRegisterList, kEnumeration_up) ;
  while (enumerator_4571.hasCurrentObject ()) {
    const enumGalgasBool test_13 = var_registerTable.reader_hasKey (enumerator_4571.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 102)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 102)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location location_14 (enumerator_4571.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the '").add_operation (enumerator_4571.current_mValue (HERE).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)) ;
    }else if (kBoolFalse == test_13) {
      const enumGalgasBool test_15 = var_unusedByteDeclarationUnicity.reader_hasKey (enumerator_4571.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 104)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_location location_16 (enumerator_4571.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_16, GALGAS_string ("the '").add_operation (enumerator_4571.current_mValue (HERE).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)) ;
      }else if (kBoolFalse == test_15) {
        const enumGalgasBool test_17 = var_usedRegisters.reader_hasKey (enumerator_4571.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 106)).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_location location_18 (enumerator_4571.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticWarning (location_18, GALGAS_string ("the '").add_operation (enumerator_4571.current_mValue (HERE).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)) ;
        }
      }
    }
    var_unusedByteDeclarationUnicity.addAssign_operation (enumerator_4571.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 109)) ;
    enumerator_4571.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_5075 (var_declaredByteMap, kEnumeration_up) ;
  while (enumerator_5075.hasCurrentObject ()) {
    const enumGalgasBool test_19 = var_usedRegisters.reader_hasKey (enumerator_5075.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_and (var_unusedByteDeclarationUnicity.reader_hasKey (enumerator_5075.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 112)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_location location_20 (enumerator_5075.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_20, GALGAS_string ("the '").add_operation (enumerator_5075.current_lkey (HERE).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113)) ;
    }
    enumerator_5075.gotoNextObject () ;
  }
  const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 117)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 117)).boolEnum () ;
  if (kBoolTrue == test_21) {
    {
    routine_perform_5F_midrange_5F_optimizations (var_generatedInstructionList, var_listFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)) ;
    }
  }
  const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 121)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_22) {
    {
    routine_midrange_5F_compute_5F_JSR_5F_JUMP (var_generatedInstructionList, var_listFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)) ;
    }
  }
  const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 126)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    GALGAS_uint var_usedROMsize ;
    {
    routine_build_5F_midrange_5F_ipic_5F_binary_5F_code (var_registerTable, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 131)), var_piccoloDeviceModel.reader_mBankCount (SOURCE_FILE ("midrange_semantics.galgas", 132)).reader_uint (SOURCE_FILE ("midrange_semantics.galgas", 132)), var_generatedInstructionList, var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("midrange_semantics.galgas", 134)).reader_uint (SOURCE_FILE ("midrange_semantics.galgas", 134)), var_actualConfigurationMap, var_listFileContents, var_usedROMsize, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 129)) ;
    }
    GALGAS_string var_contents ;
    {
    routine_getGeneratedContents (var_contents, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 140)) ;
    }
    GALGAS_string var_destinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 141)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 141)) ;
    GALGAS_bool joker_6345 ; // Joker input parameter
    var_contents.method_writeToFileWhenDifferentContents (var_destinationFile, joker_6345, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 142)) ;
    const enumGalgasBool test_24 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_24) {
      GALGAS_string var_baseName = constinArgument_inSourceFileName.reader_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 144)).reader_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 144)) ;
      {
      routine_get_5F_C_5F_ArrayImplementation (var_baseName, var_contents, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 145)) ;
      }
      var_destinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 146)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 146)) ;
      GALGAS_bool joker_6707 ; // Joker input parameter
      var_contents.method_writeToFileWhenDifferentContents (var_destinationFile, joker_6707, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 147)) ;
      {
      routine_get_5F_C_5F_ArrayHeader (var_baseName, var_contents, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 148)) ;
      }
      var_destinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 149)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 149)) ;
      GALGAS_bool joker_6905 ; // Joker input parameter
      var_contents.method_writeToFileWhenDifferentContents (var_destinationFile, joker_6905, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 150)) ;
    }
    const enumGalgasBool test_25 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_25) {
      GALGAS_string var_verboseMessage = GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("midrange_semantics.galgas", 154)).reader_uint (SOURCE_FILE ("midrange_semantics.galgas", 154)).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 154)).add_operation (GALGAS_string (" words;"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 154)) ;
      var_verboseMessage.dotAssign_operation (GALGAS_string (" used: ").add_operation (var_usedROMsize.reader_string (SOURCE_FILE ("midrange_semantics.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155)) ;
      var_verboseMessage.dotAssign_operation (var_usedROMsize.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)).divide_operation (var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("midrange_semantics.galgas", 156)).reader_uint (SOURCE_FILE ("midrange_semantics.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 156)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)) ;
      cEnumerator_ramBankTable enumerator_7297 (var_ramBank, kEnumeration_up) ;
      while (enumerator_7297.hasCurrentObject ()) {
        GALGAS_uint var_bankSize = enumerator_7297.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_7297.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 158)) ;
        GALGAS_uint var_usedSize = enumerator_7297.current_mFirstFreeAddress (HERE).substract_operation (enumerator_7297.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 159)) ;
        var_verboseMessage.dotAssign_operation (GALGAS_string ("  RAM bank '").add_operation (enumerator_7297.current_lkey (HERE).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160)).add_operation (GALGAS_string ("': "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160)) ;
        var_verboseMessage.dotAssign_operation (var_bankSize.reader_string (SOURCE_FILE ("midrange_semantics.galgas", 161)).add_operation (GALGAS_string (" bytes, used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 161))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 161)) ;
        var_verboseMessage.dotAssign_operation (var_usedSize.reader_string (SOURCE_FILE ("midrange_semantics.galgas", 162)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 162))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 162)) ;
        var_verboseMessage.dotAssign_operation (var_usedSize.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)).divide_operation (var_bankSize, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 163)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)) ;
        enumerator_7297.gotoNextObject () ;
      }
      inCompiler->printMessage (var_verboseMessage  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 165)) ;
    }
    const enumGalgasBool test_26 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_26) {
      GALGAS_string var_assemblyCode ;
      {
      routine_midrange_5F_build_5F_assembly_5F_code (var_piccoloDeviceModel.reader_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 171)).reader_string (SOURCE_FILE ("midrange_semantics.galgas", 171)), var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("midrange_semantics.galgas", 172)), var_registerTable, var_generatedInstructionList, var_actualConfigurationMap, var_assemblyCode, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)) ;
      }
      GALGAS_string var_asmDestinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 178)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 178)) ;
      GALGAS_bool joker_8280 ; // Joker input parameter
      var_assemblyCode.method_writeToFileWhenDifferentContents (var_asmDestinationFile, joker_8280, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 179)) ;
    }
  }else if (kBoolFalse == test_23) {
    GALGAS_string var_hexDestinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 182)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 182)) ;
    const enumGalgasBool test_27 = var_hexDestinationFile.reader_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 183)).boolEnum () ;
    if (kBoolTrue == test_27) {
      {
      GALGAS_string::class_method_deleteFile (var_hexDestinationFile, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 184)) ;
      }
    }
    GALGAS_string var_asmDestinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 186)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 186)) ;
    const enumGalgasBool test_28 = var_asmDestinationFile.reader_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 187)).boolEnum () ;
    if (kBoolTrue == test_28) {
      {
      GALGAS_string::class_method_deleteFile (var_asmDestinationFile, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 188)) ;
      }
    }
  }
  const enumGalgasBool test_29 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_29) {
    GALGAS_string var_listFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 193)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 193)) ;
    GALGAS_bool joker_8983 ; // Joker input parameter
    var_listFileContents.method_writeToFileWhenDifferentContents (var_listFile, joker_8983, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 194)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getComplementaryBcc'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getComplementaryBcc (const GALGAS_conditional_5F_branch constinArgument_inConditionalBranch,
                                  GALGAS_conditional_5F_branch & outArgument_outComplementary,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outComplementary.drop () ; // Release 'out' argument
  switch (constinArgument_inConditionalBranch.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      outArgument_outComplementary = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("pic18_mnemonics.galgas", 91)) ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      outArgument_outComplementary = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("pic18_mnemonics.galgas", 92)) ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      outArgument_outComplementary = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("pic18_mnemonics.galgas", 93)) ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      outArgument_outComplementary = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("pic18_mnemonics.galgas", 94)) ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      outArgument_outComplementary = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("pic18_mnemonics.galgas", 95)) ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      outArgument_outComplementary = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("pic18_mnemonics.galgas", 96)) ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      outArgument_outComplementary = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("pic18_mnemonics.galgas", 97)) ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      outArgument_outComplementary = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("pic18_mnemonics.galgas", 98)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'pic18_analyze'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38__5F_analyze (const GALGAS_pic_31__38_AST constinArgument_inPiccoloModel,
                                     const GALGAS_string constinArgument_inSourceFileName,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName = constinArgument_inSourceFileName.reader_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas", 14)).reader_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 14)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName.objectCompare (constinArgument_inPiccoloModel.reader_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 15)).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 15)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inPiccoloModel.reader_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 16)).reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.reader_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 16)).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (var_sourceFileBaseName, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)) ;
  }
  GALGAS_string var_listFileContents = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
  GALGAS_uint var_accessBankSplitOffset ;
  GALGAS_ramBankTable var_ramBank ;
  GALGAS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForBootloaderImplementation ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForBootloaderImplementation ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForUserProgramImplementation ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForUserProgramImplementation ;
  GALGAS_luint var_bootloaderReservedROMsize ;
  GALGAS_registerTable var_registerTable ;
  GALGAS_string var_piccoloDeviceName ;
  switch (constinArgument_inPiccoloModel.mAttribute_mProgramKind.enumValue ()) {
  case GALGAS_programKind::kNotBuilt:
    break ;
  case GALGAS_programKind::kEnum_regularProgram:
    {
      var_piccoloDeviceName = constinArgument_inPiccoloModel.mAttribute_mDeviceNameOrBootLoaderReference.mAttribute_string ;
      {
      routine_parseDeviceDefinition (constinArgument_inPiccoloModel.reader_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 35)), var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 35)) ;
      }
      switch (var_piccoloDeviceModel.reader_mProcessorType (SOURCE_FILE ("pic18_semantics.galgas", 36)).enumValue ()) {
      case GALGAS_processorType::kNotBuilt:
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
        {
          var_accessBankSplitOffset = GALGAS_uint ((uint32_t) 96U) ;
        }
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset = GALGAS_uint ((uint32_t) 128U) ;
        }
        break ;
      case GALGAS_processorType::kEnum_midrange:
        {
          GALGAS_location location_2 (constinArgument_inPiccoloModel.reader_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 39)).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("a midrange device is not accepted here")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 39)) ;
          var_accessBankSplitOffset.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_processorType::kEnum_baseline:
        {
          GALGAS_location location_3 (constinArgument_inPiccoloModel.reader_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 40)).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("a baseline device is not accepted here")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 40)) ;
          var_accessBankSplitOffset.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_ramBank = var_piccoloDeviceModel.reader_mRamBankTable (SOURCE_FILE ("pic18_semantics.galgas", 42)) ;
      var_bootloaderReservedRAMmap = GALGAS_bootloaderReservedRAMmap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 43)) ;
      var_registerTable = var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("pic18_semantics.galgas", 44)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 45)) ;
      var_userRoutineDeclarationListForBootloaderImplementation = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 46)) ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 47)) ;
      var_userRoutineDeclarationListForUserProgramImplementation = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 48)) ;
      var_bootloaderReservedROMsize = GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49)) ;
    }
    break ;
  case GALGAS_programKind::kEnum_bootloaderProgram:
    {
      var_bootloaderRoutineDeclarationListForUserProgramImplementation = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 51)) ;
      var_userRoutineDeclarationListForUserProgramImplementation = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 52)) ;
      var_piccoloDeviceModel.drop () ;
      var_piccoloDeviceName.drop () ;
      var_accessBankSplitOffset.drop () ;
      var_ramBank.drop () ;
      var_registerTable.drop () ;
      var_bootloaderReservedRAMmap.drop () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation.drop () ;
      var_userRoutineDeclarationListForBootloaderImplementation.drop () ;
      var_bootloaderReservedROMsize.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.reader_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 53)), var_piccoloDeviceModel, var_piccoloDeviceName, var_accessBankSplitOffset, var_ramBank, var_registerTable, var_bootloaderReservedRAMmap, var_bootloaderRoutineDeclarationListForBootloaderImplementation, var_userRoutineDeclarationListForBootloaderImplementation, var_bootloaderReservedROMsize  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 53)) ;
      cEnumerator_ramBankTable enumerator_3680 (var_ramBank, kEnumeration_up) ;
      while (enumerator_3680.hasCurrentObject ()) {
        {
        var_ramBank.modifier_setMFirstFreeAddressForKey (enumerator_3680.current_mFirstAddress (HERE), enumerator_3680.current_lkey (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 64)) ;
        }
        enumerator_3680.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_programKind::kEnum_userProgram:
    {
      var_piccoloDeviceModel.drop () ;
      var_piccoloDeviceName.drop () ;
      var_accessBankSplitOffset.drop () ;
      var_ramBank.drop () ;
      var_registerTable.drop () ;
      var_bootloaderReservedRAMmap.drop () ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation.drop () ;
      var_userRoutineDeclarationListForUserProgramImplementation.drop () ;
      var_bootloaderReservedROMsize.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.reader_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 67)), var_piccoloDeviceModel, var_piccoloDeviceName, var_accessBankSplitOffset, var_ramBank, var_registerTable, var_bootloaderReservedRAMmap, var_bootloaderRoutineDeclarationListForUserProgramImplementation, var_userRoutineDeclarationListForUserProgramImplementation, var_bootloaderReservedROMsize  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 67)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 77)) ;
      var_userRoutineDeclarationListForBootloaderImplementation = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 78)) ;
    }
    break ;
  }
  GALGAS_pic_31__38_MacroMap var_macroMap = GALGAS_pic_31__38_MacroMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 81)) ;
  cEnumerator_pic_31__38_MacroDefinitionList enumerator_4590 (constinArgument_inPiccoloModel.mAttribute_mMacroDefinitionList, kEnumeration_up) ;
  while (enumerator_4590.hasCurrentObject ()) {
    {
    var_macroMap.modifier_insertKey (enumerator_4590.current_mMacroName (HERE), enumerator_4590.current_mConstantNameList (HERE), enumerator_4590.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 83)) ;
    }
    enumerator_4590.gotoNextObject () ;
  }
  GALGAS_stringset var_usedRoutineSet = function_pic_31__38__5F_computeUsedRoutines (constinArgument_inPiccoloModel.mAttribute_mInterruptDefinitionList, constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, var_macroMap, var_bootloaderRoutineDeclarationListForBootloaderImplementation, var_userRoutineDeclarationListForUserProgramImplementation, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 86)) ;
  GALGAS_declaredRoutineMap var_declaredRoutineMap = GALGAS_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 93)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_5135 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_5135.hasCurrentObject ()) {
    {
    var_declaredRoutineMap.modifier_insertKey (enumerator_5135.current_mRoutineName (HERE), enumerator_5135.current_mRequiredBank (HERE), enumerator_5135.current_mReturnedBank (HERE), enumerator_5135.current_mPreservesBank (HERE), enumerator_5135.current_mIsNoReturn (HERE), enumerator_5135.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 95)) ;
    }
    enumerator_5135.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 105)) ;
  cEnumerator_lstringlist enumerator_5468 (constinArgument_inPiccoloModel.mAttribute_mUnusedRoutineList, kEnumeration_up) ;
  while (enumerator_5468.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_declaredRoutineMap.reader_hasKey (enumerator_5468.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 107)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 107)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_5468.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (enumerator_5468.current_mValue (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_6 = var_unusedDeclarationUnicity.reader_hasKey (enumerator_5468.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_5468.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_7, GALGAS_string ("the '").add_operation (enumerator_5468.current_mValue (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)) ;
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = var_usedRoutineSet.reader_hasKey (enumerator_5468.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 111)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_location location_9 (enumerator_5468.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticWarning (location_9, GALGAS_string ("the '").add_operation (enumerator_5468.current_mValue (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)) ;
        }
      }
    }
    var_unusedDeclarationUnicity.addAssign_operation (enumerator_5468.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)) ;
    enumerator_5468.gotoNextObject () ;
  }
  cEnumerator_declaredRoutineMap enumerator_5982 (var_declaredRoutineMap, kEnumeration_up) ;
  while (enumerator_5982.hasCurrentObject ()) {
    const enumGalgasBool test_10 = var_usedRoutineSet.reader_hasKey (enumerator_5982.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_and (var_unusedDeclarationUnicity.reader_hasKey (enumerator_5982.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 117)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_location location_11 (enumerator_5982.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_11, GALGAS_string ("the '").add_operation (enumerator_5982.current_lkey (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118)) ;
    }
    enumerator_5982.gotoNextObject () ;
  }
  GALGAS_stringset var_inlinedRoutineSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 122)) ;
  cEnumerator_lstringlist enumerator_6314 (constinArgument_inPiccoloModel.mAttribute_mInlinedRoutineList, kEnumeration_up) ;
  while (enumerator_6314.hasCurrentObject ()) {
    const enumGalgasBool test_12 = var_declaredRoutineMap.reader_hasKey (enumerator_6314.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 124)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 124)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_location location_13 (enumerator_6314.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_13, GALGAS_string ("the '").add_operation (enumerator_6314.current_mValue (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125)) ;
    }else if (kBoolFalse == test_12) {
      const enumGalgasBool test_14 = var_usedRoutineSet.reader_hasKey (enumerator_6314.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 126)).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_location location_15 (enumerator_6314.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_15, GALGAS_string ("useless declaration, the '").add_operation (enumerator_6314.current_mValue (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)) ;
      }else if (kBoolFalse == test_14) {
        var_inlinedRoutineSet.addAssign_operation (enumerator_6314.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)) ;
      }
    }
    enumerator_6314.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList = constinArgument_inPiccoloModel.mAttribute_mInterruptDefinitionList ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList = constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList ;
  {
  routine_pic_31__38_PerformRoutineInline (var_inlinedRoutineSet, var_declaredRoutineMap, var_interruptDefinitionList, var_routineDefinitionList, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 134)) ;
  }
  cEnumerator_checkpicList enumerator_7087 (constinArgument_inPiccoloModel.mAttribute_mCheckpicList, kEnumeration_up) ;
  while (enumerator_7087.hasCurrentObject ()) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7140 (enumerator_7087.current_mValueList (HERE), kEnumeration_up) ;
    bool bool_16 = var_found.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 143)).isValidAndTrue () ;
    if (enumerator_7140.hasCurrentObject () && bool_16) {
      while (enumerator_7140.hasCurrentObject () && bool_16) {
        var_found = GALGAS_bool (kIsEqual, enumerator_7140.current_mValue (HERE).mAttribute_string.objectCompare (var_piccoloDeviceName)) ;
        enumerator_7140.gotoNextObject () ;
        if (enumerator_7140.hasCurrentObject ()) {
          bool_16 = var_found.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 143)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_17 = var_found.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 146)).boolEnum () ;
    if (kBoolTrue == test_17) {
      inCompiler->emitSemanticError (enumerator_7087.current_mErrorLocation (HERE), GALGAS_string ("this code is not available for '").add_operation (var_piccoloDeviceName, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147)) ;
    }
    enumerator_7087.gotoNextObject () ;
  }
  GALGAS_bool var_hasHighInterrupt = GALGAS_bool (false) ;
  GALGAS_bool var_highInterruptIsFast = GALGAS_bool (false) ;
  GALGAS_bool var_hasLowInterrupt = GALGAS_bool (false) ;
  GALGAS_bool var_lowInterruptIsFast = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7561 (var_interruptDefinitionList, kEnumeration_up) ;
  while (enumerator_7561.hasCurrentObject ()) {
    const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.reader_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 156)).objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 156)))).boolEnum () ;
    if (kBoolTrue == test_18) {
      GALGAS_location location_19 (enumerator_7561.current_mInterruptName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_19, GALGAS_string ("interrupt routine is not allowed for a bootloader user program")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 157)) ;
    }
    const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, enumerator_7561.current_mInterruptName (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 159)).objectCompare (GALGAS_string ("high"))).boolEnum () ;
    if (kBoolTrue == test_20) {
      var_highInterruptIsFast = enumerator_7561.current_mFastReturn (HERE) ;
      const enumGalgasBool test_21 = var_hasHighInterrupt.boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_location location_22 (enumerator_7561.current_mInterruptName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_22, GALGAS_string ("Only one 'high' interrupt routine is allowed")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 162)) ;
      }
      var_hasHighInterrupt = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_20) {
      const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, enumerator_7561.current_mInterruptName (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 165)).objectCompare (GALGAS_string ("low"))).boolEnum () ;
      if (kBoolTrue == test_23) {
        var_lowInterruptIsFast = enumerator_7561.current_mFastReturn (HERE) ;
        const enumGalgasBool test_24 = var_hasLowInterrupt.boolEnum () ;
        if (kBoolTrue == test_24) {
          GALGAS_location location_25 (enumerator_7561.current_mInterruptName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_25, GALGAS_string ("Only one 'low' interrupt routine is allowed")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 168)) ;
        }
        var_hasLowInterrupt = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_23) {
        GALGAS_location location_26 (enumerator_7561.current_mInterruptName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_26, GALGAS_string ("An interrupt routine should be named 'low' or 'high'")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 172)) ;
      }
    }
    const enumGalgasBool test_27 = var_highInterruptIsFast.operator_and (var_lowInterruptIsFast COMMA_SOURCE_FILE ("pic18_semantics.galgas", 174)).boolEnum () ;
    if (kBoolTrue == test_27) {
      GALGAS_location location_28 (enumerator_7561.current_mInterruptName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_28, GALGAS_string ("either low interrupt or high interrupt can be \"fast\", not both")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 175)) ;
    }
    enumerator_7561.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap ;
  const enumGalgasBool test_29 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.reader_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 180)).objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 180)))).boolEnum () ;
  if (kBoolTrue == test_29) {
    cEnumerator_configDefinitionList enumerator_8687 (constinArgument_inPiccoloModel.reader_mConfigDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 181)), kEnumeration_up) ;
    while (enumerator_8687.hasCurrentObject ()) {
      inCompiler->emitSemanticError (enumerator_8687.current_mDefinitionLocation (HERE), GALGAS_string ("configuration is not allowed for a bootloader user program")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 182)) ;
      enumerator_8687.gotoNextObject () ;
    }
    var_actualConfigurationMap = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 184)) ;
  }else if (kBoolFalse == test_29) {
    {
    routine_buildConfig (var_piccoloDeviceModel.reader_mConfigRegisterMap (SOURCE_FILE ("pic18_semantics.galgas", 187)), constinArgument_inPiccoloModel.reader_mConfigDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 188)), var_listFileContents, var_actualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 186)) ;
    }
  }
  GALGAS_declaredByteMap var_declaredByteMap ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.reader_mRamDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 196)), var_ramBank, var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("pic18_semantics.galgas", 198)), var_listFileContents, var_registerTable, var_declaredByteMap, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 194)) ;
  }
  const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.reader_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 204)).objectCompare (GALGAS_programKind::constructor_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas", 204)))).boolEnum () ;
  if (kBoolTrue == test_30) {
    cEnumerator_ramBankTable enumerator_9542 (var_ramBank, kEnumeration_up) ;
    while (enumerator_9542.hasCurrentObject ()) {
      const enumGalgasBool test_31 = var_bootloaderReservedRAMmap.reader_hasKey (enumerator_9542.current_lkey (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 206)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)).boolEnum () ;
      if (kBoolTrue == test_31) {
        GALGAS_luint var_bootloaderReservedSize ;
        var_bootloaderReservedRAMmap.method_searchKey (enumerator_9542.current_lkey (HERE), var_bootloaderReservedSize, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 208)) ;
        const enumGalgasBool test_32 = GALGAS_bool (kIsStrictSup, enumerator_9542.current_mFirstFreeAddress (HERE).substract_operation (enumerator_9542.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 209)).objectCompare (var_bootloaderReservedSize.reader_uint (SOURCE_FILE ("pic18_semantics.galgas", 209)))).boolEnum () ;
        if (kBoolTrue == test_32) {
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)), GALGAS_string ("for '").add_operation (enumerator_9542.current_lkey (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)).add_operation (enumerator_9542.current_mFirstFreeAddress (HERE).substract_operation (enumerator_9542.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 211)).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 211)).add_operation (var_bootloaderReservedSize.reader_uint (SOURCE_FILE ("pic18_semantics.galgas", 213)).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 212)).add_operation (GALGAS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 213))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)) ;
        }
      }else if (kBoolFalse == test_31) {
        const enumGalgasBool test_33 = GALGAS_bool (kIsStrictSup, enumerator_9542.current_mFirstFreeAddress (HERE).objectCompare (enumerator_9542.current_mFirstAddress (HERE))).boolEnum () ;
        if (kBoolTrue == test_33) {
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)), GALGAS_string ("for '").add_operation (enumerator_9542.current_lkey (HERE).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (enumerator_9542.current_mFirstFreeAddress (HERE).substract_operation (enumerator_9542.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 218)).reader_string (SOURCE_FILE ("pic18_semantics.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 218))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)) ;
        }
      }
      enumerator_9542.gotoNextObject () ;
    }
  }
  GALGAS_uint var_RAMsize = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ramBankTable enumerator_10522 (var_ramBank, kEnumeration_up) ;
  while (enumerator_10522.hasCurrentObject ()) {
    const enumGalgasBool test_34 = GALGAS_bool (kIsStrictSup, enumerator_10522.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize)).boolEnum () ;
    if (kBoolTrue == test_34) {
      var_RAMsize = enumerator_10522.current_mLastAddressPlusOne (HERE) ;
    }
    enumerator_10522.gotoNextObject () ;
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (constinArgument_inSourceFileName, var_piccoloDeviceModel.mAttribute_mRomSize.mAttribute_uint.reader_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 233)), var_RAMsize.reader_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 234)), var_macroMap, var_bootloaderRoutineDeclarationListForBootloaderImplementation, var_userRoutineDeclarationListForBootloaderImplementation, var_bootloaderReservedROMsize, var_bootloaderRoutineDeclarationListForUserProgramImplementation, var_userRoutineDeclarationListForUserProgramImplementation, var_accessBankSplitOffset, var_registerTable, var_declaredByteMap, var_routineDefinitionList, constinArgument_inPiccoloModel.mAttribute_mProgramKind, constinArgument_inPiccoloModel.mAttribute_mConstantDefinitionList, constinArgument_inPiccoloModel.mAttribute_mDataList, var_interruptDefinitionList, constinArgument_inPiccoloModel.mAttribute_mUnusedRegisterList, var_ramBank, var_hasHighInterrupt, var_hasLowInterrupt, var_piccoloDeviceModel.mAttribute_mDeviceName.mAttribute_string, var_piccoloDeviceModel.mAttribute_mRegisterTable, var_actualConfigurationMap, constinArgument_inPiccoloModel.mAttribute_mEndOfProgram, var_listFileContents, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 231)) ;
  }
  const enumGalgasBool test_35 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_35) {
    var_listFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 261)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 261))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 261)) ;
    GALGAS_string var_listFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 262)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 262)) ;
    GALGAS_bool joker_11996 ; // Joker input parameter
    var_listFileContents.method_writeToFileWhenDifferentContents (var_listFile, joker_11996, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 263)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'pic18BootloaderSpecificationAnalysis'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38_BootloaderSpecificationAnalysis (const GALGAS_string constinArgument_inSourceFileName,
                                                         const GALGAS_lstring constinArgument_inBootloaderName,
                                                         const GALGAS_lstring constinArgument_inDeviceName,
                                                         const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationList,
                                                         const GALGAS_bootloaderReservedRAMmap constinArgument_inBootloaderReservedRAMmap,
                                                         const GALGAS_luint constinArgument_inReservedRomSize,
                                                         const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationList,
                                                         const GALGAS_ramDefinitionList constinArgument_inSharedRamDefinitionList,
                                                         GALGAS_string & outArgument_outListFileContents,
                                                         GALGAS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                         GALGAS_uint & outArgument_outAccessBankSplitOffset,
                                                         GALGAS_ramBankTable & outArgument_outRamBank,
                                                         GALGAS_registerTable & outArgument_outRegisterTable,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outListFileContents.drop () ; // Release 'out' argument
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  GALGAS_string var_sourceFileBaseName = constinArgument_inSourceFileName.reader_lastPathComponent (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)).reader_stringByDeletingPathExtension (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName.objectCompare (constinArgument_inBootloaderName.reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 21)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inBootloaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the bootloader name ('").add_operation (constinArgument_inBootloaderName.reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (var_sourceFileBaseName, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)) ;
  }
  outArgument_outListFileContents = GALGAS_string::makeEmptyString () ;
  {
  routine_parseDeviceDefinition (constinArgument_inDeviceName, outArgument_outPiccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 27)) ;
  }
  switch (outArgument_outPiccoloDeviceModel.reader_mProcessorType (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 28)).enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint ((uint32_t) 96U) ;
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint ((uint32_t) 128U) ;
    }
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
      GALGAS_location location_2 (constinArgument_inDeviceName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a midrange device is not accepted here")  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      GALGAS_location location_3 (constinArgument_inDeviceName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("a baseline device is not accepted here")  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)) ;
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER FOOTPRINT").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)) ;
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsSupOrEqual, constinArgument_inReservedRomSize.reader_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)).objectCompare (outArgument_outPiccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)).reader_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (constinArgument_inReservedRomSize.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("reserved size for bootloader (").add_operation (constinArgument_inReservedRomSize.reader_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)).add_operation (GALGAS_string (" bytes) is greater than ROM size ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (outArgument_outPiccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).reader_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (GALGAS_string (" bytes) of "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (constinArgument_inDeviceName.reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (GALGAS_string (" micro controller"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 42))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)) ;
  }
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string ("ROM size : ").add_operation (constinArgument_inReservedRomSize.reader_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).add_operation (GALGAS_string (" bytes.\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)) ;
  outArgument_outRamBank = outArgument_outPiccoloDeviceModel.reader_mRamBankTable (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 46)) ;
  cEnumerator_bootloaderReservedRAMmap enumerator_2515 (constinArgument_inBootloaderReservedRAMmap, kEnumeration_up) ;
  while (enumerator_2515.hasCurrentObject ()) {
    GALGAS_uint var_firstAddress ;
    GALGAS_uint var_firstFreeAddress ;
    GALGAS_uint var_lastAddressPlusOne ;
    GALGAS_uintlist var_mirrorOffsetList ;
    outArgument_outRamBank.method_searchKey (enumerator_2515.current_lkey (HERE), var_firstAddress, var_firstFreeAddress, var_lastAddressPlusOne, var_mirrorOffsetList, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)) ;
    var_firstFreeAddress = var_firstFreeAddress.add_operation (enumerator_2515.current_mReservedSize (HERE).reader_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 53)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_firstFreeAddress.objectCompare (var_lastAddressPlusOne)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (enumerator_2515.current_mReservedSize (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("reserved size is greater than size of '").add_operation (enumerator_2515.current_lkey (HERE).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (var_lastAddressPlusOne.substract_operation (var_firstAddress, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)) ;
    }else if (kBoolFalse == test_6) {
      {
      outArgument_outRamBank.modifier_setMFirstFreeAddressForKey (var_firstFreeAddress, enumerator_2515.current_lkey (HERE).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 58)) ;
      }
      outArgument_outListFileContents.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_2515.current_lkey (HERE).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (GALGAS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (enumerator_2515.current_mReservedSize (HERE).reader_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (GALGAS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (var_firstAddress.reader_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (var_firstFreeAddress.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).reader_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (GALGAS_string (").\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)) ;
    }
    enumerator_2515.gotoNextObject () ;
  }
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)) ;
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER ROUTINES").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)) ;
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 66)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 66))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 66)) ;
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string ("Routine").reader_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)) ;
  GALGAS_stringset var_routineNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 68)) ;
  GALGAS_uint var_entryPointAddress = GALGAS_uint ((uint32_t) 4U) ;
  cEnumerator_routineDeclarationList enumerator_3838 (constinArgument_inBootloaderRoutineDeclarationList, kEnumeration_up) ;
  while (enumerator_3838.hasCurrentObject ()) {
    const enumGalgasBool test_8 = var_routineNameSet.reader_hasKey (enumerator_3838.current_mRoutineName (HERE).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_location location_9 (enumerator_3838.current_mRoutineName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_9, GALGAS_string ("This routine is already declared")  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)) ;
    }
    var_routineNameSet.addAssign_operation (enumerator_3838.current_mRoutineName (HERE).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 74))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 74)) ;
    outArgument_outListFileContents.dotAssign_operation (enumerator_3838.current_mRoutineName (HERE).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).reader_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (var_entryPointAddress.reader_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)) ;
    var_entryPointAddress = var_entryPointAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 76)) ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_entryPointAddress.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      var_entryPointAddress = GALGAS_uint ((uint32_t) 12U) ;
    }else if (kBoolFalse == test_10) {
      const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_entryPointAddress.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
      if (kBoolTrue == test_11) {
        var_entryPointAddress = GALGAS_uint ((uint32_t) 28U) ;
      }
    }
    enumerator_3838.gotoNextObject () ;
  }
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)) ;
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 85)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 85))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 85)) ;
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("USER PROGRAM ROUTINES").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)) ;
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)) ;
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string ("Routine").reader_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)) ;
  var_entryPointAddress = constinArgument_inReservedRomSize.reader_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 89)) ;
  cEnumerator_routineDeclarationList enumerator_4868 (constinArgument_inUserRoutineDeclarationList, kEnumeration_up) ;
  while (enumerator_4868.hasCurrentObject ()) {
    const enumGalgasBool test_12 = var_routineNameSet.reader_hasKey (enumerator_4868.current_mRoutineName (HERE).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_location location_13 (enumerator_4868.current_mRoutineName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_13, GALGAS_string ("This routine is already declared")  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)) ;
    }
    var_routineNameSet.addAssign_operation (enumerator_4868.current_mRoutineName (HERE).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94)) ;
    outArgument_outListFileContents.dotAssign_operation (enumerator_4868.current_mRoutineName (HERE).reader_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).reader_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).add_operation (var_entryPointAddress.reader_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)) ;
    var_entryPointAddress = var_entryPointAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 96)) ;
    enumerator_4868.gotoNextObject () ;
  }
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 98)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 100)) ;
  {
  GALGAS_declaredByteMap joker_5557 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 105)), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5557, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 101)) ;
  }
  outArgument_outListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 110)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 110))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 110)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'pic18_checkBCC'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool function_pic_31__38__5F_checkBCC (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                              const GALGAS_lstring & constinArgument_inTargetLabel,
                                              const GALGAS_uint & constinArgument_inCurrentAddress,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outDisplacementOK ; // Returned variable
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 476)) ;
  GALGAS_sint var_displacement = var_targetAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)).substract_operation (constinArgument_inCurrentAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement.objectCompare (GALGAS_sint ((int32_t) 127L))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement.objectCompare (GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)) ;
//---
  return result_outDisplacementOK ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_checkBCC [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_checkBCC (C_Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* §§ inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_symbolTableForRelativesResolution operand0 = GALGAS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_uint operand2 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_checkBCC (operand0,
                                           operand1,
                                           operand2,
                                           inCompiler
                                           COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_checkBCC ("pic18_checkBCC",
                                                                         functionWithGenericHeader_pic_31__38__5F_checkBCC,
                                                                         & kTypeDescriptor_GALGAS_bool,
                                                                         3,
                                                                         functionArgs_pic_31__38__5F_checkBCC) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'pic18_checkBRA_RCALL'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool function_pic_31__38__5F_checkBRA_5F_RCALL (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                       const GALGAS_lstring & constinArgument_inTargetLabel,
                                                       const GALGAS_uint & constinArgument_inCurrentAddress,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outDisplacementOK ; // Returned variable
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 489)) ;
  GALGAS_sint var_displacement = var_targetAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)).substract_operation (constinArgument_inCurrentAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)) ;
//---
  return result_outDisplacementOK ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_checkBRA_5F_RCALL [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_symbolTableForRelativesResolution operand0 = GALGAS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_uint operand2 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_checkBRA_5F_RCALL (operand0,
                                                    operand1,
                                                    operand2,
                                                    inCompiler
                                                    COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_checkBRA_5F_RCALL ("pic18_checkBRA_RCALL",
                                                                                  functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL,
                                                                                  & kTypeDescriptor_GALGAS_bool,
                                                                                  3,
                                                                                  functionArgs_pic_31__38__5F_checkBRA_5F_RCALL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'pic18_BRA_RCALL_displacement'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                                  const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                  const GALGAS_uint & constinArgument_inCurrentAddress,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint result_outDisplacement ; // Returned variable
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 501)) ;
  result_outDisplacement = var_targetAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)).substract_operation (constinArgument_inCurrentAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)) ;
//---
  return result_outDisplacement ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (C_Compiler * inCompiler,
                                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                                            const GALGAS_location & /* §§ inErrorLocation */
                                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_symbolTableForRelativesResolution operand0 = GALGAS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_uint operand2 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (operand0,
                                                               operand1,
                                                               operand2,
                                                               inCompiler
                                                               COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_BRA_5F_RCALL_5F_displacement ("pic18_BRA_RCALL_displacement",
                                                                                             functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement,
                                                                                             & kTypeDescriptor_GALGAS_sint,
                                                                                             3,
                                                                                             functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'pic18_Bcc_instruction_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList function_pic_31__38__5F_Bcc_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inConditionalBranchInstructionAddress,
                                                                    const GALGAS_uint & constinArgument_inTargetAddress,
                                                                    const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                    const GALGAS_conditional_5F_branch & constinArgument_inConditionalBranch,
                                                                    const GALGAS_bool & constinArgument_inComplemented,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement = constinArgument_inTargetAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 518)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 518)).substract_operation (constinArgument_inConditionalBranchInstructionAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 518)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 518)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_displacement.objectCompare (GALGAS_sint ((int32_t) 127L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement.objectCompare (GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("** INTERNAL ERROR ** displacement too large for conditional branch instruction")  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 520)) ;
  }
  GALGAS_conditional_5F_branch var_conditionalBranch ;
  const enumGalgasBool test_2 = constinArgument_inComplemented.boolEnum () ;
  if (kBoolTrue == test_2) {
    switch (constinArgument_inConditionalBranch.enumValue ()) {
    case GALGAS_conditional_5F_branch::kNotBuilt:
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bz:
      {
        var_conditionalBranch = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("ipic18_block_representation.galgas", 526)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnz:
      {
        var_conditionalBranch = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_block_representation.galgas", 527)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bn:
      {
        var_conditionalBranch = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("ipic18_block_representation.galgas", 528)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnn:
      {
        var_conditionalBranch = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("ipic18_block_representation.galgas", 529)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bc:
      {
        var_conditionalBranch = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18_block_representation.galgas", 530)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnc:
      {
        var_conditionalBranch = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_block_representation.galgas", 531)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bov:
      {
        var_conditionalBranch = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("ipic18_block_representation.galgas", 532)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnov:
      {
        var_conditionalBranch = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("ipic18_block_representation.galgas", 533)) ;
      }
      break ;
    }
  }else if (kBoolFalse == test_2) {
    var_conditionalBranch = constinArgument_inConditionalBranch ;
  }
  GALGAS_uint var_baseCode ;
  GALGAS_string var_mnemonic ;
  switch (var_conditionalBranch.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      var_baseCode = GALGAS_uint ((uint32_t) 57344U) ;
      var_mnemonic = GALGAS_string ("BZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      var_baseCode = GALGAS_uint ((uint32_t) 57600U) ;
      var_mnemonic = GALGAS_string ("BNZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      var_baseCode = GALGAS_uint ((uint32_t) 58880U) ;
      var_mnemonic = GALGAS_string ("BN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      var_baseCode = GALGAS_uint ((uint32_t) 59136U) ;
      var_mnemonic = GALGAS_string ("BNN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      var_baseCode = GALGAS_uint ((uint32_t) 57856U) ;
      var_mnemonic = GALGAS_string ("BC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      var_baseCode = GALGAS_uint ((uint32_t) 58112U) ;
      var_mnemonic = GALGAS_string ("BNC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      var_baseCode = GALGAS_uint ((uint32_t) 58368U) ;
      var_mnemonic = GALGAS_string ("BOV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      var_baseCode = GALGAS_uint ((uint32_t) 58624U) ;
      var_mnemonic = GALGAS_string ("BNOV") ;
    }
    break ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (var_mnemonic, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)).add_operation (constinArgument_inTargetLabel.reader_string (SOURCE_FILE ("ipic18_block_representation.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)), GALGAS_uintlist::constructor_listWithValue (var_baseCode.operator_or (var_displacement.operator_and (GALGAS_sint ((int32_t) 255L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 551)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code [6] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_conditional_5F_branch,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code (C_Compiler * inCompiler,
                                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_conditional_5F_branch operand3 = GALGAS_conditional_5F_branch::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  const GALGAS_bool operand4 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_Bcc_5F_instruction_5F_code (operand0,
                                                             operand1,
                                                             operand2,
                                                             operand3,
                                                             operand4,
                                                             inCompiler
                                                             COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_Bcc_5F_instruction_5F_code ("pic18_Bcc_instruction_code",
                                                                                           functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code,
                                                                                           & kTypeDescriptor_GALGAS_codeList,
                                                                                           5,
                                                                                           functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'pic18_RCALL_instruction_code'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList function_pic_31__38__5F_RCALL_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inRCALLinstructionAddress,
                                                                      const GALGAS_uint & constinArgument_inTargetAddress,
                                                                      const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement = constinArgument_inTargetAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 563)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 563)).substract_operation (constinArgument_inRCALLinstructionAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 563)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 563)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_displacement.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement.reader_string (SOURCE_FILE ("ipic18_block_representation.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)).add_operation (GALGAS_string (") for RCALL instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)).add_operation (constinArgument_inTargetLabel.reader_string (SOURCE_FILE ("ipic18_block_representation.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)) ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RCALL ").add_operation (constinArgument_inTargetLabel.reader_string (SOURCE_FILE ("ipic18_block_representation.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 569)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 55296U).operator_or (var_displacement.operator_and (GALGAS_sint ((int32_t) 2047L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 568)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code (C_Compiler * inCompiler,
                                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                                            const GALGAS_location & /* §§ inErrorLocation */
                                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_RCALL_5F_instruction_5F_code (operand0,
                                                               operand1,
                                                               operand2,
                                                               inCompiler
                                                               COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_RCALL_5F_instruction_5F_code ("pic18_RCALL_instruction_code",
                                                                                             functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code,
                                                                                             & kTypeDescriptor_GALGAS_codeList,
                                                                                             3,
                                                                                             functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'pic18_BRA_instruction_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList function_pic_31__38__5F_BRA_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inRCALLinstructionAddress,
                                                                    const GALGAS_uint & constinArgument_inTargetAddress,
                                                                    const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement = constinArgument_inTargetAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 580)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 580)).substract_operation (constinArgument_inRCALLinstructionAddress.reader_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 580)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 580)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_displacement.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement.reader_string (SOURCE_FILE ("ipic18_block_representation.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)).add_operation (GALGAS_string (") for BRA instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)).add_operation (constinArgument_inTargetLabel.reader_string (SOURCE_FILE ("ipic18_block_representation.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)) ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    BRA ").add_operation (constinArgument_inTargetLabel.reader_string (SOURCE_FILE ("ipic18_block_representation.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 586)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 53248U).operator_or (var_displacement.operator_and (GALGAS_sint ((int32_t) 2047L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 585)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code (C_Compiler * inCompiler,
                                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_BRA_5F_instruction_5F_code (operand0,
                                                             operand1,
                                                             operand2,
                                                             inCompiler
                                                             COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_BRA_5F_instruction_5F_code ("pic18_BRA_instruction_code",
                                                                                           functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code,
                                                                                           & kTypeDescriptor_GALGAS_codeList,
                                                                                           3,
                                                                                           functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'pic18_CALL_instruction_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList function_pic_31__38__5F_CALL_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inTargetAddress,
                                                                     const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_uintlist var_binaryCode = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 596)) ;
  var_binaryCode.addAssign_operation (GALGAS_uint ((uint32_t) 60416U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 597)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 597)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 597))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 597)) ;
  var_binaryCode.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.reader_string (SOURCE_FILE ("ipic18_block_representation.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 600)), var_binaryCode  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code (C_Compiler * inCompiler,
                                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                                           const GALGAS_location & /* §§ inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_CALL_5F_instruction_5F_code (operand0,
                                                              operand1,
                                                              inCompiler
                                                              COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_CALL_5F_instruction_5F_code ("pic18_CALL_instruction_code",
                                                                                            functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code,
                                                                                            & kTypeDescriptor_GALGAS_codeList,
                                                                                            2,
                                                                                            functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'pic18_GOTO_instruction_code'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList function_pic_31__38__5F_GOTO_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inTargetAddress,
                                                                     const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_uintlist var_binaryCode = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 610)) ;
  var_binaryCode.addAssign_operation (GALGAS_uint ((uint32_t) 61184U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 611)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 611)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 611))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 611)) ;
  var_binaryCode.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.reader_string (SOURCE_FILE ("ipic18_block_representation.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 614)), var_binaryCode  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code (C_Compiler * inCompiler,
                                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                                           const GALGAS_location & /* §§ inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_GOTO_5F_instruction_5F_code (operand0,
                                                              operand1,
                                                              inCompiler
                                                              COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_GOTO_5F_instruction_5F_code ("pic18_GOTO_instruction_code",
                                                                                            functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code,
                                                                                            & kTypeDescriptor_GALGAS_codeList,
                                                                                            2,
                                                                                            functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'pic18_definition_label'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList function_pic_31__38__5F_definition_5F_label (const GALGAS_lstring & constinArgument_inTargetLabel,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  result_outCode = GALGAS_codeList::constructor_listWithValue (constinArgument_inTargetLabel.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 624)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 625))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 623)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_definition_5F_label [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_definition_5F_label (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* §§ inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_definition_5F_label (operand0,
                                                      inCompiler
                                                      COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_definition_5F_label ("pic18_definition_label",
                                                                                    functionWithGenericHeader_pic_31__38__5F_definition_5F_label,
                                                                                    & kTypeDescriptor_GALGAS_codeList,
                                                                                    1,
                                                                                    functionArgs_pic_31__38__5F_definition_5F_label) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'addPic18UsedRoutinesFromInstructionList'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addPic_31__38_UsedRoutinesFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                            const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_10175 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_10175.hasCurrentObject ()) {
    callCategoryMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_10175.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 346)) ;
    enumerator_10175.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'pic18_computeUsedRoutines'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_pic_31__38__5F_computeUsedRoutines (const GALGAS_pic_31__38_InterruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                              const GALGAS_pic_31__38_RoutineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                              const GALGAS_pic_31__38_MacroMap & constinArgument_inMacroMap,
                                                              const GALGAS_routineDeclarationList & constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                              const GALGAS_routineDeclarationList & constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 360)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_10909 (constinArgument_inInterruptDefinitionList, kEnumeration_up) ;
  while (enumerator_10909.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_10909.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 363)) ;
    }
    enumerator_10909.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11149 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation, kEnumeration_up) ;
  while (enumerator_11149.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11149.current_mRoutineName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 371)) ;
    enumerator_11149.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11302 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_11302.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11302.current_mRoutineName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 375)) ;
    enumerator_11302.gotoNextObject () ;
  }
  GALGAS_stringset var_s = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_used_routines.galgas", 378)) ;
  if (constinArgument_inRoutineDefinitionList.reader_length (SOURCE_FILE ("pic18_used_routines.galgas", 379)).isValid ()) {
    uint32_t variant_11436 = constinArgument_inRoutineDefinitionList.reader_length (SOURCE_FILE ("pic18_used_routines.galgas", 379)).uintValue () ;
    bool loop_11436 = true ;
    while (loop_11436) {
      loop_11436 = GALGAS_bool (kIsNotEqual, var_s.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11436) {
        loop_11436 = GALGAS_bool (kIsNotEqual, var_s.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11436 && (0 == variant_11436)) {
        loop_11436 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 379)) ;
      }
      if (loop_11436) {
        variant_11436 -- ;
        var_s = result_outUsedRoutineSet ;
        cEnumerator_pic_31__38_RoutineDefinitionList enumerator_11570 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
        while (enumerator_11570.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.reader_hasKey (enumerator_11570.current_mRoutineName (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 383)).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_11570.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 384)) ;
            }
          }
          enumerator_11570.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_computeUsedRoutines [6] = {
  & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_MacroMap,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* §§ inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_pic_31__38_InterruptDefinitionList operand0 = GALGAS_pic_31__38_InterruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                       inCompiler
                                                                                                                       COMMA_THERE) ;
  const GALGAS_pic_31__38_RoutineDefinitionList operand1 = GALGAS_pic_31__38_RoutineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                   inCompiler
                                                                                                                   COMMA_THERE) ;
  const GALGAS_pic_31__38_MacroMap operand2 = GALGAS_pic_31__38_MacroMap::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_routineDeclarationList operand3 = GALGAS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                               inCompiler
                                                                                               COMMA_THERE) ;
  const GALGAS_routineDeclarationList operand4 = GALGAS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                                                               inCompiler
                                                                                               COMMA_THERE) ;
  return function_pic_31__38__5F_computeUsedRoutines (operand0,
                                                      operand1,
                                                      operand2,
                                                      operand3,
                                                      operand4,
                                                      inCompiler
                                                      COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_computeUsedRoutines ("pic18_computeUsedRoutines",
                                                                                    functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines,
                                                                                    & kTypeDescriptor_GALGAS_stringset,
                                                                                    5,
                                                                                    functionArgs_pic_31__38__5F_computeUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'performInlineFromInstructionList'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performInlineFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                               GALGAS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 213)) ;
  cEnumerator_pic_31__38_InstructionList enumerator_6929 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_6929.hasCurrentObject ()) {
    callCategoryMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_6929.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 215)) ;
    enumerator_6929.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'pic18PerformRoutineInline'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38_PerformRoutineInline (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                              const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                              GALGAS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                              GALGAS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 233)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7548 (ioArgument_ioInterruptDefinitionList, kEnumeration_up) ;
  while (enumerator_7548.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList ;
    {
    routine_performInlineFromInstructionList (enumerator_7548.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 239)), var_instructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 235)) ;
    }
    var_interruptDefinitionList.addAssign_operation (enumerator_7548.current_mInterruptName (HERE), enumerator_7548.current_mFastReturn (HERE), var_instructionList, enumerator_7548.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 242)) ;
    enumerator_7548.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 250)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_8066 (ioArgument_ioRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_8066.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList ;
    {
    routine_performInlineFromInstructionList (enumerator_8066.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 256)), var_instructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 252)) ;
    }
    var_routineDefinitionList.addAssign_operation (enumerator_8066.current_mRoutineName (HERE), enumerator_8066.current_mRequiredBank (HERE), enumerator_8066.current_mReturnedBank (HERE), enumerator_8066.current_mPreservesBank (HERE), enumerator_8066.current_mIsNoReturn (HERE), var_instructionList, enumerator_8066.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 259)) ;
    enumerator_8066.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'displayBlockList'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_displayBlockList (const GALGAS_string constinArgument_inTitle,
                               GALGAS_string & ioArgument_ioListFileContents,
                               const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40))  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (constinArgument_inTitle.reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41))  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42))  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1366 (constinArgument_inGeneratedBlockList, kEnumeration_up) ;
  GALGAS_uint index_1338 ((uint32_t) 0) ;
  while (enumerator_1366.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, index_1338.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 45)).objectCompare (constinArgument_inGeneratedBlockList.reader_length (SOURCE_FILE ("ipic18_display_block_list.galgas", 45)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_nextBlockLabel = constinArgument_inGeneratedBlockList.reader_mBlockAtIndex (index_1338.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_0) {
      var_nextBlockLabel = GALGAS_string::makeEmptyString () ;
    }
    categoryMethod_display (enumerator_1366.current_mBlock (HERE), var_nextBlockLabel, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 50)) ;
    enumerator_1366.gotoNextObject () ;
    index_1338.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 43)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeInstructionList'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                     GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                     const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                     const GALGAS_routineMap constinArgument_inRoutineMap,
                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                     const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                     const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                     GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                     GALGAS_lstring & ioArgument_ioBlockLabel,
                                     GALGAS_string & ioArgument_ioListFileContents,
                                     GALGAS_uint & ioArgument_ioCurrentBank,
                                     const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                     const GALGAS_routineKind constinArgument_inRoutineKind,
                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_110109 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_110109.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_110109.current_mInstruction (HERE).reader_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)), GALGAS_string ("Unreachable code")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)) ;
      ioArgument_ioBlockLabel = GALGAS_string ("\?").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3170)) ;
    }
    callCategoryMethod_analyze ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_110109.current_mInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioGeneratedBlockList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3172)) ;
    enumerator_110109.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'pic18_analyze_data_sections'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38__5F_analyze_5F_data_5F_sections (const GALGAS_dataList constinArgument_inDataDefinitionList,
                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                         GALGAS_pic_31__38__5F_dataMap & outArgument_outDataMap,
                                                         GALGAS_constantMap & ioArgument_ioConstantMap,
                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDataMap.drop () ; // Release 'out' argument
  outArgument_outDataMap = GALGAS_pic_31__38__5F_dataMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3206)) ;
  cEnumerator_dataList enumerator_111402 (constinArgument_inDataDefinitionList, kEnumeration_up) ;
  const bool bool_0 = true ;
  if (enumerator_111402.hasCurrentObject () && bool_0) {
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3209))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3209)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("DATA DECLARATION").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3210)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3210)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3210))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3210)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3211)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3211))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3211)) ;
    while (enumerator_111402.hasCurrentObject () && bool_0) {
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Data '").add_operation (enumerator_111402.current_mDataName (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).add_operation (enumerator_111402.current_mValueList (HERE).reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).add_operation (enumerator_111402.current_mValueList (HERE).reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)) ;
      {
      ioArgument_ioConstantMap.modifier_insertKey (GALGAS_lstring::constructor_new (enumerator_111402.current_mDataName (HERE).mAttribute_string.add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)), enumerator_111402.current_mDataName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)), enumerator_111402.current_mValueList (HERE).reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)) ;
      }
      GALGAS_uintlist var_data = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3215)) ;
      cEnumerator_immediatExpressionList enumerator_112001 (enumerator_111402.current_mValueList (HERE), kEnumeration_up) ;
      while (enumerator_112001.hasCurrentObject ()) {
        GALGAS_sint_36__34_ var_value ;
        callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_112001.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3217)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->emitSemanticError (enumerator_112001.current_mErrorLocation (HERE), GALGAS_string ("data value is ").add_operation (var_value.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3219)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3219)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3219))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3219)) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_value.objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
          if (kBoolTrue == test_2) {
            inCompiler->emitSemanticError (enumerator_112001.current_mErrorLocation (HERE), GALGAS_string ("data value is ").add_operation (var_value.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3221)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3221)).add_operation (GALGAS_string (" (greater than 2**16-1)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3221))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3221)) ;
          }else if (kBoolFalse == test_2) {
            var_data.addAssign_operation (var_value.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3223))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3223)) ;
          }
        }
        enumerator_112001.gotoNextObject () ;
      }
      {
      outArgument_outDataMap.modifier_insertKey (enumerator_111402.current_mDataName (HERE), var_data, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3226)) ;
      }
      enumerator_111402.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'build_ipic18_block_representation_list'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (const GALGAS_string constinArgument_inSourceFileName,
                                                                       const GALGAS_sint_36__34_ constinArgument_inROMSize,
                                                                       const GALGAS_sint_36__34_ constinArgument_inRAMSize,
                                                                       const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                       const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                                       const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForBootloaderImplementation,
                                                                       const GALGAS_luint constinArgument_inBootloaderReservedROMsize,
                                                                       const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation,
                                                                       const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                                       const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                       const GALGAS_declaredByteMap constinArgument_inDeclaredByteMap,
                                                                       const GALGAS_pic_31__38_RoutineDefinitionList constinArgument_inRoutineDefinitionList,
                                                                       const GALGAS_programKind constinArgument_inProgramKind,
                                                                       const GALGAS_constantDefinitionList constinArgument_inConstantDefinitionList,
                                                                       const GALGAS_dataList constinArgument_inDataList,
                                                                       const GALGAS_pic_31__38_InterruptDefinitionList constinArgument_inInterruptDefinitionList,
                                                                       const GALGAS_lstringlist constinArgument_inUnusedRegisterList,
                                                                       const GALGAS_ramBankTable constinArgument_inRamBank,
                                                                       const GALGAS_bool constinArgument_inHasHighInterrupt,
                                                                       const GALGAS_bool constinArgument_inHasLowInterrupt,
                                                                       const GALGAS_string constinArgument_inProcessorName,
                                                                       const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                                       const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                       const GALGAS_location constinArgument_inEndOfProgram,
                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap var_routineMap = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3261)) ;
  cEnumerator_routineDeclarationList enumerator_113918 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kEnumeration_up) ;
  while (enumerator_113918.hasCurrentObject ()) {
    {
    var_routineMap.modifier_insertKey (enumerator_113918.current_mRoutineName (HERE), enumerator_113918.current_mIsNoReturn (HERE), enumerator_113918.current_mRequiredBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3263)), enumerator_113918.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3263)), enumerator_113918.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3263)) ;
    }
    enumerator_113918.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_114119 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_114119.hasCurrentObject ()) {
    {
    var_routineMap.modifier_insertKey (enumerator_114119.current_mRoutineName (HERE), enumerator_114119.current_mIsNoReturn (HERE), enumerator_114119.current_mRequiredBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3266)), enumerator_114119.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3266)), enumerator_114119.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3266)) ;
    }
    enumerator_114119.gotoNextObject () ;
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_114281 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_114281.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_114281.current_mRequiredBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3269)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3269)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_114281.current_mRequiredBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3269)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3269)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_114281.current_mRequiredBank (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the required bank value should be lower or equal to 15")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3270)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_114281.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3272)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3272)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_114281.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3272)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3272)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_114281.current_mReturnedBank (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the returned bank value should be lower or equal to 15")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3273)) ;
    }
    {
    var_routineMap.modifier_insertKey (enumerator_114281.current_mRoutineName (HERE), enumerator_114281.current_mIsNoReturn (HERE), enumerator_114281.current_mRequiredBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3275)), enumerator_114281.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3275)), enumerator_114281.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3275)) ;
    }
    enumerator_114281.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3278)) ;
  {
  var_constantMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3280))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3280)), constinArgument_inROMSize, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3280)) ;
  }
  {
  var_constantMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("RAM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3281))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3281)), constinArgument_inRAMSize, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3281)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_regularProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3283)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_lstring var_bootloaderSizeString = GALGAS_lstring::constructor_new (GALGAS_string ("BOOTLOADER_RESERVED_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3284))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3284)) ;
    {
    var_constantMap.modifier_insertKey (var_bootloaderSizeString, constinArgument_inBootloaderReservedROMsize.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3285)).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3285)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3285)) ;
    }
  }
  GALGAS_stringset var_usedRegisters = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3288)) ;
  cEnumerator_constantDefinitionList enumerator_115461 (constinArgument_inConstantDefinitionList, kEnumeration_up) ;
  while (enumerator_115461.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result ;
    callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_115461.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap, var_result, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3290)) ;
    const enumGalgasBool test_5 = constinArgument_inRegisterTable.reader_hasKey (enumerator_115461.current_mConstantName (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3291)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3291)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_115461.current_mConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("'").add_operation (enumerator_115461.current_mConstantName (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)) ;
    }else if (kBoolFalse == test_5) {
      {
      var_constantMap.modifier_insertKey (enumerator_115461.current_mConstantName (HERE), var_result, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3294)) ;
      }
    }
    enumerator_115461.gotoNextObject () ;
  }
  GALGAS_pic_31__38__5F_dataMap var_dataMap ;
  {
  routine_pic_31__38__5F_analyze_5F_data_5F_sections (constinArgument_inDataList, constinArgument_inRegisterTable, var_constantMap, ioArgument_ioListFileContents, var_dataMap, var_constantMap, var_usedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3298)) ;
  }
  {
  routine_print_5F_constant_5F_definition (var_constantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3308)) ;
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3313)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = var_routineMap.reader_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3314)).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_bool var_isNoReturn ;
      GALGAS_uint var_requiredBank ;
      GALGAS_uint joker_116472 ; // Joker input parameter
      GALGAS_bool joker_116475 ; // Joker input parameter
      var_routineMap.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3317))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3317)), var_isNoReturn, var_requiredBank, joker_116472, joker_116475, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3317)) ;
      const enumGalgasBool test_9 = var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3318)).boolEnum () ;
      if (kBoolTrue == test_9) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3319)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main requiresbank 0\"")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3319)) ;
      }
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3322)), GALGAS_string ("the \"main\" should be declared with \"requiresbank 0\" qualifier: \"noreturn main requiresbank 0\"")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3322)) ;
      }
    }else if (kBoolFalse == test_8) {
      inCompiler->emitSemanticError (constinArgument_inEndOfProgram, GALGAS_string ("the program should declare the \"main\" routine")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3325)) ;
    }
  }
  GALGAS_ipic_31__38_BlockList var_generatedBlockList = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3329)) ;
  GALGAS_uint var_entryPoint = GALGAS_uint ((uint32_t) 4U) ;
  cEnumerator_routineDeclarationList enumerator_117159 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_117159.hasCurrentObject ()) {
    var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint, enumerator_117159.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3335)), GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3336))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3336)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3337)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3332))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3332)) ;
    var_entryPoint = var_entryPoint.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3340)) ;
    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_entryPoint.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      var_entryPoint = GALGAS_uint ((uint32_t) 12U) ;
    }else if (kBoolFalse == test_11) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_entryPoint.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
      if (kBoolTrue == test_12) {
        var_entryPoint = GALGAS_uint ((uint32_t) 28U) ;
      }
    }
    enumerator_117159.gotoNextObject () ;
  }
  var_entryPoint = constinArgument_inBootloaderReservedROMsize.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3348)) ;
  cEnumerator_routineDeclarationList enumerator_117754 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_117754.hasCurrentObject ()) {
    var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint, GALGAS_string ("_entry_user_").add_operation (var_entryPoint.reader_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3352)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3352)).reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3352)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3353)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_117754.current_mRoutineName (HERE).mAttribute_location, enumerator_117754.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3354))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3354)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3355)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3350))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3350)) ;
    var_entryPoint = var_entryPoint.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3358)) ;
    enumerator_117754.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_string (".START").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3364)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3365)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3366)), GALGAS_string ("main").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3366)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3366))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3366)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3367)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3362))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3362)) ;
  }
  GALGAS_routineDeclarationList var_tempBootloaderRoutineDeclarationList = constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3373)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_14) {
    GALGAS_lstring var_routineName ;
    {
    GALGAS_luint joker_118875 ; // Joker input parameter
    GALGAS_luint joker_118878 ; // Joker input parameter
    GALGAS_bool joker_118881 ; // Joker input parameter
    GALGAS_bool joker_118884 ; // Joker input parameter
    var_tempBootloaderRoutineDeclarationList.modifier_popFirst (var_routineName, joker_118875, joker_118878, joker_118881, joker_118884, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3374)) ;
    }
    var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 4U), GALGAS_string ("_entry_bootloader_04").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3377)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName.mAttribute_location, var_routineName, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3379))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3379)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3380)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3375))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3375)) ;
  }
  const enumGalgasBool test_15 = constinArgument_inHasHighInterrupt.boolEnum () ;
  if (kBoolTrue == test_15) {
    var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 8U), GALGAS_string (".HIGH_INTERRUPT").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3388)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3389)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390)), GALGAS_string ("_high_interrupt").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3391)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3386))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3386)) ;
  }
  var_entryPoint = GALGAS_uint ((uint32_t) 12U) ;
  if (var_tempBootloaderRoutineDeclarationList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)).isValid ()) {
    uint32_t variant_119768 = var_tempBootloaderRoutineDeclarationList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)).uintValue () ;
    bool loop_119768 = true ;
    while (loop_119768) {
      loop_119768 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3398)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3398)).isValid () ;
      if (loop_119768) {
        loop_119768 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3398)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3398)).boolValue () ;
      }
      if (loop_119768 && (0 == variant_119768)) {
        loop_119768 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)) ;
      }
      if (loop_119768) {
        variant_119768 -- ;
        GALGAS_lstring var_routineName ;
        {
        GALGAS_luint joker_119985 ; // Joker input parameter
        GALGAS_luint joker_119988 ; // Joker input parameter
        GALGAS_bool joker_119991 ; // Joker input parameter
        GALGAS_bool joker_119994 ; // Joker input parameter
        var_tempBootloaderRoutineDeclarationList.modifier_popFirst (var_routineName, joker_119985, joker_119988, joker_119991, joker_119994, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3400)) ;
        }
        var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint.reader_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)).reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3404)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName.mAttribute_location, var_routineName, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3406)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401)) ;
        var_entryPoint = var_entryPoint.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)) ;
      }
    }
  }
  const enumGalgasBool test_16 = constinArgument_inHasLowInterrupt.boolEnum () ;
  if (kBoolTrue == test_16) {
    var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 24U), GALGAS_string (".LOW_INTERRUPT").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3415)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3416)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)), GALGAS_string ("_low_interrupt").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3418)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413)) ;
  }
  var_entryPoint = GALGAS_uint ((uint32_t) 28U) ;
  cEnumerator_routineDeclarationList enumerator_120918 (var_tempBootloaderRoutineDeclarationList, kEnumeration_up) ;
  while (enumerator_120918.hasCurrentObject ()) {
    var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint.reader_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3427)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3427)).reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3427)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3428)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_120918.current_mRoutineName (HERE).mAttribute_location, enumerator_120918.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3429))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3429)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3430)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3425))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3425)) ;
    var_entryPoint = var_entryPoint.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3433)) ;
    enumerator_120918.gotoNextObject () ;
  }
  var_tempBootloaderRoutineDeclarationList.drop () ; // drop instruction
  GALGAS_uint var_localLabelIndex = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_17 = constinArgument_inHasLowInterrupt.boolEnum () ;
  if (kBoolTrue == test_17) {
    cEnumerator_pic_31__38_InterruptDefinitionList enumerator_121495 (constinArgument_inInterruptDefinitionList, kEnumeration_up) ;
    while (enumerator_121495.hasCurrentObject ()) {
      const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, enumerator_121495.current_mInterruptName (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3440)).objectCompare (GALGAS_string ("low"))).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_uint var_currentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3441)) ;
        GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3442)) ;
        GALGAS_lstring var_currentBlockLabel = GALGAS_lstring::constructor_new (GALGAS_string ("_low_interrupt"), enumerator_121495.current_mInterruptName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3443)) ;
        {
        routine_analyzeInstructionList (enumerator_121495.current_mInstructionList (HERE), var_generatedBlockList, constinArgument_inAccessBankSplitOffset, var_routineMap, constinArgument_inRegisterTable, var_dataMap, var_constantMap, constinArgument_inMacroMap, var_localLabelIndex, var_generatedInstructionList, var_currentBlockLabel, ioArgument_ioListFileContents, var_currentBank, enumerator_121495.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3458)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3459)), var_usedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3444)) ;
        }
        const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_currentBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_19) {
          inCompiler->emitSemanticError (enumerator_121495.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3463)) ;
        }
        var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3467)), var_currentBlockLabel, var_generatedInstructionList, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_121495.current_mInterruptName (HERE).mAttribute_location, enumerator_121495.current_mFastReturn (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3470)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3471)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3466))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3466)) ;
      }
      enumerator_121495.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_20 = constinArgument_inHasHighInterrupt.boolEnum () ;
  if (kBoolTrue == test_20) {
    cEnumerator_pic_31__38_InterruptDefinitionList enumerator_122920 (constinArgument_inInterruptDefinitionList, kEnumeration_up) ;
    while (enumerator_122920.hasCurrentObject ()) {
      const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, enumerator_122920.current_mInterruptName (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3480)).objectCompare (GALGAS_string ("high"))).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_uint var_currentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3481)) ;
        GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3482)) ;
        GALGAS_lstring var_currentBlockLabel = GALGAS_lstring::constructor_new (GALGAS_string ("_high_interrupt"), enumerator_122920.current_mInterruptName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3483)) ;
        {
        routine_analyzeInstructionList (enumerator_122920.current_mInstructionList (HERE), var_generatedBlockList, constinArgument_inAccessBankSplitOffset, var_routineMap, constinArgument_inRegisterTable, var_dataMap, var_constantMap, constinArgument_inMacroMap, var_localLabelIndex, var_generatedInstructionList, var_currentBlockLabel, ioArgument_ioListFileContents, var_currentBank, enumerator_122920.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3498)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3499)), var_usedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3484)) ;
        }
        const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, var_currentBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_22) {
          inCompiler->emitSemanticError (enumerator_122920.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3503)) ;
        }
        var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3507)), var_currentBlockLabel, var_generatedInstructionList, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_122920.current_mInterruptName (HERE).mAttribute_location, GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3510)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3511)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3506))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3506)) ;
      }
      enumerator_122920.gotoNextObject () ;
    }
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_124284 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_124284.hasCurrentObject ()) {
    GALGAS_uint var_currentBank = enumerator_124284.current_mRequiredBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3519)) ;
    GALGAS_routineKind var_routineKind ;
    const enumGalgasBool test_23 = enumerator_124284.current_mIsNoReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_23) {
      var_routineKind = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3522)) ;
    }else if (kBoolFalse == test_23) {
      var_routineKind = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3524)) ;
    }
    GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3526)) ;
    GALGAS_lstring var_currentBlockLabel = enumerator_124284.current_mRoutineName (HERE) ;
    {
    routine_analyzeInstructionList (enumerator_124284.current_mInstructionList (HERE), var_generatedBlockList, constinArgument_inAccessBankSplitOffset, var_routineMap, constinArgument_inRegisterTable, var_dataMap, var_constantMap, constinArgument_inMacroMap, var_localLabelIndex, var_generatedInstructionList, var_currentBlockLabel, ioArgument_ioListFileContents, var_currentBank, enumerator_124284.current_mPreservesBank (HERE), var_routineKind, var_usedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3528)) ;
    }
    GALGAS_bool var_continuesInSequence = GALGAS_bool (kIsNotEqual, var_currentBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
    const enumGalgasBool test_24 = var_continuesInSequence.boolEnum () ;
    if (kBoolTrue == test_24) {
      var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3550)), var_currentBlockLabel, var_generatedInstructionList, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (enumerator_124284.current_mRoutineName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3553)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3554)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)) ;
    }
    const enumGalgasBool test_25 = enumerator_124284.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_124284.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (enumerator_124284.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)).boolEnum () ;
    if (kBoolTrue == test_25) {
      GALGAS_location location_26 (enumerator_124284.current_mRoutineName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_26, GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_124284.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)) ;
    }
    const enumGalgasBool test_27 = enumerator_124284.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3562)).boolEnum () ;
    if (kBoolTrue == test_27) {
      GALGAS_location location_28 (enumerator_124284.current_mRoutineName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_28, GALGAS_string ("execution should not reach the end of a \"noreturn\" routine")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3563)) ;
    }
    enumerator_124284.gotoNextObject () ;
  }
  GALGAS_registerExpression var_WREGregister = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("WREG"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3571))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3571))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3571)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3572))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3569)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_WREG_5F_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_126304 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_WREGregister.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap, var_WREG_5F_IPICregisterDescription, joker_126304, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3574)) ;
  GALGAS_registerExpression var_TOSLregister = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSL"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3585))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3585)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3586))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3586))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3586)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3587))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3584)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSL_5F_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_126723 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSLregister.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap, var_TOSL_5F_IPICregisterDescription, joker_126723, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3589)) ;
  GALGAS_registerExpression var_TOSHregister = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3600))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3600)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3601))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3601))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3601)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3599)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSH_5F_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_127141 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSHregister.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap, var_TOSH_5F_IPICregisterDescription, joker_127141, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3604)) ;
  GALGAS_registerExpression var_TOSUregister = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSU"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3615))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3615)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3617))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3614)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSU_5F_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_127558 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSUregister.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap, var_TOSU_5F_IPICregisterDescription, joker_127558, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3619)) ;
  GALGAS_ipic_31__38_SequentialInstruction var_ADDWF_5F_WREG = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3630)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3631)), var_WREG_5F_IPICregisterDescription, GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3629)) ;
  GALGAS_ipic_31__38_Block var_goto_34_Block = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3637)), GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3638)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_listWithValue (var_ADDWF_5F_WREG, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)), GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3636)) ;
  var_generatedBlockList.addAssign_operation (var_goto_34_Block  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3644)) ;
  GALGAS_ipic_31__38_SequentialInstructionList var_goto_32_InstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3646)) ;
  var_goto_32_InstructionList.addAssign_operation (var_ADDWF_5F_WREG, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3647)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3647)) ;
  var_goto_32_InstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3649)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3650)), var_TOSL_5F_IPICregisterDescription, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3648)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3652)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3648)) ;
  var_goto_32_InstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3654)), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3655)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3653)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3656)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3653)) ;
  var_goto_32_InstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3658)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3659)), var_TOSH_5F_IPICregisterDescription, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3657)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3661)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3657)) ;
  var_goto_32_InstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3663)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3664)), var_TOSU_5F_IPICregisterDescription, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3662)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3666)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3662)) ;
  GALGAS_ipic_31__38_Block var_goto_32_Block = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3669)), GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3670)), var_goto_32_InstructionList, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3672))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3672)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3673)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3668)) ;
  var_generatedBlockList.addAssign_operation (var_goto_32_Block  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3676)) ;
  var_entryPoint = constinArgument_inBootloaderReservedROMsize.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3678)) ;
  cEnumerator_routineDeclarationList enumerator_129614 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kEnumeration_up) ;
  while (enumerator_129614.hasCurrentObject ()) {
    const enumGalgasBool test_29 = enumerator_129614.current_mIsNoReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_29) {
      var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint, enumerator_129614.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3684)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_129614.current_mRoutineName (HERE).mAttribute_location, enumerator_129614.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3685))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3685)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3686)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3681))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3681)) ;
    }else if (kBoolFalse == test_29) {
      GALGAS_ipic_31__38_SequentialInstructionList var_instructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3690)) ;
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_129614.current_mReturnedBank (HERE).reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3691)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3691)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        var_instructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3692)), enumerator_129614.current_mReturnedBank (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3692)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3692)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3692)) ;
      }
      var_generatedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint, enumerator_129614.current_mRoutineName (HERE), var_instructionList, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3698))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3698)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3699)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3694))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3694)) ;
    }
    var_entryPoint = var_entryPoint.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3703)) ;
    enumerator_129614.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3706)) ;
  cEnumerator_lstringlist enumerator_130637 (constinArgument_inUnusedRegisterList, kEnumeration_up) ;
  while (enumerator_130637.hasCurrentObject ()) {
    const enumGalgasBool test_31 = constinArgument_inRegisterTable.reader_hasKey (enumerator_130637.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3708)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3708)).boolEnum () ;
    if (kBoolTrue == test_31) {
      GALGAS_location location_32 (enumerator_130637.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_32, GALGAS_string ("the '").add_operation (enumerator_130637.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709)) ;
    }else if (kBoolFalse == test_31) {
      const enumGalgasBool test_33 = var_unusedDeclarationUnicity.reader_hasKey (enumerator_130637.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3710)).boolEnum () ;
      if (kBoolTrue == test_33) {
        GALGAS_location location_34 (enumerator_130637.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_34, GALGAS_string ("the '").add_operation (enumerator_130637.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3711)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3711)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3711))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3711)) ;
      }else if (kBoolFalse == test_33) {
        const enumGalgasBool test_35 = var_usedRegisters.reader_hasKey (enumerator_130637.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3712)).boolEnum () ;
        if (kBoolTrue == test_35) {
          GALGAS_location location_36 (enumerator_130637.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticWarning (location_36, GALGAS_string ("the '").add_operation (enumerator_130637.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3713)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3713)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3713))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3713)) ;
        }
      }
    }
    var_unusedDeclarationUnicity.addAssign_operation (enumerator_130637.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3715)) ;
    enumerator_130637.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_131137 (constinArgument_inDeclaredByteMap, kEnumeration_up) ;
  while (enumerator_131137.hasCurrentObject ()) {
    const enumGalgasBool test_37 = var_usedRegisters.reader_hasKey (enumerator_131137.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)).operator_and (var_unusedDeclarationUnicity.reader_hasKey (enumerator_131137.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)).boolEnum () ;
    if (kBoolTrue == test_37) {
      GALGAS_location location_38 (enumerator_131137.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_38, GALGAS_string ("the '").add_operation (enumerator_131137.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3719)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3719)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3719))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3719)) ;
    }
    enumerator_131137.gotoNextObject () ;
  }
  {
  routine_displayBlockList (GALGAS_string ("INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3723)) ;
  }
  const enumGalgasBool test_39 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3725)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_39) {
    {
    routine_ipic_31__38_OptimizeBlocks (ioArgument_ioListFileContents, var_generatedBlockList, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3726)) ;
    }
    {
    routine_displayBlockList (GALGAS_string ("OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3727)) ;
    }
  }
  const enumGalgasBool test_40 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3730)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_40) {
    {
    routine_ipic_31__38_OptimizeBlockOrdering (constinArgument_inSourceFileName, ioArgument_ioListFileContents, var_generatedBlockList, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3731)) ;
    }
  }
  const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3738)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_41) {
    {
    routine_ipic_31__38_RelativesResolution (ioArgument_ioListFileContents, var_generatedBlockList, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3739)) ;
    }
  }
  const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3745)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3745)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3745)).boolEnum () ;
  if (kBoolTrue == test_42) {
    {
    routine_ipic_31__38_StackComputations (ioArgument_ioListFileContents, var_generatedBlockList, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3746)) ;
    }
  }
  GALGAS_blockDurationMap var_blockDurationMap = GALGAS_blockDurationMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3752)) ;
  const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3753)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_43) {
    {
    routine_ipic_31__38_DurationComputations (var_generatedBlockList, var_blockDurationMap, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3754)) ;
    }
  }
  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3757)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_44) {
    GALGAS_uint var_usedROMsize ;
    GALGAS_generatedCodeMap var_generatedCodeMap ;
    {
    routine_ipic_31__38_GenerateCode (constinArgument_inSourceFileName, constinArgument_inProgramKind, constinArgument_inBootloaderReservedROMsize.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3761)), constinArgument_inROMSize.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3762)), constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inRegisterTable, var_dataMap, constinArgument_inActualConfigurationMap, ioArgument_ioListFileContents, var_generatedBlockList, var_usedROMsize, var_generatedCodeMap, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3758)) ;
    }
    const enumGalgasBool test_45 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_45) {
      GALGAS_string var_verboseMessage = GALGAS_string ("Resource usage:\n") ;
      var_verboseMessage.dotAssign_operation (GALGAS_string ("  ROM size: ").add_operation (constinArgument_inROMSize.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3776)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3776)).add_operation (GALGAS_string (" bytes;"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3776))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3776)) ;
      var_verboseMessage.dotAssign_operation (GALGAS_string (" used: ").add_operation (var_usedROMsize.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3777)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3777)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3777))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3777)) ;
      var_verboseMessage.dotAssign_operation (var_usedROMsize.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)).divide_operation (constinArgument_inROMSize.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)) ;
      cEnumerator_ramBankTable enumerator_133662 (constinArgument_inRamBank, kEnumeration_up) ;
      while (enumerator_133662.hasCurrentObject ()) {
        GALGAS_uint var_bankSize = enumerator_133662.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_133662.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3780)) ;
        GALGAS_uint var_usedSize = enumerator_133662.current_mFirstFreeAddress (HERE).substract_operation (enumerator_133662.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3781)) ;
        var_verboseMessage.dotAssign_operation (GALGAS_string ("  RAM bank '").add_operation (enumerator_133662.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3782)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3782)).add_operation (GALGAS_string ("': "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3782))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3782)) ;
        var_verboseMessage.dotAssign_operation (var_bankSize.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3783)).add_operation (GALGAS_string (" bytes, used "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3783))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3783)) ;
        var_verboseMessage.dotAssign_operation (var_usedSize.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3784)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3784))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3784)) ;
        var_verboseMessage.dotAssign_operation (var_usedSize.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)).divide_operation (var_bankSize, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)) ;
        enumerator_133662.gotoNextObject () ;
      }
      inCompiler->printMessage (var_verboseMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3787)) ;
    }
  }
  const enumGalgasBool test_46 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3791)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_46) {
    {
    routine_ipic_31__38_PrintDurations (ioArgument_ioListFileContents, var_blockDurationMap, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3792)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'enterGoto2block'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterGoto_32_block (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                 GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.reader_hasKey (GALGAS_string ("_computed_goto_2") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 423)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 423)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 424)) ;
    GALGAS_uint var_blockIndex ;
    constinArgument_inSymbolTable.method_searchKey (GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 425)), var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 425)) ;
    GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 426)) ;
    categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 427)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'enterGoto4block'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterGoto_34_block (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                 GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.reader_hasKey (GALGAS_string ("_computed_goto_4") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 441)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 441)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 442)) ;
    GALGAS_uint var_blockIndex ;
    constinArgument_inSymbolTable.method_searchKey (GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 443)), var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 443)) ;
    GALGAS_ipic_31__38_Block var_b = constinArgument_inBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 444)) ;
    categoryMethod_enterReferencedLabels (var_b, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 445)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'instructionListOptimization'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_instructionListOptimization (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                          const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                          const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                          const GALGAS_ipic_31__38_SequentialInstructionList constinArgument_inInstructionList,
                                          const GALGAS_lstring constinArgument_inBlockLabel,
                                          GALGAS_bool & outArgument_outOptimizationDone,
                                          GALGAS_string & ioArgument_ioListFileContents,
                                          GALGAS_ipic_31__38_SequentialInstructionList & outArgument_outOptimizedInstructionList,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizationDone.drop () ; // Release 'out' argument
  outArgument_outOptimizedInstructionList.drop () ; // Release 'out' argument
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outOptimizedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 906)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_34477 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_34477.hasCurrentObject ()) {
    GALGAS_bool var_optimizationDone ;
    GALGAS_ipic_31__38_SequentialInstruction var_optimizedInstruction ;
    GALGAS_bool var_NOPsubstitution ;
    callCategoryMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_34477.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimizationDone, ioArgument_ioListFileContents, var_optimizedInstruction, var_NOPsubstitution, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 908)) ;
    const enumGalgasBool test_0 = var_optimizationDone.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outOptimizationDone = GALGAS_bool (true) ;
    }
    const enumGalgasBool test_1 = var_NOPsubstitution.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 921)).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outOptimizedInstructionList.addAssign_operation (var_optimizedInstruction, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 922)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 922)) ;
    }
    enumerator_34477.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'ipic18OptimizeBlocks'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_OptimizeBlocks (GALGAS_string & ioArgument_ioListFileContents,
                                         GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optimizeFlagStruct var_optimizeFlagStruct = GALGAS_optimizeFlagStruct::constructor_new (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.reader_value ()).reader_containsCharacter (GALGAS_char (TO_UNICODE (69)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1078)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1078)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.reader_value ()).reader_containsCharacter (GALGAS_char (TO_UNICODE (82)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1079)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1079)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.reader_value ()).reader_containsCharacter (GALGAS_char (TO_UNICODE (74)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1080)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1080)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.reader_value ()).reader_containsCharacter (GALGAS_char (TO_UNICODE (77)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1081)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1081)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.reader_value ()).reader_containsCharacter (GALGAS_char (TO_UNICODE (73)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1082)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1082)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.reader_value ()).reader_containsCharacter (GALGAS_char (TO_UNICODE (105)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1083)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1083)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.reader_value ()).reader_containsCharacter (GALGAS_char (TO_UNICODE (101)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1084)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1084))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1077)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("BLOCK REPRESENTATION OPTIMIZATION").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1090)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1090))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1090)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Optimization flags:\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1091)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [D] Dead code elimination: always enabled\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1093)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [E] Empty routine elimination: ").add_operation (categoryReader_flagValue (var_optimizeFlagStruct.mAttribute_mRemoveEmptyRoutine, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [e] In Computed RCALL, empty routine call replaced by BLANK: ").add_operation (categoryReader_flagValue (var_optimizeFlagStruct.mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [I] Call to one instruction routine replaced by instruction: ").add_operation (categoryReader_flagValue (var_optimizeFlagStruct.mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [i] In Computed RCALL, rcall to one instruction routine replaced by instruction: ").add_operation (categoryReader_flagValue (var_optimizeFlagStruct.mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1097)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1097)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1097))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1097)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [J] JSR followed by RETURN replaced by JUMP: ").add_operation (categoryReader_flagValue (var_optimizeFlagStruct.mAttribute_mJSRfollowedByRETreplacedByJUMP, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1098)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1098)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1098))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1098)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [M] MOVLW followed by RETURN replaced by RETLW: ").add_operation (categoryReader_flagValue (var_optimizeFlagStruct.mAttribute_mMOVLWfollowedByRETreplacedByRETLW, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [P] JUMP propagation: always enabled\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [R] Call to RETLW replaced by MOVLW: ").add_operation (categoryReader_flagValue (var_optimizeFlagStruct.mAttribute_mJSRtoRETLWreplacedByMOVLW, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [U] Useless test elimination: always enabled\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Optimizations:\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)) ;
  }
  GALGAS_bool var_optimizationDone = GALGAS_bool (true) ;
  GALGAS_uint var_optimizationPass = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedBlockList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)).isValid ()) {
    uint32_t variant_43414 = ioArgument_ioGeneratedBlockList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)).uintValue () ;
    bool loop_43414 = true ;
    while (loop_43414) {
      loop_43414 = var_optimizationDone.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas", 1110)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1110)).isValid () ;
      if (loop_43414) {
        loop_43414 = var_optimizationDone.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas", 1110)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1110)).boolValue () ;
      }
      if (loop_43414 && (0 == variant_43414)) {
        loop_43414 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)) ;
      }
      if (loop_43414) {
        variant_43414 -- ;
        var_optimizationDone = GALGAS_bool (false) ;
        var_optimizationPass = var_optimizationPass.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1112)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n"
          "--- Pass ").add_operation (var_optimizationPass.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)).add_operation (ioArgument_ioGeneratedBlockList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)).reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)).add_operation (GALGAS_string (" blocks)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1113))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)) ;
        GALGAS_uint var_blockCountBeforeOptimization = ioArgument_ioGeneratedBlockList.reader_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 1114)) ;
        const enumGalgasBool test_1 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("  Pass ").add_operation (var_optimizationPass.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).add_operation (var_blockCountBeforeOptimization.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).add_operation (GALGAS_string (" blocks.\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)) ;
        }
        GALGAS_symbolTableForBlockOptimization var_symbolTable = GALGAS_symbolTableForBlockOptimization::constructor_emptyMap (SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)) ;
        cEnumerator_ipic_31__38_BlockList enumerator_44066 (ioArgument_ioGeneratedBlockList, kEnumeration_up) ;
        GALGAS_uint index_44038 ((uint32_t) 0) ;
        while (enumerator_44066.hasCurrentObject ()) {
          {
          var_symbolTable.modifier_insertKey (enumerator_44066.current_mBlock (HERE).mAttribute_mLabel, index_44038, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)) ;
          }
          enumerator_44066.gotoNextObject () ;
          index_44038.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1120)) ;
        }
        GALGAS_stringset var_referencedBlockSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_optimize_block.galgas", 1124)) ;
        cEnumerator_ipic_31__38_BlockList enumerator_44297 (ioArgument_ioGeneratedBlockList, kEnumeration_up) ;
        while (enumerator_44297.hasCurrentObject ()) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_44297.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1126)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            categoryMethod_enterReferencedLabels (enumerator_44297.current_mBlock (HERE), var_symbolTable, ioArgument_ioGeneratedBlockList, var_referencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1127)) ;
          }
          enumerator_44297.gotoNextObject () ;
        }
        GALGAS_ipic_31__38_BlockList var_optimizedBlockList = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 1135)) ;
        cEnumerator_ipic_31__38_BlockList enumerator_44664 (ioArgument_ioGeneratedBlockList, kEnumeration_up) ;
        while (enumerator_44664.hasCurrentObject ()) {
          const enumGalgasBool test_3 = var_referencedBlockSet.reader_hasKey (enumerator_44664.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1137)).operator_or (GALGAS_bool (kIsNotEqual, enumerator_44664.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1137)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1137)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_ipic_31__38_Block var_optimizedBlock ;
            categoryMethod_optimize (enumerator_44664.current_mBlock (HERE), var_symbolTable, var_optimizeFlagStruct, ioArgument_ioGeneratedBlockList, var_optimizationDone, ioArgument_ioListFileContents, var_optimizedBlock, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1138)) ;
            var_optimizedBlockList.addAssign_operation (var_optimizedBlock  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1146)) ;
          }else if (kBoolFalse == test_3) {
            ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  [D] ").add_operation (enumerator_44664.current_mBlock (HERE).mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1148)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1148)).add_operation (GALGAS_string (": not referenced, deleted\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1148))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1148)) ;
            var_optimizationDone = GALGAS_bool (true) ;
          }
          enumerator_44664.gotoNextObject () ;
        }
        ioArgument_ioGeneratedBlockList = var_optimizedBlockList ;
      }
    }
  }
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  No optimization.\n"
    "\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1154)) ;
  const enumGalgasBool test_4 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1156)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'buildOrderedGraph'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedGraph (GALGAS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                const GALGAS_string constinArgument_inSourceFileName,
                                GALGAS_string & ioArgument_ioListFileContents,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("BLOCK ORDERING OPTIMIZATION").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Block ordering optimization:\n")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 376)) ;
  GALGAS_uint var_n = function_blockDiscontinuityCount (ioArgument_ioBlockList, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 377)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  count before optimization: ").add_operation (var_n.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Block ordering optimization... ")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 381)) ;
  }
  GALGAS_symbolTableForBlockOptimization var_symbolTable = GALGAS_symbolTableForBlockOptimization::constructor_emptyMap (SOURCE_FILE ("ipic18_block_ordering.galgas", 384)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_13233 (ioArgument_ioBlockList, kEnumeration_up) ;
  GALGAS_uint index_13214 ((uint32_t) 0) ;
  while (enumerator_13233.hasCurrentObject ()) {
    {
    var_symbolTable.modifier_insertKey (enumerator_13233.current_mBlock (HERE).mAttribute_mLabel, index_13214, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 386)) ;
    }
    enumerator_13233.gotoNextObject () ;
    index_13214.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 385)) ;
  }
  GALGAS_blockInvocationGraph var_g = GALGAS_blockInvocationGraph::constructor_emptyGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 389)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_13385 (ioArgument_ioBlockList, kEnumeration_up) ;
  while (enumerator_13385.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13385.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 391)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      var_g.modifier_addNode (enumerator_13385.current_mBlock (HERE).mAttribute_mLabel, enumerator_13385.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 392)) ;
      }
      callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_13385.current_mBlock (HERE).mAttribute_mTerminator.ptr (), enumerator_13385.current_mBlock (HERE).mAttribute_mLabel, var_g, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 393)) ;
    }
    enumerator_13385.gotoNextObject () ;
  }
  GALGAS_lstringlist var_nodeList ;
  GALGAS_stringlist joker_13636 ; // Joker input parameter
  var_g.method_nodesWithNoPredecessor (joker_13636, var_nodeList COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 397)) ;
  GALGAS_stringlist var_newOrderedLabelList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 398)) ;
  GALGAS_stringset var_visitedNodeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_block_ordering.galgas", 399)) ;
  GALGAS_clusterList var_clusterList = GALGAS_clusterList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 400)) ;
  cEnumerator_lstringlist enumerator_13826 (var_nodeList, kEnumeration_up) ;
  while (enumerator_13826.hasCurrentObject ()) {
    GALGAS_blockInvocationGraph var_gg = var_g.reader_subgraphFromNodes (GALGAS_lstringlist::constructor_listWithValue (enumerator_13826.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 403)), var_visitedNodeSet, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 402)) ;
    cEnumerator_stringlist enumerator_13983 (var_gg.reader_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 406)), kEnumeration_up) ;
    while (enumerator_13983.hasCurrentObject ()) {
      var_visitedNodeSet.addAssign_operation (enumerator_13983.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 407)) ;
      enumerator_13983.gotoNextObject () ;
    }
    {
    var_gg.modifier_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas", 409)) ;
    }
    GALGAS_stringlist var_partialOrderedLabelList ;
    GALGAS_lstringlist joker_14171_3 ; // Joker input parameter
    GALGAS_stringlist joker_14171_2 ; // Joker input parameter
    GALGAS_lstringlist joker_14171_1 ; // Joker input parameter
    var_gg.reader_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 410)).method_depthFirstTopologicalSort (var_partialOrderedLabelList, joker_14171_3, joker_14171_2, joker_14171_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 410)) ;
    var_newOrderedLabelList.dotAssign_operation (var_partialOrderedLabelList  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 414)) ;
    GALGAS_ipic_31__38_BlockList var_cluster = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 415)) ;
    cEnumerator_stringlist enumerator_14315 (var_partialOrderedLabelList, kEnumeration_up) ;
    while (enumerator_14315.hasCurrentObject ()) {
      GALGAS_uint var_blockIndex ;
      var_symbolTable.method_searchKey (enumerator_14315.current_mValue (HERE).reader_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 417)), var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 417)) ;
      GALGAS_ipic_31__38_Block var_b = ioArgument_ioBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 418)) ;
      var_cluster.addAssign_operation (var_b  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 419)) ;
      enumerator_14315.gotoNextObject () ;
    }
    var_clusterList.addAssign_operation (var_cluster  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 421)) ;
    enumerator_13826.gotoNextObject () ;
  }
  cEnumerator_ipic_31__38_BlockList enumerator_14620 (ioArgument_ioBlockList, kEnumeration_up) ;
  while (enumerator_14620.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_14620.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 425)))).operator_and (var_visitedNodeSet.reader_hasKey (enumerator_14620.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 426)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas", 426)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 425)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_blockInvocationGraph var_gg = var_g.reader_subgraphFromNodes (GALGAS_lstringlist::constructor_listWithValue (enumerator_14620.current_mBlock (HERE).mAttribute_mLabel  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 428)), var_visitedNodeSet, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 427)) ;
      cEnumerator_stringlist enumerator_14920 (var_gg.reader_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 431)), kEnumeration_up) ;
      while (enumerator_14920.hasCurrentObject ()) {
        var_visitedNodeSet.addAssign_operation (enumerator_14920.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 432)) ;
        enumerator_14920.gotoNextObject () ;
      }
      {
      var_gg.modifier_removeEdgesToNode (enumerator_14620.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 434)) ;
      }
      {
      var_gg.modifier_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas", 435)) ;
      }
      GALGAS_stringlist var_partialOrderedLabelList ;
      GALGAS_lstringlist joker_15169_3 ; // Joker input parameter
      GALGAS_stringlist joker_15169_2 ; // Joker input parameter
      GALGAS_lstringlist joker_15169_1 ; // Joker input parameter
      var_gg.reader_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 436)).method_depthFirstTopologicalSort (var_partialOrderedLabelList, joker_15169_3, joker_15169_2, joker_15169_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 436)) ;
      var_newOrderedLabelList.dotAssign_operation (var_partialOrderedLabelList  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 440)) ;
      GALGAS_ipic_31__38_BlockList var_cluster = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 441)) ;
      cEnumerator_stringlist enumerator_15321 (var_partialOrderedLabelList, kEnumeration_up) ;
      while (enumerator_15321.hasCurrentObject ()) {
        GALGAS_uint var_blockIndex ;
        var_symbolTable.method_searchKey (enumerator_15321.current_mValue (HERE).reader_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 443)), var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 443)) ;
        GALGAS_ipic_31__38_Block var_b = ioArgument_ioBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 444)) ;
        var_cluster.addAssign_operation (var_b  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 445)) ;
        enumerator_15321.gotoNextObject () ;
      }
      var_clusterList.addAssign_operation (var_cluster  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 447)) ;
    }
    enumerator_14620.gotoNextObject () ;
  }
  GALGAS_ipic_31__38_BlockList var_orderedBlockList = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 451)) ;
  GALGAS_bool var_continue = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_15733 (ioArgument_ioBlockList, kEnumeration_up) ;
  bool bool_3 = var_continue.isValidAndTrue () ;
  if (enumerator_15733.hasCurrentObject () && bool_3) {
    while (enumerator_15733.hasCurrentObject () && bool_3) {
      var_continue = GALGAS_bool (kIsNotEqual, enumerator_15733.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 455)))) ;
      const enumGalgasBool test_4 = var_continue.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_orderedBlockList.addAssign_operation (enumerator_15733.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 457)) ;
      }
      enumerator_15733.gotoNextObject () ;
      if (enumerator_15733.hasCurrentObject ()) {
        bool_3 = var_continue.isValidAndTrue () ;
      }
    }
  }
  cEnumerator_stringlist enumerator_15926 (var_newOrderedLabelList, kEnumeration_up) ;
  while (enumerator_15926.hasCurrentObject ()) {
    GALGAS_uint var_blockIndex ;
    var_symbolTable.method_searchKey (enumerator_15926.current_mValue (HERE).reader_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 462)), var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 462)) ;
    GALGAS_ipic_31__38_Block var_b = ioArgument_ioBlockList.reader_mBlockAtIndex (var_blockIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 463)) ;
    var_orderedBlockList.addAssign_operation (var_b  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 464)) ;
    enumerator_15926.gotoNextObject () ;
  }
  GALGAS_uint var_insertionIndex = var_orderedBlockList.reader_length (SOURCE_FILE ("ipic18_block_ordering.galgas", 467)) ;
  var_continue = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_16242 (ioArgument_ioBlockList, kEnumeration_down) ;
  bool bool_5 = var_continue.isValidAndTrue () ;
  if (enumerator_16242.hasCurrentObject () && bool_5) {
    while (enumerator_16242.hasCurrentObject () && bool_5) {
      var_continue = GALGAS_bool (kIsNotEqual, enumerator_16242.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 470)))) ;
      const enumGalgasBool test_6 = var_continue.boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        var_orderedBlockList.modifier_insertAtIndex (enumerator_16242.current_mBlock (HERE), var_insertionIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 472)) ;
        }
      }
      enumerator_16242.gotoNextObject () ;
      if (enumerator_16242.hasCurrentObject ()) {
        bool_5 = var_continue.isValidAndTrue () ;
      }
    }
  }
  GALGAS_uint var_p = function_blockDiscontinuityCount (var_orderedBlockList, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 476)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  count after optimization: ").add_operation (var_p.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)) ;
  const enumGalgasBool test_7 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_7) {
    inCompiler->printMessage (var_n.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (var_p.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (GALGAS_string (".\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (gOption_piccolo_5F_options_generateGraphvizFiles.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_bool joker_16854 ; // Joker input parameter
    var_g.reader_graphviz (SOURCE_FILE ("ipic18_block_ordering.galgas", 483)).method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".blockOrderingConstraints.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 483)), joker_16854, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 483)) ;
  }
  GALGAS_stringset var_newSymbolSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_block_ordering.galgas", 486)) ;
  GALGAS_bool var_ok = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_16980 (var_orderedBlockList, kEnumeration_up) ;
  while (enumerator_16980.hasCurrentObject ()) {
    const enumGalgasBool test_9 = var_newSymbolSet.reader_hasKey (enumerator_16980.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 489)).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_string var_s = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_16980.current_mBlock (HERE).mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 490)).add_operation (GALGAS_string ("\" is duplicated"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 491)) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 492)), var_s  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 492)) ;
      ioArgument_ioListFileContents.dotAssign_operation (var_s.add_operation (GALGAS_string (".\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 493))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 493)) ;
      var_ok = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_9) {
      var_newSymbolSet.addAssign_operation (enumerator_16980.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 496)) ;
    }
    enumerator_16980.gotoNextObject () ;
  }
  cEnumerator_symbolTableForBlockOptimization enumerator_17333 (var_symbolTable, kEnumeration_up) ;
  while (enumerator_17333.hasCurrentObject ()) {
    const enumGalgasBool test_10 = var_newSymbolSet.reader_hasKey (enumerator_17333.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 500)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas", 500)).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_string var_s = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17333.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 501)).add_operation (GALGAS_string ("\" is missing"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 502)) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 503)), var_s  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 503)) ;
      ioArgument_ioListFileContents.dotAssign_operation (var_s.add_operation (GALGAS_string (".\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 504))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 504)) ;
      var_ok = GALGAS_bool (false) ;
    }
    enumerator_17333.gotoNextObject () ;
  }
  const enumGalgasBool test_11 = var_ok.boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioBlockList = var_orderedBlockList ;
    {
    routine_displayBlockList (GALGAS_string ("ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_orderedBlockList, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 511)) ;
    }
  }else if (kBoolFalse == test_11) {
    GALGAS_string var_s = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: reordered block list is inconsistent, it is not used anymore") ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 514)), var_s  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 514)) ;
    ioArgument_ioListFileContents.dotAssign_operation (var_s.add_operation (GALGAS_string (".\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 515))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 515)) ;
    {
    routine_displayBlockList (GALGAS_string ("INCONSISTENT ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION (not used)"), ioArgument_ioListFileContents, var_orderedBlockList, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 516)) ;
    }
  }
  const enumGalgasBool test_12 = var_ok.boolEnum () ;
  if (kBoolTrue == test_12) {
    {
    routine_perform_5F_cluster_5F_ordering (var_clusterList, ioArgument_ioBlockList, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 520)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildInvocationGraph'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildInvocationGraph (const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                   GALGAS_string & outArgument_outGraphVizString,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGraphVizString.drop () ; // Release 'out' argument
  outArgument_outGraphVizString = GALGAS_string ("digraph G {\n") ;
  outArgument_outGraphVizString.dotAssign_operation (GALGAS_string ("  node [fontname=courier]\n")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 534)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_18605 (constinArgument_inBlockList, kEnumeration_up) ;
  while (enumerator_18605.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_18605.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 536)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (enumerator_18605.current_mBlock (HERE).mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)).add_operation (GALGAS_string ("\" [shape=rectangle]\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)) ;
    }
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_18790 (enumerator_18605.current_mBlock (HERE).mAttribute_mInstructionList, kEnumeration_up) ;
    while (enumerator_18790.hasCurrentObject ()) {
      callCategoryMethod_buildInstructionInvocationGraph ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_18790.current_mInstruction (HERE).ptr (), enumerator_18605.current_mBlock (HERE).mAttribute_mLabel, outArgument_outGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 540)) ;
      enumerator_18790.gotoNextObject () ;
    }
    callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_18605.current_mBlock (HERE).mAttribute_mTerminator.ptr (), enumerator_18605.current_mBlock (HERE).mAttribute_mLabel, outArgument_outGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 542)) ;
    enumerator_18605.gotoNextObject () ;
  }
  outArgument_outGraphVizString.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 544)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'blockDiscontinuityCount'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_blockDiscontinuityCount (GALGAS_ipic_31__38_BlockList inArgument_inBlockList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outResult ; // Returned variable
  result_outResult = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_BlockList enumerator_19229 (inArgument_inBlockList, kEnumeration_up) ;
  GALGAS_uint index_19210 ((uint32_t) 0) ;
  while (enumerator_19229.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_19229.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 554)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_nextBlockLabel ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, index_19210.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 556)).objectCompare (inArgument_inBlockList.reader_length (SOURCE_FILE ("ipic18_block_ordering.galgas", 556)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_nextBlockLabel = inArgument_inBlockList.reader_mBlockAtIndex (index_19210.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 557)).mAttribute_mLabel.mAttribute_string ;
      }else if (kBoolFalse == test_1) {
        var_nextBlockLabel = GALGAS_string::makeEmptyString () ;
      }
      const enumGalgasBool test_2 = callCategoryReader_needToInsertJumpInstruction ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_19229.current_mBlock (HERE).mAttribute_mTerminator.ptr (), var_nextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 561)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outResult.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 562)) ;
      }
    }
    enumerator_19229.gotoNextObject () ;
    index_19210.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 553)) ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_blockDiscontinuityCount [2] = {
  & kTypeDescriptor_GALGAS_ipic_31__38_BlockList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_blockDiscontinuityCount (C_Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* §§ inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_BlockList operand0 = GALGAS_ipic_31__38_BlockList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_blockDiscontinuityCount (operand0,
                                           inCompiler
                                           COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_blockDiscontinuityCount ("blockDiscontinuityCount",
                                                                         functionWithGenericHeader_blockDiscontinuityCount,
                                                                         & kTypeDescriptor_GALGAS_uint,
                                                                         1,
                                                                         functionArgs_blockDiscontinuityCount) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'ipic18OptimizeBlockOrdering'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_OptimizeBlockOrdering (const GALGAS_string constinArgument_inSourceFileName,
                                                GALGAS_string & ioArgument_ioListFileContents,
                                                GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (gOption_piccolo_5F_options_generateGraphvizFiles.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_invocationGraph ;
    {
    routine_buildInvocationGraph (ioArgument_ioGeneratedBlockList, var_invocationGraph, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 575)) ;
    }
    GALGAS_bool joker_20110 ; // Joker input parameter
    var_invocationGraph.method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".blockInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 576)), joker_20110, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 576)) ;
  }
  GALGAS_bool var_optimize = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.reader_value ()).reader_containsCharacter (GALGAS_char (TO_UNICODE (66)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 580)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 579)) ;
  const enumGalgasBool test_1 = var_optimize.boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    routine_buildOrderedGraph (ioArgument_ioGeneratedBlockList, constinArgument_inSourceFileName, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 582)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'sortKey'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_sortKey (const GALGAS_clusterList & constinArgument_inClusterList,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outKey ; // Returned variable
  result_outKey = GALGAS_string::makeEmptyString () ;
  cEnumerator_clusterList enumerator_600 (constinArgument_inClusterList, kEnumeration_up) ;
  while (enumerator_600.hasCurrentObject ()) {
    result_outKey.dotAssign_operation (enumerator_600.current_mBlockList (HERE).reader_mBlockAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 23)).mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 23)) ;
    if (enumerator_600.hasNextObject ()) {
      result_outKey.dotAssign_operation (GALGAS_string (".")  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 25)) ;
    }
    enumerator_600.gotoNextObject () ;
  }
//---
  return result_outKey ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_sortKey [2] = {
  & kTypeDescriptor_GALGAS_clusterList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_sortKey (C_Compiler * inCompiler,
                                                        const cObjectArray & inEffectiveParameterArray,
                                                        const GALGAS_location & /* §§ inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_clusterList operand0 = GALGAS_clusterList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_sortKey (operand0,
                           inCompiler
                           COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_sortKey ("sortKey",
                                                         functionWithGenericHeader_sortKey,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         1,
                                                         functionArgs_sortKey) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'perform_cluster_ordering'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_perform_5F_cluster_5F_ordering (const GALGAS_clusterList constinArgument_inInitialClusterList,
                                             GALGAS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                             GALGAS_string & ioArgument_ioListFileContents,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_optimize = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.reader_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.reader_value ()).reader_containsCharacter (GALGAS_char (TO_UNICODE (66)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 35)).operator_and (GALGAS_bool (gOption_piccolo_5F_options_doNotReorderCluster.reader_value ()).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 37)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) ;
  const enumGalgasBool test_0 = var_optimize.operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 38)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Option '--").add_operation (GALGAS_string (gOption_piccolo_5F_options_doNotReorderCluster.reader_string ()), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)).add_operation (GALGAS_string ("': this optimization is not performed.n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_clusterCount = constinArgument_inInitialClusterList.reader_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 41)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("CLUSTER ORDERING OPTIMIZATION").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_clusterCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_s = GALGAS_string ("Cluster ordering optimization (").add_operation (var_clusterCount.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (GALGAS_string (" cluster"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (GALGAS_string ("):\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)) ;
    ioArgument_ioListFileContents.dotAssign_operation (var_s.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 46))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 46)) ;
    const enumGalgasBool test_3 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 49)) ;
    }
    GALGAS_clusterList var_clusterList = constinArgument_inInitialClusterList ;
    GALGAS_neededConversionForClusterOrder var_neededConversionForClusterOrder = GALGAS_neededConversionForClusterOrder::constructor_emptyMap (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 53)) ;
    GALGAS_bool var_continue = GALGAS_bool (true) ;
    GALGAS_uint var_pass = GALGAS_uint ((uint32_t) 0U) ;
    if (var_clusterList.reader_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).multiply_operation (var_clusterList.reader_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).isValid ()) {
      uint32_t variant_2154 = var_clusterList.reader_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).multiply_operation (var_clusterList.reader_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).uintValue () ;
      bool loop_2154 = true ;
      while (loop_2154) {
        loop_2154 = var_continue.isValid () ;
        if (loop_2154) {
          loop_2154 = var_continue.boolValue () ;
        }
        if (loop_2154 && (0 == variant_2154)) {
          loop_2154 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)) ;
        }
        if (loop_2154) {
          variant_2154 -- ;
          var_pass.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 58)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Pass ").add_operation (var_pass.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)) ;
          GALGAS_ipic_31__38_BlockList var_workingBlockList = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 61)) ;
          GALGAS_symbolTableForClusterOrdering var_symbolTable = GALGAS_symbolTableForClusterOrdering::constructor_emptyMap (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 62)) ;
          cEnumerator_clusterList enumerator_2489 (var_clusterList, kEnumeration_up) ;
          GALGAS_uint index_2470 ((uint32_t) 0) ;
          while (enumerator_2489.hasCurrentObject ()) {
            var_workingBlockList.dotAssign_operation (enumerator_2489.current_mBlockList (HERE)  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 64)) ;
            cEnumerator_ipic_31__38_BlockList enumerator_2575 (enumerator_2489.current_mBlockList (HERE), kEnumeration_up) ;
            while (enumerator_2575.hasCurrentObject ()) {
              {
              var_symbolTable.modifier_insertKey (enumerator_2575.current_mBlock (HERE).mAttribute_mLabel, index_2470, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 66)) ;
              }
              enumerator_2575.gotoNextObject () ;
            }
            enumerator_2489.gotoNextObject () ;
            index_2470.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 63)) ;
          }
          GALGAS_uint var_insertionIdx = var_workingBlockList.reader_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 70)) ;
          cEnumerator_ipic_31__38_BlockList enumerator_2803 (ioArgument_ioBlockList, kEnumeration_down) ;
          bool bool_4 = var_continue.isValidAndTrue () ;
          if (enumerator_2803.hasCurrentObject () && bool_4) {
            while (enumerator_2803.hasCurrentObject () && bool_4) {
              var_continue = GALGAS_bool (kIsNotEqual, enumerator_2803.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 72)))) ;
              const enumGalgasBool test_5 = var_continue.boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                var_symbolTable.modifier_insertKey (enumerator_2803.current_mBlock (HERE).mAttribute_mLabel, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 74)) ;
                }
                {
                var_workingBlockList.modifier_insertAtIndex (enumerator_2803.current_mBlock (HERE), var_insertionIdx, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 75)) ;
                }
              }
              enumerator_2803.gotoNextObject () ;
              if (enumerator_2803.hasCurrentObject ()) {
                bool_4 = var_continue.isValidAndTrue () ;
              }
            }
          }
          GALGAS_branchOverflowMap var_overflowMap ;
          {
          routine_ipic_31__38_RelativeBranchOverflow (var_workingBlockList, ioArgument_ioBlockList, var_overflowMap, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 79)) ;
          }
          GALGAS_uint var_overflowCount = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_branchOverflowMap enumerator_3303 (var_overflowMap, kEnumeration_up) ;
          while (enumerator_3303.hasCurrentObject ()) {
            cEnumerator_stringlist enumerator_3331 (enumerator_3303.current_mList (HERE), kEnumeration_up) ;
            while (enumerator_3331.hasCurrentObject ()) {
              var_overflowCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 87)) ;
              GALGAS_uint var_sourceCluster ;
              var_symbolTable.method_searchKey (enumerator_3303.current_key (HERE).reader_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)), var_sourceCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)) ;
              GALGAS_uint var_targetCluster ;
              var_symbolTable.method_searchKey (enumerator_3331.current_mValue (HERE).reader_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 89)), var_targetCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 89)) ;
              ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (enumerator_3303.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (var_sourceCluster.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (") --> "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (enumerator_3331.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (var_targetCluster.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)) ;
              enumerator_3331.gotoNextObject () ;
            }
            enumerator_3303.gotoNextObject () ;
          }
          {
          var_neededConversionForClusterOrder.modifier_insertKey (function_sortKey (var_clusterList, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 94)).reader_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 94)), var_overflowCount, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 93)) ;
          }
          const enumGalgasBool test_6 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string var_s = GALGAS_string ("  Pass ").add_operation (var_pass.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)) ;
            const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_overflowCount.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_7) {
              var_s.dotAssign_operation (GALGAS_string ("no branch overflow")  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 100)) ;
            }else if (kBoolFalse == test_7) {
              const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_overflowCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_8) {
                var_s.dotAssign_operation (GALGAS_string ("1 branch overflow")  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 102)) ;
              }else if (kBoolFalse == test_8) {
                var_s.dotAssign_operation (var_overflowCount.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)).add_operation (GALGAS_string (" branch overflows"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)) ;
              }
            }
            inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 106)) ;
          }
          GALGAS_bool var_correctionLoop = GALGAS_bool (true) ;
          cEnumerator_branchOverflowMap enumerator_4221 (var_overflowMap, kEnumeration_up) ;
          bool bool_9 = var_correctionLoop.isValidAndTrue () ;
          if (enumerator_4221.hasCurrentObject () && bool_9) {
            while (enumerator_4221.hasCurrentObject () && bool_9) {
              cEnumerator_stringlist enumerator_4270 (enumerator_4221.current_mList (HERE), kEnumeration_up) ;
              bool bool_10 = var_correctionLoop.isValidAndTrue () ;
              if (enumerator_4270.hasCurrentObject () && bool_10) {
                while (enumerator_4270.hasCurrentObject () && bool_10) {
                  GALGAS_uint var_targetCluster ;
                  var_symbolTable.method_searchKey (enumerator_4270.current_mValue (HERE).reader_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 112)), var_targetCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 112)) ;
                  const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_targetCluster.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 113)))).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    GALGAS_uint var_sourceCluster ;
                    var_symbolTable.method_searchKey (enumerator_4221.current_key (HERE).reader_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 114)), var_sourceCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 114)) ;
                    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_sourceCluster.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 115)).objectCompare (var_targetCluster)).boolEnum () ;
                    if (kBoolTrue == test_12) {
                      var_correctionLoop = GALGAS_bool (false) ;
                      var_continue = GALGAS_bool (true) ;
                      GALGAS_ipic_31__38_BlockList var_last ;
                      {
                      var_clusterList.modifier_removeAtIndex (var_last, var_targetCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 118)) ;
                      }
                      GALGAS_ipic_31__38_BlockList var_first ;
                      {
                      var_clusterList.modifier_removeAtIndex (var_first, var_sourceCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 119)) ;
                      }
                      {
                      var_clusterList.modifier_insertAtIndex (var_first.add_operation (var_last, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)), var_sourceCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)) ;
                      }
                      GALGAS_string var_m = GALGAS_string ("merge #").add_operation (var_targetCluster.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (GALGAS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (var_sourceCluster.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)) ;
                      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  --> ").add_operation (var_m, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)) ;
                      const enumGalgasBool test_13 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
                      if (kBoolTrue == test_13) {
                        inCompiler->printMessage (GALGAS_string (" -> ").add_operation (var_m, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 124))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 124)) ;
                      }
                    }else if (kBoolFalse == test_12) {
                      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_sourceCluster.objectCompare (var_targetCluster.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 126)))).boolEnum () ;
                      if (kBoolTrue == test_14) {
                        var_correctionLoop = GALGAS_bool (false) ;
                        var_continue = GALGAS_bool (true) ;
                        GALGAS_ipic_31__38_BlockList var_last ;
                        {
                        var_clusterList.modifier_removeAtIndex (var_last, var_sourceCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 129)) ;
                        }
                        GALGAS_ipic_31__38_BlockList var_first ;
                        {
                        var_clusterList.modifier_removeAtIndex (var_first, var_targetCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 130)) ;
                        }
                        {
                        var_clusterList.modifier_insertAtIndex (var_first.add_operation (var_last, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)), var_targetCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)) ;
                        }
                        GALGAS_string var_m = GALGAS_string ("merge #").add_operation (var_sourceCluster.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (GALGAS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (var_targetCluster.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)) ;
                        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  --> ").add_operation (var_m, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)) ;
                        const enumGalgasBool test_15 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
                        if (kBoolTrue == test_15) {
                          inCompiler->printMessage (GALGAS_string (" -> ").add_operation (var_m, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 135))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 135)) ;
                        }
                      }else if (kBoolFalse == test_14) {
                        const enumGalgasBool test_16 = GALGAS_bool (kIsStrictInf, var_sourceCluster.objectCompare (var_targetCluster)).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          GALGAS_clusterList var_candidate = var_clusterList ;
                          GALGAS_ipic_31__38_BlockList var_b ;
                          {
                          var_candidate.modifier_removeAtIndex (var_b, var_targetCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 139)) ;
                          }
                          {
                          var_candidate.modifier_insertAtIndex (var_b, var_targetCluster.add_operation (var_sourceCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)) ;
                          }
                          const enumGalgasBool test_17 = var_neededConversionForClusterOrder.reader_hasKey (function_sortKey (var_candidate, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)).boolEnum () ;
                          if (kBoolTrue == test_17) {
                            var_clusterList = var_candidate ;
                            var_correctionLoop = GALGAS_bool (false) ;
                            var_continue = GALGAS_bool (true) ;
                            GALGAS_string var_m = GALGAS_string ("roll up [#").add_operation (var_targetCluster.add_operation (var_sourceCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (GALGAS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (var_targetCluster.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)) ;
                            ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  --> ").add_operation (var_m, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)) ;
                            const enumGalgasBool test_18 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
                            if (kBoolTrue == test_18) {
                              inCompiler->printMessage (GALGAS_string (" -> ").add_operation (var_m, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 148))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 148)) ;
                            }
                          }
                        }else if (kBoolFalse == test_16) {
                          const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_sourceCluster.objectCompare (var_targetCluster)).boolEnum () ;
                          if (kBoolTrue == test_19) {
                            GALGAS_clusterList var_candidate = var_clusterList ;
                            GALGAS_ipic_31__38_BlockList var_b ;
                            {
                            var_candidate.modifier_removeAtIndex (var_b, var_sourceCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 153)) ;
                            }
                            {
                            var_candidate.modifier_insertAtIndex (var_b, var_targetCluster.add_operation (var_sourceCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)) ;
                            }
                            const enumGalgasBool test_20 = var_neededConversionForClusterOrder.reader_hasKey (function_sortKey (var_candidate, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)).boolEnum () ;
                            if (kBoolTrue == test_20) {
                              var_clusterList = var_candidate ;
                              var_correctionLoop = GALGAS_bool (false) ;
                              var_continue = GALGAS_bool (true) ;
                              GALGAS_string var_m = GALGAS_string ("roll up [#").add_operation (var_targetCluster.reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (GALGAS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (var_targetCluster.add_operation (var_sourceCluster, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).reader_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)) ;
                              ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  --> ").add_operation (var_m, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)) ;
                              const enumGalgasBool test_21 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
                              if (kBoolTrue == test_21) {
                                inCompiler->printMessage (GALGAS_string (" -> ").add_operation (var_m, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 162))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 162)) ;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  enumerator_4270.gotoNextObject () ;
                  if (enumerator_4270.hasCurrentObject ()) {
                    bool_10 = var_correctionLoop.isValidAndTrue () ;
                  }
                }
              }
              enumerator_4221.gotoNextObject () ;
              if (enumerator_4221.hasCurrentObject ()) {
                bool_9 = var_correctionLoop.isValidAndTrue () ;
              }
            }
          }
          const enumGalgasBool test_22 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
          if (kBoolTrue == test_22) {
            inCompiler->printMessage (GALGAS_string (".\n")  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 170)) ;
          }
        }
      }
    }
    const enumGalgasBool test_23 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_23) {
      inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 174)) ;
    }
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 176)) ;
    GALGAS_ipic_31__38_BlockList var_newBlockList = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 178)) ;
    var_continue = GALGAS_bool (true) ;
    cEnumerator_ipic_31__38_BlockList enumerator_7731 (ioArgument_ioBlockList, kEnumeration_up) ;
    bool bool_24 = var_continue.isValidAndTrue () ;
    if (enumerator_7731.hasCurrentObject () && bool_24) {
      while (enumerator_7731.hasCurrentObject () && bool_24) {
        var_continue = GALGAS_bool (kIsNotEqual, enumerator_7731.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 182)))) ;
        const enumGalgasBool test_25 = var_continue.boolEnum () ;
        if (kBoolTrue == test_25) {
          var_newBlockList.addAssign_operation (enumerator_7731.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 184)) ;
        }
        enumerator_7731.gotoNextObject () ;
        if (enumerator_7731.hasCurrentObject ()) {
          bool_24 = var_continue.isValidAndTrue () ;
        }
      }
    }
    cEnumerator_clusterList enumerator_7926 (var_clusterList, kEnumeration_up) ;
    while (enumerator_7926.hasCurrentObject ()) {
      var_newBlockList.dotAssign_operation (enumerator_7926.current_mBlockList (HERE)  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 189)) ;
      enumerator_7926.gotoNextObject () ;
    }
    GALGAS_uint var_insertionIndex = var_newBlockList.reader_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 192)) ;
    var_continue = GALGAS_bool (true) ;
    cEnumerator_ipic_31__38_BlockList enumerator_8115 (ioArgument_ioBlockList, kEnumeration_down) ;
    bool bool_26 = var_continue.isValidAndTrue () ;
    if (enumerator_8115.hasCurrentObject () && bool_26) {
      while (enumerator_8115.hasCurrentObject () && bool_26) {
        var_continue = GALGAS_bool (kIsNotEqual, enumerator_8115.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 195)))) ;
        const enumGalgasBool test_27 = var_continue.boolEnum () ;
        if (kBoolTrue == test_27) {
          {
          var_newBlockList.modifier_insertAtIndex (enumerator_8115.current_mBlock (HERE), var_insertionIndex, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 197)) ;
          }
        }
        enumerator_8115.gotoNextObject () ;
        if (enumerator_8115.hasCurrentObject ()) {
          bool_26 = var_continue.isValidAndTrue () ;
        }
      }
    }
    ioArgument_ioBlockList = var_newBlockList ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'performRelativesResolution'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performRelativesResolution (const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                         GALGAS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                         GALGAS_uint & ioArgument_ioConversionCount,
                                         GALGAS_string & ioArgument_ioListFileContents,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList var_modifiedBlockList = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 56)) ;
  GALGAS_uint var_blockStartAddress = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1653 (ioArgument_ioBlockList, kEnumeration_up) ;
  GALGAS_uint index_1634 ((uint32_t) 0) ;
  while (enumerator_1653.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, index_1634.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 60)).objectCompare (ioArgument_ioBlockList.reader_length (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 60)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_nextBlockLabel = ioArgument_ioBlockList.reader_mBlockAtIndex (index_1634.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 61)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_0) {
      var_nextBlockLabel = GALGAS_string::makeEmptyString () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_1653.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 65)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_blockStartAddress = enumerator_1653.current_mBlock (HERE).mAttribute_mAddress ;
    }
    GALGAS_ipic_31__38_Block var_modifiedBlock ;
    categoryMethod_performRelativesResolution (enumerator_1653.current_mBlock (HERE), constinArgument_inSymbolTable, var_nextBlockLabel, var_blockStartAddress, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedBlock, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 68)) ;
    var_modifiedBlockList.addAssign_operation (var_modifiedBlock  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 76)) ;
    GALGAS_uint var_blockSize = categoryReader_blockSize (enumerator_1653.current_mBlock (HERE), var_nextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 77)) ;
    var_blockStartAddress = var_blockStartAddress.add_operation (var_blockSize, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 78)) ;
    enumerator_1653.gotoNextObject () ;
    index_1634.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 58)) ;
  }
  ioArgument_ioBlockList = var_modifiedBlockList ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'computeLabelAbsoluteAddressMap'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_computeLabelAbsoluteAddressMap (const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                             const GALGAS_ipic_31__38_BlockList constinArgument_inInitialBlockList,
                                             GALGAS_symbolTableForRelativesResolution & outArgument_outSymbolTable,
                                             GALGAS_uint & outArgument_outFreeAddress,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSymbolTable.drop () ; // Release 'out' argument
  outArgument_outFreeAddress.drop () ; // Release 'out' argument
  outArgument_outSymbolTable = GALGAS_symbolTableForRelativesResolution::constructor_emptyMap (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 105)) ;
  outArgument_outFreeAddress = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 106)) ;
  GALGAS_uint var_blockStartAddress = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_BlockList enumerator_3316 (constinArgument_inGeneratedBlockList, kEnumeration_up) ;
  GALGAS_uint index_3288 ((uint32_t) 0) ;
  while (enumerator_3316.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, index_3288.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 111)).objectCompare (constinArgument_inGeneratedBlockList.reader_length (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 111)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_nextBlockLabel = constinArgument_inGeneratedBlockList.reader_mBlockAtIndex (index_3288.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 112)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_0) {
      var_nextBlockLabel = GALGAS_string::makeEmptyString () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_3316.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 116)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_blockStartAddress = enumerator_3316.current_mBlock (HERE).mAttribute_mAddress ;
    }
    {
    outArgument_outSymbolTable.modifier_insertKey (enumerator_3316.current_mBlock (HERE).mAttribute_mLabel, var_blockStartAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 119)) ;
    }
    GALGAS_uint var_blockSize = categoryReader_blockSize (enumerator_3316.current_mBlock (HERE), var_nextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 120)) ;
    var_blockStartAddress = var_blockStartAddress.add_operation (var_blockSize, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 121)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_3316.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 122)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outFreeAddress = var_blockStartAddress ;
    }
    enumerator_3316.gotoNextObject () ;
    index_3288.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 109)) ;
  }
  cEnumerator_ipic_31__38_BlockList enumerator_3993 (constinArgument_inInitialBlockList, kEnumeration_up) ;
  while (enumerator_3993.hasCurrentObject ()) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_3993.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 128)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const enumGalgasBool test_4 = outArgument_outSymbolTable.reader_hasKey (enumerator_3993.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 129)).operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 129)).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        outArgument_outSymbolTable.modifier_insertKey (enumerator_3993.current_mBlock (HERE).mAttribute_mLabel, enumerator_3993.current_mBlock (HERE).mAttribute_mAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 130)) ;
        }
      }
    }
    enumerator_3993.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'ipic18RelativesResolution'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_RelativesResolution (GALGAS_string & ioArgument_ioListFileContents,
                                              GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Relative branch conversion to absolute:\n")  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 143)) ;
  }
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("RELATIVES RESOLUTION").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)) ;
  GALGAS_bool var_resolutionDone = GALGAS_bool (false) ;
  GALGAS_uint var_pass = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedBlockList.reader_length (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).isValid ()) {
    uint32_t variant_4819 = ioArgument_ioGeneratedBlockList.reader_length (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).uintValue () ;
    bool loop_4819 = true ;
    while (loop_4819) {
      loop_4819 = var_resolutionDone.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).isValid () ;
      if (loop_4819) {
        loop_4819 = var_resolutionDone.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).boolValue () ;
      }
      if (loop_4819 && (0 == variant_4819)) {
        loop_4819 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)) ;
      }
      if (loop_4819) {
        variant_4819 -- ;
        var_pass.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 153)) ;
        GALGAS_symbolTableForRelativesResolution var_symbolTable ;
        {
        GALGAS_uint joker_5092 ; // Joker input parameter
        routine_computeLabelAbsoluteAddressMap (ioArgument_ioGeneratedBlockList, GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 156)), var_symbolTable, joker_5092, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 154)) ;
        }
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n"
          "Pass ").add_operation (var_pass.reader_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)) ;
        GALGAS_uint var_conversionCount = GALGAS_uint ((uint32_t) 0U) ;
        {
        routine_performRelativesResolution (var_symbolTable, ioArgument_ioGeneratedBlockList, var_conversionCount, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 162)) ;
        }
        var_resolutionDone = GALGAS_bool (kIsEqual, var_conversionCount.objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        const enumGalgasBool test_1 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string var_s = GALGAS_string ("  Pass ").add_operation (var_pass.reader_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)) ;
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_conversionCount.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s.dotAssign_operation (GALGAS_string ("none.")  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 172)) ;
          }else if (kBoolFalse == test_2) {
            const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_conversionCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_3) {
              var_s.dotAssign_operation (GALGAS_string ("1 conversion")  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 174)) ;
            }else if (kBoolFalse == test_3) {
              var_s.dotAssign_operation (var_conversionCount.reader_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)).add_operation (GALGAS_string (" conversions"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)) ;
            }
          }
          inCompiler->printMessage (var_s.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 178))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 178)) ;
        }
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  No conversion.\n"
      "\n")  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 182)) ;
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 183)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'ipic18RelativeBranchOverflow'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_RelativeBranchOverflow (const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                 const GALGAS_ipic_31__38_BlockList constinArgument_inInitialBlockList,
                                                 GALGAS_branchOverflowMap & outArgument_outOverflowMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOverflowMap.drop () ; // Release 'out' argument
  GALGAS_symbolTableForRelativesResolution var_symbolTable ;
  {
  GALGAS_uint joker_7091 ; // Joker input parameter
  routine_computeLabelAbsoluteAddressMap (constinArgument_inBlockList, constinArgument_inInitialBlockList, var_symbolTable, joker_7091, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 226)) ;
  }
  outArgument_outOverflowMap = GALGAS_branchOverflowMap::constructor_emptyMap (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 233)) ;
  GALGAS_uint var_blockStartAddress = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_BlockList enumerator_7204 (constinArgument_inBlockList, kEnumeration_up) ;
  GALGAS_uint index_7185 ((uint32_t) 0) ;
  while (enumerator_7204.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, index_7185.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 237)).objectCompare (constinArgument_inBlockList.reader_length (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 237)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_nextBlockLabel = constinArgument_inBlockList.reader_mBlockAtIndex (index_7185.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 238)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_0) {
      var_nextBlockLabel = GALGAS_string::makeEmptyString () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_7204.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 242)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_blockStartAddress = enumerator_7204.current_mBlock (HERE).mAttribute_mAddress ;
    }
    categoryMethod_relativeBranchOverflow (enumerator_7204.current_mBlock (HERE), var_symbolTable, var_nextBlockLabel, var_blockStartAddress, outArgument_outOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 245)) ;
    GALGAS_uint var_blockSize = categoryReader_blockSize (enumerator_7204.current_mBlock (HERE), var_nextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 251)) ;
    var_blockStartAddress = var_blockStartAddress.add_operation (var_blockSize, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 252)) ;
    enumerator_7204.gotoNextObject () ;
    index_7185.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 235)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'generateLineWithCode'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateLineWithCode (const GALGAS_uint constinArgument_inAddress,
                                   const GALGAS_codeList constinArgument_inCode,
                                   const GALGAS_stringlist constinArgument_inIpicText,
                                   const GALGAS_uint constinArgument_inMin,
                                   const GALGAS_uint constinArgument_inMax,
                                   GALGAS_string & ioArgument_ioListFileContents,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_ipicText = constinArgument_inIpicText ;
  if (constinArgument_inCode.reader_length (SOURCE_FILE ("ipic18_code_generation.galgas", 41)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 41)).isValid ()) {
    uint32_t variant_1392 = constinArgument_inCode.reader_length (SOURCE_FILE ("ipic18_code_generation.galgas", 41)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 41)).uintValue () ;
    bool loop_1392 = true ;
    while (loop_1392) {
      loop_1392 = GALGAS_bool (kIsStrictInf, var_ipicText.reader_length (SOURCE_FILE ("ipic18_code_generation.galgas", 42)).objectCompare (constinArgument_inCode.reader_length (SOURCE_FILE ("ipic18_code_generation.galgas", 42)))).isValid () ;
      if (loop_1392) {
        loop_1392 = GALGAS_bool (kIsStrictInf, var_ipicText.reader_length (SOURCE_FILE ("ipic18_code_generation.galgas", 42)).objectCompare (constinArgument_inCode.reader_length (SOURCE_FILE ("ipic18_code_generation.galgas", 42)))).boolValue () ;
      }
      if (loop_1392 && (0 == variant_1392)) {
        loop_1392 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_code_generation.galgas", 41)) ;
      }
      if (loop_1392) {
        variant_1392 -- ;
        var_ipicText.addAssign_operation (GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 43)) ;
      }
    }
  }
  GALGAS_uint var_address = constinArgument_inAddress ;
  GALGAS_bool var_first = GALGAS_bool (true) ;
  cEnumerator_stringlist enumerator_1561 (var_ipicText, kEnumeration_up) ;
  cEnumerator_codeList enumerator_1576 (constinArgument_inCode, kEnumeration_up) ;
  while (enumerator_1561.hasCurrentObject () && enumerator_1576.hasCurrentObject ()) {
    ioArgument_ioListFileContents.dotAssign_operation (categoryReader_x_36_string (var_address, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 49))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 49)) ;
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_1576.current_mBinaryCode (HERE).reader_length (SOURCE_FILE ("ipic18_code_generation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 50)) ;
    GALGAS_string var_s = GALGAS_string (" ") ;
    cEnumerator_uintlist enumerator_1725 (enumerator_1576.current_mBinaryCode (HERE), kEnumeration_up) ;
    while (enumerator_1725.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_x_34_string (enumerator_1725.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)) ;
      enumerator_1725.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.dotAssign_operation (var_s.reader_stringByRightPadding (GALGAS_uint ((uint32_t) 13U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 55))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 55)) ;
    var_s = GALGAS_string::makeEmptyString () ;
    GALGAS_bool test_0 = var_first ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = GALGAS_bool (kIsInfOrEqual, constinArgument_inMin.objectCompare (constinArgument_inMax)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, constinArgument_inMin.objectCompare (GALGAS_uint ((uint32_t) 99999U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_s.dotAssign_operation (constinArgument_inMin.reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 59))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 59)) ;
      }else if (kBoolFalse == test_2) {
        var_s.dotAssign_operation (GALGAS_string ("*****")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 61)) ;
      }
      var_s.dotAssign_operation (GALGAS_string ("-")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 63)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, constinArgument_inMax.objectCompare (GALGAS_uint ((uint32_t) 99999U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_s.dotAssign_operation (constinArgument_inMax.reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 65))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 65)) ;
      }else if (kBoolFalse == test_3) {
        var_s.dotAssign_operation (GALGAS_string ("*****")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 67)) ;
      }
      var_s.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 69)) ;
    }
    ioArgument_ioListFileContents.dotAssign_operation (var_s.reader_stringByRightPadding (GALGAS_uint ((uint32_t) 12U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 71))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 71)) ;
    ioArgument_ioListFileContents.dotAssign_operation (enumerator_1576.current_mAssemblyCode (HERE).reader_stringByRightPadding (GALGAS_uint ((uint32_t) 50U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 72))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 72)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 73)) ;
    ioArgument_ioListFileContents.dotAssign_operation (enumerator_1561.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 74)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 75)) ;
    var_first = GALGAS_bool (false) ;
    enumerator_1561.gotoNextObject () ;
    enumerator_1576.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_2463 (var_ipicText.reader_subListFromIndex (constinArgument_inCode.reader_length (SOURCE_FILE ("ipic18_code_generation.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 79)), kEnumeration_up) ;
  while (enumerator_2463.hasCurrentObject ()) {
    ioArgument_ioListFileContents.dotAssign_operation (categoryReader_x_36_string (var_address, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 80))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 80)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByRightPadding (GALGAS_uint ((uint32_t) 76U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 81))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 81)) ;
    ioArgument_ioListFileContents.dotAssign_operation (enumerator_2463.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 82)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 83)) ;
    enumerator_2463.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'ipic18GenerateCode'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_GenerateCode (const GALGAS_string constinArgument_inSourceFileName,
                                       const GALGAS_programKind constinArgument_inProgramKind,
                                       const GALGAS_uint constinArgument_inBootloaderReservedROMsize,
                                       const GALGAS_uint constinArgument_inROMsize,
                                       const GALGAS_string constinArgument_inProcessorName,
                                       const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                       const GALGAS_registerTable constinArgument_inAllRegisters,
                                       const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                       const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                       GALGAS_string & ioArgument_ioListFileContents,
                                       const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                       GALGAS_uint & outArgument_outUsedROMsize,
                                       GALGAS_generatedCodeMap & outArgument_outGeneratedCodeMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  outArgument_outGeneratedCodeMap.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 218)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 218))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 218)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("CODE GENERATION").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Code generation:\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 222)) ;
  }
  GALGAS_symbolTableForRelativesResolution var_symbolTable ;
  GALGAS_uint var_firstDataAddress ;
  {
  routine_computeLabelAbsoluteAddressMap (constinArgument_inGeneratedBlockList, GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 227)), var_symbolTable, var_firstDataAddress, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 225)) ;
  }
  GALGAS_uint var_dataAddress = var_firstDataAddress ;
  GALGAS_pic_31__38__5F_dataAddressMap var_dataAddressMap = GALGAS_pic_31__38__5F_dataAddressMap::constructor_emptyMap (SOURCE_FILE ("ipic18_code_generation.galgas", 233)) ;
  cEnumerator_pic_31__38__5F_dataMap enumerator_7557 (constinArgument_inDataMap, kEnumeration_up) ;
  while (enumerator_7557.hasCurrentObject ()) {
    {
    var_dataAddressMap.modifier_insertKey (enumerator_7557.current_lkey (HERE), var_dataAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 235)) ;
    }
    var_dataAddress = var_dataAddress.add_operation (enumerator_7557.current_mData (HERE).reader_length (SOURCE_FILE ("ipic18_code_generation.galgas", 236)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 236)) ;
    enumerator_7557.gotoNextObject () ;
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 239)) ;
  }
  GALGAS_string var_assemblyString = GALGAS_string::makeEmptyString () ;
  GALGAS_uint var_relocatableCodeSize = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_uint var_blockStartAddress = GALGAS_uint ((uint32_t) 0U) ;
  outArgument_outGeneratedCodeMap = GALGAS_generatedCodeMap::constructor_emptyMap (SOURCE_FILE ("ipic18_code_generation.galgas", 243)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_7889 (constinArgument_inGeneratedBlockList, kEnumeration_up) ;
  GALGAS_uint index_7861 ((uint32_t) 0) ;
  while (enumerator_7889.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, index_7861.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 246)).objectCompare (constinArgument_inGeneratedBlockList.reader_length (SOURCE_FILE ("ipic18_code_generation.galgas", 246)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_nextBlockLabel = constinArgument_inGeneratedBlockList.reader_mBlockAtIndex (index_7861.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 247)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_1) {
      var_nextBlockLabel = GALGAS_string::makeEmptyString () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_7889.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 251)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_blockStartAddress = enumerator_7889.current_mBlock (HERE).mAttribute_mAddress ;
      {
      routine_setEmitAddress (var_blockStartAddress, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 253)) ;
      }
    }
    categoryMethod_generateCodeForBlock (enumerator_7889.current_mBlock (HERE), var_symbolTable, var_dataAddressMap, var_blockStartAddress, var_nextBlockLabel, ioArgument_ioListFileContents, var_assemblyString, outArgument_outGeneratedCodeMap, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 255)) ;
    GALGAS_uint var_blockSize = categoryReader_blockSize (enumerator_7889.current_mBlock (HERE), var_nextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 264)) ;
    var_blockStartAddress = var_blockStartAddress.add_operation (var_blockSize, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 265)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_7889.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 266)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_relocatableCodeSize = var_relocatableCodeSize.add_operation (var_blockSize, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 267)) ;
    }
    enumerator_7889.gotoNextObject () ;
    index_7861.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 244)) ;
  }
  var_dataAddress = var_firstDataAddress ;
  cEnumerator_pic_31__38__5F_dataMap enumerator_8762 (constinArgument_inDataMap, kEnumeration_up) ;
  const bool bool_4 = true ;
  if (enumerator_8762.hasCurrentObject () && bool_4) {
    {
    routine_setEmitAddress (var_dataAddress, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 274)) ;
    }
    {
    GALGAS_codeList temp_5 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 277)) ;
    temp_5.addAssign_operation (GALGAS_string ("    ORG ").add_operation (var_dataAddress.reader_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 277)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 277))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 277)) ;
    GALGAS_stringlist temp_6 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    temp_6.addAssign_operation (GALGAS_string ("    ORG ").add_operation (var_dataAddress.reader_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    routine_generateLineWithCode (var_dataAddress, temp_5, temp_6, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 279)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 275)) ;
    }
    var_assemblyString.dotAssign_operation (GALGAS_string ("    ORG ").add_operation (var_dataAddress.reader_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 283)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 283))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 283)) ;
    while (enumerator_8762.hasCurrentObject () && bool_4) {
      {
      GALGAS_codeList temp_7 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 287)) ;
      temp_7.addAssign_operation (GALGAS_string ("_data_").add_operation (enumerator_8762.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 287)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 287)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 287))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 287)) ;
      GALGAS_stringlist temp_8 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      temp_8.addAssign_operation (GALGAS_string ("_data_").add_operation (enumerator_8762.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      routine_generateLineWithCode (var_dataAddress, temp_7, temp_8, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 289)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 285)) ;
      }
      var_assemblyString.dotAssign_operation (GALGAS_string ("_data_").add_operation (enumerator_8762.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 293)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 293))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 293)) ;
      cEnumerator_uintlist enumerator_9320 (enumerator_8762.current_mData (HERE), kEnumeration_up) ;
      while (enumerator_9320.hasCurrentObject ()) {
        var_assemblyString.dotAssign_operation (GALGAS_string ("    DW ").add_operation (enumerator_9320.current_mValue (HERE).reader_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 295)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 295))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 295)) ;
        {
        routine_emitCode (enumerator_9320.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)) ;
        }
        {
        GALGAS_codeList temp_9 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 299)) ;
        GALGAS_uintlist temp_10 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 299)) ;
        temp_10.addAssign_operation (enumerator_9320.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 299)) ;
        temp_9.addAssign_operation (GALGAS_string ("    DW ").add_operation (enumerator_9320.current_mValue (HERE).reader_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 299)), temp_10  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 299)) ;
        GALGAS_stringlist temp_11 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        temp_11.addAssign_operation (GALGAS_string ("    DW ").add_operation (enumerator_9320.current_mValue (HERE).reader_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        routine_generateLineWithCode (var_dataAddress, temp_9, temp_11, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 301)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 297)) ;
        }
        var_dataAddress = var_dataAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 305)) ;
        enumerator_9320.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 307)) ;
      enumerator_8762.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_12 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_12) {
    inCompiler->printMessage (GALGAS_string ("  Relocatable code size: ").add_operation (var_relocatableCodeSize.reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 310)).add_operation (GALGAS_string (" bytes.\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 310))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 310)) ;
  }
  outArgument_outUsedROMsize = var_dataAddress ;
  switch (constinArgument_inProgramKind.enumValue ()) {
  case GALGAS_programKind::kNotBuilt:
    break ;
  case GALGAS_programKind::kEnum_regularProgram:
  case GALGAS_programKind::kEnum_userProgram:
    {
      const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, outArgument_outUsedROMsize.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_13) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317)), GALGAS_string ("the program uses ").add_operation (outArgument_outUsedROMsize.reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317)).add_operation (GALGAS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317)).add_operation (constinArgument_inROMsize.reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317)) ;
      }
    }
    break ;
  case GALGAS_programKind::kEnum_bootloaderProgram:
    {
      const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, outArgument_outUsedROMsize.objectCompare (constinArgument_inBootloaderReservedROMsize)).boolEnum () ;
      if (kBoolTrue == test_14) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321)), GALGAS_string ("the bootloader uses ").add_operation (outArgument_outUsedROMsize.reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321)).add_operation (GALGAS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321)).add_operation (constinArgument_inBootloaderReservedROMsize.reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321)) ;
      }
    }
    break ;
  }
  cEnumerator_actualConfigurationMap enumerator_10492 (constinArgument_inActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_10492.hasCurrentObject ()) {
    {
    routine_setEmitAddress (enumerator_10492.current_mRegisterAddress (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 327)) ;
    }
    {
    routine_emitByte (enumerator_10492.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 328)) ;
    }
    enumerator_10492.gotoNextObject () ;
  }
  GALGAS_string var_contents ;
  {
  routine_getGeneratedContents (var_contents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 331)) ;
  }
  GALGAS_string var_destinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 332)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 332)) ;
  GALGAS_bool joker_10783 ; // Joker input parameter
  var_contents.method_writeToFileWhenDifferentContents (var_destinationFile, joker_10783, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 333)) ;
  const enumGalgasBool test_15 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_string var_baseName = constinArgument_inSourceFileName.reader_lastPathComponent (SOURCE_FILE ("ipic18_code_generation.galgas", 336)).reader_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 336)) ;
    GALGAS_string var_cContents ;
    {
    routine_get_5F_C_5F_ArrayImplementation (var_baseName, var_cContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 337)) ;
    }
    var_destinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 338)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 338)) ;
    GALGAS_bool joker_11174 ; // Joker input parameter
    var_cContents.method_writeToFileWhenDifferentContents (var_destinationFile, joker_11174, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 339)) ;
    GALGAS_string var_hContents ;
    {
    routine_get_5F_C_5F_ArrayHeader (var_baseName, var_hContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 340)) ;
    }
    var_destinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 341)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 341)) ;
    GALGAS_bool joker_11378 ; // Joker input parameter
    var_hContents.method_writeToFileWhenDifferentContents (var_destinationFile, joker_11378, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 342)) ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.reader_value ()).operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_code_generation.galgas", 345)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 345)).boolEnum () ;
  if (kBoolTrue == test_16) {
    {
    routine_pic_31__38_GenerateAssemblyFile (constinArgument_inSourceFileName, constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inAllRegisters, constinArgument_inActualConfigurationMap, var_assemblyString, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 346)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'pic18GenerateAssemblyFile'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38_GenerateAssemblyFile (const GALGAS_string constinArgument_inSourceFileName,
                                              const GALGAS_string constinArgument_inProcessorName,
                                              const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                              const GALGAS_registerTable constinArgument_inAllRegisters,
                                              const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                              const GALGAS_string constinArgument_inAssemblyCode,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_assemblyString = GALGAS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 370)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 370)) ;
  var_assemblyString.dotAssign_operation (GALGAS_string (";--- Code\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 372)) ;
  var_assemblyString.dotAssign_operation (constinArgument_inAssemblyCode  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 373)) ;
  var_assemblyString.dotAssign_operation (GALGAS_string (";--- Prefefined registers\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 375)) ;
  cEnumerator_registerTable enumerator_12640 (constinArgument_inPredefinedRegisters, kEnumeration_up) ;
  while (enumerator_12640.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister ;
    enumerator_12640.current_mRegisterAddressList (HERE).method_first (var_firstRegister, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 377)) ;
    var_assemblyString.dotAssign_operation (enumerator_12640.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 378)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)).add_operation (var_firstRegister.reader_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)) ;
    enumerator_12640.gotoNextObject () ;
  }
  var_assemblyString.dotAssign_operation (GALGAS_string ("\n"
    "\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 380)) ;
  var_assemblyString.dotAssign_operation (GALGAS_string (";--- User defined registers (in RAM)\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 382)) ;
  cEnumerator_registerTable enumerator_12939 (constinArgument_inAllRegisters, kEnumeration_up) ;
  while (enumerator_12939.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inPredefinedRegisters.reader_hasKey (enumerator_12939.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 384)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 384)).operator_not (SOURCE_FILE ("ipic18_code_generation.galgas", 384)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_firstRegister ;
      enumerator_12939.current_mRegisterAddressList (HERE).method_first (var_firstRegister, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 385)) ;
      var_assemblyString.dotAssign_operation (enumerator_12939.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_code_generation.galgas", 386)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)).add_operation (var_firstRegister.reader_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)) ;
    }
    enumerator_12939.gotoNextObject () ;
  }
  var_assemblyString.dotAssign_operation (GALGAS_string ("\n"
    "\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 389)) ;
  var_assemblyString.dotAssign_operation (GALGAS_string (";--- Piccolo defined symbols\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 391)) ;
  var_assemblyString.dotAssign_operation (GALGAS_string ("W EQU 1\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 392)) ;
  var_assemblyString.dotAssign_operation (GALGAS_string ("FAST EQU 1\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 393)) ;
  var_assemblyString.dotAssign_operation (GALGAS_string ("BSR_ACCESS EQU 1\n"
    "\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 394)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inActualConfigurationMap.reader_count (SOURCE_FILE ("ipic18_code_generation.galgas", 396)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_assemblyString.dotAssign_operation (GALGAS_string (";--- Configuration\n"
      "\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 397)) ;
    cEnumerator_actualConfigurationMap enumerator_13566 (constinArgument_inActualConfigurationMap, kEnumeration_up) ;
    while (enumerator_13566.hasCurrentObject ()) {
      var_assemblyString.dotAssign_operation (GALGAS_string ("  __config ").add_operation (enumerator_13566.current_mRegisterAddress (HERE).reader_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)).add_operation (enumerator_13566.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)).reader_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)) ;
      enumerator_13566.gotoNextObject () ;
    }
  }
  var_assemblyString.dotAssign_operation (GALGAS_string (";---\n"
    "\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 403)) ;
  var_assemblyString.dotAssign_operation (GALGAS_string ("  END\n"
    "\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 404)) ;
  GALGAS_string var_asmDestinationFile = constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 406)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 406)) ;
  GALGAS_bool joker_14015 ; // Joker input parameter
  var_assemblyString.method_writeToFileWhenDifferentContents (var_asmDestinationFile, joker_14015, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 407)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'ipic18StackComputations'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_ipic_31__38_StackComputations (GALGAS_string & ioArgument_ioListFileContents,
                                            const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197))  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("*").add_operation (GALGAS_string ("STACK COMPUTATIONS").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198))  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)) ;
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string::makeEmptyString ().reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199))  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)) ;
  GALGAS_stringset var_startLabelsToExplore = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 201)) ;
  GALGAS_blockMapForStackComputation var_blockMapForStackComputation = GALGAS_blockMapForStackComputation::constructor_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 202)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_6784 (constinArgument_inBlockList, kEnumeration_up) ;
  while (enumerator_6784.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_6784.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_stack_computations.galgas", 204)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_startLabelsToExplore.addAssign_operation (enumerator_6784.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 205)) ;
    }
    {
    var_blockMapForStackComputation.modifier_insertKey (enumerator_6784.current_mBlock (HERE).mAttribute_mLabel, enumerator_6784.current_mBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 207)) ;
    }
    enumerator_6784.gotoNextObject () ;
  }
  GALGAS_routineCallMap var_routineCallMap = GALGAS_routineCallMap::constructor_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 210)) ;
  if (constinArgument_inBlockList.reader_length (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).isValid ()) {
    uint32_t variant_7080 = constinArgument_inBlockList.reader_length (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).uintValue () ;
    bool loop_7080 = true ;
    while (loop_7080) {
      loop_7080 = GALGAS_bool (kIsStrictSup, var_startLabelsToExplore.reader_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_7080) {
        loop_7080 = GALGAS_bool (kIsStrictSup, var_startLabelsToExplore.reader_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_7080 && (0 == variant_7080)) {
        loop_7080 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)) ;
      }
      if (loop_7080) {
        variant_7080 -- ;
        GALGAS_string var_startLabel = var_startLabelsToExplore.reader_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 214)) ;
        {
        var_startLabelsToExplore.modifier_removeKey (var_startLabel COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 215)) ;
        }
        GALGAS_stringset var_blockToExploreSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 217)) ;
        var_blockToExploreSet.addAssign_operation (var_startLabel  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 218)) ;
        GALGAS_stringset var_exploredBlockSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 219)) ;
        GALGAS_stringset var_calledRoutineSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 220)) ;
        GALGAS_uint var_terminatorStackNeeds = GALGAS_uint ((uint32_t) 0U) ;
        if (constinArgument_inBlockList.reader_length (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).isValid ()) {
          uint32_t variant_7495 = constinArgument_inBlockList.reader_length (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).uintValue () ;
          bool loop_7495 = true ;
          while (loop_7495) {
            loop_7495 = GALGAS_bool (kIsStrictSup, var_blockToExploreSet.reader_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 223)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
            if (loop_7495) {
              loop_7495 = GALGAS_bool (kIsStrictSup, var_blockToExploreSet.reader_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 223)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
            }
            if (loop_7495 && (0 == variant_7495)) {
              loop_7495 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)) ;
            }
            if (loop_7495) {
              variant_7495 -- ;
              GALGAS_string var_b = var_blockToExploreSet.reader_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 225)) ;
              {
              var_blockToExploreSet.modifier_removeKey (var_b COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 226)) ;
              }
              var_exploredBlockSet.addAssign_operation (var_b  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 227)) ;
              GALGAS_ipic_31__38_Block var_aBlock ;
              var_blockMapForStackComputation.method_searchKey (var_b.reader_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 228)), var_aBlock, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 228)) ;
              GALGAS_uint var_tsn ;
              callCategoryMethod_exploreAccessibleBlocksForStackComputations ((const cPtr_ipic_31__38_AbstractBlockTerminator *) var_aBlock.mAttribute_mTerminator.ptr (), var_blockToExploreSet, var_exploredBlockSet, var_tsn, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 229)) ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_tsn.objectCompare (var_terminatorStackNeeds)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_terminatorStackNeeds = var_tsn ;
              }
              cEnumerator_ipic_31__38_SequentialInstructionList enumerator_8051 (var_aBlock.mAttribute_mInstructionList, kEnumeration_up) ;
              while (enumerator_8051.hasCurrentObject ()) {
                callCategoryMethod_buildCalledRoutineSetForStackComputations ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_8051.current_mInstruction (HERE).ptr (), var_calledRoutineSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 238)) ;
                enumerator_8051.gotoNextObject () ;
              }
            }
          }
        }
        {
        var_routineCallMap.modifier_insertKey (var_startLabel.reader_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 241)), var_calledRoutineSet, var_terminatorStackNeeds, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 241)) ;
        }
        cEnumerator_stringset enumerator_8283 (var_calledRoutineSet, kEnumeration_up) ;
        while (enumerator_8283.hasCurrentObject ()) {
          const enumGalgasBool test_2 = var_routineCallMap.reader_hasKey (enumerator_8283.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 243)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 243)).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_startLabelsToExplore.addAssign_operation (enumerator_8283.current_key (HERE)  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 244)) ;
          }
          enumerator_8283.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_routineStackRequirementMap var_routineStackRequirementMap = GALGAS_routineStackRequirementMap::constructor_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 250)) ;
  GALGAS_bool var_progress = GALGAS_bool (true) ;
  if (var_routineCallMap.reader_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).isValid ()) {
    uint32_t variant_8557 = var_routineCallMap.reader_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).uintValue () ;
    bool loop_8557 = true ;
    while (loop_8557) {
      loop_8557 = var_progress.isValid () ;
      if (loop_8557) {
        loop_8557 = var_progress.boolValue () ;
      }
      if (loop_8557 && (0 == variant_8557)) {
        loop_8557 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)) ;
      }
      if (loop_8557) {
        variant_8557 -- ;
        var_progress = GALGAS_bool (false) ;
        GALGAS_routineCallMap var_tempRoutineCallMap = var_routineCallMap ;
        var_routineCallMap = GALGAS_routineCallMap::constructor_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 257)) ;
        cEnumerator_routineCallMap enumerator_8743 (var_tempRoutineCallMap, kEnumeration_up) ;
        while (enumerator_8743.hasCurrentObject ()) {
          GALGAS_uint var_levels = enumerator_8743.current_mTerminatorStackNeeds (HERE) ;
          GALGAS_bool var_solved = GALGAS_bool (true) ;
          cEnumerator_stringset enumerator_8849 (enumerator_8743.current_mCalledRoutineSet (HERE), kEnumeration_up) ;
          bool bool_3 = var_solved.isValidAndTrue () ;
          if (enumerator_8849.hasCurrentObject () && bool_3) {
            while (enumerator_8849.hasCurrentObject () && bool_3) {
              var_solved = var_routineStackRequirementMap.reader_hasKey (enumerator_8849.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 262)) ;
              const enumGalgasBool test_4 = var_solved.boolEnum () ;
              if (kBoolTrue == test_4) {
                GALGAS_uint var_rLevel ;
                var_routineStackRequirementMap.method_searchKey (enumerator_8849.current_key (HERE).reader_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 264)), var_rLevel, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 264)) ;
                const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_levels.objectCompare (var_rLevel)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  var_levels = var_rLevel.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 266)) ;
                }
              }
              enumerator_8849.gotoNextObject () ;
              if (enumerator_8849.hasCurrentObject ()) {
                bool_3 = var_solved.isValidAndTrue () ;
              }
            }
          }
          const enumGalgasBool test_6 = var_solved.boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            var_routineStackRequirementMap.modifier_insertKey (enumerator_8743.current_lkey (HERE), var_levels, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 271)) ;
            }
            var_progress = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_6) {
            {
            var_routineCallMap.modifier_insertKey (enumerator_8743.current_lkey (HERE), enumerator_8743.current_mCalledRoutineSet (HERE), enumerator_8743.current_mTerminatorStackNeeds (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 274)) ;
            }
          }
          enumerator_8743.gotoNextObject () ;
        }
      }
    }
  }
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Levels Routine\n")  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 278)) ;
  cEnumerator_routineStackRequirementMap enumerator_9442 (var_routineStackRequirementMap, kEnumeration_up) ;
  while (enumerator_9442.hasCurrentObject ()) {
    ioArgument_ioListFileContents.dotAssign_operation (enumerator_9442.current_mLevels (HERE).reader_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).reader_stringByLeftPadding (GALGAS_uint ((uint32_t) 6U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (enumerator_9442.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280))  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)) ;
    enumerator_9442.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 282)) ;
  GALGAS_bool var_noRecursiveRoutine = GALGAS_bool (kIsEqual, var_routineCallMap.reader_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 284)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_7 = var_noRecursiveRoutine.operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 285)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (gOption_piccolo_5F_options_doNotWarnRecursive.reader_value ()).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 286)).boolEnum () ;
    if (kBoolTrue == test_8) {
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 287)), GALGAS_string ("There are recursive routines")  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 287)) ;
    }
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("The following routines are recursive:\n")  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 289)) ;
    cEnumerator_routineCallMap enumerator_9927 (var_routineCallMap, kEnumeration_up) ;
    while (enumerator_9927.hasCurrentObject ()) {
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  - ").add_operation (enumerator_9927.current_lkey (HERE).reader_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291))  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)) ;
      enumerator_9927.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 293)) ;
  }
  const enumGalgasBool test_9 = var_noRecursiveRoutine.boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_uint var_mainLevels ;
    var_routineStackRequirementMap.method_searchKey (GALGAS_string (".START").reader_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 297)), var_mainLevels, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 297)) ;
    GALGAS_uint var_totalLevels = var_mainLevels ;
    const enumGalgasBool test_10 = var_routineStackRequirementMap.reader_hasKey (GALGAS_string (".HIGH_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 299)).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_uint var_highIntLevels ;
      var_routineStackRequirementMap.method_searchKey (GALGAS_string (".HIGH_INTERRUPT").reader_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 300)), var_highIntLevels, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 300)) ;
      var_totalLevels = var_totalLevels.add_operation (var_highIntLevels, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 301)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 301)) ;
    }
    const enumGalgasBool test_11 = var_routineStackRequirementMap.reader_hasKey (GALGAS_string (".LOW_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 303)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_uint var_lowIntLevels ;
      var_routineStackRequirementMap.method_searchKey (GALGAS_string (".LOW_INTERRUPT").reader_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 304)), var_lowIntLevels, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 304)) ;
      var_totalLevels = var_totalLevels.add_operation (var_lowIntLevels, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 305)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 305)) ;
    }
    inCompiler->printMessage (GALGAS_string ("Max stack depth: ").add_operation (var_totalLevels.reader_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307))  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)) ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_totalLevels.objectCompare (GALGAS_uint ((uint32_t) 31U))).boolEnum () ;
    if (kBoolTrue == test_12) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 309)), GALGAS_string ("Max stack depth is greater than 31")  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 309)) ;
    }
  }
}


