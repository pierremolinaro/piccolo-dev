#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@_32_lstringlist' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                              const GGS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                        const GGS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue0" ":") ;
  mObject.mProperty_mValue_30_.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue1" ":") ;
  mObject.mProperty_mValue_31_.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inValue
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS__32_lstringlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS__32_lstringlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_,
                                                     in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1
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

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
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

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
      outOperand0 = p->mObject.mProperty_mValue_30_ ;
      outOperand1 = p->mObject.mProperty_mValue_31_ ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
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

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
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

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
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

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
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

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssignOperation (const GGS__32_lstringlist inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
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

GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_30_ ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
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

GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_31_ ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator__32_lstringlist::DownEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element DownEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_31_ ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator__32_lstringlist::UpEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element UpEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//     @2lstringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  const GGS__32_lstringlist * p = (const GGS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist *> (p)) {
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

//--- Unicode string for '$!$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__21_ = {
  TO_UNICODE ('!'),
} ;

//--- Unicode string for '$!=$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__21__3D_ = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$%$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__25_ = {
  TO_UNICODE ('%'),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__26_ = {
  TO_UNICODE ('&'),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__28_ = {
  TO_UNICODE ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__29_ = {
  TO_UNICODE (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2A_ = {
  TO_UNICODE ('*'),
} ;

//--- Unicode string for '$*+$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2A__2B_ = {
  TO_UNICODE ('*'),
  TO_UNICODE ('+'),
} ;

//--- Unicode string for '$*-$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2A__2D_ = {
  TO_UNICODE ('*'),
  TO_UNICODE ('-'),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2B_ = {
  TO_UNICODE ('+'),
} ;

//--- Unicode string for '$+*$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2B__2A_ = {
  TO_UNICODE ('+'),
  TO_UNICODE ('*'),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2C_ = {
  TO_UNICODE (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2D_ = {
  TO_UNICODE ('-'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2E_ = {
  TO_UNICODE ('.'),
} ;

//--- Unicode string for '$...$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2E__2E__2E_ = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
} ;

//--- Unicode string for '$/$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__2F_ = {
  TO_UNICODE ('/'),
} ;

//--- Unicode string for '$0b$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__30_b = {
  TO_UNICODE ('0'),
  TO_UNICODE ('b'),
} ;

//--- Unicode string for '$0x$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__30_x = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3A_ = {
  TO_UNICODE (':'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3B_ = {
  TO_UNICODE (';'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3C_ = {
  TO_UNICODE ('<'),
} ;

//--- Unicode string for '$<<$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3C__3C_ = {
  TO_UNICODE ('<'),
  TO_UNICODE ('<'),
} ;

//--- Unicode string for '$<=$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3C__3D_ = {
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3D_ = {
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$==$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3D__3D_ = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3E_ = {
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$>=$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3E__3D_ = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$>>$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3E__3E_ = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$?$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__3F_ = {
  TO_UNICODE ('\?'),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__5B_ = {
  TO_UNICODE ('['),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__5D_ = {
  TO_UNICODE (']'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__5E_ = {
  TO_UNICODE ('^'),
} ;

//--- Unicode string for '$addlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_addlw = {
  TO_UNICODE ('a'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$addwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_addwf = {
  TO_UNICODE ('a'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$addwfc$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_addwfc = {
  TO_UNICODE ('a'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$andlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_andlw = {
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$andwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_andwf = {
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$bank$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bank = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$banksave$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_banksave = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$banksel$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_banksel = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$baseline$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_baseline = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$bc$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bc = {
  TO_UNICODE ('b'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$bcf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bcf = {
  TO_UNICODE ('b'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$block$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_block = {
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$bn$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bn = {
  TO_UNICODE ('b'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$bnc$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bnc = {
  TO_UNICODE ('b'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$bnn$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bnn = {
  TO_UNICODE ('b'),
  TO_UNICODE ('n'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$bnov$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bnov = {
  TO_UNICODE ('b'),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
} ;

//--- Unicode string for '$bnz$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bnz = {
  TO_UNICODE ('b'),
  TO_UNICODE ('n'),
  TO_UNICODE ('z'),
} ;

//--- Unicode string for '$bootloader$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bootloader = {
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
} ;

//--- Unicode string for '$bov$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bov = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
} ;

//--- Unicode string for '$bra$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bra = {
  TO_UNICODE ('b'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
} ;

//--- Unicode string for '$bsf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bsf = {
  TO_UNICODE ('b'),
  TO_UNICODE ('s'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$btg$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_btg = {
  TO_UNICODE ('b'),
  TO_UNICODE ('t'),
  TO_UNICODE ('g'),
} ;

//--- Unicode string for '$byte$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_byte = {
  TO_UNICODE ('b'),
  TO_UNICODE ('y'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$bz$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_bz = {
  TO_UNICODE ('b'),
  TO_UNICODE ('z'),
} ;

//--- Unicode string for '$call$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_call = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$case$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_case = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$checkbank$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_checkbank = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$checknobank$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_checknobank = {
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
} ;

//--- Unicode string for '$checkpic$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_checkpic = {
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('p'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$clrf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_clrf = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('r'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$clrw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_clrw = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('r'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$clrwdt$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_clrwdt = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('r'),
  TO_UNICODE ('w'),
  TO_UNICODE ('d'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$comf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_comf = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$computed$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_computed = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$configuration$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_configuration = {
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
} ;

//--- Unicode string for '$const$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_const = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$contextsave$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_contextsave = {
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
} ;

//--- Unicode string for '$data$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_data = {
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
} ;

//--- Unicode string for '$data16$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_data_31__36_ = {
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('1'),
  TO_UNICODE ('6'),
} ;

//--- Unicode string for '$data8$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_data_38_ = {
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('8'),
} ;

//--- Unicode string for '$daw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_daw = {
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$decf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_decf = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$do$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_do = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$else$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_else = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$elsif$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_elsif = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$end$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_end = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$ensures$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ensures = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$fast$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_fast = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$fnop$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_fnop = {
  TO_UNICODE ('f'),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$forever$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_forever = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$goto$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_goto = {
  TO_UNICODE ('g'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$if$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_if = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$implements$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_implements = {
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
} ;

//--- Unicode string for '$incf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_incf = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$include$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_include = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$inline$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_inline = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$interrupt$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_interrupt = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$iorlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_iorlw = {
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$iorwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_iorwf = {
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$jsr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_jsr = {
  TO_UNICODE ('j'),
  TO_UNICODE ('s'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$jump$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_jump = {
  TO_UNICODE ('j'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$ldata16ptr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ldata_31__36_ptr = {
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
} ;

//--- Unicode string for '$ldata8ptr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ldata_38_ptr = {
  TO_UNICODE ('l'),
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('8'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$ldataptr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ldataptr = {
  TO_UNICODE ('l'),
  TO_UNICODE ('d'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$lfsr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_lfsr = {
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE ('s'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$ltblptr$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ltblptr = {
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$macro$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_macro = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$midrange$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_midrange = {
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$mnop$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_mnop = {
  TO_UNICODE ('m'),
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$movf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_movf = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$movff$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_movff = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('f'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$movlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_movlw = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$movwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_movwf = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$mullw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_mullw = {
  TO_UNICODE ('m'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$mulwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_mulwf = {
  TO_UNICODE ('m'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$negf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_negf = {
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$nobank$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_nobank = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$nop$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_nop = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$nopbra$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_nopbra = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('b'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
} ;

//--- Unicode string for '$noreturn$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_noreturn = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$option$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_option = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$page$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_page = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$pic18$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_pic_31__38_ = {
  TO_UNICODE ('p'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('1'),
  TO_UNICODE ('8'),
} ;

//--- Unicode string for '$pop$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_pop = {
  TO_UNICODE ('p'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$preserved$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_preserved = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$private$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_private = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$protected$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_protected = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$push$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_push = {
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('h'),
} ;

//--- Unicode string for '$ram$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_ram = {
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
} ;

//--- Unicode string for '$rcall$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rcall = {
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$requires$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_requires = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$reset$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_reset = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$retlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_retlw = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$rlcf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rlcf = {
  TO_UNICODE ('r'),
  TO_UNICODE ('l'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$rlf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rlf = {
  TO_UNICODE ('r'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$rlncf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rlncf = {
  TO_UNICODE ('r'),
  TO_UNICODE ('l'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$rom$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rom = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
} ;

//--- Unicode string for '$routine$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_routine = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$rrcf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rrcf = {
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$rrf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rrf = {
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$rrncf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_rrncf = {
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$setf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_setf = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$sleep$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_sleep = {
  TO_UNICODE ('s'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$subfwb$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_subfwb = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('f'),
  TO_UNICODE ('w'),
  TO_UNICODE ('b'),
} ;

//--- Unicode string for '$sublw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_sublw = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$subwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_subwf = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$subwfb$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_subwfb = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
  TO_UNICODE ('b'),
} ;

//--- Unicode string for '$swapf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_swapf = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$switch$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_switch = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
} ;

//--- Unicode string for '$tblrd$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_tblrd = {
  TO_UNICODE ('t'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('r'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$tblwt$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_tblwt = {
  TO_UNICODE ('t'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$tris$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_tris = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$unused$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_unused = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$uses$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_uses = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$w$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_w = {
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$while$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_while = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$xorlw$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_xorlw = {
  TO_UNICODE ('x'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('l'),
  TO_UNICODE ('w'),
} ;

//--- Unicode string for '$xorwf$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique_xorwf = {
  TO_UNICODE ('x'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('w'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__7B_ = {
  TO_UNICODE ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__7C_ = {
  TO_UNICODE ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__7D_ = {
  TO_UNICODE ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_piccolo_5F_lexique__7E_ = {
  TO_UNICODE ('~'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'controlKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccolo_5F_lexique_controlKeyWordList = 48 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_controlKeyWordList [ktable_size_piccolo_5F_lexique_controlKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_w, Lexique_piccolo_5F_lexique::kToken_w),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_do, Lexique_piccolo_5F_lexique::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_if, Lexique_piccolo_5F_lexique::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_end, Lexique_piccolo_5F_lexique::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ram, Lexique_piccolo_5F_lexique::kToken_ram),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rom, Lexique_piccolo_5F_lexique::kToken_rom),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bank, Lexique_piccolo_5F_lexique::kToken_bank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_byte, Lexique_piccolo_5F_lexique::kToken_byte),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_case, Lexique_piccolo_5F_lexique::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_data, Lexique_piccolo_5F_lexique::kToken_data),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_else, Lexique_piccolo_5F_lexique::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_fast, Lexique_piccolo_5F_lexique::kToken_fast),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_page, Lexique_piccolo_5F_lexique::kToken_page),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_uses, Lexique_piccolo_5F_lexique::kToken_uses),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_block, Lexique_piccolo_5F_lexique::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_const, Lexique_piccolo_5F_lexique::kToken_const),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_data_38_, Lexique_piccolo_5F_lexique::kToken_data_38_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_elsif, Lexique_piccolo_5F_lexique::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_macro, Lexique_piccolo_5F_lexique::kToken_macro),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_pic_31__38_, Lexique_piccolo_5F_lexique::kToken_pic_31__38_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_while, Lexique_piccolo_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_data_31__36_, Lexique_piccolo_5F_lexique::kToken_data_31__36_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_inline, Lexique_piccolo_5F_lexique::kToken_inline),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nobank, Lexique_piccolo_5F_lexique::kToken_nobank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_switch, Lexique_piccolo_5F_lexique::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_unused, Lexique_piccolo_5F_lexique::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_banksel, Lexique_piccolo_5F_lexique::kToken_banksel),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ensures, Lexique_piccolo_5F_lexique::kToken_ensures),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_forever, Lexique_piccolo_5F_lexique::kToken_forever),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_include, Lexique_piccolo_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_private, Lexique_piccolo_5F_lexique::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_routine, Lexique_piccolo_5F_lexique::kToken_routine),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_banksave, Lexique_piccolo_5F_lexique::kToken_banksave),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_baseline, Lexique_piccolo_5F_lexique::kToken_baseline),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checkpic, Lexique_piccolo_5F_lexique::kToken_checkpic),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_computed, Lexique_piccolo_5F_lexique::kToken_computed),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_midrange, Lexique_piccolo_5F_lexique::kToken_midrange),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_noreturn, Lexique_piccolo_5F_lexique::kToken_noreturn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_requires, Lexique_piccolo_5F_lexique::kToken_requires),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checkbank, Lexique_piccolo_5F_lexique::kToken_checkbank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_interrupt, Lexique_piccolo_5F_lexique::kToken_interrupt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_preserved, Lexique_piccolo_5F_lexique::kToken_preserved),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_protected, Lexique_piccolo_5F_lexique::kToken_protected),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bootloader, Lexique_piccolo_5F_lexique::kToken_bootloader),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_implements, Lexique_piccolo_5F_lexique::kToken_implements),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checknobank, Lexique_piccolo_5F_lexique::kToken_checknobank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_contextsave, Lexique_piccolo_5F_lexique::kToken_contextsave),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_configuration, Lexique_piccolo_5F_lexique::kToken_configuration)
} ;

int32_t Lexique_piccolo_5F_lexique::search_into_controlKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_controlKeyWordList, ktable_size_piccolo_5F_lexique_controlKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccolo_5F_lexique_delimitorsList = 34 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_delimitorsList [ktable_size_piccolo_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__21_, Lexique_piccolo_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__25_, Lexique_piccolo_5F_lexique::kToken__25_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__26_, Lexique_piccolo_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__28_, Lexique_piccolo_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__29_, Lexique_piccolo_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A_, Lexique_piccolo_5F_lexique::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2B_, Lexique_piccolo_5F_lexique::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2C_, Lexique_piccolo_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2D_, Lexique_piccolo_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2E_, Lexique_piccolo_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2F_, Lexique_piccolo_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3A_, Lexique_piccolo_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3B_, Lexique_piccolo_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C_, Lexique_piccolo_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3D_, Lexique_piccolo_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E_, Lexique_piccolo_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3F_, Lexique_piccolo_5F_lexique::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5B_, Lexique_piccolo_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5D_, Lexique_piccolo_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5E_, Lexique_piccolo_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7B_, Lexique_piccolo_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7C_, Lexique_piccolo_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7D_, Lexique_piccolo_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7E_, Lexique_piccolo_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__21__3D_, Lexique_piccolo_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A__2B_, Lexique_piccolo_5F_lexique::kToken__2A__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A__2D_, Lexique_piccolo_5F_lexique::kToken__2A__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2B__2A_, Lexique_piccolo_5F_lexique::kToken__2B__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C__3C_, Lexique_piccolo_5F_lexique::kToken__3C__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C__3D_, Lexique_piccolo_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3D__3D_, Lexique_piccolo_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E__3D_, Lexique_piccolo_5F_lexique::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E__3E_, Lexique_piccolo_5F_lexique::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2E__2E__2E_, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_)
} ;

int32_t Lexique_piccolo_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_delimitorsList, ktable_size_piccolo_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'instructionKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_piccolo_5F_lexique_instructionKeyWordList = 70 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_instructionKeyWordList [ktable_size_piccolo_5F_lexique_instructionKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bc, Lexique_piccolo_5F_lexique::kToken_bc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bn, Lexique_piccolo_5F_lexique::kToken_bn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bz, Lexique_piccolo_5F_lexique::kToken_bz),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bcf, Lexique_piccolo_5F_lexique::kToken_bcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnc, Lexique_piccolo_5F_lexique::kToken_bnc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnn, Lexique_piccolo_5F_lexique::kToken_bnn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnz, Lexique_piccolo_5F_lexique::kToken_bnz),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bov, Lexique_piccolo_5F_lexique::kToken_bov),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bra, Lexique_piccolo_5F_lexique::kToken_bra),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bsf, Lexique_piccolo_5F_lexique::kToken_bsf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_btg, Lexique_piccolo_5F_lexique::kToken_btg),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_daw, Lexique_piccolo_5F_lexique::kToken_daw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_jsr, Lexique_piccolo_5F_lexique::kToken_jsr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nop, Lexique_piccolo_5F_lexique::kToken_nop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_pop, Lexique_piccolo_5F_lexique::kToken_pop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlf, Lexique_piccolo_5F_lexique::kToken_rlf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrf, Lexique_piccolo_5F_lexique::kToken_rrf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnov, Lexique_piccolo_5F_lexique::kToken_bnov),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_call, Lexique_piccolo_5F_lexique::kToken_call),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrf, Lexique_piccolo_5F_lexique::kToken_clrf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrw, Lexique_piccolo_5F_lexique::kToken_clrw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_comf, Lexique_piccolo_5F_lexique::kToken_comf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_decf, Lexique_piccolo_5F_lexique::kToken_decf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_fnop, Lexique_piccolo_5F_lexique::kToken_fnop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_goto, Lexique_piccolo_5F_lexique::kToken_goto),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_incf, Lexique_piccolo_5F_lexique::kToken_incf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_jump, Lexique_piccolo_5F_lexique::kToken_jump),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_lfsr, Lexique_piccolo_5F_lexique::kToken_lfsr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mnop, Lexique_piccolo_5F_lexique::kToken_mnop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movf, Lexique_piccolo_5F_lexique::kToken_movf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_negf, Lexique_piccolo_5F_lexique::kToken_negf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_push, Lexique_piccolo_5F_lexique::kToken_push),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlcf, Lexique_piccolo_5F_lexique::kToken_rlcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrcf, Lexique_piccolo_5F_lexique::kToken_rrcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_setf, Lexique_piccolo_5F_lexique::kToken_setf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tris, Lexique_piccolo_5F_lexique::kToken_tris),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addlw, Lexique_piccolo_5F_lexique::kToken_addlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addwf, Lexique_piccolo_5F_lexique::kToken_addwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_andlw, Lexique_piccolo_5F_lexique::kToken_andlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_andwf, Lexique_piccolo_5F_lexique::kToken_andwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_iorlw, Lexique_piccolo_5F_lexique::kToken_iorlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_iorwf, Lexique_piccolo_5F_lexique::kToken_iorwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movff, Lexique_piccolo_5F_lexique::kToken_movff),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movlw, Lexique_piccolo_5F_lexique::kToken_movlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movwf, Lexique_piccolo_5F_lexique::kToken_movwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mullw, Lexique_piccolo_5F_lexique::kToken_mullw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mulwf, Lexique_piccolo_5F_lexique::kToken_mulwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rcall, Lexique_piccolo_5F_lexique::kToken_rcall),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_reset, Lexique_piccolo_5F_lexique::kToken_reset),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_retlw, Lexique_piccolo_5F_lexique::kToken_retlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlncf, Lexique_piccolo_5F_lexique::kToken_rlncf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrncf, Lexique_piccolo_5F_lexique::kToken_rrncf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_sleep, Lexique_piccolo_5F_lexique::kToken_sleep),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_sublw, Lexique_piccolo_5F_lexique::kToken_sublw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subwf, Lexique_piccolo_5F_lexique::kToken_subwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_swapf, Lexique_piccolo_5F_lexique::kToken_swapf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tblrd, Lexique_piccolo_5F_lexique::kToken_tblrd),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tblwt, Lexique_piccolo_5F_lexique::kToken_tblwt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_xorlw, Lexique_piccolo_5F_lexique::kToken_xorlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_xorwf, Lexique_piccolo_5F_lexique::kToken_xorwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addwfc, Lexique_piccolo_5F_lexique::kToken_addwfc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrwdt, Lexique_piccolo_5F_lexique::kToken_clrwdt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nopbra, Lexique_piccolo_5F_lexique::kToken_nopbra),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_option, Lexique_piccolo_5F_lexique::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subfwb, Lexique_piccolo_5F_lexique::kToken_subfwb),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subwfb, Lexique_piccolo_5F_lexique::kToken_subwfb),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ltblptr, Lexique_piccolo_5F_lexique::kToken_ltblptr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ldataptr, Lexique_piccolo_5F_lexique::kToken_ldataptr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ldata_38_ptr, Lexique_piccolo_5F_lexique::kToken_ldata_38_ptr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ldata_31__36_ptr, Lexique_piccolo_5F_lexique::kToken_ldata_31__36_ptr)
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
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_label:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("label") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("integer") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_char:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("literal_char") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendChar (ptr->mLexicalAttribute_charValue) ;
      break ;
    case kToken_literal_5F_string:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("literal_string") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_commentMark:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("commentMark") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bank:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bank") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_banksave:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("banksave") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_banksel:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("banksel") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_baseline:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("baseline") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_block:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("block") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bootloader:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bootloader") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_byte:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("byte") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_case:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("case") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_checkbank:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("checkbank") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_checknobank:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("checknobank") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_checkpic:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("checkpic") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_computed:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("computed") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_configuration:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("configuration") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_const:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("const") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_contextsave:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("contextsave") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_data:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("data") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_data_31__36_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("data16") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_data_38_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("data8") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_do:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("do") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_end:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("end") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_else:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("else") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_elsif:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("elsif") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_ensures:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("ensures") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_fast:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("fast") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_forever:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("forever") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_if:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("if") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_implements:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("implements") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_include:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("include") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_inline:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("inline") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_interrupt:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("interrupt") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_macro:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("macro") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_midrange:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("midrange") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_nobank:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("nobank") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_noreturn:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("noreturn") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_page:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("page") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_pic_31__38_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("pic18") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_preserved:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("preserved") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_protected:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("protected") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_private:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("private") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_ram:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("ram") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_requires:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("requires") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_rom:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("rom") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_routine:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("routine") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_switch:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("switch") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_unused:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("unused") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_uses:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("uses") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_w:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("w") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_while:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("while") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_addlw:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("addlw") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_addwf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("addwf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_addwfc:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("addwfc") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_andlw:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("andlw") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_andwf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("andwf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bc:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bc") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bcf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bcf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bn:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bn") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bnc:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bnc") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bnn:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bnn") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bov:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bov") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bnov:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bnov") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bnz:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bnz") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bsf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bsf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bra:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bra") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_btg:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("btg") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bz:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bz") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_call:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("call") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_clrf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("clrf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_clrw:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("clrw") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_clrwdt:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("clrwdt") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_comf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("comf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_daw:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("daw") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_decf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("decf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_incf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("incf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_iorlw:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("iorlw") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_iorwf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("iorwf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_fnop:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("fnop") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_goto:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("goto") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_jsr:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("jsr") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_jump:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("jump") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_lfsr:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("lfsr") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_ldataptr:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("ldataptr") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_ldata_38_ptr:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("ldata8ptr") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_ldata_31__36_ptr:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("ldata16ptr") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_ltblptr:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("ltblptr") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_mnop:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("mnop") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_movf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("movf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_movff:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("movff") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_movlw:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("movlw") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_movwf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("movwf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_mullw:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("mullw") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_mulwf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("mulwf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_negf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("negf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_nop:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("nop") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_nopbra:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("nopbra") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_pop:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("pop") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_option:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("option") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_push:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("push") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_rcall:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("rcall") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_reset:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("reset") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_retlw:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("retlw") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_rlcf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("rlcf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_rlf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("rlf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_rlncf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("rlncf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_rrcf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("rrcf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_rrf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("rrf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_rrncf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("rrncf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_setf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("setf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_sleep:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("sleep") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_subfwb:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("subfwb") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_sublw:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("sublw") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_subwf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("subwf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_subwfb:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("subwfb") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_swapf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("swapf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_tblrd:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("tblrd") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_tblwt:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("tblwt") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_tris:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("tris") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_xorlw:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("xorlw") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_xorwf:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("xorwf") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A__2B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("*+") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (",") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A__2D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("*-") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B__2A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("+*") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (";") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (":") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("==") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (".") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (")") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2F_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("/") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3F_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\?") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">>") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("...") ;
      s.appendChar (TO_UNICODE ('$')) ;
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
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__30_x, true)) {
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
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__30_b, true)) {
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
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2E__2E__2E_, true)) {
      token.mTokenCode = kToken__2E__2E__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3E__3E_, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3E__3D_, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3C__3D_, true)) {
      token.mTokenCode = kToken__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3C__3C_, true)) {
      token.mTokenCode = kToken__3C__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2B__2A_, true)) {
      token.mTokenCode = kToken__2B__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2A__2D_, true)) {
      token.mTokenCode = kToken__2A__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2A__2B_, true)) {
      token.mTokenCode = kToken__2A__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__21__3D_, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7E_, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3F_, true)) {
      token.mTokenCode = kToken__3F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3C_, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2F_, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2D_, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2B_, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__2A_, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__25_, true)) {
      token.mTokenCode = kToken__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__21_, true)) {
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

GGS_lchar Lexique_piccolo_5F_lexique::synthetizedAttribute_charValue (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_char value (ptr->mLexicalAttribute_charValue) ;
  GGS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_piccolo_5F_lexique::synthetizedAttribute_identifierString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_identifierString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_piccolo_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_piccolo_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_piccolo_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("label") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("integer") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literal_char") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literal_string") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("commentMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bank") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("banksave") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("banksel") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("baseline") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("block") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bootloader") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("byte") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("case") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("checkbank") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("checknobank") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("checkpic") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("computed") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("configuration") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("const") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("contextsave") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("data") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("data16") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("data8") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("do") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("end") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("else") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("elsif") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ensures") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("fast") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("forever") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("if") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("implements") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("include") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("inline") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("interrupt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("macro") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("midrange") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nobank") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("noreturn") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("page") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("pic18") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("preserved") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("protected") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("private") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ram") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("requires") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rom") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("routine") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("switch") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("unused") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("uses") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("w") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("while") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("addlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("addwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("addwfc") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("andlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("andwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bc") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bcf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bn") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bnc") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bnn") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bov") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bnov") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bnz") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bsf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bra") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("btg") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bz") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("call") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("clrf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("clrw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("clrwdt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("daw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("decf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("incf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("iorlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("iorwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("fnop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("goto") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("jsr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("jump") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("lfsr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ldataptr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ldata8ptr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ldata16ptr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ltblptr") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mnop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("movf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("movff") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("movlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("movwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mullw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mulwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("negf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nopbra") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("pop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("option") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("push") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rcall") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("reset") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("retlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rlcf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rlf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rlncf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rrcf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rrf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rrncf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("setf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sleep") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("subfwb") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sublw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("subwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("subwfb") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("swapf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tblrd") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tblwt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tris") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("xorlw") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("xorwf") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("...") COMMA_HERE) ;
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

cMapElement_bitSliceTable::cMapElement_bitSliceTable (const GGS_bitSliceTable_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSliceIndex (inValue.mProperty_mSliceIndex),
mProperty_mSliceSize (inValue.mProperty_mSliceSize) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_bitSliceTable::cMapElement_bitSliceTable (const GGS_lstring & inKey,
                                                      const GGS_uint & in_mSliceIndex,
                                                      const GGS_uint & in_mSliceSize
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSliceIndex" ":") ;
  mProperty_mSliceIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSliceSize" ":") ;
  mProperty_mSliceSize.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable::GGS_bitSliceTable (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable::GGS_bitSliceTable (const GGS_bitSliceTable & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable & GGS_bitSliceTable::operator = (const GGS_bitSliceTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_bitSliceTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_bitSliceTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_bitSliceTable::class_func_emptyMap (LOCATION_ARGS) {
  GGS_bitSliceTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element_3F_ GGS_bitSliceTable
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bitSliceTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_bitSliceTable * p = (cMapElement_bitSliceTable *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_bitSliceTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_bitSliceTable_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mSliceIndex = p->mProperty_mSliceIndex ;
      element.mProperty_mSliceSize = p->mProperty_mSliceSize ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_bitSliceTable::class_func_mapWithMapToOverride (const GGS_bitSliceTable & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_bitSliceTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_bitSliceTable::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bitSliceTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::setter_insertKey (GGS_lstring inKey,
                                          GGS_uint inArgument0,
                                          GGS_uint inArgument1,
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

void GGS_bitSliceTable::method_searchKey (GGS_lstring inKey,
                                          GGS_uint & outArgument0,
                                          GGS_uint & outArgument1,
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

GGS_uint GGS_bitSliceTable::getter_mSliceIndexForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    result = p->mProperty_mSliceIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bitSliceTable::getter_mSliceSizeForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    result = p->mProperty_mSliceSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable::setter_setMSliceIndexForKey (GGS_uint inAttributeValue,
                                                     GGS_string inKey,
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

void GGS_bitSliceTable::setter_setMSliceSizeForKey (GGS_uint inAttributeValue,
                                                    GGS_string inKey,
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

cMapElement_bitSliceTable * GGS_bitSliceTable::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                  const GGS_string & inKey
                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_bitSliceTable * result = (cMapElement_bitSliceTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_bitSliceTable) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @bitSliceTable
//--------------------------------------------------------------------------------------------------

DownEnumerator_bitSliceTable::DownEnumerator_bitSliceTable (const GGS_bitSliceTable & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element DownEnumerator_bitSliceTable::current (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return GGS_bitSliceTable_2E_element (p->mProperty_lkey, p->mProperty_mSliceIndex, p->mProperty_mSliceSize) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_bitSliceTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_bitSliceTable::current_mSliceIndex (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return p->mProperty_mSliceIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_bitSliceTable::current_mSliceSize (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return p->mProperty_mSliceSize ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @bitSliceTable
//--------------------------------------------------------------------------------------------------

UpEnumerator_bitSliceTable::UpEnumerator_bitSliceTable (const GGS_bitSliceTable & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element UpEnumerator_bitSliceTable::current (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return GGS_bitSliceTable_2E_element (p->mProperty_lkey, p->mProperty_mSliceIndex, p->mProperty_mSliceSize) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_bitSliceTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_bitSliceTable::current_mSliceIndex (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return p->mProperty_mSliceIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_bitSliceTable::current_mSliceSize (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return p->mProperty_mSliceSize ;
}


//--------------------------------------------------------------------------------------------------
//     @bitSliceTable generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitSliceTable ("bitSliceTable",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bitSliceTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitSliceTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitSliceTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable GGS_bitSliceTable::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_bitSliceTable result ;
  const GGS_bitSliceTable * p = (const GGS_bitSliceTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitSliceTable *> (p)) {
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

ComparisonResult GGS_immediatExpression::objectCompare (const GGS_immediatExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression::GGS_immediatExpression (void) :
AC_GALGAS_reference_class () {
}


void cPtr_immediatExpression::
immediatExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression::GGS_immediatExpression (const cPtr_immediatExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_immediatExpression::cPtr_immediatExpression (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpression ("immediatExpression",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatExpression::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatExpression result ;
  const GGS_immediatExpression * p = (const GGS_immediatExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerExpression_2E_weak::objectCompare (const GGS_registerExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression_2E_weak::GGS_registerExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression_2E_weak & GGS_registerExpression_2E_weak::operator = (const GGS_registerExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression_2E_weak::GGS_registerExpression_2E_weak (const GGS_registerExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerExpression_2E_weak GGS_registerExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_registerExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_registerExpression_2E_weak::bang_registerExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_registerExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_registerExpression) ;
      result = GGS_registerExpression ((cPtr_registerExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @registerExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerExpression_2E_weak ("registerExpression.weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_registerExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression_2E_weak GGS_registerExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_registerExpression_2E_weak result ;
  const GGS_registerExpression_2E_weak * p = (const GGS_registerExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @declarationInRam reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_declarationInRam::objectCompare (const GGS_declarationInRam & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam::GGS_declarationInRam (void) :
AC_GALGAS_reference_class () {
}


void cPtr_declarationInRam::
declarationInRam_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam::GGS_declarationInRam (const cPtr_declarationInRam * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_declarationInRam) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @declarationInRam class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_declarationInRam::cPtr_declarationInRam (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_declarationInRam::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @declarationInRam generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRam ("declarationInRam",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declarationInRam::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRam ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationInRam::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationInRam (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam GGS_declarationInRam::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_declarationInRam result ;
  const GGS_declarationInRam * p = (const GGS_declarationInRam *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationInRam *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRam", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_declarationInRam_2E_weak::objectCompare (const GGS_declarationInRam_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam_2E_weak::GGS_declarationInRam_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam_2E_weak & GGS_declarationInRam_2E_weak::operator = (const GGS_declarationInRam & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam_2E_weak::GGS_declarationInRam_2E_weak (const GGS_declarationInRam & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_declarationInRam_2E_weak GGS_declarationInRam_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_declarationInRam_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam GGS_declarationInRam_2E_weak::bang_declarationInRam_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_declarationInRam result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_declarationInRam) ;
      result = GGS_declarationInRam ((cPtr_declarationInRam *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @declarationInRam.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRam_2E_weak ("declarationInRam.weak",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declarationInRam_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRam_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationInRam_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationInRam_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRam_2E_weak GGS_declarationInRam_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_declarationInRam_2E_weak result ;
  const GGS_declarationInRam_2E_weak * p = (const GGS_declarationInRam_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationInRam_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRam.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum registerProtection
//--------------------------------------------------------------------------------------------------

GGS_registerProtection::GGS_registerProtection (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerProtection::class_func_publicRegister (UNUSED_LOCATION_ARGS) {
  GGS_registerProtection result ;
  result.mEnum = Enumeration::enum_publicRegister ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerProtection::class_func_protectedRegister (UNUSED_LOCATION_ARGS) {
  GGS_registerProtection result ;
  result.mEnum = Enumeration::enum_protectedRegister ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerProtection::class_func_privateRegister (UNUSED_LOCATION_ARGS) {
  GGS_registerProtection result ;
  result.mEnum = Enumeration::enum_privateRegister ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerProtection [4] = {
  "(not built)",
  "publicRegister",
  "protectedRegister",
  "privateRegister"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerProtection::getter_isPublicRegister (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_publicRegister == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerProtection::getter_isProtectedRegister (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedRegister == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerProtection::getter_isPrivateRegister (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateRegister == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerProtection::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @registerProtection: ") ;
  ioString.appendCString (gEnumNameArrayFor_registerProtection [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @registerProtection generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerProtection ("registerProtection",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_registerProtection::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerProtection ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerProtection::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerProtection (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerProtection GGS_registerProtection::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_registerProtection result ;
  const GGS_registerProtection * p = (const GGS_registerProtection *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerProtection *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerProtection", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_byteDeclarationInRam_2E_weak::objectCompare (const GGS_byteDeclarationInRam_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam_2E_weak::GGS_byteDeclarationInRam_2E_weak (void) :
GGS_declarationInRam_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam_2E_weak & GGS_byteDeclarationInRam_2E_weak::operator = (const GGS_byteDeclarationInRam & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam_2E_weak::GGS_byteDeclarationInRam_2E_weak (const GGS_byteDeclarationInRam & inSource) :
GGS_declarationInRam_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam_2E_weak GGS_byteDeclarationInRam_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_byteDeclarationInRam_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam GGS_byteDeclarationInRam_2E_weak::bang_byteDeclarationInRam_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_byteDeclarationInRam result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_byteDeclarationInRam) ;
      result = GGS_byteDeclarationInRam ((cPtr_byteDeclarationInRam *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @byteDeclarationInRam.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_byteDeclarationInRam_2E_weak ("byteDeclarationInRam.weak",
                                                                                    & kTypeDescriptor_GALGAS_declarationInRam_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_byteDeclarationInRam_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_byteDeclarationInRam_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_byteDeclarationInRam_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_byteDeclarationInRam_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_byteDeclarationInRam_2E_weak GGS_byteDeclarationInRam_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_byteDeclarationInRam_2E_weak result ;
  const GGS_byteDeclarationInRam_2E_weak * p = (const GGS_byteDeclarationInRam_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_byteDeclarationInRam_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("byteDeclarationInRam.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@declarationInRamList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_declarationInRamList : public cCollectionElement {
  public: GGS_declarationInRamList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_declarationInRamList (const GGS_declarationInRam & in_mDeclarationInRAM
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationInRamList (const GGS_declarationInRamList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationInRamList::cCollectionElement_declarationInRamList (const GGS_declarationInRam & in_mDeclarationInRAM
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclarationInRAM) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationInRamList::cCollectionElement_declarationInRamList (const GGS_declarationInRamList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclarationInRAM" ":") ;
  mObject.mProperty_mDeclarationInRAM.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList::GGS_declarationInRamList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList::GGS_declarationInRamList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_declarationInRamList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_declarationInRamList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::plusPlusAssignOperation (const GGS_declarationInRamList_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationInRamList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::class_func_listWithValue (const GGS_declarationInRam & inOperand0
                                                                             COMMA_LOCATION_ARGS) {
  GGS_declarationInRamList result ;
  if (inOperand0.isValid ()) {
    result = GGS_declarationInRamList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_declarationInRamList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_declarationInRam & in_mDeclarationInRAM
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationInRamList * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationInRamList (in_mDeclarationInRAM COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::addAssignOperation (const GGS_declarationInRam & inOperand0
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

void GGS_declarationInRamList::setter_append (const GGS_declarationInRam inOperand0,
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

void GGS_declarationInRamList::setter_insertAtIndex (const GGS_declarationInRam inOperand0,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationInRamList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::setter_removeAtIndex (GGS_declarationInRam & outOperand0,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
      outOperand0 = p->mObject.mProperty_mDeclarationInRAM ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::setter_popFirst (GGS_declarationInRam & outOperand0,
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

void GGS_declarationInRamList::setter_popLast (GGS_declarationInRam & outOperand0,
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

void GGS_declarationInRamList::method_first (GGS_declarationInRam & outOperand0,
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

void GGS_declarationInRamList::method_last (GGS_declarationInRam & outOperand0,
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

GGS_declarationInRamList GGS_declarationInRamList::add_operation (const GGS_declarationInRamList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declarationInRamList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_declarationInRamList result = GGS_declarationInRamList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_declarationInRamList result = GGS_declarationInRamList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_declarationInRamList result = GGS_declarationInRamList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::plusAssignOperation (const GGS_declarationInRamList inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList::setter_setMDeclarationInRAMAtIndex (GGS_declarationInRam inOperand,
                                                                   GGS_uint inIndex,
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

GGS_declarationInRam GGS_declarationInRamList::getter_mDeclarationInRAMAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  GGS_declarationInRam result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    result = p->mObject.mProperty_mDeclarationInRAM ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @declarationInRamList
//--------------------------------------------------------------------------------------------------

DownEnumerator_declarationInRamList::DownEnumerator_declarationInRamList (const GGS_declarationInRamList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element DownEnumerator_declarationInRamList::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationInRamList * p = (const cCollectionElement_declarationInRamList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_declarationInRam DownEnumerator_declarationInRamList::current_mDeclarationInRAM (LOCATION_ARGS) const {
  const cCollectionElement_declarationInRamList * p = (const cCollectionElement_declarationInRamList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
  return p->mObject.mProperty_mDeclarationInRAM ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @declarationInRamList
//--------------------------------------------------------------------------------------------------

UpEnumerator_declarationInRamList::UpEnumerator_declarationInRamList (const GGS_declarationInRamList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element UpEnumerator_declarationInRamList::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationInRamList * p = (const cCollectionElement_declarationInRamList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_declarationInRam UpEnumerator_declarationInRamList::current_mDeclarationInRAM (LOCATION_ARGS) const {
  const cCollectionElement_declarationInRamList * p = (const cCollectionElement_declarationInRamList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
  return p->mObject.mProperty_mDeclarationInRAM ;
}




//--------------------------------------------------------------------------------------------------
//     @declarationInRamList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationInRamList ("declarationInRamList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declarationInRamList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRamList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationInRamList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationInRamList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList GGS_declarationInRamList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_declarationInRamList result ;
  const GGS_declarationInRamList * p = (const GGS_declarationInRamList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationInRamList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRamList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ramDefinitionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ramDefinitionList : public cCollectionElement {
  public: GGS_ramDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ramDefinitionList (const GGS_lstring & in_mBankName,
                                                const GGS_declarationInRamList & in_mDeclaration
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ramDefinitionList (const GGS_ramDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ramDefinitionList::cCollectionElement_ramDefinitionList (const GGS_lstring & in_mBankName,
                                                                            const GGS_declarationInRamList & in_mDeclaration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBankName, in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ramDefinitionList::cCollectionElement_ramDefinitionList (const GGS_ramDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBankName" ":") ;
  mObject.mProperty_mBankName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList::GGS_ramDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList::GGS_ramDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_ramDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_ramDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::plusPlusAssignOperation (const GGS_ramDefinitionList_2E_element & inValue
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ramDefinitionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_declarationInRamList & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  GGS_ramDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_ramDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_ramDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstring & in_mBankName,
                                                       const GGS_declarationInRamList & in_mDeclaration
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_ramDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ramDefinitionList (in_mBankName,
                                                       in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_declarationInRamList & inOperand1
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

void GGS_ramDefinitionList::setter_append (const GGS_lstring inOperand0,
                                           const GGS_declarationInRamList inOperand1,
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

void GGS_ramDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_declarationInRamList inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ramDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_declarationInRamList & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mBankName ;
      outOperand1 = p->mObject.mProperty_mDeclaration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_declarationInRamList & outOperand1,
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

void GGS_ramDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_declarationInRamList & outOperand1,
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

void GGS_ramDefinitionList::method_first (GGS_lstring & outOperand0,
                                          GGS_declarationInRamList & outOperand1,
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

void GGS_ramDefinitionList::method_last (GGS_lstring & outOperand0,
                                         GGS_declarationInRamList & outOperand1,
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

GGS_ramDefinitionList GGS_ramDefinitionList::add_operation (const GGS_ramDefinitionList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ramDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_ramDefinitionList result = GGS_ramDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_ramDefinitionList result = GGS_ramDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_ramDefinitionList result = GGS_ramDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::plusAssignOperation (const GGS_ramDefinitionList inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::setter_setMBankNameAtIndex (GGS_lstring inOperand,
                                                        GGS_uint inIndex,
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

GGS_lstring GGS_ramDefinitionList::getter_mBankNameAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    result = p->mObject.mProperty_mBankName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList::setter_setMDeclarationAtIndex (GGS_declarationInRamList inOperand,
                                                           GGS_uint inIndex,
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

GGS_declarationInRamList GGS_ramDefinitionList::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  GGS_declarationInRamList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @ramDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ramDefinitionList::DownEnumerator_ramDefinitionList (const GGS_ramDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element DownEnumerator_ramDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_ramDefinitionList::current_mBankName (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject.mProperty_mBankName ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList DownEnumerator_ramDefinitionList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject.mProperty_mDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ramDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ramDefinitionList::UpEnumerator_ramDefinitionList (const GGS_ramDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element UpEnumerator_ramDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_ramDefinitionList::current_mBankName (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject.mProperty_mBankName ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList UpEnumerator_ramDefinitionList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @ramDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramDefinitionList ("ramDefinitionList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ramDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ramDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ramDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList GGS_ramDefinitionList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_ramDefinitionList result ;
  const GGS_ramDefinitionList * p = (const GGS_ramDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ramDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@configSettingList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_configSettingList : public cCollectionElement {
  public: GGS_configSettingList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_configSettingList (const GGS_lstring & in_mSettingName,
                                                const GGS_lstring & in_mSettingValue
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_configSettingList (const GGS_configSettingList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_configSettingList::cCollectionElement_configSettingList (const GGS_lstring & in_mSettingName,
                                                                            const GGS_lstring & in_mSettingValue
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSettingName, in_mSettingValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_configSettingList::cCollectionElement_configSettingList (const GGS_configSettingList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSettingName" ":") ;
  mObject.mProperty_mSettingName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSettingValue" ":") ;
  mObject.mProperty_mSettingValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList::GGS_configSettingList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList::GGS_configSettingList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_configSettingList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_configSettingList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::plusPlusAssignOperation (const GGS_configSettingList_2E_element & inValue
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_configSettingList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  GGS_configSettingList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_configSettingList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_configSettingList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstring & in_mSettingName,
                                                       const GGS_lstring & in_mSettingValue
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_configSettingList * p = nullptr ;
  macroMyNew (p, cCollectionElement_configSettingList (in_mSettingName,
                                                       in_mSettingValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_lstring & inOperand1
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

void GGS_configSettingList::setter_append (const GGS_lstring inOperand0,
                                           const GGS_lstring inOperand1,
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

void GGS_configSettingList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_configSettingList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_configSettingList) ;
      outOperand0 = p->mObject.mProperty_mSettingName ;
      outOperand1 = p->mObject.mProperty_mSettingValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_lstring & outOperand1,
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

void GGS_configSettingList::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_lstring & outOperand1,
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

void GGS_configSettingList::method_first (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
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

void GGS_configSettingList::method_last (GGS_lstring & outOperand0,
                                         GGS_lstring & outOperand1,
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

GGS_configSettingList GGS_configSettingList::add_operation (const GGS_configSettingList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configSettingList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_configSettingList result = GGS_configSettingList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_configSettingList result = GGS_configSettingList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_configSettingList result = GGS_configSettingList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::plusAssignOperation (const GGS_configSettingList inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::setter_setMSettingNameAtIndex (GGS_lstring inOperand,
                                                           GGS_uint inIndex,
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

GGS_lstring GGS_configSettingList::getter_mSettingNameAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    result = p->mObject.mProperty_mSettingName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList::setter_setMSettingValueAtIndex (GGS_lstring inOperand,
                                                            GGS_uint inIndex,
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

GGS_lstring GGS_configSettingList::getter_mSettingValueAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    result = p->mObject.mProperty_mSettingValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @configSettingList
//--------------------------------------------------------------------------------------------------

DownEnumerator_configSettingList::DownEnumerator_configSettingList (const GGS_configSettingList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element DownEnumerator_configSettingList::current (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configSettingList::current_mSettingName (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject.mProperty_mSettingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configSettingList::current_mSettingValue (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject.mProperty_mSettingValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @configSettingList
//--------------------------------------------------------------------------------------------------

UpEnumerator_configSettingList::UpEnumerator_configSettingList (const GGS_configSettingList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element UpEnumerator_configSettingList::current (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configSettingList::current_mSettingName (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject.mProperty_mSettingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configSettingList::current_mSettingValue (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject.mProperty_mSettingValue ;
}




//--------------------------------------------------------------------------------------------------
//     @configSettingList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configSettingList ("configSettingList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_configSettingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configSettingList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configSettingList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configSettingList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList GGS_configSettingList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_configSettingList result ;
  const GGS_configSettingList * p = (const GGS_configSettingList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configSettingList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configSettingList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@configDefinitionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_configDefinitionList : public cCollectionElement {
  public: GGS_configDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_configDefinitionList (const GGS_location & in_mDefinitionLocation,
                                                   const GGS_configSettingList & in_mSettingList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_configDefinitionList (const GGS_configDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_configDefinitionList::cCollectionElement_configDefinitionList (const GGS_location & in_mDefinitionLocation,
                                                                                  const GGS_configSettingList & in_mSettingList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDefinitionLocation, in_mSettingList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_configDefinitionList::cCollectionElement_configDefinitionList (const GGS_configDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDefinitionLocation" ":") ;
  mObject.mProperty_mDefinitionLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSettingList" ":") ;
  mObject.mProperty_mSettingList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList::GGS_configDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList::GGS_configDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_configDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_configDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::plusPlusAssignOperation (const GGS_configDefinitionList_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_configDefinitionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::class_func_listWithValue (const GGS_location & inOperand0,
                                                                             const GGS_configSettingList & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  GGS_configDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_configDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_configDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_location & in_mDefinitionLocation,
                                                          const GGS_configSettingList & in_mSettingList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_configDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_configDefinitionList (in_mDefinitionLocation,
                                                          in_mSettingList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::addAssignOperation (const GGS_location & inOperand0,
                                                   const GGS_configSettingList & inOperand1
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

void GGS_configDefinitionList::setter_append (const GGS_location inOperand0,
                                              const GGS_configSettingList inOperand1,
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

void GGS_configDefinitionList::setter_insertAtIndex (const GGS_location inOperand0,
                                                     const GGS_configSettingList inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_configDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::setter_removeAtIndex (GGS_location & outOperand0,
                                                     GGS_configSettingList & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mDefinitionLocation ;
      outOperand1 = p->mObject.mProperty_mSettingList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::setter_popFirst (GGS_location & outOperand0,
                                                GGS_configSettingList & outOperand1,
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

void GGS_configDefinitionList::setter_popLast (GGS_location & outOperand0,
                                               GGS_configSettingList & outOperand1,
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

void GGS_configDefinitionList::method_first (GGS_location & outOperand0,
                                             GGS_configSettingList & outOperand1,
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

void GGS_configDefinitionList::method_last (GGS_location & outOperand0,
                                            GGS_configSettingList & outOperand1,
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

GGS_configDefinitionList GGS_configDefinitionList::add_operation (const GGS_configDefinitionList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_configDefinitionList result = GGS_configDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_configDefinitionList result = GGS_configDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_configDefinitionList result = GGS_configDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::plusAssignOperation (const GGS_configDefinitionList inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::setter_setMDefinitionLocationAtIndex (GGS_location inOperand,
                                                                     GGS_uint inIndex,
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

GGS_location GGS_configDefinitionList::getter_mDefinitionLocationAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    result = p->mObject.mProperty_mDefinitionLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList::setter_setMSettingListAtIndex (GGS_configSettingList inOperand,
                                                              GGS_uint inIndex,
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

GGS_configSettingList GGS_configDefinitionList::getter_mSettingListAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  GGS_configSettingList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    result = p->mObject.mProperty_mSettingList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @configDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_configDefinitionList::DownEnumerator_configDefinitionList (const GGS_configDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList_2E_element DownEnumerator_configDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_configDefinitionList::current_mDefinitionLocation (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject.mProperty_mDefinitionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList DownEnumerator_configDefinitionList::current_mSettingList (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject.mProperty_mSettingList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @configDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_configDefinitionList::UpEnumerator_configDefinitionList (const GGS_configDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList_2E_element UpEnumerator_configDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_configDefinitionList::current_mDefinitionLocation (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject.mProperty_mDefinitionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList UpEnumerator_configDefinitionList::current_mSettingList (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject.mProperty_mSettingList ;
}




//--------------------------------------------------------------------------------------------------
//     @configDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configDefinitionList ("configDefinitionList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_configDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList GGS_configDefinitionList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_configDefinitionList result ;
  const GGS_configDefinitionList * p = (const GGS_configDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatExpression_2E_weak::objectCompare (const GGS_immediatExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression_2E_weak::GGS_immediatExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression_2E_weak & GGS_immediatExpression_2E_weak::operator = (const GGS_immediatExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression_2E_weak::GGS_immediatExpression_2E_weak (const GGS_immediatExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatExpression_2E_weak GGS_immediatExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatExpression_2E_weak::bang_immediatExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatExpression) ;
      result = GGS_immediatExpression ((cPtr_immediatExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpression_2E_weak ("immediatExpression.weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression_2E_weak GGS_immediatExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatExpression_2E_weak result ;
  const GGS_immediatExpression_2E_weak * p = (const GGS_immediatExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@immediatExpressionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_immediatExpressionList : public cCollectionElement {
  public: GGS_immediatExpressionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_immediatExpressionList (const GGS_immediatExpression & in_mExpression,
                                                     const GGS_location & in_mErrorLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_immediatExpressionList (const GGS_immediatExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatExpressionList::cCollectionElement_immediatExpressionList (const GGS_immediatExpression & in_mExpression,
                                                                                      const GGS_location & in_mErrorLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatExpressionList::cCollectionElement_immediatExpressionList (const GGS_immediatExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorLocation" ":") ;
  mObject.mProperty_mErrorLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList::GGS_immediatExpressionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList::GGS_immediatExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_immediatExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_immediatExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::plusPlusAssignOperation (const GGS_immediatExpressionList_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_immediatExpressionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::class_func_listWithValue (const GGS_immediatExpression & inOperand0,
                                                                                 const GGS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatExpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_immediatExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_immediatExpressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_immediatExpression & in_mExpression,
                                                            const GGS_location & in_mErrorLocation
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_immediatExpressionList (in_mExpression,
                                                            in_mErrorLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::addAssignOperation (const GGS_immediatExpression & inOperand0,
                                                     const GGS_location & inOperand1
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

void GGS_immediatExpressionList::setter_append (const GGS_immediatExpression inOperand0,
                                                const GGS_location inOperand1,
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

void GGS_immediatExpressionList::setter_insertAtIndex (const GGS_immediatExpression inOperand0,
                                                       const GGS_location inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_immediatExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::setter_removeAtIndex (GGS_immediatExpression & outOperand0,
                                                       GGS_location & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
      outOperand1 = p->mObject.mProperty_mErrorLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::setter_popFirst (GGS_immediatExpression & outOperand0,
                                                  GGS_location & outOperand1,
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

void GGS_immediatExpressionList::setter_popLast (GGS_immediatExpression & outOperand0,
                                                 GGS_location & outOperand1,
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

void GGS_immediatExpressionList::method_first (GGS_immediatExpression & outOperand0,
                                               GGS_location & outOperand1,
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

void GGS_immediatExpressionList::method_last (GGS_immediatExpression & outOperand0,
                                              GGS_location & outOperand1,
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

GGS_immediatExpressionList GGS_immediatExpressionList::add_operation (const GGS_immediatExpressionList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_immediatExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_immediatExpressionList result = GGS_immediatExpressionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_immediatExpressionList result = GGS_immediatExpressionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_immediatExpressionList result = GGS_immediatExpressionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::plusAssignOperation (const GGS_immediatExpressionList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::setter_setMExpressionAtIndex (GGS_immediatExpression inOperand,
                                                               GGS_uint inIndex,
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

GGS_immediatExpression GGS_immediatExpressionList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  GGS_immediatExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList::setter_setMErrorLocationAtIndex (GGS_location inOperand,
                                                                  GGS_uint inIndex,
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

GGS_location GGS_immediatExpressionList::getter_mErrorLocationAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    result = p->mObject.mProperty_mErrorLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @immediatExpressionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_immediatExpressionList::DownEnumerator_immediatExpressionList (const GGS_immediatExpressionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList_2E_element DownEnumerator_immediatExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_immediatExpression DownEnumerator_immediatExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_immediatExpressionList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject.mProperty_mErrorLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @immediatExpressionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_immediatExpressionList::UpEnumerator_immediatExpressionList (const GGS_immediatExpressionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList_2E_element UpEnumerator_immediatExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_immediatExpression UpEnumerator_immediatExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_immediatExpressionList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject.mProperty_mErrorLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @immediatExpressionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatExpressionList ("immediatExpressionList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_immediatExpressionList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_immediatExpressionList result ;
  const GGS_immediatExpressionList * p = (const GGS_immediatExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatInteger_2E_weak::objectCompare (const GGS_immediatInteger_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger_2E_weak::GGS_immediatInteger_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger_2E_weak & GGS_immediatInteger_2E_weak::operator = (const GGS_immediatInteger & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger_2E_weak::GGS_immediatInteger_2E_weak (const GGS_immediatInteger & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatInteger_2E_weak GGS_immediatInteger_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatInteger_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger GGS_immediatInteger_2E_weak::bang_immediatInteger_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatInteger result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatInteger) ;
      result = GGS_immediatInteger ((cPtr_immediatInteger *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatInteger.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatInteger_2E_weak ("immediatInteger.weak",
                                                                               & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatInteger_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatInteger_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatInteger_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatInteger_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatInteger_2E_weak GGS_immediatInteger_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_immediatInteger_2E_weak result ;
  const GGS_immediatInteger_2E_weak * p = (const GGS_immediatInteger_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatInteger_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatInteger.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatRegister_2E_weak::objectCompare (const GGS_immediatRegister_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister_2E_weak::GGS_immediatRegister_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister_2E_weak & GGS_immediatRegister_2E_weak::operator = (const GGS_immediatRegister & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister_2E_weak::GGS_immediatRegister_2E_weak (const GGS_immediatRegister & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatRegister_2E_weak GGS_immediatRegister_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatRegister_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister GGS_immediatRegister_2E_weak::bang_immediatRegister_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatRegister result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatRegister) ;
      result = GGS_immediatRegister ((cPtr_immediatRegister *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatRegister.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister_2E_weak ("immediatRegister.weak",
                                                                                & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatRegister_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatRegister_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatRegister_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister_2E_weak GGS_immediatRegister_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_immediatRegister_2E_weak result ;
  const GGS_immediatRegister_2E_weak * p = (const GGS_immediatRegister_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatRegister_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRegister.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatAdd reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatAdd::objectCompare (const GGS_immediatAdd & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd::GGS_immediatAdd (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatAdd GGS_immediatAdd::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatAdd * object = nullptr ;
  macroMyNew (object, cPtr_immediatAdd (inCompiler COMMA_THERE)) ;
  object->immediatAdd_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatAdd result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatAdd::
immediatAdd_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd::GGS_immediatAdd (const cPtr_immediatAdd * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatAdd) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatAdd GGS_immediatAdd::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatAdd result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatAdd (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatAdd::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatAdd * p = (cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatAdd::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatAdd * p = (cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatAdd::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatAdd * p = (cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatAdd::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatAdd * p = (cPtr_immediatAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAdd) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatAdd class
//--------------------------------------------------------------------------------------------------

cPtr_immediatAdd::cPtr_immediatAdd (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatAdd::cPtr_immediatAdd (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatAdd::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd ;
}

void cPtr_immediatAdd::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatAdd:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatAdd::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatAdd (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatAdd::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatAdd generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAdd ("immediatAdd",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatAdd::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatAdd::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatAdd (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd GGS_immediatAdd::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatAdd result ;
  const GGS_immediatAdd * p = (const GGS_immediatAdd *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatAdd *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAdd", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatAdd_2E_weak::objectCompare (const GGS_immediatAdd_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd_2E_weak::GGS_immediatAdd_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd_2E_weak & GGS_immediatAdd_2E_weak::operator = (const GGS_immediatAdd & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd_2E_weak::GGS_immediatAdd_2E_weak (const GGS_immediatAdd & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatAdd_2E_weak GGS_immediatAdd_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatAdd_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd GGS_immediatAdd_2E_weak::bang_immediatAdd_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatAdd result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatAdd) ;
      result = GGS_immediatAdd ((cPtr_immediatAdd *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatAdd.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAdd_2E_weak ("immediatAdd.weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatAdd_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAdd_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatAdd_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatAdd_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAdd_2E_weak GGS_immediatAdd_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatAdd_2E_weak result ;
  const GGS_immediatAdd_2E_weak * p = (const GGS_immediatAdd_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatAdd_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAdd.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatSub reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatSub::objectCompare (const GGS_immediatSub & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub::GGS_immediatSub (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatSub GGS_immediatSub::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatSub * object = nullptr ;
  macroMyNew (object, cPtr_immediatSub (inCompiler COMMA_THERE)) ;
  object->immediatSub_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatSub result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatSub::
immediatSub_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub::GGS_immediatSub (const cPtr_immediatSub * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatSub) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatSub GGS_immediatSub::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatSub result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatSub (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatSub::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatSub * p = (cPtr_immediatSub *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSub) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSub::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatSub * p = (cPtr_immediatSub *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSub) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatSub::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatSub * p = (cPtr_immediatSub *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSub) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSub::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatSub * p = (cPtr_immediatSub *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSub) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatSub class
//--------------------------------------------------------------------------------------------------

cPtr_immediatSub::cPtr_immediatSub (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatSub::cPtr_immediatSub (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatSub::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSub ;
}

void cPtr_immediatSub::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatSub:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatSub::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatSub (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatSub::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatSub generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSub ("immediatSub",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatSub::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSub ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSub::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSub (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub GGS_immediatSub::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatSub result ;
  const GGS_immediatSub * p = (const GGS_immediatSub *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSub *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSub", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatSub_2E_weak::objectCompare (const GGS_immediatSub_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub_2E_weak::GGS_immediatSub_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub_2E_weak & GGS_immediatSub_2E_weak::operator = (const GGS_immediatSub & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub_2E_weak::GGS_immediatSub_2E_weak (const GGS_immediatSub & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatSub_2E_weak GGS_immediatSub_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatSub_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub GGS_immediatSub_2E_weak::bang_immediatSub_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatSub result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatSub) ;
      result = GGS_immediatSub ((cPtr_immediatSub *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatSub.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSub_2E_weak ("immediatSub.weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatSub_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSub_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSub_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSub_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSub_2E_weak GGS_immediatSub_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatSub_2E_weak result ;
  const GGS_immediatSub_2E_weak * p = (const GGS_immediatSub_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSub_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSub.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatMul reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatMul::objectCompare (const GGS_immediatMul & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul::GGS_immediatMul (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatMul GGS_immediatMul::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatMul * object = nullptr ;
  macroMyNew (object, cPtr_immediatMul (inCompiler COMMA_THERE)) ;
  object->immediatMul_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatMul result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatMul::
immediatMul_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul::GGS_immediatMul (const cPtr_immediatMul * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatMul) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatMul GGS_immediatMul::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatMul result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatMul (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatMul::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatMul * p = (cPtr_immediatMul *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMul) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatMul::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatMul * p = (cPtr_immediatMul *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMul) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatMul::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatMul * p = (cPtr_immediatMul *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMul) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatMul::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatMul * p = (cPtr_immediatMul *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMul) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatMul class
//--------------------------------------------------------------------------------------------------

cPtr_immediatMul::cPtr_immediatMul (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatMul::cPtr_immediatMul (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatMul::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMul ;
}

void cPtr_immediatMul::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatMul:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatMul::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatMul (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatMul::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatMul generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMul ("immediatMul",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatMul::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMul ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatMul::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatMul (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul GGS_immediatMul::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatMul result ;
  const GGS_immediatMul * p = (const GGS_immediatMul *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatMul *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMul", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatMul_2E_weak::objectCompare (const GGS_immediatMul_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul_2E_weak::GGS_immediatMul_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul_2E_weak & GGS_immediatMul_2E_weak::operator = (const GGS_immediatMul & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul_2E_weak::GGS_immediatMul_2E_weak (const GGS_immediatMul & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatMul_2E_weak GGS_immediatMul_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatMul_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul GGS_immediatMul_2E_weak::bang_immediatMul_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatMul result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatMul) ;
      result = GGS_immediatMul ((cPtr_immediatMul *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatMul.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMul_2E_weak ("immediatMul.weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatMul_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMul_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatMul_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatMul_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMul_2E_weak GGS_immediatMul_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatMul_2E_weak result ;
  const GGS_immediatMul_2E_weak * p = (const GGS_immediatMul_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatMul_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMul.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatDiv reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatDiv::objectCompare (const GGS_immediatDiv & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv::GGS_immediatDiv (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatDiv GGS_immediatDiv::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatDiv * object = nullptr ;
  macroMyNew (object, cPtr_immediatDiv (inCompiler COMMA_THERE)) ;
  object->immediatDiv_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatDiv result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatDiv::
immediatDiv_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv::GGS_immediatDiv (const cPtr_immediatDiv * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatDiv) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatDiv GGS_immediatDiv::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatDiv result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatDiv (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatDiv::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatDiv * p = (cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatDiv::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatDiv * p = (cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatDiv::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatDiv * p = (cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatDiv::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatDiv * p = (cPtr_immediatDiv *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatDiv) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatDiv class
//--------------------------------------------------------------------------------------------------

cPtr_immediatDiv::cPtr_immediatDiv (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatDiv::cPtr_immediatDiv (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatDiv::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv ;
}

void cPtr_immediatDiv::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatDiv:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatDiv::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatDiv (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatDiv::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatDiv generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatDiv ("immediatDiv",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatDiv::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatDiv::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatDiv (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv GGS_immediatDiv::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatDiv result ;
  const GGS_immediatDiv * p = (const GGS_immediatDiv *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatDiv *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatDiv", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatDiv_2E_weak::objectCompare (const GGS_immediatDiv_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv_2E_weak::GGS_immediatDiv_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv_2E_weak & GGS_immediatDiv_2E_weak::operator = (const GGS_immediatDiv & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv_2E_weak::GGS_immediatDiv_2E_weak (const GGS_immediatDiv & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatDiv_2E_weak GGS_immediatDiv_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatDiv_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv GGS_immediatDiv_2E_weak::bang_immediatDiv_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatDiv result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatDiv) ;
      result = GGS_immediatDiv ((cPtr_immediatDiv *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatDiv.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatDiv_2E_weak ("immediatDiv.weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatDiv_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatDiv_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatDiv_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatDiv_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatDiv_2E_weak GGS_immediatDiv_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatDiv_2E_weak result ;
  const GGS_immediatDiv_2E_weak * p = (const GGS_immediatDiv_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatDiv_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatDiv.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatMod reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatMod::objectCompare (const GGS_immediatMod & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod::GGS_immediatMod (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatMod GGS_immediatMod::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatMod * object = nullptr ;
  macroMyNew (object, cPtr_immediatMod (inCompiler COMMA_THERE)) ;
  object->immediatMod_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatMod result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatMod::
immediatMod_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod::GGS_immediatMod (const cPtr_immediatMod * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatMod) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatMod GGS_immediatMod::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatMod result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatMod (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatMod::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatMod * p = (cPtr_immediatMod *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMod) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatMod::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatMod * p = (cPtr_immediatMod *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMod) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatMod::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatMod * p = (cPtr_immediatMod *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMod) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatMod::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatMod * p = (cPtr_immediatMod *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatMod) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatMod class
//--------------------------------------------------------------------------------------------------

cPtr_immediatMod::cPtr_immediatMod (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatMod::cPtr_immediatMod (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatMod::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMod ;
}

void cPtr_immediatMod::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatMod:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatMod::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatMod (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatMod::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatMod generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMod ("immediatMod",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatMod::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMod ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatMod::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatMod (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod GGS_immediatMod::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatMod result ;
  const GGS_immediatMod * p = (const GGS_immediatMod *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatMod *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMod", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatMod_2E_weak::objectCompare (const GGS_immediatMod_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod_2E_weak::GGS_immediatMod_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod_2E_weak & GGS_immediatMod_2E_weak::operator = (const GGS_immediatMod & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod_2E_weak::GGS_immediatMod_2E_weak (const GGS_immediatMod & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatMod_2E_weak GGS_immediatMod_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatMod_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod GGS_immediatMod_2E_weak::bang_immediatMod_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatMod result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatMod) ;
      result = GGS_immediatMod ((cPtr_immediatMod *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatMod.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatMod_2E_weak ("immediatMod.weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatMod_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatMod_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatMod_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatMod_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatMod_2E_weak GGS_immediatMod_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatMod_2E_weak result ;
  const GGS_immediatMod_2E_weak * p = (const GGS_immediatMod_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatMod_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatMod.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatOr reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatOr::objectCompare (const GGS_immediatOr & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr::GGS_immediatOr (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatOr GGS_immediatOr::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatOr * object = nullptr ;
  macroMyNew (object, cPtr_immediatOr (inCompiler COMMA_THERE)) ;
  object->immediatOr_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatOr result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatOr::
immediatOr_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                         const GGS_immediatExpression & in_mRightExpression,
                         Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr::GGS_immediatOr (const cPtr_immediatOr * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatOr) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatOr GGS_immediatOr::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                               const GGS_immediatExpression & in_mRightExpression,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_immediatOr result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatOr (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatOr::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatOr * p = (cPtr_immediatOr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatOr) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatOr::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatOr * p = (cPtr_immediatOr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatOr) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatOr::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatOr * p = (cPtr_immediatOr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatOr) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatOr::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatOr * p = (cPtr_immediatOr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatOr) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatOr class
//--------------------------------------------------------------------------------------------------

cPtr_immediatOr::cPtr_immediatOr (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatOr::cPtr_immediatOr (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatOr::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatOr ;
}

void cPtr_immediatOr::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatOr:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatOr::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatOr (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatOr::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatOr generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatOr ("immediatOr",
                                                                  & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatOr::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatOr ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatOr::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatOr (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr GGS_immediatOr::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_immediatOr result ;
  const GGS_immediatOr * p = (const GGS_immediatOr *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatOr *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatOr", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatOr_2E_weak::objectCompare (const GGS_immediatOr_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr_2E_weak::GGS_immediatOr_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr_2E_weak & GGS_immediatOr_2E_weak::operator = (const GGS_immediatOr & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr_2E_weak::GGS_immediatOr_2E_weak (const GGS_immediatOr & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatOr_2E_weak GGS_immediatOr_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatOr_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr GGS_immediatOr_2E_weak::bang_immediatOr_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatOr result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatOr) ;
      result = GGS_immediatOr ((cPtr_immediatOr *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatOr.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatOr_2E_weak ("immediatOr.weak",
                                                                          & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatOr_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatOr_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatOr_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatOr_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatOr_2E_weak GGS_immediatOr_2E_weak::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatOr_2E_weak result ;
  const GGS_immediatOr_2E_weak * p = (const GGS_immediatOr_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatOr_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatOr.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatAnd reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatAnd::objectCompare (const GGS_immediatAnd & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd::GGS_immediatAnd (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatAnd GGS_immediatAnd::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatAnd * object = nullptr ;
  macroMyNew (object, cPtr_immediatAnd (inCompiler COMMA_THERE)) ;
  object->immediatAnd_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatAnd result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatAnd::
immediatAnd_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd::GGS_immediatAnd (const cPtr_immediatAnd * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatAnd) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatAnd GGS_immediatAnd::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatAnd result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatAnd (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatAnd::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatAnd * p = (cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatAnd::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatAnd * p = (cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatAnd::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatAnd * p = (cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatAnd::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatAnd * p = (cPtr_immediatAnd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatAnd) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatAnd class
//--------------------------------------------------------------------------------------------------

cPtr_immediatAnd::cPtr_immediatAnd (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatAnd::cPtr_immediatAnd (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatAnd::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd ;
}

void cPtr_immediatAnd::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatAnd:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatAnd::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatAnd (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatAnd::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatAnd generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAnd ("immediatAnd",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatAnd::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatAnd::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatAnd (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd GGS_immediatAnd::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatAnd result ;
  const GGS_immediatAnd * p = (const GGS_immediatAnd *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatAnd *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAnd", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatAnd_2E_weak::objectCompare (const GGS_immediatAnd_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd_2E_weak::GGS_immediatAnd_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd_2E_weak & GGS_immediatAnd_2E_weak::operator = (const GGS_immediatAnd & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd_2E_weak::GGS_immediatAnd_2E_weak (const GGS_immediatAnd & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatAnd_2E_weak GGS_immediatAnd_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatAnd_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd GGS_immediatAnd_2E_weak::bang_immediatAnd_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatAnd result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatAnd) ;
      result = GGS_immediatAnd ((cPtr_immediatAnd *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatAnd.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatAnd_2E_weak ("immediatAnd.weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatAnd_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatAnd_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatAnd_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatAnd_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatAnd_2E_weak GGS_immediatAnd_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatAnd_2E_weak result ;
  const GGS_immediatAnd_2E_weak * p = (const GGS_immediatAnd_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatAnd_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatAnd.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatXor reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatXor::objectCompare (const GGS_immediatXor & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor::GGS_immediatXor (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatXor GGS_immediatXor::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatXor * object = nullptr ;
  macroMyNew (object, cPtr_immediatXor (inCompiler COMMA_THERE)) ;
  object->immediatXor_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatXor result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatXor::
immediatXor_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                          const GGS_immediatExpression & in_mRightExpression,
                          Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor::GGS_immediatXor (const cPtr_immediatXor * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatXor) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatXor GGS_immediatXor::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                 const GGS_immediatExpression & in_mRightExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatXor result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatXor (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatXor::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatXor * p = (cPtr_immediatXor *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatXor) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatXor::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatXor * p = (cPtr_immediatXor *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatXor) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatXor::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatXor * p = (cPtr_immediatXor *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatXor) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatXor::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatXor * p = (cPtr_immediatXor *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatXor) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatXor class
//--------------------------------------------------------------------------------------------------

cPtr_immediatXor::cPtr_immediatXor (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatXor::cPtr_immediatXor (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatXor::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatXor ;
}

void cPtr_immediatXor::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatXor:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatXor::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatXor (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatXor::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatXor generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatXor ("immediatXor",
                                                                   & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatXor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatXor ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatXor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatXor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor GGS_immediatXor::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_immediatXor result ;
  const GGS_immediatXor * p = (const GGS_immediatXor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatXor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatXor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatXor_2E_weak::objectCompare (const GGS_immediatXor_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor_2E_weak::GGS_immediatXor_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor_2E_weak & GGS_immediatXor_2E_weak::operator = (const GGS_immediatXor & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor_2E_weak::GGS_immediatXor_2E_weak (const GGS_immediatXor & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatXor_2E_weak GGS_immediatXor_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatXor_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor GGS_immediatXor_2E_weak::bang_immediatXor_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatXor result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatXor) ;
      result = GGS_immediatXor ((cPtr_immediatXor *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatXor.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatXor_2E_weak ("immediatXor.weak",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatXor_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatXor_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatXor_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatXor_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatXor_2E_weak GGS_immediatXor_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatXor_2E_weak result ;
  const GGS_immediatXor_2E_weak * p = (const GGS_immediatXor_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatXor_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatXor.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatLeftShift reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLeftShift::objectCompare (const GGS_immediatLeftShift & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift::GGS_immediatLeftShift (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatLeftShift GGS_immediatLeftShift::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatLeftShift * object = nullptr ;
  macroMyNew (object, cPtr_immediatLeftShift (inCompiler COMMA_THERE)) ;
  object->immediatLeftShift_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatLeftShift result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatLeftShift::
immediatLeftShift_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                const GGS_immediatExpression & in_mRightExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift::GGS_immediatLeftShift (const cPtr_immediatLeftShift * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatLeftShift) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift GGS_immediatLeftShift::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                             const GGS_immediatExpression & in_mRightExpression,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_immediatLeftShift result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatLeftShift (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLeftShift::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatLeftShift::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLeftShift::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatLeftShift::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLeftShift * p = (cPtr_immediatLeftShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLeftShift) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatLeftShift class
//--------------------------------------------------------------------------------------------------

cPtr_immediatLeftShift::cPtr_immediatLeftShift (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatLeftShift::cPtr_immediatLeftShift (const GGS_immediatExpression & in_mLeftExpression,
                                                const GGS_immediatExpression & in_mRightExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatLeftShift::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift ;
}

void cPtr_immediatLeftShift::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatLeftShift:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatLeftShift::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatLeftShift (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatLeftShift::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatLeftShift generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLeftShift ("immediatLeftShift",
                                                                         & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatLeftShift::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLeftShift::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLeftShift (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift GGS_immediatLeftShift::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatLeftShift result ;
  const GGS_immediatLeftShift * p = (const GGS_immediatLeftShift *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLeftShift *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLeftShift", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLeftShift_2E_weak::objectCompare (const GGS_immediatLeftShift_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift_2E_weak::GGS_immediatLeftShift_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift_2E_weak & GGS_immediatLeftShift_2E_weak::operator = (const GGS_immediatLeftShift & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift_2E_weak::GGS_immediatLeftShift_2E_weak (const GGS_immediatLeftShift & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift_2E_weak GGS_immediatLeftShift_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatLeftShift_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift GGS_immediatLeftShift_2E_weak::bang_immediatLeftShift_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatLeftShift result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatLeftShift) ;
      result = GGS_immediatLeftShift ((cPtr_immediatLeftShift *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatLeftShift.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLeftShift_2E_weak ("immediatLeftShift.weak",
                                                                                 & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatLeftShift_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLeftShift_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLeftShift_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLeftShift_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLeftShift_2E_weak GGS_immediatLeftShift_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatLeftShift_2E_weak result ;
  const GGS_immediatLeftShift_2E_weak * p = (const GGS_immediatLeftShift_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLeftShift_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLeftShift.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatRightShift reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatRightShift::objectCompare (const GGS_immediatRightShift & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift::GGS_immediatRightShift (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatRightShift GGS_immediatRightShift::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatRightShift * object = nullptr ;
  macroMyNew (object, cPtr_immediatRightShift (inCompiler COMMA_THERE)) ;
  object->immediatRightShift_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatRightShift result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatRightShift::
immediatRightShift_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                 const GGS_immediatExpression & in_mRightExpression,
                                 Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift::GGS_immediatRightShift (const cPtr_immediatRightShift * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatRightShift) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift GGS_immediatRightShift::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                               const GGS_immediatExpression & in_mRightExpression,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_immediatRightShift result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatRightShift (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatRightShift::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRightShift) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatRightShift::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRightShift) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatRightShift::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRightShift) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatRightShift::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatRightShift * p = (cPtr_immediatRightShift *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRightShift) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatRightShift class
//--------------------------------------------------------------------------------------------------

cPtr_immediatRightShift::cPtr_immediatRightShift (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatRightShift::cPtr_immediatRightShift (const GGS_immediatExpression & in_mLeftExpression,
                                                  const GGS_immediatExpression & in_mRightExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatRightShift::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRightShift ;
}

void cPtr_immediatRightShift::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatRightShift:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatRightShift::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatRightShift (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatRightShift::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatRightShift generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRightShift ("immediatRightShift",
                                                                          & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatRightShift::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRightShift ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatRightShift::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatRightShift (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift GGS_immediatRightShift::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatRightShift result ;
  const GGS_immediatRightShift * p = (const GGS_immediatRightShift *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatRightShift *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRightShift", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatRightShift_2E_weak::objectCompare (const GGS_immediatRightShift_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift_2E_weak::GGS_immediatRightShift_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift_2E_weak & GGS_immediatRightShift_2E_weak::operator = (const GGS_immediatRightShift & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift_2E_weak::GGS_immediatRightShift_2E_weak (const GGS_immediatRightShift & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift_2E_weak GGS_immediatRightShift_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatRightShift_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift GGS_immediatRightShift_2E_weak::bang_immediatRightShift_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatRightShift result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatRightShift) ;
      result = GGS_immediatRightShift ((cPtr_immediatRightShift *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatRightShift.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRightShift_2E_weak ("immediatRightShift.weak",
                                                                                  & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatRightShift_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRightShift_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatRightShift_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatRightShift_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRightShift_2E_weak GGS_immediatRightShift_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatRightShift_2E_weak result ;
  const GGS_immediatRightShift_2E_weak * p = (const GGS_immediatRightShift_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatRightShift_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRightShift.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatEqualTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatEqualTest::objectCompare (const GGS_immediatEqualTest & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest::GGS_immediatEqualTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatEqualTest GGS_immediatEqualTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatEqualTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatEqualTest (inCompiler COMMA_THERE)) ;
  object->immediatEqualTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatEqualTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatEqualTest::
immediatEqualTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                const GGS_immediatExpression & in_mRightExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest::GGS_immediatEqualTest (const cPtr_immediatEqualTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest GGS_immediatEqualTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                             const GGS_immediatExpression & in_mRightExpression,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_immediatEqualTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatEqualTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatEqualTest::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatEqualTest::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatEqualTest * p = (cPtr_immediatEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatEqualTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatEqualTest::cPtr_immediatEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatEqualTest::cPtr_immediatEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                                const GGS_immediatExpression & in_mRightExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest ;
}

void cPtr_immediatEqualTest::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatEqualTest generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatEqualTest ("immediatEqualTest",
                                                                         & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest GGS_immediatEqualTest::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatEqualTest result ;
  const GGS_immediatEqualTest * p = (const GGS_immediatEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatEqualTest_2E_weak::objectCompare (const GGS_immediatEqualTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest_2E_weak::GGS_immediatEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest_2E_weak & GGS_immediatEqualTest_2E_weak::operator = (const GGS_immediatEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest_2E_weak::GGS_immediatEqualTest_2E_weak (const GGS_immediatEqualTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest_2E_weak GGS_immediatEqualTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatEqualTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest GGS_immediatEqualTest_2E_weak::bang_immediatEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatEqualTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatEqualTest) ;
      result = GGS_immediatEqualTest ((cPtr_immediatEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatEqualTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatEqualTest_2E_weak ("immediatEqualTest.weak",
                                                                                 & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatEqualTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatEqualTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatEqualTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatEqualTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatEqualTest_2E_weak GGS_immediatEqualTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatEqualTest_2E_weak result ;
  const GGS_immediatEqualTest_2E_weak * p = (const GGS_immediatEqualTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatEqualTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatEqualTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatNotEqualTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatNotEqualTest::objectCompare (const GGS_immediatNotEqualTest & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest::GGS_immediatNotEqualTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatNotEqualTest GGS_immediatNotEqualTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatNotEqualTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatNotEqualTest (inCompiler COMMA_THERE)) ;
  object->immediatNotEqualTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatNotEqualTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatNotEqualTest::
immediatNotEqualTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                   const GGS_immediatExpression & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest::GGS_immediatNotEqualTest (const cPtr_immediatNotEqualTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatNotEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest GGS_immediatNotEqualTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                                   const GGS_immediatExpression & in_mRightExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_immediatNotEqualTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatNotEqualTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatNotEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatNotEqualTest::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatNotEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatNotEqualTest::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatNotEqualTest * p = (cPtr_immediatNotEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNotEqualTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatNotEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatNotEqualTest::cPtr_immediatNotEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatNotEqualTest::cPtr_immediatNotEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                                      const GGS_immediatExpression & in_mRightExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatNotEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNotEqualTest ;
}

void cPtr_immediatNotEqualTest::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatNotEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatNotEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatNotEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatNotEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatNotEqualTest generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNotEqualTest ("immediatNotEqualTest",
                                                                            & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatNotEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNotEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatNotEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatNotEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest GGS_immediatNotEqualTest::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_immediatNotEqualTest result ;
  const GGS_immediatNotEqualTest * p = (const GGS_immediatNotEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatNotEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNotEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatNotEqualTest_2E_weak::objectCompare (const GGS_immediatNotEqualTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest_2E_weak::GGS_immediatNotEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest_2E_weak & GGS_immediatNotEqualTest_2E_weak::operator = (const GGS_immediatNotEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest_2E_weak::GGS_immediatNotEqualTest_2E_weak (const GGS_immediatNotEqualTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest_2E_weak GGS_immediatNotEqualTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatNotEqualTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest GGS_immediatNotEqualTest_2E_weak::bang_immediatNotEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatNotEqualTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatNotEqualTest) ;
      result = GGS_immediatNotEqualTest ((cPtr_immediatNotEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatNotEqualTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNotEqualTest_2E_weak ("immediatNotEqualTest.weak",
                                                                                    & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatNotEqualTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNotEqualTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatNotEqualTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatNotEqualTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNotEqualTest_2E_weak GGS_immediatNotEqualTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_immediatNotEqualTest_2E_weak result ;
  const GGS_immediatNotEqualTest_2E_weak * p = (const GGS_immediatNotEqualTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatNotEqualTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNotEqualTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatGreaterTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatGreaterTest::objectCompare (const GGS_immediatGreaterTest & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest::GGS_immediatGreaterTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatGreaterTest GGS_immediatGreaterTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatGreaterTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatGreaterTest (inCompiler COMMA_THERE)) ;
  object->immediatGreaterTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatGreaterTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatGreaterTest::
immediatGreaterTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression,
                                  Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest::GGS_immediatGreaterTest (const cPtr_immediatGreaterTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatGreaterTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest GGS_immediatGreaterTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                                 const GGS_immediatExpression & in_mRightExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatGreaterTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatGreaterTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatGreaterTest::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatGreaterTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatGreaterTest::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatGreaterTest * p = (cPtr_immediatGreaterTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatGreaterTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatGreaterTest::cPtr_immediatGreaterTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatGreaterTest::cPtr_immediatGreaterTest (const GGS_immediatExpression & in_mLeftExpression,
                                                    const GGS_immediatExpression & in_mRightExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatGreaterTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest ;
}

void cPtr_immediatGreaterTest::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatGreaterTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatGreaterTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatGreaterTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatGreaterTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatGreaterTest generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterTest ("immediatGreaterTest",
                                                                           & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatGreaterTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatGreaterTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatGreaterTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest GGS_immediatGreaterTest::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterTest result ;
  const GGS_immediatGreaterTest * p = (const GGS_immediatGreaterTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatGreaterTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatGreaterTest_2E_weak::objectCompare (const GGS_immediatGreaterTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest_2E_weak::GGS_immediatGreaterTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest_2E_weak & GGS_immediatGreaterTest_2E_weak::operator = (const GGS_immediatGreaterTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest_2E_weak::GGS_immediatGreaterTest_2E_weak (const GGS_immediatGreaterTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest_2E_weak GGS_immediatGreaterTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatGreaterTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest GGS_immediatGreaterTest_2E_weak::bang_immediatGreaterTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatGreaterTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatGreaterTest) ;
      result = GGS_immediatGreaterTest ((cPtr_immediatGreaterTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatGreaterTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterTest_2E_weak ("immediatGreaterTest.weak",
                                                                                   & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatGreaterTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatGreaterTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatGreaterTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterTest_2E_weak GGS_immediatGreaterTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterTest_2E_weak result ;
  const GGS_immediatGreaterTest_2E_weak * p = (const GGS_immediatGreaterTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatGreaterTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatGreaterOrEqualTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatGreaterOrEqualTest::objectCompare (const GGS_immediatGreaterOrEqualTest & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest::GGS_immediatGreaterOrEqualTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest GGS_immediatGreaterOrEqualTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatGreaterOrEqualTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatGreaterOrEqualTest (inCompiler COMMA_THERE)) ;
  object->immediatGreaterOrEqualTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatGreaterOrEqualTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatGreaterOrEqualTest::
immediatGreaterOrEqualTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                         const GGS_immediatExpression & in_mRightExpression,
                                         Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest::GGS_immediatGreaterOrEqualTest (const cPtr_immediatGreaterOrEqualTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatGreaterOrEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest GGS_immediatGreaterOrEqualTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                                               const GGS_immediatExpression & in_mRightExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterOrEqualTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatGreaterOrEqualTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatGreaterOrEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatGreaterOrEqualTest::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatGreaterOrEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatGreaterOrEqualTest::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatGreaterOrEqualTest * p = (cPtr_immediatGreaterOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatGreaterOrEqualTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatGreaterOrEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatGreaterOrEqualTest::cPtr_immediatGreaterOrEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatGreaterOrEqualTest::cPtr_immediatGreaterOrEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                                                  const GGS_immediatExpression & in_mRightExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatGreaterOrEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;
}

void cPtr_immediatGreaterOrEqualTest::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatGreaterOrEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatGreaterOrEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatGreaterOrEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatGreaterOrEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatGreaterOrEqualTest generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ("immediatGreaterOrEqualTest",
                                                                                  & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatGreaterOrEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatGreaterOrEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatGreaterOrEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest GGS_immediatGreaterOrEqualTest::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterOrEqualTest result ;
  const GGS_immediatGreaterOrEqualTest * p = (const GGS_immediatGreaterOrEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatGreaterOrEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterOrEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatGreaterOrEqualTest_2E_weak::objectCompare (const GGS_immediatGreaterOrEqualTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest_2E_weak::GGS_immediatGreaterOrEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest_2E_weak & GGS_immediatGreaterOrEqualTest_2E_weak::operator = (const GGS_immediatGreaterOrEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest_2E_weak::GGS_immediatGreaterOrEqualTest_2E_weak (const GGS_immediatGreaterOrEqualTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest_2E_weak GGS_immediatGreaterOrEqualTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatGreaterOrEqualTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest GGS_immediatGreaterOrEqualTest_2E_weak::bang_immediatGreaterOrEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatGreaterOrEqualTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatGreaterOrEqualTest) ;
      result = GGS_immediatGreaterOrEqualTest ((cPtr_immediatGreaterOrEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatGreaterOrEqualTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest_2E_weak ("immediatGreaterOrEqualTest.weak",
                                                                                          & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatGreaterOrEqualTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatGreaterOrEqualTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatGreaterOrEqualTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatGreaterOrEqualTest_2E_weak GGS_immediatGreaterOrEqualTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatGreaterOrEqualTest_2E_weak result ;
  const GGS_immediatGreaterOrEqualTest_2E_weak * p = (const GGS_immediatGreaterOrEqualTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatGreaterOrEqualTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatGreaterOrEqualTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatLowerTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLowerTest::objectCompare (const GGS_immediatLowerTest & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest::GGS_immediatLowerTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatLowerTest GGS_immediatLowerTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatLowerTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatLowerTest (inCompiler COMMA_THERE)) ;
  object->immediatLowerTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatLowerTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatLowerTest::
immediatLowerTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                const GGS_immediatExpression & in_mRightExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest::GGS_immediatLowerTest (const cPtr_immediatLowerTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatLowerTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest GGS_immediatLowerTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                             const GGS_immediatExpression & in_mRightExpression,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_immediatLowerTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatLowerTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLowerTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatLowerTest::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLowerTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatLowerTest::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLowerTest * p = (cPtr_immediatLowerTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatLowerTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatLowerTest::cPtr_immediatLowerTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatLowerTest::cPtr_immediatLowerTest (const GGS_immediatExpression & in_mLeftExpression,
                                                const GGS_immediatExpression & in_mRightExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatLowerTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerTest ;
}

void cPtr_immediatLowerTest::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatLowerTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatLowerTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatLowerTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatLowerTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatLowerTest generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerTest ("immediatLowerTest",
                                                                         & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatLowerTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLowerTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLowerTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest GGS_immediatLowerTest::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatLowerTest result ;
  const GGS_immediatLowerTest * p = (const GGS_immediatLowerTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLowerTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLowerTest_2E_weak::objectCompare (const GGS_immediatLowerTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest_2E_weak::GGS_immediatLowerTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest_2E_weak & GGS_immediatLowerTest_2E_weak::operator = (const GGS_immediatLowerTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest_2E_weak::GGS_immediatLowerTest_2E_weak (const GGS_immediatLowerTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest_2E_weak GGS_immediatLowerTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatLowerTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest GGS_immediatLowerTest_2E_weak::bang_immediatLowerTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatLowerTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatLowerTest) ;
      result = GGS_immediatLowerTest ((cPtr_immediatLowerTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatLowerTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerTest_2E_weak ("immediatLowerTest.weak",
                                                                                 & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatLowerTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLowerTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLowerTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerTest_2E_weak GGS_immediatLowerTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatLowerTest_2E_weak result ;
  const GGS_immediatLowerTest_2E_weak * p = (const GGS_immediatLowerTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLowerTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatLowerOrEqualTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLowerOrEqualTest::objectCompare (const GGS_immediatLowerOrEqualTest & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest::GGS_immediatLowerOrEqualTest (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatLowerOrEqualTest GGS_immediatLowerOrEqualTest::
init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
              const GGS_immediatExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatLowerOrEqualTest * object = nullptr ;
  macroMyNew (object, cPtr_immediatLowerOrEqualTest (inCompiler COMMA_THERE)) ;
  object->immediatLowerOrEqualTest_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_immediatLowerOrEqualTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatLowerOrEqualTest::
immediatLowerOrEqualTest_init_21__21_ (const GGS_immediatExpression & in_mLeftExpression,
                                       const GGS_immediatExpression & in_mRightExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest::GGS_immediatLowerOrEqualTest (const cPtr_immediatLowerOrEqualTest * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatLowerOrEqualTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest GGS_immediatLowerOrEqualTest::class_func_new (const GGS_immediatExpression & in_mLeftExpression,
                                                                           const GGS_immediatExpression & in_mRightExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_immediatLowerOrEqualTest result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatLowerOrEqualTest (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLowerOrEqualTest::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatLowerOrEqualTest::setProperty_mLeftExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatLowerOrEqualTest::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatLowerOrEqualTest::setProperty_mRightExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatLowerOrEqualTest * p = (cPtr_immediatLowerOrEqualTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatLowerOrEqualTest) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatLowerOrEqualTest class
//--------------------------------------------------------------------------------------------------

cPtr_immediatLowerOrEqualTest::cPtr_immediatLowerOrEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatLowerOrEqualTest::cPtr_immediatLowerOrEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                                              const GGS_immediatExpression & in_mRightExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatLowerOrEqualTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ;
}

void cPtr_immediatLowerOrEqualTest::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatLowerOrEqualTest:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatLowerOrEqualTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatLowerOrEqualTest (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatLowerOrEqualTest::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatLowerOrEqualTest generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ("immediatLowerOrEqualTest",
                                                                                & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatLowerOrEqualTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLowerOrEqualTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLowerOrEqualTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest GGS_immediatLowerOrEqualTest::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_immediatLowerOrEqualTest result ;
  const GGS_immediatLowerOrEqualTest * p = (const GGS_immediatLowerOrEqualTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLowerOrEqualTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerOrEqualTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatLowerOrEqualTest_2E_weak::objectCompare (const GGS_immediatLowerOrEqualTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest_2E_weak::GGS_immediatLowerOrEqualTest_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest_2E_weak & GGS_immediatLowerOrEqualTest_2E_weak::operator = (const GGS_immediatLowerOrEqualTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest_2E_weak::GGS_immediatLowerOrEqualTest_2E_weak (const GGS_immediatLowerOrEqualTest & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest_2E_weak GGS_immediatLowerOrEqualTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatLowerOrEqualTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest GGS_immediatLowerOrEqualTest_2E_weak::bang_immediatLowerOrEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatLowerOrEqualTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatLowerOrEqualTest) ;
      result = GGS_immediatLowerOrEqualTest ((cPtr_immediatLowerOrEqualTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatLowerOrEqualTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest_2E_weak ("immediatLowerOrEqualTest.weak",
                                                                                        & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatLowerOrEqualTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatLowerOrEqualTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatLowerOrEqualTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatLowerOrEqualTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatLowerOrEqualTest_2E_weak GGS_immediatLowerOrEqualTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_immediatLowerOrEqualTest_2E_weak result ;
  const GGS_immediatLowerOrEqualTest_2E_weak * p = (const GGS_immediatLowerOrEqualTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatLowerOrEqualTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatLowerOrEqualTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatNegate reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatNegate::objectCompare (const GGS_immediatNegate & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate::GGS_immediatNegate (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatNegate GGS_immediatNegate::
init_21_ (const GGS_immediatExpression & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_immediatNegate * object = nullptr ;
  macroMyNew (object, cPtr_immediatNegate (inCompiler COMMA_THERE)) ;
  object->immediatNegate_init_21_ (in_mExpression, inCompiler) ;
  const GGS_immediatNegate result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatNegate::
immediatNegate_init_21_ (const GGS_immediatExpression & in_mExpression,
                         Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate::GGS_immediatNegate (const cPtr_immediatNegate * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatNegate) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatNegate GGS_immediatNegate::class_func_new (const GGS_immediatExpression & in_mExpression,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_immediatNegate result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatNegate (in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatNegate::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatNegate * p = (cPtr_immediatNegate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNegate) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatNegate::setProperty_mExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatNegate * p = (cPtr_immediatNegate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatNegate) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatNegate class
//--------------------------------------------------------------------------------------------------

cPtr_immediatNegate::cPtr_immediatNegate (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatNegate::cPtr_immediatNegate (const GGS_immediatExpression & in_mExpression,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatNegate::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNegate ;
}

void cPtr_immediatNegate::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatNegate:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatNegate::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatNegate (mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatNegate::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatNegate generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNegate ("immediatNegate",
                                                                      & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatNegate::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNegate ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatNegate::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatNegate (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate GGS_immediatNegate::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_immediatNegate result ;
  const GGS_immediatNegate * p = (const GGS_immediatNegate *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatNegate *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNegate", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatNegate_2E_weak::objectCompare (const GGS_immediatNegate_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate_2E_weak::GGS_immediatNegate_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate_2E_weak & GGS_immediatNegate_2E_weak::operator = (const GGS_immediatNegate & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate_2E_weak::GGS_immediatNegate_2E_weak (const GGS_immediatNegate & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatNegate_2E_weak GGS_immediatNegate_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatNegate_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate GGS_immediatNegate_2E_weak::bang_immediatNegate_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatNegate result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatNegate) ;
      result = GGS_immediatNegate ((cPtr_immediatNegate *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatNegate.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatNegate_2E_weak ("immediatNegate.weak",
                                                                              & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatNegate_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatNegate_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatNegate_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatNegate_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatNegate_2E_weak GGS_immediatNegate_2E_weak::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_immediatNegate_2E_weak result ;
  const GGS_immediatNegate_2E_weak * p = (const GGS_immediatNegate_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatNegate_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatNegate.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatComplement reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatComplement::objectCompare (const GGS_immediatComplement & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement::GGS_immediatComplement (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatComplement GGS_immediatComplement::
init_21_ (const GGS_immediatExpression & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_immediatComplement * object = nullptr ;
  macroMyNew (object, cPtr_immediatComplement (inCompiler COMMA_THERE)) ;
  object->immediatComplement_init_21_ (in_mExpression, inCompiler) ;
  const GGS_immediatComplement result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatComplement::
immediatComplement_init_21_ (const GGS_immediatExpression & in_mExpression,
                             Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement::GGS_immediatComplement (const cPtr_immediatComplement * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatComplement) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatComplement GGS_immediatComplement::class_func_new (const GGS_immediatExpression & in_mExpression,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_immediatComplement result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatComplement (in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_immediatComplement::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_immediatComplement * p = (cPtr_immediatComplement *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatComplement) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatComplement::setProperty_mExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_immediatComplement * p = (cPtr_immediatComplement *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatComplement) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatComplement class
//--------------------------------------------------------------------------------------------------

cPtr_immediatComplement::cPtr_immediatComplement (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatComplement::cPtr_immediatComplement (const GGS_immediatExpression & in_mExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatComplement::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement ;
}

void cPtr_immediatComplement::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatComplement:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatComplement::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatComplement (mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatComplement::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatComplement generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatComplement ("immediatComplement",
                                                                          & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatComplement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatComplement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatComplement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement GGS_immediatComplement::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatComplement result ;
  const GGS_immediatComplement * p = (const GGS_immediatComplement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatComplement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatComplement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatComplement_2E_weak::objectCompare (const GGS_immediatComplement_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement_2E_weak::GGS_immediatComplement_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement_2E_weak & GGS_immediatComplement_2E_weak::operator = (const GGS_immediatComplement & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement_2E_weak::GGS_immediatComplement_2E_weak (const GGS_immediatComplement & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatComplement_2E_weak GGS_immediatComplement_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatComplement_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement GGS_immediatComplement_2E_weak::bang_immediatComplement_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatComplement result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatComplement) ;
      result = GGS_immediatComplement ((cPtr_immediatComplement *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatComplement.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatComplement_2E_weak ("immediatComplement.weak",
                                                                                  & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatComplement_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatComplement_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatComplement_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatComplement_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatComplement_2E_weak GGS_immediatComplement_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_immediatComplement_2E_weak result ;
  const GGS_immediatComplement_2E_weak * p = (const GGS_immediatComplement_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatComplement_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatComplement.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@immediatSliceExpressionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_immediatSliceExpressionList : public cCollectionElement {
  public: GGS_immediatSliceExpressionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_immediatSliceExpressionList (const GGS_lstring & in_mSliceName,
                                                          const GGS_immediatExpression & in_mExpression
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_immediatSliceExpressionList (const GGS_immediatSliceExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatSliceExpressionList::cCollectionElement_immediatSliceExpressionList (const GGS_lstring & in_mSliceName,
                                                                                                const GGS_immediatExpression & in_mExpression
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSliceName, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_immediatSliceExpressionList::cCollectionElement_immediatSliceExpressionList (const GGS_immediatSliceExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSliceName" ":") ;
  mObject.mProperty_mSliceName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList::GGS_immediatSliceExpressionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList::GGS_immediatSliceExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_immediatSliceExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_immediatSliceExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::plusPlusAssignOperation (const GGS_immediatSliceExpressionList_2E_element & inValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_immediatSliceExpressionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_immediatExpression & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_immediatSliceExpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_immediatSliceExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_immediatSliceExpressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mSliceName,
                                                                 const GGS_immediatExpression & in_mExpression
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatSliceExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_immediatSliceExpressionList (in_mSliceName,
                                                                 in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_immediatExpression & inOperand1
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

void GGS_immediatSliceExpressionList::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_immediatExpression inOperand1,
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

void GGS_immediatSliceExpressionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_immediatExpression inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_immediatSliceExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_immediatExpression & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
      outOperand0 = p->mObject.mProperty_mSliceName ;
      outOperand1 = p->mObject.mProperty_mExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_immediatExpression & outOperand1,
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

void GGS_immediatSliceExpressionList::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_immediatExpression & outOperand1,
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

void GGS_immediatSliceExpressionList::method_first (GGS_lstring & outOperand0,
                                                    GGS_immediatExpression & outOperand1,
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

void GGS_immediatSliceExpressionList::method_last (GGS_lstring & outOperand0,
                                                   GGS_immediatExpression & outOperand1,
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

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::add_operation (const GGS_immediatSliceExpressionList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_immediatSliceExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_immediatSliceExpressionList result = GGS_immediatSliceExpressionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_immediatSliceExpressionList result = GGS_immediatSliceExpressionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_immediatSliceExpressionList result = GGS_immediatSliceExpressionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::plusAssignOperation (const GGS_immediatSliceExpressionList inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::setter_setMSliceNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
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

GGS_lstring GGS_immediatSliceExpressionList::getter_mSliceNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    result = p->mObject.mProperty_mSliceName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList::setter_setMExpressionAtIndex (GGS_immediatExpression inOperand,
                                                                    GGS_uint inIndex,
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

GGS_immediatExpression GGS_immediatSliceExpressionList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  GGS_immediatExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @immediatSliceExpressionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_immediatSliceExpressionList::DownEnumerator_immediatSliceExpressionList (const GGS_immediatSliceExpressionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element DownEnumerator_immediatSliceExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_immediatSliceExpressionList::current_mSliceName (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject.mProperty_mSliceName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression DownEnumerator_immediatSliceExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @immediatSliceExpressionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_immediatSliceExpressionList::UpEnumerator_immediatSliceExpressionList (const GGS_immediatSliceExpressionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element UpEnumerator_immediatSliceExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_immediatSliceExpressionList::current_mSliceName (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject.mProperty_mSliceName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression UpEnumerator_immediatSliceExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @immediatSliceExpressionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList ("immediatSliceExpressionList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatSliceExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSliceExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSliceExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSliceExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSliceExpressionList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_immediatSliceExpressionList result ;
  const GGS_immediatSliceExpressionList * p = (const GGS_immediatSliceExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSliceExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSliceExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatSlice_2E_weak::objectCompare (const GGS_immediatSlice_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice_2E_weak::GGS_immediatSlice_2E_weak (void) :
GGS_immediatExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice_2E_weak & GGS_immediatSlice_2E_weak::operator = (const GGS_immediatSlice & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice_2E_weak::GGS_immediatSlice_2E_weak (const GGS_immediatSlice & inSource) :
GGS_immediatExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_immediatSlice_2E_weak GGS_immediatSlice_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_immediatSlice_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice GGS_immediatSlice_2E_weak::bang_immediatSlice_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_immediatSlice result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_immediatSlice) ;
      result = GGS_immediatSlice ((cPtr_immediatSlice *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatSlice.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice_2E_weak ("immediatSlice.weak",
                                                                             & kTypeDescriptor_GALGAS_immediatExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatSlice_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSlice_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSlice_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice_2E_weak GGS_immediatSlice_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_immediatSlice_2E_weak result ;
  const GGS_immediatSlice_2E_weak * p = (const GGS_immediatSlice_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSlice_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSlice.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@constantDefinitionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_constantDefinitionList : public cCollectionElement {
  public: GGS_constantDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_constantDefinitionList (const GGS_lstring & in_mConstantName,
                                                     const GGS_immediatExpression & in_mExpression
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_constantDefinitionList (const GGS_constantDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_constantDefinitionList::cCollectionElement_constantDefinitionList (const GGS_lstring & in_mConstantName,
                                                                                      const GGS_immediatExpression & in_mExpression
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_constantDefinitionList::cCollectionElement_constantDefinitionList (const GGS_constantDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstantName" ":") ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList::GGS_constantDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList::GGS_constantDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_constantDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_constantDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::plusPlusAssignOperation (const GGS_constantDefinitionList_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_constantDefinitionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                 const GGS_immediatExpression & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_constantDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_constantDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_constantDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_lstring & in_mConstantName,
                                                            const GGS_immediatExpression & in_mExpression
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_constantDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_constantDefinitionList (in_mConstantName,
                                                            in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                     const GGS_immediatExpression & inOperand1
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

void GGS_constantDefinitionList::setter_append (const GGS_lstring inOperand0,
                                                const GGS_immediatExpression inOperand1,
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

void GGS_constantDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                       const GGS_immediatExpression inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_constantDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                       GGS_immediatExpression & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mConstantName ;
      outOperand1 = p->mObject.mProperty_mExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                                  GGS_immediatExpression & outOperand1,
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

void GGS_constantDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                                 GGS_immediatExpression & outOperand1,
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

void GGS_constantDefinitionList::method_first (GGS_lstring & outOperand0,
                                               GGS_immediatExpression & outOperand1,
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

void GGS_constantDefinitionList::method_last (GGS_lstring & outOperand0,
                                              GGS_immediatExpression & outOperand1,
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

GGS_constantDefinitionList GGS_constantDefinitionList::add_operation (const GGS_constantDefinitionList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constantDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_constantDefinitionList result = GGS_constantDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_constantDefinitionList result = GGS_constantDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_constantDefinitionList result = GGS_constantDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::plusAssignOperation (const GGS_constantDefinitionList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::setter_setMConstantNameAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
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

GGS_lstring GGS_constantDefinitionList::getter_mConstantNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    result = p->mObject.mProperty_mConstantName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList::setter_setMExpressionAtIndex (GGS_immediatExpression inOperand,
                                                               GGS_uint inIndex,
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

GGS_immediatExpression GGS_constantDefinitionList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  GGS_immediatExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @constantDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_constantDefinitionList::DownEnumerator_constantDefinitionList (const GGS_constantDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element DownEnumerator_constantDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constantDefinitionList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject.mProperty_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression DownEnumerator_constantDefinitionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject.mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @constantDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_constantDefinitionList::UpEnumerator_constantDefinitionList (const GGS_constantDefinitionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element UpEnumerator_constantDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constantDefinitionList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject.mProperty_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression UpEnumerator_constantDefinitionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @constantDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantDefinitionList ("constantDefinitionList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constantDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList GGS_constantDefinitionList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_constantDefinitionList result ;
  const GGS_constantDefinitionList * p = (const GGS_constantDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_actualConfigurationMap::cMapElement_actualConfigurationMap (const GGS_actualConfigurationMap_2E_element & inValue
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mRegisterAddress (inValue.mProperty_mRegisterAddress),
mProperty_mRegisterValue (inValue.mProperty_mRegisterValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_actualConfigurationMap::cMapElement_actualConfigurationMap (const GGS_lstring & inKey,
                                                                        const GGS_uint & in_mRegisterAddress,
                                                                        const GGS_uint & in_mRegisterValue
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRegisterAddress" ":") ;
  mProperty_mRegisterAddress.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRegisterValue" ":") ;
  mProperty_mRegisterValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap::GGS_actualConfigurationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap::GGS_actualConfigurationMap (const GGS_actualConfigurationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap & GGS_actualConfigurationMap::operator = (const GGS_actualConfigurationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap GGS_actualConfigurationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_actualConfigurationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap GGS_actualConfigurationMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_actualConfigurationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element_3F_ GGS_actualConfigurationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actualConfigurationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_actualConfigurationMap * p = (cMapElement_actualConfigurationMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_actualConfigurationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_actualConfigurationMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mRegisterAddress = p->mProperty_mRegisterAddress ;
      element.mProperty_mRegisterValue = p->mProperty_mRegisterValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap GGS_actualConfigurationMap::class_func_mapWithMapToOverride (const GGS_actualConfigurationMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_actualConfigurationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap GGS_actualConfigurationMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_actualConfigurationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap::setter_insertKey (GGS_lstring inKey,
                                                   GGS_uint inArgument0,
                                                   GGS_uint inArgument1,
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

void GGS_actualConfigurationMap::method_searchKey (GGS_lstring inKey,
                                                   GGS_uint & outArgument0,
                                                   GGS_uint & outArgument1,
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

GGS_uint GGS_actualConfigurationMap::getter_mRegisterAddressForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    result = p->mProperty_mRegisterAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actualConfigurationMap::getter_mRegisterValueForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    result = p->mProperty_mRegisterValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap::setter_setMRegisterAddressForKey (GGS_uint inAttributeValue,
                                                                   GGS_string inKey,
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

void GGS_actualConfigurationMap::setter_setMRegisterValueForKey (GGS_uint inAttributeValue,
                                                                 GGS_string inKey,
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

cMapElement_actualConfigurationMap * GGS_actualConfigurationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GGS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_actualConfigurationMap * result = (cMapElement_actualConfigurationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_actualConfigurationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @actualConfigurationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_actualConfigurationMap::DownEnumerator_actualConfigurationMap (const GGS_actualConfigurationMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element DownEnumerator_actualConfigurationMap::current (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return GGS_actualConfigurationMap_2E_element (p->mProperty_lkey, p->mProperty_mRegisterAddress, p->mProperty_mRegisterValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_actualConfigurationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_actualConfigurationMap::current_mRegisterAddress (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return p->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_actualConfigurationMap::current_mRegisterValue (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return p->mProperty_mRegisterValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @actualConfigurationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_actualConfigurationMap::UpEnumerator_actualConfigurationMap (const GGS_actualConfigurationMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element UpEnumerator_actualConfigurationMap::current (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return GGS_actualConfigurationMap_2E_element (p->mProperty_lkey, p->mProperty_mRegisterAddress, p->mProperty_mRegisterValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_actualConfigurationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_actualConfigurationMap::current_mRegisterAddress (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return p->mProperty_mRegisterAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_actualConfigurationMap::current_mRegisterValue (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return p->mProperty_mRegisterValue ;
}


//--------------------------------------------------------------------------------------------------
//     @actualConfigurationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualConfigurationMap ("actualConfigurationMap",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualConfigurationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualConfigurationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualConfigurationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap GGS_actualConfigurationMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_actualConfigurationMap result ;
  const GGS_actualConfigurationMap * p = (const GGS_actualConfigurationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualConfigurationMap *> (p)) {
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

ComparisonResult GGS_bitNumberExpression::objectCompare (const GGS_bitNumberExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression::GGS_bitNumberExpression (void) :
AC_GALGAS_reference_class () {
}


void cPtr_bitNumberExpression::
bitNumberExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression::GGS_bitNumberExpression (const cPtr_bitNumberExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_bitNumberExpression::cPtr_bitNumberExpression (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bitNumberExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberExpression ("bitNumberExpression",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bitNumberExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_bitNumberExpression::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_bitNumberExpression result ;
  const GGS_bitNumberExpression * p = (const GGS_bitNumberExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberExpression_2E_weak::objectCompare (const GGS_bitNumberExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression_2E_weak::GGS_bitNumberExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression_2E_weak & GGS_bitNumberExpression_2E_weak::operator = (const GGS_bitNumberExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression_2E_weak::GGS_bitNumberExpression_2E_weak (const GGS_bitNumberExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression_2E_weak GGS_bitNumberExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bitNumberExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_bitNumberExpression_2E_weak::bang_bitNumberExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bitNumberExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberExpression) ;
      result = GGS_bitNumberExpression ((cPtr_bitNumberExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bitNumberExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak ("bitNumberExpression.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bitNumberExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression_2E_weak GGS_bitNumberExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_bitNumberExpression_2E_weak result ;
  const GGS_bitNumberExpression_2E_weak * p = (const GGS_bitNumberExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitNumberLiteralExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLiteralExpression::objectCompare (const GGS_bitNumberLiteralExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression::GGS_bitNumberLiteralExpression (void) :
GGS_bitNumberExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bitNumberLiteralExpression GGS_bitNumberLiteralExpression::
init_21__21_ (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
              const GGS_location & in_mEndOfExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_bitNumberLiteralExpression * object = nullptr ;
  macroMyNew (object, cPtr_bitNumberLiteralExpression (inCompiler COMMA_THERE)) ;
  object->bitNumberLiteralExpression_init_21__21_ (in_mBitNumberLiteralExpression, in_mEndOfExpression, inCompiler) ;
  const GGS_bitNumberLiteralExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralExpression::
bitNumberLiteralExpression_init_21__21_ (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
                                         const GGS_location & in_mEndOfExpression,
                                         Compiler * /* inCompiler */) {
  mProperty_mBitNumberLiteralExpression = in_mBitNumberLiteralExpression ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression::GGS_bitNumberLiteralExpression (const cPtr_bitNumberLiteralExpression * inSourcePtr) :
GGS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLiteralExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression GGS_bitNumberLiteralExpression::class_func_new (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
                                                                               const GGS_location & in_mEndOfExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_bitNumberLiteralExpression (in_mBitNumberLiteralExpression, in_mEndOfExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_bitNumberLiteralExpression::readProperty_mBitNumberLiteralExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    return p->mProperty_mBitNumberLiteralExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitNumberLiteralExpression::setProperty_mBitNumberLiteralExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    p->mProperty_mBitNumberLiteralExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_bitNumberLiteralExpression::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitNumberLiteralExpression::setProperty_mEndOfExpression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitNumberLiteralExpression * p = (cPtr_bitNumberLiteralExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralExpression) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLiteralExpression class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLiteralExpression::cPtr_bitNumberLiteralExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLiteralExpression (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLiteralExpression::cPtr_bitNumberLiteralExpression (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
                                                                  const GGS_location & in_mEndOfExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLiteralExpression (),
mProperty_mEndOfExpression () {
  mProperty_mBitNumberLiteralExpression = in_mBitNumberLiteralExpression ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitNumberLiteralExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;
}

void cPtr_bitNumberLiteralExpression::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@bitNumberLiteralExpression:") ;
  mProperty_mBitNumberLiteralExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitNumberLiteralExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitNumberLiteralExpression (mProperty_mBitNumberLiteralExpression, mProperty_mEndOfExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberLiteralExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_bitNumberExpression::printNonNullClassInstanceProperties () ;
    mProperty_mBitNumberLiteralExpression.printNonNullClassInstanceProperties ("mBitNumberLiteralExpression") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bitNumberLiteralExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression ("bitNumberLiteralExpression",
                                                                                  & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bitNumberLiteralExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLiteralExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLiteralExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression GGS_bitNumberLiteralExpression::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralExpression result ;
  const GGS_bitNumberLiteralExpression * p = (const GGS_bitNumberLiteralExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLiteralExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLiteralExpression_2E_weak::objectCompare (const GGS_bitNumberLiteralExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression_2E_weak::GGS_bitNumberLiteralExpression_2E_weak (void) :
GGS_bitNumberExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression_2E_weak & GGS_bitNumberLiteralExpression_2E_weak::operator = (const GGS_bitNumberLiteralExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression_2E_weak::GGS_bitNumberLiteralExpression_2E_weak (const GGS_bitNumberLiteralExpression & inSource) :
GGS_bitNumberExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression_2E_weak GGS_bitNumberLiteralExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bitNumberLiteralExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression GGS_bitNumberLiteralExpression_2E_weak::bang_bitNumberLiteralExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bitNumberLiteralExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberLiteralExpression) ;
      result = GGS_bitNumberLiteralExpression ((cPtr_bitNumberLiteralExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bitNumberLiteralExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression_2E_weak ("bitNumberLiteralExpression.weak",
                                                                                          & kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bitNumberLiteralExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLiteralExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLiteralExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralExpression_2E_weak GGS_bitNumberLiteralExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralExpression_2E_weak result ;
  const GGS_bitNumberLiteralExpression_2E_weak * p = (const GGS_bitNumberLiteralExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLiteralExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitNumberLiteralValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLiteralValue::objectCompare (const GGS_bitNumberLiteralValue & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue::GGS_bitNumberLiteralValue (void) :
GGS_bitNumberExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bitNumberLiteralValue GGS_bitNumberLiteralValue::
init_21_ (const GGS_luint & in_mBitNumberLiteralValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_bitNumberLiteralValue * object = nullptr ;
  macroMyNew (object, cPtr_bitNumberLiteralValue (inCompiler COMMA_THERE)) ;
  object->bitNumberLiteralValue_init_21_ (in_mBitNumberLiteralValue, inCompiler) ;
  const GGS_bitNumberLiteralValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralValue::
bitNumberLiteralValue_init_21_ (const GGS_luint & in_mBitNumberLiteralValue,
                                Compiler * /* inCompiler */) {
  mProperty_mBitNumberLiteralValue = in_mBitNumberLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue::GGS_bitNumberLiteralValue (const cPtr_bitNumberLiteralValue * inSourcePtr) :
GGS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLiteralValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue GGS_bitNumberLiteralValue::class_func_new (const GGS_luint & in_mBitNumberLiteralValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralValue result ;
  macroMyNew (result.mObjectPtr, cPtr_bitNumberLiteralValue (in_mBitNumberLiteralValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_bitNumberLiteralValue::readProperty_mBitNumberLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_bitNumberLiteralValue * p = (cPtr_bitNumberLiteralValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralValue) ;
    return p->mProperty_mBitNumberLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitNumberLiteralValue::setProperty_mBitNumberLiteralValue (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitNumberLiteralValue * p = (cPtr_bitNumberLiteralValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLiteralValue) ;
    p->mProperty_mBitNumberLiteralValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLiteralValue class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLiteralValue::cPtr_bitNumberLiteralValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLiteralValue::cPtr_bitNumberLiteralValue (const GGS_luint & in_mBitNumberLiteralValue,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLiteralValue () {
  mProperty_mBitNumberLiteralValue = in_mBitNumberLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitNumberLiteralValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue ;
}

void cPtr_bitNumberLiteralValue::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@bitNumberLiteralValue:") ;
  mProperty_mBitNumberLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitNumberLiteralValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitNumberLiteralValue (mProperty_mBitNumberLiteralValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberLiteralValue::printNonNullClassInstanceProperties (void) const {
    cPtr_bitNumberExpression::printNonNullClassInstanceProperties () ;
    mProperty_mBitNumberLiteralValue.printNonNullClassInstanceProperties ("mBitNumberLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bitNumberLiteralValue generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue ("bitNumberLiteralValue",
                                                                             & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bitNumberLiteralValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLiteralValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLiteralValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue GGS_bitNumberLiteralValue::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralValue result ;
  const GGS_bitNumberLiteralValue * p = (const GGS_bitNumberLiteralValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLiteralValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLiteralValue_2E_weak::objectCompare (const GGS_bitNumberLiteralValue_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue_2E_weak::GGS_bitNumberLiteralValue_2E_weak (void) :
GGS_bitNumberExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue_2E_weak & GGS_bitNumberLiteralValue_2E_weak::operator = (const GGS_bitNumberLiteralValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue_2E_weak::GGS_bitNumberLiteralValue_2E_weak (const GGS_bitNumberLiteralValue & inSource) :
GGS_bitNumberExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue_2E_weak GGS_bitNumberLiteralValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bitNumberLiteralValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue GGS_bitNumberLiteralValue_2E_weak::bang_bitNumberLiteralValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bitNumberLiteralValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberLiteralValue) ;
      result = GGS_bitNumberLiteralValue ((cPtr_bitNumberLiteralValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bitNumberLiteralValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue_2E_weak ("bitNumberLiteralValue.weak",
                                                                                     & kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bitNumberLiteralValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLiteralValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLiteralValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLiteralValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLiteralValue_2E_weak GGS_bitNumberLiteralValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_bitNumberLiteralValue_2E_weak result ;
  const GGS_bitNumberLiteralValue_2E_weak * p = (const GGS_bitNumberLiteralValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLiteralValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLiteralValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLabelValue_2E_weak::objectCompare (const GGS_bitNumberLabelValue_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue_2E_weak::GGS_bitNumberLabelValue_2E_weak (void) :
GGS_bitNumberExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue_2E_weak & GGS_bitNumberLabelValue_2E_weak::operator = (const GGS_bitNumberLabelValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue_2E_weak::GGS_bitNumberLabelValue_2E_weak (const GGS_bitNumberLabelValue & inSource) :
GGS_bitNumberExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue_2E_weak GGS_bitNumberLabelValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bitNumberLabelValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue GGS_bitNumberLabelValue_2E_weak::bang_bitNumberLabelValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bitNumberLabelValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitNumberLabelValue) ;
      result = GGS_bitNumberLabelValue ((cPtr_bitNumberLabelValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bitNumberLabelValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue_2E_weak ("bitNumberLabelValue.weak",
                                                                                   & kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bitNumberLabelValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLabelValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLabelValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue_2E_weak GGS_bitNumberLabelValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_bitNumberLabelValue_2E_weak result ;
  const GGS_bitNumberLabelValue_2E_weak * p = (const GGS_bitNumberLabelValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLabelValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLabelValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_labelMap::cMapElement_labelMap (const GGS_labelMap_2E_element & inValue
                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_labelMap::cMapElement_labelMap (const GGS_lstring & inKey
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

GGS_labelMap::GGS_labelMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap::GGS_labelMap (const GGS_labelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap & GGS_labelMap::operator = (const GGS_labelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap GGS_labelMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_labelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap GGS_labelMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_labelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element_3F_ GGS_labelMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_labelMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_labelMap * p = (cMapElement_labelMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_labelMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_labelMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap GGS_labelMap::class_func_mapWithMapToOverride (const GGS_labelMap & inMapToOverride
                                                            COMMA_LOCATION_ARGS) {
  GGS_labelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap GGS_labelMap::getter_overriddenMap (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_labelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap::setter_insertKey (GGS_lstring inKey,
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

cMapElement_labelMap * GGS_labelMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                        const GGS_string & inKey
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * result = (cMapElement_labelMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_labelMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @labelMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_labelMap::DownEnumerator_labelMap (const GGS_labelMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element DownEnumerator_labelMap::current (LOCATION_ARGS) const {
  const cMapElement_labelMap * p = (const cMapElement_labelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_labelMap) ;
  return GGS_labelMap_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_labelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @labelMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_labelMap::UpEnumerator_labelMap (const GGS_labelMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element UpEnumerator_labelMap::current (LOCATION_ARGS) const {
  const cMapElement_labelMap * p = (const cMapElement_labelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_labelMap) ;
  return GGS_labelMap_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_labelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @labelMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_labelMap ("labelMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_labelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_labelMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_labelMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap GGS_labelMap::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_labelMap result ;
  const GGS_labelMap * p = (const GGS_labelMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_labelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@uint x4String'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_x_34_String (const GGS_uint & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_uint temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.objectCompare (GGS_uint (uint32_t (65535U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult = GGS_string ("****") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_uint temp_2 = inObject ;
    result_outResult = temp_2.right_shift_operation (GGS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 31)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 31)) ;
    const GGS_uint temp_3 = inObject ;
    result_outResult.plusAssignOperation(temp_3.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)) ;
    const GGS_uint temp_4 = inObject ;
    result_outResult.plusAssignOperation(temp_4.right_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)).operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)) ;
    const GGS_uint temp_5 = inObject ;
    result_outResult.plusAssignOperation(temp_5.operator_and (GGS_uint (uint32_t (15U)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 34)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 34)) ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

cMapElement_constantMap::cMapElement_constantMap (const GGS_constantMap_2E_element & inValue
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mValue (inValue.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_constantMap::cMapElement_constantMap (const GGS_lstring & inKey,
                                                  const GGS_sint_36__34_ & in_mValue
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap::GGS_constantMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap::GGS_constantMap (const GGS_constantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap & GGS_constantMap::operator = (const GGS_constantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_constantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_constantMap * p = (cMapElement_constantMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_constantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_constantMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mValue = p->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::class_func_mapWithMapToOverride (const GGS_constantMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_constantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_insertKey (GGS_lstring inKey,
                                        GGS_sint_36__34_ inArgument0,
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

void GGS_constantMap::method_searchKey (GGS_lstring inKey,
                                        GGS_sint_36__34_ & outArgument0,
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

GGS_sint_36__34_ GGS_constantMap::getter_mValueForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GGS_sint_36__34_ result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_setMValueForKey (GGS_sint_36__34_ inAttributeValue,
                                              GGS_string inKey,
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

cMapElement_constantMap * GGS_constantMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                              const GGS_string & inKey
                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * result = (cMapElement_constantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @constantMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_constantMap::DownEnumerator_constantMap (const GGS_constantMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element DownEnumerator_constantMap::current (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return GGS_constantMap_2E_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ DownEnumerator_constantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @constantMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_constantMap::UpEnumerator_constantMap (const GGS_constantMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element UpEnumerator_constantMap::current (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return GGS_constantMap_2E_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ UpEnumerator_constantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mValue ;
}


//--------------------------------------------------------------------------------------------------
//     @constantMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap ("constantMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  const GGS_constantMap * p = (const GGS_constantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineMap::cMapElement_routineMap (const GGS_routineMap_2E_element & inValue
                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIsNoReturn (inValue.mProperty_mIsNoReturn),
mProperty_mRequiredBank (inValue.mProperty_mRequiredBank),
mProperty_mReturnedBank (inValue.mProperty_mReturnedBank),
mProperty_mPreservesBank (inValue.mProperty_mPreservesBank) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineMap::cMapElement_routineMap (const GGS_lstring & inKey,
                                                const GGS_bool & in_mIsNoReturn,
                                                const GGS_uint & in_mRequiredBank,
                                                const GGS_uint & in_mReturnedBank,
                                                const GGS_bool & in_mPreservesBank
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsNoReturn" ":") ;
  mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRequiredBank" ":") ;
  mProperty_mRequiredBank.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnedBank" ":") ;
  mProperty_mReturnedBank.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPreservesBank" ":") ;
  mProperty_mPreservesBank.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (const GGS_routineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap & GGS_routineMap::operator = (const GGS_routineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_routineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element_3F_ GGS_routineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_routineMap * p = (cMapElement_routineMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_routineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIsNoReturn = p->mProperty_mIsNoReturn ;
      element.mProperty_mRequiredBank = p->mProperty_mRequiredBank ;
      element.mProperty_mReturnedBank = p->mProperty_mReturnedBank ;
      element.mProperty_mPreservesBank = p->mProperty_mPreservesBank ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::class_func_mapWithMapToOverride (const GGS_routineMap & inMapToOverride
                                                                COMMA_LOCATION_ARGS) {
  GGS_routineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::getter_overriddenMap (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_routineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::setter_insertKey (GGS_lstring inKey,
                                       GGS_bool inArgument0,
                                       GGS_uint inArgument1,
                                       GGS_uint inArgument2,
                                       GGS_bool inArgument3,
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

void GGS_routineMap::method_searchKey (GGS_lstring inKey,
                                       GGS_bool & outArgument0,
                                       GGS_uint & outArgument1,
                                       GGS_uint & outArgument2,
                                       GGS_bool & outArgument3,
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

GGS_bool GGS_routineMap::getter_mIsNoReturnForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineMap::getter_mRequiredBankForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mProperty_mRequiredBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineMap::getter_mReturnedBankForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mProperty_mReturnedBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMap::getter_mPreservesBankForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mProperty_mPreservesBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::setter_setMIsNoReturnForKey (GGS_bool inAttributeValue,
                                                  GGS_string inKey,
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

void GGS_routineMap::setter_setMRequiredBankForKey (GGS_uint inAttributeValue,
                                                    GGS_string inKey,
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

void GGS_routineMap::setter_setMReturnedBankForKey (GGS_uint inAttributeValue,
                                                    GGS_string inKey,
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

void GGS_routineMap::setter_setMPreservesBankForKey (GGS_bool inAttributeValue,
                                                     GGS_string inKey,
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

cMapElement_routineMap * GGS_routineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                            const GGS_string & inKey
                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * result = (cMapElement_routineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @routineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineMap::DownEnumerator_routineMap (const GGS_routineMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element DownEnumerator_routineMap::current (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return GGS_routineMap_2E_element (p->mProperty_lkey, p->mProperty_mIsNoReturn, p->mProperty_mRequiredBank, p->mProperty_mReturnedBank, p->mProperty_mPreservesBank) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_routineMap::current_mRequiredBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_routineMap::current_mReturnedBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineMap::current_mPreservesBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @routineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineMap::UpEnumerator_routineMap (const GGS_routineMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element UpEnumerator_routineMap::current (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return GGS_routineMap_2E_element (p->mProperty_lkey, p->mProperty_mIsNoReturn, p->mProperty_mRequiredBank, p->mProperty_mReturnedBank, p->mProperty_mPreservesBank) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_routineMap::current_mRequiredBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_routineMap::current_mReturnedBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineMap::current_mPreservesBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mPreservesBank ;
}


//--------------------------------------------------------------------------------------------------
//     @routineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_routineMap result ;
  const GGS_routineMap * p = (const GGS_routineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum routineKind
//--------------------------------------------------------------------------------------------------

GGS_routineKind::GGS_routineKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_regularRoutine (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_regularRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_noReturnRoutine (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_noReturnRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_interruptRoutine (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_interruptRoutine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_routineKind [4] = {
  "(not built)",
  "regularRoutine",
  "noReturnRoutine",
  "interruptRoutine"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isRegularRoutine (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regularRoutine == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isNoReturnRoutine (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noReturnRoutine == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isInterruptRoutine (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_interruptRoutine == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineKind::description (String & ioString,
                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @routineKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_routineKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineKind::objectCompare (const GGS_routineKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @routineKind generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_routineKind result ;
  const GGS_routineKind * p = (const GGS_routineKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineKind *> (p)) {
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
                               const GGS_registerTable constin_inRegisterTable,
                               const GGS_constantMap constin_inConstantMap,
                               GGS_sint_36__34_ & out_outResult,
                               GGS_stringset & io_ioUsedRegisters,
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
                                       const GGS_registerTable constin_inRegisterTable,
                                       const GGS_constantMap constin_inConstantMap,
                                       GGS_stringset & io_ioUsedRegisters,
                                       const GGS_bitSliceTable constin_inBitSliceTable,
                                       GGS_uint & out_outBitNumber,
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

cMapElement_symbolTableForOptimizations::cMapElement_symbolTableForOptimizations (const GGS_symbolTableForOptimizations_2E_element & inValue
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mDefinitionLineIndex (inValue.mProperty_mDefinitionLineIndex),
mProperty_mIsDeletable (inValue.mProperty_mIsDeletable) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForOptimizations::cMapElement_symbolTableForOptimizations (const GGS_lstring & inKey,
                                                                                  const GGS_uint & in_mDefinitionLineIndex,
                                                                                  const GGS_bool & in_mIsDeletable
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDefinitionLineIndex" ":") ;
  mProperty_mDefinitionLineIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsDeletable" ":") ;
  mProperty_mIsDeletable.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations::GGS_symbolTableForOptimizations (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations::GGS_symbolTableForOptimizations (const GGS_symbolTableForOptimizations & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations & GGS_symbolTableForOptimizations::operator = (const GGS_symbolTableForOptimizations & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations GGS_symbolTableForOptimizations::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations GGS_symbolTableForOptimizations::class_func_emptyMap (LOCATION_ARGS) {
  GGS_symbolTableForOptimizations result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element_3F_ GGS_symbolTableForOptimizations
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForOptimizations_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_symbolTableForOptimizations * p = (cMapElement_symbolTableForOptimizations *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_symbolTableForOptimizations_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForOptimizations_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mDefinitionLineIndex = p->mProperty_mDefinitionLineIndex ;
      element.mProperty_mIsDeletable = p->mProperty_mIsDeletable ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations GGS_symbolTableForOptimizations::class_func_mapWithMapToOverride (const GGS_symbolTableForOptimizations & inMapToOverride
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations GGS_symbolTableForOptimizations::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForOptimizations result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::setter_insertKey (GGS_lstring inKey,
                                                        GGS_uint inArgument0,
                                                        GGS_bool inArgument1,
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

void GGS_symbolTableForOptimizations::method_searchKey (GGS_lstring inKey,
                                                        GGS_uint & outArgument0,
                                                        GGS_bool & outArgument1,
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

void GGS_symbolTableForOptimizations::setter_removeKey (GGS_lstring inKey,
                                                        GGS_uint & outArgument0,
                                                        GGS_bool & outArgument1,
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

GGS_uint GGS_symbolTableForOptimizations::getter_mDefinitionLineIndexForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    result = p->mProperty_mDefinitionLineIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForOptimizations::getter_mIsDeletableForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    result = p->mProperty_mIsDeletable ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations::setter_setMDefinitionLineIndexForKey (GGS_uint inAttributeValue,
                                                                            GGS_string inKey,
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

void GGS_symbolTableForOptimizations::setter_setMIsDeletableForKey (GGS_bool inAttributeValue,
                                                                    GGS_string inKey,
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

cMapElement_symbolTableForOptimizations * GGS_symbolTableForOptimizations::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                              const GGS_string & inKey
                                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForOptimizations * result = (cMapElement_symbolTableForOptimizations *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForOptimizations) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @symbolTableForOptimizations
//--------------------------------------------------------------------------------------------------

DownEnumerator_symbolTableForOptimizations::DownEnumerator_symbolTableForOptimizations (const GGS_symbolTableForOptimizations & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element DownEnumerator_symbolTableForOptimizations::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return GGS_symbolTableForOptimizations_2E_element (p->mProperty_lkey, p->mProperty_mDefinitionLineIndex, p->mProperty_mIsDeletable) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_symbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_symbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return p->mProperty_mDefinitionLineIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_symbolTableForOptimizations::current_mIsDeletable (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return p->mProperty_mIsDeletable ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @symbolTableForOptimizations
//--------------------------------------------------------------------------------------------------

UpEnumerator_symbolTableForOptimizations::UpEnumerator_symbolTableForOptimizations (const GGS_symbolTableForOptimizations & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element UpEnumerator_symbolTableForOptimizations::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return GGS_symbolTableForOptimizations_2E_element (p->mProperty_lkey, p->mProperty_mDefinitionLineIndex, p->mProperty_mIsDeletable) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_symbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_symbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return p->mProperty_mDefinitionLineIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_symbolTableForOptimizations::current_mIsDeletable (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return p->mProperty_mIsDeletable ;
}


//--------------------------------------------------------------------------------------------------
//     @symbolTableForOptimizations generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations ("symbolTableForOptimizations",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_symbolTableForOptimizations::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForOptimizations::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForOptimizations (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations GGS_symbolTableForOptimizations::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations result ;
  const GGS_symbolTableForOptimizations * p = (const GGS_symbolTableForOptimizations *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForOptimizations *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_configFieldMap::cMapElement_configFieldMap (const GGS_configFieldMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mRegisterName (inValue.mProperty_mRegisterName),
mProperty_mMaskValue (inValue.mProperty_mMaskValue),
mProperty_mDescription (inValue.mProperty_mDescription),
mProperty_mFieldSettingMap (inValue.mProperty_mFieldSettingMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_configFieldMap::cMapElement_configFieldMap (const GGS_lstring & inKey,
                                                        const GGS_lstring & in_mRegisterName,
                                                        const GGS_luint & in_mMaskValue,
                                                        const GGS_lstring & in_mDescription,
                                                        const GGS_fieldSettingMap & in_mFieldSettingMap
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRegisterName" ":") ;
  mProperty_mRegisterName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMaskValue" ":") ;
  mProperty_mMaskValue.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDescription" ":") ;
  mProperty_mDescription.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFieldSettingMap" ":") ;
  mProperty_mFieldSettingMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap::GGS_configFieldMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap::GGS_configFieldMap (const GGS_configFieldMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap & GGS_configFieldMap::operator = (const GGS_configFieldMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_configFieldMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_configFieldMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_ GGS_configFieldMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configFieldMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_configFieldMap * p = (cMapElement_configFieldMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_configFieldMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_configFieldMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mRegisterName = p->mProperty_mRegisterName ;
      element.mProperty_mMaskValue = p->mProperty_mMaskValue ;
      element.mProperty_mDescription = p->mProperty_mDescription ;
      element.mProperty_mFieldSettingMap = p->mProperty_mFieldSettingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::class_func_mapWithMapToOverride (const GGS_configFieldMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_configFieldMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_configFieldMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::setter_insertKey (GGS_lstring inKey,
                                           GGS_lstring inArgument0,
                                           GGS_luint inArgument1,
                                           GGS_lstring inArgument2,
                                           GGS_fieldSettingMap inArgument3,
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

void GGS_configFieldMap::method_searchKey (GGS_lstring inKey,
                                           GGS_lstring & outArgument0,
                                           GGS_luint & outArgument1,
                                           GGS_lstring & outArgument2,
                                           GGS_fieldSettingMap & outArgument3,
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

GGS_lstring GGS_configFieldMap::getter_mRegisterNameForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mProperty_mRegisterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configFieldMap::getter_mMaskValueForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mProperty_mMaskValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configFieldMap::getter_mDescriptionForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mProperty_mDescription ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap GGS_configFieldMap::getter_mFieldSettingMapForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GGS_fieldSettingMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mProperty_mFieldSettingMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::setter_setMRegisterNameForKey (GGS_lstring inAttributeValue,
                                                        GGS_string inKey,
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

void GGS_configFieldMap::setter_setMMaskValueForKey (GGS_luint inAttributeValue,
                                                     GGS_string inKey,
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

void GGS_configFieldMap::setter_setMDescriptionForKey (GGS_lstring inAttributeValue,
                                                       GGS_string inKey,
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

void GGS_configFieldMap::setter_setMFieldSettingMapForKey (GGS_fieldSettingMap inAttributeValue,
                                                           GGS_string inKey,
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

cMapElement_configFieldMap * GGS_configFieldMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_configFieldMap * result = (cMapElement_configFieldMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_configFieldMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @configFieldMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_configFieldMap::DownEnumerator_configFieldMap (const GGS_configFieldMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element DownEnumerator_configFieldMap::current (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return GGS_configFieldMap_2E_element (p->mProperty_lkey, p->mProperty_mRegisterName, p->mProperty_mMaskValue, p->mProperty_mDescription, p->mProperty_mFieldSettingMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configFieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configFieldMap::current_mRegisterName (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_configFieldMap::current_mMaskValue (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configFieldMap::current_mDescription (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap DownEnumerator_configFieldMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mFieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @configFieldMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_configFieldMap::UpEnumerator_configFieldMap (const GGS_configFieldMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element UpEnumerator_configFieldMap::current (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return GGS_configFieldMap_2E_element (p->mProperty_lkey, p->mProperty_mRegisterName, p->mProperty_mMaskValue, p->mProperty_mDescription, p->mProperty_mFieldSettingMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configFieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configFieldMap::current_mRegisterName (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_configFieldMap::current_mMaskValue (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configFieldMap::current_mDescription (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap UpEnumerator_configFieldMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mProperty_mFieldSettingMap ;
}


//--------------------------------------------------------------------------------------------------
//     @configFieldMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configFieldMap ("configFieldMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_configFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configFieldMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_configFieldMap result ;
  const GGS_configFieldMap * p = (const GGS_configFieldMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

