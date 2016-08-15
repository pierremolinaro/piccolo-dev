#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


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

GALGAS_stringlist GALGAS_branchOverflowMap::getter_listForKey (const GALGAS_string & inKey
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
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
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
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
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
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
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
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
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
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
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
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
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
//                                                                                                                      
//                                     'start_symbol' non terminal implementation                                       
//                                                                                                                      
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
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_piccoloDevice_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_piccoloDeviceModel &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
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
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
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
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_0' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_0 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_1' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_1 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_2' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_2 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_3' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_3 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_4' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_4 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_5' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_5 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_6' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_6 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_7' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_7 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_8' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_8 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_9' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_9 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_10' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_10 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_11' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_11 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_12' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_12 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_13' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_13 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_14' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_14 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_15' added non terminal implementation                          
//                                                                                                                      
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
  GALGAS_uint var_addr_1329 ;
  {
  routine_currentEmitAddress (var_addr_1329, inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 41)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("intermediate_generic.galgas", 42)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_addr_1329.objectCompare (constinArgument_inCurrentAddress)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 42)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)), GALGAS_string ("internal error: current emit address is ").add_operation (var_addr_1329.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (GALGAS_string ("; it should be "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (constinArgument_inCurrentAddress.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 44)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inConstantMap.getter_count (SOURCE_FILE ("intermediate_generic.galgas", 483)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 484)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 484)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CONSTANTS").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Constant").getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)).add_operation (GALGAS_string (" Value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)) ;
    cEnumerator_constantMap enumerator_18920 (constinArgument_inConstantMap, kEnumeration_up) ;
    while (enumerator_18920.hasCurrentObject ()) {
      ioArgument_ioListFileContents.plusAssign_operation(enumerator_18920.current_lkey (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 489)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (enumerator_18920.current_mValue (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)) ;
      enumerator_18920.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)) ;
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
  GALGAS_configFieldMap var_configFieldMap_927 = GALGAS_configFieldMap::constructor_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 25)) ;
  cEnumerator_configRegisterMap enumerator_988 (constinArgument_inConfigRegisterMap, kEnumeration_up) ;
  while (enumerator_988.hasCurrentObject ()) {
    GALGAS_uint var_defaultValue_1014 = GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_988.current_mRegisterWidth (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 27)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)) ;
    {
    outArgument_outActualConfigurationMap.setter_insertKey (enumerator_988.current_lkey (HERE), enumerator_988.current_mRegisterAddress (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 28)), var_defaultValue_1014, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 28)) ;
    }
    GALGAS_lstring var_registerName_1165 = enumerator_988.current_lkey (HERE) ;
    cEnumerator_configRegisterMaskMap enumerator_1217 (enumerator_988.current_mConfigRegisterMaskMap (HERE), kEnumeration_up) ;
    while (enumerator_1217.hasCurrentObject ()) {
      {
      var_configFieldMap_927.setter_insertKey (enumerator_1217.current_lkey (HERE), var_registerName_1165, enumerator_1217.current_mMaskValue (HERE), enumerator_1217.current_mDescription (HERE), enumerator_1217.current_mFieldSettingMap (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 31)) ;
      }
      enumerator_1217.gotoNextObject () ;
    }
    enumerator_988.gotoNextObject () ;
  }
  GALGAS_stringset var_actualSettingNameSet_1410 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("piccolo_config.galgas", 35)) ;
  cEnumerator_configDefinitionList enumerator_1469 (constinArgument_inConfigDefinitionList, kEnumeration_up) ;
  while (enumerator_1469.hasCurrentObject ()) {
    cEnumerator_configSettingList enumerator_1500 (enumerator_1469.current_mSettingList (HERE), kEnumeration_up) ;
    while (enumerator_1500.hasCurrentObject ()) {
      const enumGalgasBool test_0 = var_actualSettingNameSet_1410.getter_hasKey (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 38)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 38)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_1500.current_mSettingName (HERE).getter_location (SOURCE_FILE ("piccolo_config.galgas", 39)), GALGAS_string ("the '").add_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)).add_operation (GALGAS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)) ;
      }
      var_actualSettingNameSet_1410.addAssign_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 41))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 41)) ;
      GALGAS_lstring var_registerName_1745 ;
      GALGAS_luint var_maskValue_1768 ;
      GALGAS_lstring var_settingDescription_1802 ;
      GALGAS_fieldSettingMap var_fieldSettingMap_1841 ;
      var_configFieldMap_927.method_searchKey (enumerator_1500.current_mSettingName (HERE), var_registerName_1745, var_maskValue_1768, var_settingDescription_1802, var_fieldSettingMap_1841, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 46)) ;
      const enumGalgasBool test_2 = var_fieldSettingMap_1841.getter_hasKey (enumerator_1500.current_mSettingValue (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 47)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_settingValue_2040 ;
        GALGAS_uint var_settingMask_2066 ;
        var_fieldSettingMap_1841.method_searchKey (enumerator_1500.current_mSettingValue (HERE), var_settingValue_2040, var_settingMask_2066, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)) ;
        GALGAS_uint var_registerValue_2172 ;
        GALGAS_uint joker_2233 ; // Joker input parameter
        outArgument_outActualConfigurationMap.method_searchKey (var_registerName_1745, joker_2233, var_registerValue_2172, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 52)) ;
        var_registerValue_2172 = var_registerValue_2172.operator_and (var_settingMask_2066.operator_tilde (SOURCE_FILE ("piccolo_config.galgas", 53)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 53)).operator_or (var_settingValue_2040 COMMA_SOURCE_FILE ("piccolo_config.galgas", 53)) ;
        {
        outArgument_outActualConfigurationMap.setter_setMRegisterValueForKey (var_registerValue_2172, var_registerName_1745.getter_string (SOURCE_FILE ("piccolo_config.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 54)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_fieldSettingMap_1841.getter_count (SOURCE_FILE ("piccolo_config.galgas", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_string var_errorMessage_2491 = GALGAS_string ("the '").add_operation (enumerator_1500.current_mSettingValue (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (GALGAS_string ("' value is not defined for configuration setting '"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 57)) ;
          GALGAS_stringlist var_replacementSuggestions_2644 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_config.galgas", 58)) ;
          cEnumerator_fieldSettingMap enumerator_2684 (var_fieldSettingMap_1841, kEnumeration_up) ;
          while (enumerator_2684.hasCurrentObject ()) {
            var_replacementSuggestions_2644.addAssign_operation (GALGAS_string ("\"").add_operation (enumerator_2684.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 60)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 60))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 60)) ;
            enumerator_2684.gotoNextObject () ;
          }
          TC_Array <C_FixItDescription> fixItArray4 ;
          appendFixItActions (fixItArray4, kFixItReplace, var_replacementSuggestions_2644) ;
          inCompiler->emitSemanticError (enumerator_1500.current_mSettingValue (HERE).getter_location (SOURCE_FILE ("piccolo_config.galgas", 62)), var_errorMessage_2491, fixItArray4  COMMA_SOURCE_FILE ("piccolo_config.galgas", 62)) ;
        }
      }
      enumerator_1500.gotoNextObject () ;
    }
    enumerator_1469.gotoNextObject () ;
  }
  GALGAS_stringset var_notDefinedSetting_2945 = var_configFieldMap_927.getter_keySet (SOURCE_FILE ("piccolo_config.galgas", 67)).substract_operation (var_actualSettingNameSet_1410, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 67)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_notDefinedSetting_2945.getter_count (SOURCE_FILE ("piccolo_config.galgas", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_errorMessage_3059 = GALGAS_string ("the following configuration settings are not defined:") ;
    cEnumerator_stringset enumerator_3150 (var_notDefinedSetting_2945, kEnumeration_up) ;
    while (enumerator_3150.hasCurrentObject ()) {
      var_errorMessage_3059.plusAssign_operation(GALGAS_string ("\n"
        "-  ").add_operation (enumerator_3150.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)) ;
      enumerator_3150.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 73)), var_errorMessage_3059, fixItArray6  COMMA_SOURCE_FILE ("piccolo_config.galgas", 73)) ;
  }
  cEnumerator_actualConfigurationMap enumerator_3331 (outArgument_outActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_3331.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Register '").add_operation (enumerator_3331.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (enumerator_3331.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GALGAS_string (" set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (enumerator_3331.current_mRegisterValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)) ;
    GALGAS_configRegisterMaskMap var_configRegisterMaskMap_3519 ;
    GALGAS_luint joker_3562 ; // Joker input parameter
    GALGAS_luint joker_3565 ; // Joker input parameter
    GALGAS_illegalMaskList joker_3591 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_3331.current_lkey (HERE), joker_3562, joker_3565, var_configRegisterMaskMap_3519, joker_3591, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 79)) ;
    cEnumerator_configRegisterMaskMap enumerator_3638 (var_configRegisterMaskMap_3519, kEnumeration_up) ;
    while (enumerator_3638.hasCurrentObject ()) {
      GALGAS_lstring var_settingName_3668 = enumerator_3638.current_lkey (HERE) ;
      cEnumerator_fieldSettingMap enumerator_3731 (enumerator_3638.current_mFieldSettingMap (HERE), kEnumeration_up) ;
      while (enumerator_3731.hasCurrentObject ()) {
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_3331.current_mRegisterValue (HERE).operator_and (enumerator_3638.current_mMaskValue (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 83)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).objectCompare (enumerator_3731.current_mValue (HERE))).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  setting '").add_operation (var_settingName_3668.getter_string (SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (GALGAS_string ("' set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (enumerator_3731.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (GALGAS_string (" (\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (enumerator_3731.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 84)) ;
        }
        enumerator_3731.gotoNextObject () ;
      }
      enumerator_3638.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)) ;
    enumerator_3331.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_4087 (outArgument_outActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_4087.hasCurrentObject ()) {
    GALGAS_illegalMaskList var_illegalMaskList_4127 ;
    GALGAS_luint joker_4170 ; // Joker input parameter
    GALGAS_luint joker_4173 ; // Joker input parameter
    GALGAS_configRegisterMaskMap joker_4176 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_4087.current_lkey (HERE), joker_4170, joker_4173, joker_4176, var_illegalMaskList_4127, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 93)) ;
    cEnumerator_illegalMaskList enumerator_4227 (var_illegalMaskList_4127, kEnumeration_up) ;
    while (enumerator_4227.hasCurrentObject ()) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_4087.current_mRegisterValue (HERE).operator_and (enumerator_4227.current_mIllegalMask (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 95)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)).objectCompare (enumerator_4227.current_mIllegalValue (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 95)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)), GALGAS_string ("illegal setting for '").add_operation (enumerator_4087.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)).add_operation (GALGAS_string ("' register: "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)).add_operation (enumerator_4227.current_mDescription (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)), fixItArray9  COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*** ILLEGAL SETTING for register '").add_operation (enumerator_4087.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)).add_operation (GALGAS_string ("' ***\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  message: ").add_operation (enumerator_4227.current_mDescription (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 98)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 98)) ;
      }
      enumerator_4227.gotoNextObject () ;
    }
    enumerator_4087.gotoNextObject () ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("MICROCONTROLLER CONFIGURATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 114)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 114)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inConfigDefinitionList.getter_length (SOURCE_FILE ("piccolo_config.galgas", 116)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_actualBuildConfig (constinArgument_inConfigRegisterMap, constinArgument_inConfigDefinitionList, ioArgument_ioListFileContents, outArgument_outActualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 117)) ;
    }
  }else if (kBoolFalse == test_0) {
    outArgument_outActualConfigurationMap = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 124)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("No configuration.\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 125)) ;
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
    callExtensionMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) enumerator_4496.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 137)) ;
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
  GALGAS_stringset var_s_4906 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_used_routines.galgas", 149)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("baseline_used_routines.galgas", 150)).isValid ()) {
    uint32_t variant_4936 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("baseline_used_routines.galgas", 150)).uintValue () ;
    bool loop_4936 = true ;
    while (loop_4936) {
      loop_4936 = GALGAS_bool (kIsNotEqual, var_s_4906.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_4936) {
        loop_4936 = GALGAS_bool (kIsNotEqual, var_s_4906.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_4936 && (0 == variant_4936)) {
        loop_4936 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_used_routines.galgas", 150)) ;
      }
      if (loop_4936) {
        variant_4936 -- ;
        var_s_4906 = result_outUsedRoutineSet ;
        cEnumerator_baseline_5F_routineDefinitionList enumerator_5070 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
        while (enumerator_5070.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_5070.current_mRoutineName (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 154)).boolEnum () ;
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
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_baseline_5F_routineDefinitionList operand0 = GALGAS_baseline_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  return function_baseline_5F_computeUsedRoutines (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_string var_sourceFileBaseName_4007 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 94)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 94)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_4007.objectCompare (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 95)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 96)).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 96)), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 96)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)).add_operation (var_sourceFileBaseName_4007, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)), fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)) ;
  }
  GALGAS_string var_listFileContents_4359 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_4454 ;
  {
  routine_parseDeviceDefinition (constinArgument_inPiccoloModel.mAttribute_mDeviceName, var_piccoloDeviceModel_4454, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 102)) ;
  }
  switch (var_piccoloDeviceModel_4454.getter_mProcessorType (SOURCE_FILE ("baseline_compilation.galgas", 103)).enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("baseline_compilation.galgas", 105)).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 105)), GALGAS_string ("a pic18 device is not accepted here : only a baseline device"), fixItArray2  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 105)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("baseline_compilation.galgas", 106)).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 106)), GALGAS_string ("a mid-ranfe device is not accepted here : only a baseline device"), fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 106)) ;
    }
    break ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_4954 ;
  {
  routine_buildConfig (var_piccoloDeviceModel_4454.getter_mConfigRegisterMap (SOURCE_FILE ("baseline_compilation.galgas", 111)), constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 112)), var_listFileContents_4359, var_actualConfigurationMap_4954, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 110)) ;
  }
  GALGAS_registerTable var_registerTable_5194 = var_piccoloDeviceModel_4454.getter_mRegisterTable (SOURCE_FILE ("baseline_compilation.galgas", 117)) ;
  GALGAS_ramBankTable var_ramBank_5256 = var_piccoloDeviceModel_4454.getter_mRamBankTable (SOURCE_FILE ("baseline_compilation.galgas", 118)) ;
  GALGAS_declaredByteMap var_declaredByteMap_5523 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.mAttribute_mRamDefinitionList, var_ramBank_5256, var_piccoloDeviceModel_4454.getter_mRegisterTable (SOURCE_FILE ("baseline_compilation.galgas", 123)), var_listFileContents_4359, var_registerTable_5194, var_declaredByteMap_5523, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 119)) ;
  }
  GALGAS_baselineRoutineMap var_routineMap_5596 = GALGAS_baselineRoutineMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 129)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_5679 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_5679.hasCurrentObject ()) {
    {
    var_routineMap_5596.setter_insertKey (enumerator_5679.current_mRoutineName (HERE), enumerator_5679.current_mIsNoReturn (HERE), enumerator_5679.current_mPage (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 131)) ;
    }
    enumerator_5679.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_5822 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 134)) ;
  GALGAS_stringset var_usedRegisters_6059 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 139)) ;
  cEnumerator_constantDefinitionList enumerator_6136 (constinArgument_inPiccoloModel.getter_mConstantDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 140)), kEnumeration_up) ;
  while (enumerator_6136.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_6209 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_6136.current_mExpression (HERE).ptr (), var_registerTable_5194, var_constantMap_5822, var_result_6209, var_usedRegisters_6059, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 141)) ;
    const enumGalgasBool test_4 = var_registerTable_5194.getter_hasKey (enumerator_6136.current_mConstantName (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 142)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 142)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_6136.current_mConstantName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 143)), GALGAS_string ("'").add_operation (enumerator_6136.current_mConstantName (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 143)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 143)), fixItArray5  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 143)) ;
    }else if (kBoolFalse == test_4) {
      {
      var_constantMap_5822.setter_insertKey (enumerator_6136.current_mConstantName (HERE), var_result_6209, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 145)) ;
      }
    }
    enumerator_6136.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_print_5F_constant_5F_definition (var_constantMap_5822, var_listFileContents_4359, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 150)) ;
    }
  }
  const enumGalgasBool test_7 = var_routineMap_5596.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("baseline_compilation.galgas", 156)).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_bool var_isNoReturn_6870 ;
    GALGAS_luint var_page_6887 ;
    var_routineMap_5596.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)), var_isNoReturn_6870, var_page_6887, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)) ;
    const enumGalgasBool test_8 = var_isNoReturn_6870.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 158)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (var_routineMap_5596.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main page 0\""), fixItArray9  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159)) ;
    }
    const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_page_6887.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (var_page_6887.getter_location (SOURCE_FILE ("baseline_compilation.galgas", 162)), GALGAS_string ("the \"main\" should be declared in page 0: \"noreturn main page 0\""), fixItArray11  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 162)) ;
    }
  }else if (kBoolFalse == test_7) {
    TC_Array <C_FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mEndOfProgram (SOURCE_FILE ("baseline_compilation.galgas", 165)), GALGAS_string ("the program should declare the \"main\" routine"), fixItArray12  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 165)) ;
  }
  GALGAS_bool var_needsToSavePCLATH_7407 = GALGAS_bool (false) ;
  GALGAS_uint var_totalPageCount_7442 = var_piccoloDeviceModel_4454.mAttribute_mRomSize.getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 169)).add_operation (GALGAS_uint ((uint32_t) 511U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 169)).divide_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 169)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_7546 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 170)), kEnumeration_up) ;
  while (enumerator_7546.hasCurrentObject ()) {
    const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, enumerator_7546.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 171)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_13) {
      var_needsToSavePCLATH_7407 = GALGAS_bool (true) ;
    }
    const enumGalgasBool test_14 = GALGAS_bool (kIsSupOrEqual, enumerator_7546.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 174)).objectCompare (var_totalPageCount_7442)).boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (enumerator_7546.current_mPage (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 175)), GALGAS_string ("invalid value (").add_operation (enumerator_7546.current_mPage (HERE).mAttribute_uint.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (var_totalPageCount_7442.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (GALGAS_string (" 512 word page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)), fixItArray15  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)) ;
    }
    enumerator_7546.gotoNextObject () ;
  }
  GALGAS_baseline_5F_routineDefinitionList var_sortedRoutineDefinitionList_7904 = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 179)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_8000 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_8000.hasCurrentObject ()) {
    const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, enumerator_8000.current_mRoutineName (HERE).mAttribute_string.objectCompare (GALGAS_string ("main"))).boolEnum () ;
    if (kBoolTrue == test_16) {
      {
      var_sortedRoutineDefinitionList_7904.setter_insertAtIndex (enumerator_8000.current_mRoutineName (HERE), enumerator_8000.current_mPage (HERE), enumerator_8000.current_mIsNoReturn (HERE), enumerator_8000.current_mInstructionList (HERE), enumerator_8000.current_mEndOfRoutineLocation (HERE), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 182)) ;
      }
    }else if (kBoolFalse == test_16) {
      var_sortedRoutineDefinitionList_7904.addAssign_operation (enumerator_8000.current_mRoutineName (HERE), enumerator_8000.current_mPage (HERE), enumerator_8000.current_mIsNoReturn (HERE), enumerator_8000.current_mInstructionList (HERE), enumerator_8000.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 191)) ;
    }
    enumerator_8000.gotoNextObject () ;
  }
  GALGAS_baseline_5F_intermediate_5F_instructionList var_intermediateInstructionList_8504 = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 200)) ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 201)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_uint var_currentPage_8611 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_localLabelIndex_8641 = GALGAS_uint ((uint32_t) 0U) ;
    if (var_totalPageCount_7442.isValid ()) {
      uint32_t variant_8654 = var_totalPageCount_7442.uintValue () ;
      bool loop_8654 = true ;
      while (loop_8654) {
        loop_8654 = GALGAS_bool (kIsStrictInf, var_currentPage_8611.objectCompare (var_totalPageCount_7442)).isValid () ;
        if (loop_8654) {
          loop_8654 = GALGAS_bool (kIsStrictInf, var_currentPage_8611.objectCompare (var_totalPageCount_7442)).boolValue () ;
        }
        if (loop_8654 && (0 == variant_8654)) {
          loop_8654 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_compilation.galgas", 204)) ;
        }
        if (loop_8654) {
          variant_8654 -- ;
          GALGAS_bool var_pseudo_5F_PAGE_5F_generated_8743 = GALGAS_bool (false) ;
          cEnumerator_baseline_5F_routineDefinitionList enumerator_8796 (var_sortedRoutineDefinitionList_7904, kEnumeration_up) ;
          while (enumerator_8796.hasCurrentObject ()) {
            const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, enumerator_8796.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 207)).objectCompare (var_currentPage_8611)).boolEnum () ;
            if (kBoolTrue == test_18) {
              const enumGalgasBool test_19 = var_pseudo_5F_PAGE_5F_generated_8743.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 209)).boolEnum () ;
              if (kBoolTrue == test_19) {
                var_pseudo_5F_PAGE_5F_generated_8743 = GALGAS_bool (true) ;
                var_intermediateInstructionList_8504.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_new (var_currentPage_8611  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 211))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 211)) ;
              }
              GALGAS_routineKind var_routineKind_9103 ;
              const enumGalgasBool test_20 = enumerator_8796.current_mIsNoReturn (HERE).boolEnum () ;
              if (kBoolTrue == test_20) {
                var_routineKind_9103 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("baseline_compilation.galgas", 216)) ;
                const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, enumerator_8796.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_compilation.galgas", 218)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_21) {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (enumerator_8796.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 219)), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), fixItArray22  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 219)) ;
                }else if (kBoolFalse == test_21) {
                  GALGAS_baseline_5F_instruction var_lastInstruction_9488 ;
                  enumerator_8796.current_mInstructionList (HERE).method_last (var_lastInstruction_9488, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 221)) ;
                  callExtensionMethod_shouldNotContinueInSequence ((const cPtr_baseline_5F_instruction *) var_lastInstruction_9488.ptr (), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 222)) ;
                }
              }else if (kBoolFalse == test_20) {
                var_routineKind_9103 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("baseline_compilation.galgas", 225)) ;
                const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, enumerator_8796.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_compilation.galgas", 227)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_23) {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (enumerator_8796.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 228)), GALGAS_string ("a baseline routine must end with a MOVLW instruction"), fixItArray24  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 228)) ;
                }else if (kBoolFalse == test_23) {
                  GALGAS_baseline_5F_instruction var_lastInstruction_10010 ;
                  enumerator_8796.current_mInstructionList (HERE).method_last (var_lastInstruction_10010, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 230)) ;
                  callExtensionMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction_10010.ptr (), GALGAS_string ("the last routine instruction should be MOVLW"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 231)) ;
                }
              }
              const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_8796.current_mRoutineName (HERE).mAttribute_string.objectCompare (GALGAS_string ("main"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                var_intermediateInstructionList_8504.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_new (enumerator_8796.current_mRoutineName (HERE), enumerator_8796.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 236))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 236))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 236)) ;
                var_intermediateInstructionList_8504.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_8796.current_mRoutineName (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237)) ;
              }
              GALGAS_bool var_continuesInSequence_10801 ;
              {
              routine_handleBaselineInstructionList (var_currentPage_8611, enumerator_8796.current_mInstructionList (HERE), var_routineMap_5596, var_registerTable_5194, var_constantMap_5822, var_localLabelIndex_8641, var_intermediateInstructionList_8504, var_listFileContents_4359, var_continuesInSequence_10801, var_routineKind_9103, enumerator_8796.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 250)), var_usedRegisters_6059, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 239)) ;
              }
              var_intermediateInstructionList_8504.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_new (enumerator_8796.current_mRoutineName (HERE), var_currentPage_8611  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 253))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 253)) ;
              const enumGalgasBool test_26 = enumerator_8796.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_10801 COMMA_SOURCE_FILE ("baseline_compilation.galgas", 254)).boolEnum () ;
              if (kBoolTrue == test_26) {
                TC_Array <C_FixItDescription> fixItArray27 ;
                inCompiler->emitSemanticError (enumerator_8796.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 255)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray27  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 255)) ;
              }
            }
            enumerator_8796.gotoNextObject () ;
          }
          var_currentPage_8611.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 259)) ;
        }
      }
    }
  }
  GALGAS_stringset var_usedRoutineSet_11359 = function_baseline_5F_computeUsedRoutines (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 263)) ;
  GALGAS_baseline_5F_declaredRoutineMap var_declaredRoutineMap_11464 = GALGAS_baseline_5F_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 266)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_11556 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_11556.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_11464.setter_insertKey (enumerator_11556.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 268)) ;
    }
    enumerator_11556.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity_11708 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 271)) ;
  cEnumerator_lstringlist enumerator_11778 (constinArgument_inPiccoloModel.mAttribute_mUnusedRoutineList, kEnumeration_up) ;
  while (enumerator_11778.hasCurrentObject ()) {
    const enumGalgasBool test_28 = var_declaredRoutineMap_11464.getter_hasKey (enumerator_11778.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 273)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 273)).boolEnum () ;
    if (kBoolTrue == test_28) {
      TC_Array <C_FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (enumerator_11778.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 274)), GALGAS_string ("the '").add_operation (enumerator_11778.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)), fixItArray29  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)) ;
    }else if (kBoolFalse == test_28) {
      const enumGalgasBool test_30 = var_unusedRoutineDeclarationUnicity_11708.getter_hasKey (enumerator_11778.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275)).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticWarning (enumerator_11778.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 276)), GALGAS_string ("the '").add_operation (enumerator_11778.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)), fixItArray31  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)) ;
      }else if (kBoolFalse == test_30) {
        const enumGalgasBool test_32 = var_usedRoutineSet_11359.getter_hasKey (enumerator_11778.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277)).boolEnum () ;
        if (kBoolTrue == test_32) {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticWarning (enumerator_11778.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 278)), GALGAS_string ("the '").add_operation (enumerator_11778.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)), fixItArray33  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)) ;
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_11708.addAssign_operation (enumerator_11778.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 280)) ;
    enumerator_11778.gotoNextObject () ;
  }
  cEnumerator_baseline_5F_declaredRoutineMap enumerator_12306 (var_declaredRoutineMap_11464, kEnumeration_up) ;
  while (enumerator_12306.hasCurrentObject ()) {
    const enumGalgasBool test_34 = var_usedRoutineSet_11359.getter_hasKey (enumerator_12306.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_and (var_unusedRoutineDeclarationUnicity_11708.getter_hasKey (enumerator_12306.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 283)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).boolEnum () ;
    if (kBoolTrue == test_34) {
      TC_Array <C_FixItDescription> fixItArray35 ;
      inCompiler->emitSemanticWarning (enumerator_12306.current_lkey (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 284)), GALGAS_string ("the '").add_operation (enumerator_12306.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)), fixItArray35  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)) ;
    }
    enumerator_12306.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_12622 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 288)) ;
  cEnumerator_lstringlist enumerator_12693 (constinArgument_inPiccoloModel.mAttribute_mUnusedRegisterList, kEnumeration_up) ;
  while (enumerator_12693.hasCurrentObject ()) {
    const enumGalgasBool test_36 = var_registerTable_5194.getter_hasKey (enumerator_12693.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 290)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 290)).boolEnum () ;
    if (kBoolTrue == test_36) {
      TC_Array <C_FixItDescription> fixItArray37 ;
      inCompiler->emitSemanticError (enumerator_12693.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 291)), GALGAS_string ("the '").add_operation (enumerator_12693.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)), fixItArray37  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)) ;
    }else if (kBoolFalse == test_36) {
      const enumGalgasBool test_38 = var_unusedDeclarationUnicity_12622.getter_hasKey (enumerator_12693.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292)).boolEnum () ;
      if (kBoolTrue == test_38) {
        TC_Array <C_FixItDescription> fixItArray39 ;
        inCompiler->emitSemanticWarning (enumerator_12693.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 293)), GALGAS_string ("the '").add_operation (enumerator_12693.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)), fixItArray39  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)) ;
      }else if (kBoolFalse == test_38) {
        const enumGalgasBool test_40 = var_usedRegisters_6059.getter_hasKey (enumerator_12693.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294)).boolEnum () ;
        if (kBoolTrue == test_40) {
          TC_Array <C_FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticWarning (enumerator_12693.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 295)), GALGAS_string ("the '").add_operation (enumerator_12693.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)), fixItArray41  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)) ;
        }
      }
    }
    var_unusedDeclarationUnicity_12622.addAssign_operation (enumerator_12693.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 297)) ;
    enumerator_12693.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_13189 (var_declaredByteMap_5523, kEnumeration_up) ;
  while (enumerator_13189.hasCurrentObject ()) {
    const enumGalgasBool test_42 = var_usedRegisters_6059.getter_hasKey (enumerator_13189.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_and (var_unusedDeclarationUnicity_12622.getter_hasKey (enumerator_13189.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 300)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).boolEnum () ;
    if (kBoolTrue == test_42) {
      TC_Array <C_FixItDescription> fixItArray43 ;
      inCompiler->emitSemanticWarning (enumerator_13189.current_lkey (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 301)), GALGAS_string ("the '").add_operation (enumerator_13189.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)), fixItArray43  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)) ;
    }
    enumerator_13189.gotoNextObject () ;
  }
  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 305)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 305)).boolEnum () ;
  if (kBoolTrue == test_44) {
    var_listFileContents_4359.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERMEDIATE INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string (" Line Length Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 310)) ;
    GALGAS_uint var_currentAddress_13919 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_13966 (var_intermediateInstructionList_8504, kEnumeration_up) ;
    GALGAS_uint index_13931 ((uint32_t) 0) ;
    while (enumerator_13966.hasCurrentObject ()) {
      var_listFileContents_4359.plusAssign_operation(index_13931.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 313)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 5U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)) ;
      var_listFileContents_4359.plusAssign_operation(callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13966.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 314)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 6U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)) ;
      callExtensionMethod_print ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13966.current_mInstruction (HERE).ptr (), var_listFileContents_4359, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)) ;
      var_listFileContents_4359.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 316)) ;
      callExtensionMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13966.current_mInstruction (HERE).ptr (), var_currentAddress_13919, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 317)) ;
      enumerator_13966.gotoNextObject () ;
      index_13931.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 312)) ;
    }
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 319)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("Code size without optimization: ").add_operation (var_currentAddress_13919.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)).add_operation (GALGAS_string (" words.\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)) ;
  }
  const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 323)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 323)).boolEnum () ;
  if (kBoolTrue == test_45) {
    {
    routine_perform_5F_baseline_5F_optimizations (var_intermediateInstructionList_8504, var_listFileContents_4359, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 324)) ;
    }
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 327)) ;
  }
  GALGAS_registerExpression var_sr_14760 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 329))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 329)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 328)) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_statusRegister_15008 ;
  GALGAS_bitSliceTable var_statusRegisterBitSliceTable_15060 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) var_sr_14760.ptr (), var_registerTable_5194, var_constantMap_5822, var_statusRegister_15008, var_statusRegisterBitSliceTable_15060, var_usedRegisters_6059, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 333)) ;
  GALGAS_baseline_5F_assembly_5F_instructionList var_assemblyInstructionList_15114 = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 340)) ;
  const enumGalgasBool test_46 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 341)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_46) {
    {
    routine_build_5F_baseline_5F_assembly_5F_code (var_intermediateInstructionList_8504, var_actualConfigurationMap_4954, var_statusRegister_15008, var_statusRegisterBitSliceTable_15060, var_assemblyInstructionList_15114, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 342)) ;
    }
  }
  const enumGalgasBool test_47 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 351)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_47) {
    var_listFileContents_4359.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)) ;
    var_listFileContents_4359.plusAssign_operation(GALGAS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)) ;
    GALGAS_uint var_usedROMsize_15935 ;
    {
    routine_build_5F_baseline_5F_binary_5F_code (var_assemblyInstructionList_15114, var_piccoloDeviceModel_4454.mAttribute_mRomSize.getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 358)), var_listFileContents_4359, var_usedROMsize_15935, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 356)) ;
    }
  }
  const enumGalgasBool test_48 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_48) {
    GALGAS_string var_listFile_16073 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 365)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 365)) ;
    GALGAS_bool joker_16201 ; // Joker input parameter
    var_listFileContents_4359.method_writeToFileWhenDifferentContents (var_listFile_16073, joker_16201, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 366)) ;
  }
  const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 370)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_49) {
    GALGAS_string var_contents_16684 ;
    {
    routine_getGeneratedContents (var_contents_16684, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 381)) ;
    }
    GALGAS_string var_destinationFile_16714 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 382)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 382)) ;
    GALGAS_bool joker_16840 ; // Joker input parameter
    var_contents_16684.method_writeToFileWhenDifferentContents (var_destinationFile_16714, joker_16840, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 383)) ;
    const enumGalgasBool test_50 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_50) {
      GALGAS_string var_baseName_16927 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 385)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 385)) ;
      {
      routine_get_5F_C_5F_ArrayImplementation (var_baseName_16927, var_contents_16684, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 386)) ;
      }
      var_destinationFile_16714 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 387)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 387)) ;
      GALGAS_bool joker_17202 ; // Joker input parameter
      var_contents_16684.method_writeToFileWhenDifferentContents (var_destinationFile_16714, joker_17202, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 388)) ;
      {
      routine_get_5F_C_5F_ArrayHeader (var_baseName_16927, var_contents_16684, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 389)) ;
      }
      var_destinationFile_16714 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 390)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 390)) ;
      GALGAS_bool joker_17400 ; // Joker input parameter
      var_contents_16684.method_writeToFileWhenDifferentContents (var_destinationFile_16714, joker_17400, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 391)) ;
    }
    const enumGalgasBool test_51 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_51) {
      GALGAS_string var_assemblyCode_18405 = GALGAS_string ("  processor ").add_operation (constinArgument_inPiccoloModel.mAttribute_mDeviceName.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 410)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 410)) ;
      cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_18501 (var_assemblyInstructionList_15114, kEnumeration_up) ;
      while (enumerator_18501.hasCurrentObject ()) {
        callExtensionMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_18501.current_mInstruction (HERE).ptr (), var_assemblyCode_18405, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 412)) ;
        var_assemblyCode_18405.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 413)) ;
        enumerator_18501.gotoNextObject () ;
      }
      var_assemblyCode_18405.plusAssign_operation(GALGAS_string ("\n"
        ";--- Registers\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 415)) ;
      cEnumerator_registerTable enumerator_18661 (var_registerTable_5194, kEnumeration_up) ;
      while (enumerator_18661.hasCurrentObject ()) {
        GALGAS_uint var_address_18719 ;
        enumerator_18661.current_mRegisterAddressList (HERE).method_first (var_address_18719, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 417)) ;
        var_assemblyCode_18405.plusAssign_operation(enumerator_18661.current_lkey (HERE).mAttribute_string.add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)).add_operation (var_address_18719.getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)) ;
        enumerator_18661.gotoNextObject () ;
      }
      var_assemblyCode_18405.plusAssign_operation(GALGAS_string ("W EQU 0\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 420)) ;
      var_assemblyCode_18405.plusAssign_operation(GALGAS_string (";--- Configuration\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 421)) ;
      cEnumerator_actualConfigurationMap enumerator_18926 (var_actualConfigurationMap_4954, kEnumeration_up) ;
      while (enumerator_18926.hasCurrentObject ()) {
        var_assemblyCode_18405.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_18926.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (enumerator_18926.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)) ;
        enumerator_18926.gotoNextObject () ;
      }
      var_assemblyCode_18405.plusAssign_operation(GALGAS_string ("\n"
        "  END\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 425)) ;
      GALGAS_string var_asmDestinationFile_19124 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 426)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 426)) ;
      GALGAS_bool joker_19259 ; // Joker input parameter
      var_assemblyCode_18405.method_writeToFileWhenDifferentContents (var_asmDestinationFile_19124, joker_19259, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 427)) ;
    }
  }else if (kBoolFalse == test_49) {
    GALGAS_string var_hexDestinationFile_19353 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 430)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 430)) ;
    const enumGalgasBool test_52 = var_hexDestinationFile_19353.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 431)).boolEnum () ;
    if (kBoolTrue == test_52) {
      {
      GALGAS_string::class_method_deleteFile (var_hexDestinationFile_19353, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 432)) ;
      }
    }
    GALGAS_string var_asmDestinationFile_19543 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 434)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 434)) ;
    const enumGalgasBool test_53 = var_asmDestinationFile_19543.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 435)).boolEnum () ;
    if (kBoolTrue == test_53) {
      {
      GALGAS_string::class_method_deleteFile (var_asmDestinationFile_19543, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 436)) ;
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
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2271.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)) ;
      outArgument_outContinuesInSequence = GALGAS_bool (true) ;
    }
    GALGAS_bool temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, index_2246.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 86)).objectCompare (constinArgument_inInstructionList.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 86)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = constinArgument_inLastInstructionShouldReturn ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_bool (false) ;
    }
    callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) enumerator_2271.current_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, temp_2, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 76)) ;
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
  return function_acceptableTRISoperand (inCompiler COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_uint var_currentAddress_7874 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 203)) ;
  GALGAS_bool var_found_8027 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 205)).isValid ()) {
    uint32_t variant_8042 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 205)).uintValue () ;
    bool loop_8042 = true ;
    while (loop_8042) {
      loop_8042 = GALGAS_bool (kIsStrictInf, var_currentAddress_7874.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8027.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).isValid () ;
      if (loop_8042) {
        loop_8042 = GALGAS_bool (kIsStrictInf, var_currentAddress_7874.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8027.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).boolValue () ;
      }
      if (loop_8042 && (0 == variant_8042)) {
        loop_8042 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 205)) ;
      }
      if (loop_8042) {
        variant_8042 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7874, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7874, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_actualInstruction cast_8293_instr ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7874, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8293_instr ;
            var_found_8027 = GALGAS_bool (true) ;
          }else{
            var_currentAddress_7874.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 213)) ;
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
  GALGAS_uint var_currentAddress_8804 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 229)) ;
  GALGAS_bool var_found_8957 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 231)).isValid ()) {
    uint32_t variant_8972 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 231)).uintValue () ;
    bool loop_8972 = true ;
    while (loop_8972) {
      loop_8972 = GALGAS_bool (kIsStrictInf, var_currentAddress_8804.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)))).operator_and (var_found_8957.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 232)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 232)).isValid () ;
      if (loop_8972) {
        loop_8972 = GALGAS_bool (kIsStrictInf, var_currentAddress_8804.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 232)))).operator_and (var_found_8957.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 232)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 232)).boolValue () ;
      }
      if (loop_8972 && (0 == variant_8972)) {
        loop_8972 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 231)) ;
      }
      if (loop_8972) {
        variant_8972 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_actualInstruction cast_9223_instr ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9223_instr ;
            var_found_8957 = GALGAS_bool (true) ;
          }else if (NULL != dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ())) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE cast_9331_instr ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9331_instr ;
            var_found_8957 = GALGAS_bool (true) ;
          }else if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL cast_9440_instr ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8804, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 234)).ptr ()) ;
            outArgument_outFirstInstruction = cast_9440_instr ;
            outArgument_outReachedLabelSet.addAssign_operation (cast_9440_instr.getter_mLabel (SOURCE_FILE ("baseline_optimizations.galgas", 243)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 243))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 243)) ;
            var_currentAddress_8804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 244)) ;
          }else{
            var_currentAddress_8804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 246)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 521)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 522)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 523)) ;
  GALGAS_baselineSymbolTableForOptimizations var_symbolTable_20581 = GALGAS_baselineSymbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("baseline_optimizations.galgas", 525)) ;
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_20670 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
  GALGAS_uint index_20636 ((uint32_t) 0) ;
  while (enumerator_20670.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_20670.current_mInstruction (HERE).ptr (), var_symbolTable_20581, index_20636, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 527)) ;
    enumerator_20670.gotoNextObject () ;
    index_20636.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 526)) ;
  }
  GALGAS_bool var_optimizationsDone_20830 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_20855 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 532)).isValid ()) {
    uint32_t variant_20866 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("baseline_optimizations.galgas", 532)).uintValue () ;
    bool loop_20866 = true ;
    while (loop_20866) {
      loop_20866 = var_optimizationsDone_20830.isValid () ;
      if (loop_20866) {
        loop_20866 = var_optimizationsDone_20830.boolValue () ;
      }
      if (loop_20866 && (0 == variant_20866)) {
        loop_20866 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 532)) ;
      }
      if (loop_20866) {
        variant_20866 -- ;
        var_optimizationsDone_20830 = GALGAS_bool (false) ;
        var_iteration_20855.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 536)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_20855.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 537)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_21112 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        GALGAS_uint index_21078 ((uint32_t) 0) ;
        while (enumerator_21112.hasCurrentObject ()) {
          if (enumerator_21112.current_mInstruction (HERE).isValid ()) {
            if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) {
              GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE cast_21207_inst ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeBEGIN_5F_ROUTINE ((const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) cast_21207_inst.ptr (), index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 542)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
              GALGAS_baseline_5F_intermediate_5F_GOTO cast_21368_inst ((cPtr_baseline_5F_intermediate_5F_GOTO *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeGOTO ((const cPtr_baseline_5F_intermediate_5F_GOTO *) cast_21368_inst.ptr (), var_symbolTable_20581, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 544)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP) {
              GALGAS_baseline_5F_intermediate_5F_JUMP cast_21533_inst ((cPtr_baseline_5F_intermediate_5F_JUMP *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeJUMP ((const cPtr_baseline_5F_intermediate_5F_JUMP *) cast_21533_inst.ptr (), var_symbolTable_20581, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 546)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL) {
              GALGAS_baseline_5F_intermediate_5F_CALL cast_21698_inst ((cPtr_baseline_5F_intermediate_5F_CALL *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeCALL ((const cPtr_baseline_5F_intermediate_5F_CALL *) cast_21698_inst.ptr (), var_symbolTable_20581, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 548)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR) {
              GALGAS_baseline_5F_intermediate_5F_JSR cast_21862_inst ((cPtr_baseline_5F_intermediate_5F_JSR *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeJSR ((const cPtr_baseline_5F_intermediate_5F_JSR *) cast_21862_inst.ptr (), var_symbolTable_20581, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 550)) ;
            }else if (enumerator_21112.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition) {
              GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition cast_22047_inst ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) enumerator_21112.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeTestDecInc ((const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) cast_22047_inst.ptr (), var_symbolTable_20581, index_21078, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_20830, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 552)) ;
            }
          }
          enumerator_21112.gotoNextObject () ;
          index_21078.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 539)) ;
        }
        GALGAS_stringset var_referencedLabels_22261 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 557)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_22326 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        while (enumerator_22326.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_22326.current_mInstruction (HERE).ptr (), var_referencedLabels_22261, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 559)) ;
          enumerator_22326.gotoNextObject () ;
        }
        cEnumerator_baselineSymbolTableForOptimizations enumerator_22425 (var_symbolTable_20581, kEnumeration_up) ;
        while (enumerator_22425.hasCurrentObject ()) {
          const enumGalgasBool test_0 = var_referencedLabels_22261.getter_hasKey (enumerator_22425.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 562)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 562)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 562)).boolEnum () ;
          if (kBoolTrue == test_0) {
            GALGAS_uint var_definitionLine_22550 ;
            var_symbolTable_20581.method_searchKey (enumerator_22425.current_lkey (HERE), var_definitionLine_22550, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 563)) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_22550.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (enumerator_22425.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)) ;
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 565)), var_definitionLine_22550, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 565)) ;
            }
            {
            GALGAS_uint joker_22824 ; // Joker input parameter
            var_symbolTable_20581.setter_removeKey (enumerator_22425.current_lkey (HERE), joker_22824, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 566)) ;
            }
          }
          enumerator_22425.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_22893 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_22930 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_22979 = GALGAS_bool (false) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_23029 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        GALGAS_uint index_22995 ((uint32_t) 0) ;
        while (enumerator_23029.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_reachable_22893.operator_or (var_previousWasSkippingInstruction_22979 COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 574)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_reachable_22893 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 575)) ;
            var_previousWasSkippingInstruction_22979 = var_skippingInstruction_22930 ;
            var_skippingInstruction_22930 = callExtensionGetter_isSkippingInstruction ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 577)) ;
          }else if (kBoolFalse == test_1) {
            GALGAS_bool var_isLABEL_23327 = callExtensionGetter_isLABEL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 579)) ;
            const enumGalgasBool test_2 = var_isLABEL_23327.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_and (callExtensionGetter_isNULL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).boolEnum () ;
            if (kBoolTrue == test_2) {
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_22995.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 582)), index_22995, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)) ;
              }
            }else if (kBoolFalse == test_2) {
              const enumGalgasBool test_3 = var_isLABEL_23327.boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachable_22893 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23029.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 584)) ;
                var_previousWasSkippingInstruction_22979 = GALGAS_bool (false) ;
                var_skippingInstruction_22930 = GALGAS_bool (false) ;
              }
            }
          }
          enumerator_23029.gotoNextObject () ;
          index_22995.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 573)) ;
        }
        const enumGalgasBool test_4 = var_optimizationsDone_20830.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 590)).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 591)) ;
          GALGAS_uint var_currentAddress_23949 = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_23997 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
          while (enumerator_23997.hasCurrentObject ()) {
            callExtensionMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_23997.current_mInstruction (HERE).ptr (), var_currentAddress_23949, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 595)) ;
            enumerator_23997.gotoNextObject () ;
          }
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_23949.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)).add_operation (GALGAS_string (" words\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)) ;
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
    callExtensionMethod_generateAssemblyCode ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13977.current_mInstruction (HERE).ptr (), constinArgument_inSTATUSregister, constinArgument_inStatusRegisterBitSliceTable, ioArgument_ioAssemblyInstructionList, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 333)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 13)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 25)) ;
  callExtensionMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 27)) ;
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
  GALGAS_baseline_5F_symbolTable var_symbolTable_12007 = GALGAS_baseline_5F_symbolTable::constructor_emptyMap (SOURCE_FILE ("baseline_build_binary_code.galgas", 324)) ;
  GALGAS_uint var_currentWordAddress_12068 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12111 (constinArgument_inAssemblyInstructionList, kEnumeration_up) ;
  while (enumerator_12111.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12111.current_mInstruction (HERE).ptr (), var_symbolTable_12007, var_currentWordAddress_12068, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 327)) ;
    enumerator_12111.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass_12226 = var_currentWordAddress_12068 ;
  outArgument_outUsedROMsize = var_currentWordAddress_12068 ;
  var_currentWordAddress_12068 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_setEmitAddress (GALGAS_uint ((uint32_t) 0U), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 333)) ;
  }
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12434 (constinArgument_inAssemblyInstructionList, kEnumeration_up) ;
  while (enumerator_12434.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12434.current_mInstruction (HERE).ptr (), var_symbolTable_12007, ioArgument_ioListFileContents, var_currentWordAddress_12068, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 335)) ;
    {
    routine_checkCurrentEmitAddress (var_currentWordAddress_12068.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 340)) ;
    }
    enumerator_12434.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_12226.objectCompare (var_currentWordAddress_12068)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentWordAddress_12068.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)).add_operation (var_lastAddressForFirstPass_12226.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 344)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass_12226.objectCompare (constinArgument_inROMsize)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_12226.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 348)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 349)), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)) ;
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
    callExtensionMethod_addUsedRoutines ((const cPtr_midrange_5F_instruction *) enumerator_6043.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 186)) ;
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
  GALGAS_stringset var_s_6727 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_used_routines.galgas", 206)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("midrange_used_routines.galgas", 207)).isValid ()) {
    uint32_t variant_6757 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("midrange_used_routines.galgas", 207)).uintValue () ;
    bool loop_6757 = true ;
    while (loop_6757) {
      loop_6757 = GALGAS_bool (kIsNotEqual, var_s_6727.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_6757) {
        loop_6757 = GALGAS_bool (kIsNotEqual, var_s_6727.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_6757 && (0 == variant_6757)) {
        loop_6757 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_used_routines.galgas", 207)) ;
      }
      if (loop_6757) {
        variant_6757 -- ;
        var_s_6727 = result_outUsedRoutineSet ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_6891 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
        while (enumerator_6891.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_6891.current_mRoutineName (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 211)).boolEnum () ;
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
                                                                                const GALGAS_location & /* inErrorLocation */
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
                                                   COMMA_THERE).getter_object (THERE) ;
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
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2948.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)) ;
      outArgument_outContinuesInSequence = GALGAS_bool (true) ;
    }
    callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((const cPtr_midrange_5F_instruction *) enumerator_2948.current_mInstruction (HERE).ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 93)) ;
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
  GALGAS_string var_generationOptimizationMessages_57049 = GALGAS_string::makeEmptyString () ;
  GALGAS_routineMap var_routineMap_57123 = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1651)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_57200 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1652)), kEnumeration_up) ;
  while (enumerator_57200.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_57200.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1653)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1653)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57200.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1653)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1653)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_57200.current_mRequiredBank (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1654)), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1654)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_57200.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57200.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_57200.current_mReturnedBank (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1657)), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1657)) ;
    }
    {
    var_routineMap_57123.setter_insertKey (enumerator_57200.current_mRoutineName (HERE), enumerator_57200.current_mIsNoReturn (HERE), enumerator_57200.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)), enumerator_57200.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)), enumerator_57200.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)) ;
    }
    enumerator_57200.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_57736 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1662)) ;
  GALGAS_lstring var_romSizeString_57810 = GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1664))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1664)) ;
  {
  var_constantMap_57736.setter_insertKey (var_romSizeString_57810, constinArgument_inROMSize.getter_sint_36__34_ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1665)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1665)) ;
  }
  cEnumerator_constantDefinitionList enumerator_57999 (constinArgument_inPiccoloModel.getter_mConstantDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1667)), kEnumeration_up) ;
  while (enumerator_57999.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_58074 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_57999.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_57736, var_result_58074, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1668)) ;
    const enumGalgasBool test_4 = constinArgument_inRegisterTable.getter_hasKey (enumerator_57999.current_mConstantName (HERE).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1669)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1669)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_57999.current_mConstantName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)), GALGAS_string ("'").add_operation (enumerator_57999.current_mConstantName (HERE).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)) ;
    }else if (kBoolFalse == test_4) {
      {
      var_constantMap_57736.setter_insertKey (enumerator_57999.current_mConstantName (HERE), var_result_58074, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1672)) ;
      }
    }
    enumerator_57999.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_print_5F_constant_5F_definition (var_constantMap_57736, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1677)) ;
    }
  }
  const enumGalgasBool test_7 = var_routineMap_57123.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1683)).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_bool var_isNoReturn_58741 ;
    GALGAS_uint var_requiredBank_58765 ;
    GALGAS_uint joker_58767 ; // Joker input parameter
    GALGAS_bool joker_58770 ; // Joker input parameter
    var_routineMap_57123.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1684))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1684)), var_isNoReturn_58741, var_requiredBank_58765, joker_58767, joker_58770, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1684)) ;
    GALGAS_location var_mainDeclarationLocation_58814 = var_routineMap_57123.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1685)) ;
    const enumGalgasBool test_8 = var_isNoReturn_58741.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1686)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (var_mainDeclarationLocation_58814, GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\""), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1687)) ;
    }
    const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_requiredBank_58765.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (var_mainDeclarationLocation_58814, GALGAS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\""), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1690)) ;
    }
  }else if (kBoolFalse == test_7) {
    TC_Array <C_FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mEndOfProgram (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1693)), GALGAS_string ("the program should declare the \"main\" routine"), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1693)) ;
  }
  GALGAS_uint var_localLabelIndex_59387 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_handleInterruptRoutine (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap_57123, constinArgument_inTotalBankCount, var_constantMap_57736, constinArgument_inTotalPageCount, var_generationOptimizationMessages_57049, var_localLabelIndex_59387, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1697)) ;
  }
  GALGAS_uint var_currentPage_59807 = GALGAS_uint ((uint32_t) 0U) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_59818 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_59818 = true ;
    while (loop_59818) {
      loop_59818 = GALGAS_bool (kIsStrictInf, var_currentPage_59807.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_59818) {
        loop_59818 = GALGAS_bool (kIsStrictInf, var_currentPage_59807.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_59818 && (0 == variant_59818)) {
        loop_59818 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1714)) ;
      }
      if (loop_59818) {
        variant_59818 -- ;
        GALGAS_bool var_orgGenerated_59900 = GALGAS_bool (kIsEqual, var_currentPage_59807.objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_59998 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1716)), kEnumeration_up) ;
        while (enumerator_59998.hasCurrentObject ()) {
          const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_59998.current_mPage (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1717)).objectCompare (var_currentPage_59807)).boolEnum () ;
          if (kBoolTrue == test_13) {
            const enumGalgasBool test_14 = var_orgGenerated_59900.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1718)).boolEnum () ;
            if (kBoolTrue == test_14) {
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (var_currentPage_59807.multiply_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1719))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1719))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1719)) ;
              var_orgGenerated_59900 = GALGAS_bool (true) ;
            }
            GALGAS_bool var_continuesInSequence_60256 ;
            GALGAS_uint var_currentBank_60282 = enumerator_59998.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1723)) ;
            GALGAS_routineKind var_routineKind_60338 ;
            const enumGalgasBool test_15 = enumerator_59998.current_mIsNoReturn (HERE).boolEnum () ;
            if (kBoolTrue == test_15) {
              var_routineKind_60338 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1726)) ;
            }else if (kBoolFalse == test_15) {
              var_routineKind_60338 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728)) ;
            }
            outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_59998.current_mRoutineName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1730))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1730)) ;
            {
            routine_handleMidrangeInstructionList (enumerator_59998.current_mInstructionList (HERE), var_routineMap_57123, constinArgument_inRegisterTable, var_constantMap_57736, var_localLabelIndex_59387, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_57049, constinArgument_inTotalBankCount, var_currentBank_60282, enumerator_59998.current_mPreservesBank (HERE), var_continuesInSequence_60256, var_routineKind_60338, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1731)) ;
            }
            const enumGalgasBool test_16 = enumerator_59998.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_59998.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_60282.objectCompare (enumerator_59998.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_59998.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_59998.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)) ;
            }
            const enumGalgasBool test_18 = enumerator_59998.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_60256 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)).boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (enumerator_59998.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray19  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)) ;
            }
            const enumGalgasBool test_20 = enumerator_59998.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1753)).boolEnum () ;
            if (kBoolTrue == test_20) {
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (enumerator_59998.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1754))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1754))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1754)) ;
            }
          }
          enumerator_59998.gotoNextObject () ;
        }
        var_currentPage_59807.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1758)) ;
      }
    }
  }
  const enumGalgasBool test_21 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_21) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1762)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1762)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1762)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("IPIC INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1763)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1763)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1763)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1763)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1764)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1765)) ;
    GALGAS_uint var_idx_62089 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_currentAddress_62118 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_62165 (outArgument_outGeneratedInstructionList, kEnumeration_up) ;
    while (enumerator_62165.hasCurrentObject ()) {
      callExtensionMethod_setCurrentAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62165.current_mInstruction (HERE).ptr (), var_currentAddress_62118, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)) ;
      ioArgument_ioListFileContents.plusAssign_operation(var_idx_62089.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1770)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 5U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1770)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1770)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1770)) ;
      callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62165.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1771)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)) ;
      var_idx_62089.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1773)) ;
      enumerator_62165.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1775)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress_62118.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1776)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1776)).add_operation (GALGAS_string (" instructions.\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1776)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1776)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("PCLATH should be saved \?\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1787)) ;
  outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_62980 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1790)), kEnumeration_up) ;
  while (enumerator_62980.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_62980.current_mPage (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1791)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outShouldSavePCLATH = GALGAS_bool (true) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, enumerator_62980.current_mPage (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1794)).objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_62980.current_mPage (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)), GALGAS_string ("invalid value (").add_operation (enumerator_62980.current_mPage (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).add_operation (GALGAS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)) ;
    }
    enumerator_62980.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1798)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1799)) ;
  }
  const enumGalgasBool test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
    cEnumerator_midrange_5F_interruptDefinitionList enumerator_63543 (constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1804)), kEnumeration_up) ;
    bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1804)).isValidAndTrue () ;
    if (enumerator_63543.hasCurrentObject () && bool_5) {
      while (enumerator_63543.hasCurrentObject () && bool_5) {
        cEnumerator_midrange_5F_instructionList enumerator_63610 (enumerator_63543.current_mInstructionList (HERE), kEnumeration_up) ;
        bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1805)).isValidAndTrue () ;
        if (enumerator_63610.hasCurrentObject () && bool_6) {
          while (enumerator_63610.hasCurrentObject () && bool_6) {
            callExtensionMethod_instructionUsesGOTOorCALL ((const cPtr_midrange_5F_instruction *) enumerator_63610.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1806)) ;
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
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1810)) ;
    }else if (kBoolFalse == test_7) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1812)) ;
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1815)) ;
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
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1848)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1848)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1848)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERRUPT ROUTINE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1849)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1849)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1849)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1849)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1850)) ;
    GALGAS_bool var_shouldSavePCLATH_65862 ;
    {
    routine_interruptRoutineShouldSavePCLATH (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH_65862, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)) ;
    }
    outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (GALGAS_uint ((uint32_t) 4U)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1859))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1859)) ;
    cEnumerator_midrange_5F_interruptDefinitionList enumerator_66015 (constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1860)), kEnumeration_up) ;
    while (enumerator_66015.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSharedRAMBankName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_generateInterruptRoutineForControllerWithSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66015.current_mFirstSaveRegister (HERE), enumerator_66015.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_65862, enumerator_66015.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66015.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1862)) ;
        }
      }else if (kBoolFalse == test_1) {
        {
        routine_generateInterruptRoutineForControllerWithoutSharedRAM (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66015.current_mFirstSaveRegister (HERE), enumerator_66015.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_65862, enumerator_66015.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66015.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1878)) ;
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
  GALGAS_uintlist var_registerAddressList_67891 ;
  GALGAS_uint var_size_67907 ;
  GALGAS_bitSliceTable joker_67909 ; // Joker input parameter
  GALGAS_string joker_67912 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_67891, var_size_67907, joker_67909, joker_67912, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1915)) ;
  GALGAS_uint var_bankAccessibility_67940 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_67977 (var_registerAddressList_67891, kEnumeration_up) ;
  while (enumerator_67977.hasCurrentObject ()) {
    var_bankAccessibility_67940 = var_bankAccessibility_67940.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_67977.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1918)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1918)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1918)) ;
    enumerator_67977.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_bankAccessibility_67940.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920)).objectCompare (GALGAS_uint ((uint32_t) 1U).left_shift_operation (constinArgument_inTotalBankCount COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)).add_operation (GALGAS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_size_67907.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (var_size_67907.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)) ;
  }
  GALGAS_bitSliceTable joker_68564 ; // Joker input parameter
  GALGAS_string joker_68567 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_67891, var_size_67907, joker_68564, joker_68567, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1927)) ;
  var_bankAccessibility_67940 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_68626 (var_registerAddressList_67891, kEnumeration_up) ;
  while (enumerator_68626.hasCurrentObject ()) {
    var_bankAccessibility_67940 = var_bankAccessibility_67940.operator_or (GALGAS_uint ((uint32_t) 1U).left_shift_operation (enumerator_68626.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1930)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1930)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1930)) ;
    enumerator_68626.gotoNextObject () ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_bankAccessibility_67940.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1932)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)) ;
  }
  const enumGalgasBool test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_67907.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1935)).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).add_operation (var_size_67907.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)) ;
  }else if (kBoolFalse == test_6) {
    const enumGalgasBool test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)).operator_and (GALGAS_bool (kIsNotEqual, var_size_67907.objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)).add_operation (var_size_67907.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)) ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1941)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_registerExpression var_first_5F_register_69303 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1944))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1944))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1944)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1945))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1942)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_69501 ;
    GALGAS_bitSliceTable joker_69665 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_69303.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_69501, joker_69665, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948)) ;
    GALGAS_registerExpression var_second_5F_register_69720 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1959))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1959))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1959)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1960))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1957)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription_69920 ;
    GALGAS_bitSliceTable joker_70117 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_second_5F_register_69720.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription_69920, joker_70117, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)) ;
    GALGAS_registerExpression var_STATUS_5F_register_70210 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1974))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1974)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1975))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1975))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1975)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1976))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1973)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_70422 ;
    GALGAS_bitSliceTable joker_70597 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_70210.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1981)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_70422, joker_70597, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1979)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1988)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1988)), var_first_5F_IPICregisterDescription_69501  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1988))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1988)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)), var_STATUS_5F_IPICregisterDescription_70422, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1990)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1990)), var_STATUS_5F_IPICregisterDescription_70422  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1990))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1990)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1991)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1991)), var_second_5F_IPICregisterDescription_69920  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1991))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1991)) ;
    const enumGalgasBool test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_registerExpression var_reg_71360 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1995)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1993)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_71819 ;
      GALGAS_bitSliceTable joker_71829 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_reg_71360.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_71819, joker_71829, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1999)) ;
      GALGAS_registerExpression var_PCLATH_5F_register_71930 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2010))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2010)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2011))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2011))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2011)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2012))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2009)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_72163 ;
      GALGAS_bitSliceTable joker_72352 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_71930.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2017)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_72163, joker_72352, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2015)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024)), var_PCLATH_5F_IPICregisterDescription_72163, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_71819  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2025)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026)), var_PCLATH_5F_IPICregisterDescription_72163  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026)) ;
    }
    GALGAS_bool var_continuesInSequence_72985 ;
    GALGAS_uint var_currentBank_73007 = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_73007, GALGAS_bool (false), var_continuesInSequence_72985, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2043)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2031)) ;
    }
    const enumGalgasBool test_12 = var_continuesInSequence_72985.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2046)).boolEnum () ;
    if (kBoolTrue == test_12) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray13  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2047)) ;
    }
    const enumGalgasBool test_14 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_registerExpression var_reg_73644 = GALGAS_registerExpression::constructor_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2052))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2052))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2052)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2053))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_73989 ;
      GALGAS_bitSliceTable joker_73999 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_reg_73644.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_73989, joker_73999, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)) ;
      GALGAS_registerExpression var_PCLATH_5F_register_74100 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2066))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2066)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2067))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2067))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2067)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2068))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2065)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_74332 ;
      GALGAS_bitSliceTable joker_74521 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_74100.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2073)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_74332, joker_74521, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2071)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2080)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2080)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_73989, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2080))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2080)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081)), var_PCLATH_5F_IPICregisterDescription_74332  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)), var_second_5F_IPICregisterDescription_69920, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2084)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)), var_STATUS_5F_IPICregisterDescription_70422  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2085)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)), var_first_5F_IPICregisterDescription_69501, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087)), var_first_5F_IPICregisterDescription_69501, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087)) ;
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
  GALGAS_uintlist var_registerAddressList_76679 ;
  GALGAS_uint var_size_76695 ;
  GALGAS_bitSliceTable joker_76697 ; // Joker input parameter
  GALGAS_string joker_76700 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_76679, var_size_76695, joker_76697, joker_76700, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2111)) ;
  GALGAS_bool var_accessibleFromBank_30__76730 = GALGAS_bool (false) ;
  GALGAS_uint var_offset_76753 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_uintlist enumerator_76802 (var_registerAddressList_76679, kEnumeration_up) ;
  bool bool_0 = var_accessibleFromBank_30__76730.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2114)).isValidAndTrue () ;
  if (enumerator_76802.hasCurrentObject () && bool_0) {
    while (enumerator_76802.hasCurrentObject () && bool_0) {
      var_offset_76753 = enumerator_76802.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2115)) ;
      var_accessibleFromBank_30__76730 = GALGAS_bool (kIsEqual, enumerator_76802.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2116)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_76802.gotoNextObject () ;
      if (enumerator_76802.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30__76730.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2114)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_accessibleFromBank_30__76730.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2118)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)) ;
  }
  const enumGalgasBool test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_76695.objectCompare (GALGAS_uint ((uint32_t) 3U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (var_size_76695.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (GALGAS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).operator_and (GALGAS_bool (kIsNotEqual, var_size_76695.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).add_operation (var_size_76695.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)) ;
    }
  }
  GALGAS_uintlist var_saveStatusRegisterAddressList_77559 = var_registerAddressList_76679 ;
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inSecondSaveRegister.mAttribute_string  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)) ;
  GALGAS_bitSliceTable joker_77711 ; // Joker input parameter
  GALGAS_string joker_77714 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_76679, var_size_76695, joker_77711, joker_77714, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)) ;
  var_saveStatusRegisterAddressList_77559 = var_saveStatusRegisterAddressList_77559.add_operation (var_registerAddressList_76679, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)) ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_size_76695.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)).add_operation (var_size_76695.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)) ;
  }
  GALGAS_bool var_accessibleFromBank_31__78031 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_78072 (var_registerAddressList_76679, kEnumeration_up) ;
  bool bool_9 = var_accessibleFromBank_31__78031.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2136)).isValidAndTrue () ;
  if (enumerator_78072.hasCurrentObject () && bool_9) {
    while (enumerator_78072.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31__78031 = GALGAS_bool (kIsEqual, enumerator_78072.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2137)).objectCompare (GALGAS_uint ((uint32_t) 128U))) ;
      enumerator_78072.gotoNextObject () ;
      if (enumerator_78072.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31__78031.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2136)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_10 = var_accessibleFromBank_31__78031.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)).boolEnum () ;
  if (kBoolTrue == test_10) {
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)) ;
  }
  GALGAS_bool var_offsetOk_78423 = GALGAS_bool (true) ;
  cEnumerator_uintlist enumerator_78463 (var_registerAddressList_76679, kEnumeration_up) ;
  bool bool_12 = var_offsetOk_78423.isValidAndTrue () ;
  if (enumerator_78463.hasCurrentObject () && bool_12) {
    while (enumerator_78463.hasCurrentObject () && bool_12) {
      var_offsetOk_78423 = GALGAS_bool (kIsEqual, var_offset_76753.objectCompare (enumerator_78463.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2145)))) ;
      const enumGalgasBool test_13 = var_offsetOk_78423.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2146)).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (GALGAS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (enumerator_78463.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (GALGAS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (GALGAS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (var_offset_76753.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2149)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (GALGAS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2149)), fixItArray14  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)) ;
      }
      enumerator_78463.gotoNextObject () ;
      if (enumerator_78463.hasCurrentObject ()) {
        bool_12 = var_offsetOk_78423.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2153)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_registerExpression var_first_5F_register_78928 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2157))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2154)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_79126 ;
    GALGAS_bitSliceTable joker_79290 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_78928.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_79126, joker_79290, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2160)) ;
    GALGAS_registerExpression var_first_5F_register_5F_second_5F_byte_79356 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2169)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79579 ;
    GALGAS_bitSliceTable joker_79772 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte_79356.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79579, joker_79772, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2175)) ;
    GALGAS_registerExpression var_STATUS_5F_register_79865 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2186))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2186)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2187))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2187))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2187)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2188))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2185)) ;
    GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_80096 ;
    GALGAS_bitSliceTable joker_80271 ; // Joker input parameter
    callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_STATUS_5F_register_79865.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_80096, joker_80271, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2191)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2200)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2200)), var_first_5F_IPICregisterDescription_79126  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2200))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2200)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2201)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2201)), var_STATUS_5F_IPICregisterDescription_80096, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2201))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2201)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2202)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2202)), var_STATUS_5F_IPICregisterDescription_80096  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2202))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2202)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2203)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2203)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79579  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2203))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2203)) ;
    const enumGalgasBool test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_81073 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2207)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2208))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81304 ;
      GALGAS_bitSliceTable joker_81508 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_81073.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81304, joker_81508, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2211)) ;
      GALGAS_registerExpression var_PCLATH_5F_register_81609 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2222))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2222)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2223))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2223))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2223)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2224))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2221)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_81848 ;
      GALGAS_bitSliceTable joker_82037 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_81609.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2229)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_81848, joker_82037, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2227)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236)), var_PCLATH_5F_IPICregisterDescription_81848, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2236)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2237)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2237)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81304  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2237))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2237)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2238)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2238)), var_PCLATH_5F_IPICregisterDescription_81848  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2238))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2238)) ;
    }
    GALGAS_bool var_continuesInSequence_82676 ;
    GALGAS_uint var_currentBank_82698 = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_handleMidrangeInstructionList (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_82698, GALGAS_bool (true), var_continuesInSequence_82676, GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2255)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2243)) ;
    }
    const enumGalgasBool test_17 = var_continuesInSequence_82676.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2258)).boolEnum () ;
    if (kBoolTrue == test_17) {
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray18  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)) ;
    }
    const enumGalgasBool test_19 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_83340 = GALGAS_registerExpression::constructor_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 2U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2262)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_83720 ;
      GALGAS_bitSliceTable joker_83730 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_83340.ptr (), constinArgument_inTotalBankCount, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_83720, joker_83730, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2267)) ;
      GALGAS_registerExpression var_PCLATH_5F_register_83831 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2278))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2278)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2279))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2279))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2279)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2280))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2277)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_84071 ;
      GALGAS_bitSliceTable joker_84260 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_83831.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2285)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_84071, joker_84260, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2283)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2292)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2292)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_83720, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2292))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2292)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2293)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2293)), var_PCLATH_5F_IPICregisterDescription_84071  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2293))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2293)) ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2296)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2296)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79579, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2296))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2296)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2297)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2297)), var_STATUS_5F_IPICregisterDescription_80096  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2297))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2297)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2298)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2298)), var_first_5F_IPICregisterDescription_79126, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2298))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2298)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)), var_first_5F_IPICregisterDescription_79126, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2299)) ;
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
  GALGAS_uint var_currentAddress_6804 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 167)) ;
  GALGAS_bool var_found_6957 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 169)).isValid ()) {
    uint32_t variant_6972 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 169)).uintValue () ;
    bool loop_6972 = true ;
    while (loop_6972) {
      loop_6972 = GALGAS_bool (kIsStrictInf, var_currentAddress_6804.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6957.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).isValid () ;
      if (loop_6972) {
        loop_6972 = GALGAS_bool (kIsStrictInf, var_currentAddress_6804.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6957.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).boolValue () ;
      }
      if (loop_6972 && (0 == variant_6972)) {
        loop_6972 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 169)) ;
      }
      if (loop_6972) {
        variant_6972 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6804, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6804, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_actualInstruction cast_7223_instr ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6804, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ()) ;
            outArgument_outFirstInstruction = cast_7223_instr ;
            var_found_6957 = GALGAS_bool (true) ;
          }else{
            var_currentAddress_6804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 177)) ;
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
  GALGAS_uint var_currentAddress_7734 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 193)) ;
  GALGAS_bool var_found_7887 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 195)).isValid ()) {
    uint32_t variant_7902 = constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 195)).uintValue () ;
    bool loop_7902 = true ;
    while (loop_7902) {
      loop_7902 = GALGAS_bool (kIsStrictInf, var_currentAddress_7734.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)))).operator_and (var_found_7887.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 196)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 196)).isValid () ;
      if (loop_7902) {
        loop_7902 = GALGAS_bool (kIsStrictInf, var_currentAddress_7734.objectCompare (constinArgument_inGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 196)))).operator_and (var_found_7887.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 196)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 196)).boolValue () ;
      }
      if (loop_7902 && (0 == variant_7902)) {
        loop_7902 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 195)) ;
      }
      if (loop_7902) {
        variant_7902 -- ;
        if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_actualInstruction cast_8153_instr ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8153_instr ;
            var_found_7887 = GALGAS_bool (true) ;
          }else if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ())) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG cast_8260_instr ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8260_instr ;
            var_found_7887 = GALGAS_bool (true) ;
          }else if (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL cast_8369_instr ((cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7734, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 198)).ptr ()) ;
            outArgument_outFirstInstruction = cast_8369_instr ;
            outArgument_outReachedLabelSet.addAssign_operation (cast_8369_instr.getter_mLabel (SOURCE_FILE ("midrange_optimizations.galgas", 207)).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 207))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 207)) ;
            var_currentAddress_7734.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 208)) ;
          }else{
            var_currentAddress_7734.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 210)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 530)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 530)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 531)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 532)) ;
  GALGAS_symbolTableForOptimizations var_symbolTable_22357 = GALGAS_symbolTableForOptimizations::constructor_emptyMap (SOURCE_FILE ("midrange_optimizations.galgas", 534)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_22438 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
  GALGAS_uint index_22404 ((uint32_t) 0) ;
  while (enumerator_22438.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_22438.current_mInstruction (HERE).ptr (), var_symbolTable_22357, index_22404, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 536)) ;
    enumerator_22438.gotoNextObject () ;
    index_22404.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 535)) ;
  }
  GALGAS_bool var_optimizationsDone_22598 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_22623 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 541)).isValid ()) {
    uint32_t variant_22634 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_optimizations.galgas", 541)).uintValue () ;
    bool loop_22634 = true ;
    while (loop_22634) {
      loop_22634 = var_optimizationsDone_22598.isValid () ;
      if (loop_22634) {
        loop_22634 = var_optimizationsDone_22598.boolValue () ;
      }
      if (loop_22634 && (0 == variant_22634)) {
        loop_22634 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 541)) ;
      }
      if (loop_22634) {
        variant_22634 -- ;
        var_optimizationsDone_22598 = GALGAS_bool (false) ;
        var_iteration_22623.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 545)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_22623.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_22880 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        GALGAS_uint index_22846 ((uint32_t) 0) ;
        while (enumerator_22880.hasCurrentObject ()) {
          if (enumerator_22880.current_mInstruction (HERE).isValid ()) {
            if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO) {
              GALGAS_midrange_5F_intermediate_5F_GOTO cast_22964_ipic_GOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeGOTO ((const cPtr_midrange_5F_intermediate_5F_GOTO *) cast_22964_ipic_GOTO.ptr (), var_symbolTable_22357, index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22598, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 551)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
              GALGAS_midrange_5F_intermediate_5F_JUMP cast_23139_ipic_JUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeJUMP ((const cPtr_midrange_5F_intermediate_5F_JUMP *) cast_23139_ipic_JUMP.ptr (), var_symbolTable_22357, index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22598, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 553)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation) {
              GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation cast_23507_ipic_literal ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeMOVLW ((const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) cast_23507_ipic_literal.ptr (), index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22598, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition) {
              GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition cast_23696_ipic_decInc ((cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeTestDecInc ((const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) cast_23696_ipic_decInc.ptr (), var_symbolTable_22357, index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22598, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 559)) ;
            }else if (enumerator_22880.current_mInstruction (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) {
              GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip cast_23905_ipic_bitTestSkip ((cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) enumerator_22880.current_mInstruction (HERE).ptr ()) ;
              callExtensionMethod_optimizeBitTestSkip ((const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) cast_23905_ipic_bitTestSkip.ptr (), index_22846, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22598, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 561)) ;
            }
          }
          enumerator_22880.gotoNextObject () ;
          index_22846.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 548)) ;
        }
        GALGAS_stringset var_referencedLabels_24119 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 566)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24184 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        while (enumerator_24184.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24184.current_mInstruction (HERE).ptr (), var_referencedLabels_24119, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)) ;
          enumerator_24184.gotoNextObject () ;
        }
        cEnumerator_symbolTableForOptimizations enumerator_24283 (var_symbolTable_22357, kEnumeration_up) ;
        while (enumerator_24283.hasCurrentObject ()) {
          const enumGalgasBool test_0 = var_referencedLabels_24119.getter_hasKey (enumerator_24283.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 571)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 571)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 571)).boolEnum () ;
          if (kBoolTrue == test_0) {
            GALGAS_uint var_definitionLine_24408 ;
            GALGAS_bool joker_24410 ; // Joker input parameter
            var_symbolTable_22357.method_searchKey (enumerator_24283.current_lkey (HERE), var_definitionLine_24408, joker_24410, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 572)) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_24408.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)).add_operation (enumerator_24283.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)) ;
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 574)), var_definitionLine_24408, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 574)) ;
            }
            {
            GALGAS_uint joker_24685 ; // Joker input parameter
            GALGAS_bool joker_24688 ; // Joker input parameter
            var_symbolTable_22357.setter_removeKey (enumerator_24283.current_lkey (HERE), joker_24685, joker_24688, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 575)) ;
            }
          }
          enumerator_24283.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_24757 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_24794 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_24843 = GALGAS_bool (false) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24893 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        GALGAS_uint index_24859 ((uint32_t) 0) ;
        while (enumerator_24893.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_reachable_24757.operator_or (var_previousWasSkippingInstruction_24843 COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 583)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_reachable_24757 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 584)) ;
            var_previousWasSkippingInstruction_24843 = var_skippingInstruction_24794 ;
            var_skippingInstruction_24794 = callExtensionGetter_isSkippingInstruction ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 586)) ;
          }else if (kBoolFalse == test_1) {
            GALGAS_bool var_isLABELorORG_25196 = callExtensionGetter_isLABELorORG ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 588)) ;
            const enumGalgasBool test_2 = var_isLABELorORG_25196.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 589)).operator_and (callExtensionGetter_isNULL ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24893.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 589)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 589)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 589)).boolEnum () ;
            if (kBoolTrue == test_2) {
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_24859.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)).add_operation (GALGAS_string (": unreachable instruction is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 591)), index_24859, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 591)) ;
              }
            }else if (kBoolFalse == test_2) {
              const enumGalgasBool test_3 = var_isLABELorORG_25196.boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachable_24757 = GALGAS_bool (true) ;
                var_previousWasSkippingInstruction_24843 = GALGAS_bool (false) ;
                var_skippingInstruction_24794 = GALGAS_bool (false) ;
              }
            }
          }
          enumerator_24893.gotoNextObject () ;
          index_24859.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 582)) ;
        }
        const enumGalgasBool test_4 = var_optimizationsDone_22598.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 599)).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 600)) ;
          GALGAS_uint var_currentAddress_25819 = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_25867 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
          while (enumerator_25867.hasCurrentObject ()) {
            callExtensionMethod_setCurrentAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_25867.current_mInstruction (HERE).ptr (), var_currentAddress_25819, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 604)) ;
            enumerator_25867.gotoNextObject () ;
          }
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_25819.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 606)).add_operation (GALGAS_string (" instructions\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 606)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 318)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("COMPUTE JSR and JUMP").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 319)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)) ;
  GALGAS_bool var_JUMP_5F_or_5F_JSR_5F_fixed_13072 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_13097 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 323)).isValid ()) {
    uint32_t variant_13108 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 323)).uintValue () ;
    bool loop_13108 = true ;
    while (loop_13108) {
      loop_13108 = var_JUMP_5F_or_5F_JSR_5F_fixed_13072.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).isValid () ;
      if (loop_13108) {
        loop_13108 = var_JUMP_5F_or_5F_JSR_5F_fixed_13072.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)).boolValue () ;
      }
      if (loop_13108 && (0 == variant_13108)) {
        loop_13108 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 323)) ;
      }
      if (loop_13108) {
        variant_13108 -- ;
        var_JUMP_5F_or_5F_JSR_5F_fixed_13072 = GALGAS_bool (false) ;
        var_iteration_13097.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 327)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_13097.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 328)) ;
        GALGAS_midrange_5F_symbolTableForConvertingRelatives var_symbolTable_13398 = GALGAS_midrange_5F_symbolTableForConvertingRelatives::constructor_emptyMap (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 330)) ;
        GALGAS_uint var_currentAddress_13479 = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13525 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        while (enumerator_13525.hasCurrentObject ()) {
          callExtensionMethod_defineLabelAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13525.current_mInstruction (HERE).ptr (), var_symbolTable_13398, var_currentAddress_13479, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 333)) ;
          enumerator_13525.gotoNextObject () ;
        }
        GALGAS_uint var_lastAddressForFirstPass_13643 = var_currentAddress_13479 ;
        var_currentAddress_13479 = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13788 (ioArgument_ioGeneratedInstructionList, kEnumeration_up) ;
        GALGAS_uint index_13754 ((uint32_t) 0) ;
        while (enumerator_13788.hasCurrentObject ()) {
          callExtensionMethod_compute ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13788.current_mInstruction (HERE).ptr (), var_symbolTable_13398, var_currentAddress_13479, var_JUMP_5F_or_5F_JSR_5F_fixed_13072, ioArgument_ioGeneratedInstructionList, index_13754, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 339)) ;
          var_currentAddress_13479 = var_currentAddress_13479.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13788.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)) ;
          enumerator_13788.gotoNextObject () ;
          index_13754.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 338)) ;
        }
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_13643.objectCompare (var_currentAddress_13479)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_13479.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)).add_operation (GALGAS_string (" value when checking relative branches, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)).add_operation (var_lastAddressForFirstPass_13643.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 344)).add_operation (GALGAS_string (" value when computing routine map"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)), fixItArray1  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)) ;
        }
        const enumGalgasBool test_2 = var_JUMP_5F_or_5F_JSR_5F_fixed_13072.operator_not (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 347)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No JUMP, no JSR to fix\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 348)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Program size: ").add_operation (var_currentAddress_13479.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)).add_operation (GALGAS_string (" instructions\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 349)) ;
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
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  errorlevel -306 ; No Warning on crossing page boundary\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 304)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 307)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  ORG 0\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 308)) ;
  GALGAS_uint var_bccLabelIndex_8995 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9030 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_9030.hasCurrentObject ()) {
    callExtensionMethod_buildAssemblyCode ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9030.current_mInstruction (HERE).ptr (), outArgument_outAssemblyCode, var_bccLabelIndex_8995, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 311)) ;
    enumerator_9030.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 313)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 315)) ;
  cEnumerator_registerTable enumerator_9246 (constinArgument_inPredefinedRegisters, kEnumeration_up) ;
  while (enumerator_9246.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister_9273 ;
    enumerator_9246.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9273, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 317)) ;
    outArgument_outAssemblyCode.plusAssign_operation(enumerator_9246.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (var_firstRegister_9273.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)) ;
    enumerator_9246.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 320)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 322)) ;
  cEnumerator_registerTable enumerator_9556 (constinArgument_inAllRegisters, kEnumeration_up) ;
  while (enumerator_9556.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_9556.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).operator_not (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_firstRegister_9647 ;
      enumerator_9556.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9647, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 325)) ;
      outArgument_outAssemblyCode.plusAssign_operation(enumerator_9556.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (var_firstRegister_9647.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)) ;
    }
    enumerator_9556.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 329)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Piccolo defined symbol\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 331)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("W EQU 1\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 332)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 334)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Configuration\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 335)) ;
    cEnumerator_actualConfigurationMap enumerator_10119 (constinArgument_inActualConfigurationMap, kEnumeration_up) ;
    while (enumerator_10119.hasCurrentObject ()) {
      outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_10119.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (enumerator_10119.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)) ;
      enumerator_10119.gotoNextObject () ;
    }
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";---\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 341)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  END\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 342)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 13)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inInstructionDescriptionString, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 39)) ;
  callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 41)) ;
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
  GALGAS_uint var_code_8596 = GALGAS_uint ((uint32_t) 10240U).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint ((uint32_t) 2047U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code_8596, ioArgument_ioAddress, GALGAS_string ("GOTO ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)) ;
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
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GALGAS_string ("GOTO (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GALGAS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)) ;
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
  GALGAS_uint var_code_9569 = GALGAS_uint ((uint32_t) 8192U).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint ((uint32_t) 2047U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code_9569, ioArgument_ioAddress, GALGAS_string ("CALL ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)) ;
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
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GALGAS_string ("CALL (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GALGAS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)) ;
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
  GALGAS_midrange_5F_symbolTable var_symbolTable_23936 = GALGAS_midrange_5F_symbolTable::constructor_emptyMap (SOURCE_FILE ("midrange_build_binary_code.galgas", 678)) ;
  GALGAS_uint var_currentAddress_23993 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24037 (constinArgument_inGeneratedInstructionList, kEnumeration_up) ;
  while (enumerator_24037.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24037.current_mInstruction (HERE).ptr (), var_symbolTable_23936, var_currentAddress_23993, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)) ;
    enumerator_24037.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass_24148 = var_currentAddress_23993 ;
  outArgument_outUsedROMsize = var_currentAddress_23993 ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 686)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 686)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 686)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 688)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 688)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 688)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 689)) ;
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 690)) ;
  }
  var_currentAddress_23993 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_setEmitAddress (GALGAS_uint ((uint32_t) 0U), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 692)) ;
  }
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24664 (constinArgument_inGeneratedInstructionList, kEnumeration_up) ;
  while (enumerator_24664.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24664.current_mInstruction (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, constinArgument_inTotalBankCount, var_symbolTable_23936, ioArgument_ioListFileContents, var_currentAddress_23993, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 694)) ;
    {
    routine_checkCurrentEmitAddress (var_currentAddress_23993.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)) ;
    }
    enumerator_24664.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_24148.objectCompare (var_currentAddress_23993)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_23993.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)).add_operation (var_lastAddressForFirstPass_24148.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 707)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 708)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass_24148.objectCompare (constinArgument_inROMsize)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_24148.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 711)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 712)), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)) ;
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
  GALGAS_string var_sourceFileBaseName_773 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 17)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 17)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_773.objectCompare (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 18)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 18)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 19)).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 19)), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 19)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (var_sourceFileBaseName_773, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)), fixItArray1  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)) ;
  }
  GALGAS_string var_listFileContents_1125 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_1220 ;
  {
  routine_parseDeviceDefinition (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 25)), var_piccoloDeviceModel_1220, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 25)) ;
  }
  switch (var_piccoloDeviceModel_1220.getter_mProcessorType (SOURCE_FILE ("midrange_semantics.galgas", 26)).enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 28)).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 28)), GALGAS_string ("a pic18 device is not accepted here : only a mid-range device"), fixItArray2  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 28)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 29)).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 29)), GALGAS_string ("a baseline device is not accepted here : only a mid-range device"), fixItArray3  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 29)) ;
    }
    break ;
  }
  GALGAS_bool var_hasInterrupt_1690 = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_1753 (constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 33)), kEnumeration_up) ;
  while (enumerator_1753.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_hasInterrupt_1690.boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_1753.current_mInterruptLocation (HERE), GALGAS_string ("only one interrupt routine can be defined"), fixItArray5  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 35)) ;
    }
    var_hasInterrupt_1690 = GALGAS_bool (true) ;
    enumerator_1753.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_1995 ;
  {
  routine_buildConfig (var_piccoloDeviceModel_1220.getter_mConfigRegisterMap (SOURCE_FILE ("midrange_semantics.galgas", 42)), constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 43)), var_listFileContents_1125, var_actualConfigurationMap_1995, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 41)) ;
  }
  GALGAS_ramBankTable var_ramBank_2228 = var_piccoloDeviceModel_1220.getter_mRamBankTable (SOURCE_FILE ("midrange_semantics.galgas", 48)) ;
  GALGAS_registerTable var_registerTable_2296 = var_piccoloDeviceModel_1220.getter_mRegisterTable (SOURCE_FILE ("midrange_semantics.galgas", 49)) ;
  GALGAS_declaredByteMap var_declaredByteMap_2566 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.getter_mRamDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 52)), var_ramBank_2228, var_piccoloDeviceModel_1220.getter_mRegisterTable (SOURCE_FILE ("midrange_semantics.galgas", 54)), var_listFileContents_1125, var_registerTable_2296, var_declaredByteMap_2566, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 50)) ;
  }
  GALGAS_stringset var_usedRegisters_2661 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 60)) ;
  GALGAS_midrange_5F_intermediate_5F_instructionList var_generatedInstructionList_3050 ;
  {
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (var_piccoloDeviceModel_1220.getter_mRomSize (SOURCE_FILE ("midrange_semantics.galgas", 62)).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 62)).add_operation (GALGAS_uint ((uint32_t) 2047U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 62)).divide_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 62)), var_piccoloDeviceModel_1220.getter_mBankCount (SOURCE_FILE ("midrange_semantics.galgas", 63)).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 63)), var_piccoloDeviceModel_1220.getter_mRomSize (SOURCE_FILE ("midrange_semantics.galgas", 64)).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 64)).getter_sint (inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 64)), var_piccoloDeviceModel_1220.mAttribute_mSharedBankName, var_registerTable_2296, constinArgument_inPiccoloModel, var_hasInterrupt_1690, var_generatedInstructionList_3050, var_listFileContents_1125, var_usedRegisters_2661, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 61)) ;
  }
  GALGAS_stringset var_usedRoutineSet_3188 = function_midrange_5F_computeUsedRoutines (constinArgument_inPiccoloModel.mAttribute_mInterruptDefinitionList, constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 74)) ;
  GALGAS_midrange_5F_declaredRoutineMap var_declaredRoutineMap_3338 = GALGAS_midrange_5F_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 78)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_3430 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_3430.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_3338.setter_insertKey (enumerator_3430.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 80)) ;
    }
    enumerator_3430.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity_3582 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 83)) ;
  cEnumerator_lstringlist enumerator_3652 (constinArgument_inPiccoloModel.mAttribute_mUnusedRoutineList, kEnumeration_up) ;
  while (enumerator_3652.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_declaredRoutineMap_3338.getter_hasKey (enumerator_3652.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 85)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 85)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_3652.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 86)), GALGAS_string ("the '").add_operation (enumerator_3652.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 86)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 86)), fixItArray7  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 86)) ;
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_8 = var_unusedRoutineDeclarationUnicity_3582.getter_hasKey (enumerator_3652.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticWarning (enumerator_3652.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 88)), GALGAS_string ("the '").add_operation (enumerator_3652.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 88)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 88)), fixItArray9  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 88)) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_10 = var_usedRoutineSet_3188.getter_hasKey (enumerator_3652.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 89)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (enumerator_3652.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 90)), GALGAS_string ("the '").add_operation (enumerator_3652.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 90)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 90)), fixItArray11  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 90)) ;
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_3582.addAssign_operation (enumerator_3652.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 92)) ;
    enumerator_3652.gotoNextObject () ;
  }
  cEnumerator_midrange_5F_declaredRoutineMap enumerator_4180 (var_declaredRoutineMap_3338, kEnumeration_up) ;
  while (enumerator_4180.hasCurrentObject ()) {
    const enumGalgasBool test_12 = var_usedRoutineSet_3188.getter_hasKey (enumerator_4180.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 95)).operator_and (var_unusedRoutineDeclarationUnicity_3582.getter_hasKey (enumerator_4180.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 95)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)).boolEnum () ;
    if (kBoolTrue == test_12) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticWarning (enumerator_4180.current_lkey (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 96)), GALGAS_string ("the '").add_operation (enumerator_4180.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 96)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 96)), fixItArray13  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 96)) ;
    }
    enumerator_4180.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedByteDeclarationUnicity_4500 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 100)) ;
  cEnumerator_lstringlist enumerator_4571 (constinArgument_inPiccoloModel.mAttribute_mUnusedRegisterList, kEnumeration_up) ;
  while (enumerator_4571.hasCurrentObject ()) {
    const enumGalgasBool test_14 = var_registerTable_2296.getter_hasKey (enumerator_4571.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 102)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 102)).boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (enumerator_4571.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 103)), GALGAS_string ("the '").add_operation (enumerator_4571.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)), fixItArray15  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)) ;
    }else if (kBoolFalse == test_14) {
      const enumGalgasBool test_16 = var_unusedByteDeclarationUnicity_4500.getter_hasKey (enumerator_4571.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 104)).boolEnum () ;
      if (kBoolTrue == test_16) {
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_4571.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 105)), GALGAS_string ("the '").add_operation (enumerator_4571.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)), fixItArray17  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)) ;
      }else if (kBoolFalse == test_16) {
        const enumGalgasBool test_18 = var_usedRegisters_2661.getter_hasKey (enumerator_4571.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 106)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticWarning (enumerator_4571.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 107)), GALGAS_string ("the '").add_operation (enumerator_4571.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)), fixItArray19  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)) ;
        }
      }
    }
    var_unusedByteDeclarationUnicity_4500.addAssign_operation (enumerator_4571.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 109)) ;
    enumerator_4571.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_5075 (var_declaredByteMap_2566, kEnumeration_up) ;
  while (enumerator_5075.hasCurrentObject ()) {
    const enumGalgasBool test_20 = var_usedRegisters_2661.getter_hasKey (enumerator_5075.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_and (var_unusedByteDeclarationUnicity_4500.getter_hasKey (enumerator_5075.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 112)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_20) {
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticWarning (enumerator_5075.current_lkey (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 113)), GALGAS_string ("the '").add_operation (enumerator_5075.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113)), fixItArray21  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113)) ;
    }
    enumerator_5075.gotoNextObject () ;
  }
  const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 117)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 117)).boolEnum () ;
  if (kBoolTrue == test_22) {
    {
    routine_perform_5F_midrange_5F_optimizations (var_generatedInstructionList_3050, var_listFileContents_1125, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)) ;
    }
  }
  const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 121)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    {
    routine_midrange_5F_compute_5F_JSR_5F_JUMP (var_generatedInstructionList_3050, var_listFileContents_1125, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)) ;
    }
  }
  const enumGalgasBool test_24 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 126)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_24) {
    GALGAS_uint var_usedROMsize_5860 ;
    {
    routine_build_5F_midrange_5F_ipic_5F_binary_5F_code (var_registerTable_2296, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("midrange_semantics.galgas", 131)), var_piccoloDeviceModel_1220.getter_mBankCount (SOURCE_FILE ("midrange_semantics.galgas", 132)).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 132)), var_generatedInstructionList_3050, var_piccoloDeviceModel_1220.getter_mRomSize (SOURCE_FILE ("midrange_semantics.galgas", 134)).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 134)), var_actualConfigurationMap_1995, var_listFileContents_1125, var_usedROMsize_5860, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 129)) ;
    }
    GALGAS_string var_contents_6152 ;
    {
    routine_getGeneratedContents (var_contents_6152, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 140)) ;
    }
    GALGAS_string var_destinationFile_6219 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 141)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 141)) ;
    GALGAS_bool joker_6345 ; // Joker input parameter
    var_contents_6152.method_writeToFileWhenDifferentContents (var_destinationFile_6219, joker_6345, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 142)) ;
    const enumGalgasBool test_25 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_25) {
      GALGAS_string var_baseName_6432 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 144)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 144)) ;
      {
      routine_get_5F_C_5F_ArrayImplementation (var_baseName_6432, var_contents_6152, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 145)) ;
      }
      var_destinationFile_6219 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 146)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 146)) ;
      GALGAS_bool joker_6707 ; // Joker input parameter
      var_contents_6152.method_writeToFileWhenDifferentContents (var_destinationFile_6219, joker_6707, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 147)) ;
      {
      routine_get_5F_C_5F_ArrayHeader (var_baseName_6432, var_contents_6152, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 148)) ;
      }
      var_destinationFile_6219 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 149)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 149)) ;
      GALGAS_bool joker_6905 ; // Joker input parameter
      var_contents_6152.method_writeToFileWhenDifferentContents (var_destinationFile_6219, joker_6905, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 150)) ;
    }
    const enumGalgasBool test_26 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("midrange_semantics.galgas", 153)).boolEnum () ;
    if (kBoolTrue == test_26) {
      GALGAS_string var_verboseMessage_7020 = GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_1220.getter_mRomSize (SOURCE_FILE ("midrange_semantics.galgas", 154)).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 154)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 154)).add_operation (GALGAS_string (" words;"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 154)) ;
      var_verboseMessage_7020.plusAssign_operation(GALGAS_string (" used: ").add_operation (var_usedROMsize_5860.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155)) ;
      var_verboseMessage_7020.plusAssign_operation(var_usedROMsize_5860.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)).divide_operation (var_piccoloDeviceModel_1220.getter_mRomSize (SOURCE_FILE ("midrange_semantics.galgas", 156)).getter_uint (SOURCE_FILE ("midrange_semantics.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 156)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)) ;
      cEnumerator_ramBankTable enumerator_7294 (var_ramBank_2228, kEnumeration_up) ;
      while (enumerator_7294.hasCurrentObject ()) {
        GALGAS_uint var_bankSize_7320 = enumerator_7294.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_7294.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 158)) ;
        GALGAS_uint var_usedSize_7381 = enumerator_7294.current_mFirstFreeAddress (HERE).substract_operation (enumerator_7294.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 159)) ;
        var_verboseMessage_7020.plusAssign_operation(GALGAS_string ("  RAM bank '").add_operation (enumerator_7294.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160)).add_operation (GALGAS_string ("': "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160)) ;
        var_verboseMessage_7020.plusAssign_operation(var_bankSize_7320.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 161)).add_operation (GALGAS_string (" bytes, used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 161)) ;
        var_verboseMessage_7020.plusAssign_operation(var_usedSize_7381.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 162)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 162)) ;
        var_verboseMessage_7020.plusAssign_operation(var_usedSize_7381.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)).divide_operation (var_bankSize_7320, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 163)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)) ;
        enumerator_7294.gotoNextObject () ;
      }
      inCompiler->printMessage (var_verboseMessage_7020  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 165)) ;
    }
    const enumGalgasBool test_27 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_27) {
      GALGAS_string var_assemblyCode_7857 ;
      {
      routine_midrange_5F_build_5F_assembly_5F_code (var_piccoloDeviceModel_1220.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 171)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 171)), var_piccoloDeviceModel_1220.getter_mRegisterTable (SOURCE_FILE ("midrange_semantics.galgas", 172)), var_registerTable_2296, var_generatedInstructionList_3050, var_actualConfigurationMap_1995, var_assemblyCode_7857, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)) ;
      }
      GALGAS_string var_asmDestinationFile_8142 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 178)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 178)) ;
      GALGAS_bool joker_8277 ; // Joker input parameter
      var_assemblyCode_7857.method_writeToFileWhenDifferentContents (var_asmDestinationFile_8142, joker_8277, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 179)) ;
    }
  }else if (kBoolFalse == test_24) {
    GALGAS_string var_hexDestinationFile_8371 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 182)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 182)) ;
    const enumGalgasBool test_28 = var_hexDestinationFile_8371.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 183)).boolEnum () ;
    if (kBoolTrue == test_28) {
      {
      GALGAS_string::class_method_deleteFile (var_hexDestinationFile_8371, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 184)) ;
      }
    }
    GALGAS_string var_asmDestinationFile_8561 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 186)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 186)) ;
    const enumGalgasBool test_29 = var_asmDestinationFile_8561.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 187)).boolEnum () ;
    if (kBoolTrue == test_29) {
      {
      GALGAS_string::class_method_deleteFile (var_asmDestinationFile_8561, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 188)) ;
      }
    }
  }
  const enumGalgasBool test_30 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_30) {
    GALGAS_string var_listFile_8852 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 193)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 193)) ;
    GALGAS_bool joker_8980 ; // Joker input parameter
    var_listFileContents_1125.method_writeToFileWhenDifferentContents (var_listFile_8852, joker_8980, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 194)) ;
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
  GALGAS_string var_sourceFileBaseName_567 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas", 14)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 14)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_567.objectCompare (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 15)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 15)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 16)).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 16)), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 16)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (var_sourceFileBaseName_567, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)), fixItArray1  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)) ;
  }
  GALGAS_string var_listFileContents_919 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_1014 ;
  GALGAS_uint var_accessBankSplitOffset_1044 ;
  GALGAS_ramBankTable var_ramBank_1068 ;
  GALGAS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap_1121 ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249 ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForBootloaderImplementation_1329 ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416 ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForUserProgramImplementation_1497 ;
  GALGAS_luint var_bootloaderReservedROMsize_1532 ;
  GALGAS_registerTable var_registerTable_1662 ;
  GALGAS_string var_piccoloDeviceName_1690 ;
  switch (constinArgument_inPiccoloModel.mAttribute_mProgramKind.enumValue ()) {
  case GALGAS_programKind::kNotBuilt:
    break ;
  case GALGAS_programKind::kEnum_regularProgram:
    {
      var_piccoloDeviceName_1690 = constinArgument_inPiccoloModel.mAttribute_mDeviceNameOrBootLoaderReference.mAttribute_string ;
      {
      routine_parseDeviceDefinition (constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 35)), var_piccoloDeviceModel_1014, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 35)) ;
      }
      switch (var_piccoloDeviceModel_1014.getter_mProcessorType (SOURCE_FILE ("pic18_semantics.galgas", 36)).enumValue ()) {
      case GALGAS_processorType::kNotBuilt:
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
        {
          var_accessBankSplitOffset_1044 = GALGAS_uint ((uint32_t) 96U) ;
        }
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset_1044 = GALGAS_uint ((uint32_t) 128U) ;
        }
        break ;
      case GALGAS_processorType::kEnum_midrange:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 39)).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 39)), GALGAS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 39)) ;
          var_accessBankSplitOffset_1044.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_processorType::kEnum_baseline:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 40)).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 40)), GALGAS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 40)) ;
          var_accessBankSplitOffset_1044.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_ramBank_1068 = var_piccoloDeviceModel_1014.getter_mRamBankTable (SOURCE_FILE ("pic18_semantics.galgas", 42)) ;
      var_bootloaderReservedRAMmap_1121 = GALGAS_bootloaderReservedRAMmap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 43)) ;
      var_registerTable_1662 = var_piccoloDeviceModel_1014.getter_mRegisterTable (SOURCE_FILE ("pic18_semantics.galgas", 44)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 45)) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1329 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 46)) ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 47)) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1497 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 48)) ;
      var_bootloaderReservedROMsize_1532 = GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49)) ;
    }
    break ;
  case GALGAS_programKind::kEnum_bootloaderProgram:
    {
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 51)) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1497 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 52)) ;
      var_piccoloDeviceModel_1014.drop () ;
      var_piccoloDeviceName_1690.drop () ;
      var_accessBankSplitOffset_1044.drop () ;
      var_ramBank_1068.drop () ;
      var_registerTable_1662.drop () ;
      var_bootloaderReservedRAMmap_1121.drop () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249.drop () ;
      var_userRoutineDeclarationListForBootloaderImplementation_1329.drop () ;
      var_bootloaderReservedROMsize_1532.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 53)), var_piccoloDeviceModel_1014, var_piccoloDeviceName_1690, var_accessBankSplitOffset_1044, var_ramBank_1068, var_registerTable_1662, var_bootloaderReservedRAMmap_1121, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249, var_userRoutineDeclarationListForBootloaderImplementation_1329, var_bootloaderReservedROMsize_1532  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 53)) ;
      cEnumerator_ramBankTable enumerator_3680 (var_ramBank_1068, kEnumeration_up) ;
      while (enumerator_3680.hasCurrentObject ()) {
        {
        var_ramBank_1068.setter_setMFirstFreeAddressForKey (enumerator_3680.current_mFirstAddress (HERE), enumerator_3680.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 64)) ;
        }
        enumerator_3680.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_programKind::kEnum_userProgram:
    {
      var_piccoloDeviceModel_1014.drop () ;
      var_piccoloDeviceName_1690.drop () ;
      var_accessBankSplitOffset_1044.drop () ;
      var_ramBank_1068.drop () ;
      var_registerTable_1662.drop () ;
      var_bootloaderReservedRAMmap_1121.drop () ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416.drop () ;
      var_userRoutineDeclarationListForUserProgramImplementation_1497.drop () ;
      var_bootloaderReservedROMsize_1532.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 67)), var_piccoloDeviceModel_1014, var_piccoloDeviceName_1690, var_accessBankSplitOffset_1044, var_ramBank_1068, var_registerTable_1662, var_bootloaderReservedRAMmap_1121, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416, var_userRoutineDeclarationListForUserProgramImplementation_1497, var_bootloaderReservedROMsize_1532  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 67)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 77)) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1329 = GALGAS_routineDeclarationList::constructor_emptyList (SOURCE_FILE ("pic18_semantics.galgas", 78)) ;
    }
    break ;
  }
  GALGAS_pic_31__38_MacroMap var_macroMap_4537 = GALGAS_pic_31__38_MacroMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 81)) ;
  cEnumerator_pic_31__38_MacroDefinitionList enumerator_4590 (constinArgument_inPiccoloModel.mAttribute_mMacroDefinitionList, kEnumeration_up) ;
  while (enumerator_4590.hasCurrentObject ()) {
    {
    var_macroMap_4537.setter_insertKey (enumerator_4590.current_mMacroName (HERE), enumerator_4590.current_mConstantNameList (HERE), enumerator_4590.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 83)) ;
    }
    enumerator_4590.gotoNextObject () ;
  }
  GALGAS_stringset var_usedRoutineSet_4766 = function_pic_31__38__5F_computeUsedRoutines (constinArgument_inPiccoloModel.mAttribute_mInterruptDefinitionList, constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, var_macroMap_4537, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249, var_userRoutineDeclarationListForUserProgramImplementation_1497, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 86)) ;
  GALGAS_declaredRoutineMap var_declaredRoutineMap_5052 = GALGAS_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 93)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_5135 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_5135.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_5052.setter_insertKey (enumerator_5135.current_mRoutineName (HERE), enumerator_5135.current_mRequiredBank (HERE), enumerator_5135.current_mReturnedBank (HERE), enumerator_5135.current_mPreservesBank (HERE), enumerator_5135.current_mIsNoReturn (HERE), enumerator_5135.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 95)) ;
    }
    enumerator_5135.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_5398 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 105)) ;
  cEnumerator_lstringlist enumerator_5468 (constinArgument_inPiccoloModel.mAttribute_mUnusedRoutineList, kEnumeration_up) ;
  while (enumerator_5468.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_declaredRoutineMap_5052.getter_hasKey (enumerator_5468.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 107)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 107)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_5468.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 108)), GALGAS_string ("the '").add_operation (enumerator_5468.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108)), fixItArray5  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_6 = var_unusedDeclarationUnicity_5398.getter_hasKey (enumerator_5468.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (enumerator_5468.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 110)), GALGAS_string ("the '").add_operation (enumerator_5468.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)), fixItArray7  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)) ;
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = var_usedRoutineSet_4766.getter_hasKey (enumerator_5468.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 111)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticWarning (enumerator_5468.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 112)), GALGAS_string ("the '").add_operation (enumerator_5468.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)), fixItArray9  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)) ;
        }
      }
    }
    var_unusedDeclarationUnicity_5398.addAssign_operation (enumerator_5468.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)) ;
    enumerator_5468.gotoNextObject () ;
  }
  cEnumerator_declaredRoutineMap enumerator_5982 (var_declaredRoutineMap_5052, kEnumeration_up) ;
  while (enumerator_5982.hasCurrentObject ()) {
    const enumGalgasBool test_10 = var_usedRoutineSet_4766.getter_hasKey (enumerator_5982.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_and (var_unusedDeclarationUnicity_5398.getter_hasKey (enumerator_5982.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 117)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticWarning (enumerator_5982.current_lkey (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 118)), GALGAS_string ("the '").add_operation (enumerator_5982.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118)), fixItArray11  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118)) ;
    }
    enumerator_5982.gotoNextObject () ;
  }
  GALGAS_stringset var_inlinedRoutineSet_6243 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 122)) ;
  cEnumerator_lstringlist enumerator_6314 (constinArgument_inPiccoloModel.mAttribute_mInlinedRoutineList, kEnumeration_up) ;
  while (enumerator_6314.hasCurrentObject ()) {
    const enumGalgasBool test_12 = var_declaredRoutineMap_5052.getter_hasKey (enumerator_6314.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 124)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 124)).boolEnum () ;
    if (kBoolTrue == test_12) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (enumerator_6314.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 125)), GALGAS_string ("the '").add_operation (enumerator_6314.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125)), fixItArray13  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125)) ;
    }else if (kBoolFalse == test_12) {
      const enumGalgasBool test_14 = var_usedRoutineSet_4766.getter_hasKey (enumerator_6314.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 126)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_6314.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 127)), GALGAS_string ("useless declaration, the '").add_operation (enumerator_6314.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)), fixItArray15  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)) ;
      }else if (kBoolFalse == test_14) {
        var_inlinedRoutineSet_6243.addAssign_operation (enumerator_6314.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)) ;
      }
    }
    enumerator_6314.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_6708 = constinArgument_inPiccoloModel.mAttribute_mInterruptDefinitionList ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_6802 = constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList ;
  {
  routine_pic_31__38_PerformRoutineInline (var_inlinedRoutineSet_6243, var_declaredRoutineMap_5052, var_interruptDefinitionList_6708, var_routineDefinitionList_6802, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 134)) ;
  }
  cEnumerator_checkpicList enumerator_7087 (constinArgument_inPiccoloModel.mAttribute_mCheckpicList, kEnumeration_up) ;
  while (enumerator_7087.hasCurrentObject ()) {
    GALGAS_bool var_found_7106 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7140 (enumerator_7087.current_mValueList (HERE), kEnumeration_up) ;
    bool bool_16 = var_found_7106.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 143)).isValidAndTrue () ;
    if (enumerator_7140.hasCurrentObject () && bool_16) {
      while (enumerator_7140.hasCurrentObject () && bool_16) {
        var_found_7106 = GALGAS_bool (kIsEqual, enumerator_7140.current_mValue (HERE).mAttribute_string.objectCompare (var_piccoloDeviceName_1690)) ;
        enumerator_7140.gotoNextObject () ;
        if (enumerator_7140.hasCurrentObject ()) {
          bool_16 = var_found_7106.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 143)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_17 = var_found_7106.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 146)).boolEnum () ;
    if (kBoolTrue == test_17) {
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (enumerator_7087.current_mErrorLocation (HERE), GALGAS_string ("this code is not available for '").add_operation (var_piccoloDeviceName_1690, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147)), fixItArray18  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147)) ;
    }
    enumerator_7087.gotoNextObject () ;
  }
  GALGAS_bool var_hasHighInterrupt_7413 = GALGAS_bool (false) ;
  GALGAS_bool var_highInterruptIsFast_7449 = GALGAS_bool (false) ;
  GALGAS_bool var_hasLowInterrupt_7481 = GALGAS_bool (false) ;
  GALGAS_bool var_lowInterruptIsFast_7516 = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7561 (var_interruptDefinitionList_6708, kEnumeration_up) ;
  while (enumerator_7561.hasCurrentObject ()) {
    const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.getter_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 156)).objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 156)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      TC_Array <C_FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (enumerator_7561.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 157)), GALGAS_string ("interrupt routine is not allowed for a bootloader user program"), fixItArray20  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 157)) ;
    }
    const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, enumerator_7561.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 159)).objectCompare (GALGAS_string ("high"))).boolEnum () ;
    if (kBoolTrue == test_21) {
      var_highInterruptIsFast_7449 = enumerator_7561.current_mFastReturn (HERE) ;
      const enumGalgasBool test_22 = var_hasHighInterrupt_7413.boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (enumerator_7561.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 162)), GALGAS_string ("Only one 'high' interrupt routine is allowed"), fixItArray23  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 162)) ;
      }
      var_hasHighInterrupt_7413 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_21) {
      const enumGalgasBool test_24 = GALGAS_bool (kIsEqual, enumerator_7561.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 165)).objectCompare (GALGAS_string ("low"))).boolEnum () ;
      if (kBoolTrue == test_24) {
        var_lowInterruptIsFast_7516 = enumerator_7561.current_mFastReturn (HERE) ;
        const enumGalgasBool test_25 = var_hasLowInterrupt_7481.boolEnum () ;
        if (kBoolTrue == test_25) {
          TC_Array <C_FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (enumerator_7561.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 168)), GALGAS_string ("Only one 'low' interrupt routine is allowed"), fixItArray26  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 168)) ;
        }
        var_hasLowInterrupt_7481 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_24) {
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_7561.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 172)), GALGAS_string ("An interrupt routine should be named 'low' or 'high'"), fixItArray27  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 172)) ;
      }
    }
    const enumGalgasBool test_28 = var_highInterruptIsFast_7449.operator_and (var_lowInterruptIsFast_7516 COMMA_SOURCE_FILE ("pic18_semantics.galgas", 174)).boolEnum () ;
    if (kBoolTrue == test_28) {
      TC_Array <C_FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (enumerator_7561.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 175)), GALGAS_string ("either low interrupt or high interrupt can be \"fast\", not both"), fixItArray29  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 175)) ;
    }
    enumerator_7561.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_8564 ;
  const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.getter_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 180)).objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 180)))).boolEnum () ;
  if (kBoolTrue == test_30) {
    cEnumerator_configDefinitionList enumerator_8687 (constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 181)), kEnumeration_up) ;
    while (enumerator_8687.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (enumerator_8687.current_mDefinitionLocation (HERE), GALGAS_string ("configuration is not allowed for a bootloader user program"), fixItArray31  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 182)) ;
      enumerator_8687.gotoNextObject () ;
    }
    var_actualConfigurationMap_8564 = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 184)) ;
  }else if (kBoolFalse == test_30) {
    {
    routine_buildConfig (var_piccoloDeviceModel_1014.getter_mConfigRegisterMap (SOURCE_FILE ("pic18_semantics.galgas", 187)), constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 188)), var_listFileContents_919, var_actualConfigurationMap_8564, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 186)) ;
    }
  }
  GALGAS_declaredByteMap var_declaredByteMap_9321 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.getter_mRamDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 196)), var_ramBank_1068, var_piccoloDeviceModel_1014.getter_mRegisterTable (SOURCE_FILE ("pic18_semantics.galgas", 198)), var_listFileContents_919, var_registerTable_1662, var_declaredByteMap_9321, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 194)) ;
  }
  const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.getter_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 204)).objectCompare (GALGAS_programKind::constructor_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas", 204)))).boolEnum () ;
  if (kBoolTrue == test_32) {
    cEnumerator_ramBankTable enumerator_9542 (var_ramBank_1068, kEnumeration_up) ;
    while (enumerator_9542.hasCurrentObject ()) {
      const enumGalgasBool test_33 = var_bootloaderReservedRAMmap_1121.getter_hasKey (enumerator_9542.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 206)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)).boolEnum () ;
      if (kBoolTrue == test_33) {
        GALGAS_luint var_bootloaderReservedSize_9646 ;
        var_bootloaderReservedRAMmap_1121.method_searchKey (enumerator_9542.current_lkey (HERE), var_bootloaderReservedSize_9646, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 208)) ;
        const enumGalgasBool test_34 = GALGAS_bool (kIsStrictSup, enumerator_9542.current_mFirstFreeAddress (HERE).substract_operation (enumerator_9542.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 209)).objectCompare (var_bootloaderReservedSize_9646.getter_uint (SOURCE_FILE ("pic18_semantics.galgas", 209)))).boolEnum () ;
        if (kBoolTrue == test_34) {
          TC_Array <C_FixItDescription> fixItArray35 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)), GALGAS_string ("for '").add_operation (enumerator_9542.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)).add_operation (enumerator_9542.current_mFirstFreeAddress (HERE).substract_operation (enumerator_9542.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 211)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 211)).add_operation (var_bootloaderReservedSize_9646.getter_uint (SOURCE_FILE ("pic18_semantics.galgas", 213)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 212)).add_operation (GALGAS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 213)), fixItArray35  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)) ;
        }
      }else if (kBoolFalse == test_33) {
        const enumGalgasBool test_36 = GALGAS_bool (kIsStrictSup, enumerator_9542.current_mFirstFreeAddress (HERE).objectCompare (enumerator_9542.current_mFirstAddress (HERE))).boolEnum () ;
        if (kBoolTrue == test_36) {
          TC_Array <C_FixItDescription> fixItArray37 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)), GALGAS_string ("for '").add_operation (enumerator_9542.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (enumerator_9542.current_mFirstFreeAddress (HERE).substract_operation (enumerator_9542.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 218)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 218)), fixItArray37  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)) ;
        }
      }
      enumerator_9542.gotoNextObject () ;
    }
  }
  GALGAS_uint var_RAMsize_10497 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ramBankTable enumerator_10522 (var_ramBank_1068, kEnumeration_up) ;
  while (enumerator_10522.hasCurrentObject ()) {
    const enumGalgasBool test_38 = GALGAS_bool (kIsStrictSup, enumerator_10522.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize_10497)).boolEnum () ;
    if (kBoolTrue == test_38) {
      var_RAMsize_10497 = enumerator_10522.current_mLastAddressPlusOne (HERE) ;
    }
    enumerator_10522.gotoNextObject () ;
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (constinArgument_inSourceFileName, var_piccoloDeviceModel_1014.mAttribute_mRomSize.mAttribute_uint.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 233)), var_RAMsize_10497.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 234)), var_macroMap_4537, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249, var_userRoutineDeclarationListForBootloaderImplementation_1329, var_bootloaderReservedROMsize_1532, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416, var_userRoutineDeclarationListForUserProgramImplementation_1497, var_accessBankSplitOffset_1044, var_registerTable_1662, var_declaredByteMap_9321, var_routineDefinitionList_6802, constinArgument_inPiccoloModel.mAttribute_mProgramKind, constinArgument_inPiccoloModel.mAttribute_mConstantDefinitionList, constinArgument_inPiccoloModel.mAttribute_mDataList, var_interruptDefinitionList_6708, constinArgument_inPiccoloModel.mAttribute_mUnusedRegisterList, var_ramBank_1068, var_hasHighInterrupt_7413, var_hasLowInterrupt_7481, var_piccoloDeviceModel_1014.mAttribute_mDeviceName.mAttribute_string, var_piccoloDeviceModel_1014.mAttribute_mRegisterTable, var_actualConfigurationMap_8564, constinArgument_inPiccoloModel.mAttribute_mEndOfProgram, var_listFileContents_919, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 231)) ;
  }
  const enumGalgasBool test_39 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_39) {
    var_listFileContents_919.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 261)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 261)) ;
    GALGAS_string var_listFile_11868 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 262)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 262)) ;
    GALGAS_bool joker_11996 ; // Joker input parameter
    var_listFileContents_919.method_writeToFileWhenDifferentContents (var_listFile_11868, joker_11996, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 263)) ;
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
  GALGAS_string var_sourceFileBaseName_747 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_747.objectCompare (constinArgument_inBootloaderName.getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 21)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inBootloaderName.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)), GALGAS_string ("the bootloader name ('").add_operation (constinArgument_inBootloaderName.getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (var_sourceFileBaseName_747, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)), fixItArray1  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)) ;
  }
  outArgument_outListFileContents = GALGAS_string::makeEmptyString () ;
  {
  routine_parseDeviceDefinition (constinArgument_inDeviceName, outArgument_outPiccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 27)) ;
  }
  switch (outArgument_outPiccoloDeviceModel.getter_mProcessorType (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 28)).enumValue ()) {
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
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)), GALGAS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)), GALGAS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER FOOTPRINT").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsSupOrEqual, constinArgument_inReservedRomSize.getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)).objectCompare (outArgument_outPiccoloDeviceModel.getter_mRomSize (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)).getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (constinArgument_inReservedRomSize.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)), GALGAS_string ("reserved size for bootloader (").add_operation (constinArgument_inReservedRomSize.getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)).add_operation (GALGAS_string (" bytes) is greater than ROM size ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (outArgument_outPiccoloDeviceModel.getter_mRomSize (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (GALGAS_string (" bytes) of "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (constinArgument_inDeviceName.getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (GALGAS_string (" micro controller"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 42)), fixItArray5  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)) ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("ROM size : ").add_operation (constinArgument_inReservedRomSize.getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).add_operation (GALGAS_string (" bytes.\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)) ;
  outArgument_outRamBank = outArgument_outPiccoloDeviceModel.getter_mRamBankTable (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 46)) ;
  cEnumerator_bootloaderReservedRAMmap enumerator_2515 (constinArgument_inBootloaderReservedRAMmap, kEnumeration_up) ;
  while (enumerator_2515.hasCurrentObject ()) {
    GALGAS_uint var_firstAddress_2541 ;
    GALGAS_uint var_firstFreeAddress_2568 ;
    GALGAS_uint var_lastAddressPlusOne_2607 ;
    GALGAS_uintlist var_mirrorOffsetList_2638 ;
    outArgument_outRamBank.method_searchKey (enumerator_2515.current_lkey (HERE), var_firstAddress_2541, var_firstFreeAddress_2568, var_lastAddressPlusOne_2607, var_mirrorOffsetList_2638, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)) ;
    var_firstFreeAddress_2568 = var_firstFreeAddress_2568.add_operation (enumerator_2515.current_mReservedSize (HERE).getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 53)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_firstFreeAddress_2568.objectCompare (var_lastAddressPlusOne_2607)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_2515.current_mReservedSize (HERE).getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), GALGAS_string ("reserved size is greater than size of '").add_operation (enumerator_2515.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (var_lastAddressPlusOne_2607.substract_operation (var_firstAddress_2541, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), fixItArray7  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)) ;
    }else if (kBoolFalse == test_6) {
      {
      outArgument_outRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_2568, enumerator_2515.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 58)) ;
      }
      outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_2515.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (GALGAS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (enumerator_2515.current_mReservedSize (HERE).getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (GALGAS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (var_firstAddress_2541.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (var_firstFreeAddress_2568.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (GALGAS_string (").\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 59)) ;
    }
    enumerator_2515.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 65)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 66)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 66)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)) ;
  GALGAS_stringset var_routineNameSet_3735 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 68)) ;
  GALGAS_uint var_entryPointAddress_3784 = GALGAS_uint ((uint32_t) 4U) ;
  cEnumerator_routineDeclarationList enumerator_3838 (constinArgument_inBootloaderRoutineDeclarationList, kEnumeration_up) ;
  while (enumerator_3838.hasCurrentObject ()) {
    const enumGalgasBool test_8 = var_routineNameSet_3735.getter_hasKey (enumerator_3838.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (enumerator_3838.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)), GALGAS_string ("This routine is already declared"), fixItArray9  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)) ;
    }
    var_routineNameSet_3735.addAssign_operation (enumerator_3838.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 74))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 74)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_3838.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (var_entryPointAddress_3784.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)) ;
    var_entryPointAddress_3784 = var_entryPointAddress_3784.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 76)) ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_entryPointAddress_3784.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      var_entryPointAddress_3784 = GALGAS_uint ((uint32_t) 12U) ;
    }else if (kBoolFalse == test_10) {
      const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_entryPointAddress_3784.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
      if (kBoolTrue == test_11) {
        var_entryPointAddress_3784 = GALGAS_uint ((uint32_t) 28U) ;
      }
    }
    enumerator_3838.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 85)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 85)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("USER PROGRAM ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 86)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)) ;
  var_entryPointAddress_3784 = constinArgument_inReservedRomSize.getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 89)) ;
  cEnumerator_routineDeclarationList enumerator_4868 (constinArgument_inUserRoutineDeclarationList, kEnumeration_up) ;
  while (enumerator_4868.hasCurrentObject ()) {
    const enumGalgasBool test_12 = var_routineNameSet_3735.getter_hasKey (enumerator_4868.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_12) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (enumerator_4868.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)), GALGAS_string ("This routine is already declared"), fixItArray13  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)) ;
    }
    var_routineNameSet_3735.addAssign_operation (enumerator_4868.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_4868.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).add_operation (var_entryPointAddress_3784.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 95)) ;
    var_entryPointAddress_3784 = var_entryPointAddress_3784.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 96)) ;
    enumerator_4868.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 98)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.getter_mRegisterTable (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 100)) ;
  {
  GALGAS_declaredByteMap joker_5557 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.getter_mRegisterTable (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 105)), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5557, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 101)) ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 110)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 110)) ;
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
  GALGAS_uint var_targetAddress_15396 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_15396, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)) ;
  GALGAS_sint var_displacement_15422 = var_targetAddress_15396.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_15422.objectCompare (GALGAS_sint ((int32_t) 127L))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_15422.objectCompare (GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 479)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 479)) ;
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
                                                                        const GALGAS_location & /* inErrorLocation */
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
                                           COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_uint var_targetAddress_15919 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_15919, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)) ;
  GALGAS_sint var_displacement_15945 = var_targetAddress_15919.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_15945.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_15945.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 492)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 492)) ;
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
                                                                                 const GALGAS_location & /* inErrorLocation */
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
                                                    COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_uint var_targetAddress_16409 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_16409, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)) ;
  result_outDisplacement = var_targetAddress_16409.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)) ;
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
                                                                                            const GALGAS_location & /* inErrorLocation */
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
                                                               COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_sint var_displacement_16952 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).substract_operation (constinArgument_inConditionalBranchInstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_displacement_16952.objectCompare (GALGAS_sint ((int32_t) 127L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_16952.objectCompare (GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 520)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 520)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inTargetLabel.getter_location (SOURCE_FILE ("ipic18_block_representation.galgas", 521)), GALGAS_string ("** INTERNAL ERROR ** displacement too large for conditional branch instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 521)) ;
  }
  GALGAS_conditional_5F_branch var_conditionalBranch_17247 ;
  const enumGalgasBool test_2 = constinArgument_inComplemented.boolEnum () ;
  if (kBoolTrue == test_2) {
    switch (constinArgument_inConditionalBranch.enumValue ()) {
    case GALGAS_conditional_5F_branch::kNotBuilt:
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bz:
      {
        var_conditionalBranch_17247 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("ipic18_block_representation.galgas", 527)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnz:
      {
        var_conditionalBranch_17247 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_block_representation.galgas", 528)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bn:
      {
        var_conditionalBranch_17247 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("ipic18_block_representation.galgas", 529)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnn:
      {
        var_conditionalBranch_17247 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("ipic18_block_representation.galgas", 530)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bc:
      {
        var_conditionalBranch_17247 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18_block_representation.galgas", 531)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnc:
      {
        var_conditionalBranch_17247 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_block_representation.galgas", 532)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bov:
      {
        var_conditionalBranch_17247 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("ipic18_block_representation.galgas", 533)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnov:
      {
        var_conditionalBranch_17247 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("ipic18_block_representation.galgas", 534)) ;
      }
      break ;
    }
  }else if (kBoolFalse == test_2) {
    var_conditionalBranch_17247 = constinArgument_inConditionalBranch ;
  }
  GALGAS_uint var_baseCode_17872 ;
  GALGAS_string var_mnemonic_17891 ;
  switch (var_conditionalBranch_17247.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      var_baseCode_17872 = GALGAS_uint ((uint32_t) 57344U) ;
      var_mnemonic_17891 = GALGAS_string ("BZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      var_baseCode_17872 = GALGAS_uint ((uint32_t) 57600U) ;
      var_mnemonic_17891 = GALGAS_string ("BNZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      var_baseCode_17872 = GALGAS_uint ((uint32_t) 58880U) ;
      var_mnemonic_17891 = GALGAS_string ("BN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      var_baseCode_17872 = GALGAS_uint ((uint32_t) 59136U) ;
      var_mnemonic_17891 = GALGAS_string ("BNN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      var_baseCode_17872 = GALGAS_uint ((uint32_t) 57856U) ;
      var_mnemonic_17891 = GALGAS_string ("BC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      var_baseCode_17872 = GALGAS_uint ((uint32_t) 58112U) ;
      var_mnemonic_17891 = GALGAS_string ("BNC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      var_baseCode_17872 = GALGAS_uint ((uint32_t) 58368U) ;
      var_mnemonic_17891 = GALGAS_string ("BOV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      var_baseCode_17872 = GALGAS_uint ((uint32_t) 58624U) ;
      var_mnemonic_17891 = GALGAS_string ("BNOV") ;
    }
    break ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (var_mnemonic_17891, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)), GALGAS_uintlist::constructor_listWithValue (var_baseCode_17872.operator_or (var_displacement_16952.operator_and (GALGAS_sint ((int32_t) 255L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)) ;
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
                                                                                          const GALGAS_location & /* inErrorLocation */
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
                                                             COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_sint var_displacement_18737 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_displacement_18737.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_18737.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inTargetLabel.getter_location (SOURCE_FILE ("ipic18_block_representation.galgas", 566)), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_18737.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (GALGAS_string (") for RCALL instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 567)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 567)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)) ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RCALL ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 55296U).operator_or (var_displacement_18737.operator_and (GALGAS_sint ((int32_t) 2047L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 569)) ;
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
                                                                                            const GALGAS_location & /* inErrorLocation */
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
                                                               COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_sint var_displacement_19475 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_displacement_19475.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_19475.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inTargetLabel.getter_location (SOURCE_FILE ("ipic18_block_representation.galgas", 583)), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_19475.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (GALGAS_string (") for BRA instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 584)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 584)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)) ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    BRA ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 53248U).operator_or (var_displacement_19475.operator_and (GALGAS_sint ((int32_t) 2047L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 586)) ;
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
                                                                                          const GALGAS_location & /* inErrorLocation */
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
                                                             COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_uintlist var_binaryCode_20163 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 597)) ;
  var_binaryCode_20163.addAssign_operation (GALGAS_uint ((uint32_t) 60416U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) ;
  var_binaryCode_20163.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 601)), var_binaryCode_20163  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 600)) ;
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
                                                                                           const GALGAS_location & /* inErrorLocation */
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
                                                              COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_uintlist var_binaryCode_20597 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 611)) ;
  var_binaryCode_20597.addAssign_operation (GALGAS_uint ((uint32_t) 61184U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) ;
  var_binaryCode_20597.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 615)), var_binaryCode_20597  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 614)) ;
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
                                                                                           const GALGAS_location & /* inErrorLocation */
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
                                                              COMMA_THERE).getter_object (THERE) ;
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
  result_outCode = GALGAS_codeList::constructor_listWithValue (constinArgument_inTargetLabel.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 625)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 626))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 624)) ;
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
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_definition_5F_label (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
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
  cEnumerator_pic_31__38_InstructionList enumerator_10398 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_10398.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_10398.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 354)) ;
    enumerator_10398.gotoNextObject () ;
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
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 368)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_11132 (constinArgument_inInterruptDefinitionList, kEnumeration_up) ;
  while (enumerator_11132.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_11132.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 371)) ;
    }
    enumerator_11132.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11372 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation, kEnumeration_up) ;
  while (enumerator_11372.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11372.current_mRoutineName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 379)) ;
    enumerator_11372.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11525 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_11525.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11525.current_mRoutineName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 383)) ;
    enumerator_11525.gotoNextObject () ;
  }
  GALGAS_stringset var_s_11629 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_used_routines.galgas", 386)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 387)).isValid ()) {
    uint32_t variant_11659 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 387)).uintValue () ;
    bool loop_11659 = true ;
    while (loop_11659) {
      loop_11659 = GALGAS_bool (kIsNotEqual, var_s_11629.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11659) {
        loop_11659 = GALGAS_bool (kIsNotEqual, var_s_11629.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11659 && (0 == variant_11659)) {
        loop_11659 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 387)) ;
      }
      if (loop_11659) {
        variant_11659 -- ;
        var_s_11629 = result_outUsedRoutineSet ;
        cEnumerator_pic_31__38_RoutineDefinitionList enumerator_11793 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
        while (enumerator_11793.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11793.current_mRoutineName (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 391)).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_11793.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 392)) ;
            }
          }
          enumerator_11793.gotoNextObject () ;
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
                                                                                   const GALGAS_location & /* inErrorLocation */
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
                                                      COMMA_THERE).getter_object (THERE) ;
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
    callExtensionMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_6929.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 215)) ;
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
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_7466 = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 233)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7548 (ioArgument_ioInterruptDefinitionList, kEnumeration_up) ;
  while (enumerator_7548.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_7746 ;
    {
    routine_performInlineFromInstructionList (enumerator_7548.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 239)), var_instructionList_7746, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 235)) ;
    }
    var_interruptDefinitionList_7466.addAssign_operation (enumerator_7548.current_mInterruptName (HERE), enumerator_7548.current_mFastReturn (HERE), var_instructionList_7746, enumerator_7548.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 242)) ;
    enumerator_7548.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList_7466 ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_7988 = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 250)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_8066 (ioArgument_ioRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_8066.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_8264 ;
    {
    routine_performInlineFromInstructionList (enumerator_8066.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 256)), var_instructionList_8264, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 252)) ;
    }
    var_routineDefinitionList_7988.addAssign_operation (enumerator_8066.current_mRoutineName (HERE), enumerator_8066.current_mRequiredBank (HERE), enumerator_8066.current_mReturnedBank (HERE), enumerator_8066.current_mPreservesBank (HERE), enumerator_8066.current_mIsNoReturn (HERE), var_instructionList_8264, enumerator_8066.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 259)) ;
    enumerator_8066.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList_7988 ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (constinArgument_inTitle.getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1366 (constinArgument_inGeneratedBlockList, kEnumeration_up) ;
  GALGAS_uint index_1338 ((uint32_t) 0) ;
  while (enumerator_1366.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_1408 ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, index_1338.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 45)).objectCompare (constinArgument_inGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_display_block_list.galgas", 45)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_nextBlockLabel_1408 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_1338.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_0) {
      var_nextBlockLabel_1408 = GALGAS_string::makeEmptyString () ;
    }
    extensionMethod_display (enumerator_1366.current_mBlock (HERE), var_nextBlockLabel_1408, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 50)) ;
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
  cEnumerator_pic_31__38_InstructionList enumerator_113459 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_113459.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_113459.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)) ;
      ioArgument_ioBlockLabel = GALGAS_string ("\?").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3293)) ;
    }
    callExtensionMethod_analyze ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_113459.current_mInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioGeneratedBlockList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3295)) ;
    enumerator_113459.gotoNextObject () ;
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
  outArgument_outDataMap = GALGAS_pic_31__38__5F_dataMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3330)) ;
  cEnumerator_dataList enumerator_114752 (constinArgument_inDataDefinitionList, kEnumeration_up) ;
  const bool bool_0 = true ;
  if (enumerator_114752.hasCurrentObject () && bool_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3333)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3333)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3333)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("DATA DECLARATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3334)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3334)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3334)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3334)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3335)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3335)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3335)) ;
    while (enumerator_114752.hasCurrentObject () && bool_0) {
      GALGAS_uintlist var_data_115038 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3337)) ;
      const enumGalgasBool test_1 = enumerator_114752.current_mIsByteList (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_114752.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3339)).operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3339)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_114752.current_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3340)), GALGAS_string ("the data8 byte count should be even"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3340)) ;
        }
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data8 '").add_operation (enumerator_114752.current_mDataName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)).add_operation (enumerator_114752.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)).add_operation (enumerator_114752.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3343)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3343)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3343)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3343)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3342)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_114752.current_mDataName (HERE).mAttribute_string.add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3344)), enumerator_114752.current_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3344))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3344)), enumerator_114752.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3344)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3344)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3344)) ;
        }
        GALGAS_sint var_byte_115438 = GALGAS_sint ((int32_t) 0L) ;
        cEnumerator_immediatExpressionList enumerator_115494 (enumerator_114752.current_mValueList (HERE), kEnumeration_up) ;
        GALGAS_uint index_115453 ((uint32_t) 0) ;
        while (enumerator_115494.hasCurrentObject ()) {
          GALGAS_sint_36__34_ var_value_115579 ;
          callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_115494.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_115579, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3347)) ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_value_115579.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_115494.current_mErrorLocation (HERE), GALGAS_string ("data8 value is ").add_operation (var_value_115579.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3349)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3349)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3349)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3349)) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_value_115579.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_115494.current_mErrorLocation (HERE), GALGAS_string ("data8 value is ").add_operation (var_value_115579.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3351)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3351)).add_operation (GALGAS_string (" (greater than 255"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3351)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3351)) ;
            }else if (kBoolFalse == test_6) {
              const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, index_115453.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3352)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_8) {
                var_byte_115438 = var_value_115579.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3353)) ;
              }else if (kBoolFalse == test_8) {
                var_data_115038.addAssign_operation (var_value_115579.left_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3355)).operator_or (var_byte_115438.getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3355)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3355)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3355))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3355)) ;
              }
            }
          }
          enumerator_115494.gotoNextObject () ;
          index_115453.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3346)) ;
        }
      }else if (kBoolFalse == test_1) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data16 '").add_operation (enumerator_114752.current_mDataName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3359)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3359)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3359)).add_operation (enumerator_114752.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3359)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3359)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3359)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3359)).add_operation (enumerator_114752.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3360)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3360)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3360)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3360)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3360)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3359)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_114752.current_mDataName (HERE).mAttribute_string.add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)), enumerator_114752.current_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)), enumerator_114752.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)) ;
        }
        cEnumerator_immediatExpressionList enumerator_116234 (enumerator_114752.current_mValueList (HERE), kEnumeration_up) ;
        while (enumerator_116234.hasCurrentObject ()) {
          GALGAS_sint_36__34_ var_value_116314 ;
          callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_116234.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_116314, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3363)) ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_value_116314.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_116234.current_mErrorLocation (HERE), GALGAS_string ("data16 value is ").add_operation (var_value_116314.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3365)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3365)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3365)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3365)) ;
          }else if (kBoolFalse == test_9) {
            const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_value_116314.objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_116234.current_mErrorLocation (HERE), GALGAS_string ("data16 value is ").add_operation (var_value_116314.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3367)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3367)).add_operation (GALGAS_string (" (greater than 2**16-1)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3367)), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3367)) ;
            }else if (kBoolFalse == test_11) {
              var_data_115038.addAssign_operation (var_value_116314.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3369))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3369)) ;
            }
          }
          enumerator_116234.gotoNextObject () ;
        }
      }
      {
      outArgument_outDataMap.setter_insertKey (enumerator_114752.current_mDataName (HERE), var_data_115038, enumerator_114752.current_mIsByteList (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3373)) ;
      }
      enumerator_114752.gotoNextObject () ;
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
  GALGAS_routineMap var_routineMap_118092 = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3408)) ;
  cEnumerator_routineDeclarationList enumerator_118185 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kEnumeration_up) ;
  while (enumerator_118185.hasCurrentObject ()) {
    {
    var_routineMap_118092.setter_insertKey (enumerator_118185.current_mRoutineName (HERE), enumerator_118185.current_mIsNoReturn (HERE), enumerator_118185.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)), enumerator_118185.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)), enumerator_118185.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)) ;
    }
    enumerator_118185.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_118386 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_118386.hasCurrentObject ()) {
    {
    var_routineMap_118092.setter_insertKey (enumerator_118386.current_mRoutineName (HERE), enumerator_118386.current_mIsNoReturn (HERE), enumerator_118386.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413)), enumerator_118386.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413)), enumerator_118386.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413)) ;
    }
    enumerator_118386.gotoNextObject () ;
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_118548 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_118548.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_118548.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3416)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3416)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_118548.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3416)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3416)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_118548.current_mRequiredBank (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_118548.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3419)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3419)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_118548.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3419)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3419)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_118548.current_mReturnedBank (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3420)), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3420)) ;
    }
    {
    var_routineMap_118092.setter_insertKey (enumerator_118548.current_mRoutineName (HERE), enumerator_118548.current_mIsNoReturn (HERE), enumerator_118548.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3422)), enumerator_118548.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3422)), enumerator_118548.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3422)) ;
    }
    enumerator_118548.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_119084 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3425)) ;
  {
  var_constantMap_119084.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3427))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3427)), constinArgument_inROMSize, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3427)) ;
  }
  {
  var_constantMap_119084.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("RAM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3428))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3428)), constinArgument_inRAMSize, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3428)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_regularProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3430)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_lstring var_bootloaderSizeString_119455 = GALGAS_lstring::constructor_new (GALGAS_string ("BOOTLOADER_RESERVED_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3431))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3431)) ;
    {
    var_constantMap_119084.setter_insertKey (var_bootloaderSizeString_119455, constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3432)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3432)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3432)) ;
    }
  }
  GALGAS_stringset var_usedRegisters_119666 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3435)) ;
  cEnumerator_constantDefinitionList enumerator_119728 (constinArgument_inConstantDefinitionList, kEnumeration_up) ;
  while (enumerator_119728.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_119803 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_119728.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_119084, var_result_119803, var_usedRegisters_119666, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3437)) ;
    const enumGalgasBool test_5 = constinArgument_inRegisterTable.getter_hasKey (enumerator_119728.current_mConstantName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3438)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3438)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (enumerator_119728.current_mConstantName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3439)), GALGAS_string ("'").add_operation (enumerator_119728.current_mConstantName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3439)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3439)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3439)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3439)) ;
    }else if (kBoolFalse == test_5) {
      {
      var_constantMap_119084.setter_insertKey (enumerator_119728.current_mConstantName (HERE), var_result_119803, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3441)) ;
      }
    }
    enumerator_119728.gotoNextObject () ;
  }
  GALGAS_pic_31__38__5F_dataMap var_dataMap_120258 ;
  {
  routine_pic_31__38__5F_analyze_5F_data_5F_sections (constinArgument_inDataList, constinArgument_inRegisterTable, var_constantMap_119084, ioArgument_ioListFileContents, var_dataMap_120258, var_constantMap_119084, var_usedRegisters_119666, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3445)) ;
  }
  {
  routine_print_5F_constant_5F_definition (var_constantMap_119084, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3455)) ;
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3460)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = var_routineMap_118092.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3461)).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_bool var_isNoReturn_120616 ;
      GALGAS_uint var_requiredBank_120641 ;
      GALGAS_uint joker_120739 ; // Joker input parameter
      GALGAS_bool joker_120742 ; // Joker input parameter
      var_routineMap_118092.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3464))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3464)), var_isNoReturn_120616, var_requiredBank_120641, joker_120739, joker_120742, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3464)) ;
      const enumGalgasBool test_9 = var_isNoReturn_120616.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3465)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3466)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main requiresbank 0\""), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3466)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_requiredBank_120641.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3469)), GALGAS_string ("the \"main\" should be declared with \"requiresbank 0\" qualifier: \"noreturn main requiresbank 0\""), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3469)) ;
      }
    }else if (kBoolFalse == test_8) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProgram, GALGAS_string ("the program should declare the \"main\" routine"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3472)) ;
    }
  }
  GALGAS_ipic_31__38_BlockList var_generatedBlockList_121294 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3476)) ;
  GALGAS_uint var_entryPoint_121343 = GALGAS_uint ((uint32_t) 4U) ;
  cEnumerator_routineDeclarationList enumerator_121426 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_121426.hasCurrentObject ()) {
    var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_121343, enumerator_121426.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3482)), GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3483))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3483)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3484)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3479))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3479)) ;
    var_entryPoint_121343 = var_entryPoint_121343.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3487)) ;
    const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_entryPoint_121343.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      var_entryPoint_121343 = GALGAS_uint ((uint32_t) 12U) ;
    }else if (kBoolFalse == test_14) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, var_entryPoint_121343.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
      if (kBoolTrue == test_15) {
        var_entryPoint_121343 = GALGAS_uint ((uint32_t) 28U) ;
      }
    }
    enumerator_121426.gotoNextObject () ;
  }
  var_entryPoint_121343 = constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3495)) ;
  cEnumerator_routineDeclarationList enumerator_122021 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_122021.hasCurrentObject ()) {
    var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_121343, GALGAS_string ("_entry_user_").add_operation (var_entryPoint_121343.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3499)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3499)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3499)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3500)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_122021.current_mRoutineName (HERE).mAttribute_location, enumerator_122021.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3501))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3501)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3502)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3497))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3497)) ;
    var_entryPoint_121343 = var_entryPoint_121343.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3505)) ;
    enumerator_122021.gotoNextObject () ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3508)))).boolEnum () ;
  if (kBoolTrue == test_16) {
    var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3511)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3512)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3513)), GALGAS_string ("main").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3513)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3513))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3513)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3514)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3509))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3509)) ;
  }
  GALGAS_routineDeclarationList var_tempBootloaderRoutineDeclarationList_122937 = constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_122937.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3520)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_lstring var_routineName_123140 ;
    {
    GALGAS_luint joker_123142 ; // Joker input parameter
    GALGAS_luint joker_123145 ; // Joker input parameter
    GALGAS_bool joker_123148 ; // Joker input parameter
    GALGAS_bool joker_123151 ; // Joker input parameter
    var_tempBootloaderRoutineDeclarationList_122937.setter_popFirst (var_routineName_123140, joker_123142, joker_123145, joker_123148, joker_123151, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3521)) ;
    }
    var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 4U), GALGAS_string ("_entry_bootloader_04").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3524)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3525)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName_123140.mAttribute_location, var_routineName_123140, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3526))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3526)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3527)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3522))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3522)) ;
  }
  const enumGalgasBool test_18 = constinArgument_inHasHighInterrupt.boolEnum () ;
  if (kBoolTrue == test_18) {
    var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 8U), GALGAS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3535)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3536)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3537)), GALGAS_string ("_high_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3537)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3537))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3537)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3538)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3533))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3533)) ;
  }
  var_entryPoint_121343 = GALGAS_uint ((uint32_t) 12U) ;
  if (var_tempBootloaderRoutineDeclarationList_122937.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3544)).isValid ()) {
    uint32_t variant_124035 = var_tempBootloaderRoutineDeclarationList_122937.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3544)).uintValue () ;
    bool loop_124035 = true ;
    while (loop_124035) {
      loop_124035 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_122937.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3545)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint_121343.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3545)).isValid () ;
      if (loop_124035) {
        loop_124035 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_122937.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3545)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint_121343.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3545)).boolValue () ;
      }
      if (loop_124035 && (0 == variant_124035)) {
        loop_124035 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3544)) ;
      }
      if (loop_124035) {
        variant_124035 -- ;
        GALGAS_lstring var_routineName_124250 ;
        {
        GALGAS_luint joker_124252 ; // Joker input parameter
        GALGAS_luint joker_124255 ; // Joker input parameter
        GALGAS_bool joker_124258 ; // Joker input parameter
        GALGAS_bool joker_124261 ; // Joker input parameter
        var_tempBootloaderRoutineDeclarationList_122937.setter_popFirst (var_routineName_124250, joker_124252, joker_124255, joker_124258, joker_124261, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3547)) ;
        }
        var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_121343, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_121343.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3550)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3550)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3550)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3551)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName_124250.mAttribute_location, var_routineName_124250, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3552))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3552)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3553)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3548))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3548)) ;
        var_entryPoint_121343 = var_entryPoint_121343.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3556)) ;
      }
    }
  }
  const enumGalgasBool test_19 = constinArgument_inHasLowInterrupt.boolEnum () ;
  if (kBoolTrue == test_19) {
    var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 24U), GALGAS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3562)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3563)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3564)), GALGAS_string ("_low_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3564)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3564))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3564)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)) ;
  }
  var_entryPoint_121343 = GALGAS_uint ((uint32_t) 28U) ;
  cEnumerator_routineDeclarationList enumerator_125185 (var_tempBootloaderRoutineDeclarationList_122937, kEnumeration_up) ;
  while (enumerator_125185.hasCurrentObject ()) {
    var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_121343, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_121343.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3574)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3574)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3574)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_125185.current_mRoutineName (HERE).mAttribute_location, enumerator_125185.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3577)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3572))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3572)) ;
    var_entryPoint_121343 = var_entryPoint_121343.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3580)) ;
    enumerator_125185.gotoNextObject () ;
  }
  GALGAS_uint var_localLabelIndex_125689 = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_20 = constinArgument_inHasLowInterrupt.boolEnum () ;
  if (kBoolTrue == test_20) {
    cEnumerator_pic_31__38_InterruptDefinitionList enumerator_125762 (constinArgument_inInterruptDefinitionList, kEnumeration_up) ;
    while (enumerator_125762.hasCurrentObject ()) {
      const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, enumerator_125762.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3587)).objectCompare (GALGAS_string ("low"))).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_uint var_currentBank_125836 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3588)) ;
        GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_125896 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3589)) ;
        GALGAS_lstring var_currentBlockLabel_125973 = GALGAS_lstring::constructor_new (GALGAS_string ("_low_interrupt"), enumerator_125762.current_mInterruptName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3590)) ;
        {
        routine_analyzeInstructionList (enumerator_125762.current_mInstructionList (HERE), var_generatedBlockList_121294, constinArgument_inAccessBankSplitOffset, var_routineMap_118092, constinArgument_inRegisterTable, var_dataMap_120258, var_constantMap_119084, constinArgument_inMacroMap, var_localLabelIndex_125689, var_generatedInstructionList_125896, var_currentBlockLabel_125973, ioArgument_ioListFileContents, var_currentBank_125836, enumerator_125762.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3605)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3606)), var_usedRegisters_119666, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3591)) ;
        }
        const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, var_currentBlockLabel_125973.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_22) {
          TC_Array <C_FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (enumerator_125762.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray23  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3610)) ;
        }
        var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3614)), var_currentBlockLabel_125973, var_generatedInstructionList_125896, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_125762.current_mInterruptName (HERE).mAttribute_location, enumerator_125762.current_mFastReturn (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3617)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3618)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3613))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3613)) ;
      }
      enumerator_125762.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_24 = constinArgument_inHasHighInterrupt.boolEnum () ;
  if (kBoolTrue == test_24) {
    cEnumerator_pic_31__38_InterruptDefinitionList enumerator_127187 (constinArgument_inInterruptDefinitionList, kEnumeration_up) ;
    while (enumerator_127187.hasCurrentObject ()) {
      const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, enumerator_127187.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3627)).objectCompare (GALGAS_string ("high"))).boolEnum () ;
      if (kBoolTrue == test_25) {
        GALGAS_uint var_currentBank_127262 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3628)) ;
        GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_127322 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3629)) ;
        GALGAS_lstring var_currentBlockLabel_127399 = GALGAS_lstring::constructor_new (GALGAS_string ("_high_interrupt"), enumerator_127187.current_mInterruptName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3630)) ;
        {
        routine_analyzeInstructionList (enumerator_127187.current_mInstructionList (HERE), var_generatedBlockList_121294, constinArgument_inAccessBankSplitOffset, var_routineMap_118092, constinArgument_inRegisterTable, var_dataMap_120258, var_constantMap_119084, constinArgument_inMacroMap, var_localLabelIndex_125689, var_generatedInstructionList_127322, var_currentBlockLabel_127399, ioArgument_ioListFileContents, var_currentBank_127262, enumerator_127187.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3645)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3646)), var_usedRegisters_119666, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3631)) ;
        }
        const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, var_currentBlockLabel_127399.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_26) {
          TC_Array <C_FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (enumerator_127187.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray27  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3650)) ;
        }
        var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3654)), var_currentBlockLabel_127399, var_generatedInstructionList_127322, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_127187.current_mInterruptName (HERE).mAttribute_location, GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3657)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3658)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3653))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3653)) ;
      }
      enumerator_127187.gotoNextObject () ;
    }
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_128551 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_128551.hasCurrentObject ()) {
    GALGAS_uint var_currentBank_128576 = enumerator_128551.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3666)) ;
    GALGAS_routineKind var_routineKind_128628 ;
    const enumGalgasBool test_28 = enumerator_128551.current_mIsNoReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_28) {
      var_routineKind_128628 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3669)) ;
    }else if (kBoolFalse == test_28) {
      var_routineKind_128628 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3671)) ;
    }
    GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_128801 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3673)) ;
    GALGAS_lstring var_currentBlockLabel_128879 = enumerator_128551.current_mRoutineName (HERE) ;
    {
    routine_analyzeInstructionList (enumerator_128551.current_mInstructionList (HERE), var_generatedBlockList_121294, constinArgument_inAccessBankSplitOffset, var_routineMap_118092, constinArgument_inRegisterTable, var_dataMap_120258, var_constantMap_119084, constinArgument_inMacroMap, var_localLabelIndex_125689, var_generatedInstructionList_128801, var_currentBlockLabel_128879, ioArgument_ioListFileContents, var_currentBank_128576, enumerator_128551.current_mPreservesBank (HERE), var_routineKind_128628, var_usedRegisters_119666, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3675)) ;
    }
    GALGAS_bool var_continuesInSequence_129331 = GALGAS_bool (kIsNotEqual, var_currentBlockLabel_128879.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
    const enumGalgasBool test_29 = var_continuesInSequence_129331.boolEnum () ;
    if (kBoolTrue == test_29) {
      var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3697)), var_currentBlockLabel_128879, var_generatedInstructionList_128801, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (enumerator_128551.current_mRoutineName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3700)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3701)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3696))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3696)) ;
    }
    const enumGalgasBool test_30 = enumerator_128551.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3706)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_128551.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3706)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3706)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3706)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_128576.objectCompare (enumerator_128551.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3706)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3706)).boolEnum () ;
    if (kBoolTrue == test_30) {
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (enumerator_128551.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3707)), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_128551.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3707)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3707)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3707)), fixItArray31  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3707)) ;
    }
    const enumGalgasBool test_32 = enumerator_128551.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_129331 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709)).boolEnum () ;
    if (kBoolTrue == test_32) {
      TC_Array <C_FixItDescription> fixItArray33 ;
      inCompiler->emitSemanticError (enumerator_128551.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3710)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray33  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3710)) ;
    }
    enumerator_128551.gotoNextObject () ;
  }
  GALGAS_registerExpression var_WREGregister_130231 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("WREG"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3717))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3717)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3719))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3716)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_WREG_5F_IPICregisterDescription_130565 ;
  GALGAS_bitSliceTable joker_130571 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_WREGregister_130231.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_119084, var_WREG_5F_IPICregisterDescription_130565, joker_130571, var_usedRegisters_119666, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3721)) ;
  GALGAS_registerExpression var_TOSLregister_130649 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSL"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3732))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3732)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3733))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3733))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3733)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3734))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3731)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSL_5F_IPICregisterDescription_130984 ;
  GALGAS_bitSliceTable joker_130990 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSLregister_130649.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_119084, var_TOSL_5F_IPICregisterDescription_130984, joker_130990, var_usedRegisters_119666, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3736)) ;
  GALGAS_registerExpression var_TOSHregister_131068 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3747))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3747)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3748))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3748))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3748)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3749))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3746)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSH_5F_IPICregisterDescription_131402 ;
  GALGAS_bitSliceTable joker_131408 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSHregister_131068.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_119084, var_TOSH_5F_IPICregisterDescription_131402, joker_131408, var_usedRegisters_119666, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3751)) ;
  GALGAS_registerExpression var_TOSUregister_131486 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSU"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3762))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3762)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3763))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3763))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3763)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3764))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3761)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSU_5F_IPICregisterDescription_131819 ;
  GALGAS_bitSliceTable joker_131825 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSUregister_131486.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_119084, var_TOSU_5F_IPICregisterDescription_131819, joker_131825, var_usedRegisters_119666, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3766)) ;
  GALGAS_ipic_31__38_SequentialInstruction var_ADDWF_5F_WREG_131901 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3777)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)), var_WREG_5F_IPICregisterDescription_130565, GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3776)) ;
  GALGAS_ipic_31__38_Block var_goto_34_Block_132114 = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3784)), GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_listWithValue (var_ADDWF_5F_WREG_131901, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3786)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3786)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3787)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3787)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3787))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3787)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3788)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3783)) ;
  var_generatedBlockList_121294.addAssign_operation (var_goto_34_Block_132114  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3791)) ;
  GALGAS_ipic_31__38_SequentialInstructionList var_goto_32_InstructionList_132511 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3793)) ;
  var_goto_32_InstructionList_132511.addAssign_operation (var_ADDWF_5F_WREG_131901, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3794)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3794)) ;
  var_goto_32_InstructionList_132511.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3796)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3797)), var_TOSL_5F_IPICregisterDescription_130984, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3795)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3799)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3795)) ;
  var_goto_32_InstructionList_132511.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3801)), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3802)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3800)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3803)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3800)) ;
  var_goto_32_InstructionList_132511.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3805)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3806)), var_TOSH_5F_IPICregisterDescription_131402, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3804)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3808)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3804)) ;
  var_goto_32_InstructionList_132511.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3810)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3811)), var_TOSU_5F_IPICregisterDescription_131819, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3809)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3813)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3809)) ;
  GALGAS_ipic_31__38_Block var_goto_32_Block_133467 = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3816)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3817)), var_goto_32_InstructionList_132511, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3819))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3819)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3820)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3815)) ;
  var_generatedBlockList_121294.addAssign_operation (var_goto_32_Block_133467  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3823)) ;
  var_entryPoint_121343 = constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3825)) ;
  cEnumerator_routineDeclarationList enumerator_133881 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kEnumeration_up) ;
  while (enumerator_133881.hasCurrentObject ()) {
    const enumGalgasBool test_34 = enumerator_133881.current_mIsNoReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_34) {
      var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_121343, enumerator_133881.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3831)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_133881.current_mRoutineName (HERE).mAttribute_location, enumerator_133881.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3832))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3832)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3833)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3828))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3828)) ;
    }else if (kBoolFalse == test_34) {
      GALGAS_ipic_31__38_SequentialInstructionList var_instructionList_134237 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3837)) ;
      const enumGalgasBool test_35 = GALGAS_bool (kIsNotEqual, enumerator_133881.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3838)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3838)))).boolEnum () ;
      if (kBoolTrue == test_35) {
        var_instructionList_134237.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3839)), enumerator_133881.current_mReturnedBank (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3839)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3839)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3839)) ;
      }
      var_generatedBlockList_121294.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_121343, enumerator_133881.current_mRoutineName (HERE), var_instructionList_134237, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3845))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3845)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3846)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3841))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3841)) ;
    }
    var_entryPoint_121343 = var_entryPoint_121343.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3850)) ;
    enumerator_133881.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_134847 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3853)) ;
  cEnumerator_lstringlist enumerator_134904 (constinArgument_inUnusedRegisterList, kEnumeration_up) ;
  while (enumerator_134904.hasCurrentObject ()) {
    const enumGalgasBool test_36 = constinArgument_inRegisterTable.getter_hasKey (enumerator_134904.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3855)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3855)).boolEnum () ;
    if (kBoolTrue == test_36) {
      TC_Array <C_FixItDescription> fixItArray37 ;
      inCompiler->emitSemanticError (enumerator_134904.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3856)), GALGAS_string ("the '").add_operation (enumerator_134904.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3856)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3856)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3856)), fixItArray37  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3856)) ;
    }else if (kBoolFalse == test_36) {
      const enumGalgasBool test_38 = var_unusedDeclarationUnicity_134847.getter_hasKey (enumerator_134904.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3857)).boolEnum () ;
      if (kBoolTrue == test_38) {
        TC_Array <C_FixItDescription> fixItArray39 ;
        inCompiler->emitSemanticWarning (enumerator_134904.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3858)), GALGAS_string ("the '").add_operation (enumerator_134904.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3858)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3858)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3858)), fixItArray39  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3858)) ;
      }else if (kBoolFalse == test_38) {
        const enumGalgasBool test_40 = var_usedRegisters_119666.getter_hasKey (enumerator_134904.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3859)).boolEnum () ;
        if (kBoolTrue == test_40) {
          TC_Array <C_FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticWarning (enumerator_134904.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3860)), GALGAS_string ("the '").add_operation (enumerator_134904.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3860)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3860)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3860)), fixItArray41  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3860)) ;
        }
      }
    }
    var_unusedDeclarationUnicity_134847.addAssign_operation (enumerator_134904.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3862)) ;
    enumerator_134904.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_135404 (constinArgument_inDeclaredByteMap, kEnumeration_up) ;
  while (enumerator_135404.hasCurrentObject ()) {
    const enumGalgasBool test_42 = var_usedRegisters_119666.getter_hasKey (enumerator_135404.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3865)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3865)).operator_and (var_unusedDeclarationUnicity_134847.getter_hasKey (enumerator_135404.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3865)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3865)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3865)).boolEnum () ;
    if (kBoolTrue == test_42) {
      TC_Array <C_FixItDescription> fixItArray43 ;
      inCompiler->emitSemanticWarning (enumerator_135404.current_lkey (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3866)), GALGAS_string ("the '").add_operation (enumerator_135404.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3866)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3866)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3866)), fixItArray43  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3866)) ;
    }
    enumerator_135404.gotoNextObject () ;
  }
  {
  routine_displayBlockList (GALGAS_string ("INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_121294, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3870)) ;
  }
  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3872)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_44) {
    {
    routine_ipic_31__38_OptimizeBlocks (ioArgument_ioListFileContents, var_generatedBlockList_121294, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3873)) ;
    }
    {
    routine_displayBlockList (GALGAS_string ("OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_121294, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3874)) ;
    }
  }
  const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3877)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_45) {
    {
    routine_ipic_31__38_OptimizeBlockOrdering (constinArgument_inSourceFileName, ioArgument_ioListFileContents, var_generatedBlockList_121294, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3878)) ;
    }
  }
  const enumGalgasBool test_46 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3885)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_46) {
    {
    routine_ipic_31__38_RelativesResolution (ioArgument_ioListFileContents, var_generatedBlockList_121294, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3886)) ;
    }
  }
  const enumGalgasBool test_47 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3892)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3892)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3892)).boolEnum () ;
  if (kBoolTrue == test_47) {
    {
    routine_ipic_31__38_StackComputations (ioArgument_ioListFileContents, var_generatedBlockList_121294, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3893)) ;
    }
  }
  GALGAS_blockDurationMap var_blockDurationMap_136905 = GALGAS_blockDurationMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3899)) ;
  const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3900)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_48) {
    {
    routine_ipic_31__38_DurationComputations (var_generatedBlockList_121294, var_blockDurationMap_136905, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3901)) ;
    }
  }
  const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3904)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_49) {
    GALGAS_uint var_usedROMsize_137467 ;
    GALGAS_generatedCodeMap var_generatedCodeMap_137520 ;
    {
    routine_ipic_31__38_GenerateCode (constinArgument_inSourceFileName, constinArgument_inProgramKind, constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3908)), constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3909)), constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inRegisterTable, var_dataMap_120258, constinArgument_inActualConfigurationMap, ioArgument_ioListFileContents, var_generatedBlockList_121294, var_usedROMsize_137467, var_generatedCodeMap_137520, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3905)) ;
    }
    const enumGalgasBool test_50 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3921)).boolEnum () ;
    if (kBoolTrue == test_50) {
      GALGAS_string var_verboseMessage_137669 = GALGAS_string ("Resource usage:\n") ;
      var_verboseMessage_137669.plusAssign_operation(GALGAS_string ("  ROM size: ").add_operation (constinArgument_inROMSize.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3923)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3923)).add_operation (GALGAS_string (" bytes;"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3923)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3923)) ;
      var_verboseMessage_137669.plusAssign_operation(GALGAS_string (" used: ").add_operation (var_usedROMsize_137467.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3924)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3924)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3924)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3924)) ;
      var_verboseMessage_137669.plusAssign_operation(var_usedROMsize_137467.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)).divide_operation (constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3925)) ;
      cEnumerator_ramBankTable enumerator_137926 (constinArgument_inRamBank, kEnumeration_up) ;
      while (enumerator_137926.hasCurrentObject ()) {
        GALGAS_uint var_bankSize_137952 = enumerator_137926.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_137926.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3927)) ;
        GALGAS_uint var_usedSize_138013 = enumerator_137926.current_mFirstFreeAddress (HERE).substract_operation (enumerator_137926.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3928)) ;
        var_verboseMessage_137669.plusAssign_operation(GALGAS_string ("  RAM bank '").add_operation (enumerator_137926.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3929)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3929)).add_operation (GALGAS_string ("': "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3929)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3929)) ;
        var_verboseMessage_137669.plusAssign_operation(var_bankSize_137952.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3930)).add_operation (GALGAS_string (" bytes, used "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3930)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3930)) ;
        var_verboseMessage_137669.plusAssign_operation(var_usedSize_138013.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3931)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3931)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3931)) ;
        var_verboseMessage_137669.plusAssign_operation(var_usedSize_138013.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3932)).divide_operation (var_bankSize_137952, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3932)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3932)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3932)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3932)) ;
        enumerator_137926.gotoNextObject () ;
      }
      inCompiler->printMessage (var_verboseMessage_137669  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3934)) ;
    }
  }
  const enumGalgasBool test_51 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3938)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_51) {
    {
    routine_ipic_31__38_PrintDurations (ioArgument_ioListFileContents, var_blockDurationMap_136905, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3939)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GALGAS_string ("_computed_goto_2") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 423)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 423)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 424)) ;
    GALGAS_uint var_blockIndex_16703 ;
    constinArgument_inSymbolTable.method_searchKey (GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 425)), var_blockIndex_16703, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 425)) ;
    GALGAS_ipic_31__38_Block var_b_16727 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_16703, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 426)) ;
    extensionMethod_enterReferencedLabels (var_b_16727, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 427)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GALGAS_string ("_computed_goto_4") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 441)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 441)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 442)) ;
    GALGAS_uint var_blockIndex_17305 ;
    constinArgument_inSymbolTable.method_searchKey (GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 443)), var_blockIndex_17305, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 443)) ;
    GALGAS_ipic_31__38_Block var_b_17329 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17305, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 444)) ;
    extensionMethod_enterReferencedLabels (var_b_17329, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 445)) ;
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
    GALGAS_bool var_optimizationDone_34640 ;
    GALGAS_ipic_31__38_SequentialInstruction var_optimizedInstruction_34728 ;
    GALGAS_bool var_NOPsubstitution_34761 ;
    callExtensionMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_34477.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimizationDone_34640, ioArgument_ioListFileContents, var_optimizedInstruction_34728, var_NOPsubstitution_34761, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 908)) ;
    const enumGalgasBool test_0 = var_optimizationDone_34640.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outOptimizationDone = GALGAS_bool (true) ;
    }
    const enumGalgasBool test_1 = var_NOPsubstitution_34761.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 921)).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outOptimizedInstructionList.addAssign_operation (var_optimizedInstruction_34728, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 922)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 922)) ;
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
  GALGAS_optimizeFlagStruct var_optimizeFlagStruct_40259 = GALGAS_optimizeFlagStruct::constructor_new (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.getter_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (69)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1078)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1078)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.getter_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (82)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1079)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1079)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.getter_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (74)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1080)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1080)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.getter_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (77)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1081)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1081)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.getter_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (73)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1082)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1082)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.getter_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (105)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1083)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1083)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.getter_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (101)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1084)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1084))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1077)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BLOCK REPRESENTATION OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1090)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1090)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1090)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Optimization flags:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1091)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [D] Dead code elimination: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1093)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [E] Empty routine elimination: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40259.mAttribute_mRemoveEmptyRoutine, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [e] In Computed RCALL, empty routine call replaced by BLANK: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40259.mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [I] Call to one instruction routine replaced by instruction: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40259.mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [i] In Computed RCALL, rcall to one instruction routine replaced by instruction: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40259.mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1097)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1097)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1097)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1097)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [J] JSR followed by RETURN replaced by JUMP: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40259.mAttribute_mJSRfollowedByRETreplacedByJUMP, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1098)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1098)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1098)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1098)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [M] MOVLW followed by RETURN replaced by RETLW: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40259.mAttribute_mMOVLWfollowedByRETreplacedByRETLW, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] JUMP propagation: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [R] Call to RETLW replaced by MOVLW: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40259.mAttribute_mJSRtoRETLWreplacedByMOVLW, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] Useless test elimination: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)) ;
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Optimizations:\n")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)) ;
  }
  GALGAS_bool var_optimizationDone_43368 = GALGAS_bool (true) ;
  GALGAS_uint var_optimizationPass_43400 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)).isValid ()) {
    uint32_t variant_43411 = ioArgument_ioGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)).uintValue () ;
    bool loop_43411 = true ;
    while (loop_43411) {
      loop_43411 = var_optimizationDone_43368.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas", 1110)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1110)).isValid () ;
      if (loop_43411) {
        loop_43411 = var_optimizationDone_43368.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas", 1110)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1110)).boolValue () ;
      }
      if (loop_43411 && (0 == variant_43411)) {
        loop_43411 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)) ;
      }
      if (loop_43411) {
        variant_43411 -- ;
        var_optimizationDone_43368 = GALGAS_bool (false) ;
        var_optimizationPass_43400 = var_optimizationPass_43400.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1112)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"
          "--- Pass ").add_operation (var_optimizationPass_43400.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)).add_operation (ioArgument_ioGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)).add_operation (GALGAS_string (" blocks)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1113)) ;
        GALGAS_uint var_blockCountBeforeOptimization_43731 = ioArgument_ioGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 1114)) ;
        const enumGalgasBool test_1 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("  Pass ").add_operation (var_optimizationPass_43400.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).add_operation (var_blockCountBeforeOptimization_43731.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).add_operation (GALGAS_string (" blocks.\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)) ;
        }
        GALGAS_symbolTableForBlockOptimization var_symbolTable_43979 = GALGAS_symbolTableForBlockOptimization::constructor_emptyMap (SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)) ;
        cEnumerator_ipic_31__38_BlockList enumerator_44060 (ioArgument_ioGeneratedBlockList, kEnumeration_up) ;
        GALGAS_uint index_44032 ((uint32_t) 0) ;
        while (enumerator_44060.hasCurrentObject ()) {
          {
          var_symbolTable_43979.setter_insertKey (enumerator_44060.current_mBlock (HERE).mAttribute_mLabel, index_44032, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)) ;
          }
          enumerator_44060.gotoNextObject () ;
          index_44032.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1120)) ;
        }
        GALGAS_stringset var_referencedBlockSet_44232 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_optimize_block.galgas", 1124)) ;
        cEnumerator_ipic_31__38_BlockList enumerator_44291 (ioArgument_ioGeneratedBlockList, kEnumeration_up) ;
        while (enumerator_44291.hasCurrentObject ()) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_44291.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1126)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            extensionMethod_enterReferencedLabels (enumerator_44291.current_mBlock (HERE), var_symbolTable_43979, ioArgument_ioGeneratedBlockList, var_referencedBlockSet_44232, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1127)) ;
          }
          enumerator_44291.gotoNextObject () ;
        }
        GALGAS_ipic_31__38_BlockList var_optimizedBlockList_44592 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 1135)) ;
        cEnumerator_ipic_31__38_BlockList enumerator_44658 (ioArgument_ioGeneratedBlockList, kEnumeration_up) ;
        while (enumerator_44658.hasCurrentObject ()) {
          const enumGalgasBool test_3 = var_referencedBlockSet_44232.getter_hasKey (enumerator_44658.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1137)).operator_or (GALGAS_bool (kIsNotEqual, enumerator_44658.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1137)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1137)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_ipic_31__38_Block var_optimizedBlock_44972 ;
            extensionMethod_optimize (enumerator_44658.current_mBlock (HERE), var_symbolTable_43979, var_optimizeFlagStruct_40259, ioArgument_ioGeneratedBlockList, var_optimizationDone_43368, ioArgument_ioListFileContents, var_optimizedBlock_44972, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1138)) ;
            var_optimizedBlockList_44592.addAssign_operation (var_optimizedBlock_44972  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1146)) ;
          }else if (kBoolFalse == test_3) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [D] ").add_operation (enumerator_44658.current_mBlock (HERE).mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1148)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1148)).add_operation (GALGAS_string (": not referenced, deleted\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1148)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1148)) ;
            var_optimizationDone_43368 = GALGAS_bool (true) ;
          }
          enumerator_44658.gotoNextObject () ;
        }
        ioArgument_ioGeneratedBlockList = var_optimizedBlockList_44592 ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization.\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1154)) ;
  const enumGalgasBool test_4 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1155)).boolEnum () ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BLOCK ORDERING OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Block ordering optimization:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 376)) ;
  GALGAS_uint var_n_12880 = function_blockDiscontinuityCount (ioArgument_ioBlockList, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 377)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  count before optimization: ").add_operation (var_n_12880.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)) ;
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas", 380)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Block ordering optimization... ")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 381)) ;
  }
  GALGAS_symbolTableForBlockOptimization var_symbolTable_13150 = GALGAS_symbolTableForBlockOptimization::constructor_emptyMap (SOURCE_FILE ("ipic18_block_ordering.galgas", 384)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_13220 (ioArgument_ioBlockList, kEnumeration_up) ;
  GALGAS_uint index_13201 ((uint32_t) 0) ;
  while (enumerator_13220.hasCurrentObject ()) {
    {
    var_symbolTable_13150.setter_insertKey (enumerator_13220.current_mBlock (HERE).mAttribute_mLabel, index_13201, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 386)) ;
    }
    enumerator_13220.gotoNextObject () ;
    index_13201.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 385)) ;
  }
  GALGAS_blockInvocationGraph var_g_13311 = GALGAS_blockInvocationGraph::constructor_emptyGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 389)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_13372 (ioArgument_ioBlockList, kEnumeration_up) ;
  while (enumerator_13372.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13372.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 391)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      var_g_13311.setter_addNode (enumerator_13372.current_mBlock (HERE).mAttribute_mLabel, enumerator_13372.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 392)) ;
      }
      callExtensionMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_13372.current_mBlock (HERE).mAttribute_mTerminator.ptr (), enumerator_13372.current_mBlock (HERE).mAttribute_mLabel, var_g_13311, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 393)) ;
    }
    enumerator_13372.gotoNextObject () ;
  }
  GALGAS_lstringlist var_nodeList_13651 ;
  GALGAS_stringlist joker_13623 ; // Joker input parameter
  var_g_13311.method_nodesWithNoPredecessor (joker_13623, var_nodeList_13651 COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 397)) ;
  GALGAS_stringlist var_newOrderedLabelList_13678 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 398)) ;
  GALGAS_stringset var_visitedNodeSet_13724 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_block_ordering.galgas", 399)) ;
  GALGAS_clusterList var_clusterList_13765 = GALGAS_clusterList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 400)) ;
  cEnumerator_lstringlist enumerator_13813 (var_nodeList_13651, kEnumeration_up) ;
  while (enumerator_13813.hasCurrentObject ()) {
    GALGAS_blockInvocationGraph var_gg_13845 = var_g_13311.getter_subgraphFromNodes (GALGAS_lstringlist::constructor_listWithValue (enumerator_13813.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 403)), var_visitedNodeSet_13724, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 402)) ;
    cEnumerator_stringlist enumerator_13970 (var_gg_13845.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 406)), kEnumeration_up) ;
    while (enumerator_13970.hasCurrentObject ()) {
      var_visitedNodeSet_13724.addAssign_operation (enumerator_13970.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 407)) ;
      enumerator_13970.gotoNextObject () ;
    }
    {
    var_gg_13845.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas", 409)) ;
    }
    GALGAS_stringlist var_partialOrderedLabelList_14150 ;
    GALGAS_lstringlist joker_14158_3 ; // Joker input parameter
    GALGAS_stringlist joker_14158_2 ; // Joker input parameter
    GALGAS_lstringlist joker_14158_1 ; // Joker input parameter
    var_gg_13845.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 410)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_14150, joker_14158_3, joker_14158_2, joker_14158_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 410)) ;
    var_newOrderedLabelList_13678.plusAssign_operation(var_partialOrderedLabelList_14150, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 414)) ;
    GALGAS_ipic_31__38_BlockList var_cluster_14233 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 415)) ;
    cEnumerator_stringlist enumerator_14302 (var_partialOrderedLabelList_14150, kEnumeration_up) ;
    while (enumerator_14302.hasCurrentObject ()) {
      GALGAS_uint var_blockIndex_14374 ;
      var_symbolTable_13150.method_searchKey (enumerator_14302.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 417)), var_blockIndex_14374, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 417)) ;
      GALGAS_ipic_31__38_Block var_b_14400 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_14374, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 418)) ;
      var_cluster_14233.addAssign_operation (var_b_14400  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 419)) ;
      enumerator_14302.gotoNextObject () ;
    }
    var_clusterList_13765.addAssign_operation (var_cluster_14233  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 421)) ;
    enumerator_13813.gotoNextObject () ;
  }
  cEnumerator_ipic_31__38_BlockList enumerator_14607 (ioArgument_ioBlockList, kEnumeration_up) ;
  while (enumerator_14607.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_14607.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 425)))).operator_and (var_visitedNodeSet_13724.getter_hasKey (enumerator_14607.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 426)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas", 426)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 425)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_blockInvocationGraph var_gg_14767 = var_g_13311.getter_subgraphFromNodes (GALGAS_lstringlist::constructor_listWithValue (enumerator_14607.current_mBlock (HERE).mAttribute_mLabel  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 428)), var_visitedNodeSet_13724, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 427)) ;
      cEnumerator_stringlist enumerator_14907 (var_gg_14767.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 431)), kEnumeration_up) ;
      while (enumerator_14907.hasCurrentObject ()) {
        var_visitedNodeSet_13724.addAssign_operation (enumerator_14907.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 432)) ;
        enumerator_14907.gotoNextObject () ;
      }
      {
      var_gg_14767.setter_removeEdgesToNode (enumerator_14607.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 434)) ;
      }
      {
      var_gg_14767.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas", 435)) ;
      }
      GALGAS_stringlist var_partialOrderedLabelList_15146 ;
      GALGAS_lstringlist joker_15156_3 ; // Joker input parameter
      GALGAS_stringlist joker_15156_2 ; // Joker input parameter
      GALGAS_lstringlist joker_15156_1 ; // Joker input parameter
      var_gg_14767.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 436)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_15146, joker_15156_3, joker_15156_2, joker_15156_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 436)) ;
      var_newOrderedLabelList_13678.plusAssign_operation(var_partialOrderedLabelList_15146, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 440)) ;
      GALGAS_ipic_31__38_BlockList var_cluster_15237 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 441)) ;
      cEnumerator_stringlist enumerator_15308 (var_partialOrderedLabelList_15146, kEnumeration_up) ;
      while (enumerator_15308.hasCurrentObject ()) {
        GALGAS_uint var_blockIndex_15382 ;
        var_symbolTable_13150.method_searchKey (enumerator_15308.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 443)), var_blockIndex_15382, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 443)) ;
        GALGAS_ipic_31__38_Block var_b_15410 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_15382, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 444)) ;
        var_cluster_15237.addAssign_operation (var_b_15410  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 445)) ;
        enumerator_15308.gotoNextObject () ;
      }
      var_clusterList_13765.addAssign_operation (var_cluster_15237  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 447)) ;
    }
    enumerator_14607.gotoNextObject () ;
  }
  GALGAS_ipic_31__38_BlockList var_orderedBlockList_15600 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 451)) ;
  GALGAS_bool var_continue_15688 = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_15720 (ioArgument_ioBlockList, kEnumeration_up) ;
  bool bool_3 = var_continue_15688.isValidAndTrue () ;
  if (enumerator_15720.hasCurrentObject () && bool_3) {
    while (enumerator_15720.hasCurrentObject () && bool_3) {
      var_continue_15688 = GALGAS_bool (kIsNotEqual, enumerator_15720.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 455)))) ;
      const enumGalgasBool test_4 = var_continue_15688.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_orderedBlockList_15600.addAssign_operation (enumerator_15720.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 457)) ;
      }
      enumerator_15720.gotoNextObject () ;
      if (enumerator_15720.hasCurrentObject ()) {
        bool_3 = var_continue_15688.isValidAndTrue () ;
      }
    }
  }
  cEnumerator_stringlist enumerator_15913 (var_newOrderedLabelList_13678, kEnumeration_up) ;
  while (enumerator_15913.hasCurrentObject ()) {
    GALGAS_uint var_blockIndex_15983 ;
    var_symbolTable_13150.method_searchKey (enumerator_15913.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 462)), var_blockIndex_15983, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 462)) ;
    GALGAS_ipic_31__38_Block var_b_16007 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_15983, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 463)) ;
    var_orderedBlockList_15600.addAssign_operation (var_b_16007  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 464)) ;
    enumerator_15913.gotoNextObject () ;
  }
  GALGAS_uint var_insertionIndex_16156 = var_orderedBlockList_15600.getter_length (SOURCE_FILE ("ipic18_block_ordering.galgas", 467)) ;
  var_continue_15688 = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_16229 (ioArgument_ioBlockList, kEnumeration_down) ;
  bool bool_5 = var_continue_15688.isValidAndTrue () ;
  if (enumerator_16229.hasCurrentObject () && bool_5) {
    while (enumerator_16229.hasCurrentObject () && bool_5) {
      var_continue_15688 = GALGAS_bool (kIsNotEqual, enumerator_16229.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 470)))) ;
      const enumGalgasBool test_6 = var_continue_15688.boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        var_orderedBlockList_15600.setter_insertAtIndex (enumerator_16229.current_mBlock (HERE), var_insertionIndex_16156, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 472)) ;
        }
      }
      enumerator_16229.gotoNextObject () ;
      if (enumerator_16229.hasCurrentObject ()) {
        bool_5 = var_continue_15688.isValidAndTrue () ;
      }
    }
  }
  GALGAS_uint var_p_16443 = function_blockDiscontinuityCount (var_orderedBlockList_15600, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 476)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  count after optimization: ").add_operation (var_p_16443.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)) ;
  const enumGalgasBool test_7 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas", 478)).boolEnum () ;
  if (kBoolTrue == test_7) {
    inCompiler->printMessage (var_n_12880.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (var_p_16443.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (GALGAS_string (".\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (gOption_piccolo_5F_options_generateGraphvizFiles.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_bool joker_16838 ; // Joker input parameter
    var_g_13311.getter_graphviz (SOURCE_FILE ("ipic18_block_ordering.galgas", 483)).method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".blockOrderingConstraints.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 483)), joker_16838, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 483)) ;
  }
  GALGAS_stringset var_newSymbolSet_16893 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_block_ordering.galgas", 486)) ;
  GALGAS_bool var_ok_16927 = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_16964 (var_orderedBlockList_15600, kEnumeration_up) ;
  while (enumerator_16964.hasCurrentObject ()) {
    const enumGalgasBool test_9 = var_newSymbolSet_16893.getter_hasKey (enumerator_16964.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 489)).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_string var_s_17043 = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_16964.current_mBlock (HERE).mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 490)).add_operation (GALGAS_string ("\" is duplicated"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 491)) ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 492)), var_s_17043, fixItArray10  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 492)) ;
      ioArgument_ioListFileContents.plusAssign_operation(var_s_17043.add_operation (GALGAS_string (".\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 493)) ;
      var_ok_16927 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_9) {
      var_newSymbolSet_16893.addAssign_operation (enumerator_16964.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 496)) ;
    }
    enumerator_16964.gotoNextObject () ;
  }
  cEnumerator_symbolTableForBlockOptimization enumerator_17317 (var_symbolTable_13150, kEnumeration_up) ;
  while (enumerator_17317.hasCurrentObject ()) {
    const enumGalgasBool test_11 = var_newSymbolSet_16893.getter_hasKey (enumerator_17317.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 500)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas", 500)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_string var_s_17391 = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17317.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 501)).add_operation (GALGAS_string ("\" is missing"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 502)) ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 503)), var_s_17391, fixItArray12  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 503)) ;
      ioArgument_ioListFileContents.plusAssign_operation(var_s_17391.add_operation (GALGAS_string (".\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 504)) ;
      var_ok_16927 = GALGAS_bool (false) ;
    }
    enumerator_17317.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = var_ok_16927.boolEnum () ;
  if (kBoolTrue == test_13) {
    ioArgument_ioBlockList = var_orderedBlockList_15600 ;
    {
    routine_displayBlockList (GALGAS_string ("ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_orderedBlockList_15600, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 511)) ;
    }
  }else if (kBoolFalse == test_13) {
    GALGAS_string var_s_17819 = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: reordered block list is inconsistent, it is not used anymore") ;
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 514)), var_s_17819, fixItArray14  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 514)) ;
    ioArgument_ioListFileContents.plusAssign_operation(var_s_17819.add_operation (GALGAS_string (".\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 515)) ;
    {
    routine_displayBlockList (GALGAS_string ("INCONSISTENT ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION (not used)"), ioArgument_ioListFileContents, var_orderedBlockList_15600, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 516)) ;
    }
  }
  const enumGalgasBool test_15 = var_ok_16927.boolEnum () ;
  if (kBoolTrue == test_15) {
    {
    routine_perform_5F_cluster_5F_ordering (var_clusterList_13765, ioArgument_ioBlockList, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 520)) ;
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
  outArgument_outGraphVizString.plusAssign_operation(GALGAS_string ("  node [fontname=courier]\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 534)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_18589 (constinArgument_inBlockList, kEnumeration_up) ;
  while (enumerator_18589.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_18589.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 536)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (enumerator_18589.current_mBlock (HERE).mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)).add_operation (GALGAS_string ("\" [shape=rectangle]\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)) ;
    }
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_18774 (enumerator_18589.current_mBlock (HERE).mAttribute_mInstructionList, kEnumeration_up) ;
    while (enumerator_18774.hasCurrentObject ()) {
      callExtensionMethod_buildInstructionInvocationGraph ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_18774.current_mInstruction (HERE).ptr (), enumerator_18589.current_mBlock (HERE).mAttribute_mLabel, outArgument_outGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 540)) ;
      enumerator_18774.gotoNextObject () ;
    }
    callExtensionMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_18589.current_mBlock (HERE).mAttribute_mTerminator.ptr (), enumerator_18589.current_mBlock (HERE).mAttribute_mLabel, outArgument_outGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 542)) ;
    enumerator_18589.gotoNextObject () ;
  }
  outArgument_outGraphVizString.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 544)) ;
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
  cEnumerator_ipic_31__38_BlockList enumerator_19213 (inArgument_inBlockList, kEnumeration_up) ;
  GALGAS_uint index_19194 ((uint32_t) 0) ;
  while (enumerator_19213.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_19213.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 554)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_nextBlockLabel_19324 ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, index_19194.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 556)).objectCompare (inArgument_inBlockList.getter_length (SOURCE_FILE ("ipic18_block_ordering.galgas", 556)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_nextBlockLabel_19324 = inArgument_inBlockList.getter_mBlockAtIndex (index_19194.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 557)).mAttribute_mLabel.mAttribute_string ;
      }else if (kBoolFalse == test_1) {
        var_nextBlockLabel_19324 = GALGAS_string::makeEmptyString () ;
      }
      const enumGalgasBool test_2 = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_19213.current_mBlock (HERE).mAttribute_mTerminator.ptr (), var_nextBlockLabel_19324, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 561)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outResult.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 562)) ;
      }
    }
    enumerator_19213.gotoNextObject () ;
    index_19194.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 553)) ;
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
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_BlockList operand0 = GALGAS_ipic_31__38_BlockList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_blockDiscontinuityCount (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (gOption_piccolo_5F_options_generateGraphvizFiles.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_invocationGraph_19994 ;
    {
    routine_buildInvocationGraph (ioArgument_ioGeneratedBlockList, var_invocationGraph_19994, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 575)) ;
    }
    GALGAS_bool joker_20094 ; // Joker input parameter
    var_invocationGraph_19994.method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".blockInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 576)), joker_20094, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 576)) ;
  }
  GALGAS_bool var_optimize_20128 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.getter_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (66)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 580)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 579)) ;
  const enumGalgasBool test_1 = var_optimize_20128.boolEnum () ;
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
    result_outKey.plusAssign_operation(enumerator_600.current_mBlockList (HERE).getter_mBlockAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 23)).mAttribute_mLabel.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 23)) ;
    if (enumerator_600.hasNextObject ()) {
      result_outKey.plusAssign_operation(GALGAS_string ("."), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 25)) ;
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
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_clusterList operand0 = GALGAS_clusterList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_sortKey (operand0,
                           inCompiler
                           COMMA_THERE).getter_object (THERE) ;
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
  GALGAS_bool var_optimize_939 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.getter_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (66)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 35)).operator_and (GALGAS_bool (gOption_piccolo_5F_options_doNotReorderCluster.getter_value ()).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 37)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) ;
  const enumGalgasBool test_0 = var_optimize_939.operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 38)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Option '--").add_operation (GALGAS_string (gOption_piccolo_5F_options_doNotReorderCluster.getter_string ()), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)).add_operation (GALGAS_string ("': this optimization is not performed.n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_clusterCount_1386 = constinArgument_inInitialClusterList.getter_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 41)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CLUSTER ORDERING OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_clusterCount_1386.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_s_1698 = GALGAS_string ("Cluster ordering optimization (").add_operation (var_clusterCount_1386.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (GALGAS_string (" cluster"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (GALGAS_string ("):\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)) ;
    ioArgument_ioListFileContents.plusAssign_operation(var_s_1698.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 46)) ;
    const enumGalgasBool test_3 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 48)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->printMessage (var_s_1698  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 49)) ;
    }
    GALGAS_clusterList var_clusterList_1989 = constinArgument_inInitialClusterList ;
    GALGAS_neededConversionForClusterOrder var_neededConversionForClusterOrder_2052 = GALGAS_neededConversionForClusterOrder::constructor_emptyMap (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 53)) ;
    GALGAS_bool var_continue_2116 = GALGAS_bool (true) ;
    GALGAS_uint var_pass_2138 = GALGAS_uint ((uint32_t) 0U) ;
    if (var_clusterList_1989.getter_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).multiply_operation (var_clusterList_1989.getter_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).isValid ()) {
      uint32_t variant_2151 = var_clusterList_1989.getter_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).multiply_operation (var_clusterList_1989.getter_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).uintValue () ;
      bool loop_2151 = true ;
      while (loop_2151) {
        loop_2151 = var_continue_2116.isValid () ;
        if (loop_2151) {
          loop_2151 = var_continue_2116.boolValue () ;
        }
        if (loop_2151 && (0 == variant_2151)) {
          loop_2151 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)) ;
        }
        if (loop_2151) {
          variant_2151 -- ;
          var_pass_2138.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 58)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_pass_2138.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)) ;
          GALGAS_ipic_31__38_BlockList var_workingBlockList_2362 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 61)) ;
          GALGAS_symbolTableForClusterOrdering var_symbolTable_2414 = GALGAS_symbolTableForClusterOrdering::constructor_emptyMap (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 62)) ;
          cEnumerator_clusterList enumerator_2486 (var_clusterList_1989, kEnumeration_up) ;
          GALGAS_uint index_2467 ((uint32_t) 0) ;
          while (enumerator_2486.hasCurrentObject ()) {
            var_workingBlockList_2362.plusAssign_operation(enumerator_2486.current_mBlockList (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 64)) ;
            cEnumerator_ipic_31__38_BlockList enumerator_2572 (enumerator_2486.current_mBlockList (HERE), kEnumeration_up) ;
            while (enumerator_2572.hasCurrentObject ()) {
              {
              var_symbolTable_2414.setter_insertKey (enumerator_2572.current_mBlock (HERE).mAttribute_mLabel, index_2467, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 66)) ;
              }
              enumerator_2572.gotoNextObject () ;
            }
            enumerator_2486.gotoNextObject () ;
            index_2467.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 63)) ;
          }
          GALGAS_uint var_insertionIdx_2741 = var_workingBlockList_2362.getter_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 70)) ;
          cEnumerator_ipic_31__38_BlockList enumerator_2800 (ioArgument_ioBlockList, kEnumeration_down) ;
          bool bool_4 = var_continue_2116.isValidAndTrue () ;
          if (enumerator_2800.hasCurrentObject () && bool_4) {
            while (enumerator_2800.hasCurrentObject () && bool_4) {
              var_continue_2116 = GALGAS_bool (kIsNotEqual, enumerator_2800.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 72)))) ;
              const enumGalgasBool test_5 = var_continue_2116.boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                var_symbolTable_2414.setter_insertKey (enumerator_2800.current_mBlock (HERE).mAttribute_mLabel, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 74)) ;
                }
                {
                var_workingBlockList_2362.setter_insertAtIndex (enumerator_2800.current_mBlock (HERE), var_insertionIdx_2741, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 75)) ;
                }
              }
              enumerator_2800.gotoNextObject () ;
              if (enumerator_2800.hasCurrentObject ()) {
                bool_4 = var_continue_2116.isValidAndTrue () ;
              }
            }
          }
          GALGAS_branchOverflowMap var_overflowMap_3233 ;
          {
          routine_ipic_31__38_RelativeBranchOverflow (var_workingBlockList_2362, ioArgument_ioBlockList, var_overflowMap_3233, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 79)) ;
          }
          GALGAS_uint var_overflowCount_3267 = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_branchOverflowMap enumerator_3300 (var_overflowMap_3233, kEnumeration_up) ;
          while (enumerator_3300.hasCurrentObject ()) {
            cEnumerator_stringlist enumerator_3328 (enumerator_3300.current_mList (HERE), kEnumeration_up) ;
            while (enumerator_3328.hasCurrentObject ()) {
              var_overflowCount_3267.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 87)) ;
              GALGAS_uint var_sourceCluster_3431 ;
              var_symbolTable_2414.method_searchKey (enumerator_3300.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)), var_sourceCluster_3431, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)) ;
              GALGAS_uint var_targetCluster_3508 ;
              var_symbolTable_2414.method_searchKey (enumerator_3328.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 89)), var_targetCluster_3508, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 89)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_3300.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (var_sourceCluster_3431.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (") --> "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (enumerator_3328.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (var_targetCluster_3508.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)) ;
              enumerator_3328.gotoNextObject () ;
            }
            enumerator_3300.gotoNextObject () ;
          }
          {
          var_neededConversionForClusterOrder_2052.setter_insertKey (function_sortKey (var_clusterList_1989, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 94)).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 94)), var_overflowCount_3267, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 93)) ;
          }
          const enumGalgasBool test_6 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 97)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string var_s_3849 = GALGAS_string ("  Pass ").add_operation (var_pass_2138.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)) ;
            const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_overflowCount_3267.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_7) {
              var_s_3849.plusAssign_operation(GALGAS_string ("no branch overflow"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 100)) ;
            }else if (kBoolFalse == test_7) {
              const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_overflowCount_3267.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_8) {
                var_s_3849.plusAssign_operation(GALGAS_string ("1 branch overflow"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 102)) ;
              }else if (kBoolFalse == test_8) {
                var_s_3849.plusAssign_operation(var_overflowCount_3267.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)).add_operation (GALGAS_string (" branch overflows"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)) ;
              }
            }
            inCompiler->printMessage (var_s_3849  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 106)) ;
          }
          GALGAS_bool var_correctionLoop_4179 = GALGAS_bool (true) ;
          cEnumerator_branchOverflowMap enumerator_4215 (var_overflowMap_3233, kEnumeration_up) ;
          bool bool_9 = var_correctionLoop_4179.isValidAndTrue () ;
          if (enumerator_4215.hasCurrentObject () && bool_9) {
            while (enumerator_4215.hasCurrentObject () && bool_9) {
              cEnumerator_stringlist enumerator_4264 (enumerator_4215.current_mList (HERE), kEnumeration_up) ;
              bool bool_10 = var_correctionLoop_4179.isValidAndTrue () ;
              if (enumerator_4264.hasCurrentObject () && bool_10) {
                while (enumerator_4264.hasCurrentObject () && bool_10) {
                  GALGAS_uint var_targetCluster_4364 ;
                  var_symbolTable_2414.method_searchKey (enumerator_4264.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 112)), var_targetCluster_4364, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 112)) ;
                  const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_targetCluster_4364.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 113)))).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    GALGAS_uint var_sourceCluster_4486 ;
                    var_symbolTable_2414.method_searchKey (enumerator_4215.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 114)), var_sourceCluster_4486, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 114)) ;
                    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_sourceCluster_4486.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 115)).objectCompare (var_targetCluster_4364)).boolEnum () ;
                    if (kBoolTrue == test_12) {
                      var_correctionLoop_4179 = GALGAS_bool (false) ;
                      var_continue_2116 = GALGAS_bool (true) ;
                      GALGAS_ipic_31__38_BlockList var_last_4681 ;
                      {
                      var_clusterList_1989.setter_removeAtIndex (var_last_4681, var_targetCluster_4364, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 118)) ;
                      }
                      GALGAS_ipic_31__38_BlockList var_first_4769 ;
                      {
                      var_clusterList_1989.setter_removeAtIndex (var_first_4769, var_sourceCluster_4486, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 119)) ;
                      }
                      {
                      var_clusterList_1989.setter_insertAtIndex (var_first_4769.add_operation (var_last_4681, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)), var_sourceCluster_4486, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)) ;
                      }
                      GALGAS_string var_m_4887 = GALGAS_string ("merge #").add_operation (var_targetCluster_4364.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (GALGAS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (var_sourceCluster_4486.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)) ;
                      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  --> ").add_operation (var_m_4887, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)) ;
                      const enumGalgasBool test_13 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 123)).boolEnum () ;
                      if (kBoolTrue == test_13) {
                        inCompiler->printMessage (GALGAS_string (" -> ").add_operation (var_m_4887, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 124))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 124)) ;
                      }
                    }else if (kBoolFalse == test_12) {
                      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_sourceCluster_4486.objectCompare (var_targetCluster_4364.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 126)))).boolEnum () ;
                      if (kBoolTrue == test_14) {
                        var_correctionLoop_4179 = GALGAS_bool (false) ;
                        var_continue_2116 = GALGAS_bool (true) ;
                        GALGAS_ipic_31__38_BlockList var_last_5304 ;
                        {
                        var_clusterList_1989.setter_removeAtIndex (var_last_5304, var_sourceCluster_4486, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 129)) ;
                        }
                        GALGAS_ipic_31__38_BlockList var_first_5392 ;
                        {
                        var_clusterList_1989.setter_removeAtIndex (var_first_5392, var_targetCluster_4364, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 130)) ;
                        }
                        {
                        var_clusterList_1989.setter_insertAtIndex (var_first_5392.add_operation (var_last_5304, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)), var_targetCluster_4364, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)) ;
                        }
                        GALGAS_string var_m_5510 = GALGAS_string ("merge #").add_operation (var_sourceCluster_4486.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (GALGAS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (var_targetCluster_4364.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)) ;
                        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  --> ").add_operation (var_m_5510, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)) ;
                        const enumGalgasBool test_15 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 134)).boolEnum () ;
                        if (kBoolTrue == test_15) {
                          inCompiler->printMessage (GALGAS_string (" -> ").add_operation (var_m_5510, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 135))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 135)) ;
                        }
                      }else if (kBoolFalse == test_14) {
                        const enumGalgasBool test_16 = GALGAS_bool (kIsStrictInf, var_sourceCluster_4486.objectCompare (var_targetCluster_4364)).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          GALGAS_clusterList var_candidate_5820 = var_clusterList_1989 ;
                          GALGAS_ipic_31__38_BlockList var_b_5899 ;
                          {
                          var_candidate_5820.setter_removeAtIndex (var_b_5899, var_targetCluster_4364, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 139)) ;
                          }
                          {
                          var_candidate_5820.setter_insertAtIndex (var_b_5899, var_targetCluster_4364.add_operation (var_sourceCluster_4486, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)) ;
                          }
                          const enumGalgasBool test_17 = var_neededConversionForClusterOrder_2052.getter_hasKey (function_sortKey (var_candidate_5820, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)).boolEnum () ;
                          if (kBoolTrue == test_17) {
                            var_clusterList_1989 = var_candidate_5820 ;
                            var_correctionLoop_4179 = GALGAS_bool (false) ;
                            var_continue_2116 = GALGAS_bool (true) ;
                            GALGAS_string var_m_6229 = GALGAS_string ("roll up [#").add_operation (var_targetCluster_4364.add_operation (var_sourceCluster_4486, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (GALGAS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (var_targetCluster_4364.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)) ;
                            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  --> ").add_operation (var_m_6229, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)) ;
                            const enumGalgasBool test_18 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 147)).boolEnum () ;
                            if (kBoolTrue == test_18) {
                              inCompiler->printMessage (GALGAS_string (" -> ").add_operation (var_m_6229, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 148))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 148)) ;
                            }
                          }
                        }else if (kBoolFalse == test_16) {
                          const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_sourceCluster_4486.objectCompare (var_targetCluster_4364)).boolEnum () ;
                          if (kBoolTrue == test_19) {
                            GALGAS_clusterList var_candidate_6588 = var_clusterList_1989 ;
                            GALGAS_ipic_31__38_BlockList var_b_6667 ;
                            {
                            var_candidate_6588.setter_removeAtIndex (var_b_6667, var_sourceCluster_4486, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 153)) ;
                            }
                            {
                            var_candidate_6588.setter_insertAtIndex (var_b_6667, var_targetCluster_4364.add_operation (var_sourceCluster_4486, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)) ;
                            }
                            const enumGalgasBool test_20 = var_neededConversionForClusterOrder_2052.getter_hasKey (function_sortKey (var_candidate_6588, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)).boolEnum () ;
                            if (kBoolTrue == test_20) {
                              var_clusterList_1989 = var_candidate_6588 ;
                              var_correctionLoop_4179 = GALGAS_bool (false) ;
                              var_continue_2116 = GALGAS_bool (true) ;
                              GALGAS_string var_m_6997 = GALGAS_string ("roll up [#").add_operation (var_targetCluster_4364.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (GALGAS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (var_targetCluster_4364.add_operation (var_sourceCluster_4486, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)) ;
                              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  --> ").add_operation (var_m_6997, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)) ;
                              const enumGalgasBool test_21 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 161)).boolEnum () ;
                              if (kBoolTrue == test_21) {
                                inCompiler->printMessage (GALGAS_string (" -> ").add_operation (var_m_6997, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 162))  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 162)) ;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  enumerator_4264.gotoNextObject () ;
                  if (enumerator_4264.hasCurrentObject ()) {
                    bool_10 = var_correctionLoop_4179.isValidAndTrue () ;
                  }
                }
              }
              enumerator_4215.gotoNextObject () ;
              if (enumerator_4215.hasCurrentObject ()) {
                bool_9 = var_correctionLoop_4179.isValidAndTrue () ;
              }
            }
          }
          const enumGalgasBool test_22 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 169)).boolEnum () ;
          if (kBoolTrue == test_22) {
            inCompiler->printMessage (GALGAS_string (".\n")  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 170)) ;
          }
        }
      }
    }
    const enumGalgasBool test_23 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 173)).boolEnum () ;
    if (kBoolTrue == test_23) {
      inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 174)) ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 176)) ;
    GALGAS_ipic_31__38_BlockList var_newBlockList_7587 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 178)) ;
    var_continue_2116 = GALGAS_bool (true) ;
    cEnumerator_ipic_31__38_BlockList enumerator_7707 (ioArgument_ioBlockList, kEnumeration_up) ;
    bool bool_24 = var_continue_2116.isValidAndTrue () ;
    if (enumerator_7707.hasCurrentObject () && bool_24) {
      while (enumerator_7707.hasCurrentObject () && bool_24) {
        var_continue_2116 = GALGAS_bool (kIsNotEqual, enumerator_7707.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 182)))) ;
        const enumGalgasBool test_25 = var_continue_2116.boolEnum () ;
        if (kBoolTrue == test_25) {
          var_newBlockList_7587.addAssign_operation (enumerator_7707.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 184)) ;
        }
        enumerator_7707.gotoNextObject () ;
        if (enumerator_7707.hasCurrentObject ()) {
          bool_24 = var_continue_2116.isValidAndTrue () ;
        }
      }
    }
    cEnumerator_clusterList enumerator_7902 (var_clusterList_1989, kEnumeration_up) ;
    while (enumerator_7902.hasCurrentObject ()) {
      var_newBlockList_7587.plusAssign_operation(enumerator_7902.current_mBlockList (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 189)) ;
      enumerator_7902.gotoNextObject () ;
    }
    GALGAS_uint var_insertionIndex_8018 = var_newBlockList_7587.getter_length (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 192)) ;
    var_continue_2116 = GALGAS_bool (true) ;
    cEnumerator_ipic_31__38_BlockList enumerator_8091 (ioArgument_ioBlockList, kEnumeration_down) ;
    bool bool_26 = var_continue_2116.isValidAndTrue () ;
    if (enumerator_8091.hasCurrentObject () && bool_26) {
      while (enumerator_8091.hasCurrentObject () && bool_26) {
        var_continue_2116 = GALGAS_bool (kIsNotEqual, enumerator_8091.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 195)))) ;
        const enumGalgasBool test_27 = var_continue_2116.boolEnum () ;
        if (kBoolTrue == test_27) {
          {
          var_newBlockList_7587.setter_insertAtIndex (enumerator_8091.current_mBlock (HERE), var_insertionIndex_8018, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 197)) ;
          }
        }
        enumerator_8091.gotoNextObject () ;
        if (enumerator_8091.hasCurrentObject ()) {
          bool_26 = var_continue_2116.isValidAndTrue () ;
        }
      }
    }
    ioArgument_ioBlockList = var_newBlockList_7587 ;
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
  GALGAS_ipic_31__38_BlockList var_modifiedBlockList_1568 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 56)) ;
  GALGAS_uint var_blockStartAddress_1624 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1653 (ioArgument_ioBlockList, kEnumeration_up) ;
  GALGAS_uint index_1634 ((uint32_t) 0) ;
  while (enumerator_1653.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_1695 ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, index_1634.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 60)).objectCompare (ioArgument_ioBlockList.getter_length (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 60)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_nextBlockLabel_1695 = ioArgument_ioBlockList.getter_mBlockAtIndex (index_1634.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 61)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_0) {
      var_nextBlockLabel_1695 = GALGAS_string::makeEmptyString () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_1653.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 65)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_blockStartAddress_1624 = enumerator_1653.current_mBlock (HERE).mAttribute_mAddress ;
    }
    GALGAS_ipic_31__38_Block var_modifiedBlock_2174 ;
    extensionMethod_performRelativesResolution (enumerator_1653.current_mBlock (HERE), constinArgument_inSymbolTable, var_nextBlockLabel_1695, var_blockStartAddress_1624, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedBlock_2174, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 68)) ;
    var_modifiedBlockList_1568.addAssign_operation (var_modifiedBlock_2174  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 76)) ;
    GALGAS_uint var_blockSize_2244 = extensionGetter_blockSize (enumerator_1653.current_mBlock (HERE), var_nextBlockLabel_1695, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 77)) ;
    var_blockStartAddress_1624 = var_blockStartAddress_1624.add_operation (var_blockSize_2244, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 78)) ;
    enumerator_1653.gotoNextObject () ;
    index_1634.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 58)) ;
  }
  ioArgument_ioBlockList = var_modifiedBlockList_1568 ;
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
  GALGAS_uint var_blockStartAddress_3278 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_BlockList enumerator_3316 (constinArgument_inGeneratedBlockList, kEnumeration_up) ;
  GALGAS_uint index_3288 ((uint32_t) 0) ;
  while (enumerator_3316.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_3358 ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, index_3288.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 111)).objectCompare (constinArgument_inGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 111)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_nextBlockLabel_3358 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_3288.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 112)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_0) {
      var_nextBlockLabel_3358 = GALGAS_string::makeEmptyString () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_3316.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 116)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_blockStartAddress_3278 = enumerator_3316.current_mBlock (HERE).mAttribute_mAddress ;
    }
    {
    outArgument_outSymbolTable.setter_insertKey (enumerator_3316.current_mBlock (HERE).mAttribute_mLabel, var_blockStartAddress_3278, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 119)) ;
    }
    GALGAS_uint var_blockSize_3748 = extensionGetter_blockSize (enumerator_3316.current_mBlock (HERE), var_nextBlockLabel_3358, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 120)) ;
    var_blockStartAddress_3278 = var_blockStartAddress_3278.add_operation (var_blockSize_3748, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 121)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_3316.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 122)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outFreeAddress = var_blockStartAddress_3278 ;
    }
    enumerator_3316.gotoNextObject () ;
    index_3288.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 109)) ;
  }
  cEnumerator_ipic_31__38_BlockList enumerator_3993 (constinArgument_inInitialBlockList, kEnumeration_up) ;
  while (enumerator_3993.hasCurrentObject ()) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_3993.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 128)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const enumGalgasBool test_4 = outArgument_outSymbolTable.getter_hasKey (enumerator_3993.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 129)).operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 129)).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        outArgument_outSymbolTable.setter_insertKey (enumerator_3993.current_mBlock (HERE).mAttribute_mLabel, enumerator_3993.current_mBlock (HERE).mAttribute_mAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 130)) ;
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
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 142)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Relative branch conversion to absolute:\n")  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 143)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("RELATIVES RESOLUTION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)) ;
  GALGAS_bool var_resolutionDone_4784 = GALGAS_bool (false) ;
  GALGAS_uint var_pass_4805 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).isValid ()) {
    uint32_t variant_4816 = ioArgument_ioGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).uintValue () ;
    bool loop_4816 = true ;
    while (loop_4816) {
      loop_4816 = var_resolutionDone_4784.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).isValid () ;
      if (loop_4816) {
        loop_4816 = var_resolutionDone_4784.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).boolValue () ;
      }
      if (loop_4816 && (0 == variant_4816)) {
        loop_4816 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)) ;
      }
      if (loop_4816) {
        variant_4816 -- ;
        var_pass_4805.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 153)) ;
        GALGAS_symbolTableForRelativesResolution var_symbolTable_5081 ;
        {
        GALGAS_uint joker_5089 ; // Joker input parameter
        routine_computeLabelAbsoluteAddressMap (ioArgument_ioGeneratedBlockList, GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 156)), var_symbolTable_5081, joker_5089, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 154)) ;
        }
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"
          "Pass ").add_operation (var_pass_4805.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)) ;
        GALGAS_uint var_conversionCount_5173 = GALGAS_uint ((uint32_t) 0U) ;
        {
        routine_performRelativesResolution (var_symbolTable_5081, ioArgument_ioGeneratedBlockList, var_conversionCount_5173, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 162)) ;
        }
        var_resolutionDone_4784 = GALGAS_bool (kIsEqual, var_conversionCount_5173.objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        const enumGalgasBool test_1 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 169)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string var_s_5412 = GALGAS_string ("  Pass ").add_operation (var_pass_4805.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)) ;
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_conversionCount_5173.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_5412.plusAssign_operation(GALGAS_string ("none."), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 172)) ;
          }else if (kBoolFalse == test_2) {
            const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_conversionCount_5173.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_3) {
              var_s_5412.plusAssign_operation(GALGAS_string ("1 conversion"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 174)) ;
            }else if (kBoolFalse == test_3) {
              var_s_5412.plusAssign_operation(var_conversionCount_5173.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)).add_operation (GALGAS_string (" conversions"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)) ;
            }
          }
          inCompiler->printMessage (var_s_5412.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 178))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 178)) ;
        }
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 181)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No conversion.\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 182)) ;
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
  GALGAS_symbolTableForRelativesResolution var_symbolTable_7076 ;
  {
  GALGAS_uint joker_7082 ; // Joker input parameter
  routine_computeLabelAbsoluteAddressMap (constinArgument_inBlockList, constinArgument_inInitialBlockList, var_symbolTable_7076, joker_7082, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 226)) ;
  }
  outArgument_outOverflowMap = GALGAS_branchOverflowMap::constructor_emptyMap (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 233)) ;
  GALGAS_uint var_blockStartAddress_7166 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_BlockList enumerator_7195 (constinArgument_inBlockList, kEnumeration_up) ;
  GALGAS_uint index_7176 ((uint32_t) 0) ;
  while (enumerator_7195.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_7237 ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, index_7176.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 237)).objectCompare (constinArgument_inBlockList.getter_length (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 237)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_nextBlockLabel_7237 = constinArgument_inBlockList.getter_mBlockAtIndex (index_7176.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 238)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_0) {
      var_nextBlockLabel_7237 = GALGAS_string::makeEmptyString () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_7195.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 242)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_blockStartAddress_7166 = enumerator_7195.current_mBlock (HERE).mAttribute_mAddress ;
    }
    extensionMethod_relativeBranchOverflow (enumerator_7195.current_mBlock (HERE), var_symbolTable_7076, var_nextBlockLabel_7237, var_blockStartAddress_7166, outArgument_outOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 245)) ;
    GALGAS_uint var_blockSize_7672 = extensionGetter_blockSize (enumerator_7195.current_mBlock (HERE), var_nextBlockLabel_7237, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 251)) ;
    var_blockStartAddress_7166 = var_blockStartAddress_7166.add_operation (var_blockSize_7672, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 252)) ;
    enumerator_7195.gotoNextObject () ;
    index_7176.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 235)) ;
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
  GALGAS_stringlist var_ipicText_1372 = constinArgument_inIpicText ;
  if (constinArgument_inCode.getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 41)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 41)).isValid ()) {
    uint32_t variant_1392 = constinArgument_inCode.getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 41)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 41)).uintValue () ;
    bool loop_1392 = true ;
    while (loop_1392) {
      loop_1392 = GALGAS_bool (kIsStrictInf, var_ipicText_1372.getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 42)).objectCompare (constinArgument_inCode.getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 42)))).isValid () ;
      if (loop_1392) {
        loop_1392 = GALGAS_bool (kIsStrictInf, var_ipicText_1372.getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 42)).objectCompare (constinArgument_inCode.getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 42)))).boolValue () ;
      }
      if (loop_1392 && (0 == variant_1392)) {
        loop_1392 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_code_generation.galgas", 41)) ;
      }
      if (loop_1392) {
        variant_1392 -- ;
        var_ipicText_1372.addAssign_operation (GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 43)) ;
      }
    }
  }
  GALGAS_uint var_address_1508 = constinArgument_inAddress ;
  GALGAS_bool var_first_1532 = GALGAS_bool (true) ;
  cEnumerator_stringlist enumerator_1561 (var_ipicText_1372, kEnumeration_up) ;
  cEnumerator_codeList enumerator_1576 (constinArgument_inCode, kEnumeration_up) ;
  while (enumerator_1561.hasCurrentObject () && enumerator_1576.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_x_36_string (var_address_1508, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 49)) ;
    var_address_1508 = var_address_1508.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_1576.current_mBinaryCode (HERE).getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 50)) ;
    GALGAS_string var_s_1687 = GALGAS_string (" ") ;
    cEnumerator_uintlist enumerator_1725 (enumerator_1576.current_mBinaryCode (HERE), kEnumeration_up) ;
    while (enumerator_1725.hasCurrentObject ()) {
      var_s_1687.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_string (enumerator_1725.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)) ;
      enumerator_1725.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(var_s_1687.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 13U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 55)) ;
    var_s_1687 = GALGAS_string::makeEmptyString () ;
    GALGAS_bool test_0 = var_first_1532 ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = GALGAS_bool (kIsInfOrEqual, constinArgument_inMin.objectCompare (constinArgument_inMax)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, constinArgument_inMin.objectCompare (GALGAS_uint ((uint32_t) 99999U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_s_1687.plusAssign_operation(constinArgument_inMin.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 59)) ;
      }else if (kBoolFalse == test_2) {
        var_s_1687.plusAssign_operation(GALGAS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 61)) ;
      }
      var_s_1687.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 63)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, constinArgument_inMax.objectCompare (GALGAS_uint ((uint32_t) 99999U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_s_1687.plusAssign_operation(constinArgument_inMax.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 65)) ;
      }else if (kBoolFalse == test_3) {
        var_s_1687.plusAssign_operation(GALGAS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 67)) ;
      }
      var_s_1687.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 69)) ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(var_s_1687.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 12U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 71)) ;
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_1576.current_mAssemblyCode (HERE).getter_stringByRightPadding (GALGAS_uint ((uint32_t) 50U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 72)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 73)) ;
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_1561.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 74)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 75)) ;
    var_first_1532 = GALGAS_bool (false) ;
    enumerator_1561.gotoNextObject () ;
    enumerator_1576.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_2463 (var_ipicText_1372.getter_subListFromIndex (constinArgument_inCode.getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 79)), kEnumeration_up) ;
  while (enumerator_2463.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_x_36_string (var_address_1508, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 80)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByRightPadding (GALGAS_uint ((uint32_t) 76U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 81)) ;
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_2463.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 82)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 83)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE GENERATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)) ;
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas", 222)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Code generation:\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 223)) ;
  }
  GALGAS_symbolTableForRelativesResolution var_symbolTable_7358 ;
  GALGAS_uint var_firstDataAddress_7390 ;
  {
  routine_computeLabelAbsoluteAddressMap (constinArgument_inGeneratedBlockList, GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 228)), var_symbolTable_7358, var_firstDataAddress_7390, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 226)) ;
  }
  GALGAS_uint var_dataAddress_7472 = var_firstDataAddress_7390 ;
  GALGAS_pic_31__38__5F_dataAddressMap var_dataAddressMap_7530 = GALGAS_pic_31__38__5F_dataAddressMap::constructor_emptyMap (SOURCE_FILE ("ipic18_code_generation.galgas", 234)) ;
  cEnumerator_pic_31__38__5F_dataMap enumerator_7558 (constinArgument_inDataMap, kEnumeration_up) ;
  while (enumerator_7558.hasCurrentObject ()) {
    {
    var_dataAddressMap_7530.setter_insertKey (enumerator_7558.current_lkey (HERE), var_dataAddress_7472, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 236)) ;
    }
    var_dataAddress_7472 = var_dataAddress_7472.add_operation (enumerator_7558.current_mData (HERE).getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 237)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 237)) ;
    enumerator_7558.gotoNextObject () ;
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 240)) ;
  }
  GALGAS_string var_assemblyString_7766 = GALGAS_string::makeEmptyString () ;
  GALGAS_uint var_relocatableCodeSize_7797 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_uint var_blockStartAddress_7825 = GALGAS_uint ((uint32_t) 0U) ;
  outArgument_outGeneratedCodeMap = GALGAS_generatedCodeMap::constructor_emptyMap (SOURCE_FILE ("ipic18_code_generation.galgas", 244)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_7890 (constinArgument_inGeneratedBlockList, kEnumeration_up) ;
  GALGAS_uint index_7862 ((uint32_t) 0) ;
  while (enumerator_7890.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_7932 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, index_7862.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 247)).objectCompare (constinArgument_inGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 247)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_nextBlockLabel_7932 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_7862.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 248)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_1) {
      var_nextBlockLabel_7932 = GALGAS_string::makeEmptyString () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_7890.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 252)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_blockStartAddress_7825 = enumerator_7890.current_mBlock (HERE).mAttribute_mAddress ;
      {
      routine_setEmitAddress (var_blockStartAddress_7825, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 254)) ;
      }
    }
    extensionMethod_generateCodeForBlock (enumerator_7890.current_mBlock (HERE), var_symbolTable_7358, var_dataAddressMap_7530, var_blockStartAddress_7825, var_nextBlockLabel_7932, ioArgument_ioListFileContents, var_assemblyString_7766, outArgument_outGeneratedCodeMap, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 256)) ;
    GALGAS_uint var_blockSize_8496 = extensionGetter_blockSize (enumerator_7890.current_mBlock (HERE), var_nextBlockLabel_7932, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 265)) ;
    var_blockStartAddress_7825 = var_blockStartAddress_7825.add_operation (var_blockSize_8496, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 266)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_7890.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 267)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_relocatableCodeSize_7797 = var_relocatableCodeSize_7797.add_operation (var_blockSize_8496, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 268)) ;
    }
    enumerator_7890.gotoNextObject () ;
    index_7862.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 245)) ;
  }
  var_dataAddress_7472 = var_firstDataAddress_7390 ;
  cEnumerator_pic_31__38__5F_dataMap enumerator_8787 (constinArgument_inDataMap, kEnumeration_up) ;
  const bool bool_4 = true ;
  if (enumerator_8787.hasCurrentObject () && bool_4) {
    {
    routine_setEmitAddress (var_dataAddress_7472, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 275)) ;
    }
    {
    GALGAS_codeList temp_5 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    temp_5.addAssign_operation (GALGAS_string ("    ORG ").add_operation (var_dataAddress_7472.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 278))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    GALGAS_stringlist temp_6 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 279)) ;
    temp_6.addAssign_operation (GALGAS_string ("    ORG ").add_operation (var_dataAddress_7472.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 279))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 279)) ;
    routine_generateLineWithCode (var_dataAddress_7472, temp_5, temp_6, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 280)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 276)) ;
    }
    var_assemblyString_7766.plusAssign_operation(GALGAS_string ("    ORG ").add_operation (var_dataAddress_7472.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)) ;
    while (enumerator_8787.hasCurrentObject () && bool_4) {
      {
      GALGAS_codeList temp_7 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      temp_7.addAssign_operation (GALGAS_string ("_data_").add_operation (enumerator_8787.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 288))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      GALGAS_stringlist temp_8 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 289)) ;
      temp_8.addAssign_operation (GALGAS_string ("_data_").add_operation (enumerator_8787.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)) ;
      routine_generateLineWithCode (var_dataAddress_7472, temp_7, temp_8, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 290)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 286)) ;
      }
      var_assemblyString_7766.plusAssign_operation(GALGAS_string ("_data_").add_operation (enumerator_8787.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)) ;
      cEnumerator_uintlist enumerator_9369 (enumerator_8787.current_mData (HERE), kEnumeration_up) ;
      while (enumerator_9369.hasCurrentObject ()) {
        var_assemblyString_7766.plusAssign_operation(GALGAS_string ("    DW ").add_operation (enumerator_9369.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)) ;
        {
        routine_emitCode (enumerator_9369.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 297)) ;
        }
        {
        GALGAS_codeList temp_9 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        GALGAS_uintlist temp_10 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        temp_10.addAssign_operation (enumerator_9369.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        temp_9.addAssign_operation (GALGAS_string ("    DW ").add_operation (enumerator_9369.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)), temp_10  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        GALGAS_stringlist temp_11 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 301)) ;
        temp_11.addAssign_operation (GALGAS_string ("    DW ").add_operation (enumerator_9369.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 301))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 301)) ;
        routine_generateLineWithCode (var_dataAddress_7472, temp_9, temp_11, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 302)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 298)) ;
        }
        var_dataAddress_7472 = var_dataAddress_7472.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 306)) ;
        enumerator_9369.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 308)) ;
      enumerator_8787.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_12 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas", 310)).boolEnum () ;
  if (kBoolTrue == test_12) {
    inCompiler->printMessage (GALGAS_string ("  Relocatable code size: ").add_operation (var_relocatableCodeSize_7797.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)).add_operation (GALGAS_string (" bytes.\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)) ;
  }
  outArgument_outUsedROMsize = var_dataAddress_7472 ;
  switch (constinArgument_inProgramKind.enumValue ()) {
  case GALGAS_programKind::kNotBuilt:
    break ;
  case GALGAS_programKind::kEnum_regularProgram:
  case GALGAS_programKind::kEnum_userProgram:
    {
      const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, outArgument_outUsedROMsize.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)), GALGAS_string ("the program uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (GALGAS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)) ;
      }
    }
    break ;
  case GALGAS_programKind::kEnum_bootloaderProgram:
    {
      const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, outArgument_outUsedROMsize.objectCompare (constinArgument_inBootloaderReservedROMsize)).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)), GALGAS_string ("the bootloader uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (GALGAS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (constinArgument_inBootloaderReservedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)), fixItArray16  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)) ;
      }
    }
    break ;
  }
  cEnumerator_actualConfigurationMap enumerator_10526 (constinArgument_inActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_10526.hasCurrentObject ()) {
    {
    routine_setEmitAddress (enumerator_10526.current_mRegisterAddress (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 328)) ;
    }
    {
    routine_emitByte (enumerator_10526.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 329)) ;
    }
    enumerator_10526.gotoNextObject () ;
  }
  GALGAS_string var_contents_10670 ;
  {
  routine_getGeneratedContents (var_contents_10670, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 332)) ;
  }
  GALGAS_string var_destinationFile_10693 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 333)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 333)) ;
  GALGAS_bool joker_10817 ; // Joker input parameter
  var_contents_10670.method_writeToFileWhenDifferentContents (var_destinationFile_10693, joker_10817, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 334)) ;
  const enumGalgasBool test_17 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_string var_baseName_10927 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("ipic18_code_generation.galgas", 337)).getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 337)) ;
    GALGAS_string var_cContents_11062 ;
    {
    routine_get_5F_C_5F_ArrayImplementation (var_baseName_10927, var_cContents_11062, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 338)) ;
    }
    var_destinationFile_10693 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 339)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 339)) ;
    GALGAS_bool joker_11208 ; // Joker input parameter
    var_cContents_11062.method_writeToFileWhenDifferentContents (var_destinationFile_10693, joker_11208, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 340)) ;
    GALGAS_string var_hContents_11266 ;
    {
    routine_get_5F_C_5F_ArrayHeader (var_baseName_10927, var_hContents_11266, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 341)) ;
    }
    var_destinationFile_10693 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 342)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 342)) ;
    GALGAS_bool joker_11412 ; // Joker input parameter
    var_hContents_11266.method_writeToFileWhenDifferentContents (var_destinationFile_10693, joker_11412, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 343)) ;
  }
  const enumGalgasBool test_18 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.getter_value ()).operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_code_generation.galgas", 346)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 346)).boolEnum () ;
  if (kBoolTrue == test_18) {
    {
    routine_pic_31__38_GenerateAssemblyFile (constinArgument_inSourceFileName, constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inAllRegisters, constinArgument_inActualConfigurationMap, var_assemblyString_7766, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 347)) ;
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
  GALGAS_string var_assemblyString_12444 = GALGAS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 371)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 371)) ;
  var_assemblyString_12444.plusAssign_operation(GALGAS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 373)) ;
  var_assemblyString_12444.plusAssign_operation(constinArgument_inAssemblyCode, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 374)) ;
  var_assemblyString_12444.plusAssign_operation(GALGAS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 376)) ;
  cEnumerator_registerTable enumerator_12674 (constinArgument_inPredefinedRegisters, kEnumeration_up) ;
  while (enumerator_12674.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister_12734 ;
    enumerator_12674.current_mRegisterAddressList (HERE).method_first (var_firstRegister_12734, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)) ;
    var_assemblyString_12444.plusAssign_operation(enumerator_12674.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 379)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)).add_operation (var_firstRegister_12734.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)) ;
    enumerator_12674.gotoNextObject () ;
  }
  var_assemblyString_12444.plusAssign_operation(GALGAS_string ("\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 381)) ;
  var_assemblyString_12444.plusAssign_operation(GALGAS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 383)) ;
  cEnumerator_registerTable enumerator_12973 (constinArgument_inAllRegisters, kEnumeration_up) ;
  while (enumerator_12973.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_12973.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 385)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 385)).operator_not (SOURCE_FILE ("ipic18_code_generation.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_firstRegister_13097 ;
      enumerator_12973.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13097, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)) ;
      var_assemblyString_12444.plusAssign_operation(enumerator_12973.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 387)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)).add_operation (var_firstRegister_13097.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)) ;
    }
    enumerator_12973.gotoNextObject () ;
  }
  var_assemblyString_12444.plusAssign_operation(GALGAS_string ("\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 390)) ;
  var_assemblyString_12444.plusAssign_operation(GALGAS_string (";--- Piccolo defined symbols\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 392)) ;
  var_assemblyString_12444.plusAssign_operation(GALGAS_string ("W EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 393)) ;
  var_assemblyString_12444.plusAssign_operation(GALGAS_string ("FAST EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 394)) ;
  var_assemblyString_12444.plusAssign_operation(GALGAS_string ("BSR_ACCESS EQU 1\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 395)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 397)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_assemblyString_12444.plusAssign_operation(GALGAS_string (";--- Configuration\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 398)) ;
    cEnumerator_actualConfigurationMap enumerator_13600 (constinArgument_inActualConfigurationMap, kEnumeration_up) ;
    while (enumerator_13600.hasCurrentObject ()) {
      var_assemblyString_12444.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_13600.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (enumerator_13600.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)) ;
      enumerator_13600.gotoNextObject () ;
    }
  }
  var_assemblyString_12444.plusAssign_operation(GALGAS_string (";---\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 404)) ;
  var_assemblyString_12444.plusAssign_operation(GALGAS_string ("  END\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 405)) ;
  GALGAS_string var_asmDestinationFile_13917 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 407)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 407)) ;
  GALGAS_bool joker_14049 ; // Joker input parameter
  var_assemblyString_12444.method_writeToFileWhenDifferentContents (var_asmDestinationFile_13917, joker_14049, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 408)) ;
}


