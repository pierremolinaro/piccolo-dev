#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@_32_lstringlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GALGAS__32_lstringlist_2D_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GALGAS_lstring & in_mValue_30_,
                                              const GALGAS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GALGAS__32_lstringlist_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GALGAS_lstring & in_mValue_30_,
                                                                        const GALGAS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GALGAS__32_lstringlist_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement__32_lstringlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement__32_lstringlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mValue0" ":") ;
  mObject.mProperty_mValue_30_.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mValue1" ":") ;
  mObject.mProperty_mValue_31_.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement__32_lstringlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement__32_lstringlist * operand = (cCollectionElement__32_lstringlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement__32_lstringlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist::GALGAS__32_lstringlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist::GALGAS__32_lstringlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                         const GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS__32_lstringlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS__32_lstringlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mValue_30_,
                                                        const GALGAS_lstring & in_mValue_31_
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_,
                                                     in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_append (const GALGAS_lstring inOperand0,
                                            const GALGAS_lstring inOperand1,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
        outOperand0 = p->mObject.mProperty_mValue_30_ ;
        outOperand1 = p->mObject.mProperty_mValue_31_ ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_popFirst (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_popLast (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::add_operation (const GALGAS__32_lstringlist & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::plusAssign_operation (const GALGAS__32_lstringlist inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_setMValue_30_AtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_30_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS__32_lstringlist::getter_mValue_30_AtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_30_ ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_setMValue_31_AtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_31_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS__32_lstringlist::getter_mValue_31_AtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_31_ ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator__32_lstringlist::cEnumerator__32_lstringlist (const GALGAS__32_lstringlist & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element cEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  const GALGAS__32_lstringlist * p = (const GALGAS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "unicode_character_cpp.h"
#include "scanner_actions.h"
#include "cLexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_piccolo_5F_lexique::cTokenFor_piccolo_5F_lexique (void) :
mLexicalAttribute_charValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_piccolo_5F_lexique::Lexique_piccolo_5F_lexique (Compiler * inCallerCompiler,
                                                        const String & inSourceFileName
                                                        COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_piccolo_5F_lexique::Lexique_piccolo_5F_lexique (Compiler * inCallerCompiler,
                                                        const String & inSourceString,
                                                        const String & inStringForError
                                                        COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_piccolo_5F_lexique_ASCIIcodeTooLargeError = "ASCII code > 255" ;

static const char * gLexicalMessage_piccolo_5F_lexique_binNumberTooLarge = "bin number too large" ;

static const char * gLexicalMessage_piccolo_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_piccolo_5F_lexique_hexNumberTooLarge = "hex number too large" ;

static const char * gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_piccolo_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_piccolo_5F_lexique_internalError = "internal error" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_piccolo_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 160)) {
    static const char * syntaxErrorMessageArray [160] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a label beginning with '@'",
        "a 32-bit unsigned number",
        "a character constant",
        "a character string constant \"...\"",
        "a comment",
        "a comment",
        "the 'bank' keyword",
        "the 'banksave' keyword",
        "the 'banksel' keyword",
        "the 'baseline' keyword",
        "the 'block' keyword",
        "the 'bootloader' keyword",
        "the 'byte' keyword",
        "the 'case' keyword",
        "the 'checkbank' keyword",
        "the 'checknobank' keyword",
        "the 'checkpic' keyword",
        "the 'computed' keyword",
        "the 'configuration' keyword",
        "the 'const' keyword",
        "the 'contextsave' keyword",
        "the 'data' keyword",
        "the 'data16' keyword",
        "the 'data8' keyword",
        "the 'do' keyword",
        "the 'end' keyword",
        "the 'else' keyword",
        "the 'elsif' keyword",
        "the 'ensures' keyword",
        "the 'fast' keyword",
        "the 'forever' keyword",
        "the 'if' keyword",
        "the 'implements' keyword",
        "the 'include' keyword",
        "the 'inline' keyword",
        "the 'interrupt' keyword",
        "the 'macro' keyword",
        "the 'midrange' keyword",
        "the 'nobank' keyword",
        "the 'noreturn' keyword",
        "the 'page' keyword",
        "the 'pic18' keyword",
        "the 'preserved' keyword",
        "the 'protected' keyword",
        "the 'private' keyword",
        "the 'ram' keyword",
        "the 'requires' keyword",
        "the 'rom' keyword",
        "the 'routine' keyword",
        "the 'switch' keyword",
        "the 'unused' keyword",
        "the 'uses' keyword",
        "the 'w' keyword",
        "the 'while' keyword",
        "the 'addlw' instruction",
        "the 'addwf' instruction",
        "the 'addwfc' instruction",
        "the 'andlw' instruction",
        "the 'andwf' instruction",
        "the 'bc' instruction",
        "the 'bcf' instruction",
        "the 'bn' instruction",
        "the 'bnc' instruction",
        "the 'bnn' instruction",
        "the 'bov' instruction",
        "the 'bnov' instruction",
        "the 'bnz' instruction",
        "the 'bsf' instruction",
        "the 'bra' instruction",
        "the 'btg' instruction",
        "the 'bz' instruction",
        "the 'call' instruction",
        "the 'clrf' instruction",
        "the 'clrw' instruction",
        "the 'clrwdt' instruction",
        "the 'comf' instruction",
        "the 'daw' instruction",
        "the 'decf' instruction",
        "the 'incf' instruction",
        "the 'iorlw' instruction",
        "the 'iorwf' instruction",
        "the 'fnop' instruction",
        "the 'goto' instruction",
        "the 'jsr' instruction",
        "the 'jump' instruction",
        "the 'lfsr' instruction",
        "the 'ldataptr' instruction",
        "the 'ldata8ptr' instruction",
        "the 'ldata16ptr' instruction",
        "the 'ltblptr' instruction",
        "the 'mnop' instruction",
        "the 'movf' instruction",
        "the 'movff' instruction",
        "the 'movlw' instruction",
        "the 'movwf' instruction",
        "the 'mullw' instruction",
        "the 'mulwf' instruction",
        "the 'negf' instruction",
        "the 'nop' instruction",
        "the 'nopbra' instruction",
        "the 'pop' instruction",
        "the 'option' instruction",
        "the 'push' instruction",
        "the 'rcall' instruction",
        "the 'reset' instruction",
        "the 'retlw' instruction",
        "the 'rlcf' instruction",
        "the 'rlf' instruction",
        "the 'rlncf' instruction",
        "the 'rrcf' instruction",
        "the 'rrf' instruction",
        "the 'rrncf' instruction",
        "the 'setf' instruction",
        "the 'sleep' instruction",
        "the 'subfwb' instruction",
        "the 'sublw' instruction",
        "the 'subwf' instruction",
        "the 'subwfb' instruction",
        "the 'swapf' instruction",
        "the 'tblrd' instruction",
        "the 'tblwt' instruction",
        "the 'tris' instruction",
        "the 'xorlw' instruction",
        "the 'xorwf' instruction",
        "the '*' delimitor",
        "the '*+' delimitor",
        "the ',' delimitor",
        "the '!=' delimitor",
        "the '<=' delimitor",
        "the '>=' delimitor",
        "the '*-' delimitor",
        "the '+*' delimitor",
        "the ';' delimitor",
        "the ':' delimitor",
        "the '==' delimitor",
        "the '<' delimitor",
        "the '>' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the '.' delimitor",
        "the '!' delimitor",
        "the '&' delimitor",
        "the '|' delimitor",
        "the '=' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '/' delimitor",
        "the '-' delimitor",
        "the '+' delimitor",
        "the '\?' delimitor",
        "the '^' delimitor",
        "the '<<' delimitor",
        "the '>>' delimitor",
        "the '~' delimitor",
        "the '%' delimitor",
        "the '...' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$_21_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__21_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_25_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__25_ [] = {
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__2B_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__2A__2B_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__2D_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__2A__2D_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__2A_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__2B__2A_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E__2E_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__2E__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_b$'
static const utf32 kUnicodeString_piccolo_5F_lexique__30_b [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('b'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_piccolo_5F_lexique__30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3C_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3C__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3D_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3C__3D_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3E__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__3F_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$addlw$'
static const utf32 kUnicodeString_piccolo_5F_lexique_addlw [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$addwf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_addwf [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$addwfc$'
static const utf32 kUnicodeString_piccolo_5F_lexique_addwfc [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$andlw$'
static const utf32 kUnicodeString_piccolo_5F_lexique_andlw [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$andwf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_andwf [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bank$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bank [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$banksave$'
static const utf32 kUnicodeString_piccolo_5F_lexique_banksave [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$banksel$'
static const utf32 kUnicodeString_piccolo_5F_lexique_banksel [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$baseline$'
static const utf32 kUnicodeString_piccolo_5F_lexique_baseline [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bc$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bc [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bcf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bcf [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$block$'
static const utf32 kUnicodeString_piccolo_5F_lexique_block [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bn$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bn [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bnc$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bnc [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bnn$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bnn [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('n'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bnov$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bnov [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bnz$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bnz [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('n'),
  TO_UNICODE ('z'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bootloader$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bootloader [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('a'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bov$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bov [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bra$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bra [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bsf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bsf [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('s'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$btg$'
static const utf32 kUnicodeString_piccolo_5F_lexique_btg [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('t'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$byte$'
static const utf32 kUnicodeString_piccolo_5F_lexique_byte [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('y'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bz$'
static const utf32 kUnicodeString_piccolo_5F_lexique_bz [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('z'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$call$'
static const utf32 kUnicodeString_piccolo_5F_lexique_call [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$case$'
static const utf32 kUnicodeString_piccolo_5F_lexique_case [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$checkbank$'
static const utf32 kUnicodeString_piccolo_5F_lexique_checkbank [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$checknobank$'
static const utf32 kUnicodeString_piccolo_5F_lexique_checknobank [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$checkpic$'
static const utf32 kUnicodeString_piccolo_5F_lexique_checkpic [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('p'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$clrf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_clrf [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('r'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$clrw$'
static const utf32 kUnicodeString_piccolo_5F_lexique_clrw [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('r'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$clrwdt$'
static const utf32 kUnicodeString_piccolo_5F_lexique_clrwdt [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('r'),
  TO_UNICODE ('w'),
  TO_UNICODE ('d'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$comf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_comf [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$computed$'
static const utf32 kUnicodeString_piccolo_5F_lexique_computed [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$configuration$'
static const utf32 kUnicodeString_piccolo_5F_lexique_configuration [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$const$'
static const utf32 kUnicodeString_piccolo_5F_lexique_const [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$contextsave$'
static const utf32 kUnicodeString_piccolo_5F_lexique_contextsave [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$data$'
static const utf32 kUnicodeString_piccolo_5F_lexique_data [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$data_31__36_$'
static const utf32 kUnicodeString_piccolo_5F_lexique_data_31__36_ [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('1'),
  TO_UNICODE ('6'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$data_38_$'
static const utf32 kUnicodeString_piccolo_5F_lexique_data_38_ [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('8'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$daw$'
static const utf32 kUnicodeString_piccolo_5F_lexique_daw [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$decf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_decf [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$do$'
static const utf32 kUnicodeString_piccolo_5F_lexique_do [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$else$'
static const utf32 kUnicodeString_piccolo_5F_lexique_else [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$elsif$'
static const utf32 kUnicodeString_piccolo_5F_lexique_elsif [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$end$'
static const utf32 kUnicodeString_piccolo_5F_lexique_end [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ensures$'
static const utf32 kUnicodeString_piccolo_5F_lexique_ensures [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$fast$'
static const utf32 kUnicodeString_piccolo_5F_lexique_fast [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$fnop$'
static const utf32 kUnicodeString_piccolo_5F_lexique_fnop [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$forever$'
static const utf32 kUnicodeString_piccolo_5F_lexique_forever [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$goto$'
static const utf32 kUnicodeString_piccolo_5F_lexique_goto [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$if$'
static const utf32 kUnicodeString_piccolo_5F_lexique_if [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$implements$'
static const utf32 kUnicodeString_piccolo_5F_lexique_implements [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$incf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_incf [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$include$'
static const utf32 kUnicodeString_piccolo_5F_lexique_include [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$inline$'
static const utf32 kUnicodeString_piccolo_5F_lexique_inline [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$interrupt$'
static const utf32 kUnicodeString_piccolo_5F_lexique_interrupt [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$iorlw$'
static const utf32 kUnicodeString_piccolo_5F_lexique_iorlw [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$iorwf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_iorwf [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$jsr$'
static const utf32 kUnicodeString_piccolo_5F_lexique_jsr [] = {
  TO_UNICODE ('j'),
  TO_UNICODE ('s'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$jump$'
static const utf32 kUnicodeString_piccolo_5F_lexique_jump [] = {
  TO_UNICODE ('j'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ldata_31__36_ptr$'
static const utf32 kUnicodeString_piccolo_5F_lexique_ldata_31__36_ptr [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('1'),
  TO_UNICODE ('6'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ldata_38_ptr$'
static const utf32 kUnicodeString_piccolo_5F_lexique_ldata_38_ptr [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('8'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ldataptr$'
static const utf32 kUnicodeString_piccolo_5F_lexique_ldataptr [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$lfsr$'
static const utf32 kUnicodeString_piccolo_5F_lexique_lfsr [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE ('s'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ltblptr$'
static const utf32 kUnicodeString_piccolo_5F_lexique_ltblptr [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$macro$'
static const utf32 kUnicodeString_piccolo_5F_lexique_macro [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$midrange$'
static const utf32 kUnicodeString_piccolo_5F_lexique_midrange [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mnop$'
static const utf32 kUnicodeString_piccolo_5F_lexique_mnop [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$movf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_movf [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$movff$'
static const utf32 kUnicodeString_piccolo_5F_lexique_movff [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('f'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$movlw$'
static const utf32 kUnicodeString_piccolo_5F_lexique_movlw [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$movwf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_movwf [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mullw$'
static const utf32 kUnicodeString_piccolo_5F_lexique_mullw [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mulwf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_mulwf [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$negf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_negf [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$nobank$'
static const utf32 kUnicodeString_piccolo_5F_lexique_nobank [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$nop$'
static const utf32 kUnicodeString_piccolo_5F_lexique_nop [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$nopbra$'
static const utf32 kUnicodeString_piccolo_5F_lexique_nopbra [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('b'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$noreturn$'
static const utf32 kUnicodeString_piccolo_5F_lexique_noreturn [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$option$'
static const utf32 kUnicodeString_piccolo_5F_lexique_option [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$page$'
static const utf32 kUnicodeString_piccolo_5F_lexique_page [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$pic_31__38_$'
static const utf32 kUnicodeString_piccolo_5F_lexique_pic_31__38_ [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('1'),
  TO_UNICODE ('8'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$pop$'
static const utf32 kUnicodeString_piccolo_5F_lexique_pop [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$preserved$'
static const utf32 kUnicodeString_piccolo_5F_lexique_preserved [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$private$'
static const utf32 kUnicodeString_piccolo_5F_lexique_private [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$protected$'
static const utf32 kUnicodeString_piccolo_5F_lexique_protected [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$push$'
static const utf32 kUnicodeString_piccolo_5F_lexique_push [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ram$'
static const utf32 kUnicodeString_piccolo_5F_lexique_ram [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rcall$'
static const utf32 kUnicodeString_piccolo_5F_lexique_rcall [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$requires$'
static const utf32 kUnicodeString_piccolo_5F_lexique_requires [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$reset$'
static const utf32 kUnicodeString_piccolo_5F_lexique_reset [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$retlw$'
static const utf32 kUnicodeString_piccolo_5F_lexique_retlw [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rlcf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_rlcf [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('l'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rlf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_rlf [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rlncf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_rlncf [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('l'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rom$'
static const utf32 kUnicodeString_piccolo_5F_lexique_rom [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$routine$'
static const utf32 kUnicodeString_piccolo_5F_lexique_routine [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rrcf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_rrcf [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rrf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_rrf [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rrncf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_rrncf [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$setf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_setf [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sleep$'
static const utf32 kUnicodeString_piccolo_5F_lexique_sleep [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$subfwb$'
static const utf32 kUnicodeString_piccolo_5F_lexique_subfwb [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('f'),
  TO_UNICODE ('w'),
  TO_UNICODE ('b'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sublw$'
static const utf32 kUnicodeString_piccolo_5F_lexique_sublw [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$subwf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_subwf [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$subwfb$'
static const utf32 kUnicodeString_piccolo_5F_lexique_subwfb [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE ('b'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$swapf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_swapf [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$switch$'
static const utf32 kUnicodeString_piccolo_5F_lexique_switch [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tblrd$'
static const utf32 kUnicodeString_piccolo_5F_lexique_tblrd [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tblwt$'
static const utf32 kUnicodeString_piccolo_5F_lexique_tblwt [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tris$'
static const utf32 kUnicodeString_piccolo_5F_lexique_tris [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$unused$'
static const utf32 kUnicodeString_piccolo_5F_lexique_unused [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$uses$'
static const utf32 kUnicodeString_piccolo_5F_lexique_uses [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$w$'
static const utf32 kUnicodeString_piccolo_5F_lexique_w [] = {
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$while$'
static const utf32 kUnicodeString_piccolo_5F_lexique_while [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$xorlw$'
static const utf32 kUnicodeString_piccolo_5F_lexique_xorlw [] = {
  TO_UNICODE ('x'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$xorwf$'
static const utf32 kUnicodeString_piccolo_5F_lexique_xorwf [] = {
  TO_UNICODE ('x'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_piccolo_5F_lexique__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'controlKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccolo_5F_lexique_controlKeyWordList = 48 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_controlKeyWordList [ktable_size_piccolo_5F_lexique_controlKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_w, 1, Lexique_piccolo_5F_lexique::kToken_w),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_do, 2, Lexique_piccolo_5F_lexique::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_if, 2, Lexique_piccolo_5F_lexique::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_end, 3, Lexique_piccolo_5F_lexique::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ram, 3, Lexique_piccolo_5F_lexique::kToken_ram),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rom, 3, Lexique_piccolo_5F_lexique::kToken_rom),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bank, 4, Lexique_piccolo_5F_lexique::kToken_bank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_byte, 4, Lexique_piccolo_5F_lexique::kToken_byte),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_case, 4, Lexique_piccolo_5F_lexique::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_data, 4, Lexique_piccolo_5F_lexique::kToken_data),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_else, 4, Lexique_piccolo_5F_lexique::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_fast, 4, Lexique_piccolo_5F_lexique::kToken_fast),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_page, 4, Lexique_piccolo_5F_lexique::kToken_page),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_uses, 4, Lexique_piccolo_5F_lexique::kToken_uses),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_block, 5, Lexique_piccolo_5F_lexique::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_const, 5, Lexique_piccolo_5F_lexique::kToken_const),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_data_38_, 5, Lexique_piccolo_5F_lexique::kToken_data_38_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_elsif, 5, Lexique_piccolo_5F_lexique::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_macro, 5, Lexique_piccolo_5F_lexique::kToken_macro),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_pic_31__38_, 5, Lexique_piccolo_5F_lexique::kToken_pic_31__38_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_while, 5, Lexique_piccolo_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_data_31__36_, 6, Lexique_piccolo_5F_lexique::kToken_data_31__36_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_inline, 6, Lexique_piccolo_5F_lexique::kToken_inline),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nobank, 6, Lexique_piccolo_5F_lexique::kToken_nobank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_switch, 6, Lexique_piccolo_5F_lexique::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_unused, 6, Lexique_piccolo_5F_lexique::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_banksel, 7, Lexique_piccolo_5F_lexique::kToken_banksel),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ensures, 7, Lexique_piccolo_5F_lexique::kToken_ensures),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_forever, 7, Lexique_piccolo_5F_lexique::kToken_forever),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_include, 7, Lexique_piccolo_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_private, 7, Lexique_piccolo_5F_lexique::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_routine, 7, Lexique_piccolo_5F_lexique::kToken_routine),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_banksave, 8, Lexique_piccolo_5F_lexique::kToken_banksave),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_baseline, 8, Lexique_piccolo_5F_lexique::kToken_baseline),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checkpic, 8, Lexique_piccolo_5F_lexique::kToken_checkpic),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_computed, 8, Lexique_piccolo_5F_lexique::kToken_computed),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_midrange, 8, Lexique_piccolo_5F_lexique::kToken_midrange),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_noreturn, 8, Lexique_piccolo_5F_lexique::kToken_noreturn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_requires, 8, Lexique_piccolo_5F_lexique::kToken_requires),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checkbank, 9, Lexique_piccolo_5F_lexique::kToken_checkbank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_interrupt, 9, Lexique_piccolo_5F_lexique::kToken_interrupt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_preserved, 9, Lexique_piccolo_5F_lexique::kToken_preserved),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_protected, 9, Lexique_piccolo_5F_lexique::kToken_protected),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bootloader, 10, Lexique_piccolo_5F_lexique::kToken_bootloader),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_implements, 10, Lexique_piccolo_5F_lexique::kToken_implements),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checknobank, 11, Lexique_piccolo_5F_lexique::kToken_checknobank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_contextsave, 11, Lexique_piccolo_5F_lexique::kToken_contextsave),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_configuration, 13, Lexique_piccolo_5F_lexique::kToken_configuration)
} ;

int32_t Lexique_piccolo_5F_lexique::search_into_controlKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_controlKeyWordList, ktable_size_piccolo_5F_lexique_controlKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccolo_5F_lexique_delimitorsList = 34 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_delimitorsList [ktable_size_piccolo_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__21_, 1, Lexique_piccolo_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__25_, 1, Lexique_piccolo_5F_lexique::kToken__25_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__26_, 1, Lexique_piccolo_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__28_, 1, Lexique_piccolo_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__29_, 1, Lexique_piccolo_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A_, 1, Lexique_piccolo_5F_lexique::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2B_, 1, Lexique_piccolo_5F_lexique::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2C_, 1, Lexique_piccolo_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2D_, 1, Lexique_piccolo_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2E_, 1, Lexique_piccolo_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2F_, 1, Lexique_piccolo_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3A_, 1, Lexique_piccolo_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3B_, 1, Lexique_piccolo_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C_, 1, Lexique_piccolo_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3D_, 1, Lexique_piccolo_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E_, 1, Lexique_piccolo_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3F_, 1, Lexique_piccolo_5F_lexique::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5B_, 1, Lexique_piccolo_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5D_, 1, Lexique_piccolo_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5E_, 1, Lexique_piccolo_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7B_, 1, Lexique_piccolo_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7C_, 1, Lexique_piccolo_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7D_, 1, Lexique_piccolo_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7E_, 1, Lexique_piccolo_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__21__3D_, 2, Lexique_piccolo_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A__2B_, 2, Lexique_piccolo_5F_lexique::kToken__2A__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A__2D_, 2, Lexique_piccolo_5F_lexique::kToken__2A__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2B__2A_, 2, Lexique_piccolo_5F_lexique::kToken__2B__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C__3C_, 2, Lexique_piccolo_5F_lexique::kToken__3C__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C__3D_, 2, Lexique_piccolo_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3D__3D_, 2, Lexique_piccolo_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E__3D_, 2, Lexique_piccolo_5F_lexique::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E__3E_, 2, Lexique_piccolo_5F_lexique::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2E__2E__2E_, 3, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_)
} ;

int32_t Lexique_piccolo_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_delimitorsList, ktable_size_piccolo_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'instructionKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccolo_5F_lexique_instructionKeyWordList = 70 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_instructionKeyWordList [ktable_size_piccolo_5F_lexique_instructionKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bc, 2, Lexique_piccolo_5F_lexique::kToken_bc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bn, 2, Lexique_piccolo_5F_lexique::kToken_bn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bz, 2, Lexique_piccolo_5F_lexique::kToken_bz),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bcf, 3, Lexique_piccolo_5F_lexique::kToken_bcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnc, 3, Lexique_piccolo_5F_lexique::kToken_bnc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnn, 3, Lexique_piccolo_5F_lexique::kToken_bnn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnz, 3, Lexique_piccolo_5F_lexique::kToken_bnz),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bov, 3, Lexique_piccolo_5F_lexique::kToken_bov),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bra, 3, Lexique_piccolo_5F_lexique::kToken_bra),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bsf, 3, Lexique_piccolo_5F_lexique::kToken_bsf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_btg, 3, Lexique_piccolo_5F_lexique::kToken_btg),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_daw, 3, Lexique_piccolo_5F_lexique::kToken_daw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_jsr, 3, Lexique_piccolo_5F_lexique::kToken_jsr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nop, 3, Lexique_piccolo_5F_lexique::kToken_nop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_pop, 3, Lexique_piccolo_5F_lexique::kToken_pop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlf, 3, Lexique_piccolo_5F_lexique::kToken_rlf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrf, 3, Lexique_piccolo_5F_lexique::kToken_rrf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnov, 4, Lexique_piccolo_5F_lexique::kToken_bnov),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_call, 4, Lexique_piccolo_5F_lexique::kToken_call),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrf, 4, Lexique_piccolo_5F_lexique::kToken_clrf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrw, 4, Lexique_piccolo_5F_lexique::kToken_clrw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_comf, 4, Lexique_piccolo_5F_lexique::kToken_comf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_decf, 4, Lexique_piccolo_5F_lexique::kToken_decf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_fnop, 4, Lexique_piccolo_5F_lexique::kToken_fnop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_goto, 4, Lexique_piccolo_5F_lexique::kToken_goto),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_incf, 4, Lexique_piccolo_5F_lexique::kToken_incf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_jump, 4, Lexique_piccolo_5F_lexique::kToken_jump),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_lfsr, 4, Lexique_piccolo_5F_lexique::kToken_lfsr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mnop, 4, Lexique_piccolo_5F_lexique::kToken_mnop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movf, 4, Lexique_piccolo_5F_lexique::kToken_movf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_negf, 4, Lexique_piccolo_5F_lexique::kToken_negf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_push, 4, Lexique_piccolo_5F_lexique::kToken_push),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlcf, 4, Lexique_piccolo_5F_lexique::kToken_rlcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrcf, 4, Lexique_piccolo_5F_lexique::kToken_rrcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_setf, 4, Lexique_piccolo_5F_lexique::kToken_setf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tris, 4, Lexique_piccolo_5F_lexique::kToken_tris),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addlw, 5, Lexique_piccolo_5F_lexique::kToken_addlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addwf, 5, Lexique_piccolo_5F_lexique::kToken_addwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_andlw, 5, Lexique_piccolo_5F_lexique::kToken_andlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_andwf, 5, Lexique_piccolo_5F_lexique::kToken_andwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_iorlw, 5, Lexique_piccolo_5F_lexique::kToken_iorlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_iorwf, 5, Lexique_piccolo_5F_lexique::kToken_iorwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movff, 5, Lexique_piccolo_5F_lexique::kToken_movff),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movlw, 5, Lexique_piccolo_5F_lexique::kToken_movlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movwf, 5, Lexique_piccolo_5F_lexique::kToken_movwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mullw, 5, Lexique_piccolo_5F_lexique::kToken_mullw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mulwf, 5, Lexique_piccolo_5F_lexique::kToken_mulwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rcall, 5, Lexique_piccolo_5F_lexique::kToken_rcall),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_reset, 5, Lexique_piccolo_5F_lexique::kToken_reset),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_retlw, 5, Lexique_piccolo_5F_lexique::kToken_retlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlncf, 5, Lexique_piccolo_5F_lexique::kToken_rlncf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrncf, 5, Lexique_piccolo_5F_lexique::kToken_rrncf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_sleep, 5, Lexique_piccolo_5F_lexique::kToken_sleep),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_sublw, 5, Lexique_piccolo_5F_lexique::kToken_sublw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subwf, 5, Lexique_piccolo_5F_lexique::kToken_subwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_swapf, 5, Lexique_piccolo_5F_lexique::kToken_swapf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tblrd, 5, Lexique_piccolo_5F_lexique::kToken_tblrd),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tblwt, 5, Lexique_piccolo_5F_lexique::kToken_tblwt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_xorlw, 5, Lexique_piccolo_5F_lexique::kToken_xorlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_xorwf, 5, Lexique_piccolo_5F_lexique::kToken_xorwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addwfc, 6, Lexique_piccolo_5F_lexique::kToken_addwfc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrwdt, 6, Lexique_piccolo_5F_lexique::kToken_clrwdt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nopbra, 6, Lexique_piccolo_5F_lexique::kToken_nopbra),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_option, 6, Lexique_piccolo_5F_lexique::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subfwb, 6, Lexique_piccolo_5F_lexique::kToken_subfwb),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subwfb, 6, Lexique_piccolo_5F_lexique::kToken_subwfb),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ltblptr, 7, Lexique_piccolo_5F_lexique::kToken_ltblptr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ldataptr, 8, Lexique_piccolo_5F_lexique::kToken_ldataptr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ldata_38_ptr, 9, Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ldata_31__36_ptr, 10, Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr)
} ;

int32_t Lexique_piccolo_5F_lexique::search_into_instructionKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_instructionKeyWordList, ktable_size_piccolo_5F_lexique_instructionKeyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_piccolo_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_piccolo_5F_lexique * ptr = (const cTokenFor_piccolo_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.addString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.addString ("$$") ;
      break ;
    case kToken_identifier:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("identifier") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_label:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("label") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("integer") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_char:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("literal_char") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addUnicodeChar (ptr->mLexicalAttribute_charValue COMMA_HERE) ;
      break ;
    case kToken_literal_5F_string:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("literal_string") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("comment") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_commentMark:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("commentMark") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bank:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bank") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_banksave:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("banksave") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_banksel:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("banksel") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_baseline:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("baseline") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_block:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("block") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bootloader:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bootloader") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_byte:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("byte") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_case:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("case") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_checkbank:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("checkbank") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_checknobank:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("checknobank") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_checkpic:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("checkpic") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_computed:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("computed") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_configuration:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("configuration") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_const:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("const") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_contextsave:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("contextsave") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_data:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("data") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_data_31__36_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("data16") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_data_38_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("data8") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_do:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("do") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_end:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("end") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_else:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("else") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_elsif:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("elsif") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ensures:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("ensures") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_fast:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("fast") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_forever:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("forever") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_if:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("if") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_implements:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("implements") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_include:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("include") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_inline:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("inline") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_interrupt:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("interrupt") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_macro:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("macro") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_midrange:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("midrange") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nobank:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("nobank") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_noreturn:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("noreturn") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_page:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("page") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_pic_31__38_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("pic18") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_preserved:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("preserved") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_protected:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("protected") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_private:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("private") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ram:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("ram") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_requires:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("requires") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rom:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("rom") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_routine:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("routine") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_switch:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("switch") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_unused:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("unused") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_uses:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("uses") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_w:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("w") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_while:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("while") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_addlw:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("addlw") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_addwf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("addwf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_addwfc:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("addwfc") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_andlw:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("andlw") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_andwf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("andwf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bc:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bc") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bcf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bcf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bn:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bn") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bnc:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bnc") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bnn:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bnn") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bov:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bov") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bnov:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bnov") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bnz:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bnz") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bsf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bsf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bra:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bra") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_btg:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("btg") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bz:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bz") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_call:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("call") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_clrf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("clrf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_clrw:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("clrw") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_clrwdt:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("clrwdt") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_comf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("comf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_daw:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("daw") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_decf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("decf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_incf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("incf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_iorlw:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("iorlw") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_iorwf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("iorwf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_fnop:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("fnop") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_goto:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("goto") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_jsr:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("jsr") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_jump:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("jump") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_lfsr:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("lfsr") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ldataptr:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("ldataptr") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ldata_38_ptr:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("ldata8ptr") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ldata_31__36_ptr:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("ldata16ptr") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ltblptr:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("ltblptr") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mnop:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("mnop") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_movf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("movf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_movff:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("movff") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_movlw:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("movlw") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_movwf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("movwf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mullw:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("mullw") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mulwf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("mulwf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_negf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("negf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nop:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("nop") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nopbra:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("nopbra") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_pop:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("pop") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_option:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("option") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_push:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("push") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rcall:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("rcall") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_reset:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("reset") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_retlw:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("retlw") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rlcf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("rlcf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rlf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("rlf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rlncf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("rlncf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rrcf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("rrcf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rrf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("rrf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rrncf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("rrncf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_setf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("setf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sleep:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("sleep") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_subfwb:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("subfwb") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sublw:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("sublw") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_subwf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("subwf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_subwfb:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("subwfb") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_swapf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("swapf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tblrd:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("tblrd") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tblwt:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("tblwt") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tris:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("tris") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_xorlw:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("xorlw") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_xorwf:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("xorwf") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("*") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__2B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("*+") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (",") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("!=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("<=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (">=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__2D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("*-") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__2A_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("+*") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (";") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (":") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("==") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("<") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (">") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("[") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("]") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (".") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("!") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("&") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("|") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("{") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("}") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("(") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (")") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("/") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("-") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("+") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("\?") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("^") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("<<") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (">>") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("~") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E__2E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("...") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_piccolo_5F_lexique::internalParseLexicalToken (cTokenFor_piccolo_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_charValue = TO_UNICODE (0) ;
  token.mLexicalAttribute_identifierString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForCharWithFunction (isUnicodeLetter)) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_instructionKeyWordList (token.mLexicalAttribute_identifierString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_controlKeyWordList (token.mLexicalAttribute_identifierString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_label ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__30_x, 2, true)) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        }else if (testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_hexNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__30_b, 2, true)) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('1'))) {
          ::scanner_routine_enterBinDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_binNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
      ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
      if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
        if (testForInputUTF32Char (TO_UNICODE ('f'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\f')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\n')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\r')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\t')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\v')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\\')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('0'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\0')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\'')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('x')) || testForInputUTF32Char (TO_UNICODE ('X'))) {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            do {
              ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_piccolo_5F_lexique_ASCIIcodeTooLargeError, gLexicalMessage_piccolo_5F_lexique_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
          }else{
            lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else{
          lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE (' '), TO_UNICODE ('~'))) {
        ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
      }else{
        lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (TO_UNICODE ('\''))) {
        token.mTokenCode = kToken_literal_5F_char ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2E__2E__2E_, 3, true)) {
      token.mTokenCode = kToken__2E__2E__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3E__3E_, 2, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3E__3D_, 2, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3D__3D_, 2, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3C__3D_, 2, true)) {
      token.mTokenCode = kToken__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3C__3C_, 2, true)) {
      token.mTokenCode = kToken__3C__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2B__2A_, 2, true)) {
      token.mTokenCode = kToken__2B__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2A__2D_, 2, true)) {
      token.mTokenCode = kToken__2A__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2A__2B_, 2, true)) {
      token.mTokenCode = kToken__2A__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__21__3D_, 2, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7E_, 1, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7D_, 1, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7C_, 1, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7B_, 1, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__5E_, 1, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__5D_, 1, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__5B_, 1, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3F_, 1, true)) {
      token.mTokenCode = kToken__3F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3E_, 1, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3D_, 1, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3C_, 1, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3B_, 1, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3A_, 1, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2F_, 1, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2E_, 1, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2D_, 1, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2C_, 1, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2B_, 1, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2A_, 1, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__29_, 1, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__28_, 1, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__26_, 1, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__25_, 1, true)) {
      token.mTokenCode = kToken__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__21_, 1, true)) {
      token.mTokenCode = kToken__21_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
      do {
        if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
          if (testForInputUTF32Char (TO_UNICODE ('f'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\f')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\n')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\r')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\t')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\v')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('0'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\0')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\"')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\'')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            do {
              ::scanner_routine_enterHexDigitIntoASCIIcharacter (*this, token.mLexicalAttribute_charValue, previousChar (), gLexicalMessage_piccolo_5F_lexique_ASCIIcodeTooLargeError, gLexicalMessage_piccolo_5F_lexique_internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              }else{
                loop = false ;
              }
            }while (loop) ;
            loop = true ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
          }else{
            lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE ('~'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        token.mTokenCode = kToken_literal_5F_string ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
      if (testForInputUTF32Char (TO_UNICODE ('!'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_commentMark) ;
      }else{
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }
    }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
    }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_piccolo_5F_lexique::parseLexicalToken (void) {
  cTokenFor_piccolo_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_piccolo_5F_lexique::enterToken (cTokenFor_piccolo_5F_lexique & ioToken) {
  cTokenFor_piccolo_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_piccolo_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_charValue = ioToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

utf32 Lexique_piccolo_5F_lexique::attributeValue_charValue (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_piccolo_5F_lexique::attributeValue_identifierString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_piccolo_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_piccolo_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GALGAS_lchar Lexique_piccolo_5F_lexique::synthetizedAttribute_charValue (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring Lexique_piccolo_5F_lexique::synthetizedAttribute_identifierString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring Lexique_piccolo_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint Lexique_piccolo_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist Lexique_piccolo_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::class_func_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("label") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("integer") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("literal_char") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bank") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("banksave") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("banksel") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("baseline") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bootloader") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("byte") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("checkbank") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("checknobank") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("checkpic") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("computed") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("configuration") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("const") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("contextsave") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("data") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("data16") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("data8") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("end") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("elsif") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("ensures") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("fast") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("forever") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("implements") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("inline") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("interrupt") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("macro") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("midrange") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("nobank") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("noreturn") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("page") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("pic18") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("preserved") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("protected") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("private") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("ram") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("requires") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rom") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("routine") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("uses") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("w") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("addlw") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("addwf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("addwfc") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("andlw") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("andwf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bc") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bcf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bn") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bnc") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bnn") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bov") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bnov") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bnz") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bsf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bra") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("btg") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bz") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("call") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("clrf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("clrw") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("clrwdt") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("comf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("daw") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("decf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("incf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("iorlw") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("iorwf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("fnop") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("goto") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("jsr") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("jump") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("lfsr") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("ldataptr") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("ldata8ptr") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("ldata16ptr") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("ltblptr") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mnop") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("movf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("movff") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("movlw") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("movwf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mullw") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mulwf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("negf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("nop") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("nopbra") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("pop") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("push") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rcall") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("reset") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("retlw") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rlcf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rlf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rlncf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rrcf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rrf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rrncf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("setf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("sleep") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("subfwb") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("sublw") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("subwf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("subwfb") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("swapf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("tblrd") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("tblwt") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("tris") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("xorlw") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("xorwf") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*+") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*-") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+*") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_piccolo_5F_lexique (TC_UniqueArray <String> & ioList) {
  ioList.appendObject ("piccolo_lexique:controlKeyWordList") ;
  ioList.appendObject ("piccolo_lexique:delimitorsList") ;
  ioList.appendObject ("piccolo_lexique:instructionKeyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_piccolo_5F_lexique (const String & inIdentifier,
                                                         bool & ioFound,
                                                         TC_UniqueArray <String> & ioList) {
  if (inIdentifier == "piccolo_lexique:controlKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("w") ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("end") ;
    ioList.appendObject ("ram") ;
    ioList.appendObject ("rom") ;
    ioList.appendObject ("bank") ;
    ioList.appendObject ("byte") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("data") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("fast") ;
    ioList.appendObject ("page") ;
    ioList.appendObject ("uses") ;
    ioList.appendObject ("block") ;
    ioList.appendObject ("const") ;
    ioList.appendObject ("data8") ;
    ioList.appendObject ("elsif") ;
    ioList.appendObject ("macro") ;
    ioList.appendObject ("pic18") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("data16") ;
    ioList.appendObject ("inline") ;
    ioList.appendObject ("nobank") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("unused") ;
    ioList.appendObject ("banksel") ;
    ioList.appendObject ("ensures") ;
    ioList.appendObject ("forever") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("private") ;
    ioList.appendObject ("routine") ;
    ioList.appendObject ("banksave") ;
    ioList.appendObject ("baseline") ;
    ioList.appendObject ("checkpic") ;
    ioList.appendObject ("computed") ;
    ioList.appendObject ("midrange") ;
    ioList.appendObject ("noreturn") ;
    ioList.appendObject ("requires") ;
    ioList.appendObject ("checkbank") ;
    ioList.appendObject ("interrupt") ;
    ioList.appendObject ("preserved") ;
    ioList.appendObject ("protected") ;
    ioList.appendObject ("bootloader") ;
    ioList.appendObject ("implements") ;
    ioList.appendObject ("checknobank") ;
    ioList.appendObject ("contextsave") ;
    ioList.appendObject ("configuration") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "piccolo_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("!") ;
    ioList.appendObject ("%") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject (".") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("<") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("\?") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("*+") ;
    ioList.appendObject ("*-") ;
    ioList.appendObject ("+*") ;
    ioList.appendObject ("<<") ;
    ioList.appendObject ("<=") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("...") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "piccolo_lexique:instructionKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("bc") ;
    ioList.appendObject ("bn") ;
    ioList.appendObject ("bz") ;
    ioList.appendObject ("bcf") ;
    ioList.appendObject ("bnc") ;
    ioList.appendObject ("bnn") ;
    ioList.appendObject ("bnz") ;
    ioList.appendObject ("bov") ;
    ioList.appendObject ("bra") ;
    ioList.appendObject ("bsf") ;
    ioList.appendObject ("btg") ;
    ioList.appendObject ("daw") ;
    ioList.appendObject ("jsr") ;
    ioList.appendObject ("nop") ;
    ioList.appendObject ("pop") ;
    ioList.appendObject ("rlf") ;
    ioList.appendObject ("rrf") ;
    ioList.appendObject ("bnov") ;
    ioList.appendObject ("call") ;
    ioList.appendObject ("clrf") ;
    ioList.appendObject ("clrw") ;
    ioList.appendObject ("comf") ;
    ioList.appendObject ("decf") ;
    ioList.appendObject ("fnop") ;
    ioList.appendObject ("goto") ;
    ioList.appendObject ("incf") ;
    ioList.appendObject ("jump") ;
    ioList.appendObject ("lfsr") ;
    ioList.appendObject ("mnop") ;
    ioList.appendObject ("movf") ;
    ioList.appendObject ("negf") ;
    ioList.appendObject ("push") ;
    ioList.appendObject ("rlcf") ;
    ioList.appendObject ("rrcf") ;
    ioList.appendObject ("setf") ;
    ioList.appendObject ("tris") ;
    ioList.appendObject ("addlw") ;
    ioList.appendObject ("addwf") ;
    ioList.appendObject ("andlw") ;
    ioList.appendObject ("andwf") ;
    ioList.appendObject ("iorlw") ;
    ioList.appendObject ("iorwf") ;
    ioList.appendObject ("movff") ;
    ioList.appendObject ("movlw") ;
    ioList.appendObject ("movwf") ;
    ioList.appendObject ("mullw") ;
    ioList.appendObject ("mulwf") ;
    ioList.appendObject ("rcall") ;
    ioList.appendObject ("reset") ;
    ioList.appendObject ("retlw") ;
    ioList.appendObject ("rlncf") ;
    ioList.appendObject ("rrncf") ;
    ioList.appendObject ("sleep") ;
    ioList.appendObject ("sublw") ;
    ioList.appendObject ("subwf") ;
    ioList.appendObject ("swapf") ;
    ioList.appendObject ("tblrd") ;
    ioList.appendObject ("tblwt") ;
    ioList.appendObject ("xorlw") ;
    ioList.appendObject ("xorwf") ;
    ioList.appendObject ("addwfc") ;
    ioList.appendObject ("clrwdt") ;
    ioList.appendObject ("nopbra") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("subfwb") ;
    ioList.appendObject ("subwfb") ;
    ioList.appendObject ("ltblptr") ;
    ioList.appendObject ("ldataptr") ;
    ioList.appendObject ("ldata8ptr") ;
    ioList.appendObject ("ldata16ptr") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_piccolo_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_piccolo_5F_lexique, getKeywordsForIdentifier_piccolo_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_piccolo_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [160] = {0,
    0 /* piccolo_lexique_1_identifier */,
    8 /* piccolo_lexique_1_label */,
    4 /* piccolo_lexique_1_integer */,
    5 /* piccolo_lexique_1_literal_5F_char */,
    6 /* piccolo_lexique_1_literal_5F_string */,
    7 /* piccolo_lexique_1_comment */,
    7 /* piccolo_lexique_1_commentMark */,
    1 /* piccolo_lexique_1_bank */,
    1 /* piccolo_lexique_1_banksave */,
    1 /* piccolo_lexique_1_banksel */,
    1 /* piccolo_lexique_1_baseline */,
    1 /* piccolo_lexique_1_block */,
    1 /* piccolo_lexique_1_bootloader */,
    1 /* piccolo_lexique_1_byte */,
    1 /* piccolo_lexique_1_case */,
    1 /* piccolo_lexique_1_checkbank */,
    1 /* piccolo_lexique_1_checknobank */,
    1 /* piccolo_lexique_1_checkpic */,
    1 /* piccolo_lexique_1_computed */,
    1 /* piccolo_lexique_1_configuration */,
    1 /* piccolo_lexique_1_const */,
    1 /* piccolo_lexique_1_contextsave */,
    1 /* piccolo_lexique_1_data */,
    1 /* piccolo_lexique_1_data_31__36_ */,
    1 /* piccolo_lexique_1_data_38_ */,
    1 /* piccolo_lexique_1_do */,
    1 /* piccolo_lexique_1_end */,
    1 /* piccolo_lexique_1_else */,
    1 /* piccolo_lexique_1_elsif */,
    1 /* piccolo_lexique_1_ensures */,
    1 /* piccolo_lexique_1_fast */,
    1 /* piccolo_lexique_1_forever */,
    1 /* piccolo_lexique_1_if */,
    1 /* piccolo_lexique_1_implements */,
    1 /* piccolo_lexique_1_include */,
    1 /* piccolo_lexique_1_inline */,
    1 /* piccolo_lexique_1_interrupt */,
    1 /* piccolo_lexique_1_macro */,
    1 /* piccolo_lexique_1_midrange */,
    1 /* piccolo_lexique_1_nobank */,
    1 /* piccolo_lexique_1_noreturn */,
    1 /* piccolo_lexique_1_page */,
    1 /* piccolo_lexique_1_pic_31__38_ */,
    1 /* piccolo_lexique_1_preserved */,
    1 /* piccolo_lexique_1_protected */,
    1 /* piccolo_lexique_1_private */,
    1 /* piccolo_lexique_1_ram */,
    1 /* piccolo_lexique_1_requires */,
    1 /* piccolo_lexique_1_rom */,
    1 /* piccolo_lexique_1_routine */,
    1 /* piccolo_lexique_1_switch */,
    1 /* piccolo_lexique_1_unused */,
    1 /* piccolo_lexique_1_uses */,
    1 /* piccolo_lexique_1_w */,
    1 /* piccolo_lexique_1_while */,
    2 /* piccolo_lexique_1_addlw */,
    2 /* piccolo_lexique_1_addwf */,
    2 /* piccolo_lexique_1_addwfc */,
    2 /* piccolo_lexique_1_andlw */,
    2 /* piccolo_lexique_1_andwf */,
    2 /* piccolo_lexique_1_bc */,
    2 /* piccolo_lexique_1_bcf */,
    2 /* piccolo_lexique_1_bn */,
    2 /* piccolo_lexique_1_bnc */,
    2 /* piccolo_lexique_1_bnn */,
    2 /* piccolo_lexique_1_bov */,
    2 /* piccolo_lexique_1_bnov */,
    2 /* piccolo_lexique_1_bnz */,
    2 /* piccolo_lexique_1_bsf */,
    2 /* piccolo_lexique_1_bra */,
    2 /* piccolo_lexique_1_btg */,
    2 /* piccolo_lexique_1_bz */,
    2 /* piccolo_lexique_1_call */,
    2 /* piccolo_lexique_1_clrf */,
    2 /* piccolo_lexique_1_clrw */,
    2 /* piccolo_lexique_1_clrwdt */,
    2 /* piccolo_lexique_1_comf */,
    2 /* piccolo_lexique_1_daw */,
    2 /* piccolo_lexique_1_decf */,
    2 /* piccolo_lexique_1_incf */,
    2 /* piccolo_lexique_1_iorlw */,
    2 /* piccolo_lexique_1_iorwf */,
    2 /* piccolo_lexique_1_fnop */,
    2 /* piccolo_lexique_1_goto */,
    2 /* piccolo_lexique_1_jsr */,
    2 /* piccolo_lexique_1_jump */,
    2 /* piccolo_lexique_1_lfsr */,
    2 /* piccolo_lexique_1_ldataptr */,
    2 /* piccolo_lexique_1_ldata_38_ptr */,
    2 /* piccolo_lexique_1_ldata_31__36_ptr */,
    2 /* piccolo_lexique_1_ltblptr */,
    2 /* piccolo_lexique_1_mnop */,
    2 /* piccolo_lexique_1_movf */,
    2 /* piccolo_lexique_1_movff */,
    2 /* piccolo_lexique_1_movlw */,
    2 /* piccolo_lexique_1_movwf */,
    2 /* piccolo_lexique_1_mullw */,
    2 /* piccolo_lexique_1_mulwf */,
    2 /* piccolo_lexique_1_negf */,
    2 /* piccolo_lexique_1_nop */,
    2 /* piccolo_lexique_1_nopbra */,
    2 /* piccolo_lexique_1_pop */,
    2 /* piccolo_lexique_1_option */,
    2 /* piccolo_lexique_1_push */,
    2 /* piccolo_lexique_1_rcall */,
    2 /* piccolo_lexique_1_reset */,
    2 /* piccolo_lexique_1_retlw */,
    2 /* piccolo_lexique_1_rlcf */,
    2 /* piccolo_lexique_1_rlf */,
    2 /* piccolo_lexique_1_rlncf */,
    2 /* piccolo_lexique_1_rrcf */,
    2 /* piccolo_lexique_1_rrf */,
    2 /* piccolo_lexique_1_rrncf */,
    2 /* piccolo_lexique_1_setf */,
    2 /* piccolo_lexique_1_sleep */,
    2 /* piccolo_lexique_1_subfwb */,
    2 /* piccolo_lexique_1_sublw */,
    2 /* piccolo_lexique_1_subwf */,
    2 /* piccolo_lexique_1_subwfb */,
    2 /* piccolo_lexique_1_swapf */,
    2 /* piccolo_lexique_1_tblrd */,
    2 /* piccolo_lexique_1_tblwt */,
    2 /* piccolo_lexique_1_tris */,
    2 /* piccolo_lexique_1_xorlw */,
    2 /* piccolo_lexique_1_xorwf */,
    3 /* piccolo_lexique_1__2A_ */,
    3 /* piccolo_lexique_1__2A__2B_ */,
    3 /* piccolo_lexique_1__2C_ */,
    3 /* piccolo_lexique_1__21__3D_ */,
    3 /* piccolo_lexique_1__3C__3D_ */,
    3 /* piccolo_lexique_1__3E__3D_ */,
    3 /* piccolo_lexique_1__2A__2D_ */,
    3 /* piccolo_lexique_1__2B__2A_ */,
    3 /* piccolo_lexique_1__3B_ */,
    3 /* piccolo_lexique_1__3A_ */,
    3 /* piccolo_lexique_1__3D__3D_ */,
    3 /* piccolo_lexique_1__3C_ */,
    3 /* piccolo_lexique_1__3E_ */,
    3 /* piccolo_lexique_1__5B_ */,
    3 /* piccolo_lexique_1__5D_ */,
    3 /* piccolo_lexique_1__2E_ */,
    3 /* piccolo_lexique_1__21_ */,
    3 /* piccolo_lexique_1__26_ */,
    3 /* piccolo_lexique_1__7C_ */,
    3 /* piccolo_lexique_1__3D_ */,
    3 /* piccolo_lexique_1__7B_ */,
    3 /* piccolo_lexique_1__7D_ */,
    3 /* piccolo_lexique_1__28_ */,
    3 /* piccolo_lexique_1__29_ */,
    3 /* piccolo_lexique_1__2F_ */,
    3 /* piccolo_lexique_1__2D_ */,
    3 /* piccolo_lexique_1__2B_ */,
    3 /* piccolo_lexique_1__3F_ */,
    3 /* piccolo_lexique_1__5E_ */,
    3 /* piccolo_lexique_1__3C__3C_ */,
    3 /* piccolo_lexique_1__3E__3E_ */,
    3 /* piccolo_lexique_1__7E_ */,
    3 /* piccolo_lexique_1__25_ */,
    3 /* piccolo_lexique_1__2E__2E__2E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_piccolo_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 9) {
    static const char * kStyleArray [9] = {
      "",
      "keywordStyle",
      "instructionStyle",
      "delimitersStyle",
      "integerStyle",
      "characterStyle",
      "stringStyle",
      "commentStyle",
      "labelStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_bitSliceTable::cMapElement_bitSliceTable (const GALGAS_lstring & inKey,
                                                      const GALGAS_uint & in_mSliceIndex,
                                                      const GALGAS_uint & in_mSliceSize
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSliceIndex (in_mSliceIndex),
mProperty_mSliceSize (in_mSliceSize) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_bitSliceTable::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_bitSliceTable::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_bitSliceTable (mProperty_lkey, mProperty_mSliceIndex, mProperty_mSliceSize COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_bitSliceTable::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSliceIndex" ":") ;
  mProperty_mSliceIndex.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSliceSize" ":") ;
  mProperty_mSliceSize.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_bitSliceTable::compare (const cCollectionElement * inOperand) const {
  cMapElement_bitSliceTable * operand = (cMapElement_bitSliceTable *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSliceIndex.objectCompare (operand->mProperty_mSliceIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSliceSize.objectCompare (operand->mProperty_mSliceSize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable::GALGAS_bitSliceTable (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable::GALGAS_bitSliceTable (const GALGAS_bitSliceTable & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable & GALGAS_bitSliceTable::operator = (const GALGAS_bitSliceTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_bitSliceTable::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_bitSliceTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_bitSliceTable::class_func_mapWithMapToOverride (const GALGAS_bitSliceTable & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bitSliceTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_bitSliceTable::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_bitSliceTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitSliceTable::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_uint & inArgument0,
                                                const GALGAS_uint & inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_bitSliceTable * p = nullptr ;
  macroMyNew (p, cMapElement_bitSliceTable (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@bitSliceTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_bitSliceTable::add_operation (const GALGAS_bitSliceTable & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_bitSliceTable result = *this ;
  cEnumerator_bitSliceTable enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSliceIndex (HERE), enumerator.current_mSliceSize (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitSliceTable::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_uint inArgument0,
                                             GALGAS_uint inArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_bitSliceTable * p = nullptr ;
  macroMyNew (p, cMapElement_bitSliceTable (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' slice is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_bitSliceTable_searchKey = "the '%K' slice is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_bitSliceTable::method_searchKey (GALGAS_lstring inKey,
                                             GALGAS_uint & outArgument0,
                                             GALGAS_uint & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_bitSliceTable_searchKey
                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    outArgument0 = p->mProperty_mSliceIndex ;
    outArgument1 = p->mProperty_mSliceSize ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_bitSliceTable::getter_mSliceIndexForKey (const GALGAS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    result = p->mProperty_mSliceIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_bitSliceTable::getter_mSliceSizeForKey (const GALGAS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    result = p->mProperty_mSliceSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitSliceTable::setter_setMSliceIndexForKey (GALGAS_uint inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_bitSliceTable * p = (cMapElement_bitSliceTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    p->mProperty_mSliceIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitSliceTable::setter_setMSliceSizeForKey (GALGAS_uint inAttributeValue,
                                                       GALGAS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_bitSliceTable * p = (cMapElement_bitSliceTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    p->mProperty_mSliceSize = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_bitSliceTable * GALGAS_bitSliceTable::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_bitSliceTable * result = (cMapElement_bitSliceTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_bitSliceTable) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_bitSliceTable::cEnumerator_bitSliceTable (const GALGAS_bitSliceTable & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element cEnumerator_bitSliceTable::current (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return GALGAS_bitSliceTable_2D_element (p->mProperty_lkey, p->mProperty_mSliceIndex, p->mProperty_mSliceSize) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_bitSliceTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_bitSliceTable::current_mSliceIndex (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return p->mProperty_mSliceIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_bitSliceTable::current_mSliceSize (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return p->mProperty_mSliceSize ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bitSliceTable::optional_searchKey (const GALGAS_string & inKey,
                                               GALGAS_uint & outArgument0,
                                               GALGAS_uint & outArgument1) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    outArgument0 = p->mProperty_mSliceIndex ;
    outArgument1 = p->mProperty_mSliceSize ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bitSliceTable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitSliceTable ("bitSliceTable",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitSliceTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitSliceTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitSliceTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable GALGAS_bitSliceTable::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bitSliceTable result ;
  const GALGAS_bitSliceTable * p = (const GALGAS_bitSliceTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitSliceTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitSliceTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_immediatExpression::objectCompare (const GALGAS_immediatExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression::GALGAS_immediatExpression (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression::GALGAS_immediatExpression (const cPtr_immediatExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatExpression class
//--------------------------------------------------------------------------------------------------

cPtr_immediatExpression::cPtr_immediatExpression (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpression ("immediatExpression",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatExpression::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatExpression result ;
  const GALGAS_immediatExpression * p = (const GALGAS_immediatExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_registerExpression_2D_weak::objectCompare (const GALGAS_registerExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression_2D_weak::GALGAS_registerExpression_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression_2D_weak & GALGAS_registerExpression_2D_weak::operator = (const GALGAS_registerExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression_2D_weak::GALGAS_registerExpression_2D_weak (const GALGAS_registerExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression_2D_weak GALGAS_registerExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_registerExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_registerExpression_2D_weak::bang_registerExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_registerExpression) ;
      result = GALGAS_registerExpression ((cPtr_registerExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerExpression_2D_weak ("registerExpression-weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerExpression_2D_weak GALGAS_registerExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerExpression_2D_weak result ;
  const GALGAS_registerExpression_2D_weak * p = (const GALGAS_registerExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @declarationInRam reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_declarationInRam::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_declarationInRam::objectCompare (const GALGAS_declarationInRam & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam::GALGAS_declarationInRam (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam::GALGAS_declarationInRam (const cPtr_declarationInRam * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_declarationInRam) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @declarationInRam class
//--------------------------------------------------------------------------------------------------

cPtr_declarationInRam::cPtr_declarationInRam (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @declarationInRam generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRam ("declarationInRam",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationInRam::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRam ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationInRam::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationInRam (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam GALGAS_declarationInRam::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_declarationInRam result ;
  const GALGAS_declarationInRam * p = (const GALGAS_declarationInRam *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declarationInRam *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRam", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_declarationInRam_2D_weak::objectCompare (const GALGAS_declarationInRam_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam_2D_weak::GALGAS_declarationInRam_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam_2D_weak & GALGAS_declarationInRam_2D_weak::operator = (const GALGAS_declarationInRam & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam_2D_weak::GALGAS_declarationInRam_2D_weak (const GALGAS_declarationInRam & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam_2D_weak GALGAS_declarationInRam_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_declarationInRam_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam GALGAS_declarationInRam_2D_weak::bang_declarationInRam_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_declarationInRam result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_declarationInRam) ;
      result = GALGAS_declarationInRam ((cPtr_declarationInRam *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declarationInRam-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRam_2D_weak ("declarationInRam-weak",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationInRam_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRam_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationInRam_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationInRam_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam_2D_weak GALGAS_declarationInRam_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_declarationInRam_2D_weak result ;
  const GALGAS_declarationInRam_2D_weak * p = (const GALGAS_declarationInRam_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declarationInRam_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRam-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerProtection::GALGAS_registerProtection (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_registerProtection::class_func_publicRegister (UNUSED_LOCATION_ARGS) {
  GALGAS_registerProtection result ;
  result.mEnum = kEnum_publicRegister ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_registerProtection::class_func_protectedRegister (UNUSED_LOCATION_ARGS) {
  GALGAS_registerProtection result ;
  result.mEnum = kEnum_protectedRegister ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_registerProtection::class_func_privateRegister (UNUSED_LOCATION_ARGS) {
  GALGAS_registerProtection result ;
  result.mEnum = kEnum_privateRegister ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerProtection::optional_publicRegister () const {
  const bool ok = mEnum == kEnum_publicRegister ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerProtection::optional_protectedRegister () const {
  const bool ok = mEnum == kEnum_protectedRegister ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerProtection::optional_privateRegister () const {
  const bool ok = mEnum == kEnum_privateRegister ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerProtection [4] = {
  "(not built)",
  "publicRegister",
  "protectedRegister",
  "privateRegister"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerProtection::getter_isPublicRegister (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_publicRegister == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerProtection::getter_isProtectedRegister (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_protectedRegister == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_registerProtection::getter_isPrivateRegister (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_privateRegister == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerProtection::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @registerProtection: ") ;
  ioString.addString (gEnumNameArrayFor_registerProtection [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_registerProtection::objectCompare (const GALGAS_registerProtection & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerProtection generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerProtection ("registerProtection",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerProtection::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerProtection ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerProtection::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerProtection (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerProtection GALGAS_registerProtection::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerProtection result ;
  const GALGAS_registerProtection * p = (const GALGAS_registerProtection *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerProtection *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerProtection", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_byteDeclarationInRam_2D_weak::objectCompare (const GALGAS_byteDeclarationInRam_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam_2D_weak::GALGAS_byteDeclarationInRam_2D_weak (void) :
GALGAS_declarationInRam_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam_2D_weak & GALGAS_byteDeclarationInRam_2D_weak::operator = (const GALGAS_byteDeclarationInRam & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam_2D_weak::GALGAS_byteDeclarationInRam_2D_weak (const GALGAS_byteDeclarationInRam & inSource) :
GALGAS_declarationInRam_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam_2D_weak GALGAS_byteDeclarationInRam_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_byteDeclarationInRam_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam GALGAS_byteDeclarationInRam_2D_weak::bang_byteDeclarationInRam_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_byteDeclarationInRam result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_byteDeclarationInRam) ;
      result = GALGAS_byteDeclarationInRam ((cPtr_byteDeclarationInRam *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @byteDeclarationInRam-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_byteDeclarationInRam_2D_weak ("byteDeclarationInRam-weak",
                                                                                    & kTypeDescriptor_GALGAS_declarationInRam_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_byteDeclarationInRam_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_byteDeclarationInRam_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_byteDeclarationInRam_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_byteDeclarationInRam_2D_weak GALGAS_byteDeclarationInRam_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_byteDeclarationInRam_2D_weak result ;
  const GALGAS_byteDeclarationInRam_2D_weak * p = (const GALGAS_byteDeclarationInRam_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_byteDeclarationInRam_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("byteDeclarationInRam-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@declarationInRamList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_declarationInRamList : public cCollectionElement {
  public: GALGAS_declarationInRamList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_declarationInRamList (const GALGAS_declarationInRam & in_mDeclarationInRAM
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationInRamList (const GALGAS_declarationInRamList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationInRamList::cCollectionElement_declarationInRamList (const GALGAS_declarationInRam & in_mDeclarationInRAM
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclarationInRAM) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationInRamList::cCollectionElement_declarationInRamList (const GALGAS_declarationInRamList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclarationInRAM) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_declarationInRamList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_declarationInRamList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_declarationInRamList (mObject.mProperty_mDeclarationInRAM COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_declarationInRamList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDeclarationInRAM" ":") ;
  mObject.mProperty_mDeclarationInRAM.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_declarationInRamList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationInRamList * operand = (cCollectionElement_declarationInRamList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationInRamList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList::GALGAS_declarationInRamList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList::GALGAS_declarationInRamList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList GALGAS_declarationInRamList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationInRamList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList GALGAS_declarationInRamList::class_func_listWithValue (const GALGAS_declarationInRam & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_declarationInRamList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationInRamList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_declarationInRamList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_declarationInRam & in_mDeclarationInRAM
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationInRamList * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationInRamList (in_mDeclarationInRAM COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::addAssign_operation (const GALGAS_declarationInRam & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationInRamList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::setter_append (const GALGAS_declarationInRam inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationInRamList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::setter_insertAtIndex (const GALGAS_declarationInRam inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_declarationInRamList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::setter_removeAtIndex (GALGAS_declarationInRam & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
        outOperand0 = p->mObject.mProperty_mDeclarationInRAM ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::setter_popFirst (GALGAS_declarationInRam & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    outOperand0 = p->mObject.mProperty_mDeclarationInRAM ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::setter_popLast (GALGAS_declarationInRam & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    outOperand0 = p->mObject.mProperty_mDeclarationInRAM ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::method_first (GALGAS_declarationInRam & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    outOperand0 = p->mObject.mProperty_mDeclarationInRAM ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::method_last (GALGAS_declarationInRam & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    outOperand0 = p->mObject.mProperty_mDeclarationInRAM ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList GALGAS_declarationInRamList::add_operation (const GALGAS_declarationInRamList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationInRamList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList GALGAS_declarationInRamList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_declarationInRamList result = GALGAS_declarationInRamList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList GALGAS_declarationInRamList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_declarationInRamList result = GALGAS_declarationInRamList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList GALGAS_declarationInRamList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_declarationInRamList result = GALGAS_declarationInRamList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::plusAssign_operation (const GALGAS_declarationInRamList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationInRamList::setter_setMDeclarationInRAMAtIndex (GALGAS_declarationInRam inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclarationInRAM = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam GALGAS_declarationInRamList::getter_mDeclarationInRAMAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  GALGAS_declarationInRam result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    result = p->mObject.mProperty_mDeclarationInRAM ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_declarationInRamList::cEnumerator_declarationInRamList (const GALGAS_declarationInRamList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList_2D_element cEnumerator_declarationInRamList::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationInRamList * p = (const cCollectionElement_declarationInRamList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRam cEnumerator_declarationInRamList::current_mDeclarationInRAM (LOCATION_ARGS) const {
  const cCollectionElement_declarationInRamList * p = (const cCollectionElement_declarationInRamList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
  return p->mObject.mProperty_mDeclarationInRAM ;
}




//--------------------------------------------------------------------------------------------------
//
//     @declarationInRamList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRamList ("declarationInRamList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationInRamList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRamList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationInRamList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationInRamList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList GALGAS_declarationInRamList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_declarationInRamList result ;
  const GALGAS_declarationInRamList * p = (const GALGAS_declarationInRamList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declarationInRamList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRamList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ramDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ramDefinitionList : public cCollectionElement {
  public: GALGAS_ramDefinitionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_ramDefinitionList (const GALGAS_lstring & in_mBankName,
                                                const GALGAS_declarationInRamList & in_mDeclaration
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ramDefinitionList (const GALGAS_ramDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ramDefinitionList::cCollectionElement_ramDefinitionList (const GALGAS_lstring & in_mBankName,
                                                                            const GALGAS_declarationInRamList & in_mDeclaration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBankName, in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ramDefinitionList::cCollectionElement_ramDefinitionList (const GALGAS_ramDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBankName, inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ramDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ramDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ramDefinitionList (mObject.mProperty_mBankName, mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ramDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mBankName" ":") ;
  mObject.mProperty_mBankName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_ramDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ramDefinitionList * operand = (cCollectionElement_ramDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ramDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList::GALGAS_ramDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList::GALGAS_ramDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ramDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                             const GALGAS_declarationInRamList & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_ramDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ramDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ramDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mBankName,
                                                          const GALGAS_declarationInRamList & in_mDeclaration
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_ramDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ramDefinitionList (in_mBankName,
                                                       in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_declarationInRamList & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ramDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::setter_append (const GALGAS_lstring inOperand0,
                                              const GALGAS_declarationInRamList inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ramDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_declarationInRamList inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ramDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_declarationInRamList & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
        outOperand0 = p->mObject.mProperty_mBankName ;
        outOperand1 = p->mObject.mProperty_mDeclaration ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_declarationInRamList & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mBankName ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_declarationInRamList & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mBankName ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_declarationInRamList & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mBankName ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_declarationInRamList & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mBankName ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::add_operation (const GALGAS_ramDefinitionList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ramDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_ramDefinitionList result = GALGAS_ramDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_ramDefinitionList result = GALGAS_ramDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_ramDefinitionList result = GALGAS_ramDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::plusAssign_operation (const GALGAS_ramDefinitionList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::setter_setMBankNameAtIndex (GALGAS_lstring inOperand,
                                                           GALGAS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBankName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ramDefinitionList::getter_mBankNameAtIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    result = p->mObject.mProperty_mBankName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList::setter_setMDeclarationAtIndex (GALGAS_declarationInRamList inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList GALGAS_ramDefinitionList::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  GALGAS_declarationInRamList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ramDefinitionList::cEnumerator_ramDefinitionList (const GALGAS_ramDefinitionList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element cEnumerator_ramDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_ramDefinitionList::current_mBankName (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject.mProperty_mBankName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationInRamList cEnumerator_ramDefinitionList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ramDefinitionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramDefinitionList ("ramDefinitionList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ramDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ramDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ramDefinitionList result ;
  const GALGAS_ramDefinitionList * p = (const GALGAS_ramDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ramDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@configSettingList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_configSettingList : public cCollectionElement {
  public: GALGAS_configSettingList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_configSettingList (const GALGAS_lstring & in_mSettingName,
                                                const GALGAS_lstring & in_mSettingValue
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_configSettingList (const GALGAS_configSettingList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_configSettingList::cCollectionElement_configSettingList (const GALGAS_lstring & in_mSettingName,
                                                                            const GALGAS_lstring & in_mSettingValue
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSettingName, in_mSettingValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_configSettingList::cCollectionElement_configSettingList (const GALGAS_configSettingList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSettingName, inElement.mProperty_mSettingValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_configSettingList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_configSettingList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_configSettingList (mObject.mProperty_mSettingName, mObject.mProperty_mSettingValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_configSettingList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSettingName" ":") ;
  mObject.mProperty_mSettingName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSettingValue" ":") ;
  mObject.mProperty_mSettingValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_configSettingList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_configSettingList * operand = (cCollectionElement_configSettingList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_configSettingList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList::GALGAS_configSettingList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList::GALGAS_configSettingList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList GALGAS_configSettingList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_configSettingList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList GALGAS_configSettingList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                             const GALGAS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_configSettingList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_configSettingList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_configSettingList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mSettingName,
                                                          const GALGAS_lstring & in_mSettingValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_configSettingList * p = nullptr ;
  macroMyNew (p, cCollectionElement_configSettingList (in_mSettingName,
                                                       in_mSettingValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_configSettingList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::setter_append (const GALGAS_lstring inOperand0,
                                              const GALGAS_lstring inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_configSettingList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_configSettingList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_configSettingList) ;
        outOperand0 = p->mObject.mProperty_mSettingName ;
        outOperand1 = p->mObject.mProperty_mSettingValue ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    outOperand0 = p->mObject.mProperty_mSettingName ;
    outOperand1 = p->mObject.mProperty_mSettingValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    outOperand0 = p->mObject.mProperty_mSettingName ;
    outOperand1 = p->mObject.mProperty_mSettingValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    outOperand0 = p->mObject.mProperty_mSettingName ;
    outOperand1 = p->mObject.mProperty_mSettingValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    outOperand0 = p->mObject.mProperty_mSettingName ;
    outOperand1 = p->mObject.mProperty_mSettingValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList GALGAS_configSettingList::add_operation (const GALGAS_configSettingList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_configSettingList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList GALGAS_configSettingList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_configSettingList result = GALGAS_configSettingList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList GALGAS_configSettingList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_configSettingList result = GALGAS_configSettingList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList GALGAS_configSettingList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_configSettingList result = GALGAS_configSettingList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::plusAssign_operation (const GALGAS_configSettingList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::setter_setMSettingNameAtIndex (GALGAS_lstring inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSettingName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_configSettingList::getter_mSettingNameAtIndex (const GALGAS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    result = p->mObject.mProperty_mSettingName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList::setter_setMSettingValueAtIndex (GALGAS_lstring inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSettingValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_configSettingList::getter_mSettingValueAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    result = p->mObject.mProperty_mSettingValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_configSettingList::cEnumerator_configSettingList (const GALGAS_configSettingList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element cEnumerator_configSettingList::current (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configSettingList::current_mSettingName (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject.mProperty_mSettingName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configSettingList::current_mSettingValue (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject.mProperty_mSettingValue ;
}




//--------------------------------------------------------------------------------------------------
//
//     @configSettingList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configSettingList ("configSettingList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configSettingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configSettingList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configSettingList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configSettingList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList GALGAS_configSettingList::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_configSettingList result ;
  const GALGAS_configSettingList * p = (const GALGAS_configSettingList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configSettingList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configSettingList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@configDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_configDefinitionList : public cCollectionElement {
  public: GALGAS_configDefinitionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_configDefinitionList (const GALGAS_location & in_mDefinitionLocation,
                                                   const GALGAS_configSettingList & in_mSettingList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_configDefinitionList (const GALGAS_configDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_configDefinitionList::cCollectionElement_configDefinitionList (const GALGAS_location & in_mDefinitionLocation,
                                                                                  const GALGAS_configSettingList & in_mSettingList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDefinitionLocation, in_mSettingList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_configDefinitionList::cCollectionElement_configDefinitionList (const GALGAS_configDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDefinitionLocation, inElement.mProperty_mSettingList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_configDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_configDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_configDefinitionList (mObject.mProperty_mDefinitionLocation, mObject.mProperty_mSettingList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_configDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDefinitionLocation" ":") ;
  mObject.mProperty_mDefinitionLocation.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSettingList" ":") ;
  mObject.mProperty_mSettingList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_configDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_configDefinitionList * operand = (cCollectionElement_configDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_configDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList::GALGAS_configDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList::GALGAS_configDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList GALGAS_configDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_configDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList GALGAS_configDefinitionList::class_func_listWithValue (const GALGAS_location & inOperand0,
                                                                                   const GALGAS_configSettingList & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_configDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_configDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_configDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_location & in_mDefinitionLocation,
                                                             const GALGAS_configSettingList & in_mSettingList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_configDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_configDefinitionList (in_mDefinitionLocation,
                                                          in_mSettingList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::addAssign_operation (const GALGAS_location & inOperand0,
                                                       const GALGAS_configSettingList & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_configDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::setter_append (const GALGAS_location inOperand0,
                                                 const GALGAS_configSettingList inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_configDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                        const GALGAS_configSettingList inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_configDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                        GALGAS_configSettingList & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
        outOperand0 = p->mObject.mProperty_mDefinitionLocation ;
        outOperand1 = p->mObject.mProperty_mSettingList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::setter_popFirst (GALGAS_location & outOperand0,
                                                   GALGAS_configSettingList & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mDefinitionLocation ;
    outOperand1 = p->mObject.mProperty_mSettingList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::setter_popLast (GALGAS_location & outOperand0,
                                                  GALGAS_configSettingList & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mDefinitionLocation ;
    outOperand1 = p->mObject.mProperty_mSettingList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::method_first (GALGAS_location & outOperand0,
                                                GALGAS_configSettingList & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mDefinitionLocation ;
    outOperand1 = p->mObject.mProperty_mSettingList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::method_last (GALGAS_location & outOperand0,
                                               GALGAS_configSettingList & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mDefinitionLocation ;
    outOperand1 = p->mObject.mProperty_mSettingList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList GALGAS_configDefinitionList::add_operation (const GALGAS_configDefinitionList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_configDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList GALGAS_configDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_configDefinitionList result = GALGAS_configDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList GALGAS_configDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_configDefinitionList result = GALGAS_configDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList GALGAS_configDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_configDefinitionList result = GALGAS_configDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::plusAssign_operation (const GALGAS_configDefinitionList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::setter_setMDefinitionLocationAtIndex (GALGAS_location inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDefinitionLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_configDefinitionList::getter_mDefinitionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    result = p->mObject.mProperty_mDefinitionLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configDefinitionList::setter_setMSettingListAtIndex (GALGAS_configSettingList inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSettingList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList GALGAS_configDefinitionList::getter_mSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  GALGAS_configSettingList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    result = p->mObject.mProperty_mSettingList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_configDefinitionList::cEnumerator_configDefinitionList (const GALGAS_configDefinitionList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList_2D_element cEnumerator_configDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_configDefinitionList::current_mDefinitionLocation (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject.mProperty_mDefinitionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList cEnumerator_configDefinitionList::current_mSettingList (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject.mProperty_mSettingList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @configDefinitionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configDefinitionList ("configDefinitionList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configDefinitionList GALGAS_configDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configDefinitionList result ;
  const GALGAS_configDefinitionList * p = (const GALGAS_configDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatExpression_2D_weak::objectCompare (const GALGAS_immediatExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression_2D_weak::GALGAS_immediatExpression_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression_2D_weak & GALGAS_immediatExpression_2D_weak::operator = (const GALGAS_immediatExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression_2D_weak::GALGAS_immediatExpression_2D_weak (const GALGAS_immediatExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression_2D_weak GALGAS_immediatExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatExpression_2D_weak::bang_immediatExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatExpression) ;
      result = GALGAS_immediatExpression ((cPtr_immediatExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpression_2D_weak ("immediatExpression-weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression_2D_weak GALGAS_immediatExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatExpression_2D_weak result ;
  const GALGAS_immediatExpression_2D_weak * p = (const GALGAS_immediatExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@immediatExpressionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_immediatExpressionList : public cCollectionElement {
  public: GALGAS_immediatExpressionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_immediatExpressionList (const GALGAS_immediatExpression & in_mExpression,
                                                     const GALGAS_location & in_mErrorLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_immediatExpressionList (const GALGAS_immediatExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatExpressionList::cCollectionElement_immediatExpressionList (const GALGAS_immediatExpression & in_mExpression,
                                                                                      const GALGAS_location & in_mErrorLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatExpressionList::cCollectionElement_immediatExpressionList (const GALGAS_immediatExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_immediatExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_immediatExpressionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_immediatExpressionList (mObject.mProperty_mExpression, mObject.mProperty_mErrorLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_immediatExpressionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mErrorLocation" ":") ;
  mObject.mProperty_mErrorLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_immediatExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_immediatExpressionList * operand = (cCollectionElement_immediatExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_immediatExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList::GALGAS_immediatExpressionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList::GALGAS_immediatExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_immediatExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::class_func_listWithValue (const GALGAS_immediatExpression & inOperand0,
                                                                                       const GALGAS_location & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_immediatExpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_immediatExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_immediatExpressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_immediatExpression & in_mExpression,
                                                               const GALGAS_location & in_mErrorLocation
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_immediatExpressionList (in_mExpression,
                                                            in_mErrorLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::addAssign_operation (const GALGAS_immediatExpression & inOperand0,
                                                         const GALGAS_location & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_immediatExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::setter_append (const GALGAS_immediatExpression inOperand0,
                                                   const GALGAS_location inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_immediatExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::setter_insertAtIndex (const GALGAS_immediatExpression inOperand0,
                                                          const GALGAS_location inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_immediatExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::setter_removeAtIndex (GALGAS_immediatExpression & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
        outOperand0 = p->mObject.mProperty_mExpression ;
        outOperand1 = p->mObject.mProperty_mErrorLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::setter_popFirst (GALGAS_immediatExpression & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::setter_popLast (GALGAS_immediatExpression & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::method_first (GALGAS_immediatExpression & outOperand0,
                                                  GALGAS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::method_last (GALGAS_immediatExpression & outOperand0,
                                                 GALGAS_location & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::add_operation (const GALGAS_immediatExpressionList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result = GALGAS_immediatExpressionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result = GALGAS_immediatExpressionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result = GALGAS_immediatExpressionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::plusAssign_operation (const GALGAS_immediatExpressionList inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::setter_setMExpressionAtIndex (GALGAS_immediatExpression inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatExpressionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  GALGAS_immediatExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatExpressionList::setter_setMErrorLocationAtIndex (GALGAS_location inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_immediatExpressionList::getter_mErrorLocationAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    result = p->mObject.mProperty_mErrorLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_immediatExpressionList::cEnumerator_immediatExpressionList (const GALGAS_immediatExpressionList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList_2D_element cEnumerator_immediatExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression cEnumerator_immediatExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_immediatExpressionList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject.mProperty_mErrorLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @immediatExpressionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpressionList ("immediatExpressionList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_immediatExpressionList result ;
  const GALGAS_immediatExpressionList * p = (const GALGAS_immediatExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatInteger_2D_weak::objectCompare (const GALGAS_immediatInteger_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger_2D_weak::GALGAS_immediatInteger_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger_2D_weak & GALGAS_immediatInteger_2D_weak::operator = (const GALGAS_immediatInteger & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger_2D_weak::GALGAS_immediatInteger_2D_weak (const GALGAS_immediatInteger & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger_2D_weak GALGAS_immediatInteger_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatInteger_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger GALGAS_immediatInteger_2D_weak::bang_immediatInteger_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatInteger result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatInteger) ;
      result = GALGAS_immediatInteger ((cPtr_immediatInteger *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatInteger-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatInteger_2D_weak ("immediatInteger-weak",
                                                                               & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatInteger_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatInteger_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatInteger_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatInteger_2D_weak GALGAS_immediatInteger_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_immediatInteger_2D_weak result ;
  const GALGAS_immediatInteger_2D_weak * p = (const GALGAS_immediatInteger_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatInteger_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatInteger-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatRegister_2D_weak::objectCompare (const GALGAS_immediatRegister_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister_2D_weak::GALGAS_immediatRegister_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister_2D_weak & GALGAS_immediatRegister_2D_weak::operator = (const GALGAS_immediatRegister & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister_2D_weak::GALGAS_immediatRegister_2D_weak (const GALGAS_immediatRegister & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister_2D_weak GALGAS_immediatRegister_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatRegister_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister GALGAS_immediatRegister_2D_weak::bang_immediatRegister_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatRegister result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatRegister) ;
      result = GALGAS_immediatRegister ((cPtr_immediatRegister *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatRegister-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister_2D_weak ("immediatRegister-weak",
                                                                                & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatRegister_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatRegister_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatRegister_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRegister_2D_weak GALGAS_immediatRegister_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_immediatRegister_2D_weak result ;
  const GALGAS_immediatRegister_2D_weak * p = (const GALGAS_immediatRegister_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatRegister_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRegister-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatAdd reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatAdd::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatAdd::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatAdd * p = (const cPtr_immediatAdd *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatAdd) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatAdd::objectCompare (const GALGAS_immediatAdd & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAdd::GALGAS_immediatAdd (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAdd::GALGAS_immediatAdd (const cPtr_immediatAdd * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatAdd) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatAdd GALGAS_immediatAdd::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                       const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_immediatAdd result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatAdd (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatAdd::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatAdd * p = (cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatAdd::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatAdd * p = (cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatAdd::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatAdd * p = (cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatAdd::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatAdd * p = (cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatAdd class
//--------------------------------------------------------------------------------------------------

cPtr_immediatAdd::cPtr_immediatAdd (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatAdd::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd ;
}

void cPtr_immediatAdd::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.addString ("[@immediatAdd:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatAdd::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatAdd (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatAdd generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAdd ("immediatAdd",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatAdd::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatAdd::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatAdd (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAdd GALGAS_immediatAdd::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatAdd result ;
  const GALGAS_immediatAdd * p = (const GALGAS_immediatAdd *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatAdd *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAdd", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatAdd_2D_weak::objectCompare (const GALGAS_immediatAdd_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAdd_2D_weak::GALGAS_immediatAdd_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAdd_2D_weak & GALGAS_immediatAdd_2D_weak::operator = (const GALGAS_immediatAdd & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAdd_2D_weak::GALGAS_immediatAdd_2D_weak (const GALGAS_immediatAdd & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAdd_2D_weak GALGAS_immediatAdd_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatAdd_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAdd GALGAS_immediatAdd_2D_weak::bang_immediatAdd_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatAdd result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatAdd) ;
      result = GALGAS_immediatAdd ((cPtr_immediatAdd *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatAdd-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAdd_2D_weak ("immediatAdd-weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatAdd_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatAdd_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatAdd_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAdd_2D_weak GALGAS_immediatAdd_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatAdd_2D_weak result ;
  const GALGAS_immediatAdd_2D_weak * p = (const GALGAS_immediatAdd_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatAdd_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAdd-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatSub reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatSub::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatSub::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatSub * p = (const cPtr_immediatSub *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatSub) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatSub::objectCompare (const GALGAS_immediatSub & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSub::GALGAS_immediatSub (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSub::GALGAS_immediatSub (const cPtr_immediatSub * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatSub) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatSub GALGAS_immediatSub::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                       const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_immediatSub result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatSub (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSub::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatSub * p = (cPtr_immediatSub *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSub) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSub::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatSub * p = (cPtr_immediatSub *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSub) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatSub::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatSub * p = (cPtr_immediatSub *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSub) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatSub::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatSub * p = (cPtr_immediatSub *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSub) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatSub class
//--------------------------------------------------------------------------------------------------

cPtr_immediatSub::cPtr_immediatSub (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatSub::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSub ;
}

void cPtr_immediatSub::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.addString ("[@immediatSub:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatSub::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatSub (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatSub generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSub ("immediatSub",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatSub::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSub ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatSub::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSub (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSub GALGAS_immediatSub::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatSub result ;
  const GALGAS_immediatSub * p = (const GALGAS_immediatSub *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatSub *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSub", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatSub_2D_weak::objectCompare (const GALGAS_immediatSub_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSub_2D_weak::GALGAS_immediatSub_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSub_2D_weak & GALGAS_immediatSub_2D_weak::operator = (const GALGAS_immediatSub & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSub_2D_weak::GALGAS_immediatSub_2D_weak (const GALGAS_immediatSub & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSub_2D_weak GALGAS_immediatSub_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatSub_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSub GALGAS_immediatSub_2D_weak::bang_immediatSub_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatSub result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatSub) ;
      result = GALGAS_immediatSub ((cPtr_immediatSub *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatSub-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSub_2D_weak ("immediatSub-weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatSub_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSub_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatSub_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSub_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSub_2D_weak GALGAS_immediatSub_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatSub_2D_weak result ;
  const GALGAS_immediatSub_2D_weak * p = (const GALGAS_immediatSub_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatSub_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSub-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatMul reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatMul::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatMul::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatMul * p = (const cPtr_immediatMul *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatMul) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatMul::objectCompare (const GALGAS_immediatMul & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMul::GALGAS_immediatMul (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMul::GALGAS_immediatMul (const cPtr_immediatMul * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatMul) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatMul GALGAS_immediatMul::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                       const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_immediatMul result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatMul (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatMul::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatMul * p = (cPtr_immediatMul *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMul) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatMul::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatMul * p = (cPtr_immediatMul *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMul) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatMul::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatMul * p = (cPtr_immediatMul *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMul) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatMul::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatMul * p = (cPtr_immediatMul *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMul) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatMul class
//--------------------------------------------------------------------------------------------------

cPtr_immediatMul::cPtr_immediatMul (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatMul::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMul ;
}

void cPtr_immediatMul::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.addString ("[@immediatMul:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatMul::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatMul (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatMul generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMul ("immediatMul",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatMul::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMul ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatMul::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatMul (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMul GALGAS_immediatMul::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatMul result ;
  const GALGAS_immediatMul * p = (const GALGAS_immediatMul *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatMul *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMul", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatMul_2D_weak::objectCompare (const GALGAS_immediatMul_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMul_2D_weak::GALGAS_immediatMul_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMul_2D_weak & GALGAS_immediatMul_2D_weak::operator = (const GALGAS_immediatMul & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMul_2D_weak::GALGAS_immediatMul_2D_weak (const GALGAS_immediatMul & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMul_2D_weak GALGAS_immediatMul_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatMul_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMul GALGAS_immediatMul_2D_weak::bang_immediatMul_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatMul result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatMul) ;
      result = GALGAS_immediatMul ((cPtr_immediatMul *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatMul-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMul_2D_weak ("immediatMul-weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatMul_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMul_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatMul_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatMul_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMul_2D_weak GALGAS_immediatMul_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatMul_2D_weak result ;
  const GALGAS_immediatMul_2D_weak * p = (const GALGAS_immediatMul_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatMul_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMul-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatDiv reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatDiv::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatDiv::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatDiv * p = (const cPtr_immediatDiv *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatDiv) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatDiv::objectCompare (const GALGAS_immediatDiv & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatDiv::GALGAS_immediatDiv (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatDiv::GALGAS_immediatDiv (const cPtr_immediatDiv * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatDiv) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatDiv GALGAS_immediatDiv::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                       const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_immediatDiv result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatDiv (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatDiv::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatDiv * p = (cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatDiv::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatDiv * p = (cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatDiv::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatDiv * p = (cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatDiv::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatDiv * p = (cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatDiv class
//--------------------------------------------------------------------------------------------------

cPtr_immediatDiv::cPtr_immediatDiv (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatDiv::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv ;
}

void cPtr_immediatDiv::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.addString ("[@immediatDiv:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatDiv::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatDiv (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatDiv generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatDiv ("immediatDiv",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatDiv::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatDiv::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatDiv (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatDiv GALGAS_immediatDiv::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatDiv result ;
  const GALGAS_immediatDiv * p = (const GALGAS_immediatDiv *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatDiv *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatDiv", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatDiv_2D_weak::objectCompare (const GALGAS_immediatDiv_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatDiv_2D_weak::GALGAS_immediatDiv_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatDiv_2D_weak & GALGAS_immediatDiv_2D_weak::operator = (const GALGAS_immediatDiv & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatDiv_2D_weak::GALGAS_immediatDiv_2D_weak (const GALGAS_immediatDiv & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatDiv_2D_weak GALGAS_immediatDiv_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatDiv_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatDiv GALGAS_immediatDiv_2D_weak::bang_immediatDiv_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatDiv result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatDiv) ;
      result = GALGAS_immediatDiv ((cPtr_immediatDiv *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatDiv-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatDiv_2D_weak ("immediatDiv-weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatDiv_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatDiv_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatDiv_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatDiv_2D_weak GALGAS_immediatDiv_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatDiv_2D_weak result ;
  const GALGAS_immediatDiv_2D_weak * p = (const GALGAS_immediatDiv_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatDiv_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatDiv-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatMod reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatMod::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatMod::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatMod * p = (const cPtr_immediatMod *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatMod) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatMod::objectCompare (const GALGAS_immediatMod & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMod::GALGAS_immediatMod (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMod::GALGAS_immediatMod (const cPtr_immediatMod * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatMod) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatMod GALGAS_immediatMod::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                       const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_immediatMod result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatMod (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatMod::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatMod * p = (cPtr_immediatMod *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMod) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatMod::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatMod * p = (cPtr_immediatMod *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMod) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatMod::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatMod * p = (cPtr_immediatMod *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMod) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatMod::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatMod * p = (cPtr_immediatMod *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMod) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatMod class
//--------------------------------------------------------------------------------------------------

cPtr_immediatMod::cPtr_immediatMod (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatMod::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMod ;
}

void cPtr_immediatMod::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.addString ("[@immediatMod:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatMod::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatMod (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatMod generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMod ("immediatMod",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatMod::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMod ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatMod::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatMod (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMod GALGAS_immediatMod::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatMod result ;
  const GALGAS_immediatMod * p = (const GALGAS_immediatMod *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatMod *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMod", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatMod_2D_weak::objectCompare (const GALGAS_immediatMod_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMod_2D_weak::GALGAS_immediatMod_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMod_2D_weak & GALGAS_immediatMod_2D_weak::operator = (const GALGAS_immediatMod & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMod_2D_weak::GALGAS_immediatMod_2D_weak (const GALGAS_immediatMod & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMod_2D_weak GALGAS_immediatMod_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatMod_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMod GALGAS_immediatMod_2D_weak::bang_immediatMod_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatMod result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatMod) ;
      result = GALGAS_immediatMod ((cPtr_immediatMod *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatMod-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMod_2D_weak ("immediatMod-weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatMod_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMod_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatMod_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatMod_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatMod_2D_weak GALGAS_immediatMod_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatMod_2D_weak result ;
  const GALGAS_immediatMod_2D_weak * p = (const GALGAS_immediatMod_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatMod_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMod-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatOr reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatOr::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatOr::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatOr * p = (const cPtr_immediatOr *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatOr) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatOr::objectCompare (const GALGAS_immediatOr & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatOr::GALGAS_immediatOr (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatOr::GALGAS_immediatOr (const cPtr_immediatOr * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatOr) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatOr GALGAS_immediatOr::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                     const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_immediatOr result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatOr (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatOr::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatOr * p = (cPtr_immediatOr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatOr) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatOr::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatOr * p = (cPtr_immediatOr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatOr) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatOr::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatOr * p = (cPtr_immediatOr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatOr) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatOr::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatOr * p = (cPtr_immediatOr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatOr) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatOr class
//--------------------------------------------------------------------------------------------------

cPtr_immediatOr::cPtr_immediatOr (const GALGAS_immediatExpression & in_mLeftExpression,
                                  const GALGAS_immediatExpression & in_mRightExpression
                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatOr::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatOr ;
}

void cPtr_immediatOr::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.addString ("[@immediatOr:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatOr::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatOr (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatOr generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatOr ("immediatOr",
                                                                  & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatOr::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatOr ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatOr::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatOr (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatOr GALGAS_immediatOr::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatOr result ;
  const GALGAS_immediatOr * p = (const GALGAS_immediatOr *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatOr *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatOr", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatOr_2D_weak::objectCompare (const GALGAS_immediatOr_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatOr_2D_weak::GALGAS_immediatOr_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatOr_2D_weak & GALGAS_immediatOr_2D_weak::operator = (const GALGAS_immediatOr & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatOr_2D_weak::GALGAS_immediatOr_2D_weak (const GALGAS_immediatOr & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatOr_2D_weak GALGAS_immediatOr_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatOr_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatOr GALGAS_immediatOr_2D_weak::bang_immediatOr_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatOr result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatOr) ;
      result = GALGAS_immediatOr ((cPtr_immediatOr *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatOr-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatOr_2D_weak ("immediatOr-weak",
                                                                          & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatOr_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatOr_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatOr_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatOr_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatOr_2D_weak GALGAS_immediatOr_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatOr_2D_weak result ;
  const GALGAS_immediatOr_2D_weak * p = (const GALGAS_immediatOr_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatOr_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatOr-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatAnd reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatAnd::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatAnd::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatAnd * p = (const cPtr_immediatAnd *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatAnd) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatAnd::objectCompare (const GALGAS_immediatAnd & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAnd::GALGAS_immediatAnd (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAnd::GALGAS_immediatAnd (const cPtr_immediatAnd * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatAnd) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatAnd GALGAS_immediatAnd::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                       const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_immediatAnd result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatAnd (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatAnd::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatAnd * p = (cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatAnd::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatAnd * p = (cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatAnd::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatAnd * p = (cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatAnd::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatAnd * p = (cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatAnd class
//--------------------------------------------------------------------------------------------------

cPtr_immediatAnd::cPtr_immediatAnd (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatAnd::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd ;
}

void cPtr_immediatAnd::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.addString ("[@immediatAnd:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatAnd::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatAnd (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatAnd generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAnd ("immediatAnd",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatAnd::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatAnd::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatAnd (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAnd GALGAS_immediatAnd::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatAnd result ;
  const GALGAS_immediatAnd * p = (const GALGAS_immediatAnd *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatAnd *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAnd", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatAnd_2D_weak::objectCompare (const GALGAS_immediatAnd_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAnd_2D_weak::GALGAS_immediatAnd_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAnd_2D_weak & GALGAS_immediatAnd_2D_weak::operator = (const GALGAS_immediatAnd & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAnd_2D_weak::GALGAS_immediatAnd_2D_weak (const GALGAS_immediatAnd & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAnd_2D_weak GALGAS_immediatAnd_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatAnd_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAnd GALGAS_immediatAnd_2D_weak::bang_immediatAnd_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatAnd result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatAnd) ;
      result = GALGAS_immediatAnd ((cPtr_immediatAnd *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatAnd-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAnd_2D_weak ("immediatAnd-weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatAnd_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatAnd_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatAnd_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatAnd_2D_weak GALGAS_immediatAnd_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatAnd_2D_weak result ;
  const GALGAS_immediatAnd_2D_weak * p = (const GALGAS_immediatAnd_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatAnd_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAnd-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatXor reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatXor::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatXor::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatXor * p = (const cPtr_immediatXor *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatXor) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatXor::objectCompare (const GALGAS_immediatXor & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatXor::GALGAS_immediatXor (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatXor::GALGAS_immediatXor (const cPtr_immediatXor * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatXor) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatXor GALGAS_immediatXor::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                       const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_immediatXor result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatXor (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatXor::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatXor * p = (cPtr_immediatXor *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatXor) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatXor::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatXor * p = (cPtr_immediatXor *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatXor) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatXor::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatXor * p = (cPtr_immediatXor *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatXor) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatXor::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatXor * p = (cPtr_immediatXor *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatXor) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatXor class
//--------------------------------------------------------------------------------------------------

cPtr_immediatXor::cPtr_immediatXor (const GALGAS_immediatExpression & in_mLeftExpression,
                                    const GALGAS_immediatExpression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatXor::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatXor ;
}

void cPtr_immediatXor::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.addString ("[@immediatXor:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatXor::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatXor (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatXor generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatXor ("immediatXor",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatXor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatXor ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatXor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatXor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatXor GALGAS_immediatXor::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatXor result ;
  const GALGAS_immediatXor * p = (const GALGAS_immediatXor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatXor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatXor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatXor_2D_weak::objectCompare (const GALGAS_immediatXor_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatXor_2D_weak::GALGAS_immediatXor_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatXor_2D_weak & GALGAS_immediatXor_2D_weak::operator = (const GALGAS_immediatXor & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatXor_2D_weak::GALGAS_immediatXor_2D_weak (const GALGAS_immediatXor & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatXor_2D_weak GALGAS_immediatXor_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatXor_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatXor GALGAS_immediatXor_2D_weak::bang_immediatXor_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatXor result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatXor) ;
      result = GALGAS_immediatXor ((cPtr_immediatXor *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatXor-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatXor_2D_weak ("immediatXor-weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatXor_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatXor_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatXor_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatXor_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatXor_2D_weak GALGAS_immediatXor_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatXor_2D_weak result ;
  const GALGAS_immediatXor_2D_weak * p = (const GALGAS_immediatXor_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatXor_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatXor-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatLeftShift reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatLeftShift::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatLeftShift::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatLeftShift * p = (const cPtr_immediatLeftShift *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatLeftShift) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatLeftShift::objectCompare (const GALGAS_immediatLeftShift & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLeftShift::GALGAS_immediatLeftShift (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLeftShift::GALGAS_immediatLeftShift (const cPtr_immediatLeftShift * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatLeftShift) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatLeftShift GALGAS_immediatLeftShift::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                   const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_immediatLeftShift result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatLeftShift (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatLeftShift::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatLeftShift::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatLeftShift::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatLeftShift::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatLeftShift class
//--------------------------------------------------------------------------------------------------

cPtr_immediatLeftShift::cPtr_immediatLeftShift (const GALGAS_immediatExpression & in_mLeftExpression,
                                                const GALGAS_immediatExpression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatLeftShift::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift ;
}

void cPtr_immediatLeftShift::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("[@immediatLeftShift:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatLeftShift::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatLeftShift (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatLeftShift generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLeftShift ("immediatLeftShift",
                                                                         & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatLeftShift::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatLeftShift::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatLeftShift (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLeftShift GALGAS_immediatLeftShift::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatLeftShift result ;
  const GALGAS_immediatLeftShift * p = (const GALGAS_immediatLeftShift *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatLeftShift *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLeftShift", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatLeftShift_2D_weak::objectCompare (const GALGAS_immediatLeftShift_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLeftShift_2D_weak::GALGAS_immediatLeftShift_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLeftShift_2D_weak & GALGAS_immediatLeftShift_2D_weak::operator = (const GALGAS_immediatLeftShift & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLeftShift_2D_weak::GALGAS_immediatLeftShift_2D_weak (const GALGAS_immediatLeftShift & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLeftShift_2D_weak GALGAS_immediatLeftShift_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatLeftShift_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLeftShift GALGAS_immediatLeftShift_2D_weak::bang_immediatLeftShift_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatLeftShift result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatLeftShift) ;
      result = GALGAS_immediatLeftShift ((cPtr_immediatLeftShift *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatLeftShift-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLeftShift_2D_weak ("immediatLeftShift-weak",
                                                                                 & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatLeftShift_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatLeftShift_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatLeftShift_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLeftShift_2D_weak GALGAS_immediatLeftShift_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatLeftShift_2D_weak result ;
  const GALGAS_immediatLeftShift_2D_weak * p = (const GALGAS_immediatLeftShift_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatLeftShift_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLeftShift-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatRightShift reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatRightShift::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatRightShift::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatRightShift * p = (const cPtr_immediatRightShift *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatRightShift) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatRightShift::objectCompare (const GALGAS_immediatRightShift & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRightShift::GALGAS_immediatRightShift (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRightShift::GALGAS_immediatRightShift (const cPtr_immediatRightShift * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatRightShift) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatRightShift GALGAS_immediatRightShift::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                     const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_immediatRightShift result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatRightShift (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatRightShift::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRightShift) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatRightShift::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRightShift) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatRightShift::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRightShift) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatRightShift::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRightShift) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatRightShift class
//--------------------------------------------------------------------------------------------------

cPtr_immediatRightShift::cPtr_immediatRightShift (const GALGAS_immediatExpression & in_mLeftExpression,
                                                  const GALGAS_immediatExpression & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatRightShift::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRightShift ;
}

void cPtr_immediatRightShift::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.addString ("[@immediatRightShift:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatRightShift::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatRightShift (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatRightShift generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRightShift ("immediatRightShift",
                                                                          & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatRightShift::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRightShift ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatRightShift::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatRightShift (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRightShift GALGAS_immediatRightShift::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatRightShift result ;
  const GALGAS_immediatRightShift * p = (const GALGAS_immediatRightShift *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatRightShift *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRightShift", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatRightShift_2D_weak::objectCompare (const GALGAS_immediatRightShift_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRightShift_2D_weak::GALGAS_immediatRightShift_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRightShift_2D_weak & GALGAS_immediatRightShift_2D_weak::operator = (const GALGAS_immediatRightShift & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRightShift_2D_weak::GALGAS_immediatRightShift_2D_weak (const GALGAS_immediatRightShift & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRightShift_2D_weak GALGAS_immediatRightShift_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatRightShift_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRightShift GALGAS_immediatRightShift_2D_weak::bang_immediatRightShift_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatRightShift result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatRightShift) ;
      result = GALGAS_immediatRightShift ((cPtr_immediatRightShift *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatRightShift-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRightShift_2D_weak ("immediatRightShift-weak",
                                                                                  & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatRightShift_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRightShift_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatRightShift_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatRightShift_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatRightShift_2D_weak GALGAS_immediatRightShift_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatRightShift_2D_weak result ;
  const GALGAS_immediatRightShift_2D_weak * p = (const GALGAS_immediatRightShift_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatRightShift_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRightShift-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatEqualTest reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatEqualTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatEqualTest * p = (const cPtr_immediatEqualTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatEqualTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatEqualTest::objectCompare (const GALGAS_immediatEqualTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatEqualTest::GALGAS_immediatEqualTest (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatEqualTest::GALGAS_immediatEqualTest (const cPtr_immediatEqualTest * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatEqualTest GALGAS_immediatEqualTest::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                   const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_immediatEqualTest result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatEqualTest (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatEqualTest::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatEqualTest::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatEqualTest::cPtr_immediatEqualTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                                const GALGAS_immediatExpression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest ;
}

void cPtr_immediatEqualTest::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("[@immediatEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatEqualTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatEqualTest generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatEqualTest ("immediatEqualTest",
                                                                         & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatEqualTest GALGAS_immediatEqualTest::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatEqualTest result ;
  const GALGAS_immediatEqualTest * p = (const GALGAS_immediatEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatEqualTest_2D_weak::objectCompare (const GALGAS_immediatEqualTest_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatEqualTest_2D_weak::GALGAS_immediatEqualTest_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatEqualTest_2D_weak & GALGAS_immediatEqualTest_2D_weak::operator = (const GALGAS_immediatEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatEqualTest_2D_weak::GALGAS_immediatEqualTest_2D_weak (const GALGAS_immediatEqualTest & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatEqualTest_2D_weak GALGAS_immediatEqualTest_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatEqualTest_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatEqualTest GALGAS_immediatEqualTest_2D_weak::bang_immediatEqualTest_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatEqualTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatEqualTest) ;
      result = GALGAS_immediatEqualTest ((cPtr_immediatEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatEqualTest-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatEqualTest_2D_weak ("immediatEqualTest-weak",
                                                                                 & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatEqualTest_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatEqualTest_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatEqualTest_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatEqualTest_2D_weak GALGAS_immediatEqualTest_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatEqualTest_2D_weak result ;
  const GALGAS_immediatEqualTest_2D_weak * p = (const GALGAS_immediatEqualTest_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatEqualTest_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatEqualTest-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatNotEqualTest reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatNotEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatNotEqualTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatNotEqualTest * p = (const cPtr_immediatNotEqualTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatNotEqualTest::objectCompare (const GALGAS_immediatNotEqualTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNotEqualTest::GALGAS_immediatNotEqualTest (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNotEqualTest::GALGAS_immediatNotEqualTest (const cPtr_immediatNotEqualTest * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatNotEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatNotEqualTest GALGAS_immediatNotEqualTest::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                         const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_immediatNotEqualTest result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatNotEqualTest (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatNotEqualTest::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatNotEqualTest::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatNotEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatNotEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatNotEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatNotEqualTest::cPtr_immediatNotEqualTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                                      const GALGAS_immediatExpression & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatNotEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNotEqualTest ;
}

void cPtr_immediatNotEqualTest::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.addString ("[@immediatNotEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatNotEqualTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatNotEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatNotEqualTest generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNotEqualTest ("immediatNotEqualTest",
                                                                            & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatNotEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNotEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatNotEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatNotEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNotEqualTest GALGAS_immediatNotEqualTest::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_immediatNotEqualTest result ;
  const GALGAS_immediatNotEqualTest * p = (const GALGAS_immediatNotEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatNotEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNotEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatNotEqualTest_2D_weak::objectCompare (const GALGAS_immediatNotEqualTest_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNotEqualTest_2D_weak::GALGAS_immediatNotEqualTest_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNotEqualTest_2D_weak & GALGAS_immediatNotEqualTest_2D_weak::operator = (const GALGAS_immediatNotEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNotEqualTest_2D_weak::GALGAS_immediatNotEqualTest_2D_weak (const GALGAS_immediatNotEqualTest & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNotEqualTest_2D_weak GALGAS_immediatNotEqualTest_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatNotEqualTest_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNotEqualTest GALGAS_immediatNotEqualTest_2D_weak::bang_immediatNotEqualTest_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatNotEqualTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatNotEqualTest) ;
      result = GALGAS_immediatNotEqualTest ((cPtr_immediatNotEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatNotEqualTest-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNotEqualTest_2D_weak ("immediatNotEqualTest-weak",
                                                                                    & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatNotEqualTest_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNotEqualTest_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatNotEqualTest_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatNotEqualTest_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNotEqualTest_2D_weak GALGAS_immediatNotEqualTest_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_immediatNotEqualTest_2D_weak result ;
  const GALGAS_immediatNotEqualTest_2D_weak * p = (const GALGAS_immediatNotEqualTest_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatNotEqualTest_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNotEqualTest-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatGreaterTest reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatGreaterTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatGreaterTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatGreaterTest * p = (const cPtr_immediatGreaterTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatGreaterTest::objectCompare (const GALGAS_immediatGreaterTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterTest::GALGAS_immediatGreaterTest (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterTest::GALGAS_immediatGreaterTest (const cPtr_immediatGreaterTest * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatGreaterTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterTest GALGAS_immediatGreaterTest::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                       const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_immediatGreaterTest result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatGreaterTest (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatGreaterTest::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatGreaterTest::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatGreaterTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatGreaterTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatGreaterTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatGreaterTest::cPtr_immediatGreaterTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                                    const GALGAS_immediatExpression & in_mRightExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatGreaterTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest ;
}

void cPtr_immediatGreaterTest::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.addString ("[@immediatGreaterTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatGreaterTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatGreaterTest (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatGreaterTest generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterTest ("immediatGreaterTest",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatGreaterTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatGreaterTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatGreaterTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterTest GALGAS_immediatGreaterTest::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatGreaterTest result ;
  const GALGAS_immediatGreaterTest * p = (const GALGAS_immediatGreaterTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatGreaterTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatGreaterTest_2D_weak::objectCompare (const GALGAS_immediatGreaterTest_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterTest_2D_weak::GALGAS_immediatGreaterTest_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterTest_2D_weak & GALGAS_immediatGreaterTest_2D_weak::operator = (const GALGAS_immediatGreaterTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterTest_2D_weak::GALGAS_immediatGreaterTest_2D_weak (const GALGAS_immediatGreaterTest & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterTest_2D_weak GALGAS_immediatGreaterTest_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatGreaterTest_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterTest GALGAS_immediatGreaterTest_2D_weak::bang_immediatGreaterTest_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatGreaterTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatGreaterTest) ;
      result = GALGAS_immediatGreaterTest ((cPtr_immediatGreaterTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatGreaterTest-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterTest_2D_weak ("immediatGreaterTest-weak",
                                                                                   & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatGreaterTest_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatGreaterTest_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatGreaterTest_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterTest_2D_weak GALGAS_immediatGreaterTest_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatGreaterTest_2D_weak result ;
  const GALGAS_immediatGreaterTest_2D_weak * p = (const GALGAS_immediatGreaterTest_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatGreaterTest_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterTest-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatGreaterOrEqualTest reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatGreaterOrEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatGreaterOrEqualTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatGreaterOrEqualTest * p = (const cPtr_immediatGreaterOrEqualTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatGreaterOrEqualTest::objectCompare (const GALGAS_immediatGreaterOrEqualTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterOrEqualTest::GALGAS_immediatGreaterOrEqualTest (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterOrEqualTest::GALGAS_immediatGreaterOrEqualTest (const cPtr_immediatGreaterOrEqualTest * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatGreaterOrEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterOrEqualTest GALGAS_immediatGreaterOrEqualTest::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                                     const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_immediatGreaterOrEqualTest result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatGreaterOrEqualTest (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatGreaterOrEqualTest::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatGreaterOrEqualTest::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatGreaterOrEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatGreaterOrEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatGreaterOrEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatGreaterOrEqualTest::cPtr_immediatGreaterOrEqualTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                                                  const GALGAS_immediatExpression & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatGreaterOrEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;
}

void cPtr_immediatGreaterOrEqualTest::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.addString ("[@immediatGreaterOrEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatGreaterOrEqualTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatGreaterOrEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatGreaterOrEqualTest generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ("immediatGreaterOrEqualTest",
                                                                                  & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatGreaterOrEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatGreaterOrEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatGreaterOrEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterOrEqualTest GALGAS_immediatGreaterOrEqualTest::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatGreaterOrEqualTest result ;
  const GALGAS_immediatGreaterOrEqualTest * p = (const GALGAS_immediatGreaterOrEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatGreaterOrEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterOrEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatGreaterOrEqualTest_2D_weak::objectCompare (const GALGAS_immediatGreaterOrEqualTest_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterOrEqualTest_2D_weak::GALGAS_immediatGreaterOrEqualTest_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterOrEqualTest_2D_weak & GALGAS_immediatGreaterOrEqualTest_2D_weak::operator = (const GALGAS_immediatGreaterOrEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterOrEqualTest_2D_weak::GALGAS_immediatGreaterOrEqualTest_2D_weak (const GALGAS_immediatGreaterOrEqualTest & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterOrEqualTest_2D_weak GALGAS_immediatGreaterOrEqualTest_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatGreaterOrEqualTest_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterOrEqualTest GALGAS_immediatGreaterOrEqualTest_2D_weak::bang_immediatGreaterOrEqualTest_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatGreaterOrEqualTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatGreaterOrEqualTest) ;
      result = GALGAS_immediatGreaterOrEqualTest ((cPtr_immediatGreaterOrEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatGreaterOrEqualTest-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest_2D_weak ("immediatGreaterOrEqualTest-weak",
                                                                                          & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatGreaterOrEqualTest_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatGreaterOrEqualTest_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatGreaterOrEqualTest_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatGreaterOrEqualTest_2D_weak GALGAS_immediatGreaterOrEqualTest_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatGreaterOrEqualTest_2D_weak result ;
  const GALGAS_immediatGreaterOrEqualTest_2D_weak * p = (const GALGAS_immediatGreaterOrEqualTest_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatGreaterOrEqualTest_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterOrEqualTest-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatLowerTest reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatLowerTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatLowerTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatLowerTest * p = (const cPtr_immediatLowerTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatLowerTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatLowerTest::objectCompare (const GALGAS_immediatLowerTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerTest::GALGAS_immediatLowerTest (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerTest::GALGAS_immediatLowerTest (const cPtr_immediatLowerTest * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatLowerTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerTest GALGAS_immediatLowerTest::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                   const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_immediatLowerTest result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatLowerTest (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatLowerTest::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatLowerTest::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatLowerTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatLowerTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatLowerTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatLowerTest::cPtr_immediatLowerTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                                const GALGAS_immediatExpression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatLowerTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerTest ;
}

void cPtr_immediatLowerTest::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("[@immediatLowerTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatLowerTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatLowerTest (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatLowerTest generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerTest ("immediatLowerTest",
                                                                         & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatLowerTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatLowerTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatLowerTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerTest GALGAS_immediatLowerTest::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatLowerTest result ;
  const GALGAS_immediatLowerTest * p = (const GALGAS_immediatLowerTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatLowerTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatLowerTest_2D_weak::objectCompare (const GALGAS_immediatLowerTest_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerTest_2D_weak::GALGAS_immediatLowerTest_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerTest_2D_weak & GALGAS_immediatLowerTest_2D_weak::operator = (const GALGAS_immediatLowerTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerTest_2D_weak::GALGAS_immediatLowerTest_2D_weak (const GALGAS_immediatLowerTest & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerTest_2D_weak GALGAS_immediatLowerTest_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatLowerTest_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerTest GALGAS_immediatLowerTest_2D_weak::bang_immediatLowerTest_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatLowerTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatLowerTest) ;
      result = GALGAS_immediatLowerTest ((cPtr_immediatLowerTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatLowerTest-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerTest_2D_weak ("immediatLowerTest-weak",
                                                                                 & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatLowerTest_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerTest_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatLowerTest_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatLowerTest_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerTest_2D_weak GALGAS_immediatLowerTest_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatLowerTest_2D_weak result ;
  const GALGAS_immediatLowerTest_2D_weak * p = (const GALGAS_immediatLowerTest_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatLowerTest_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerTest-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatLowerOrEqualTest reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatLowerOrEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatLowerOrEqualTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatLowerOrEqualTest * p = (const cPtr_immediatLowerOrEqualTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatLowerOrEqualTest::objectCompare (const GALGAS_immediatLowerOrEqualTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerOrEqualTest::GALGAS_immediatLowerOrEqualTest (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerOrEqualTest::GALGAS_immediatLowerOrEqualTest (const cPtr_immediatLowerOrEqualTest * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatLowerOrEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerOrEqualTest GALGAS_immediatLowerOrEqualTest::class_func_new (const GALGAS_immediatExpression & inAttribute_mLeftExpression,
                                                                                 const GALGAS_immediatExpression & inAttribute_mRightExpression
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_immediatLowerOrEqualTest result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatLowerOrEqualTest (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatLowerOrEqualTest::setter_setMLeftExpression (GALGAS_immediatExpression inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatLowerOrEqualTest::setter_setMRightExpression (GALGAS_immediatExpression inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatLowerOrEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatLowerOrEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatLowerOrEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatLowerOrEqualTest::cPtr_immediatLowerOrEqualTest (const GALGAS_immediatExpression & in_mLeftExpression,
                                                              const GALGAS_immediatExpression & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatLowerOrEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ;
}

void cPtr_immediatLowerOrEqualTest::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.addString ("[@immediatLowerOrEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatLowerOrEqualTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatLowerOrEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatLowerOrEqualTest generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ("immediatLowerOrEqualTest",
                                                                                & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatLowerOrEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatLowerOrEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatLowerOrEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerOrEqualTest GALGAS_immediatLowerOrEqualTest::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_immediatLowerOrEqualTest result ;
  const GALGAS_immediatLowerOrEqualTest * p = (const GALGAS_immediatLowerOrEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatLowerOrEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerOrEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatLowerOrEqualTest_2D_weak::objectCompare (const GALGAS_immediatLowerOrEqualTest_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerOrEqualTest_2D_weak::GALGAS_immediatLowerOrEqualTest_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerOrEqualTest_2D_weak & GALGAS_immediatLowerOrEqualTest_2D_weak::operator = (const GALGAS_immediatLowerOrEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerOrEqualTest_2D_weak::GALGAS_immediatLowerOrEqualTest_2D_weak (const GALGAS_immediatLowerOrEqualTest & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerOrEqualTest_2D_weak GALGAS_immediatLowerOrEqualTest_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatLowerOrEqualTest_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerOrEqualTest GALGAS_immediatLowerOrEqualTest_2D_weak::bang_immediatLowerOrEqualTest_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatLowerOrEqualTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatLowerOrEqualTest) ;
      result = GALGAS_immediatLowerOrEqualTest ((cPtr_immediatLowerOrEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatLowerOrEqualTest-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest_2D_weak ("immediatLowerOrEqualTest-weak",
                                                                                        & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatLowerOrEqualTest_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerOrEqualTest_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatLowerOrEqualTest_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatLowerOrEqualTest_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatLowerOrEqualTest_2D_weak GALGAS_immediatLowerOrEqualTest_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_immediatLowerOrEqualTest_2D_weak result ;
  const GALGAS_immediatLowerOrEqualTest_2D_weak * p = (const GALGAS_immediatLowerOrEqualTest_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatLowerOrEqualTest_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerOrEqualTest-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatNegate reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatNegate::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatNegate::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatNegate * p = (const cPtr_immediatNegate *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatNegate) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatNegate::objectCompare (const GALGAS_immediatNegate & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNegate::GALGAS_immediatNegate (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNegate::GALGAS_immediatNegate (const cPtr_immediatNegate * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatNegate) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatNegate GALGAS_immediatNegate::class_func_new (const GALGAS_immediatExpression & inAttribute_mExpression
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_immediatNegate result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatNegate (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatNegate::setter_setMExpression (GALGAS_immediatExpression inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatNegate * p = (cPtr_immediatNegate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNegate) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatNegate::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatNegate * p = (cPtr_immediatNegate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNegate) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatNegate class
//--------------------------------------------------------------------------------------------------

cPtr_immediatNegate::cPtr_immediatNegate (const GALGAS_immediatExpression & in_mExpression
                                          COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatNegate::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNegate ;
}

void cPtr_immediatNegate::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.addString ("[@immediatNegate:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatNegate::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatNegate (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatNegate generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNegate ("immediatNegate",
                                                                      & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatNegate::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNegate ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatNegate::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatNegate (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNegate GALGAS_immediatNegate::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_immediatNegate result ;
  const GALGAS_immediatNegate * p = (const GALGAS_immediatNegate *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatNegate *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNegate", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatNegate_2D_weak::objectCompare (const GALGAS_immediatNegate_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNegate_2D_weak::GALGAS_immediatNegate_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNegate_2D_weak & GALGAS_immediatNegate_2D_weak::operator = (const GALGAS_immediatNegate & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNegate_2D_weak::GALGAS_immediatNegate_2D_weak (const GALGAS_immediatNegate & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNegate_2D_weak GALGAS_immediatNegate_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatNegate_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNegate GALGAS_immediatNegate_2D_weak::bang_immediatNegate_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatNegate result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatNegate) ;
      result = GALGAS_immediatNegate ((cPtr_immediatNegate *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatNegate-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNegate_2D_weak ("immediatNegate-weak",
                                                                              & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatNegate_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNegate_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatNegate_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatNegate_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatNegate_2D_weak GALGAS_immediatNegate_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_immediatNegate_2D_weak result ;
  const GALGAS_immediatNegate_2D_weak * p = (const GALGAS_immediatNegate_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatNegate_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNegate-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatComplement reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatComplement::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatComplement::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatComplement * p = (const cPtr_immediatComplement *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatComplement) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatComplement::objectCompare (const GALGAS_immediatComplement & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatComplement::GALGAS_immediatComplement (void) :
GALGAS_immediatExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatComplement::GALGAS_immediatComplement (const cPtr_immediatComplement * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatComplement) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_immediatComplement GALGAS_immediatComplement::class_func_new (const GALGAS_immediatExpression & inAttribute_mExpression
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_immediatComplement result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatComplement (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatComplement::setter_setMExpression (GALGAS_immediatExpression inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatComplement * p = (cPtr_immediatComplement *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatComplement) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatComplement::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_immediatComplement * p = (cPtr_immediatComplement *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatComplement) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatComplement class
//--------------------------------------------------------------------------------------------------

cPtr_immediatComplement::cPtr_immediatComplement (const GALGAS_immediatExpression & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatComplement::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement ;
}

void cPtr_immediatComplement::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.addString ("[@immediatComplement:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatComplement::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatComplement (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @immediatComplement generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatComplement ("immediatComplement",
                                                                          & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatComplement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatComplement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatComplement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatComplement GALGAS_immediatComplement::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatComplement result ;
  const GALGAS_immediatComplement * p = (const GALGAS_immediatComplement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatComplement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatComplement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatComplement_2D_weak::objectCompare (const GALGAS_immediatComplement_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatComplement_2D_weak::GALGAS_immediatComplement_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatComplement_2D_weak & GALGAS_immediatComplement_2D_weak::operator = (const GALGAS_immediatComplement & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatComplement_2D_weak::GALGAS_immediatComplement_2D_weak (const GALGAS_immediatComplement & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatComplement_2D_weak GALGAS_immediatComplement_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatComplement_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatComplement GALGAS_immediatComplement_2D_weak::bang_immediatComplement_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatComplement result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatComplement) ;
      result = GALGAS_immediatComplement ((cPtr_immediatComplement *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatComplement-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatComplement_2D_weak ("immediatComplement-weak",
                                                                                  & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatComplement_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatComplement_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatComplement_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatComplement_2D_weak GALGAS_immediatComplement_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_immediatComplement_2D_weak result ;
  const GALGAS_immediatComplement_2D_weak * p = (const GALGAS_immediatComplement_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatComplement_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatComplement-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@immediatSliceExpressionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_immediatSliceExpressionList : public cCollectionElement {
  public: GALGAS_immediatSliceExpressionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_immediatSliceExpressionList (const GALGAS_lstring & in_mSliceName,
                                                          const GALGAS_immediatExpression & in_mExpression
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_immediatSliceExpressionList (const GALGAS_immediatSliceExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatSliceExpressionList::cCollectionElement_immediatSliceExpressionList (const GALGAS_lstring & in_mSliceName,
                                                                                                const GALGAS_immediatExpression & in_mExpression
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSliceName, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatSliceExpressionList::cCollectionElement_immediatSliceExpressionList (const GALGAS_immediatSliceExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSliceName, inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_immediatSliceExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_immediatSliceExpressionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_immediatSliceExpressionList (mObject.mProperty_mSliceName, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_immediatSliceExpressionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSliceName" ":") ;
  mObject.mProperty_mSliceName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_immediatSliceExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_immediatSliceExpressionList * operand = (cCollectionElement_immediatSliceExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_immediatSliceExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList::GALGAS_immediatSliceExpressionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList::GALGAS_immediatSliceExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_immediatSliceExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                 const GALGAS_immediatExpression & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_immediatSliceExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_immediatSliceExpressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mSliceName,
                                                                    const GALGAS_immediatExpression & in_mExpression
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatSliceExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_immediatSliceExpressionList (in_mSliceName,
                                                                 in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_immediatExpression & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_immediatSliceExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::setter_append (const GALGAS_lstring inOperand0,
                                                        const GALGAS_immediatExpression inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_immediatSliceExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_immediatExpression inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_immediatSliceExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_immediatExpression & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
        outOperand0 = p->mObject.mProperty_mSliceName ;
        outOperand1 = p->mObject.mProperty_mExpression ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_immediatExpression & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    outOperand0 = p->mObject.mProperty_mSliceName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_immediatExpression & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    outOperand0 = p->mObject.mProperty_mSliceName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_immediatExpression & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    outOperand0 = p->mObject.mProperty_mSliceName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_immediatExpression & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    outOperand0 = p->mObject.mProperty_mSliceName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::add_operation (const GALGAS_immediatSliceExpressionList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatSliceExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_immediatSliceExpressionList result = GALGAS_immediatSliceExpressionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_immediatSliceExpressionList result = GALGAS_immediatSliceExpressionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_immediatSliceExpressionList result = GALGAS_immediatSliceExpressionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::plusAssign_operation (const GALGAS_immediatSliceExpressionList inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::setter_setMSliceNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSliceName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_immediatSliceExpressionList::getter_mSliceNameAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    result = p->mObject.mProperty_mSliceName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList::setter_setMExpressionAtIndex (GALGAS_immediatExpression inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_immediatSliceExpressionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  GALGAS_immediatExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_immediatSliceExpressionList::cEnumerator_immediatSliceExpressionList (const GALGAS_immediatSliceExpressionList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element cEnumerator_immediatSliceExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_immediatSliceExpressionList::current_mSliceName (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject.mProperty_mSliceName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression cEnumerator_immediatSliceExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @immediatSliceExpressionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList ("immediatSliceExpressionList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatSliceExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSliceExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatSliceExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSliceExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList result ;
  const GALGAS_immediatSliceExpressionList * p = (const GALGAS_immediatSliceExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatSliceExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSliceExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatSlice_2D_weak::objectCompare (const GALGAS_immediatSlice_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice_2D_weak::GALGAS_immediatSlice_2D_weak (void) :
GALGAS_immediatExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice_2D_weak & GALGAS_immediatSlice_2D_weak::operator = (const GALGAS_immediatSlice & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice_2D_weak::GALGAS_immediatSlice_2D_weak (const GALGAS_immediatSlice & inSource) :
GALGAS_immediatExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice_2D_weak GALGAS_immediatSlice_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_immediatSlice_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice GALGAS_immediatSlice_2D_weak::bang_immediatSlice_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_immediatSlice result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatSlice) ;
      result = GALGAS_immediatSlice ((cPtr_immediatSlice *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatSlice-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice_2D_weak ("immediatSlice-weak",
                                                                             & kTypeDescriptor_GALGAS_immediatExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatSlice_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatSlice_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSlice_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSlice_2D_weak GALGAS_immediatSlice_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_immediatSlice_2D_weak result ;
  const GALGAS_immediatSlice_2D_weak * p = (const GALGAS_immediatSlice_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatSlice_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSlice-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@constantDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_constantDefinitionList : public cCollectionElement {
  public: GALGAS_constantDefinitionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_constantDefinitionList (const GALGAS_lstring & in_mConstantName,
                                                     const GALGAS_immediatExpression & in_mExpression
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_constantDefinitionList (const GALGAS_constantDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_constantDefinitionList::cCollectionElement_constantDefinitionList (const GALGAS_lstring & in_mConstantName,
                                                                                      const GALGAS_immediatExpression & in_mExpression
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_constantDefinitionList::cCollectionElement_constantDefinitionList (const GALGAS_constantDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantName, inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_constantDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_constantDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_constantDefinitionList (mObject.mProperty_mConstantName, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_constantDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mConstantName" ":") ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_constantDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_constantDefinitionList * operand = (cCollectionElement_constantDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_constantDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList::GALGAS_constantDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList::GALGAS_constantDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_constantDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                       const GALGAS_immediatExpression & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_constantDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_constantDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_constantDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mConstantName,
                                                               const GALGAS_immediatExpression & in_mExpression
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_constantDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_constantDefinitionList (in_mConstantName,
                                                            in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_immediatExpression & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_constantDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_immediatExpression inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_constantDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_immediatExpression inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_constantDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_immediatExpression & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
        outOperand0 = p->mObject.mProperty_mConstantName ;
        outOperand1 = p->mObject.mProperty_mExpression ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_immediatExpression & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_immediatExpression & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_immediatExpression & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_immediatExpression & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::add_operation (const GALGAS_constantDefinitionList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_constantDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_constantDefinitionList result = GALGAS_constantDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_constantDefinitionList result = GALGAS_constantDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_constantDefinitionList result = GALGAS_constantDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::plusAssign_operation (const GALGAS_constantDefinitionList inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::setter_setMConstantNameAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_constantDefinitionList::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    result = p->mObject.mProperty_mConstantName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList::setter_setMExpressionAtIndex (GALGAS_immediatExpression inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_constantDefinitionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  GALGAS_immediatExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_constantDefinitionList::cEnumerator_constantDefinitionList (const GALGAS_constantDefinitionList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element cEnumerator_constantDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constantDefinitionList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject.mProperty_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression cEnumerator_constantDefinitionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @constantDefinitionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantDefinitionList ("constantDefinitionList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constantDefinitionList result ;
  const GALGAS_constantDefinitionList * p = (const GALGAS_constantDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constantDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_actualConfigurationMap::cMapElement_actualConfigurationMap (const GALGAS_lstring & inKey,
                                                                        const GALGAS_uint & in_mRegisterAddress,
                                                                        const GALGAS_uint & in_mRegisterValue
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRegisterAddress (in_mRegisterAddress),
mProperty_mRegisterValue (in_mRegisterValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_actualConfigurationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_actualConfigurationMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_actualConfigurationMap (mProperty_lkey, mProperty_mRegisterAddress, mProperty_mRegisterValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_actualConfigurationMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRegisterAddress" ":") ;
  mProperty_mRegisterAddress.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRegisterValue" ":") ;
  mProperty_mRegisterValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_actualConfigurationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_actualConfigurationMap * operand = (cMapElement_actualConfigurationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterAddress.objectCompare (operand->mProperty_mRegisterAddress) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterValue.objectCompare (operand->mProperty_mRegisterValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap::GALGAS_actualConfigurationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap::GALGAS_actualConfigurationMap (const GALGAS_actualConfigurationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap & GALGAS_actualConfigurationMap::operator = (const GALGAS_actualConfigurationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap GALGAS_actualConfigurationMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_actualConfigurationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap GALGAS_actualConfigurationMap::class_func_mapWithMapToOverride (const GALGAS_actualConfigurationMap & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap GALGAS_actualConfigurationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_actualConfigurationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualConfigurationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         const GALGAS_uint & inArgument0,
                                                         const GALGAS_uint & inArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_actualConfigurationMap * p = nullptr ;
  macroMyNew (p, cMapElement_actualConfigurationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@actualConfigurationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap GALGAS_actualConfigurationMap::add_operation (const GALGAS_actualConfigurationMap & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_actualConfigurationMap result = *this ;
  cEnumerator_actualConfigurationMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRegisterAddress (HERE), enumerator.current_mRegisterValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualConfigurationMap::setter_insertKey (GALGAS_lstring inKey,
                                                      GALGAS_uint inArgument0,
                                                      GALGAS_uint inArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_actualConfigurationMap * p = nullptr ;
  macroMyNew (p, cMapElement_actualConfigurationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_actualConfigurationMap_searchKey = "the '%K' configuration register is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_actualConfigurationMap::method_searchKey (GALGAS_lstring inKey,
                                                      GALGAS_uint & outArgument0,
                                                      GALGAS_uint & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) performSearch (inKey,
                                                                                                             inCompiler,
                                                                                                             kSearchErrorMessage_actualConfigurationMap_searchKey
                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    outArgument0 = p->mProperty_mRegisterAddress ;
    outArgument1 = p->mProperty_mRegisterValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_actualConfigurationMap::getter_mRegisterAddressForKey (const GALGAS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    result = p->mProperty_mRegisterAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_actualConfigurationMap::getter_mRegisterValueForKey (const GALGAS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    result = p->mProperty_mRegisterValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualConfigurationMap::setter_setMRegisterAddressForKey (GALGAS_uint inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_actualConfigurationMap * p = (cMapElement_actualConfigurationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    p->mProperty_mRegisterAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualConfigurationMap::setter_setMRegisterValueForKey (GALGAS_uint inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_actualConfigurationMap * p = (cMapElement_actualConfigurationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    p->mProperty_mRegisterValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_actualConfigurationMap * GALGAS_actualConfigurationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_actualConfigurationMap * result = (cMapElement_actualConfigurationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_actualConfigurationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_actualConfigurationMap::cEnumerator_actualConfigurationMap (const GALGAS_actualConfigurationMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element cEnumerator_actualConfigurationMap::current (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return GALGAS_actualConfigurationMap_2D_element (p->mProperty_lkey, p->mProperty_mRegisterAddress, p->mProperty_mRegisterValue) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_actualConfigurationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_actualConfigurationMap::current_mRegisterAddress (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return p->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_actualConfigurationMap::current_mRegisterValue (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return p->mProperty_mRegisterValue ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_actualConfigurationMap::optional_searchKey (const GALGAS_string & inKey,
                                                        GALGAS_uint & outArgument0,
                                                        GALGAS_uint & outArgument1) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    outArgument0 = p->mProperty_mRegisterAddress ;
    outArgument1 = p->mProperty_mRegisterValue ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actualConfigurationMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualConfigurationMap ("actualConfigurationMap",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualConfigurationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualConfigurationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualConfigurationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap GALGAS_actualConfigurationMap::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap result ;
  const GALGAS_actualConfigurationMap * p = (const GALGAS_actualConfigurationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualConfigurationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualConfigurationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitNumberExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_bitNumberExpression::objectCompare (const GALGAS_bitNumberExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression::GALGAS_bitNumberExpression (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression::GALGAS_bitNumberExpression (const cPtr_bitNumberExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberExpression class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberExpression::cPtr_bitNumberExpression (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @bitNumberExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberExpression ("bitNumberExpression",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_bitNumberExpression::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberExpression result ;
  const GALGAS_bitNumberExpression * p = (const GALGAS_bitNumberExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitNumberExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bitNumberExpression_2D_weak::objectCompare (const GALGAS_bitNumberExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression_2D_weak::GALGAS_bitNumberExpression_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression_2D_weak & GALGAS_bitNumberExpression_2D_weak::operator = (const GALGAS_bitNumberExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression_2D_weak::GALGAS_bitNumberExpression_2D_weak (const GALGAS_bitNumberExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression_2D_weak GALGAS_bitNumberExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_bitNumberExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_bitNumberExpression_2D_weak::bang_bitNumberExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberExpression) ;
      result = GALGAS_bitNumberExpression ((cPtr_bitNumberExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bitNumberExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberExpression_2D_weak ("bitNumberExpression-weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression_2D_weak GALGAS_bitNumberExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberExpression_2D_weak result ;
  const GALGAS_bitNumberExpression_2D_weak * p = (const GALGAS_bitNumberExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitNumberExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitNumberLiteralExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberLiteralExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_bitNumberExpression::printNonNullClassInstanceProperties () ;
    mProperty_mBitNumberLiteralExpression.printNonNullClassInstanceProperties ("mBitNumberLiteralExpression") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_bitNumberLiteralExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bitNumberLiteralExpression * p = (const cPtr_bitNumberLiteralExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mBitNumberLiteralExpression.objectCompare (p->mProperty_mBitNumberLiteralExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpression.objectCompare (p->mProperty_mEndOfExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_bitNumberLiteralExpression::objectCompare (const GALGAS_bitNumberLiteralExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralExpression::GALGAS_bitNumberLiteralExpression (void) :
GALGAS_bitNumberExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralExpression::GALGAS_bitNumberLiteralExpression (const cPtr_bitNumberLiteralExpression * inSourcePtr) :
GALGAS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLiteralExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralExpression GALGAS_bitNumberLiteralExpression::class_func_new (const GALGAS_immediatExpression & inAttribute_mBitNumberLiteralExpression,
                                                                                     const GALGAS_location & inAttribute_mEndOfExpression
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLiteralExpression result ;
  if (inAttribute_mBitNumberLiteralExpression.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bitNumberLiteralExpression (inAttribute_mBitNumberLiteralExpression, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLiteralExpression::setter_setMBitNumberLiteralExpression (GALGAS_immediatExpression inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    p->mProperty_mBitNumberLiteralExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLiteralExpression::setter_setMEndOfExpression (GALGAS_location inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_bitNumberLiteralExpression::readProperty_mBitNumberLiteralExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    return p->mProperty_mBitNumberLiteralExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_bitNumberLiteralExpression::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLiteralExpression class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLiteralExpression::cPtr_bitNumberLiteralExpression (const GALGAS_immediatExpression & in_mBitNumberLiteralExpression,
                                                                  const GALGAS_location & in_mEndOfExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (THERE),
mProperty_mBitNumberLiteralExpression (in_mBitNumberLiteralExpression),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitNumberLiteralExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;
}

void cPtr_bitNumberLiteralExpression::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.addString ("[@bitNumberLiteralExpression:") ;
  mProperty_mBitNumberLiteralExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitNumberLiteralExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitNumberLiteralExpression (mProperty_mBitNumberLiteralExpression, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bitNumberLiteralExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression ("bitNumberLiteralExpression",
                                                                                  & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberLiteralExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberLiteralExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLiteralExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralExpression GALGAS_bitNumberLiteralExpression::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLiteralExpression result ;
  const GALGAS_bitNumberLiteralExpression * p = (const GALGAS_bitNumberLiteralExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitNumberLiteralExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bitNumberLiteralExpression_2D_weak::objectCompare (const GALGAS_bitNumberLiteralExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralExpression_2D_weak::GALGAS_bitNumberLiteralExpression_2D_weak (void) :
GALGAS_bitNumberExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralExpression_2D_weak & GALGAS_bitNumberLiteralExpression_2D_weak::operator = (const GALGAS_bitNumberLiteralExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralExpression_2D_weak::GALGAS_bitNumberLiteralExpression_2D_weak (const GALGAS_bitNumberLiteralExpression & inSource) :
GALGAS_bitNumberExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralExpression_2D_weak GALGAS_bitNumberLiteralExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_bitNumberLiteralExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralExpression GALGAS_bitNumberLiteralExpression_2D_weak::bang_bitNumberLiteralExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bitNumberLiteralExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberLiteralExpression) ;
      result = GALGAS_bitNumberLiteralExpression ((cPtr_bitNumberLiteralExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bitNumberLiteralExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression_2D_weak ("bitNumberLiteralExpression-weak",
                                                                                          & kTypeDescriptor_GALGAS_bitNumberExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberLiteralExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberLiteralExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLiteralExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralExpression_2D_weak GALGAS_bitNumberLiteralExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLiteralExpression_2D_weak result ;
  const GALGAS_bitNumberLiteralExpression_2D_weak * p = (const GALGAS_bitNumberLiteralExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitNumberLiteralExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitNumberLiteralValue reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberLiteralValue::printNonNullClassInstanceProperties (void) const {
    cPtr_bitNumberExpression::printNonNullClassInstanceProperties () ;
    mProperty_mBitNumberLiteralValue.printNonNullClassInstanceProperties ("mBitNumberLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_bitNumberLiteralValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bitNumberLiteralValue * p = (const cPtr_bitNumberLiteralValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitNumberLiteralValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mBitNumberLiteralValue.objectCompare (p->mProperty_mBitNumberLiteralValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_bitNumberLiteralValue::objectCompare (const GALGAS_bitNumberLiteralValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralValue::GALGAS_bitNumberLiteralValue (void) :
GALGAS_bitNumberExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralValue::GALGAS_bitNumberLiteralValue (const cPtr_bitNumberLiteralValue * inSourcePtr) :
GALGAS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLiteralValue) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralValue GALGAS_bitNumberLiteralValue::class_func_new (const GALGAS_luint & inAttribute_mBitNumberLiteralValue
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLiteralValue result ;
  if (inAttribute_mBitNumberLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bitNumberLiteralValue (inAttribute_mBitNumberLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitNumberLiteralValue::setter_setMBitNumberLiteralValue (GALGAS_luint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_bitNumberLiteralValue * p = (cPtr_bitNumberLiteralValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralValue) ;
    p->mProperty_mBitNumberLiteralValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_bitNumberLiteralValue::readProperty_mBitNumberLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_bitNumberLiteralValue * p = (cPtr_bitNumberLiteralValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralValue) ;
    return p->mProperty_mBitNumberLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLiteralValue class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLiteralValue::cPtr_bitNumberLiteralValue (const GALGAS_luint & in_mBitNumberLiteralValue
                                                        COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (THERE),
mProperty_mBitNumberLiteralValue (in_mBitNumberLiteralValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitNumberLiteralValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue ;
}

void cPtr_bitNumberLiteralValue::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.addString ("[@bitNumberLiteralValue:") ;
  mProperty_mBitNumberLiteralValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitNumberLiteralValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitNumberLiteralValue (mProperty_mBitNumberLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bitNumberLiteralValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue ("bitNumberLiteralValue",
                                                                             & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberLiteralValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberLiteralValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLiteralValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralValue GALGAS_bitNumberLiteralValue::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLiteralValue result ;
  const GALGAS_bitNumberLiteralValue * p = (const GALGAS_bitNumberLiteralValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitNumberLiteralValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bitNumberLiteralValue_2D_weak::objectCompare (const GALGAS_bitNumberLiteralValue_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralValue_2D_weak::GALGAS_bitNumberLiteralValue_2D_weak (void) :
GALGAS_bitNumberExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralValue_2D_weak & GALGAS_bitNumberLiteralValue_2D_weak::operator = (const GALGAS_bitNumberLiteralValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralValue_2D_weak::GALGAS_bitNumberLiteralValue_2D_weak (const GALGAS_bitNumberLiteralValue & inSource) :
GALGAS_bitNumberExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralValue_2D_weak GALGAS_bitNumberLiteralValue_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_bitNumberLiteralValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralValue GALGAS_bitNumberLiteralValue_2D_weak::bang_bitNumberLiteralValue_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bitNumberLiteralValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberLiteralValue) ;
      result = GALGAS_bitNumberLiteralValue ((cPtr_bitNumberLiteralValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bitNumberLiteralValue-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue_2D_weak ("bitNumberLiteralValue-weak",
                                                                                     & kTypeDescriptor_GALGAS_bitNumberExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberLiteralValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberLiteralValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLiteralValue_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLiteralValue_2D_weak GALGAS_bitNumberLiteralValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLiteralValue_2D_weak result ;
  const GALGAS_bitNumberLiteralValue_2D_weak * p = (const GALGAS_bitNumberLiteralValue_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitNumberLiteralValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bitNumberLabelValue_2D_weak::objectCompare (const GALGAS_bitNumberLabelValue_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue_2D_weak::GALGAS_bitNumberLabelValue_2D_weak (void) :
GALGAS_bitNumberExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue_2D_weak & GALGAS_bitNumberLabelValue_2D_weak::operator = (const GALGAS_bitNumberLabelValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue_2D_weak::GALGAS_bitNumberLabelValue_2D_weak (const GALGAS_bitNumberLabelValue & inSource) :
GALGAS_bitNumberExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue_2D_weak GALGAS_bitNumberLabelValue_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue GALGAS_bitNumberLabelValue_2D_weak::bang_bitNumberLabelValue_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bitNumberLabelValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberLabelValue) ;
      result = GALGAS_bitNumberLabelValue ((cPtr_bitNumberLabelValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bitNumberLabelValue-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue_2D_weak ("bitNumberLabelValue-weak",
                                                                                   & kTypeDescriptor_GALGAS_bitNumberExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitNumberLabelValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitNumberLabelValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitNumberLabelValue_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitNumberLabelValue_2D_weak GALGAS_bitNumberLabelValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bitNumberLabelValue_2D_weak result ;
  const GALGAS_bitNumberLabelValue_2D_weak * p = (const GALGAS_bitNumberLabelValue_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitNumberLabelValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLabelValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_labelMap::cMapElement_labelMap (const GALGAS_lstring & inKey
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_labelMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_labelMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_labelMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_labelMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_labelMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_labelMap * operand = (cMapElement_labelMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap::GALGAS_labelMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap::GALGAS_labelMap (const GALGAS_labelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap & GALGAS_labelMap::operator = (const GALGAS_labelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap GALGAS_labelMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_labelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap GALGAS_labelMap::class_func_mapWithMapToOverride (const GALGAS_labelMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_labelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap GALGAS_labelMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_labelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_labelMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * p = nullptr ;
  macroMyNew (p, cMapElement_labelMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@labelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap GALGAS_labelMap::add_operation (const GALGAS_labelMap & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GALGAS_labelMap result = *this ;
  cEnumerator_labelMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_labelMap::setter_insertKey (GALGAS_lstring inKey,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * p = nullptr ;
  macroMyNew (p, cMapElement_labelMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already in use" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_labelMap * GALGAS_labelMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * result = (cMapElement_labelMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_labelMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_labelMap::cEnumerator_labelMap (const GALGAS_labelMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element cEnumerator_labelMap::current (LOCATION_ARGS) const {
  const cMapElement_labelMap * p = (const cMapElement_labelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_labelMap) ;
  return GALGAS_labelMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_labelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_labelMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_labelMap * p = (const cMapElement_labelMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_labelMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @labelMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_labelMap ("labelMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_labelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_labelMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap GALGAS_labelMap::extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_labelMap result ;
  const GALGAS_labelMap * p = (const GALGAS_labelMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_labelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@uint x4String'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_x_34_String (const GALGAS_uint & inObject,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_uint temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.objectCompare (GALGAS_uint (uint32_t (65535U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult = GALGAS_string ("****") ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_uint temp_2 = inObject ;
    result_outResult = temp_2.right_shift_operation (GALGAS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 31)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 31)) ;
    const GALGAS_uint temp_3 = inObject ;
    result_outResult.plusAssign_operation(temp_3.right_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)).operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)) ;
    const GALGAS_uint temp_4 = inObject ;
    result_outResult.plusAssign_operation(temp_4.right_shift_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)).operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)) ;
    const GALGAS_uint temp_5 = inObject ;
    result_outResult.plusAssign_operation(temp_5.operator_and (GALGAS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 34)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 34)) ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

cMapElement_constantMap::cMapElement_constantMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_sint_36__34_ & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_constantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_constantMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_constantMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_constantMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_constantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantMap * operand = (cMapElement_constantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap::GALGAS_constantMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap::GALGAS_constantMap (const GALGAS_constantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap & GALGAS_constantMap::operator = (const GALGAS_constantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_constantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::class_func_mapWithMapToOverride (const GALGAS_constantMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_constantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_sint_36__34_ & inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = nullptr ;
  macroMyNew (p, cMapElement_constantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::add_operation (const GALGAS_constantMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_constantMap result = *this ;
  cEnumerator_constantMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_sint_36__34_ inArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = nullptr ;
  macroMyNew (p, cMapElement_constantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_constantMap_searchKey = "the '%K' constant is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_sint_36__34_ & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_constantMap_searchKey
                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constantMap) ;
    outArgument0 = p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_ GALGAS_constantMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GALGAS_sint_36__34_ result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap::setter_setMValueForKey (GALGAS_sint_36__34_ inAttributeValue,
                                                 GALGAS_string inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantMap * p = (cMapElement_constantMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_constantMap * GALGAS_constantMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * result = (cMapElement_constantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_constantMap::cEnumerator_constantMap (const GALGAS_constantMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element cEnumerator_constantMap::current (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return GALGAS_constantMap_2D_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_ cEnumerator_constantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constantMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_sint_36__34_ & outArgument0) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    outArgument0 = p->mProperty_mValue ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constantMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap ("constantMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constantMap result ;
  const GALGAS_constantMap * p = (const GALGAS_constantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineMap::cMapElement_routineMap (const GALGAS_lstring & inKey,
                                                const GALGAS_bool & in_mIsNoReturn,
                                                const GALGAS_uint & in_mRequiredBank,
                                                const GALGAS_uint & in_mReturnedBank,
                                                const GALGAS_bool & in_mPreservesBank
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsNoReturn (in_mIsNoReturn),
mProperty_mRequiredBank (in_mRequiredBank),
mProperty_mReturnedBank (in_mReturnedBank),
mProperty_mPreservesBank (in_mPreservesBank) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_routineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_routineMap (mProperty_lkey, mProperty_mIsNoReturn, mProperty_mRequiredBank, mProperty_mReturnedBank, mProperty_mPreservesBank COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_routineMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIsNoReturn" ":") ;
  mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRequiredBank" ":") ;
  mProperty_mRequiredBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mReturnedBank" ":") ;
  mProperty_mReturnedBank.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mPreservesBank" ":") ;
  mProperty_mPreservesBank.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_routineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineMap * operand = (cMapElement_routineMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsNoReturn.objectCompare (operand->mProperty_mIsNoReturn) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRequiredBank.objectCompare (operand->mProperty_mRequiredBank) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnedBank.objectCompare (operand->mProperty_mReturnedBank) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPreservesBank.objectCompare (operand->mProperty_mPreservesBank) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap::GALGAS_routineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap::GALGAS_routineMap (const GALGAS_routineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap & GALGAS_routineMap::operator = (const GALGAS_routineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::class_func_mapWithMapToOverride (const GALGAS_routineMap & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_routineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_bool & inArgument0,
                                             const GALGAS_uint & inArgument1,
                                             const GALGAS_uint & inArgument2,
                                             const GALGAS_bool & inArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::add_operation (const GALGAS_routineMap & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineMap result = *this ;
  cEnumerator_routineMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIsNoReturn (HERE), enumerator.current_mRequiredBank (HERE), enumerator.current_mReturnedBank (HERE), enumerator.current_mPreservesBank (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::setter_insertKey (GALGAS_lstring inKey,
                                          GALGAS_bool inArgument0,
                                          GALGAS_uint inArgument1,
                                          GALGAS_uint inArgument2,
                                          GALGAS_bool inArgument3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_routineMap_searchKey = "the '%K' routine is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_bool & outArgument0,
                                          GALGAS_uint & outArgument1,
                                          GALGAS_uint & outArgument2,
                                          GALGAS_bool & outArgument3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_routineMap_searchKey
                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineMap) ;
    outArgument0 = p->mProperty_mIsNoReturn ;
    outArgument1 = p->mProperty_mRequiredBank ;
    outArgument2 = p->mProperty_mReturnedBank ;
    outArgument3 = p->mProperty_mPreservesBank ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineMap::getter_mIsNoReturnForKey (const GALGAS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_routineMap::getter_mRequiredBankForKey (const GALGAS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mProperty_mRequiredBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_routineMap::getter_mReturnedBankForKey (const GALGAS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mProperty_mReturnedBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineMap::getter_mPreservesBankForKey (const GALGAS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mProperty_mPreservesBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::setter_setMIsNoReturnForKey (GALGAS_bool inAttributeValue,
                                                     GALGAS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mProperty_mIsNoReturn = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::setter_setMRequiredBankForKey (GALGAS_uint inAttributeValue,
                                                       GALGAS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mProperty_mRequiredBank = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::setter_setMReturnedBankForKey (GALGAS_uint inAttributeValue,
                                                       GALGAS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mProperty_mReturnedBank = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::setter_setMPreservesBankForKey (GALGAS_bool inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mProperty_mPreservesBank = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineMap * GALGAS_routineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * result = (cMapElement_routineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_routineMap::cEnumerator_routineMap (const GALGAS_routineMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element cEnumerator_routineMap::current (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return GALGAS_routineMap_2D_element (p->mProperty_lkey, p->mProperty_mIsNoReturn, p->mProperty_mRequiredBank, p->mProperty_mReturnedBank, p->mProperty_mPreservesBank) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_routineMap::current_mRequiredBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_routineMap::current_mReturnedBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineMap::current_mPreservesBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineMap::optional_searchKey (const GALGAS_string & inKey,
                                            GALGAS_bool & outArgument0,
                                            GALGAS_uint & outArgument1,
                                            GALGAS_uint & outArgument2,
                                            GALGAS_bool & outArgument3) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    outArgument0 = p->mProperty_mIsNoReturn ;
    outArgument1 = p->mProperty_mRequiredBank ;
    outArgument2 = p->mProperty_mReturnedBank ;
    outArgument3 = p->mProperty_mPreservesBank ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  const GALGAS_routineMap * p = (const GALGAS_routineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind::GALGAS_routineKind (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::class_func_regularRoutine (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_regularRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::class_func_noReturnRoutine (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_noReturnRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::class_func_interruptRoutine (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_interruptRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineKind::optional_regularRoutine () const {
  const bool ok = mEnum == kEnum_regularRoutine ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineKind::optional_noReturnRoutine () const {
  const bool ok = mEnum == kEnum_noReturnRoutine ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineKind::optional_interruptRoutine () const {
  const bool ok = mEnum == kEnum_interruptRoutine ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_routineKind [4] = {
  "(not built)",
  "regularRoutine",
  "noReturnRoutine",
  "interruptRoutine"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isRegularRoutine (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_regularRoutine == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isNoReturnRoutine (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noReturnRoutine == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isInterruptRoutine (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_interruptRoutine == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineKind::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @routineKind: ") ;
  ioString.addString (gEnumNameArrayFor_routineKind [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineKind::objectCompare (const GALGAS_routineKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  const GALGAS_routineKind * p = (const GALGAS_routineKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@immediatExpression eval'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (cPtr_immediatExpression * inObject,
                               const GALGAS_registerTable constin_inRegisterTable,
                               const GALGAS_constantMap constin_inConstantMap,
                               GALGAS_sint_36__34_ & out_outResult,
                               GALGAS_stringset & io_ioUsedRegisters,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResult.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_immediatExpression) ;
    inObject->method_eval (constin_inRegisterTable, constin_inConstantMap, out_outResult, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@bitNumberExpression getBitNumber'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBitNumber (cPtr_bitNumberExpression * inObject,
                                       const GALGAS_registerTable constin_inRegisterTable,
                                       const GALGAS_constantMap constin_inConstantMap,
                                       GALGAS_stringset & io_ioUsedRegisters,
                                       const GALGAS_bitSliceTable constin_inBitSliceTable,
                                       GALGAS_uint & out_outBitNumber,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outBitNumber.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_bitNumberExpression) ;
    inObject->method_getBitNumber (constin_inRegisterTable, constin_inConstantMap, io_ioUsedRegisters, constin_inBitSliceTable, out_outBitNumber, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForOptimizations::cMapElement_symbolTableForOptimizations (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_uint & in_mDefinitionLineIndex,
                                                                                  const GALGAS_bool & in_mIsDeletable
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDefinitionLineIndex (in_mDefinitionLineIndex),
mProperty_mIsDeletable (in_mIsDeletable) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_symbolTableForOptimizations::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_symbolTableForOptimizations::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_symbolTableForOptimizations (mProperty_lkey, mProperty_mDefinitionLineIndex, mProperty_mIsDeletable COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_symbolTableForOptimizations::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDefinitionLineIndex" ":") ;
  mProperty_mDefinitionLineIndex.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIsDeletable" ":") ;
  mProperty_mIsDeletable.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_symbolTableForOptimizations::compare (const cCollectionElement * inOperand) const {
  cMapElement_symbolTableForOptimizations * operand = (cMapElement_symbolTableForOptimizations *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefinitionLineIndex.objectCompare (operand->mProperty_mDefinitionLineIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsDeletable.objectCompare (operand->mProperty_mIsDeletable) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations::GALGAS_symbolTableForOptimizations (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations::GALGAS_symbolTableForOptimizations (const GALGAS_symbolTableForOptimizations & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations & GALGAS_symbolTableForOptimizations::operator = (const GALGAS_symbolTableForOptimizations & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations GALGAS_symbolTableForOptimizations::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations GALGAS_symbolTableForOptimizations::class_func_mapWithMapToOverride (const GALGAS_symbolTableForOptimizations & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations GALGAS_symbolTableForOptimizations::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForOptimizations result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_uint & inArgument0,
                                                              const GALGAS_bool & inArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForOptimizations * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForOptimizations (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForOptimizations insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations GALGAS_symbolTableForOptimizations::add_operation (const GALGAS_symbolTableForOptimizations & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForOptimizations result = *this ;
  cEnumerator_symbolTableForOptimizations enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mDefinitionLineIndex (HERE), enumerator.current_mIsDeletable (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_uint inArgument0,
                                                           GALGAS_bool inArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForOptimizations * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForOptimizations (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_symbolTableForOptimizations_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations::method_searchKey (GALGAS_lstring inKey,
                                                           GALGAS_uint & outArgument0,
                                                           GALGAS_bool & outArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) performSearch (inKey,
                                                                                                                       inCompiler,
                                                                                                                       kSearchErrorMessage_symbolTableForOptimizations_searchKey
                                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    outArgument0 = p->mProperty_mDefinitionLineIndex ;
    outArgument1 = p->mProperty_mIsDeletable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations::setter_removeKey (GALGAS_lstring inKey,
                                                           GALGAS_uint & outArgument0,
                                                           GALGAS_bool & outArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "the '%K' label is not declared" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_symbolTableForOptimizations * p = (cMapElement_symbolTableForOptimizations *) attributes.ptr () ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    outArgument0 = p->mProperty_mDefinitionLineIndex ;
    outArgument1 = p->mProperty_mIsDeletable ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_symbolTableForOptimizations::getter_mDefinitionLineIndexForKey (const GALGAS_string & inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    result = p->mProperty_mDefinitionLineIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_symbolTableForOptimizations::getter_mIsDeletableForKey (const GALGAS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    result = p->mProperty_mIsDeletable ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations::setter_setMDefinitionLineIndexForKey (GALGAS_uint inAttributeValue,
                                                                               GALGAS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForOptimizations * p = (cMapElement_symbolTableForOptimizations *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    p->mProperty_mDefinitionLineIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations::setter_setMIsDeletableForKey (GALGAS_bool inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForOptimizations * p = (cMapElement_symbolTableForOptimizations *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    p->mProperty_mIsDeletable = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForOptimizations * GALGAS_symbolTableForOptimizations::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForOptimizations * result = (cMapElement_symbolTableForOptimizations *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForOptimizations) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_symbolTableForOptimizations::cEnumerator_symbolTableForOptimizations (const GALGAS_symbolTableForOptimizations & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element cEnumerator_symbolTableForOptimizations::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return GALGAS_symbolTableForOptimizations_2D_element (p->mProperty_lkey, p->mProperty_mDefinitionLineIndex, p->mProperty_mIsDeletable) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_symbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_symbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return p->mProperty_mDefinitionLineIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_symbolTableForOptimizations::current_mIsDeletable (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return p->mProperty_mIsDeletable ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForOptimizations::optional_searchKey (const GALGAS_string & inKey,
                                                             GALGAS_uint & outArgument0,
                                                             GALGAS_bool & outArgument1) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    outArgument0 = p->mProperty_mDefinitionLineIndex ;
    outArgument1 = p->mProperty_mIsDeletable ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForOptimizations generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations ("symbolTableForOptimizations",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForOptimizations::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForOptimizations::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForOptimizations (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations GALGAS_symbolTableForOptimizations::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations result ;
  const GALGAS_symbolTableForOptimizations * p = (const GALGAS_symbolTableForOptimizations *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_symbolTableForOptimizations *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_configFieldMap::cMapElement_configFieldMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lstring & in_mRegisterName,
                                                        const GALGAS_luint & in_mMaskValue,
                                                        const GALGAS_lstring & in_mDescription,
                                                        const GALGAS_fieldSettingMap & in_mFieldSettingMap
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRegisterName (in_mRegisterName),
mProperty_mMaskValue (in_mMaskValue),
mProperty_mDescription (in_mDescription),
mProperty_mFieldSettingMap (in_mFieldSettingMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_configFieldMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_configFieldMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_configFieldMap (mProperty_lkey, mProperty_mRegisterName, mProperty_mMaskValue, mProperty_mDescription, mProperty_mFieldSettingMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_configFieldMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mRegisterName" ":") ;
  mProperty_mRegisterName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMaskValue" ":") ;
  mProperty_mMaskValue.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDescription" ":") ;
  mProperty_mDescription.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mFieldSettingMap" ":") ;
  mProperty_mFieldSettingMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_configFieldMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_configFieldMap * operand = (cMapElement_configFieldMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterName.objectCompare (operand->mProperty_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMaskValue.objectCompare (operand->mProperty_mMaskValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDescription.objectCompare (operand->mProperty_mDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldSettingMap.objectCompare (operand->mProperty_mFieldSettingMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap::GALGAS_configFieldMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap::GALGAS_configFieldMap (const GALGAS_configFieldMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap & GALGAS_configFieldMap::operator = (const GALGAS_configFieldMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap GALGAS_configFieldMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_configFieldMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap GALGAS_configFieldMap::class_func_mapWithMapToOverride (const GALGAS_configFieldMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_configFieldMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap GALGAS_configFieldMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_configFieldMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_lstring & inArgument0,
                                                 const GALGAS_luint & inArgument1,
                                                 const GALGAS_lstring & inArgument2,
                                                 const GALGAS_fieldSettingMap & inArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_configFieldMap * p = nullptr ;
  macroMyNew (p, cMapElement_configFieldMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@configFieldMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap GALGAS_configFieldMap::add_operation (const GALGAS_configFieldMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_configFieldMap result = *this ;
  cEnumerator_configFieldMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRegisterName (HERE), enumerator.current_mMaskValue (HERE), enumerator.current_mDescription (HERE), enumerator.current_mFieldSettingMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_lstring inArgument0,
                                              GALGAS_luint inArgument1,
                                              GALGAS_lstring inArgument2,
                                              GALGAS_fieldSettingMap inArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_configFieldMap * p = nullptr ;
  macroMyNew (p, cMapElement_configFieldMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration field is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_configFieldMap_searchKey = "the '%K' configuration field is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_lstring & outArgument0,
                                              GALGAS_luint & outArgument1,
                                              GALGAS_lstring & outArgument2,
                                              GALGAS_fieldSettingMap & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_configFieldMap_searchKey
                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    outArgument0 = p->mProperty_mRegisterName ;
    outArgument1 = p->mProperty_mMaskValue ;
    outArgument2 = p->mProperty_mDescription ;
    outArgument3 = p->mProperty_mFieldSettingMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_configFieldMap::getter_mRegisterNameForKey (const GALGAS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mProperty_mRegisterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_configFieldMap::getter_mMaskValueForKey (const GALGAS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mProperty_mMaskValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_configFieldMap::getter_mDescriptionForKey (const GALGAS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mProperty_mDescription ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_configFieldMap::getter_mFieldSettingMapForKey (const GALGAS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GALGAS_fieldSettingMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mProperty_mFieldSettingMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap::setter_setMRegisterNameForKey (GALGAS_lstring inAttributeValue,
                                                           GALGAS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configFieldMap * p = (cMapElement_configFieldMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    p->mProperty_mRegisterName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap::setter_setMMaskValueForKey (GALGAS_luint inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configFieldMap * p = (cMapElement_configFieldMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    p->mProperty_mMaskValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap::setter_setMDescriptionForKey (GALGAS_lstring inAttributeValue,
                                                          GALGAS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configFieldMap * p = (cMapElement_configFieldMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    p->mProperty_mDescription = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap::setter_setMFieldSettingMapForKey (GALGAS_fieldSettingMap inAttributeValue,
                                                              GALGAS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_configFieldMap * p = (cMapElement_configFieldMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    p->mProperty_mFieldSettingMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_configFieldMap * GALGAS_configFieldMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_configFieldMap * result = (cMapElement_configFieldMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_configFieldMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_configFieldMap::cEnumerator_configFieldMap (const GALGAS_configFieldMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap_2D_element cEnumerator_configFieldMap::current (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return GALGAS_configFieldMap_2D_element (p->mProperty_lkey, p->mProperty_mRegisterName, p->mProperty_mMaskValue, p->mProperty_mDescription, p->mProperty_mFieldSettingMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configFieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configFieldMap::current_mRegisterName (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_configFieldMap::current_mMaskValue (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_configFieldMap::current_mDescription (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap cEnumerator_configFieldMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mFieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_configFieldMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_lstring & outArgument0,
                                                GALGAS_luint & outArgument1,
                                                GALGAS_lstring & outArgument2,
                                                GALGAS_fieldSettingMap & outArgument3) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    outArgument0 = p->mProperty_mRegisterName ;
    outArgument1 = p->mProperty_mMaskValue ;
    outArgument2 = p->mProperty_mDescription ;
    outArgument3 = p->mProperty_mFieldSettingMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configFieldMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configFieldMap ("configFieldMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configFieldMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap GALGAS_configFieldMap::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_configFieldMap result ;
  const GALGAS_configFieldMap * p = (const GALGAS_configFieldMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_fieldSettingMap::cMapElement_fieldSettingMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mValue,
                                                          const GALGAS_uint & in_mMask
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue),
mProperty_mMask (in_mMask) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_fieldSettingMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_fieldSettingMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_fieldSettingMap (mProperty_lkey, mProperty_mValue, mProperty_mMask COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_fieldSettingMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMask" ":") ;
  mProperty_mMask.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_fieldSettingMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_fieldSettingMap * operand = (cMapElement_fieldSettingMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMask.objectCompare (operand->mProperty_mMask) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap::GALGAS_fieldSettingMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap::GALGAS_fieldSettingMap (const GALGAS_fieldSettingMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap & GALGAS_fieldSettingMap::operator = (const GALGAS_fieldSettingMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_fieldSettingMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::class_func_mapWithMapToOverride (const GALGAS_fieldSettingMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_fieldSettingMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_fieldSettingMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  const GALGAS_uint & inArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_fieldSettingMap * p = nullptr ;
  macroMyNew (p, cMapElement_fieldSettingMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@fieldSettingMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::add_operation (const GALGAS_fieldSettingMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_fieldSettingMap result = *this ;
  cEnumerator_fieldSettingMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mValue (HERE), enumerator.current_mMask (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               GALGAS_uint inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_fieldSettingMap * p = nullptr ;
  macroMyNew (p, cMapElement_fieldSettingMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register setting is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_fieldSettingMap_searchKey = "the '%K' configuration register setting is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               GALGAS_uint & outArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_fieldSettingMap_searchKey
                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    outArgument0 = p->mProperty_mValue ;
    outArgument1 = p->mProperty_mMask ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_fieldSettingMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_fieldSettingMap::getter_mMaskForKey (const GALGAS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    result = p->mProperty_mMask ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap::setter_setMValueForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_fieldSettingMap * p = (cMapElement_fieldSettingMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap::setter_setMMaskForKey (GALGAS_uint inAttributeValue,
                                                    GALGAS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_fieldSettingMap * p = (cMapElement_fieldSettingMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    p->mProperty_mMask = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_fieldSettingMap * GALGAS_fieldSettingMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_fieldSettingMap * result = (cMapElement_fieldSettingMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_fieldSettingMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_fieldSettingMap::cEnumerator_fieldSettingMap (const GALGAS_fieldSettingMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element cEnumerator_fieldSettingMap::current (LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
  return GALGAS_fieldSettingMap_2D_element (p->mProperty_lkey, p->mProperty_mValue, p->mProperty_mMask) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_fieldSettingMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_fieldSettingMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_fieldSettingMap::current_mMask (LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
  return p->mProperty_mMask ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fieldSettingMap::optional_searchKey (const GALGAS_string & inKey,
                                                 GALGAS_uint & outArgument0,
                                                 GALGAS_uint & outArgument1) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    outArgument0 = p->mProperty_mValue ;
    outArgument1 = p->mProperty_mMask ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fieldSettingMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldSettingMap ("fieldSettingMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fieldSettingMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fieldSettingMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fieldSettingMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fieldSettingMap result ;
  const GALGAS_fieldSettingMap * p = (const GALGAS_fieldSettingMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fieldSettingMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

