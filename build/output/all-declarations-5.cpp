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
        inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
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
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)), GALGAS_string ("internal error: current emit address is ").add_operation (var_addr_1329.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (GALGAS_string ("; it should be "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (constinArgument_inCurrentAddress.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 44))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)) ;
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
        inCompiler->emitSemanticError (enumerator_1500.current_mSettingName (HERE).getter_location (SOURCE_FILE ("piccolo_config.galgas", 39)), GALGAS_string ("the '").add_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)).add_operation (GALGAS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)) ;
      }
      var_actualSettingNameSet_1410.addAssign_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 41))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 41)) ;
      GALGAS_lstring var_registerName_1745 ;
      GALGAS_luint var_maskValue_1768 ;
      GALGAS_lstring var_settingDescription_1802 ;
      GALGAS_fieldSettingMap var_fieldSettingMap_1841 ;
      var_configFieldMap_927.method_searchKey (enumerator_1500.current_mSettingName (HERE), var_registerName_1745, var_maskValue_1768, var_settingDescription_1802, var_fieldSettingMap_1841, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 46)) ;
      const enumGalgasBool test_1 = var_fieldSettingMap_1841.getter_hasKey (enumerator_1500.current_mSettingValue (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 47)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)).boolEnum () ;
      if (kBoolTrue == test_1) {
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
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_fieldSettingMap_1841.getter_count (SOURCE_FILE ("piccolo_config.galgas", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_string var_errorMessage_2495 = GALGAS_string ("the '").add_operation (enumerator_1500.current_mSettingValue (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (GALGAS_string ("' value is not defined for configuration setting '"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (enumerator_1500.current_mSettingName (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)).add_operation (GALGAS_string ("'; possible values are:"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 57)) ;
          cEnumerator_fieldSettingMap enumerator_2662 (var_fieldSettingMap_1841, kEnumeration_up) ;
          while (enumerator_2662.hasCurrentObject ()) {
            var_errorMessage_2495.plusAssign_operation(GALGAS_string ("\n"
              "-  \"").add_operation (enumerator_2662.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 59)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 59)) ;
            enumerator_2662.gotoNextObject () ;
          }
          inCompiler->emitSemanticError (enumerator_1500.current_mSettingValue (HERE).getter_location (SOURCE_FILE ("piccolo_config.galgas", 61)), var_errorMessage_2495  COMMA_SOURCE_FILE ("piccolo_config.galgas", 61)) ;
        }
      }
      enumerator_1500.gotoNextObject () ;
    }
    enumerator_1469.gotoNextObject () ;
  }
  GALGAS_stringset var_notDefinedSetting_2876 = var_configFieldMap_927.getter_keySet (SOURCE_FILE ("piccolo_config.galgas", 66)).substract_operation (var_actualSettingNameSet_1410, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 66)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_notDefinedSetting_2876.getter_count (SOURCE_FILE ("piccolo_config.galgas", 67)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_string var_errorMessage_2990 = GALGAS_string ("the following configuration settings are not defined:") ;
    cEnumerator_stringset enumerator_3081 (var_notDefinedSetting_2876, kEnumeration_up) ;
    while (enumerator_3081.hasCurrentObject ()) {
      var_errorMessage_2990.plusAssign_operation(GALGAS_string ("\n"
        "-  ").add_operation (enumerator_3081.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 70)) ;
      enumerator_3081.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 72)), var_errorMessage_2990  COMMA_SOURCE_FILE ("piccolo_config.galgas", 72)) ;
  }
  cEnumerator_actualConfigurationMap enumerator_3262 (outArgument_outActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_3262.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Register '").add_operation (enumerator_3262.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).add_operation (enumerator_3262.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).add_operation (GALGAS_string (" set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).add_operation (enumerator_3262.current_mRegisterValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)) ;
    GALGAS_configRegisterMaskMap var_configRegisterMaskMap_3450 ;
    GALGAS_luint joker_3493 ; // Joker input parameter
    GALGAS_luint joker_3496 ; // Joker input parameter
    GALGAS_illegalMaskList joker_3522 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_3262.current_lkey (HERE), joker_3493, joker_3496, var_configRegisterMaskMap_3450, joker_3522, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 78)) ;
    cEnumerator_configRegisterMaskMap enumerator_3569 (var_configRegisterMaskMap_3450, kEnumeration_up) ;
    while (enumerator_3569.hasCurrentObject ()) {
      GALGAS_lstring var_settingName_3599 = enumerator_3569.current_lkey (HERE) ;
      cEnumerator_fieldSettingMap enumerator_3662 (enumerator_3569.current_mFieldSettingMap (HERE), kEnumeration_up) ;
      while (enumerator_3662.hasCurrentObject ()) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_3262.current_mRegisterValue (HERE).operator_and (enumerator_3569.current_mMaskValue (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 82)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 82)).objectCompare (enumerator_3662.current_mValue (HERE))).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  setting '").add_operation (var_settingName_3599.getter_string (SOURCE_FILE ("piccolo_config.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).add_operation (GALGAS_string ("' set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).add_operation (enumerator_3662.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).add_operation (GALGAS_string (" (\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).add_operation (enumerator_3662.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 83)) ;
        }
        enumerator_3662.gotoNextObject () ;
      }
      enumerator_3569.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 87)) ;
    enumerator_3262.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_4018 (outArgument_outActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_4018.hasCurrentObject ()) {
    GALGAS_illegalMaskList var_illegalMaskList_4058 ;
    GALGAS_luint joker_4101 ; // Joker input parameter
    GALGAS_luint joker_4104 ; // Joker input parameter
    GALGAS_configRegisterMaskMap joker_4107 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_4018.current_lkey (HERE), joker_4101, joker_4104, joker_4107, var_illegalMaskList_4058, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 92)) ;
    cEnumerator_illegalMaskList enumerator_4158 (var_illegalMaskList_4058, kEnumeration_up) ;
    while (enumerator_4158.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4018.current_mRegisterValue (HERE).operator_and (enumerator_4158.current_mIllegalMask (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 94)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 94)).objectCompare (enumerator_4158.current_mIllegalValue (HERE).getter_uint (SOURCE_FILE ("piccolo_config.galgas", 94)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)), GALGAS_string ("illegal setting for '").add_operation (enumerator_4018.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)).add_operation (GALGAS_string ("' register: "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)).add_operation (enumerator_4158.current_mDescription (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 95))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 95)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*** ILLEGAL SETTING for register '").add_operation (enumerator_4018.current_lkey (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)).add_operation (GALGAS_string ("' ***\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 96)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  message: ").add_operation (enumerator_4158.current_mDescription (HERE).getter_string (SOURCE_FILE ("piccolo_config.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 97)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 111)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 111)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("MICROCONTROLLER CONFIGURATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 112)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 113)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inConfigDefinitionList.getter_length (SOURCE_FILE ("piccolo_config.galgas", 115)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_actualBuildConfig (constinArgument_inConfigRegisterMap, constinArgument_inConfigDefinitionList, ioArgument_ioListFileContents, outArgument_outActualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 116)) ;
    }
  }else if (kBoolFalse == test_0) {
    outArgument_outActualConfigurationMap = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 123)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("No configuration.\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 124)) ;
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
                                                                                const GALGAS_location & /* §§ inErrorLocation */
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
  GALGAS_string var_sourceFileBaseName_4009 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 95)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 95)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_4009.objectCompare (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 96)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 96)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 97)).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 97)), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("baseline_compilation.galgas", 97)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)).add_operation (var_sourceFileBaseName_4009, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 98)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 98))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)) ;
  }
  GALGAS_string var_listFileContents_4361 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_4456 ;
  {
  routine_parseDeviceDefinition (constinArgument_inPiccoloModel.mAttribute_mDeviceName, var_piccoloDeviceModel_4456, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 103)) ;
  }
  switch (var_piccoloDeviceModel_4456.getter_mProcessorType (SOURCE_FILE ("baseline_compilation.galgas", 104)).enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("baseline_compilation.galgas", 106)).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 106)), GALGAS_string ("a pic18 device is not accepted here : only a baseline device")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 106)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("baseline_compilation.galgas", 107)).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 107)), GALGAS_string ("a mid-ranfe device is not accepted here : only a baseline device")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 107)) ;
    }
    break ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_4956 ;
  {
  routine_buildConfig (var_piccoloDeviceModel_4456.getter_mConfigRegisterMap (SOURCE_FILE ("baseline_compilation.galgas", 112)), constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 113)), var_listFileContents_4361, var_actualConfigurationMap_4956, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 111)) ;
  }
  GALGAS_registerTable var_registerTable_5196 = var_piccoloDeviceModel_4456.getter_mRegisterTable (SOURCE_FILE ("baseline_compilation.galgas", 118)) ;
  GALGAS_ramBankTable var_ramBank_5258 = var_piccoloDeviceModel_4456.getter_mRamBankTable (SOURCE_FILE ("baseline_compilation.galgas", 119)) ;
  GALGAS_declaredByteMap var_declaredByteMap_5525 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.mAttribute_mRamDefinitionList, var_ramBank_5258, var_piccoloDeviceModel_4456.getter_mRegisterTable (SOURCE_FILE ("baseline_compilation.galgas", 124)), var_listFileContents_4361, var_registerTable_5196, var_declaredByteMap_5525, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 120)) ;
  }
  GALGAS_baselineRoutineMap var_routineMap_5598 = GALGAS_baselineRoutineMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 130)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_5681 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_5681.hasCurrentObject ()) {
    {
    var_routineMap_5598.setter_insertKey (enumerator_5681.current_mRoutineName (HERE), enumerator_5681.current_mIsNoReturn (HERE), enumerator_5681.current_mPage (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 132)) ;
    }
    enumerator_5681.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_5824 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 135)) ;
  GALGAS_stringset var_usedRegisters_6061 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 140)) ;
  cEnumerator_constantDefinitionList enumerator_6138 (constinArgument_inPiccoloModel.getter_mConstantDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 141)), kEnumeration_up) ;
  while (enumerator_6138.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_6211 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_6138.current_mExpression (HERE).ptr (), var_registerTable_5196, var_constantMap_5824, var_result_6211, var_usedRegisters_6061, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 142)) ;
    const enumGalgasBool test_1 = var_registerTable_5196.getter_hasKey (enumerator_6138.current_mConstantName (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 143)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 143)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (enumerator_6138.current_mConstantName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 144)), GALGAS_string ("'").add_operation (enumerator_6138.current_mConstantName (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 144)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 144))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 144)) ;
    }else if (kBoolFalse == test_1) {
      {
      var_constantMap_5824.setter_insertKey (enumerator_6138.current_mConstantName (HERE), var_result_6211, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 146)) ;
      }
    }
    enumerator_6138.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    routine_print_5F_constant_5F_definition (var_constantMap_5824, var_listFileContents_4361, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 151)) ;
    }
  }
  const enumGalgasBool test_3 = var_routineMap_5598.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_bool var_isNoReturn_6872 ;
    GALGAS_luint var_page_6889 ;
    var_routineMap_5598.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 158))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 158)), var_isNoReturn_6872, var_page_6889, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 158)) ;
    const enumGalgasBool test_4 = var_isNoReturn_6872.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticError (var_routineMap_5598.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 160)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main page 0\"")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 160)) ;
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_page_6889.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticError (var_page_6889.getter_location (SOURCE_FILE ("baseline_compilation.galgas", 163)), GALGAS_string ("the \"main\" should be declared in page 0: \"noreturn main page 0\"")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 163)) ;
    }
  }else if (kBoolFalse == test_3) {
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mEndOfProgram (SOURCE_FILE ("baseline_compilation.galgas", 166)), GALGAS_string ("the program should declare the \"main\" routine")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 166)) ;
  }
  GALGAS_bool var_needsToSavePCLATH_7409 = GALGAS_bool (false) ;
  GALGAS_uint var_totalPageCount_7444 = var_piccoloDeviceModel_4456.mAttribute_mRomSize.getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 170)).add_operation (GALGAS_uint ((uint32_t) 511U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 170)).divide_operation (GALGAS_uint ((uint32_t) 512U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 170)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_7548 (constinArgument_inPiccoloModel.getter_mRoutineDefinitionList (SOURCE_FILE ("baseline_compilation.galgas", 171)), kEnumeration_up) ;
  while (enumerator_7548.hasCurrentObject ()) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, enumerator_7548.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 172)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_needsToSavePCLATH_7409 = GALGAS_bool (true) ;
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsSupOrEqual, enumerator_7548.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 175)).objectCompare (var_totalPageCount_7444)).boolEnum () ;
    if (kBoolTrue == test_7) {
      inCompiler->emitSemanticError (enumerator_7548.current_mPage (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 176)), GALGAS_string ("invalid value (").add_operation (enumerator_7548.current_mPage (HERE).mAttribute_uint.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 176)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 176)).add_operation (var_totalPageCount_7444.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 176)).add_operation (GALGAS_string (" 512 word page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 176))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 176)) ;
    }
    enumerator_7548.gotoNextObject () ;
  }
  GALGAS_baseline_5F_routineDefinitionList var_sortedRoutineDefinitionList_7906 = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 180)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_8002 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_8002.hasCurrentObject ()) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_8002.current_mRoutineName (HERE).mAttribute_string.objectCompare (GALGAS_string ("main"))).boolEnum () ;
    if (kBoolTrue == test_8) {
      {
      var_sortedRoutineDefinitionList_7906.setter_insertAtIndex (enumerator_8002.current_mRoutineName (HERE), enumerator_8002.current_mPage (HERE), enumerator_8002.current_mIsNoReturn (HERE), enumerator_8002.current_mInstructionList (HERE), enumerator_8002.current_mEndOfRoutineLocation (HERE), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 183)) ;
      }
    }else if (kBoolFalse == test_8) {
      var_sortedRoutineDefinitionList_7906.addAssign_operation (enumerator_8002.current_mRoutineName (HERE), enumerator_8002.current_mPage (HERE), enumerator_8002.current_mIsNoReturn (HERE), enumerator_8002.current_mInstructionList (HERE), enumerator_8002.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 192)) ;
    }
    enumerator_8002.gotoNextObject () ;
  }
  GALGAS_baseline_5F_intermediate_5F_instructionList var_intermediateInstructionList_8506 = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 201)) ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 202)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_uint var_currentPage_8613 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_localLabelIndex_8643 = GALGAS_uint ((uint32_t) 0U) ;
    if (var_totalPageCount_7444.isValid ()) {
      uint32_t variant_8656 = var_totalPageCount_7444.uintValue () ;
      bool loop_8656 = true ;
      while (loop_8656) {
        loop_8656 = GALGAS_bool (kIsStrictInf, var_currentPage_8613.objectCompare (var_totalPageCount_7444)).isValid () ;
        if (loop_8656) {
          loop_8656 = GALGAS_bool (kIsStrictInf, var_currentPage_8613.objectCompare (var_totalPageCount_7444)).boolValue () ;
        }
        if (loop_8656 && (0 == variant_8656)) {
          loop_8656 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_compilation.galgas", 205)) ;
        }
        if (loop_8656) {
          variant_8656 -- ;
          GALGAS_bool var_pseudo_5F_PAGE_5F_generated_8745 = GALGAS_bool (false) ;
          cEnumerator_baseline_5F_routineDefinitionList enumerator_8798 (var_sortedRoutineDefinitionList_7906, kEnumeration_up) ;
          while (enumerator_8798.hasCurrentObject ()) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_8798.current_mPage (HERE).getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 208)).objectCompare (var_currentPage_8613)).boolEnum () ;
            if (kBoolTrue == test_10) {
              const enumGalgasBool test_11 = var_pseudo_5F_PAGE_5F_generated_8745.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 210)).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_pseudo_5F_PAGE_5F_generated_8745 = GALGAS_bool (true) ;
                var_intermediateInstructionList_8506.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::constructor_new (var_currentPage_8613  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 212))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 212)) ;
              }
              GALGAS_routineKind var_routineKind_9105 ;
              const enumGalgasBool test_12 = enumerator_8798.current_mIsNoReturn (HERE).boolEnum () ;
              if (kBoolTrue == test_12) {
                var_routineKind_9105 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("baseline_compilation.galgas", 217)) ;
                const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_8798.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_compilation.galgas", 219)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_13) {
                  inCompiler->emitSemanticError (enumerator_8798.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 220)), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 220)) ;
                }else if (kBoolFalse == test_13) {
                  GALGAS_baseline_5F_instruction var_lastInstruction_9490 ;
                  enumerator_8798.current_mInstructionList (HERE).method_last (var_lastInstruction_9490, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 222)) ;
                  callExtensionMethod_shouldNotContinueInSequence ((const cPtr_baseline_5F_instruction *) var_lastInstruction_9490.ptr (), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 223)) ;
                }
              }else if (kBoolFalse == test_12) {
                var_routineKind_9105 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("baseline_compilation.galgas", 226)) ;
                const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, enumerator_8798.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("baseline_compilation.galgas", 228)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_14) {
                  inCompiler->emitSemanticError (enumerator_8798.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 229)), GALGAS_string ("a baseline routine must end with a MOVLW instruction")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 229)) ;
                }else if (kBoolFalse == test_14) {
                  GALGAS_baseline_5F_instruction var_lastInstruction_10012 ;
                  enumerator_8798.current_mInstructionList (HERE).method_last (var_lastInstruction_10012, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 231)) ;
                  callExtensionMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction_10012.ptr (), GALGAS_string ("the last routine instruction should be MOVLW"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 232)) ;
                }
              }
              const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_8798.current_mRoutineName (HERE).mAttribute_string.objectCompare (GALGAS_string ("main"))).boolEnum () ;
              if (kBoolTrue == test_15) {
                var_intermediateInstructionList_8506.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::constructor_new (enumerator_8798.current_mRoutineName (HERE), enumerator_8798.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 237))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237)) ;
                var_intermediateInstructionList_8506.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_8798.current_mRoutineName (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 238))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 238)) ;
              }
              GALGAS_bool var_continuesInSequence_10803 ;
              {
              routine_handleBaselineInstructionList (var_currentPage_8613, enumerator_8798.current_mInstructionList (HERE), var_routineMap_5598, var_registerTable_5196, var_constantMap_5824, var_localLabelIndex_8643, var_intermediateInstructionList_8506, var_listFileContents_4361, var_continuesInSequence_10803, var_routineKind_9105, enumerator_8798.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 251)), var_usedRegisters_6061, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 240)) ;
              }
              var_intermediateInstructionList_8506.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::constructor_new (enumerator_8798.current_mRoutineName (HERE), var_currentPage_8613  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 254))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 254)) ;
              const enumGalgasBool test_16 = enumerator_8798.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_10803 COMMA_SOURCE_FILE ("baseline_compilation.galgas", 255)).boolEnum () ;
              if (kBoolTrue == test_16) {
                inCompiler->emitSemanticError (enumerator_8798.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 256)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 256)) ;
              }
            }
            enumerator_8798.gotoNextObject () ;
          }
          var_currentPage_8613.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 260)) ;
        }
      }
    }
  }
  GALGAS_stringset var_usedRoutineSet_11361 = function_baseline_5F_computeUsedRoutines (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 264)) ;
  GALGAS_baseline_5F_declaredRoutineMap var_declaredRoutineMap_11466 = GALGAS_baseline_5F_declaredRoutineMap::constructor_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 267)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_11558 (constinArgument_inPiccoloModel.mAttribute_mRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_11558.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_11466.setter_insertKey (enumerator_11558.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 269)) ;
    }
    enumerator_11558.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity_11710 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 272)) ;
  cEnumerator_lstringlist enumerator_11780 (constinArgument_inPiccoloModel.mAttribute_mUnusedRoutineList, kEnumeration_up) ;
  while (enumerator_11780.hasCurrentObject ()) {
    const enumGalgasBool test_17 = var_declaredRoutineMap_11466.getter_hasKey (enumerator_11780.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 274)).boolEnum () ;
    if (kBoolTrue == test_17) {
      inCompiler->emitSemanticError (enumerator_11780.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 275)), GALGAS_string ("the '").add_operation (enumerator_11780.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275)) ;
    }else if (kBoolFalse == test_17) {
      const enumGalgasBool test_18 = var_unusedRoutineDeclarationUnicity_11710.getter_hasKey (enumerator_11780.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)).boolEnum () ;
      if (kBoolTrue == test_18) {
        inCompiler->emitSemanticWarning (enumerator_11780.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 277)), GALGAS_string ("the '").add_operation (enumerator_11780.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277)) ;
      }else if (kBoolFalse == test_18) {
        const enumGalgasBool test_19 = var_usedRoutineSet_11361.getter_hasKey (enumerator_11780.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)).boolEnum () ;
        if (kBoolTrue == test_19) {
          inCompiler->emitSemanticWarning (enumerator_11780.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 279)), GALGAS_string ("the '").add_operation (enumerator_11780.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 279)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 279))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 279)) ;
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_11710.addAssign_operation (enumerator_11780.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 281)) ;
    enumerator_11780.gotoNextObject () ;
  }
  cEnumerator_baseline_5F_declaredRoutineMap enumerator_12308 (var_declaredRoutineMap_11466, kEnumeration_up) ;
  while (enumerator_12308.hasCurrentObject ()) {
    const enumGalgasBool test_20 = var_usedRoutineSet_11361.getter_hasKey (enumerator_12308.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 284)).operator_and (var_unusedRoutineDeclarationUnicity_11710.getter_hasKey (enumerator_12308.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 284)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)).boolEnum () ;
    if (kBoolTrue == test_20) {
      inCompiler->emitSemanticWarning (enumerator_12308.current_lkey (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 285)), GALGAS_string ("the '").add_operation (enumerator_12308.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 285)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 285))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 285)) ;
    }
    enumerator_12308.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_12624 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 289)) ;
  cEnumerator_lstringlist enumerator_12695 (constinArgument_inPiccoloModel.mAttribute_mUnusedRegisterList, kEnumeration_up) ;
  while (enumerator_12695.hasCurrentObject ()) {
    const enumGalgasBool test_21 = var_registerTable_5196.getter_hasKey (enumerator_12695.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 291)).boolEnum () ;
    if (kBoolTrue == test_21) {
      inCompiler->emitSemanticError (enumerator_12695.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 292)), GALGAS_string ("the '").add_operation (enumerator_12695.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292)) ;
    }else if (kBoolFalse == test_21) {
      const enumGalgasBool test_22 = var_unusedDeclarationUnicity_12624.getter_hasKey (enumerator_12695.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)).boolEnum () ;
      if (kBoolTrue == test_22) {
        inCompiler->emitSemanticWarning (enumerator_12695.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 294)), GALGAS_string ("the '").add_operation (enumerator_12695.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294)) ;
      }else if (kBoolFalse == test_22) {
        const enumGalgasBool test_23 = var_usedRegisters_6061.getter_hasKey (enumerator_12695.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)).boolEnum () ;
        if (kBoolTrue == test_23) {
          inCompiler->emitSemanticWarning (enumerator_12695.current_mValue (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 296)), GALGAS_string ("the '").add_operation (enumerator_12695.current_mValue (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 296)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 296))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 296)) ;
        }
      }
    }
    var_unusedDeclarationUnicity_12624.addAssign_operation (enumerator_12695.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 298)) ;
    enumerator_12695.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_13191 (var_declaredByteMap_5525, kEnumeration_up) ;
  while (enumerator_13191.hasCurrentObject ()) {
    const enumGalgasBool test_24 = var_usedRegisters_6061.getter_hasKey (enumerator_13191.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 301)).operator_and (var_unusedDeclarationUnicity_12624.getter_hasKey (enumerator_13191.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 301)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)).boolEnum () ;
    if (kBoolTrue == test_24) {
      inCompiler->emitSemanticWarning (enumerator_13191.current_lkey (HERE).getter_location (SOURCE_FILE ("baseline_compilation.galgas", 302)), GALGAS_string ("the '").add_operation (enumerator_13191.current_lkey (HERE).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 302)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 302))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 302)) ;
    }
    enumerator_13191.gotoNextObject () ;
  }
  const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 306)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)).boolEnum () ;
  if (kBoolTrue == test_25) {
    var_listFileContents_4361.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)) ;
    var_listFileContents_4361.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERMEDIATE INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)) ;
    var_listFileContents_4361.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)) ;
    var_listFileContents_4361.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 310)) ;
    var_listFileContents_4361.plusAssign_operation(GALGAS_string (" Line Length Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 311)) ;
    GALGAS_uint var_currentAddress_13921 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_13968 (var_intermediateInstructionList_8506, kEnumeration_up) ;
    GALGAS_uint index_13933 ((uint32_t) 0) ;
    while (enumerator_13968.hasCurrentObject ()) {
      var_listFileContents_4361.plusAssign_operation(index_13933.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 314)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 5U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)) ;
      var_listFileContents_4361.plusAssign_operation(callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13968.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 315)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 6U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)) ;
      callExtensionMethod_print ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13968.current_mInstruction (HERE).ptr (), var_listFileContents_4361, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 316)) ;
      var_listFileContents_4361.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 317)) ;
      callExtensionMethod_setCurrentAddress ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13968.current_mInstruction (HERE).ptr (), var_currentAddress_13921, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 318)) ;
      enumerator_13968.gotoNextObject () ;
      index_13933.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)) ;
    }
    var_listFileContents_4361.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)) ;
    var_listFileContents_4361.plusAssign_operation(GALGAS_string ("Code size without optimization: ").add_operation (var_currentAddress_13921.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 321)).add_operation (GALGAS_string (" words.\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 321)) ;
  }
  const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 324)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 324)).boolEnum () ;
  if (kBoolTrue == test_26) {
    {
    routine_perform_5F_baseline_5F_optimizations (var_intermediateInstructionList_8506, var_listFileContents_4361, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 325)) ;
    }
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 328)) ;
  }
  GALGAS_registerExpression var_sr_14762 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("STATUS"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 332))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 329)) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_statusRegister_15010 ;
  GALGAS_bitSliceTable var_statusRegisterBitSliceTable_15062 ;
  callExtensionMethod_resolveBaselineAccess ((const cPtr_registerExpression *) var_sr_14762.ptr (), var_registerTable_5196, var_constantMap_5824, var_statusRegister_15010, var_statusRegisterBitSliceTable_15062, var_usedRegisters_6061, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 334)) ;
  GALGAS_baseline_5F_assembly_5F_instructionList var_assemblyInstructionList_15116 = GALGAS_baseline_5F_assembly_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 341)) ;
  const enumGalgasBool test_27 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 342)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    {
    routine_build_5F_baseline_5F_assembly_5F_code (var_intermediateInstructionList_8506, var_actualConfigurationMap_4956, var_statusRegister_15010, var_statusRegisterBitSliceTable_15062, var_assemblyInstructionList_15116, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 343)) ;
    }
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 352)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_28) {
    var_listFileContents_4361.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)) ;
    var_listFileContents_4361.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)) ;
    var_listFileContents_4361.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)) ;
    var_listFileContents_4361.plusAssign_operation(GALGAS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 356)) ;
    GALGAS_uint var_usedROMsize_15937 ;
    {
    routine_build_5F_baseline_5F_binary_5F_code (var_assemblyInstructionList_15116, var_piccoloDeviceModel_4456.mAttribute_mRomSize.getter_uint (SOURCE_FILE ("baseline_compilation.galgas", 359)), var_listFileContents_4361, var_usedROMsize_15937, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 357)) ;
    }
  }
  const enumGalgasBool test_29 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_29) {
    GALGAS_string var_listFile_16075 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 366)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 366)) ;
    GALGAS_bool joker_16203 ; // Joker input parameter
    var_listFileContents_4361.method_writeToFileWhenDifferentContents (var_listFile_16075, joker_16203, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 367)) ;
  }
  const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 371)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_30) {
    GALGAS_string var_contents_16686 ;
    {
    routine_getGeneratedContents (var_contents_16686, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 382)) ;
    }
    GALGAS_string var_destinationFile_16716 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 383)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 383)) ;
    GALGAS_bool joker_16842 ; // Joker input parameter
    var_contents_16686.method_writeToFileWhenDifferentContents (var_destinationFile_16716, joker_16842, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 384)) ;
    const enumGalgasBool test_31 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_31) {
      GALGAS_string var_baseName_16929 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 386)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 386)) ;
      {
      routine_get_5F_C_5F_ArrayImplementation (var_baseName_16929, var_contents_16686, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 387)) ;
      }
      var_destinationFile_16716 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 388)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 388)) ;
      GALGAS_bool joker_17204 ; // Joker input parameter
      var_contents_16686.method_writeToFileWhenDifferentContents (var_destinationFile_16716, joker_17204, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 389)) ;
      {
      routine_get_5F_C_5F_ArrayHeader (var_baseName_16929, var_contents_16686, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 390)) ;
      }
      var_destinationFile_16716 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 391)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 391)) ;
      GALGAS_bool joker_17402 ; // Joker input parameter
      var_contents_16686.method_writeToFileWhenDifferentContents (var_destinationFile_16716, joker_17402, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 392)) ;
    }
    const enumGalgasBool test_32 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_string var_assemblyCode_18407 = GALGAS_string ("  processor ").add_operation (constinArgument_inPiccoloModel.mAttribute_mDeviceName.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 411)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 411)) ;
      cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_18503 (var_assemblyInstructionList_15116, kEnumeration_up) ;
      while (enumerator_18503.hasCurrentObject ()) {
        callExtensionMethod_print ((const cPtr_baseline_5F_assembly_5F_instruction *) enumerator_18503.current_mInstruction (HERE).ptr (), var_assemblyCode_18407, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 413)) ;
        var_assemblyCode_18407.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 414)) ;
        enumerator_18503.gotoNextObject () ;
      }
      var_assemblyCode_18407.plusAssign_operation(GALGAS_string ("\n"
        ";--- Registers\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 416)) ;
      cEnumerator_registerTable enumerator_18663 (var_registerTable_5196, kEnumeration_up) ;
      while (enumerator_18663.hasCurrentObject ()) {
        GALGAS_uint var_address_18721 ;
        enumerator_18663.current_mRegisterAddressList (HERE).method_first (var_address_18721, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)) ;
        var_assemblyCode_18407.plusAssign_operation(enumerator_18663.current_lkey (HERE).mAttribute_string.add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 419)).add_operation (var_address_18721.getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 419)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 419)) ;
        enumerator_18663.gotoNextObject () ;
      }
      var_assemblyCode_18407.plusAssign_operation(GALGAS_string ("W EQU 0\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 421)) ;
      var_assemblyCode_18407.plusAssign_operation(GALGAS_string (";--- Configuration\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 422)) ;
      cEnumerator_actualConfigurationMap enumerator_18928 (var_actualConfigurationMap_4956, kEnumeration_up) ;
      while (enumerator_18928.hasCurrentObject ()) {
        var_assemblyCode_18407.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_18928.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)).add_operation (enumerator_18928.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 424)) ;
        enumerator_18928.gotoNextObject () ;
      }
      var_assemblyCode_18407.plusAssign_operation(GALGAS_string ("\n"
        "  END\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 426)) ;
      GALGAS_string var_asmDestinationFile_19126 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 427)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 427)) ;
      GALGAS_bool joker_19261 ; // Joker input parameter
      var_assemblyCode_18407.method_writeToFileWhenDifferentContents (var_asmDestinationFile_19126, joker_19261, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 428)) ;
    }
  }else if (kBoolFalse == test_30) {
    GALGAS_string var_hexDestinationFile_19355 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 431)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 431)) ;
    const enumGalgasBool test_33 = var_hexDestinationFile_19355.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 432)).boolEnum () ;
    if (kBoolTrue == test_33) {
      {
      GALGAS_string::class_method_deleteFile (var_hexDestinationFile_19355, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 433)) ;
      }
    }
    GALGAS_string var_asmDestinationFile_19545 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 435)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 435)) ;
    const enumGalgasBool test_34 = var_asmDestinationFile_19545.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 436)).boolEnum () ;
    if (kBoolTrue == test_34) {
      {
      GALGAS_string::class_method_deleteFile (var_asmDestinationFile_19545, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 437)) ;
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
      inCompiler->emitSemanticError (enumerator_2271.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)), GALGAS_string ("Unreachable code")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)) ;
      outArgument_outContinuesInSequence = GALGAS_bool (true) ;
    }
    GALGAS_bool temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, index_2246.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 86)).objectCompare (constinArgument_inInstructionList.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 86)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = constinArgument_inLastInstructionShouldReturn ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_bool (false) ;
    }
    callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) enumerator_2271.current_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, temp_1, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 76)) ;
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
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentWordAddress_12068.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)).add_operation (var_lastAddressForFirstPass_12226.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 344)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345))  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass_12226.objectCompare (constinArgument_inROMsize)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_12226.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 348)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 349))  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)) ;
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
      inCompiler->emitSemanticError (enumerator_2948.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)), GALGAS_string ("Unreachable code")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)) ;
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
      inCompiler->emitSemanticError (enumerator_57200.current_mRequiredBank (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1654)), GALGAS_string ("the required bank value should be lower or equal to 15")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1654)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_57200.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_57200.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1656)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (enumerator_57200.current_mReturnedBank (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1657)), GALGAS_string ("the returned bank value should be lower or equal to 15")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1657)) ;
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
    const enumGalgasBool test_2 = constinArgument_inRegisterTable.getter_hasKey (enumerator_57999.current_mConstantName (HERE).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1669)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1669)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (enumerator_57999.current_mConstantName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)), GALGAS_string ("'").add_operation (enumerator_57999.current_mConstantName (HERE).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1670)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_constantMap_57736.setter_insertKey (enumerator_57999.current_mConstantName (HERE), var_result_58074, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1672)) ;
      }
    }
    enumerator_57999.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    routine_print_5F_constant_5F_definition (var_constantMap_57736, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1677)) ;
    }
  }
  const enumGalgasBool test_4 = var_routineMap_57123.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1683)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isNoReturn_58741 ;
    GALGAS_uint var_requiredBank_58765 ;
    GALGAS_uint joker_58767 ; // Joker input parameter
    GALGAS_bool joker_58770 ; // Joker input parameter
    var_routineMap_57123.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1684))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1684)), var_isNoReturn_58741, var_requiredBank_58765, joker_58767, joker_58770, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1684)) ;
    GALGAS_location var_mainDeclarationLocation_58814 = var_routineMap_57123.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1685)) ;
    const enumGalgasBool test_5 = var_isNoReturn_58741.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1686)).boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticError (var_mainDeclarationLocation_58814, GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\"")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1687)) ;
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_requiredBank_58765.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (var_mainDeclarationLocation_58814, GALGAS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\"")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1690)) ;
    }
  }else if (kBoolFalse == test_4) {
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mEndOfProgram (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1693)), GALGAS_string ("the program should declare the \"main\" routine")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1693)) ;
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
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_59998.current_mPage (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1717)).objectCompare (var_currentPage_59807)).boolEnum () ;
          if (kBoolTrue == test_7) {
            const enumGalgasBool test_8 = var_orgGenerated_59900.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1718)).boolEnum () ;
            if (kBoolTrue == test_8) {
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::constructor_new (var_currentPage_59807.multiply_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1719))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1719))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1719)) ;
              var_orgGenerated_59900 = GALGAS_bool (true) ;
            }
            GALGAS_bool var_continuesInSequence_60256 ;
            GALGAS_uint var_currentBank_60282 = enumerator_59998.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1723)) ;
            GALGAS_routineKind var_routineKind_60338 ;
            const enumGalgasBool test_9 = enumerator_59998.current_mIsNoReturn (HERE).boolEnum () ;
            if (kBoolTrue == test_9) {
              var_routineKind_60338 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1726)) ;
            }else if (kBoolFalse == test_9) {
              var_routineKind_60338 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728)) ;
            }
            outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::constructor_new (enumerator_59998.current_mRoutineName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1730))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1730)) ;
            {
            routine_handleMidrangeInstructionList (enumerator_59998.current_mInstructionList (HERE), var_routineMap_57123, constinArgument_inRegisterTable, var_constantMap_57736, var_localLabelIndex_59387, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_57049, constinArgument_inTotalBankCount, var_currentBank_60282, enumerator_59998.current_mPreservesBank (HERE), var_continuesInSequence_60256, var_routineKind_60338, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1731)) ;
            }
            const enumGalgasBool test_10 = enumerator_59998.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_59998.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_60282.objectCompare (enumerator_59998.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)).boolEnum () ;
            if (kBoolTrue == test_10) {
              inCompiler->emitSemanticError (enumerator_59998.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_59998.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)) ;
            }
            const enumGalgasBool test_11 = enumerator_59998.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_60256 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)).boolEnum () ;
            if (kBoolTrue == test_11) {
              inCompiler->emitSemanticError (enumerator_59998.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)) ;
            }
            const enumGalgasBool test_12 = enumerator_59998.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1753)).boolEnum () ;
            if (kBoolTrue == test_12) {
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (enumerator_59998.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1754))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1754))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1754)) ;
            }
          }
          enumerator_59998.gotoNextObject () ;
        }
        var_currentPage_59807.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1758)) ;
      }
    }
  }
  const enumGalgasBool test_13 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_13) {
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
      inCompiler->emitSemanticError (enumerator_62980.current_mPage (HERE).getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)), GALGAS_string ("invalid value (").add_operation (enumerator_62980.current_mPage (HERE).getter_uint (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)).add_operation (GALGAS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1795)) ;
    }
    enumerator_62980.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1798)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1799)) ;
  }
  const enumGalgasBool test_3 = outArgument_outShouldSavePCLATH.boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
    cEnumerator_midrange_5F_interruptDefinitionList enumerator_63543 (constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1804)), kEnumeration_up) ;
    bool bool_4 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1804)).isValidAndTrue () ;
    if (enumerator_63543.hasCurrentObject () && bool_4) {
      while (enumerator_63543.hasCurrentObject () && bool_4) {
        cEnumerator_midrange_5F_instructionList enumerator_63610 (enumerator_63543.current_mInstructionList (HERE), kEnumeration_up) ;
        bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1805)).isValidAndTrue () ;
        if (enumerator_63610.hasCurrentObject () && bool_5) {
          while (enumerator_63610.hasCurrentObject () && bool_5) {
            callExtensionMethod_instructionUsesGOTOorCALL ((const cPtr_midrange_5F_instruction *) enumerator_63610.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1806)) ;
            enumerator_63610.gotoNextObject () ;
            if (enumerator_63610.hasCurrentObject ()) {
              bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1805)).isValidAndTrue () ;
            }
          }
        }
        enumerator_63543.gotoNextObject () ;
        if (enumerator_63543.hasCurrentObject ()) {
          bool_4 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1804)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_6 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1810)) ;
    }else if (kBoolFalse == test_6) {
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
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)).add_operation (GALGAS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_size_67907.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (var_size_67907.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1924)) ;
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
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_bankAccessibility_67940.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1932)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1933)) ;
  }
  const enumGalgasBool test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_67907.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1935)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).add_operation (var_size_67907.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1936)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)).operator_and (GALGAS_bool (kIsNotEqual, var_size_67907.objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)).add_operation (var_size_67907.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1938)) ;
    }
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1941)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
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
    const enumGalgasBool test_6 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_6) {
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
    const enumGalgasBool test_7 = var_continuesInSequence_72985.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2046)).boolEnum () ;
    if (kBoolTrue == test_7) {
      inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2047)) ;
    }
    const enumGalgasBool test_8 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_8) {
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
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (kIsNotEqual, var_size_76695.objectCompare (GALGAS_uint ((uint32_t) 3U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (var_size_76695.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)).add_operation (GALGAS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).operator_and (GALGAS_bool (kIsNotEqual, var_size_76695.objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2123)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).add_operation (var_size_76695.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2124)) ;
    }
  }
  GALGAS_uintlist var_saveStatusRegisterAddressList_77559 = var_registerAddressList_76679 ;
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inSecondSaveRegister.mAttribute_string  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2128)) ;
  GALGAS_bitSliceTable joker_77711 ; // Joker input parameter
  GALGAS_string joker_77714 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_76679, var_size_76695, joker_77711, joker_77714, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)) ;
  var_saveStatusRegisterAddressList_77559 = var_saveStatusRegisterAddressList_77559.add_operation (var_registerAddressList_76679, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_size_76695.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)).add_operation (var_size_76695.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)) ;
  }
  GALGAS_bool var_accessibleFromBank_31__78031 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_78072 (var_registerAddressList_76679, kEnumeration_up) ;
  bool bool_5 = var_accessibleFromBank_31__78031.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2136)).isValidAndTrue () ;
  if (enumerator_78072.hasCurrentObject () && bool_5) {
    while (enumerator_78072.hasCurrentObject () && bool_5) {
      var_accessibleFromBank_31__78031 = GALGAS_bool (kIsEqual, enumerator_78072.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 3968U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2137)).objectCompare (GALGAS_uint ((uint32_t) 128U))) ;
      enumerator_78072.gotoNextObject () ;
      if (enumerator_78072.hasCurrentObject ()) {
        bool_5 = var_accessibleFromBank_31__78031.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2136)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_6 = var_accessibleFromBank_31__78031.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2139)).boolEnum () ;
  if (kBoolTrue == test_6) {
    inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2140)) ;
  }
  GALGAS_bool var_offsetOk_78423 = GALGAS_bool (true) ;
  cEnumerator_uintlist enumerator_78463 (var_registerAddressList_76679, kEnumeration_up) ;
  bool bool_7 = var_offsetOk_78423.isValidAndTrue () ;
  if (enumerator_78463.hasCurrentObject () && bool_7) {
    while (enumerator_78463.hasCurrentObject () && bool_7) {
      var_offsetOk_78423 = GALGAS_bool (kIsEqual, var_offset_76753.objectCompare (enumerator_78463.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2145)))) ;
      const enumGalgasBool test_8 = var_offsetOk_78423.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2146)).boolEnum () ;
      if (kBoolTrue == test_8) {
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.getter_location (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (GALGAS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (enumerator_78463.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)).add_operation (GALGAS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (constinArgument_inFirstSaveRegister.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (GALGAS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (var_offset_76753.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2149)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2148)).add_operation (GALGAS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2149))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2147)) ;
      }
      enumerator_78463.gotoNextObject () ;
      if (enumerator_78463.hasCurrentObject ()) {
        bool_7 = var_offsetOk_78423.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2153)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
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
    const enumGalgasBool test_10 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_10) {
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
    const enumGalgasBool test_11 = var_continuesInSequence_82676.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2258)).boolEnum () ;
    if (kBoolTrue == test_11) {
      inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine")  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)) ;
    }
    const enumGalgasBool test_12 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_12) {
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
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_13479.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)).add_operation (GALGAS_string (" value when checking relative branches, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)).add_operation (var_lastAddressForFirstPass_13643.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 344)).add_operation (GALGAS_string (" value when computing routine map"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345))  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 343)) ;
        }
        const enumGalgasBool test_1 = var_JUMP_5F_or_5F_JSR_5F_fixed_13072.operator_not (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 347)).boolEnum () ;
        if (kBoolTrue == test_1) {
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
    inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GALGAS_string ("GOTO (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GALGAS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)) ;
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
    inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GALGAS_string ("CALL (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GALGAS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)) ;
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
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_23993.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)).add_operation (var_lastAddressForFirstPass_24148.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 707)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 708))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 706)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass_24148.objectCompare (constinArgument_inROMsize)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_24148.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 711)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 712))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)) ;
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
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 19)).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 19)), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("midrange_semantics.galgas", 19)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (var_sourceFileBaseName_773, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)) ;
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
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 28)).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 28)), GALGAS_string ("a pic18 device is not accepted here : only a mid-range device")  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 28)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 29)).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 29)), GALGAS_string ("a baseline device is not accepted here : only a mid-range device")  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 29)) ;
    }
    break ;
  }
  GALGAS_bool var_hasInterrupt_1690 = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_1753 (constinArgument_inPiccoloModel.getter_mInterruptDefinitionList (SOURCE_FILE ("midrange_semantics.galgas", 33)), kEnumeration_up) ;
  while (enumerator_1753.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_hasInterrupt_1690.boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (enumerator_1753.current_mInterruptLocation (HERE), GALGAS_string ("only one interrupt routine can be defined")  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 35)) ;
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
    const enumGalgasBool test_2 = var_declaredRoutineMap_3338.getter_hasKey (enumerator_3652.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 85)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 85)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (enumerator_3652.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 86)), GALGAS_string ("the '").add_operation (enumerator_3652.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 86)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 86))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 86)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = var_unusedRoutineDeclarationUnicity_3582.getter_hasKey (enumerator_3652.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticWarning (enumerator_3652.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 88)), GALGAS_string ("the '").add_operation (enumerator_3652.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 88)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 88))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 88)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = var_usedRoutineSet_3188.getter_hasKey (enumerator_3652.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 89)).boolEnum () ;
        if (kBoolTrue == test_4) {
          inCompiler->emitSemanticWarning (enumerator_3652.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 90)), GALGAS_string ("the '").add_operation (enumerator_3652.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 90)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 90))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 90)) ;
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_3582.addAssign_operation (enumerator_3652.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 92)) ;
    enumerator_3652.gotoNextObject () ;
  }
  cEnumerator_midrange_5F_declaredRoutineMap enumerator_4180 (var_declaredRoutineMap_3338, kEnumeration_up) ;
  while (enumerator_4180.hasCurrentObject ()) {
    const enumGalgasBool test_5 = var_usedRoutineSet_3188.getter_hasKey (enumerator_4180.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 95)).operator_and (var_unusedRoutineDeclarationUnicity_3582.getter_hasKey (enumerator_4180.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 95)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)).boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticWarning (enumerator_4180.current_lkey (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 96)), GALGAS_string ("the '").add_operation (enumerator_4180.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 96)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 96))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 96)) ;
    }
    enumerator_4180.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedByteDeclarationUnicity_4500 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_semantics.galgas", 100)) ;
  cEnumerator_lstringlist enumerator_4571 (constinArgument_inPiccoloModel.mAttribute_mUnusedRegisterList, kEnumeration_up) ;
  while (enumerator_4571.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_registerTable_2296.getter_hasKey (enumerator_4571.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 102)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 102)).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (enumerator_4571.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 103)), GALGAS_string ("the '").add_operation (enumerator_4571.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)) ;
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_7 = var_unusedByteDeclarationUnicity_4500.getter_hasKey (enumerator_4571.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 104)).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticWarning (enumerator_4571.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 105)), GALGAS_string ("the '").add_operation (enumerator_4571.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = var_usedRegisters_2661.getter_hasKey (enumerator_4571.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 106)).boolEnum () ;
        if (kBoolTrue == test_8) {
          inCompiler->emitSemanticWarning (enumerator_4571.current_mValue (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 107)), GALGAS_string ("the '").add_operation (enumerator_4571.current_mValue (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)) ;
        }
      }
    }
    var_unusedByteDeclarationUnicity_4500.addAssign_operation (enumerator_4571.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 109)) ;
    enumerator_4571.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_5075 (var_declaredByteMap_2566, kEnumeration_up) ;
  while (enumerator_5075.hasCurrentObject ()) {
    const enumGalgasBool test_9 = var_usedRegisters_2661.getter_hasKey (enumerator_5075.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_and (var_unusedByteDeclarationUnicity_4500.getter_hasKey (enumerator_5075.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 112)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_9) {
      inCompiler->emitSemanticWarning (enumerator_5075.current_lkey (HERE).getter_location (SOURCE_FILE ("midrange_semantics.galgas", 113)), GALGAS_string ("the '").add_operation (enumerator_5075.current_lkey (HERE).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113))  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 113)) ;
    }
    enumerator_5075.gotoNextObject () ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 117)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 117)).boolEnum () ;
  if (kBoolTrue == test_10) {
    {
    routine_perform_5F_midrange_5F_optimizations (var_generatedInstructionList_3050, var_listFileContents_1125, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)) ;
    }
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 121)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_11) {
    {
    routine_midrange_5F_compute_5F_JSR_5F_JUMP (var_generatedInstructionList_3050, var_listFileContents_1125, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)) ;
    }
  }
  const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 126)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_12) {
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
    const enumGalgasBool test_13 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_13) {
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
    const enumGalgasBool test_14 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("midrange_semantics.galgas", 153)).boolEnum () ;
    if (kBoolTrue == test_14) {
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
    const enumGalgasBool test_15 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_string var_assemblyCode_7857 ;
      {
      routine_midrange_5F_build_5F_assembly_5F_code (var_piccoloDeviceModel_1220.getter_mDeviceName (SOURCE_FILE ("midrange_semantics.galgas", 171)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 171)), var_piccoloDeviceModel_1220.getter_mRegisterTable (SOURCE_FILE ("midrange_semantics.galgas", 172)), var_registerTable_2296, var_generatedInstructionList_3050, var_actualConfigurationMap_1995, var_assemblyCode_7857, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)) ;
      }
      GALGAS_string var_asmDestinationFile_8142 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 178)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 178)) ;
      GALGAS_bool joker_8277 ; // Joker input parameter
      var_assemblyCode_7857.method_writeToFileWhenDifferentContents (var_asmDestinationFile_8142, joker_8277, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 179)) ;
    }
  }else if (kBoolFalse == test_12) {
    GALGAS_string var_hexDestinationFile_8371 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 182)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 182)) ;
    const enumGalgasBool test_16 = var_hexDestinationFile_8371.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 183)).boolEnum () ;
    if (kBoolTrue == test_16) {
      {
      GALGAS_string::class_method_deleteFile (var_hexDestinationFile_8371, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 184)) ;
      }
    }
    GALGAS_string var_asmDestinationFile_8561 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 186)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 186)) ;
    const enumGalgasBool test_17 = var_asmDestinationFile_8561.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 187)).boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      GALGAS_string::class_method_deleteFile (var_asmDestinationFile_8561, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 188)) ;
      }
    }
  }
  const enumGalgasBool test_18 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_18) {
    GALGAS_string var_listFile_8852 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 193)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 193)) ;
    GALGAS_bool joker_8980 ; // Joker input parameter
    var_listFileContents_1125.method_writeToFileWhenDifferentContents (var_listFile_8852, joker_8980, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 194)) ;
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
  GALGAS_string var_sourceFileBaseName_567 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas", 14)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 14)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceFileBaseName_567.objectCompare (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 15)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 15)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 16)).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 16)), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.getter_mProgramName (SOURCE_FILE ("pic18_semantics.galgas", 16)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (var_sourceFileBaseName_567, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)) ;
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
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 39)).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 39)), GALGAS_string ("a midrange device is not accepted here")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 39)) ;
          var_accessBankSplitOffset_1044.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_processorType::kEnum_baseline:
        {
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.getter_mDeviceNameOrBootLoaderReference (SOURCE_FILE ("pic18_semantics.galgas", 40)).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 40)), GALGAS_string ("a baseline device is not accepted here")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 40)) ;
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
    const enumGalgasBool test_1 = var_declaredRoutineMap_5052.getter_hasKey (enumerator_5468.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 107)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 107)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (enumerator_5468.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 108)), GALGAS_string ("the '").add_operation (enumerator_5468.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 108)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = var_unusedDeclarationUnicity_5398.getter_hasKey (enumerator_5468.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticWarning (enumerator_5468.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 110)), GALGAS_string ("the '").add_operation (enumerator_5468.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = var_usedRoutineSet_4766.getter_hasKey (enumerator_5468.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 111)).boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticWarning (enumerator_5468.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 112)), GALGAS_string ("the '").add_operation (enumerator_5468.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)) ;
        }
      }
    }
    var_unusedDeclarationUnicity_5398.addAssign_operation (enumerator_5468.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)) ;
    enumerator_5468.gotoNextObject () ;
  }
  cEnumerator_declaredRoutineMap enumerator_5982 (var_declaredRoutineMap_5052, kEnumeration_up) ;
  while (enumerator_5982.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_usedRoutineSet_4766.getter_hasKey (enumerator_5982.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_and (var_unusedDeclarationUnicity_5398.getter_hasKey (enumerator_5982.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 117)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 117)).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticWarning (enumerator_5982.current_lkey (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 118)), GALGAS_string ("the '").add_operation (enumerator_5982.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 118)) ;
    }
    enumerator_5982.gotoNextObject () ;
  }
  GALGAS_stringset var_inlinedRoutineSet_6243 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_semantics.galgas", 122)) ;
  cEnumerator_lstringlist enumerator_6314 (constinArgument_inPiccoloModel.mAttribute_mInlinedRoutineList, kEnumeration_up) ;
  while (enumerator_6314.hasCurrentObject ()) {
    const enumGalgasBool test_5 = var_declaredRoutineMap_5052.getter_hasKey (enumerator_6314.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 124)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 124)).boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticError (enumerator_6314.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 125)), GALGAS_string ("the '").add_operation (enumerator_6314.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 125)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = var_usedRoutineSet_4766.getter_hasKey (enumerator_6314.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_semantics.galgas", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 126)).boolEnum () ;
      if (kBoolTrue == test_6) {
        inCompiler->emitSemanticWarning (enumerator_6314.current_mValue (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 127)), GALGAS_string ("useless declaration, the '").add_operation (enumerator_6314.current_mValue (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)) ;
      }else if (kBoolFalse == test_6) {
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
    bool bool_7 = var_found_7106.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 143)).isValidAndTrue () ;
    if (enumerator_7140.hasCurrentObject () && bool_7) {
      while (enumerator_7140.hasCurrentObject () && bool_7) {
        var_found_7106 = GALGAS_bool (kIsEqual, enumerator_7140.current_mValue (HERE).mAttribute_string.objectCompare (var_piccoloDeviceName_1690)) ;
        enumerator_7140.gotoNextObject () ;
        if (enumerator_7140.hasCurrentObject ()) {
          bool_7 = var_found_7106.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 143)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_8 = var_found_7106.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 146)).boolEnum () ;
    if (kBoolTrue == test_8) {
      inCompiler->emitSemanticError (enumerator_7087.current_mErrorLocation (HERE), GALGAS_string ("this code is not available for '").add_operation (var_piccoloDeviceName_1690, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 147)) ;
    }
    enumerator_7087.gotoNextObject () ;
  }
  GALGAS_bool var_hasHighInterrupt_7413 = GALGAS_bool (false) ;
  GALGAS_bool var_highInterruptIsFast_7449 = GALGAS_bool (false) ;
  GALGAS_bool var_hasLowInterrupt_7481 = GALGAS_bool (false) ;
  GALGAS_bool var_lowInterruptIsFast_7516 = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7561 (var_interruptDefinitionList_6708, kEnumeration_up) ;
  while (enumerator_7561.hasCurrentObject ()) {
    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.getter_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 156)).objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 156)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      inCompiler->emitSemanticError (enumerator_7561.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 157)), GALGAS_string ("interrupt routine is not allowed for a bootloader user program")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 157)) ;
    }
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_7561.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 159)).objectCompare (GALGAS_string ("high"))).boolEnum () ;
    if (kBoolTrue == test_10) {
      var_highInterruptIsFast_7449 = enumerator_7561.current_mFastReturn (HERE) ;
      const enumGalgasBool test_11 = var_hasHighInterrupt_7413.boolEnum () ;
      if (kBoolTrue == test_11) {
        inCompiler->emitSemanticError (enumerator_7561.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 162)), GALGAS_string ("Only one 'high' interrupt routine is allowed")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 162)) ;
      }
      var_hasHighInterrupt_7413 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_10) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_7561.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 165)).objectCompare (GALGAS_string ("low"))).boolEnum () ;
      if (kBoolTrue == test_12) {
        var_lowInterruptIsFast_7516 = enumerator_7561.current_mFastReturn (HERE) ;
        const enumGalgasBool test_13 = var_hasLowInterrupt_7481.boolEnum () ;
        if (kBoolTrue == test_13) {
          inCompiler->emitSemanticError (enumerator_7561.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 168)), GALGAS_string ("Only one 'low' interrupt routine is allowed")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 168)) ;
        }
        var_hasLowInterrupt_7481 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_12) {
        inCompiler->emitSemanticError (enumerator_7561.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 172)), GALGAS_string ("An interrupt routine should be named 'low' or 'high'")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 172)) ;
      }
    }
    const enumGalgasBool test_14 = var_highInterruptIsFast_7449.operator_and (var_lowInterruptIsFast_7516 COMMA_SOURCE_FILE ("pic18_semantics.galgas", 174)).boolEnum () ;
    if (kBoolTrue == test_14) {
      inCompiler->emitSemanticError (enumerator_7561.current_mInterruptName (HERE).getter_location (SOURCE_FILE ("pic18_semantics.galgas", 175)), GALGAS_string ("either low interrupt or high interrupt can be \"fast\", not both")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 175)) ;
    }
    enumerator_7561.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_8564 ;
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.getter_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 180)).objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 180)))).boolEnum () ;
  if (kBoolTrue == test_15) {
    cEnumerator_configDefinitionList enumerator_8687 (constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 181)), kEnumeration_up) ;
    while (enumerator_8687.hasCurrentObject ()) {
      inCompiler->emitSemanticError (enumerator_8687.current_mDefinitionLocation (HERE), GALGAS_string ("configuration is not allowed for a bootloader user program")  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 182)) ;
      enumerator_8687.gotoNextObject () ;
    }
    var_actualConfigurationMap_8564 = GALGAS_actualConfigurationMap::constructor_emptyMap (SOURCE_FILE ("pic18_semantics.galgas", 184)) ;
  }else if (kBoolFalse == test_15) {
    {
    routine_buildConfig (var_piccoloDeviceModel_1014.getter_mConfigRegisterMap (SOURCE_FILE ("pic18_semantics.galgas", 187)), constinArgument_inPiccoloModel.getter_mConfigDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 188)), var_listFileContents_919, var_actualConfigurationMap_8564, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 186)) ;
    }
  }
  GALGAS_declaredByteMap var_declaredByteMap_9321 ;
  {
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.getter_mRamDefinitionList (SOURCE_FILE ("pic18_semantics.galgas", 196)), var_ramBank_1068, var_piccoloDeviceModel_1014.getter_mRegisterTable (SOURCE_FILE ("pic18_semantics.galgas", 198)), var_listFileContents_919, var_registerTable_1662, var_declaredByteMap_9321, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 194)) ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, constinArgument_inPiccoloModel.getter_mProgramKind (SOURCE_FILE ("pic18_semantics.galgas", 204)).objectCompare (GALGAS_programKind::constructor_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas", 204)))).boolEnum () ;
  if (kBoolTrue == test_16) {
    cEnumerator_ramBankTable enumerator_9542 (var_ramBank_1068, kEnumeration_up) ;
    while (enumerator_9542.hasCurrentObject ()) {
      const enumGalgasBool test_17 = var_bootloaderReservedRAMmap_1121.getter_hasKey (enumerator_9542.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 206)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_luint var_bootloaderReservedSize_9646 ;
        var_bootloaderReservedRAMmap_1121.method_searchKey (enumerator_9542.current_lkey (HERE), var_bootloaderReservedSize_9646, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 208)) ;
        const enumGalgasBool test_18 = GALGAS_bool (kIsStrictSup, enumerator_9542.current_mFirstFreeAddress (HERE).substract_operation (enumerator_9542.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 209)).objectCompare (var_bootloaderReservedSize_9646.getter_uint (SOURCE_FILE ("pic18_semantics.galgas", 209)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)), GALGAS_string ("for '").add_operation (enumerator_9542.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)).add_operation (enumerator_9542.current_mFirstFreeAddress (HERE).substract_operation (enumerator_9542.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 211)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 211)).add_operation (var_bootloaderReservedSize_9646.getter_uint (SOURCE_FILE ("pic18_semantics.galgas", 213)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 212)).add_operation (GALGAS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 213))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)) ;
        }
      }else if (kBoolFalse == test_17) {
        const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, enumerator_9542.current_mFirstFreeAddress (HERE).objectCompare (enumerator_9542.current_mFirstAddress (HERE))).boolEnum () ;
        if (kBoolTrue == test_19) {
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)), GALGAS_string ("for '").add_operation (enumerator_9542.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (enumerator_9542.current_mFirstFreeAddress (HERE).substract_operation (enumerator_9542.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 218)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 218))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)) ;
        }
      }
      enumerator_9542.gotoNextObject () ;
    }
  }
  GALGAS_uint var_RAMsize_10497 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ramBankTable enumerator_10522 (var_ramBank_1068, kEnumeration_up) ;
  while (enumerator_10522.hasCurrentObject ()) {
    const enumGalgasBool test_20 = GALGAS_bool (kIsStrictSup, enumerator_10522.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize_10497)).boolEnum () ;
    if (kBoolTrue == test_20) {
      var_RAMsize_10497 = enumerator_10522.current_mLastAddressPlusOne (HERE) ;
    }
    enumerator_10522.gotoNextObject () ;
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (constinArgument_inSourceFileName, var_piccoloDeviceModel_1014.mAttribute_mRomSize.mAttribute_uint.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 233)), var_RAMsize_10497.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 234)), var_macroMap_4537, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1249, var_userRoutineDeclarationListForBootloaderImplementation_1329, var_bootloaderReservedROMsize_1532, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1416, var_userRoutineDeclarationListForUserProgramImplementation_1497, var_accessBankSplitOffset_1044, var_registerTable_1662, var_declaredByteMap_9321, var_routineDefinitionList_6802, constinArgument_inPiccoloModel.mAttribute_mProgramKind, constinArgument_inPiccoloModel.mAttribute_mConstantDefinitionList, constinArgument_inPiccoloModel.mAttribute_mDataList, var_interruptDefinitionList_6708, constinArgument_inPiccoloModel.mAttribute_mUnusedRegisterList, var_ramBank_1068, var_hasHighInterrupt_7413, var_hasLowInterrupt_7481, var_piccoloDeviceModel_1014.mAttribute_mDeviceName.mAttribute_string, var_piccoloDeviceModel_1014.mAttribute_mRegisterTable, var_actualConfigurationMap_8564, constinArgument_inPiccoloModel.mAttribute_mEndOfProgram, var_listFileContents_919, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 231)) ;
  }
  const enumGalgasBool test_21 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_21) {
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
    inCompiler->emitSemanticError (constinArgument_inBootloaderName.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)), GALGAS_string ("the bootloader name ('").add_operation (constinArgument_inBootloaderName.getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (var_sourceFileBaseName_747, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)) ;
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
      inCompiler->emitSemanticError (constinArgument_inDeviceName.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)), GALGAS_string ("a midrange device is not accepted here")  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      inCompiler->emitSemanticError (constinArgument_inDeviceName.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)), GALGAS_string ("a baseline device is not accepted here")  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER FOOTPRINT").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, constinArgument_inReservedRomSize.getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)).objectCompare (outArgument_outPiccoloDeviceModel.getter_mRomSize (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)).getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 38)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (constinArgument_inReservedRomSize.getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)), GALGAS_string ("reserved size for bootloader (").add_operation (constinArgument_inReservedRomSize.getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)).add_operation (GALGAS_string (" bytes) is greater than ROM size ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (outArgument_outPiccoloDeviceModel.getter_mRomSize (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).getter_uint (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (GALGAS_string (" bytes) of "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (constinArgument_inDeviceName.getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (GALGAS_string (" micro controller"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 42))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)) ;
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
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_firstFreeAddress_2568.objectCompare (var_lastAddressPlusOne_2607)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (enumerator_2515.current_mReservedSize (HERE).getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), GALGAS_string ("reserved size is greater than size of '").add_operation (enumerator_2515.current_lkey (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (var_lastAddressPlusOne_2607.substract_operation (var_firstAddress_2541, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)) ;
    }else if (kBoolFalse == test_2) {
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
    const enumGalgasBool test_3 = var_routineNameSet_3735.getter_hasKey (enumerator_3838.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (enumerator_3838.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)), GALGAS_string ("This routine is already declared")  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)) ;
    }
    var_routineNameSet_3735.addAssign_operation (enumerator_3838.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 74))  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 74)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_3838.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (var_entryPointAddress_3784.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 75)) ;
    var_entryPointAddress_3784 = var_entryPointAddress_3784.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 76)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_entryPointAddress_3784.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_entryPointAddress_3784 = GALGAS_uint ((uint32_t) 12U) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_entryPointAddress_3784.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
      if (kBoolTrue == test_5) {
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
    const enumGalgasBool test_6 = var_routineNameSet_3735.getter_hasKey (enumerator_4868.current_mRoutineName (HERE).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (enumerator_4868.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)), GALGAS_string ("This routine is already declared")  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)) ;
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
  GALGAS_uint var_targetAddress_15360 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_15360, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 476)) ;
  GALGAS_sint var_displacement_15386 = var_targetAddress_15360.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 477)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_15386.objectCompare (GALGAS_sint ((int32_t) 127L))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_15386.objectCompare (GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)) ;
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
  GALGAS_uint var_targetAddress_15883 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_15883, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 489)) ;
  GALGAS_sint var_displacement_15909 = var_targetAddress_15883.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_15909.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_15909.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)) ;
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
  GALGAS_uint var_targetAddress_16373 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_16373, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 501)) ;
  result_outDisplacement = var_targetAddress_16373.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)) ;
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
  GALGAS_sint var_displacement_16916 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 518)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 518)).substract_operation (constinArgument_inConditionalBranchInstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 518)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 518)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_displacement_16916.objectCompare (GALGAS_sint ((int32_t) 127L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_16916.objectCompare (GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inTargetLabel.getter_location (SOURCE_FILE ("ipic18_block_representation.galgas", 520)), GALGAS_string ("** INTERNAL ERROR ** displacement too large for conditional branch instruction")  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 520)) ;
  }
  GALGAS_conditional_5F_branch var_conditionalBranch_17211 ;
  const enumGalgasBool test_1 = constinArgument_inComplemented.boolEnum () ;
  if (kBoolTrue == test_1) {
    switch (constinArgument_inConditionalBranch.enumValue ()) {
    case GALGAS_conditional_5F_branch::kNotBuilt:
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bz:
      {
        var_conditionalBranch_17211 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("ipic18_block_representation.galgas", 526)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnz:
      {
        var_conditionalBranch_17211 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_block_representation.galgas", 527)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bn:
      {
        var_conditionalBranch_17211 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("ipic18_block_representation.galgas", 528)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnn:
      {
        var_conditionalBranch_17211 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("ipic18_block_representation.galgas", 529)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bc:
      {
        var_conditionalBranch_17211 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18_block_representation.galgas", 530)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnc:
      {
        var_conditionalBranch_17211 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_block_representation.galgas", 531)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bov:
      {
        var_conditionalBranch_17211 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("ipic18_block_representation.galgas", 532)) ;
      }
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bnov:
      {
        var_conditionalBranch_17211 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("ipic18_block_representation.galgas", 533)) ;
      }
      break ;
    }
  }else if (kBoolFalse == test_1) {
    var_conditionalBranch_17211 = constinArgument_inConditionalBranch ;
  }
  GALGAS_uint var_baseCode_17836 ;
  GALGAS_string var_mnemonic_17855 ;
  switch (var_conditionalBranch_17211.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      var_baseCode_17836 = GALGAS_uint ((uint32_t) 57344U) ;
      var_mnemonic_17855 = GALGAS_string ("BZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      var_baseCode_17836 = GALGAS_uint ((uint32_t) 57600U) ;
      var_mnemonic_17855 = GALGAS_string ("BNZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      var_baseCode_17836 = GALGAS_uint ((uint32_t) 58880U) ;
      var_mnemonic_17855 = GALGAS_string ("BN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      var_baseCode_17836 = GALGAS_uint ((uint32_t) 59136U) ;
      var_mnemonic_17855 = GALGAS_string ("BNN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      var_baseCode_17836 = GALGAS_uint ((uint32_t) 57856U) ;
      var_mnemonic_17855 = GALGAS_string ("BC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      var_baseCode_17836 = GALGAS_uint ((uint32_t) 58112U) ;
      var_mnemonic_17855 = GALGAS_string ("BNC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      var_baseCode_17836 = GALGAS_uint ((uint32_t) 58368U) ;
      var_mnemonic_17855 = GALGAS_string ("BOV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      var_baseCode_17836 = GALGAS_uint ((uint32_t) 58624U) ;
      var_mnemonic_17855 = GALGAS_string ("BNOV") ;
    }
    break ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (var_mnemonic_17855, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)).add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)), GALGAS_uintlist::constructor_listWithValue (var_baseCode_17836.operator_or (var_displacement_16916.operator_and (GALGAS_sint ((int32_t) 255L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 551)) ;
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
  GALGAS_sint var_displacement_18701 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 563)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 563)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 563)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 563)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_displacement_18701.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_18701.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inTargetLabel.getter_location (SOURCE_FILE ("ipic18_block_representation.galgas", 565)), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_18701.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)).add_operation (GALGAS_string (") for RCALL instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)).add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)) ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RCALL ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 569)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 55296U).operator_or (var_displacement_18701.operator_and (GALGAS_sint ((int32_t) 2047L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 568)) ;
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
  GALGAS_sint var_displacement_19439 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 580)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 580)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 580)).right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 580)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_displacement_19439.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_19439.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inTargetLabel.getter_location (SOURCE_FILE ("ipic18_block_representation.galgas", 582)), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_19439.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)).add_operation (GALGAS_string (") for BRA instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)).add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)) ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    BRA ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 586)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 53248U).operator_or (var_displacement_19439.operator_and (GALGAS_sint ((int32_t) 2047L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 585)) ;
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
  GALGAS_uintlist var_binaryCode_20127 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 596)) ;
  var_binaryCode_20127.addAssign_operation (GALGAS_uint ((uint32_t) 60416U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 597)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 597)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 597))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 597)) ;
  var_binaryCode_20127.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 600)), var_binaryCode_20127  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) ;
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
  GALGAS_uintlist var_binaryCode_20561 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 610)) ;
  var_binaryCode_20561.addAssign_operation (GALGAS_uint ((uint32_t) 61184U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 611)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 611)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 611))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 611)) ;
  var_binaryCode_20561.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 614)), var_binaryCode_20561  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) ;
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
  cEnumerator_pic_31__38_InstructionList enumerator_10175 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_10175.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_10175.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 346)) ;
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
  GALGAS_stringset var_s_11406 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_used_routines.galgas", 378)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 379)).isValid ()) {
    uint32_t variant_11436 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 379)).uintValue () ;
    bool loop_11436 = true ;
    while (loop_11436) {
      loop_11436 = GALGAS_bool (kIsNotEqual, var_s_11406.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11436) {
        loop_11436 = GALGAS_bool (kIsNotEqual, var_s_11406.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11436 && (0 == variant_11436)) {
        loop_11436 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 379)) ;
      }
      if (loop_11436) {
        variant_11436 -- ;
        var_s_11406 = result_outUsedRoutineSet ;
        cEnumerator_pic_31__38_RoutineDefinitionList enumerator_11570 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
        while (enumerator_11570.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11570.current_mRoutineName (HERE).mAttribute_string COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 383)).boolEnum () ;
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
  cEnumerator_pic_31__38_InstructionList enumerator_110109 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_110109.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_110109.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)), GALGAS_string ("Unreachable code")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)) ;
      ioArgument_ioBlockLabel = GALGAS_string ("\?").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3170)) ;
    }
    callExtensionMethod_analyze ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_110109.current_mInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioGeneratedBlockList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3172)) ;
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
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3209)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3209)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("DATA DECLARATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3210)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3210)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3210)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3210)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3211)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3211)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3211)) ;
    while (enumerator_111402.hasCurrentObject () && bool_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data '").add_operation (enumerator_111402.current_mDataName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).add_operation (enumerator_111402.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).add_operation (enumerator_111402.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)) ;
      {
      ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_111402.current_mDataName (HERE).mAttribute_string.add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)), enumerator_111402.current_mDataName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)), enumerator_111402.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)) ;
      }
      GALGAS_uintlist var_data_111952 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3215)) ;
      cEnumerator_immediatExpressionList enumerator_112001 (enumerator_111402.current_mValueList (HERE), kEnumeration_up) ;
      while (enumerator_112001.hasCurrentObject ()) {
        GALGAS_sint_36__34_ var_value_112079 ;
        callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_112001.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_112079, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3217)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_value_112079.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->emitSemanticError (enumerator_112001.current_mErrorLocation (HERE), GALGAS_string ("data value is ").add_operation (var_value_112079.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3219)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3219)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3219))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3219)) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_value_112079.objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
          if (kBoolTrue == test_2) {
            inCompiler->emitSemanticError (enumerator_112001.current_mErrorLocation (HERE), GALGAS_string ("data value is ").add_operation (var_value_112079.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3221)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3221)).add_operation (GALGAS_string (" (greater than 2**16-1)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3221))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3221)) ;
          }else if (kBoolFalse == test_2) {
            var_data_111952.addAssign_operation (var_value_112079.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3223))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3223)) ;
          }
        }
        enumerator_112001.gotoNextObject () ;
      }
      {
      outArgument_outDataMap.setter_insertKey (enumerator_111402.current_mDataName (HERE), var_data_111952, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3226)) ;
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
  GALGAS_routineMap var_routineMap_113825 = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3261)) ;
  cEnumerator_routineDeclarationList enumerator_113918 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kEnumeration_up) ;
  while (enumerator_113918.hasCurrentObject ()) {
    {
    var_routineMap_113825.setter_insertKey (enumerator_113918.current_mRoutineName (HERE), enumerator_113918.current_mIsNoReturn (HERE), enumerator_113918.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3263)), enumerator_113918.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3263)), enumerator_113918.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3263)) ;
    }
    enumerator_113918.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_114119 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_114119.hasCurrentObject ()) {
    {
    var_routineMap_113825.setter_insertKey (enumerator_114119.current_mRoutineName (HERE), enumerator_114119.current_mIsNoReturn (HERE), enumerator_114119.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3266)), enumerator_114119.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3266)), enumerator_114119.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3266)) ;
    }
    enumerator_114119.gotoNextObject () ;
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_114281 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_114281.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_114281.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3269)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3269)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_114281.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3269)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3269)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_114281.current_mRequiredBank (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3270)), GALGAS_string ("the required bank value should be lower or equal to 15")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3270)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_114281.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3272)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3272)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_114281.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3272)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3272)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (enumerator_114281.current_mReturnedBank (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3273)), GALGAS_string ("the returned bank value should be lower or equal to 15")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3273)) ;
    }
    {
    var_routineMap_113825.setter_insertKey (enumerator_114281.current_mRoutineName (HERE), enumerator_114281.current_mIsNoReturn (HERE), enumerator_114281.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3275)), enumerator_114281.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3275)), enumerator_114281.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3275)) ;
    }
    enumerator_114281.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_114817 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3278)) ;
  {
  var_constantMap_114817.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3280))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3280)), constinArgument_inROMSize, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3280)) ;
  }
  {
  var_constantMap_114817.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("RAM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3281))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3281)), constinArgument_inRAMSize, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3281)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_regularProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3283)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_lstring var_bootloaderSizeString_115188 = GALGAS_lstring::constructor_new (GALGAS_string ("BOOTLOADER_RESERVED_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3284))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3284)) ;
    {
    var_constantMap_114817.setter_insertKey (var_bootloaderSizeString_115188, constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3285)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3285)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3285)) ;
    }
  }
  GALGAS_stringset var_usedRegisters_115399 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3288)) ;
  cEnumerator_constantDefinitionList enumerator_115461 (constinArgument_inConstantDefinitionList, kEnumeration_up) ;
  while (enumerator_115461.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_115536 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_115461.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_114817, var_result_115536, var_usedRegisters_115399, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3290)) ;
    const enumGalgasBool test_3 = constinArgument_inRegisterTable.getter_hasKey (enumerator_115461.current_mConstantName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3291)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3291)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (enumerator_115461.current_mConstantName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)), GALGAS_string ("'").add_operation (enumerator_115461.current_mConstantName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)) ;
    }else if (kBoolFalse == test_3) {
      {
      var_constantMap_114817.setter_insertKey (enumerator_115461.current_mConstantName (HERE), var_result_115536, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3294)) ;
      }
    }
    enumerator_115461.gotoNextObject () ;
  }
  GALGAS_pic_31__38__5F_dataMap var_dataMap_115991 ;
  {
  routine_pic_31__38__5F_analyze_5F_data_5F_sections (constinArgument_inDataList, constinArgument_inRegisterTable, var_constantMap_114817, ioArgument_ioListFileContents, var_dataMap_115991, var_constantMap_114817, var_usedRegisters_115399, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3298)) ;
  }
  {
  routine_print_5F_constant_5F_definition (var_constantMap_114817, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3308)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3313)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    const enumGalgasBool test_5 = var_routineMap_113825.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3314)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_bool var_isNoReturn_116349 ;
      GALGAS_uint var_requiredBank_116374 ;
      GALGAS_uint joker_116472 ; // Joker input parameter
      GALGAS_bool joker_116475 ; // Joker input parameter
      var_routineMap_113825.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3317))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3317)), var_isNoReturn_116349, var_requiredBank_116374, joker_116472, joker_116475, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3317)) ;
      const enumGalgasBool test_6 = var_isNoReturn_116349.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3318)).boolEnum () ;
      if (kBoolTrue == test_6) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3319)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main requiresbank 0\"")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3319)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_requiredBank_116374.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3322)), GALGAS_string ("the \"main\" should be declared with \"requiresbank 0\" qualifier: \"noreturn main requiresbank 0\"")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3322)) ;
      }
    }else if (kBoolFalse == test_5) {
      inCompiler->emitSemanticError (constinArgument_inEndOfProgram, GALGAS_string ("the program should declare the \"main\" routine")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3325)) ;
    }
  }
  GALGAS_ipic_31__38_BlockList var_generatedBlockList_117027 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3329)) ;
  GALGAS_uint var_entryPoint_117076 = GALGAS_uint ((uint32_t) 4U) ;
  cEnumerator_routineDeclarationList enumerator_117159 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_117159.hasCurrentObject ()) {
    var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_117076, enumerator_117159.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3335)), GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3336))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3336)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3337)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3332))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3332)) ;
    var_entryPoint_117076 = var_entryPoint_117076.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3340)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_entryPoint_117076.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_entryPoint_117076 = GALGAS_uint ((uint32_t) 12U) ;
    }else if (kBoolFalse == test_8) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_entryPoint_117076.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
      if (kBoolTrue == test_9) {
        var_entryPoint_117076 = GALGAS_uint ((uint32_t) 28U) ;
      }
    }
    enumerator_117159.gotoNextObject () ;
  }
  var_entryPoint_117076 = constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3348)) ;
  cEnumerator_routineDeclarationList enumerator_117754 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kEnumeration_up) ;
  while (enumerator_117754.hasCurrentObject ()) {
    var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_117076, GALGAS_string ("_entry_user_").add_operation (var_entryPoint_117076.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3352)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3352)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3352)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3353)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_117754.current_mRoutineName (HERE).mAttribute_location, enumerator_117754.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3354))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3354)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3355)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3350))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3350)) ;
    var_entryPoint_117076 = var_entryPoint_117076.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3358)) ;
    enumerator_117754.gotoNextObject () ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3364)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3365)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3366)), GALGAS_string ("main").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3366)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3366))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3366)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3367)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3362))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3362)) ;
  }
  GALGAS_routineDeclarationList var_tempBootloaderRoutineDeclarationList_118670 = constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_118670.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3373)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_11) {
    GALGAS_lstring var_routineName_118873 ;
    {
    GALGAS_luint joker_118875 ; // Joker input parameter
    GALGAS_luint joker_118878 ; // Joker input parameter
    GALGAS_bool joker_118881 ; // Joker input parameter
    GALGAS_bool joker_118884 ; // Joker input parameter
    var_tempBootloaderRoutineDeclarationList_118670.setter_popFirst (var_routineName_118873, joker_118875, joker_118878, joker_118881, joker_118884, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3374)) ;
    }
    var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 4U), GALGAS_string ("_entry_bootloader_04").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3377)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName_118873.mAttribute_location, var_routineName_118873, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3379))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3379)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3380)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3375))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3375)) ;
  }
  const enumGalgasBool test_12 = constinArgument_inHasHighInterrupt.boolEnum () ;
  if (kBoolTrue == test_12) {
    var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 8U), GALGAS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3388)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3389)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390)), GALGAS_string ("_high_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3391)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3386))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3386)) ;
  }
  var_entryPoint_117076 = GALGAS_uint ((uint32_t) 12U) ;
  if (var_tempBootloaderRoutineDeclarationList_118670.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)).isValid ()) {
    uint32_t variant_119768 = var_tempBootloaderRoutineDeclarationList_118670.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)).uintValue () ;
    bool loop_119768 = true ;
    while (loop_119768) {
      loop_119768 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_118670.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3398)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint_117076.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3398)).isValid () ;
      if (loop_119768) {
        loop_119768 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_118670.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3398)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint_117076.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3398)).boolValue () ;
      }
      if (loop_119768 && (0 == variant_119768)) {
        loop_119768 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)) ;
      }
      if (loop_119768) {
        variant_119768 -- ;
        GALGAS_lstring var_routineName_119983 ;
        {
        GALGAS_luint joker_119985 ; // Joker input parameter
        GALGAS_luint joker_119988 ; // Joker input parameter
        GALGAS_bool joker_119991 ; // Joker input parameter
        GALGAS_bool joker_119994 ; // Joker input parameter
        var_tempBootloaderRoutineDeclarationList_118670.setter_popFirst (var_routineName_119983, joker_119985, joker_119988, joker_119991, joker_119994, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3400)) ;
        }
        var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_117076, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_117076.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3404)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName_119983.mAttribute_location, var_routineName_119983, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3406)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401)) ;
        var_entryPoint_117076 = var_entryPoint_117076.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)) ;
      }
    }
  }
  const enumGalgasBool test_13 = constinArgument_inHasLowInterrupt.boolEnum () ;
  if (kBoolTrue == test_13) {
    var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 24U), GALGAS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3415)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3416)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)), GALGAS_string ("_low_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3417)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3418)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413)) ;
  }
  var_entryPoint_117076 = GALGAS_uint ((uint32_t) 28U) ;
  cEnumerator_routineDeclarationList enumerator_120918 (var_tempBootloaderRoutineDeclarationList_118670, kEnumeration_up) ;
  while (enumerator_120918.hasCurrentObject ()) {
    var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_117076, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_117076.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3427)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3427)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3427)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3428)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_120918.current_mRoutineName (HERE).mAttribute_location, enumerator_120918.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3429))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3429)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3430)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3425))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3425)) ;
    var_entryPoint_117076 = var_entryPoint_117076.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3433)) ;
    enumerator_120918.gotoNextObject () ;
  }
  GALGAS_uint var_localLabelIndex_121422 = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_14 = constinArgument_inHasLowInterrupt.boolEnum () ;
  if (kBoolTrue == test_14) {
    cEnumerator_pic_31__38_InterruptDefinitionList enumerator_121495 (constinArgument_inInterruptDefinitionList, kEnumeration_up) ;
    while (enumerator_121495.hasCurrentObject ()) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, enumerator_121495.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3440)).objectCompare (GALGAS_string ("low"))).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_uint var_currentBank_121569 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3441)) ;
        GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_121629 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3442)) ;
        GALGAS_lstring var_currentBlockLabel_121706 = GALGAS_lstring::constructor_new (GALGAS_string ("_low_interrupt"), enumerator_121495.current_mInterruptName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3443)) ;
        {
        routine_analyzeInstructionList (enumerator_121495.current_mInstructionList (HERE), var_generatedBlockList_117027, constinArgument_inAccessBankSplitOffset, var_routineMap_113825, constinArgument_inRegisterTable, var_dataMap_115991, var_constantMap_114817, constinArgument_inMacroMap, var_localLabelIndex_121422, var_generatedInstructionList_121629, var_currentBlockLabel_121706, ioArgument_ioListFileContents, var_currentBank_121569, enumerator_121495.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3458)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3459)), var_usedRegisters_115399, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3444)) ;
        }
        const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, var_currentBlockLabel_121706.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          inCompiler->emitSemanticError (enumerator_121495.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3463)) ;
        }
        var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3467)), var_currentBlockLabel_121706, var_generatedInstructionList_121629, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_121495.current_mInterruptName (HERE).mAttribute_location, enumerator_121495.current_mFastReturn (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3470)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3471)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3466))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3466)) ;
      }
      enumerator_121495.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_17 = constinArgument_inHasHighInterrupt.boolEnum () ;
  if (kBoolTrue == test_17) {
    cEnumerator_pic_31__38_InterruptDefinitionList enumerator_122920 (constinArgument_inInterruptDefinitionList, kEnumeration_up) ;
    while (enumerator_122920.hasCurrentObject ()) {
      const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, enumerator_122920.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3480)).objectCompare (GALGAS_string ("high"))).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_uint var_currentBank_122995 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3481)) ;
        GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_123055 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3482)) ;
        GALGAS_lstring var_currentBlockLabel_123132 = GALGAS_lstring::constructor_new (GALGAS_string ("_high_interrupt"), enumerator_122920.current_mInterruptName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3483)) ;
        {
        routine_analyzeInstructionList (enumerator_122920.current_mInstructionList (HERE), var_generatedBlockList_117027, constinArgument_inAccessBankSplitOffset, var_routineMap_113825, constinArgument_inRegisterTable, var_dataMap_115991, var_constantMap_114817, constinArgument_inMacroMap, var_localLabelIndex_121422, var_generatedInstructionList_123055, var_currentBlockLabel_123132, ioArgument_ioListFileContents, var_currentBank_122995, enumerator_122920.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3498)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3499)), var_usedRegisters_115399, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3484)) ;
        }
        const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_currentBlockLabel_123132.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_19) {
          inCompiler->emitSemanticError (enumerator_122920.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3503)) ;
        }
        var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3507)), var_currentBlockLabel_123132, var_generatedInstructionList_123055, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_122920.current_mInterruptName (HERE).mAttribute_location, GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3510)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3511)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3506))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3506)) ;
      }
      enumerator_122920.gotoNextObject () ;
    }
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_124284 (constinArgument_inRoutineDefinitionList, kEnumeration_up) ;
  while (enumerator_124284.hasCurrentObject ()) {
    GALGAS_uint var_currentBank_124309 = enumerator_124284.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3519)) ;
    GALGAS_routineKind var_routineKind_124361 ;
    const enumGalgasBool test_20 = enumerator_124284.current_mIsNoReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_20) {
      var_routineKind_124361 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3522)) ;
    }else if (kBoolFalse == test_20) {
      var_routineKind_124361 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3524)) ;
    }
    GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_124534 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3526)) ;
    GALGAS_lstring var_currentBlockLabel_124612 = enumerator_124284.current_mRoutineName (HERE) ;
    {
    routine_analyzeInstructionList (enumerator_124284.current_mInstructionList (HERE), var_generatedBlockList_117027, constinArgument_inAccessBankSplitOffset, var_routineMap_113825, constinArgument_inRegisterTable, var_dataMap_115991, var_constantMap_114817, constinArgument_inMacroMap, var_localLabelIndex_121422, var_generatedInstructionList_124534, var_currentBlockLabel_124612, ioArgument_ioListFileContents, var_currentBank_124309, enumerator_124284.current_mPreservesBank (HERE), var_routineKind_124361, var_usedRegisters_115399, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3528)) ;
    }
    GALGAS_bool var_continuesInSequence_125064 = GALGAS_bool (kIsNotEqual, var_currentBlockLabel_124612.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
    const enumGalgasBool test_21 = var_continuesInSequence_125064.boolEnum () ;
    if (kBoolTrue == test_21) {
      var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3550)), var_currentBlockLabel_124612, var_generatedInstructionList_124534, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (enumerator_124284.current_mRoutineName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3553)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3554)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)) ;
    }
    const enumGalgasBool test_22 = enumerator_124284.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_124284.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_124309.objectCompare (enumerator_124284.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3559)).boolEnum () ;
    if (kBoolTrue == test_22) {
      inCompiler->emitSemanticError (enumerator_124284.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_124284.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)) ;
    }
    const enumGalgasBool test_23 = enumerator_124284.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_125064 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3562)).boolEnum () ;
    if (kBoolTrue == test_23) {
      inCompiler->emitSemanticError (enumerator_124284.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3563)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3563)) ;
    }
    enumerator_124284.gotoNextObject () ;
  }
  GALGAS_registerExpression var_WREGregister_125964 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("WREG"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3571))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3571))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3571)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3572))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3569)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_WREG_5F_IPICregisterDescription_126298 ;
  GALGAS_bitSliceTable joker_126304 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_WREGregister_125964.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_114817, var_WREG_5F_IPICregisterDescription_126298, joker_126304, var_usedRegisters_115399, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3574)) ;
  GALGAS_registerExpression var_TOSLregister_126382 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSL"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3585))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3585)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3586))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3586))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3586)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3587))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3584)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSL_5F_IPICregisterDescription_126717 ;
  GALGAS_bitSliceTable joker_126723 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSLregister_126382.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_114817, var_TOSL_5F_IPICregisterDescription_126717, joker_126723, var_usedRegisters_115399, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3589)) ;
  GALGAS_registerExpression var_TOSHregister_126801 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3600))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3600)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3601))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3601))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3601)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3599)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSH_5F_IPICregisterDescription_127135 ;
  GALGAS_bitSliceTable joker_127141 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSHregister_126801.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_114817, var_TOSH_5F_IPICregisterDescription_127135, joker_127141, var_usedRegisters_115399, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3604)) ;
  GALGAS_registerExpression var_TOSUregister_127219 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSU"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3615))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3615)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3617))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3614)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSU_5F_IPICregisterDescription_127552 ;
  GALGAS_bitSliceTable joker_127558 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSUregister_127219.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_114817, var_TOSU_5F_IPICregisterDescription_127552, joker_127558, var_usedRegisters_115399, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3619)) ;
  GALGAS_ipic_31__38_SequentialInstruction var_ADDWF_5F_WREG_127634 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3630)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3631)), var_WREG_5F_IPICregisterDescription_126298, GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3629)) ;
  GALGAS_ipic_31__38_Block var_goto_34_Block_127847 = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3637)), GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3638)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_listWithValue (var_ADDWF_5F_WREG_127634, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3636)) ;
  var_generatedBlockList_117027.addAssign_operation (var_goto_34_Block_127847  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3644)) ;
  GALGAS_ipic_31__38_SequentialInstructionList var_goto_32_InstructionList_128244 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3646)) ;
  var_goto_32_InstructionList_128244.addAssign_operation (var_ADDWF_5F_WREG_127634, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3647)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3647)) ;
  var_goto_32_InstructionList_128244.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3649)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3650)), var_TOSL_5F_IPICregisterDescription_126717, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3648)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3652)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3648)) ;
  var_goto_32_InstructionList_128244.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3654)), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3655)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3653)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3656)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3653)) ;
  var_goto_32_InstructionList_128244.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3658)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3659)), var_TOSH_5F_IPICregisterDescription_127135, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3657)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3661)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3657)) ;
  var_goto_32_InstructionList_128244.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3663)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3664)), var_TOSU_5F_IPICregisterDescription_127552, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3662)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3666)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3662)) ;
  GALGAS_ipic_31__38_Block var_goto_32_Block_129200 = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3669)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3670)), var_goto_32_InstructionList_128244, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3672))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3672)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3673)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3668)) ;
  var_generatedBlockList_117027.addAssign_operation (var_goto_32_Block_129200  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3676)) ;
  var_entryPoint_117076 = constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3678)) ;
  cEnumerator_routineDeclarationList enumerator_129614 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kEnumeration_up) ;
  while (enumerator_129614.hasCurrentObject ()) {
    const enumGalgasBool test_24 = enumerator_129614.current_mIsNoReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_24) {
      var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_117076, enumerator_129614.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3684)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_129614.current_mRoutineName (HERE).mAttribute_location, enumerator_129614.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3685))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3685)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3686)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3681))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3681)) ;
    }else if (kBoolFalse == test_24) {
      GALGAS_ipic_31__38_SequentialInstructionList var_instructionList_129970 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3690)) ;
      const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_129614.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3691)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3691)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        var_instructionList_129970.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3692)), enumerator_129614.current_mReturnedBank (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3692)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3692)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3692)) ;
      }
      var_generatedBlockList_117027.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_117076, enumerator_129614.current_mRoutineName (HERE), var_instructionList_129970, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3698))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3698)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3699)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3694))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3694)) ;
    }
    var_entryPoint_117076 = var_entryPoint_117076.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3703)) ;
    enumerator_129614.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_130580 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3706)) ;
  cEnumerator_lstringlist enumerator_130637 (constinArgument_inUnusedRegisterList, kEnumeration_up) ;
  while (enumerator_130637.hasCurrentObject ()) {
    const enumGalgasBool test_26 = constinArgument_inRegisterTable.getter_hasKey (enumerator_130637.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3708)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3708)).boolEnum () ;
    if (kBoolTrue == test_26) {
      inCompiler->emitSemanticError (enumerator_130637.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709)), GALGAS_string ("the '").add_operation (enumerator_130637.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709)) ;
    }else if (kBoolFalse == test_26) {
      const enumGalgasBool test_27 = var_unusedDeclarationUnicity_130580.getter_hasKey (enumerator_130637.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3710)).boolEnum () ;
      if (kBoolTrue == test_27) {
        inCompiler->emitSemanticWarning (enumerator_130637.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3711)), GALGAS_string ("the '").add_operation (enumerator_130637.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3711)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3711)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3711))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3711)) ;
      }else if (kBoolFalse == test_27) {
        const enumGalgasBool test_28 = var_usedRegisters_115399.getter_hasKey (enumerator_130637.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3712)).boolEnum () ;
        if (kBoolTrue == test_28) {
          inCompiler->emitSemanticWarning (enumerator_130637.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3713)), GALGAS_string ("the '").add_operation (enumerator_130637.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3713)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3713)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3713))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3713)) ;
        }
      }
    }
    var_unusedDeclarationUnicity_130580.addAssign_operation (enumerator_130637.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3715)) ;
    enumerator_130637.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_131137 (constinArgument_inDeclaredByteMap, kEnumeration_up) ;
  while (enumerator_131137.hasCurrentObject ()) {
    const enumGalgasBool test_29 = var_usedRegisters_115399.getter_hasKey (enumerator_131137.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)).operator_and (var_unusedDeclarationUnicity_130580.getter_hasKey (enumerator_131137.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3718)).boolEnum () ;
    if (kBoolTrue == test_29) {
      inCompiler->emitSemanticWarning (enumerator_131137.current_lkey (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3719)), GALGAS_string ("the '").add_operation (enumerator_131137.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3719)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3719)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3719))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3719)) ;
    }
    enumerator_131137.gotoNextObject () ;
  }
  {
  routine_displayBlockList (GALGAS_string ("INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_117027, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3723)) ;
  }
  const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3725)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_30) {
    {
    routine_ipic_31__38_OptimizeBlocks (ioArgument_ioListFileContents, var_generatedBlockList_117027, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3726)) ;
    }
    {
    routine_displayBlockList (GALGAS_string ("OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_117027, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3727)) ;
    }
  }
  const enumGalgasBool test_31 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3730)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_31) {
    {
    routine_ipic_31__38_OptimizeBlockOrdering (constinArgument_inSourceFileName, ioArgument_ioListFileContents, var_generatedBlockList_117027, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3731)) ;
    }
  }
  const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3738)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_32) {
    {
    routine_ipic_31__38_RelativesResolution (ioArgument_ioListFileContents, var_generatedBlockList_117027, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3739)) ;
    }
  }
  const enumGalgasBool test_33 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3745)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3745)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3745)).boolEnum () ;
  if (kBoolTrue == test_33) {
    {
    routine_ipic_31__38_StackComputations (ioArgument_ioListFileContents, var_generatedBlockList_117027, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3746)) ;
    }
  }
  GALGAS_blockDurationMap var_blockDurationMap_132638 = GALGAS_blockDurationMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3752)) ;
  const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3753)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_34) {
    {
    routine_ipic_31__38_DurationComputations (var_generatedBlockList_117027, var_blockDurationMap_132638, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3754)) ;
    }
  }
  const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3757)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_35) {
    GALGAS_uint var_usedROMsize_133200 ;
    GALGAS_generatedCodeMap var_generatedCodeMap_133253 ;
    {
    routine_ipic_31__38_GenerateCode (constinArgument_inSourceFileName, constinArgument_inProgramKind, constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3761)), constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3762)), constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inRegisterTable, var_dataMap_115991, constinArgument_inActualConfigurationMap, ioArgument_ioListFileContents, var_generatedBlockList_117027, var_usedROMsize_133200, var_generatedCodeMap_133253, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3758)) ;
    }
    const enumGalgasBool test_36 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3774)).boolEnum () ;
    if (kBoolTrue == test_36) {
      GALGAS_string var_verboseMessage_133402 = GALGAS_string ("Resource usage:\n") ;
      var_verboseMessage_133402.plusAssign_operation(GALGAS_string ("  ROM size: ").add_operation (constinArgument_inROMSize.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3776)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3776)).add_operation (GALGAS_string (" bytes;"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3776)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3776)) ;
      var_verboseMessage_133402.plusAssign_operation(GALGAS_string (" used: ").add_operation (var_usedROMsize_133200.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3777)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3777)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3777)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3777)) ;
      var_verboseMessage_133402.plusAssign_operation(var_usedROMsize_133200.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)).divide_operation (constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3778)) ;
      cEnumerator_ramBankTable enumerator_133659 (constinArgument_inRamBank, kEnumeration_up) ;
      while (enumerator_133659.hasCurrentObject ()) {
        GALGAS_uint var_bankSize_133685 = enumerator_133659.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_133659.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3780)) ;
        GALGAS_uint var_usedSize_133746 = enumerator_133659.current_mFirstFreeAddress (HERE).substract_operation (enumerator_133659.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3781)) ;
        var_verboseMessage_133402.plusAssign_operation(GALGAS_string ("  RAM bank '").add_operation (enumerator_133659.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3782)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3782)).add_operation (GALGAS_string ("': "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3782)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3782)) ;
        var_verboseMessage_133402.plusAssign_operation(var_bankSize_133685.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3783)).add_operation (GALGAS_string (" bytes, used "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3783)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3783)) ;
        var_verboseMessage_133402.plusAssign_operation(var_usedSize_133746.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3784)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3784)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3784)) ;
        var_verboseMessage_133402.plusAssign_operation(var_usedSize_133746.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)).divide_operation (var_bankSize_133685, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)) ;
        enumerator_133659.gotoNextObject () ;
      }
      inCompiler->printMessage (var_verboseMessage_133402  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3787)) ;
    }
  }
  const enumGalgasBool test_37 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3791)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_37) {
    {
    routine_ipic_31__38_PrintDurations (ioArgument_ioListFileContents, var_blockDurationMap_132638, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3792)) ;
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
  GALGAS_uint var_n_12890 = function_blockDiscontinuityCount (ioArgument_ioBlockList, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 377)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  count before optimization: ").add_operation (var_n_12890.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)) ;
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas", 380)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Block ordering optimization... ")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 381)) ;
  }
  GALGAS_symbolTableForBlockOptimization var_symbolTable_13160 = GALGAS_symbolTableForBlockOptimization::constructor_emptyMap (SOURCE_FILE ("ipic18_block_ordering.galgas", 384)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_13230 (ioArgument_ioBlockList, kEnumeration_up) ;
  GALGAS_uint index_13211 ((uint32_t) 0) ;
  while (enumerator_13230.hasCurrentObject ()) {
    {
    var_symbolTable_13160.setter_insertKey (enumerator_13230.current_mBlock (HERE).mAttribute_mLabel, index_13211, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 386)) ;
    }
    enumerator_13230.gotoNextObject () ;
    index_13211.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 385)) ;
  }
  GALGAS_blockInvocationGraph var_g_13321 = GALGAS_blockInvocationGraph::constructor_emptyGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 389)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_13382 (ioArgument_ioBlockList, kEnumeration_up) ;
  while (enumerator_13382.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13382.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 391)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      var_g_13321.setter_addNode (enumerator_13382.current_mBlock (HERE).mAttribute_mLabel, enumerator_13382.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 392)) ;
      }
      callExtensionMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_13382.current_mBlock (HERE).mAttribute_mTerminator.ptr (), enumerator_13382.current_mBlock (HERE).mAttribute_mLabel, var_g_13321, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 393)) ;
    }
    enumerator_13382.gotoNextObject () ;
  }
  GALGAS_lstringlist var_nodeList_13661 ;
  GALGAS_stringlist joker_13633 ; // Joker input parameter
  var_g_13321.method_nodesWithNoPredecessor (joker_13633, var_nodeList_13661 COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 397)) ;
  GALGAS_stringlist var_newOrderedLabelList_13688 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 398)) ;
  GALGAS_stringset var_visitedNodeSet_13734 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_block_ordering.galgas", 399)) ;
  GALGAS_clusterList var_clusterList_13775 = GALGAS_clusterList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 400)) ;
  cEnumerator_lstringlist enumerator_13823 (var_nodeList_13661, kEnumeration_up) ;
  while (enumerator_13823.hasCurrentObject ()) {
    GALGAS_blockInvocationGraph var_gg_13855 = var_g_13321.getter_subgraphFromNodes (GALGAS_lstringlist::constructor_listWithValue (enumerator_13823.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 403)), var_visitedNodeSet_13734, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 402)) ;
    cEnumerator_stringlist enumerator_13980 (var_gg_13855.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 406)), kEnumeration_up) ;
    while (enumerator_13980.hasCurrentObject ()) {
      var_visitedNodeSet_13734.addAssign_operation (enumerator_13980.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 407)) ;
      enumerator_13980.gotoNextObject () ;
    }
    {
    var_gg_13855.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas", 409)) ;
    }
    GALGAS_stringlist var_partialOrderedLabelList_14160 ;
    GALGAS_lstringlist joker_14168_3 ; // Joker input parameter
    GALGAS_stringlist joker_14168_2 ; // Joker input parameter
    GALGAS_lstringlist joker_14168_1 ; // Joker input parameter
    var_gg_13855.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 410)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_14160, joker_14168_3, joker_14168_2, joker_14168_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 410)) ;
    var_newOrderedLabelList_13688.plusAssign_operation(var_partialOrderedLabelList_14160, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 414)) ;
    GALGAS_ipic_31__38_BlockList var_cluster_14243 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 415)) ;
    cEnumerator_stringlist enumerator_14312 (var_partialOrderedLabelList_14160, kEnumeration_up) ;
    while (enumerator_14312.hasCurrentObject ()) {
      GALGAS_uint var_blockIndex_14384 ;
      var_symbolTable_13160.method_searchKey (enumerator_14312.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 417)), var_blockIndex_14384, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 417)) ;
      GALGAS_ipic_31__38_Block var_b_14410 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_14384, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 418)) ;
      var_cluster_14243.addAssign_operation (var_b_14410  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 419)) ;
      enumerator_14312.gotoNextObject () ;
    }
    var_clusterList_13775.addAssign_operation (var_cluster_14243  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 421)) ;
    enumerator_13823.gotoNextObject () ;
  }
  cEnumerator_ipic_31__38_BlockList enumerator_14617 (ioArgument_ioBlockList, kEnumeration_up) ;
  while (enumerator_14617.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_14617.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 425)))).operator_and (var_visitedNodeSet_13734.getter_hasKey (enumerator_14617.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 426)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas", 426)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 425)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_blockInvocationGraph var_gg_14777 = var_g_13321.getter_subgraphFromNodes (GALGAS_lstringlist::constructor_listWithValue (enumerator_14617.current_mBlock (HERE).mAttribute_mLabel  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 428)), var_visitedNodeSet_13734, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 427)) ;
      cEnumerator_stringlist enumerator_14917 (var_gg_14777.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 431)), kEnumeration_up) ;
      while (enumerator_14917.hasCurrentObject ()) {
        var_visitedNodeSet_13734.addAssign_operation (enumerator_14917.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 432)) ;
        enumerator_14917.gotoNextObject () ;
      }
      {
      var_gg_14777.setter_removeEdgesToNode (enumerator_14617.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 434)) ;
      }
      {
      var_gg_14777.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas", 435)) ;
      }
      GALGAS_stringlist var_partialOrderedLabelList_15156 ;
      GALGAS_lstringlist joker_15166_3 ; // Joker input parameter
      GALGAS_stringlist joker_15166_2 ; // Joker input parameter
      GALGAS_lstringlist joker_15166_1 ; // Joker input parameter
      var_gg_14777.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 436)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_15156, joker_15166_3, joker_15166_2, joker_15166_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 436)) ;
      var_newOrderedLabelList_13688.plusAssign_operation(var_partialOrderedLabelList_15156, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 440)) ;
      GALGAS_ipic_31__38_BlockList var_cluster_15247 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 441)) ;
      cEnumerator_stringlist enumerator_15318 (var_partialOrderedLabelList_15156, kEnumeration_up) ;
      while (enumerator_15318.hasCurrentObject ()) {
        GALGAS_uint var_blockIndex_15392 ;
        var_symbolTable_13160.method_searchKey (enumerator_15318.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 443)), var_blockIndex_15392, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 443)) ;
        GALGAS_ipic_31__38_Block var_b_15420 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_15392, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 444)) ;
        var_cluster_15247.addAssign_operation (var_b_15420  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 445)) ;
        enumerator_15318.gotoNextObject () ;
      }
      var_clusterList_13775.addAssign_operation (var_cluster_15247  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 447)) ;
    }
    enumerator_14617.gotoNextObject () ;
  }
  GALGAS_ipic_31__38_BlockList var_orderedBlockList_15610 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 451)) ;
  GALGAS_bool var_continue_15698 = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_15730 (ioArgument_ioBlockList, kEnumeration_up) ;
  bool bool_3 = var_continue_15698.isValidAndTrue () ;
  if (enumerator_15730.hasCurrentObject () && bool_3) {
    while (enumerator_15730.hasCurrentObject () && bool_3) {
      var_continue_15698 = GALGAS_bool (kIsNotEqual, enumerator_15730.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 455)))) ;
      const enumGalgasBool test_4 = var_continue_15698.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_orderedBlockList_15610.addAssign_operation (enumerator_15730.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 457)) ;
      }
      enumerator_15730.gotoNextObject () ;
      if (enumerator_15730.hasCurrentObject ()) {
        bool_3 = var_continue_15698.isValidAndTrue () ;
      }
    }
  }
  cEnumerator_stringlist enumerator_15923 (var_newOrderedLabelList_13688, kEnumeration_up) ;
  while (enumerator_15923.hasCurrentObject ()) {
    GALGAS_uint var_blockIndex_15993 ;
    var_symbolTable_13160.method_searchKey (enumerator_15923.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 462)), var_blockIndex_15993, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 462)) ;
    GALGAS_ipic_31__38_Block var_b_16017 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_15993, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 463)) ;
    var_orderedBlockList_15610.addAssign_operation (var_b_16017  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 464)) ;
    enumerator_15923.gotoNextObject () ;
  }
  GALGAS_uint var_insertionIndex_16166 = var_orderedBlockList_15610.getter_length (SOURCE_FILE ("ipic18_block_ordering.galgas", 467)) ;
  var_continue_15698 = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_16239 (ioArgument_ioBlockList, kEnumeration_down) ;
  bool bool_5 = var_continue_15698.isValidAndTrue () ;
  if (enumerator_16239.hasCurrentObject () && bool_5) {
    while (enumerator_16239.hasCurrentObject () && bool_5) {
      var_continue_15698 = GALGAS_bool (kIsNotEqual, enumerator_16239.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 470)))) ;
      const enumGalgasBool test_6 = var_continue_15698.boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        var_orderedBlockList_15610.setter_insertAtIndex (enumerator_16239.current_mBlock (HERE), var_insertionIndex_16166, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 472)) ;
        }
      }
      enumerator_16239.gotoNextObject () ;
      if (enumerator_16239.hasCurrentObject ()) {
        bool_5 = var_continue_15698.isValidAndTrue () ;
      }
    }
  }
  GALGAS_uint var_p_16453 = function_blockDiscontinuityCount (var_orderedBlockList_15610, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 476)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  count after optimization: ").add_operation (var_p_16453.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)) ;
  const enumGalgasBool test_7 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas", 478)).boolEnum () ;
  if (kBoolTrue == test_7) {
    inCompiler->printMessage (var_n_12890.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (var_p_16453.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (GALGAS_string (".\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (gOption_piccolo_5F_options_generateGraphvizFiles.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_bool joker_16848 ; // Joker input parameter
    var_g_13321.getter_graphviz (SOURCE_FILE ("ipic18_block_ordering.galgas", 483)).method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".blockOrderingConstraints.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 483)), joker_16848, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 483)) ;
  }
  GALGAS_stringset var_newSymbolSet_16903 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_block_ordering.galgas", 486)) ;
  GALGAS_bool var_ok_16937 = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_16974 (var_orderedBlockList_15610, kEnumeration_up) ;
  while (enumerator_16974.hasCurrentObject ()) {
    const enumGalgasBool test_9 = var_newSymbolSet_16903.getter_hasKey (enumerator_16974.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 489)).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_string var_s_17053 = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_16974.current_mBlock (HERE).mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 490)).add_operation (GALGAS_string ("\" is duplicated"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 491)) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 492)), var_s_17053  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 492)) ;
      ioArgument_ioListFileContents.plusAssign_operation(var_s_17053.add_operation (GALGAS_string (".\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 493)) ;
      var_ok_16937 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_9) {
      var_newSymbolSet_16903.addAssign_operation (enumerator_16974.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 496)) ;
    }
    enumerator_16974.gotoNextObject () ;
  }
  cEnumerator_symbolTableForBlockOptimization enumerator_17327 (var_symbolTable_13160, kEnumeration_up) ;
  while (enumerator_17327.hasCurrentObject ()) {
    const enumGalgasBool test_10 = var_newSymbolSet_16903.getter_hasKey (enumerator_17327.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 500)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas", 500)).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_string var_s_17401 = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17327.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 501)).add_operation (GALGAS_string ("\" is missing"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 502)) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 503)), var_s_17401  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 503)) ;
      ioArgument_ioListFileContents.plusAssign_operation(var_s_17401.add_operation (GALGAS_string (".\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 504)) ;
      var_ok_16937 = GALGAS_bool (false) ;
    }
    enumerator_17327.gotoNextObject () ;
  }
  const enumGalgasBool test_11 = var_ok_16937.boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioBlockList = var_orderedBlockList_15610 ;
    {
    routine_displayBlockList (GALGAS_string ("ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_orderedBlockList_15610, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 511)) ;
    }
  }else if (kBoolFalse == test_11) {
    GALGAS_string var_s_17829 = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: reordered block list is inconsistent, it is not used anymore") ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 514)), var_s_17829  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 514)) ;
    ioArgument_ioListFileContents.plusAssign_operation(var_s_17829.add_operation (GALGAS_string (".\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 515)) ;
    {
    routine_displayBlockList (GALGAS_string ("INCONSISTENT ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION (not used)"), ioArgument_ioListFileContents, var_orderedBlockList_15610, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 516)) ;
    }
  }
  const enumGalgasBool test_12 = var_ok_16937.boolEnum () ;
  if (kBoolTrue == test_12) {
    {
    routine_perform_5F_cluster_5F_ordering (var_clusterList_13775, ioArgument_ioBlockList, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 520)) ;
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
  cEnumerator_ipic_31__38_BlockList enumerator_18599 (constinArgument_inBlockList, kEnumeration_up) ;
  while (enumerator_18599.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_18599.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 536)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (enumerator_18599.current_mBlock (HERE).mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)).add_operation (GALGAS_string ("\" [shape=rectangle]\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)) ;
    }
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_18784 (enumerator_18599.current_mBlock (HERE).mAttribute_mInstructionList, kEnumeration_up) ;
    while (enumerator_18784.hasCurrentObject ()) {
      callExtensionMethod_buildInstructionInvocationGraph ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_18784.current_mInstruction (HERE).ptr (), enumerator_18599.current_mBlock (HERE).mAttribute_mLabel, outArgument_outGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 540)) ;
      enumerator_18784.gotoNextObject () ;
    }
    callExtensionMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_18599.current_mBlock (HERE).mAttribute_mTerminator.ptr (), enumerator_18599.current_mBlock (HERE).mAttribute_mLabel, outArgument_outGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 542)) ;
    enumerator_18599.gotoNextObject () ;
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
  cEnumerator_ipic_31__38_BlockList enumerator_19223 (inArgument_inBlockList, kEnumeration_up) ;
  GALGAS_uint index_19204 ((uint32_t) 0) ;
  while (enumerator_19223.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_19223.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 554)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_nextBlockLabel_19334 ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, index_19204.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 556)).objectCompare (inArgument_inBlockList.getter_length (SOURCE_FILE ("ipic18_block_ordering.galgas", 556)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_nextBlockLabel_19334 = inArgument_inBlockList.getter_mBlockAtIndex (index_19204.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 557)).mAttribute_mLabel.mAttribute_string ;
      }else if (kBoolFalse == test_1) {
        var_nextBlockLabel_19334 = GALGAS_string::makeEmptyString () ;
      }
      const enumGalgasBool test_2 = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_19223.current_mBlock (HERE).mAttribute_mTerminator.ptr (), var_nextBlockLabel_19334, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 561)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outResult.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 562)) ;
      }
    }
    enumerator_19223.gotoNextObject () ;
    index_19204.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 553)) ;
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
    GALGAS_string var_invocationGraph_20004 ;
    {
    routine_buildInvocationGraph (ioArgument_ioGeneratedBlockList, var_invocationGraph_20004, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 575)) ;
    }
    GALGAS_bool joker_20104 ; // Joker input parameter
    var_invocationGraph_20004.method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".blockInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 576)), joker_20104, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 576)) ;
  }
  GALGAS_bool var_optimize_20138 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.getter_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.getter_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (66)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 580)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 579)) ;
  const enumGalgasBool test_1 = var_optimize_20138.boolEnum () ;
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
                                                        const GALGAS_location & /* §§ inErrorLocation */
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 218)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 218)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE GENERATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)) ;
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas", 221)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Code generation:\n")  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 222)) ;
  }
  GALGAS_symbolTableForRelativesResolution var_symbolTable_7354 ;
  GALGAS_uint var_firstDataAddress_7386 ;
  {
  routine_computeLabelAbsoluteAddressMap (constinArgument_inGeneratedBlockList, GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 227)), var_symbolTable_7354, var_firstDataAddress_7386, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 225)) ;
  }
  GALGAS_uint var_dataAddress_7468 = var_firstDataAddress_7386 ;
  GALGAS_pic_31__38__5F_dataAddressMap var_dataAddressMap_7526 = GALGAS_pic_31__38__5F_dataAddressMap::constructor_emptyMap (SOURCE_FILE ("ipic18_code_generation.galgas", 233)) ;
  cEnumerator_pic_31__38__5F_dataMap enumerator_7554 (constinArgument_inDataMap, kEnumeration_up) ;
  while (enumerator_7554.hasCurrentObject ()) {
    {
    var_dataAddressMap_7526.setter_insertKey (enumerator_7554.current_lkey (HERE), var_dataAddress_7468, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 235)) ;
    }
    var_dataAddress_7468 = var_dataAddress_7468.add_operation (enumerator_7554.current_mData (HERE).getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 236)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 236)) ;
    enumerator_7554.gotoNextObject () ;
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 239)) ;
  }
  GALGAS_string var_assemblyString_7762 = GALGAS_string::makeEmptyString () ;
  GALGAS_uint var_relocatableCodeSize_7793 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_uint var_blockStartAddress_7821 = GALGAS_uint ((uint32_t) 0U) ;
  outArgument_outGeneratedCodeMap = GALGAS_generatedCodeMap::constructor_emptyMap (SOURCE_FILE ("ipic18_code_generation.galgas", 243)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_7886 (constinArgument_inGeneratedBlockList, kEnumeration_up) ;
  GALGAS_uint index_7858 ((uint32_t) 0) ;
  while (enumerator_7886.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_7928 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, index_7858.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 246)).objectCompare (constinArgument_inGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 246)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_nextBlockLabel_7928 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_7858.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 247)).mAttribute_mLabel.mAttribute_string ;
    }else if (kBoolFalse == test_1) {
      var_nextBlockLabel_7928 = GALGAS_string::makeEmptyString () ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_7886.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 251)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_blockStartAddress_7821 = enumerator_7886.current_mBlock (HERE).mAttribute_mAddress ;
      {
      routine_setEmitAddress (var_blockStartAddress_7821, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 253)) ;
      }
    }
    extensionMethod_generateCodeForBlock (enumerator_7886.current_mBlock (HERE), var_symbolTable_7354, var_dataAddressMap_7526, var_blockStartAddress_7821, var_nextBlockLabel_7928, ioArgument_ioListFileContents, var_assemblyString_7762, outArgument_outGeneratedCodeMap, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 255)) ;
    GALGAS_uint var_blockSize_8492 = extensionGetter_blockSize (enumerator_7886.current_mBlock (HERE), var_nextBlockLabel_7928, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 264)) ;
    var_blockStartAddress_7821 = var_blockStartAddress_7821.add_operation (var_blockSize_8492, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 265)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_7886.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 266)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_relocatableCodeSize_7793 = var_relocatableCodeSize_7793.add_operation (var_blockSize_8492, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 267)) ;
    }
    enumerator_7886.gotoNextObject () ;
    index_7858.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 244)) ;
  }
  var_dataAddress_7468 = var_firstDataAddress_7386 ;
  cEnumerator_pic_31__38__5F_dataMap enumerator_8759 (constinArgument_inDataMap, kEnumeration_up) ;
  const bool bool_4 = true ;
  if (enumerator_8759.hasCurrentObject () && bool_4) {
    {
    routine_setEmitAddress (var_dataAddress_7468, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 274)) ;
    }
    {
    GALGAS_codeList temp_5 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 277)) ;
    temp_5.addAssign_operation (GALGAS_string ("    ORG ").add_operation (var_dataAddress_7468.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 277)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 277))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 277)) ;
    GALGAS_stringlist temp_6 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    temp_6.addAssign_operation (GALGAS_string ("    ORG ").add_operation (var_dataAddress_7468.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    routine_generateLineWithCode (var_dataAddress_7468, temp_5, temp_6, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 279)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 275)) ;
    }
    var_assemblyString_7762.plusAssign_operation(GALGAS_string ("    ORG ").add_operation (var_dataAddress_7468.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 283)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 283)) ;
    while (enumerator_8759.hasCurrentObject () && bool_4) {
      {
      GALGAS_codeList temp_7 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 287)) ;
      temp_7.addAssign_operation (GALGAS_string ("_data_").add_operation (enumerator_8759.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 287)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 287)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 287))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 287)) ;
      GALGAS_stringlist temp_8 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      temp_8.addAssign_operation (GALGAS_string ("_data_").add_operation (enumerator_8759.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      routine_generateLineWithCode (var_dataAddress_7468, temp_7, temp_8, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 289)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 285)) ;
      }
      var_assemblyString_7762.plusAssign_operation(GALGAS_string ("_data_").add_operation (enumerator_8759.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 293)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 293)) ;
      cEnumerator_uintlist enumerator_9317 (enumerator_8759.current_mData (HERE), kEnumeration_up) ;
      while (enumerator_9317.hasCurrentObject ()) {
        var_assemblyString_7762.plusAssign_operation(GALGAS_string ("    DW ").add_operation (enumerator_9317.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 295)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 295)) ;
        {
        routine_emitCode (enumerator_9317.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)) ;
        }
        {
        GALGAS_codeList temp_9 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 299)) ;
        GALGAS_uintlist temp_10 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 299)) ;
        temp_10.addAssign_operation (enumerator_9317.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 299)) ;
        temp_9.addAssign_operation (GALGAS_string ("    DW ").add_operation (enumerator_9317.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 299)), temp_10  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 299)) ;
        GALGAS_stringlist temp_11 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        temp_11.addAssign_operation (GALGAS_string ("    DW ").add_operation (enumerator_9317.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        routine_generateLineWithCode (var_dataAddress_7468, temp_9, temp_11, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 301)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 297)) ;
        }
        var_dataAddress_7468 = var_dataAddress_7468.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 305)) ;
        enumerator_9317.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 307)) ;
      enumerator_8759.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_12 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas", 309)).boolEnum () ;
  if (kBoolTrue == test_12) {
    inCompiler->printMessage (GALGAS_string ("  Relocatable code size: ").add_operation (var_relocatableCodeSize_7793.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 310)).add_operation (GALGAS_string (" bytes.\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 310))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 310)) ;
  }
  outArgument_outUsedROMsize = var_dataAddress_7468 ;
  switch (constinArgument_inProgramKind.enumValue ()) {
  case GALGAS_programKind::kNotBuilt:
    break ;
  case GALGAS_programKind::kEnum_regularProgram:
  case GALGAS_programKind::kEnum_userProgram:
    {
      const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, outArgument_outUsedROMsize.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_13) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317)), GALGAS_string ("the program uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317)).add_operation (GALGAS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 317)) ;
      }
    }
    break ;
  case GALGAS_programKind::kEnum_bootloaderProgram:
    {
      const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, outArgument_outUsedROMsize.objectCompare (constinArgument_inBootloaderReservedROMsize)).boolEnum () ;
      if (kBoolTrue == test_14) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321)), GALGAS_string ("the bootloader uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321)).add_operation (GALGAS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321)).add_operation (constinArgument_inBootloaderReservedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 321)) ;
      }
    }
    break ;
  }
  cEnumerator_actualConfigurationMap enumerator_10486 (constinArgument_inActualConfigurationMap, kEnumeration_up) ;
  while (enumerator_10486.hasCurrentObject ()) {
    {
    routine_setEmitAddress (enumerator_10486.current_mRegisterAddress (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 327)) ;
    }
    {
    routine_emitByte (enumerator_10486.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 328)) ;
    }
    enumerator_10486.gotoNextObject () ;
  }
  GALGAS_string var_contents_10630 ;
  {
  routine_getGeneratedContents (var_contents_10630, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 331)) ;
  }
  GALGAS_string var_destinationFile_10653 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 332)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 332)) ;
  GALGAS_bool joker_10777 ; // Joker input parameter
  var_contents_10630.method_writeToFileWhenDifferentContents (var_destinationFile_10653, joker_10777, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 333)) ;
  const enumGalgasBool test_15 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_string var_baseName_10887 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("ipic18_code_generation.galgas", 336)).getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 336)) ;
    GALGAS_string var_cContents_11022 ;
    {
    routine_get_5F_C_5F_ArrayImplementation (var_baseName_10887, var_cContents_11022, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 337)) ;
    }
    var_destinationFile_10653 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 338)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 338)) ;
    GALGAS_bool joker_11168 ; // Joker input parameter
    var_cContents_11022.method_writeToFileWhenDifferentContents (var_destinationFile_10653, joker_11168, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 339)) ;
    GALGAS_string var_hContents_11226 ;
    {
    routine_get_5F_C_5F_ArrayHeader (var_baseName_10887, var_hContents_11226, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 340)) ;
    }
    var_destinationFile_10653 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 341)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 341)) ;
    GALGAS_bool joker_11372 ; // Joker input parameter
    var_hContents_11226.method_writeToFileWhenDifferentContents (var_destinationFile_10653, joker_11372, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 342)) ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.getter_value ()).operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_code_generation.galgas", 345)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 345)).boolEnum () ;
  if (kBoolTrue == test_16) {
    {
    routine_pic_31__38_GenerateAssemblyFile (constinArgument_inSourceFileName, constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inAllRegisters, constinArgument_inActualConfigurationMap, var_assemblyString_7762, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 346)) ;
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
  GALGAS_string var_assemblyString_12404 = GALGAS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 370)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 370)) ;
  var_assemblyString_12404.plusAssign_operation(GALGAS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 372)) ;
  var_assemblyString_12404.plusAssign_operation(constinArgument_inAssemblyCode, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 373)) ;
  var_assemblyString_12404.plusAssign_operation(GALGAS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 375)) ;
  cEnumerator_registerTable enumerator_12634 (constinArgument_inPredefinedRegisters, kEnumeration_up) ;
  while (enumerator_12634.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister_12694 ;
    enumerator_12634.current_mRegisterAddressList (HERE).method_first (var_firstRegister_12694, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 377)) ;
    var_assemblyString_12404.plusAssign_operation(enumerator_12634.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 378)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)).add_operation (var_firstRegister_12694.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)) ;
    enumerator_12634.gotoNextObject () ;
  }
  var_assemblyString_12404.plusAssign_operation(GALGAS_string ("\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 380)) ;
  var_assemblyString_12404.plusAssign_operation(GALGAS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 382)) ;
  cEnumerator_registerTable enumerator_12933 (constinArgument_inAllRegisters, kEnumeration_up) ;
  while (enumerator_12933.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_12933.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 384)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 384)).operator_not (SOURCE_FILE ("ipic18_code_generation.galgas", 384)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_firstRegister_13057 ;
      enumerator_12933.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13057, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 385)) ;
      var_assemblyString_12404.plusAssign_operation(enumerator_12933.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 386)).add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)).add_operation (var_firstRegister_13057.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)) ;
    }
    enumerator_12933.gotoNextObject () ;
  }
  var_assemblyString_12404.plusAssign_operation(GALGAS_string ("\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 389)) ;
  var_assemblyString_12404.plusAssign_operation(GALGAS_string (";--- Piccolo defined symbols\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 391)) ;
  var_assemblyString_12404.plusAssign_operation(GALGAS_string ("W EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 392)) ;
  var_assemblyString_12404.plusAssign_operation(GALGAS_string ("FAST EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 393)) ;
  var_assemblyString_12404.plusAssign_operation(GALGAS_string ("BSR_ACCESS EQU 1\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 394)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 396)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_assemblyString_12404.plusAssign_operation(GALGAS_string (";--- Configuration\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 397)) ;
    cEnumerator_actualConfigurationMap enumerator_13560 (constinArgument_inActualConfigurationMap, kEnumeration_up) ;
    while (enumerator_13560.hasCurrentObject ()) {
      var_assemblyString_12404.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_13560.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)).add_operation (enumerator_13560.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 399)) ;
      enumerator_13560.gotoNextObject () ;
    }
  }
  var_assemblyString_12404.plusAssign_operation(GALGAS_string (";---\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 403)) ;
  var_assemblyString_12404.plusAssign_operation(GALGAS_string ("  END\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 404)) ;
  GALGAS_string var_asmDestinationFile_13877 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 406)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 406)) ;
  GALGAS_bool joker_14009 ; // Joker input parameter
  var_assemblyString_12404.method_writeToFileWhenDifferentContents (var_asmDestinationFile_13877, joker_14009, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 407)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("STACK COMPUTATIONS").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)) ;
  GALGAS_stringset var_startLabelsToExplore_6661 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 201)) ;
  GALGAS_blockMapForStackComputation var_blockMapForStackComputation_6718 = GALGAS_blockMapForStackComputation::constructor_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 202)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_6784 (constinArgument_inBlockList, kEnumeration_up) ;
  while (enumerator_6784.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_6784.current_mBlock (HERE).mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_stack_computations.galgas", 204)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_startLabelsToExplore_6661.addAssign_operation (enumerator_6784.current_mBlock (HERE).mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 205)) ;
    }
    {
    var_blockMapForStackComputation_6718.setter_insertKey (enumerator_6784.current_mBlock (HERE).mAttribute_mLabel, enumerator_6784.current_mBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 207)) ;
    }
    enumerator_6784.gotoNextObject () ;
  }
  GALGAS_routineCallMap var_routineCallMap_7068 = GALGAS_routineCallMap::constructor_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 210)) ;
  if (constinArgument_inBlockList.getter_length (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).isValid ()) {
    uint32_t variant_7080 = constinArgument_inBlockList.getter_length (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).uintValue () ;
    bool loop_7080 = true ;
    while (loop_7080) {
      loop_7080 = GALGAS_bool (kIsStrictSup, var_startLabelsToExplore_6661.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_7080) {
        loop_7080 = GALGAS_bool (kIsStrictSup, var_startLabelsToExplore_6661.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_7080 && (0 == variant_7080)) {
        loop_7080 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)) ;
      }
      if (loop_7080) {
        variant_7080 -- ;
        GALGAS_string var_startLabel_7172 = var_startLabelsToExplore_6661.getter_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 214)) ;
        {
        var_startLabelsToExplore_6661.setter_removeKey (var_startLabel_7172 COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 215)) ;
        }
        GALGAS_stringset var_blockToExploreSet_7317 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 217)) ;
        var_blockToExploreSet_7317.addAssign_operation (var_startLabel_7172  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 218)) ;
        GALGAS_stringset var_exploredBlockSet_7409 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 219)) ;
        GALGAS_stringset var_calledRoutineSet_7446 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 220)) ;
        GALGAS_uint var_terminatorStackNeeds_7482 = GALGAS_uint ((uint32_t) 0U) ;
        if (constinArgument_inBlockList.getter_length (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).isValid ()) {
          uint32_t variant_7495 = constinArgument_inBlockList.getter_length (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).uintValue () ;
          bool loop_7495 = true ;
          while (loop_7495) {
            loop_7495 = GALGAS_bool (kIsStrictSup, var_blockToExploreSet_7317.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 223)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
            if (loop_7495) {
              loop_7495 = GALGAS_bool (kIsStrictSup, var_blockToExploreSet_7317.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 223)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
            }
            if (loop_7495 && (0 == variant_7495)) {
              loop_7495 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)) ;
            }
            if (loop_7495) {
              variant_7495 -- ;
              GALGAS_string var_b_7589 = var_blockToExploreSet_7317.getter_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 225)) ;
              {
              var_blockToExploreSet_7317.setter_removeKey (var_b_7589 COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 226)) ;
              }
              var_exploredBlockSet_7409.addAssign_operation (var_b_7589  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 227)) ;
              GALGAS_ipic_31__38_Block var_aBlock_7774 ;
              var_blockMapForStackComputation_6718.method_searchKey (var_b_7589.getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 228)), var_aBlock_7774, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 228)) ;
              GALGAS_uint var_tsn_7917 ;
              callExtensionMethod_exploreAccessibleBlocksForStackComputations ((const cPtr_ipic_31__38_AbstractBlockTerminator *) var_aBlock_7774.mAttribute_mTerminator.ptr (), var_blockToExploreSet_7317, var_exploredBlockSet_7409, var_tsn_7917, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 229)) ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_tsn_7917.objectCompare (var_terminatorStackNeeds_7482)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_terminatorStackNeeds_7482 = var_tsn_7917 ;
              }
              cEnumerator_ipic_31__38_SequentialInstructionList enumerator_8051 (var_aBlock_7774.mAttribute_mInstructionList, kEnumeration_up) ;
              while (enumerator_8051.hasCurrentObject ()) {
                callExtensionMethod_buildCalledRoutineSetForStackComputations ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_8051.current_mInstruction (HERE).ptr (), var_calledRoutineSet_7446, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 238)) ;
                enumerator_8051.gotoNextObject () ;
              }
            }
          }
        }
        {
        var_routineCallMap_7068.setter_insertKey (var_startLabel_7172.getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 241)), var_calledRoutineSet_7446, var_terminatorStackNeeds_7482, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 241)) ;
        }
        cEnumerator_stringset enumerator_8283 (var_calledRoutineSet_7446, kEnumeration_up) ;
        while (enumerator_8283.hasCurrentObject ()) {
          const enumGalgasBool test_2 = var_routineCallMap_7068.getter_hasKey (enumerator_8283.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 243)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 243)).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_startLabelsToExplore_6661.addAssign_operation (enumerator_8283.current_key (HERE)  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 244)) ;
          }
          enumerator_8283.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_routineStackRequirementMap var_routineStackRequirementMap_8523 = GALGAS_routineStackRequirementMap::constructor_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 250)) ;
  GALGAS_bool var_progress_8543 = GALGAS_bool (true) ;
  if (var_routineCallMap_7068.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).isValid ()) {
    uint32_t variant_8557 = var_routineCallMap_7068.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).uintValue () ;
    bool loop_8557 = true ;
    while (loop_8557) {
      loop_8557 = var_progress_8543.isValid () ;
      if (loop_8557) {
        loop_8557 = var_progress_8543.boolValue () ;
      }
      if (loop_8557 && (0 == variant_8557)) {
        loop_8557 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)) ;
      }
      if (loop_8557) {
        variant_8557 -- ;
        var_progress_8543 = GALGAS_bool (false) ;
        GALGAS_routineCallMap var_tempRoutineCallMap_8668 = var_routineCallMap_7068 ;
        var_routineCallMap_7068 = GALGAS_routineCallMap::constructor_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 257)) ;
        cEnumerator_routineCallMap enumerator_8743 (var_tempRoutineCallMap_8668, kEnumeration_up) ;
        while (enumerator_8743.hasCurrentObject ()) {
          GALGAS_uint var_levels_8765 = enumerator_8743.current_mTerminatorStackNeeds (HERE) ;
          GALGAS_bool var_solved_8808 = GALGAS_bool (true) ;
          cEnumerator_stringset enumerator_8849 (enumerator_8743.current_mCalledRoutineSet (HERE), kEnumeration_up) ;
          bool bool_3 = var_solved_8808.isValidAndTrue () ;
          if (enumerator_8849.hasCurrentObject () && bool_3) {
            while (enumerator_8849.hasCurrentObject () && bool_3) {
              var_solved_8808 = var_routineStackRequirementMap_8523.getter_hasKey (enumerator_8849.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 262)) ;
              const enumGalgasBool test_4 = var_solved_8808.boolEnum () ;
              if (kBoolTrue == test_4) {
                GALGAS_uint var_rLevel_9027 ;
                var_routineStackRequirementMap_8523.method_searchKey (enumerator_8849.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 264)), var_rLevel_9027, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 264)) ;
                const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_levels_8765.objectCompare (var_rLevel_9027)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  var_levels_8765 = var_rLevel_9027.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 266)) ;
                }
              }
              enumerator_8849.gotoNextObject () ;
              if (enumerator_8849.hasCurrentObject ()) {
                bool_3 = var_solved_8808.isValidAndTrue () ;
              }
            }
          }
          const enumGalgasBool test_6 = var_solved_8808.boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            var_routineStackRequirementMap_8523.setter_insertKey (enumerator_8743.current_lkey (HERE), var_levels_8765, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 271)) ;
            }
            var_progress_8543 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_6) {
            {
            var_routineCallMap_7068.setter_insertKey (enumerator_8743.current_lkey (HERE), enumerator_8743.current_mCalledRoutineSet (HERE), enumerator_8743.current_mTerminatorStackNeeds (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 274)) ;
            }
          }
          enumerator_8743.gotoNextObject () ;
        }
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Levels Routine\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 278)) ;
  cEnumerator_routineStackRequirementMap enumerator_9442 (var_routineStackRequirementMap_8523, kEnumeration_up) ;
  while (enumerator_9442.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_9442.current_mLevels (HERE).getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 6U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (enumerator_9442.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)) ;
    enumerator_9442.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 282)) ;
  GALGAS_bool var_noRecursiveRoutine_9627 = GALGAS_bool (kIsEqual, var_routineCallMap_7068.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 284)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_7 = var_noRecursiveRoutine_9627.operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 285)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (gOption_piccolo_5F_options_doNotWarnRecursive.getter_value ()).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 286)).boolEnum () ;
    if (kBoolTrue == test_8) {
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 287)), GALGAS_string ("There are recursive routines")  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 287)) ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("The following routines are recursive:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 289)) ;
    cEnumerator_routineCallMap enumerator_9927 (var_routineCallMap_7068, kEnumeration_up) ;
    while (enumerator_9927.hasCurrentObject ()) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  - ").add_operation (enumerator_9927.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)) ;
      enumerator_9927.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 293)) ;
  }
  const enumGalgasBool test_9 = var_noRecursiveRoutine_9627.boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_uint var_mainLevels_10169 ;
    var_routineStackRequirementMap_8523.method_searchKey (GALGAS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 297)), var_mainLevels_10169, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 297)) ;
    GALGAS_uint var_totalLevels_10192 = var_mainLevels_10169 ;
    const enumGalgasBool test_10 = var_routineStackRequirementMap_8523.getter_hasKey (GALGAS_string (".HIGH_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 299)).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_uint var_highIntLevels_10370 ;
      var_routineStackRequirementMap_8523.method_searchKey (GALGAS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 300)), var_highIntLevels_10370, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 300)) ;
      var_totalLevels_10192 = var_totalLevels_10192.add_operation (var_highIntLevels_10370, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 301)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 301)) ;
    }
    const enumGalgasBool test_11 = var_routineStackRequirementMap_8523.getter_hasKey (GALGAS_string (".LOW_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 303)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_uint var_lowIntLevels_10593 ;
      var_routineStackRequirementMap_8523.method_searchKey (GALGAS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 304)), var_lowIntLevels_10593, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 304)) ;
      var_totalLevels_10192 = var_totalLevels_10192.add_operation (var_lowIntLevels_10593, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 305)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 305)) ;
    }
    inCompiler->printMessage (GALGAS_string ("Max stack depth: ").add_operation (var_totalLevels_10192.getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307))  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)) ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_totalLevels_10192.objectCompare (GALGAS_uint ((uint32_t) 31U))).boolEnum () ;
    if (kBoolTrue == test_12) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 309)), GALGAS_string ("Max stack depth is greater than 31")  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 309)) ;
    }
  }
}


