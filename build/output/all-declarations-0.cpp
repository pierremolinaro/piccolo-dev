#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//---------------------------------------------------------------------------------------------------------------------*

cTokenFor_piccolo_5F_lexique::cTokenFor_piccolo_5F_lexique (void) :
mLexicalAttribute_charValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_piccolo_5F_lexique::C_Lexique_piccolo_5F_lexique (C_Compiler * inCallerCompiler,
                                                            const C_String & inDependencyFileExtension,
                                                            const C_String & inDependencyFilePath,
                                                            const C_String & inSourceFileName
                                                            COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inSourceFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_piccolo_5F_lexique::C_Lexique_piccolo_5F_lexique (C_Compiler * inCallerCompiler,
                                                            const C_String & inSourceString,
                                                            const C_String & inStringForError
                                                            COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_piccolo_5F_lexique::indexingDirectory (void) const {
  return "PICCOLO_INDEXES" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Lexical error message list                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

static const char * gLexicalMessage_piccolo_5F_lexique_ASCIIcodeTooLargeError = "ASCII code > 255" ;

static const char * gLexicalMessage_piccolo_5F_lexique_binNumberTooLarge = "bin number too large" ;

static const char * gLexicalMessage_piccolo_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_piccolo_5F_lexique_hexNumberTooLarge = "hex number too large" ;

static const char * gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_piccolo_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_piccolo_5F_lexique_internalError = "internal error" ;

//---------------------------------------------------------------------------------------------------------------------*
//          Syntax error messages, for every terminal symbol                                                           *
//---------------------------------------------------------------------------------------------------------------------*

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_identifier = "an identifier" ;

//--- Syntax error message for terminal '$label$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_label = "a label beginning with '@'" ;

//--- Syntax error message for terminal '$integer$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_integer = "a 32-bit unsigned number" ;

//--- Syntax error message for terminal '$literal_char$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_literal_5F_char = "a character constant" ;

//--- Syntax error message for terminal '$literal_string$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_literal_5F_string = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_comment = "a comment" ;

//--- Syntax error message for terminal '$commentMark$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_commentMark = "a comment" ;

//--- Syntax error message for terminal '$bank$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bank = "the 'bank' keyword" ;

//--- Syntax error message for terminal '$banksave$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_banksave = "the 'banksave' keyword" ;

//--- Syntax error message for terminal '$banksel$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_banksel = "the 'banksel' keyword" ;

//--- Syntax error message for terminal '$baseline$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_baseline = "the 'baseline' keyword" ;

//--- Syntax error message for terminal '$block$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_block = "the 'block' keyword" ;

//--- Syntax error message for terminal '$bootloader$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bootloader = "the 'bootloader' keyword" ;

//--- Syntax error message for terminal '$byte$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_byte = "the 'byte' keyword" ;

//--- Syntax error message for terminal '$case$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_case = "the 'case' keyword" ;

//--- Syntax error message for terminal '$checkbank$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_checkbank = "the 'checkbank' keyword" ;

//--- Syntax error message for terminal '$checknobank$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_checknobank = "the 'checknobank' keyword" ;

//--- Syntax error message for terminal '$checkpic$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_checkpic = "the 'checkpic' keyword" ;

//--- Syntax error message for terminal '$computed$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_computed = "the 'computed' keyword" ;

//--- Syntax error message for terminal '$configuration$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_configuration = "the 'configuration' keyword" ;

//--- Syntax error message for terminal '$const$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_const = "the 'const' keyword" ;

//--- Syntax error message for terminal '$contextsave$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_contextsave = "the 'contextsave' keyword" ;

//--- Syntax error message for terminal '$data$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_data = "the 'data' keyword" ;

//--- Syntax error message for terminal '$do$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_do = "the 'do' keyword" ;

//--- Syntax error message for terminal '$end$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_end = "the 'end' keyword" ;

//--- Syntax error message for terminal '$else$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_else = "the 'else' keyword" ;

//--- Syntax error message for terminal '$elsif$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_elsif = "the 'elsif' keyword" ;

//--- Syntax error message for terminal '$ensures$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_ensures = "the 'ensures' keyword" ;

//--- Syntax error message for terminal '$fast$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_fast = "the 'fast' keyword" ;

//--- Syntax error message for terminal '$forever$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_forever = "the 'forever' keyword" ;

//--- Syntax error message for terminal '$if$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_if = "the 'if' keyword" ;

//--- Syntax error message for terminal '$implements$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_implements = "the 'implements' keyword" ;

//--- Syntax error message for terminal '$include$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_include = "the 'include' keyword" ;

//--- Syntax error message for terminal '$inline$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_inline = "the 'inline' keyword" ;

//--- Syntax error message for terminal '$interrupt$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_interrupt = "the 'interrupt' keyword" ;

//--- Syntax error message for terminal '$macro$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_macro = "the 'macro' keyword" ;

//--- Syntax error message for terminal '$midrange$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_midrange = "the 'midrange' keyword" ;

//--- Syntax error message for terminal '$nobank$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_nobank = "the 'nobank' keyword" ;

//--- Syntax error message for terminal '$noreturn$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_noreturn = "the 'noreturn' keyword" ;

//--- Syntax error message for terminal '$page$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_page = "the 'page' keyword" ;

//--- Syntax error message for terminal '$pic18$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_pic_31__38_ = "the 'pic18' keyword" ;

//--- Syntax error message for terminal '$preserved$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_preserved = "the 'preserved' keyword" ;

//--- Syntax error message for terminal '$ram$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_ram = "the 'ram' keyword" ;

//--- Syntax error message for terminal '$requires$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_requires = "the 'requires' keyword" ;

//--- Syntax error message for terminal '$rom$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_rom = "the 'rom' keyword" ;

//--- Syntax error message for terminal '$routine$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_routine = "the 'routine' keyword" ;

//--- Syntax error message for terminal '$switch$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_switch = "the 'switch' keyword" ;

//--- Syntax error message for terminal '$unused$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_unused = "the 'unused' keyword" ;

//--- Syntax error message for terminal '$uses$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_uses = "the 'uses' keyword" ;

//--- Syntax error message for terminal '$w$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_w = "the 'w' keyword" ;

//--- Syntax error message for terminal '$while$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_while = "the 'while' keyword" ;

//--- Syntax error message for terminal '$addlw$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_addlw = "the 'addlw' instruction" ;

//--- Syntax error message for terminal '$addwf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_addwf = "the 'addwf' instruction" ;

//--- Syntax error message for terminal '$addwfc$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_addwfc = "the 'addwfc' instruction" ;

//--- Syntax error message for terminal '$andlw$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_andlw = "the 'andlw' instruction" ;

//--- Syntax error message for terminal '$andwf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_andwf = "the 'andwf' instruction" ;

//--- Syntax error message for terminal '$bc$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bc = "the 'bc' instruction" ;

//--- Syntax error message for terminal '$bcf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bcf = "the 'bcf' instruction" ;

//--- Syntax error message for terminal '$bn$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bn = "the 'bn' instruction" ;

//--- Syntax error message for terminal '$bnc$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bnc = "the 'bnc' instruction" ;

//--- Syntax error message for terminal '$bnn$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bnn = "the 'bnn' instruction" ;

//--- Syntax error message for terminal '$bov$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bov = "the 'bov' instruction" ;

//--- Syntax error message for terminal '$bnov$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bnov = "the 'bnov' instruction" ;

//--- Syntax error message for terminal '$bnz$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bnz = "the 'bnz' instruction" ;

//--- Syntax error message for terminal '$bsf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bsf = "the 'bsf' instruction" ;

//--- Syntax error message for terminal '$bra$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bra = "the 'bra' instruction" ;

//--- Syntax error message for terminal '$btg$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_btg = "the 'btg' instruction" ;

//--- Syntax error message for terminal '$bz$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_bz = "the 'bz' instruction" ;

//--- Syntax error message for terminal '$call$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_call = "the 'call' instruction" ;

//--- Syntax error message for terminal '$clrf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_clrf = "the 'clrf' instruction" ;

//--- Syntax error message for terminal '$clrw$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_clrw = "the 'clrw' instruction" ;

//--- Syntax error message for terminal '$clrwdt$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_clrwdt = "the 'clrwdt' instruction" ;

//--- Syntax error message for terminal '$comf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_comf = "the 'comf' instruction" ;

//--- Syntax error message for terminal '$daw$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_daw = "the 'daw' instruction" ;

//--- Syntax error message for terminal '$decf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_decf = "the 'decf' instruction" ;

//--- Syntax error message for terminal '$incf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_incf = "the 'incf' instruction" ;

//--- Syntax error message for terminal '$iorlw$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_iorlw = "the 'iorlw' instruction" ;

//--- Syntax error message for terminal '$iorwf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_iorwf = "the 'iorwf' instruction" ;

//--- Syntax error message for terminal '$fnop$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_fnop = "the 'fnop' instruction" ;

//--- Syntax error message for terminal '$goto$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_goto = "the 'goto' instruction" ;

//--- Syntax error message for terminal '$jsr$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_jsr = "the 'jsr' instruction" ;

//--- Syntax error message for terminal '$jump$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_jump = "the 'jump' instruction" ;

//--- Syntax error message for terminal '$lfsr$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_lfsr = "the 'lfsr' instruction" ;

//--- Syntax error message for terminal '$ldataptr$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_ldataptr = "the 'ldataptr' instruction" ;

//--- Syntax error message for terminal '$ltblptr$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_ltblptr = "the 'ltblptr' instruction" ;

//--- Syntax error message for terminal '$mnop$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_mnop = "the 'mnop' instruction" ;

//--- Syntax error message for terminal '$movf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_movf = "the 'movf' instruction" ;

//--- Syntax error message for terminal '$movff$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_movff = "the 'movff' instruction" ;

//--- Syntax error message for terminal '$movlw$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_movlw = "the 'movlw' instruction" ;

//--- Syntax error message for terminal '$movwf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_movwf = "the 'movwf' instruction" ;

//--- Syntax error message for terminal '$mullw$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_mullw = "the 'mullw' instruction" ;

//--- Syntax error message for terminal '$mulwf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_mulwf = "the 'mulwf' instruction" ;

//--- Syntax error message for terminal '$negf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_negf = "the 'negf' instruction" ;

//--- Syntax error message for terminal '$nop$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_nop = "the 'nop' instruction" ;

//--- Syntax error message for terminal '$nopbra$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_nopbra = "the 'nopbra' instruction" ;

//--- Syntax error message for terminal '$pop$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_pop = "the 'pop' instruction" ;

//--- Syntax error message for terminal '$option$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_option = "the 'option' instruction" ;

//--- Syntax error message for terminal '$push$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_push = "the 'push' instruction" ;

//--- Syntax error message for terminal '$rcall$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_rcall = "the 'rcall' instruction" ;

//--- Syntax error message for terminal '$reset$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_reset = "the 'reset' instruction" ;

//--- Syntax error message for terminal '$retlw$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_retlw = "the 'retlw' instruction" ;

//--- Syntax error message for terminal '$rlcf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_rlcf = "the 'rlcf' instruction" ;

//--- Syntax error message for terminal '$rlf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_rlf = "the 'rlf' instruction" ;

//--- Syntax error message for terminal '$rlncf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_rlncf = "the 'rlncf' instruction" ;

//--- Syntax error message for terminal '$rrcf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_rrcf = "the 'rrcf' instruction" ;

//--- Syntax error message for terminal '$rrf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_rrf = "the 'rrf' instruction" ;

//--- Syntax error message for terminal '$rrncf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_rrncf = "the 'rrncf' instruction" ;

//--- Syntax error message for terminal '$setf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_setf = "the 'setf' instruction" ;

//--- Syntax error message for terminal '$sleep$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_sleep = "the 'sleep' instruction" ;

//--- Syntax error message for terminal '$subfwb$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_subfwb = "the 'subfwb' instruction" ;

//--- Syntax error message for terminal '$sublw$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_sublw = "the 'sublw' instruction" ;

//--- Syntax error message for terminal '$subwf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_subwf = "the 'subwf' instruction" ;

//--- Syntax error message for terminal '$subwfb$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_subwfb = "the 'subwfb' instruction" ;

//--- Syntax error message for terminal '$swapf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_swapf = "the 'swapf' instruction" ;

//--- Syntax error message for terminal '$tblrd$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_tblrd = "the 'tblrd' instruction" ;

//--- Syntax error message for terminal '$tblwt$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_tblwt = "the 'tblwt' instruction" ;

//--- Syntax error message for terminal '$tris$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_tris = "the 'tris' instruction" ;

//--- Syntax error message for terminal '$xorlw$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_xorlw = "the 'xorlw' instruction" ;

//--- Syntax error message for terminal '$xorwf$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique_xorwf = "the 'xorwf' instruction" ;

//--- Syntax error message for terminal '$*$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__2A_ = "the '*' delimitor" ;

//--- Syntax error message for terminal '$*+$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__2A__2B_ = "the '*+' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$<=$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3C__3D_ = "the '<=' delimitor" ;

//--- Syntax error message for terminal '$>=$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3E__3D_ = "the '>=' delimitor" ;

//--- Syntax error message for terminal '$*-$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__2A__2D_ = "the '*-' delimitor" ;

//--- Syntax error message for terminal '$+*$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__2B__2A_ = "the '+*' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__21_ = "the '!' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3D_ = "the '=' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$/$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__2F_ = "the '/' delimitor" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__2D_ = "the '-' delimitor" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__2B_ = "the '+' delimitor" ;

//--- Syntax error message for terminal '$?$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3F_ = "the '\?' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$<<$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3C__3C_ = "the '<<' delimitor" ;

//--- Syntax error message for terminal '$>>$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__3E__3E_ = "the '>>' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$%$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__25_ = "the '%' delimitor" ;

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_piccolo_5F_lexique__2E__2E__2E_ = "the '...' delimitor" ;

//---------------------------------------------------------------------------------------------------------------------*
//                getMessageForTerminal                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_piccolo_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  static const char * syntaxErrorMessageArray [154] = {kEndOfSourceLexicalErrorMessage,
    gSyntaxErrorMessage_piccolo_5F_lexique_identifier,
    gSyntaxErrorMessage_piccolo_5F_lexique_label,
    gSyntaxErrorMessage_piccolo_5F_lexique_integer,
    gSyntaxErrorMessage_piccolo_5F_lexique_literal_5F_char,
    gSyntaxErrorMessage_piccolo_5F_lexique_literal_5F_string,
    gSyntaxErrorMessage_piccolo_5F_lexique_comment,
    gSyntaxErrorMessage_piccolo_5F_lexique_commentMark,
    gSyntaxErrorMessage_piccolo_5F_lexique_bank,
    gSyntaxErrorMessage_piccolo_5F_lexique_banksave,
    gSyntaxErrorMessage_piccolo_5F_lexique_banksel,
    gSyntaxErrorMessage_piccolo_5F_lexique_baseline,
    gSyntaxErrorMessage_piccolo_5F_lexique_block,
    gSyntaxErrorMessage_piccolo_5F_lexique_bootloader,
    gSyntaxErrorMessage_piccolo_5F_lexique_byte,
    gSyntaxErrorMessage_piccolo_5F_lexique_case,
    gSyntaxErrorMessage_piccolo_5F_lexique_checkbank,
    gSyntaxErrorMessage_piccolo_5F_lexique_checknobank,
    gSyntaxErrorMessage_piccolo_5F_lexique_checkpic,
    gSyntaxErrorMessage_piccolo_5F_lexique_computed,
    gSyntaxErrorMessage_piccolo_5F_lexique_configuration,
    gSyntaxErrorMessage_piccolo_5F_lexique_const,
    gSyntaxErrorMessage_piccolo_5F_lexique_contextsave,
    gSyntaxErrorMessage_piccolo_5F_lexique_data,
    gSyntaxErrorMessage_piccolo_5F_lexique_do,
    gSyntaxErrorMessage_piccolo_5F_lexique_end,
    gSyntaxErrorMessage_piccolo_5F_lexique_else,
    gSyntaxErrorMessage_piccolo_5F_lexique_elsif,
    gSyntaxErrorMessage_piccolo_5F_lexique_ensures,
    gSyntaxErrorMessage_piccolo_5F_lexique_fast,
    gSyntaxErrorMessage_piccolo_5F_lexique_forever,
    gSyntaxErrorMessage_piccolo_5F_lexique_if,
    gSyntaxErrorMessage_piccolo_5F_lexique_implements,
    gSyntaxErrorMessage_piccolo_5F_lexique_include,
    gSyntaxErrorMessage_piccolo_5F_lexique_inline,
    gSyntaxErrorMessage_piccolo_5F_lexique_interrupt,
    gSyntaxErrorMessage_piccolo_5F_lexique_macro,
    gSyntaxErrorMessage_piccolo_5F_lexique_midrange,
    gSyntaxErrorMessage_piccolo_5F_lexique_nobank,
    gSyntaxErrorMessage_piccolo_5F_lexique_noreturn,
    gSyntaxErrorMessage_piccolo_5F_lexique_page,
    gSyntaxErrorMessage_piccolo_5F_lexique_pic_31__38_,
    gSyntaxErrorMessage_piccolo_5F_lexique_preserved,
    gSyntaxErrorMessage_piccolo_5F_lexique_ram,
    gSyntaxErrorMessage_piccolo_5F_lexique_requires,
    gSyntaxErrorMessage_piccolo_5F_lexique_rom,
    gSyntaxErrorMessage_piccolo_5F_lexique_routine,
    gSyntaxErrorMessage_piccolo_5F_lexique_switch,
    gSyntaxErrorMessage_piccolo_5F_lexique_unused,
    gSyntaxErrorMessage_piccolo_5F_lexique_uses,
    gSyntaxErrorMessage_piccolo_5F_lexique_w,
    gSyntaxErrorMessage_piccolo_5F_lexique_while,
    gSyntaxErrorMessage_piccolo_5F_lexique_addlw,
    gSyntaxErrorMessage_piccolo_5F_lexique_addwf,
    gSyntaxErrorMessage_piccolo_5F_lexique_addwfc,
    gSyntaxErrorMessage_piccolo_5F_lexique_andlw,
    gSyntaxErrorMessage_piccolo_5F_lexique_andwf,
    gSyntaxErrorMessage_piccolo_5F_lexique_bc,
    gSyntaxErrorMessage_piccolo_5F_lexique_bcf,
    gSyntaxErrorMessage_piccolo_5F_lexique_bn,
    gSyntaxErrorMessage_piccolo_5F_lexique_bnc,
    gSyntaxErrorMessage_piccolo_5F_lexique_bnn,
    gSyntaxErrorMessage_piccolo_5F_lexique_bov,
    gSyntaxErrorMessage_piccolo_5F_lexique_bnov,
    gSyntaxErrorMessage_piccolo_5F_lexique_bnz,
    gSyntaxErrorMessage_piccolo_5F_lexique_bsf,
    gSyntaxErrorMessage_piccolo_5F_lexique_bra,
    gSyntaxErrorMessage_piccolo_5F_lexique_btg,
    gSyntaxErrorMessage_piccolo_5F_lexique_bz,
    gSyntaxErrorMessage_piccolo_5F_lexique_call,
    gSyntaxErrorMessage_piccolo_5F_lexique_clrf,
    gSyntaxErrorMessage_piccolo_5F_lexique_clrw,
    gSyntaxErrorMessage_piccolo_5F_lexique_clrwdt,
    gSyntaxErrorMessage_piccolo_5F_lexique_comf,
    gSyntaxErrorMessage_piccolo_5F_lexique_daw,
    gSyntaxErrorMessage_piccolo_5F_lexique_decf,
    gSyntaxErrorMessage_piccolo_5F_lexique_incf,
    gSyntaxErrorMessage_piccolo_5F_lexique_iorlw,
    gSyntaxErrorMessage_piccolo_5F_lexique_iorwf,
    gSyntaxErrorMessage_piccolo_5F_lexique_fnop,
    gSyntaxErrorMessage_piccolo_5F_lexique_goto,
    gSyntaxErrorMessage_piccolo_5F_lexique_jsr,
    gSyntaxErrorMessage_piccolo_5F_lexique_jump,
    gSyntaxErrorMessage_piccolo_5F_lexique_lfsr,
    gSyntaxErrorMessage_piccolo_5F_lexique_ldataptr,
    gSyntaxErrorMessage_piccolo_5F_lexique_ltblptr,
    gSyntaxErrorMessage_piccolo_5F_lexique_mnop,
    gSyntaxErrorMessage_piccolo_5F_lexique_movf,
    gSyntaxErrorMessage_piccolo_5F_lexique_movff,
    gSyntaxErrorMessage_piccolo_5F_lexique_movlw,
    gSyntaxErrorMessage_piccolo_5F_lexique_movwf,
    gSyntaxErrorMessage_piccolo_5F_lexique_mullw,
    gSyntaxErrorMessage_piccolo_5F_lexique_mulwf,
    gSyntaxErrorMessage_piccolo_5F_lexique_negf,
    gSyntaxErrorMessage_piccolo_5F_lexique_nop,
    gSyntaxErrorMessage_piccolo_5F_lexique_nopbra,
    gSyntaxErrorMessage_piccolo_5F_lexique_pop,
    gSyntaxErrorMessage_piccolo_5F_lexique_option,
    gSyntaxErrorMessage_piccolo_5F_lexique_push,
    gSyntaxErrorMessage_piccolo_5F_lexique_rcall,
    gSyntaxErrorMessage_piccolo_5F_lexique_reset,
    gSyntaxErrorMessage_piccolo_5F_lexique_retlw,
    gSyntaxErrorMessage_piccolo_5F_lexique_rlcf,
    gSyntaxErrorMessage_piccolo_5F_lexique_rlf,
    gSyntaxErrorMessage_piccolo_5F_lexique_rlncf,
    gSyntaxErrorMessage_piccolo_5F_lexique_rrcf,
    gSyntaxErrorMessage_piccolo_5F_lexique_rrf,
    gSyntaxErrorMessage_piccolo_5F_lexique_rrncf,
    gSyntaxErrorMessage_piccolo_5F_lexique_setf,
    gSyntaxErrorMessage_piccolo_5F_lexique_sleep,
    gSyntaxErrorMessage_piccolo_5F_lexique_subfwb,
    gSyntaxErrorMessage_piccolo_5F_lexique_sublw,
    gSyntaxErrorMessage_piccolo_5F_lexique_subwf,
    gSyntaxErrorMessage_piccolo_5F_lexique_subwfb,
    gSyntaxErrorMessage_piccolo_5F_lexique_swapf,
    gSyntaxErrorMessage_piccolo_5F_lexique_tblrd,
    gSyntaxErrorMessage_piccolo_5F_lexique_tblwt,
    gSyntaxErrorMessage_piccolo_5F_lexique_tris,
    gSyntaxErrorMessage_piccolo_5F_lexique_xorlw,
    gSyntaxErrorMessage_piccolo_5F_lexique_xorwf,
    gSyntaxErrorMessage_piccolo_5F_lexique__2A_,
    gSyntaxErrorMessage_piccolo_5F_lexique__2A__2B_,
    gSyntaxErrorMessage_piccolo_5F_lexique__2C_,
    gSyntaxErrorMessage_piccolo_5F_lexique__21__3D_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3C__3D_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3E__3D_,
    gSyntaxErrorMessage_piccolo_5F_lexique__2A__2D_,
    gSyntaxErrorMessage_piccolo_5F_lexique__2B__2A_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3B_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3A_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3D__3D_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3C_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3E_,
    gSyntaxErrorMessage_piccolo_5F_lexique__5B_,
    gSyntaxErrorMessage_piccolo_5F_lexique__5D_,
    gSyntaxErrorMessage_piccolo_5F_lexique__2E_,
    gSyntaxErrorMessage_piccolo_5F_lexique__21_,
    gSyntaxErrorMessage_piccolo_5F_lexique__26_,
    gSyntaxErrorMessage_piccolo_5F_lexique__7C_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3D_,
    gSyntaxErrorMessage_piccolo_5F_lexique__7B_,
    gSyntaxErrorMessage_piccolo_5F_lexique__7D_,
    gSyntaxErrorMessage_piccolo_5F_lexique__28_,
    gSyntaxErrorMessage_piccolo_5F_lexique__29_,
    gSyntaxErrorMessage_piccolo_5F_lexique__2F_,
    gSyntaxErrorMessage_piccolo_5F_lexique__2D_,
    gSyntaxErrorMessage_piccolo_5F_lexique__2B_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3F_,
    gSyntaxErrorMessage_piccolo_5F_lexique__5E_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3C__3C_,
    gSyntaxErrorMessage_piccolo_5F_lexique__3E__3E_,
    gSyntaxErrorMessage_piccolo_5F_lexique__7E_,
    gSyntaxErrorMessage_piccolo_5F_lexique__25_,
    gSyntaxErrorMessage_piccolo_5F_lexique__2E__2E__2E_} ;
  return syntaxErrorMessageArray [inTerminalIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      U N I C O D E    S T R I N G S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'controlKeyWordList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_piccolo_5F_lexique_controlKeyWordList = 44 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_controlKeyWordList [ktable_size_piccolo_5F_lexique_controlKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_w, 1, C_Lexique_piccolo_5F_lexique::kToken_w),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_do, 2, C_Lexique_piccolo_5F_lexique::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_if, 2, C_Lexique_piccolo_5F_lexique::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_end, 3, C_Lexique_piccolo_5F_lexique::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ram, 3, C_Lexique_piccolo_5F_lexique::kToken_ram),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rom, 3, C_Lexique_piccolo_5F_lexique::kToken_rom),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bank, 4, C_Lexique_piccolo_5F_lexique::kToken_bank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_byte, 4, C_Lexique_piccolo_5F_lexique::kToken_byte),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_case, 4, C_Lexique_piccolo_5F_lexique::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_data, 4, C_Lexique_piccolo_5F_lexique::kToken_data),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_else, 4, C_Lexique_piccolo_5F_lexique::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_fast, 4, C_Lexique_piccolo_5F_lexique::kToken_fast),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_page, 4, C_Lexique_piccolo_5F_lexique::kToken_page),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_uses, 4, C_Lexique_piccolo_5F_lexique::kToken_uses),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_block, 5, C_Lexique_piccolo_5F_lexique::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_const, 5, C_Lexique_piccolo_5F_lexique::kToken_const),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_elsif, 5, C_Lexique_piccolo_5F_lexique::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_macro, 5, C_Lexique_piccolo_5F_lexique::kToken_macro),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_pic_31__38_, 5, C_Lexique_piccolo_5F_lexique::kToken_pic_31__38_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_while, 5, C_Lexique_piccolo_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_inline, 6, C_Lexique_piccolo_5F_lexique::kToken_inline),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nobank, 6, C_Lexique_piccolo_5F_lexique::kToken_nobank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_switch, 6, C_Lexique_piccolo_5F_lexique::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_unused, 6, C_Lexique_piccolo_5F_lexique::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_banksel, 7, C_Lexique_piccolo_5F_lexique::kToken_banksel),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ensures, 7, C_Lexique_piccolo_5F_lexique::kToken_ensures),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_forever, 7, C_Lexique_piccolo_5F_lexique::kToken_forever),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_include, 7, C_Lexique_piccolo_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_routine, 7, C_Lexique_piccolo_5F_lexique::kToken_routine),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_banksave, 8, C_Lexique_piccolo_5F_lexique::kToken_banksave),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_baseline, 8, C_Lexique_piccolo_5F_lexique::kToken_baseline),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checkpic, 8, C_Lexique_piccolo_5F_lexique::kToken_checkpic),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_computed, 8, C_Lexique_piccolo_5F_lexique::kToken_computed),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_midrange, 8, C_Lexique_piccolo_5F_lexique::kToken_midrange),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_noreturn, 8, C_Lexique_piccolo_5F_lexique::kToken_noreturn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_requires, 8, C_Lexique_piccolo_5F_lexique::kToken_requires),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checkbank, 9, C_Lexique_piccolo_5F_lexique::kToken_checkbank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_interrupt, 9, C_Lexique_piccolo_5F_lexique::kToken_interrupt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_preserved, 9, C_Lexique_piccolo_5F_lexique::kToken_preserved),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bootloader, 10, C_Lexique_piccolo_5F_lexique::kToken_bootloader),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_implements, 10, C_Lexique_piccolo_5F_lexique::kToken_implements),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_checknobank, 11, C_Lexique_piccolo_5F_lexique::kToken_checknobank),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_contextsave, 11, C_Lexique_piccolo_5F_lexique::kToken_contextsave),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_configuration, 13, C_Lexique_piccolo_5F_lexique::kToken_configuration)
} ;

int16_t C_Lexique_piccolo_5F_lexique::search_into_controlKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_controlKeyWordList, ktable_size_piccolo_5F_lexique_controlKeyWordList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'delimitorsList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_piccolo_5F_lexique_delimitorsList = 34 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_delimitorsList [ktable_size_piccolo_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__21_, 1, C_Lexique_piccolo_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__25_, 1, C_Lexique_piccolo_5F_lexique::kToken__25_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__26_, 1, C_Lexique_piccolo_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__28_, 1, C_Lexique_piccolo_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__29_, 1, C_Lexique_piccolo_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A_, 1, C_Lexique_piccolo_5F_lexique::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2B_, 1, C_Lexique_piccolo_5F_lexique::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2C_, 1, C_Lexique_piccolo_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2D_, 1, C_Lexique_piccolo_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2E_, 1, C_Lexique_piccolo_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2F_, 1, C_Lexique_piccolo_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3A_, 1, C_Lexique_piccolo_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3B_, 1, C_Lexique_piccolo_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C_, 1, C_Lexique_piccolo_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3D_, 1, C_Lexique_piccolo_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E_, 1, C_Lexique_piccolo_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3F_, 1, C_Lexique_piccolo_5F_lexique::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5B_, 1, C_Lexique_piccolo_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5D_, 1, C_Lexique_piccolo_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__5E_, 1, C_Lexique_piccolo_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7B_, 1, C_Lexique_piccolo_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7C_, 1, C_Lexique_piccolo_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7D_, 1, C_Lexique_piccolo_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__7E_, 1, C_Lexique_piccolo_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__21__3D_, 2, C_Lexique_piccolo_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A__2B_, 2, C_Lexique_piccolo_5F_lexique::kToken__2A__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2A__2D_, 2, C_Lexique_piccolo_5F_lexique::kToken__2A__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2B__2A_, 2, C_Lexique_piccolo_5F_lexique::kToken__2B__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C__3C_, 2, C_Lexique_piccolo_5F_lexique::kToken__3C__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3C__3D_, 2, C_Lexique_piccolo_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3D__3D_, 2, C_Lexique_piccolo_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E__3D_, 2, C_Lexique_piccolo_5F_lexique::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__3E__3E_, 2, C_Lexique_piccolo_5F_lexique::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique__2E__2E__2E_, 3, C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_)
} ;

int16_t C_Lexique_piccolo_5F_lexique::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_delimitorsList, ktable_size_piccolo_5F_lexique_delimitorsList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'instructionKeyWordList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_piccolo_5F_lexique_instructionKeyWordList = 68 ;

static const C_unicode_lexique_table_entry ktable_for_piccolo_5F_lexique_instructionKeyWordList [ktable_size_piccolo_5F_lexique_instructionKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bc, 2, C_Lexique_piccolo_5F_lexique::kToken_bc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bn, 2, C_Lexique_piccolo_5F_lexique::kToken_bn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bz, 2, C_Lexique_piccolo_5F_lexique::kToken_bz),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bcf, 3, C_Lexique_piccolo_5F_lexique::kToken_bcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnc, 3, C_Lexique_piccolo_5F_lexique::kToken_bnc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnn, 3, C_Lexique_piccolo_5F_lexique::kToken_bnn),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnz, 3, C_Lexique_piccolo_5F_lexique::kToken_bnz),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bov, 3, C_Lexique_piccolo_5F_lexique::kToken_bov),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bra, 3, C_Lexique_piccolo_5F_lexique::kToken_bra),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bsf, 3, C_Lexique_piccolo_5F_lexique::kToken_bsf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_btg, 3, C_Lexique_piccolo_5F_lexique::kToken_btg),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_daw, 3, C_Lexique_piccolo_5F_lexique::kToken_daw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_jsr, 3, C_Lexique_piccolo_5F_lexique::kToken_jsr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nop, 3, C_Lexique_piccolo_5F_lexique::kToken_nop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_pop, 3, C_Lexique_piccolo_5F_lexique::kToken_pop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlf, 3, C_Lexique_piccolo_5F_lexique::kToken_rlf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrf, 3, C_Lexique_piccolo_5F_lexique::kToken_rrf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_bnov, 4, C_Lexique_piccolo_5F_lexique::kToken_bnov),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_call, 4, C_Lexique_piccolo_5F_lexique::kToken_call),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrf, 4, C_Lexique_piccolo_5F_lexique::kToken_clrf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrw, 4, C_Lexique_piccolo_5F_lexique::kToken_clrw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_comf, 4, C_Lexique_piccolo_5F_lexique::kToken_comf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_decf, 4, C_Lexique_piccolo_5F_lexique::kToken_decf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_fnop, 4, C_Lexique_piccolo_5F_lexique::kToken_fnop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_goto, 4, C_Lexique_piccolo_5F_lexique::kToken_goto),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_incf, 4, C_Lexique_piccolo_5F_lexique::kToken_incf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_jump, 4, C_Lexique_piccolo_5F_lexique::kToken_jump),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_lfsr, 4, C_Lexique_piccolo_5F_lexique::kToken_lfsr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mnop, 4, C_Lexique_piccolo_5F_lexique::kToken_mnop),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movf, 4, C_Lexique_piccolo_5F_lexique::kToken_movf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_negf, 4, C_Lexique_piccolo_5F_lexique::kToken_negf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_push, 4, C_Lexique_piccolo_5F_lexique::kToken_push),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlcf, 4, C_Lexique_piccolo_5F_lexique::kToken_rlcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrcf, 4, C_Lexique_piccolo_5F_lexique::kToken_rrcf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_setf, 4, C_Lexique_piccolo_5F_lexique::kToken_setf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tris, 4, C_Lexique_piccolo_5F_lexique::kToken_tris),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addlw, 5, C_Lexique_piccolo_5F_lexique::kToken_addlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addwf, 5, C_Lexique_piccolo_5F_lexique::kToken_addwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_andlw, 5, C_Lexique_piccolo_5F_lexique::kToken_andlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_andwf, 5, C_Lexique_piccolo_5F_lexique::kToken_andwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_iorlw, 5, C_Lexique_piccolo_5F_lexique::kToken_iorlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_iorwf, 5, C_Lexique_piccolo_5F_lexique::kToken_iorwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movff, 5, C_Lexique_piccolo_5F_lexique::kToken_movff),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movlw, 5, C_Lexique_piccolo_5F_lexique::kToken_movlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_movwf, 5, C_Lexique_piccolo_5F_lexique::kToken_movwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mullw, 5, C_Lexique_piccolo_5F_lexique::kToken_mullw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_mulwf, 5, C_Lexique_piccolo_5F_lexique::kToken_mulwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rcall, 5, C_Lexique_piccolo_5F_lexique::kToken_rcall),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_reset, 5, C_Lexique_piccolo_5F_lexique::kToken_reset),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_retlw, 5, C_Lexique_piccolo_5F_lexique::kToken_retlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rlncf, 5, C_Lexique_piccolo_5F_lexique::kToken_rlncf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_rrncf, 5, C_Lexique_piccolo_5F_lexique::kToken_rrncf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_sleep, 5, C_Lexique_piccolo_5F_lexique::kToken_sleep),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_sublw, 5, C_Lexique_piccolo_5F_lexique::kToken_sublw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subwf, 5, C_Lexique_piccolo_5F_lexique::kToken_subwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_swapf, 5, C_Lexique_piccolo_5F_lexique::kToken_swapf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tblrd, 5, C_Lexique_piccolo_5F_lexique::kToken_tblrd),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_tblwt, 5, C_Lexique_piccolo_5F_lexique::kToken_tblwt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_xorlw, 5, C_Lexique_piccolo_5F_lexique::kToken_xorlw),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_xorwf, 5, C_Lexique_piccolo_5F_lexique::kToken_xorwf),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_addwfc, 6, C_Lexique_piccolo_5F_lexique::kToken_addwfc),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_clrwdt, 6, C_Lexique_piccolo_5F_lexique::kToken_clrwdt),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_nopbra, 6, C_Lexique_piccolo_5F_lexique::kToken_nopbra),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_option, 6, C_Lexique_piccolo_5F_lexique::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subfwb, 6, C_Lexique_piccolo_5F_lexique::kToken_subfwb),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_subwfb, 6, C_Lexique_piccolo_5F_lexique::kToken_subwfb),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ltblptr, 7, C_Lexique_piccolo_5F_lexique::kToken_ltblptr),
  C_unicode_lexique_table_entry (kUnicodeString_piccolo_5F_lexique_ldataptr, 8, C_Lexique_piccolo_5F_lexique::kToken_ldataptr)
} ;

int16_t C_Lexique_piccolo_5F_lexique::search_into_instructionKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_piccolo_5F_lexique_instructionKeyWordList, ktable_size_piccolo_5F_lexique_instructionKeyWordList) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                          getCurrentTokenString                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_piccolo_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_piccolo_5F_lexique * ptr = (const cTokenFor_piccolo_5F_lexique *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_label:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("label") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_char:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_char") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnicodeCharacter (ptr->mLexicalAttribute_charValue COMMA_HERE) ;
      break ;
    case kToken_literal_5F_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_commentMark:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("commentMark") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bank:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bank") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_banksave:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("banksave") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_banksel:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("banksel") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_baseline:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("baseline") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_block:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("block") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bootloader:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bootloader") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_byte:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("byte") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_case:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("case") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_checkbank:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("checkbank") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_checknobank:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("checknobank") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_checkpic:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("checkpic") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_computed:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("computed") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_configuration:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("configuration") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_const:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("const") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_contextsave:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("contextsave") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_data:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("data") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_do:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("do") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_end:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("end") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_else:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("else") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_elsif:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("elsif") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ensures:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("ensures") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_fast:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("fast") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_forever:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("forever") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_if:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("if") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_implements:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("implements") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_include:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("include") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_inline:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("inline") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_interrupt:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("interrupt") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_macro:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("macro") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_midrange:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("midrange") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nobank:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("nobank") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_noreturn:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("noreturn") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_page:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("page") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_pic_31__38_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("pic18") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_preserved:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("preserved") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ram:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("ram") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_requires:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("requires") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rom:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rom") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_routine:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("routine") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_switch:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("switch") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_unused:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("unused") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_uses:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("uses") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_w:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("w") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_while:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("while") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_addlw:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("addlw") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_addwf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("addwf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_addwfc:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("addwfc") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_andlw:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("andlw") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_andwf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("andwf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bc:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bc") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bcf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bcf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bn:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bn") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bnc:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bnc") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bnn:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bnn") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bov:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bov") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bnov:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bnov") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bnz:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bnz") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bsf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bsf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bra:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bra") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_btg:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("btg") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bz:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bz") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_call:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("call") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_clrf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("clrf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_clrw:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("clrw") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_clrwdt:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("clrwdt") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_comf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_daw:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("daw") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_decf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("decf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_incf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("incf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_iorlw:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("iorlw") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_iorwf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("iorwf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_fnop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("fnop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_goto:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("goto") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_jsr:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("jsr") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_jump:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("jump") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_lfsr:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("lfsr") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ldataptr:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("ldataptr") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ltblptr:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("ltblptr") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mnop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mnop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_movf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("movf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_movff:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("movff") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_movlw:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("movlw") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_movwf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("movwf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mullw:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mullw") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mulwf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mulwf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_negf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("negf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("nop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nopbra:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("nopbra") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_pop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("pop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_option:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("option") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_push:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("push") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rcall:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rcall") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_reset:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("reset") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_retlw:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("retlw") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rlcf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rlcf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rlf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rlf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rlncf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rlncf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rrcf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rrcf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rrf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rrf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rrncf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("rrncf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_setf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("setf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sleep:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sleep") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_subfwb:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("subfwb") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sublw:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sublw") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_subwf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("subwf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_subwfb:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("subwfb") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_swapf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("swapf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tblrd:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tblrd") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tblwt:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tblwt") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tris:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tris") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_xorlw:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("xorlw") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_xorwf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("xorwf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+*") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("==") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("(") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (")") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("/") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("~") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("%") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("...") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Template Delimiters                                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                           Template Replacements                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//            Terminal Symbols as end of script in template mark                                                       *
//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//---------------------------------------------------------------------------------------------------------------------*

bool C_Lexique_piccolo_5F_lexique::parseLexicalToken (void) {
  cTokenFor_piccolo_5F_lexique token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_charValue = TO_UNICODE (0) ;
    token.mLexicalAttribute_identifierString.setLengthToZero () ;
    token.mLexicalAttribute_tokenString.setLengthToZero () ;
    token.mLexicalAttribute_uint_33__32_value = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    try{
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_piccolo_5F_lexique__30_b, 2, true)) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('1'))) {
            ::scanner_routine_enterBinDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_binNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_piccolo_5F_lexique_decimalNumberTooLarge, gLexicalMessage_piccolo_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
                  mLoop = false ;
                }
              }while (mLoop) ;
              mLoop = true ;
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
                  mLoop = false ;
                }
              }while (mLoop) ;
              mLoop = true ;
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
            }else{
              lexicalError (gLexicalMessage_piccolo_5F_lexique_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE ('~'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
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
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          enterDroppedTerminal (kToken_commentMark) ;
        }else{
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          enterDroppedTerminal (kToken_comment) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
      }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
        token.mTokenCode = kToken_ ; // Empty string code
      }else{ // Unknown input character
        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      }
    }catch (const C_lexicalErrorException &) {
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }
  if ((UNICODE_VALUE (mCurrentChar) == '\0') && (token.mTemplateStringBeforeToken.length () > 0)) {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         E N T E R    T O K E N                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

void C_Lexique_piccolo_5F_lexique::enterToken (const cTokenFor_piccolo_5F_lexique & inToken) {
  cTokenFor_piccolo_5F_lexique * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_piccolo_5F_lexique ()) ;
  ptr->mTokenCode = inToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = inToken.mTemplateStringBeforeToken ;
  ptr->mLexicalAttribute_charValue = inToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_identifierString = inToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_tokenString = inToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = inToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//               A T T R I B U T E   A C C E S S                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

utf32 C_Lexique_piccolo_5F_lexique::attributeValue_charValue (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_charValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_piccolo_5F_lexique::attributeValue_identifierString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_identifierString ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_piccolo_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_tokenString ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_Lexique_piccolo_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar C_Lexique_piccolo_5F_lexique::synthetizedAttribute_charValue (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring C_Lexique_piccolo_5F_lexique::synthetizedAttribute_identifierString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring C_Lexique_piccolo_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint C_Lexique_piccolo_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_piccolo_5F_lexique * ptr = (cTokenFor_piccolo_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_piccolo_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         I N T R O S P E C T I O N                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist C_Lexique_piccolo_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("label") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_char") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bank") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("banksave") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("banksel") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("baseline") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bootloader") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("byte") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("checkbank") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("checknobank") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("checkpic") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("computed") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("configuration") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("const") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("contextsave") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("data") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("end") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("elsif") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("ensures") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("fast") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("forever") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("implements") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("inline") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("interrupt") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("macro") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("midrange") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("nobank") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("noreturn") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("page") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("pic18") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("preserved") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("ram") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("requires") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rom") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("routine") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("uses") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("w") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("addlw") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("addwf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("addwfc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("andlw") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("andwf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bcf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bn") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bnc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bnn") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bov") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bnov") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bnz") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bsf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bra") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("btg") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bz") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("call") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("clrf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("clrw") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("clrwdt") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("daw") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("decf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("incf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("iorlw") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("iorwf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("fnop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("goto") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("jsr") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("jump") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("lfsr") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("ldataptr") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("ltblptr") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mnop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("movf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("movff") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("movlw") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("movwf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mullw") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mulwf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("negf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("nop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("nopbra") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("pop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("push") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rcall") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("reset") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("retlw") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rlcf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rlf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rlncf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rrcf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rrf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rrncf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("setf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sleep") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("subfwb") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sublw") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("subwf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("subwfb") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("swapf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tblrd") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tblwt") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tris") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("xorlw") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("xorwf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void getKeywordLists_piccolo_5F_lexique (TC_UniqueArray <C_String> & ioList) {
  ioList.addObject ("piccolo_lexique:controlKeyWordList") ;
  ioList.addObject ("piccolo_lexique:delimitorsList") ;
  ioList.addObject ("piccolo_lexique:instructionKeyWordList") ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void getKeywordsForIdentifier_piccolo_5F_lexique (const C_String & inIdentifier,
                                                         bool & ioFound,
                                                         TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "piccolo_lexique:controlKeyWordList") {
    ioFound = true ;
    ioList.addObject ("w") ;
    ioList.addObject ("do") ;
    ioList.addObject ("if") ;
    ioList.addObject ("end") ;
    ioList.addObject ("ram") ;
    ioList.addObject ("rom") ;
    ioList.addObject ("bank") ;
    ioList.addObject ("byte") ;
    ioList.addObject ("case") ;
    ioList.addObject ("data") ;
    ioList.addObject ("else") ;
    ioList.addObject ("fast") ;
    ioList.addObject ("page") ;
    ioList.addObject ("uses") ;
    ioList.addObject ("block") ;
    ioList.addObject ("const") ;
    ioList.addObject ("elsif") ;
    ioList.addObject ("macro") ;
    ioList.addObject ("pic18") ;
    ioList.addObject ("while") ;
    ioList.addObject ("inline") ;
    ioList.addObject ("nobank") ;
    ioList.addObject ("switch") ;
    ioList.addObject ("unused") ;
    ioList.addObject ("banksel") ;
    ioList.addObject ("ensures") ;
    ioList.addObject ("forever") ;
    ioList.addObject ("include") ;
    ioList.addObject ("routine") ;
    ioList.addObject ("banksave") ;
    ioList.addObject ("baseline") ;
    ioList.addObject ("checkpic") ;
    ioList.addObject ("computed") ;
    ioList.addObject ("midrange") ;
    ioList.addObject ("noreturn") ;
    ioList.addObject ("requires") ;
    ioList.addObject ("checkbank") ;
    ioList.addObject ("interrupt") ;
    ioList.addObject ("preserved") ;
    ioList.addObject ("bootloader") ;
    ioList.addObject ("implements") ;
    ioList.addObject ("checknobank") ;
    ioList.addObject ("contextsave") ;
    ioList.addObject ("configuration") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "piccolo_lexique:delimitorsList") {
    ioFound = true ;
    ioList.addObject ("!") ;
    ioList.addObject ("%") ;
    ioList.addObject ("&") ;
    ioList.addObject ("(") ;
    ioList.addObject (")") ;
    ioList.addObject ("*") ;
    ioList.addObject ("+") ;
    ioList.addObject (",") ;
    ioList.addObject ("-") ;
    ioList.addObject (".") ;
    ioList.addObject ("/") ;
    ioList.addObject (":") ;
    ioList.addObject (";") ;
    ioList.addObject ("<") ;
    ioList.addObject ("=") ;
    ioList.addObject (">") ;
    ioList.addObject ("\?") ;
    ioList.addObject ("[") ;
    ioList.addObject ("]") ;
    ioList.addObject ("^") ;
    ioList.addObject ("{") ;
    ioList.addObject ("|") ;
    ioList.addObject ("}") ;
    ioList.addObject ("~") ;
    ioList.addObject ("!=") ;
    ioList.addObject ("*+") ;
    ioList.addObject ("*-") ;
    ioList.addObject ("+*") ;
    ioList.addObject ("<<") ;
    ioList.addObject ("<=") ;
    ioList.addObject ("==") ;
    ioList.addObject (">=") ;
    ioList.addObject (">>") ;
    ioList.addObject ("...") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "piccolo_lexique:instructionKeyWordList") {
    ioFound = true ;
    ioList.addObject ("bc") ;
    ioList.addObject ("bn") ;
    ioList.addObject ("bz") ;
    ioList.addObject ("bcf") ;
    ioList.addObject ("bnc") ;
    ioList.addObject ("bnn") ;
    ioList.addObject ("bnz") ;
    ioList.addObject ("bov") ;
    ioList.addObject ("bra") ;
    ioList.addObject ("bsf") ;
    ioList.addObject ("btg") ;
    ioList.addObject ("daw") ;
    ioList.addObject ("jsr") ;
    ioList.addObject ("nop") ;
    ioList.addObject ("pop") ;
    ioList.addObject ("rlf") ;
    ioList.addObject ("rrf") ;
    ioList.addObject ("bnov") ;
    ioList.addObject ("call") ;
    ioList.addObject ("clrf") ;
    ioList.addObject ("clrw") ;
    ioList.addObject ("comf") ;
    ioList.addObject ("decf") ;
    ioList.addObject ("fnop") ;
    ioList.addObject ("goto") ;
    ioList.addObject ("incf") ;
    ioList.addObject ("jump") ;
    ioList.addObject ("lfsr") ;
    ioList.addObject ("mnop") ;
    ioList.addObject ("movf") ;
    ioList.addObject ("negf") ;
    ioList.addObject ("push") ;
    ioList.addObject ("rlcf") ;
    ioList.addObject ("rrcf") ;
    ioList.addObject ("setf") ;
    ioList.addObject ("tris") ;
    ioList.addObject ("addlw") ;
    ioList.addObject ("addwf") ;
    ioList.addObject ("andlw") ;
    ioList.addObject ("andwf") ;
    ioList.addObject ("iorlw") ;
    ioList.addObject ("iorwf") ;
    ioList.addObject ("movff") ;
    ioList.addObject ("movlw") ;
    ioList.addObject ("movwf") ;
    ioList.addObject ("mullw") ;
    ioList.addObject ("mulwf") ;
    ioList.addObject ("rcall") ;
    ioList.addObject ("reset") ;
    ioList.addObject ("retlw") ;
    ioList.addObject ("rlncf") ;
    ioList.addObject ("rrncf") ;
    ioList.addObject ("sleep") ;
    ioList.addObject ("sublw") ;
    ioList.addObject ("subwf") ;
    ioList.addObject ("swapf") ;
    ioList.addObject ("tblrd") ;
    ioList.addObject ("tblwt") ;
    ioList.addObject ("xorlw") ;
    ioList.addObject ("xorwf") ;
    ioList.addObject ("addwfc") ;
    ioList.addObject ("clrwdt") ;
    ioList.addObject ("nopbra") ;
    ioList.addObject ("option") ;
    ioList.addObject ("subfwb") ;
    ioList.addObject ("subwfb") ;
    ioList.addObject ("ltblptr") ;
    ioList.addObject ("ldataptr") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static cLexiqueIntrospection lexiqueIntrospection_piccolo_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_piccolo_5F_lexique, getKeywordsForIdentifier_piccolo_5F_lexique) ;

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_Lexique_piccolo_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [154] = {0,
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

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_piccolo_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
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

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_bitSliceTable::cMapElement_bitSliceTable (const GALGAS_lstring & inKey,
                                                      const GALGAS_uint & in_mSliceIndex,
                                                      const GALGAS_uint & in_mSliceSize
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSliceIndex (in_mSliceIndex),
mAttribute_mSliceSize (in_mSliceSize) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_bitSliceTable::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSliceIndex.isValid () && mAttribute_mSliceSize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_bitSliceTable::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_bitSliceTable (mAttribute_lkey, mAttribute_mSliceIndex, mAttribute_mSliceSize COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_bitSliceTable::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSliceIndex" ":" ;
  mAttribute_mSliceIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSliceSize" ":" ;
  mAttribute_mSliceSize.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_bitSliceTable::compare (const cCollectionElement * inOperand) const {
  cMapElement_bitSliceTable * operand = (cMapElement_bitSliceTable *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSliceIndex.objectCompare (operand->mAttribute_mSliceIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSliceSize.objectCompare (operand->mAttribute_mSliceSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable::GALGAS_bitSliceTable (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable::GALGAS_bitSliceTable (const GALGAS_bitSliceTable & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable & GALGAS_bitSliceTable::operator = (const GALGAS_bitSliceTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable GALGAS_bitSliceTable::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_bitSliceTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable GALGAS_bitSliceTable::constructor_mapWithMapToOverride (const GALGAS_bitSliceTable & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_bitSliceTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable GALGAS_bitSliceTable::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_bitSliceTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitSliceTable::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_uint & inArgument0,
                                                const GALGAS_uint & inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_bitSliceTable * p = NULL ;
  macroMyNew (p, cMapElement_bitSliceTable (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@bitSliceTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitSliceTable::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_uint inArgument0,
                                             GALGAS_uint inArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_bitSliceTable * p = NULL ;
  macroMyNew (p, cMapElement_bitSliceTable (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' slice is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_bitSliceTable_searchKey = "the '%K' slice is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitSliceTable::method_searchKey (GALGAS_lstring inKey,
                                             GALGAS_uint & outArgument0,
                                             GALGAS_uint & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_bitSliceTable_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    outArgument0 = p->mAttribute_mSliceIndex ;
    outArgument1 = p->mAttribute_mSliceSize ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bitSliceTable::getter_mSliceIndexForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    result = p->mAttribute_mSliceIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bitSliceTable::getter_mSliceSizeForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    result = p->mAttribute_mSliceSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitSliceTable::setter_setMSliceIndexForKey (GALGAS_uint inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_bitSliceTable * p = (cMapElement_bitSliceTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    p->mAttribute_mSliceIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitSliceTable::setter_setMSliceSizeForKey (GALGAS_uint inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_bitSliceTable * p = (cMapElement_bitSliceTable *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bitSliceTable) ;
    p->mAttribute_mSliceSize = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_bitSliceTable * GALGAS_bitSliceTable::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_bitSliceTable * result = (cMapElement_bitSliceTable *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_bitSliceTable) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bitSliceTable::cEnumerator_bitSliceTable (const GALGAS_bitSliceTable & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element cEnumerator_bitSliceTable::current (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return GALGAS_bitSliceTable_2D_element (p->mAttribute_lkey, p->mAttribute_mSliceIndex, p->mAttribute_mSliceSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_bitSliceTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_bitSliceTable::current_mSliceIndex (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return p->mAttribute_mSliceIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_bitSliceTable::current_mSliceSize (LOCATION_ARGS) const {
  const cMapElement_bitSliceTable * p = (const cMapElement_bitSliceTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bitSliceTable) ;
  return p->mAttribute_mSliceSize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @bitSliceTable type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitSliceTable ("bitSliceTable",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bitSliceTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bitSliceTable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitSliceTable (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable GALGAS_bitSliceTable::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bitSliceTable result ;
  const GALGAS_bitSliceTable * p = (const GALGAS_bitSliceTable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bitSliceTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitSliceTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@declarationInRamList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_declarationInRamList : public cCollectionElement {
  public : GALGAS_declarationInRamList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_declarationInRamList (const GALGAS_declarationInRam & in_mDeclarationInRAM
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_declarationInRamList::cCollectionElement_declarationInRamList (const GALGAS_declarationInRam & in_mDeclarationInRAM
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclarationInRAM) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_declarationInRamList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_declarationInRamList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_declarationInRamList (mObject.mAttribute_mDeclarationInRAM COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_declarationInRamList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclarationInRAM" ":" ;
  mObject.mAttribute_mDeclarationInRAM.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_declarationInRamList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationInRamList * operand = (cCollectionElement_declarationInRamList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationInRamList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList::GALGAS_declarationInRamList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList::GALGAS_declarationInRamList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList GALGAS_declarationInRamList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_declarationInRamList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList GALGAS_declarationInRamList::constructor_listWithValue (const GALGAS_declarationInRam & inOperand0
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declarationInRamList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_declarationInRamList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_declarationInRam & in_mDeclarationInRAM
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationInRamList * p = NULL ;
  macroMyNew (p, cCollectionElement_declarationInRamList (in_mDeclarationInRAM COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList::addAssign_operation (const GALGAS_declarationInRam & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationInRamList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList::setter_insertAtIndex (const GALGAS_declarationInRam inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationInRamList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList::setter_removeAtIndex (GALGAS_declarationInRam & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
      outOperand0 = p->mObject.mAttribute_mDeclarationInRAM ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList::setter_popFirst (GALGAS_declarationInRam & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    outOperand0 = p->mObject.mAttribute_mDeclarationInRAM ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList::setter_popLast (GALGAS_declarationInRam & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    outOperand0 = p->mObject.mAttribute_mDeclarationInRAM ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList::method_first (GALGAS_declarationInRam & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    outOperand0 = p->mObject.mAttribute_mDeclarationInRAM ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList::method_last (GALGAS_declarationInRam & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    outOperand0 = p->mObject.mAttribute_mDeclarationInRAM ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList GALGAS_declarationInRamList::add_operation (const GALGAS_declarationInRamList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationInRamList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList GALGAS_declarationInRamList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_declarationInRamList result = GALGAS_declarationInRamList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList GALGAS_declarationInRamList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_declarationInRamList result = GALGAS_declarationInRamList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList GALGAS_declarationInRamList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_declarationInRamList result = GALGAS_declarationInRamList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList::plusAssign_operation (const GALGAS_declarationInRamList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRam GALGAS_declarationInRamList::getter_mDeclarationInRAMAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationInRamList * p = (cCollectionElement_declarationInRamList *) attributes.ptr () ;
  GALGAS_declarationInRam result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
    result = p->mObject.mAttribute_mDeclarationInRAM ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_declarationInRamList::cEnumerator_declarationInRamList (const GALGAS_declarationInRamList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList_2D_element cEnumerator_declarationInRamList::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationInRamList * p = (const cCollectionElement_declarationInRamList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRam cEnumerator_declarationInRamList::current_mDeclarationInRAM (LOCATION_ARGS) const {
  const cCollectionElement_declarationInRamList * p = (const cCollectionElement_declarationInRamList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationInRamList) ;
  return p->mObject.mAttribute_mDeclarationInRAM ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @declarationInRamList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationInRamList ("declarationInRamList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declarationInRamList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRamList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declarationInRamList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationInRamList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList GALGAS_declarationInRamList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_declarationInRamList result ;
  const GALGAS_declarationInRamList * p = (const GALGAS_declarationInRamList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationInRamList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRamList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@ramDefinitionList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_ramDefinitionList : public cCollectionElement {
  public : GALGAS_ramDefinitionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_ramDefinitionList (const GALGAS_lstring & in_mBankName,
                                                 const GALGAS_declarationInRamList & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_ramDefinitionList::cCollectionElement_ramDefinitionList (const GALGAS_lstring & in_mBankName,
                                                                            const GALGAS_declarationInRamList & in_mDeclaration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBankName, in_mDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_ramDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_ramDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ramDefinitionList (mObject.mAttribute_mBankName, mObject.mAttribute_mDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_ramDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBankName" ":" ;
  mObject.mAttribute_mBankName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mAttribute_mDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_ramDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ramDefinitionList * operand = (cCollectionElement_ramDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ramDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList::GALGAS_ramDefinitionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList::GALGAS_ramDefinitionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_ramDefinitionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_declarationInRamList & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ramDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_ramDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mBankName,
                                                          const GALGAS_declarationInRamList & in_mDeclaration
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_ramDefinitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_ramDefinitionList (in_mBankName,
                                                       in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_declarationInRamList & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ramDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_declarationInRamList inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ramDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_declarationInRamList & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
      outOperand0 = p->mObject.mAttribute_mBankName ;
      outOperand1 = p->mObject.mAttribute_mDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_declarationInRamList & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mBankName ;
    outOperand1 = p->mObject.mAttribute_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_declarationInRamList & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mBankName ;
    outOperand1 = p->mObject.mAttribute_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_declarationInRamList & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mBankName ;
    outOperand1 = p->mObject.mAttribute_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_declarationInRamList & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mBankName ;
    outOperand1 = p->mObject.mAttribute_mDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::add_operation (const GALGAS_ramDefinitionList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ramDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_ramDefinitionList result = GALGAS_ramDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_ramDefinitionList result = GALGAS_ramDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_ramDefinitionList result = GALGAS_ramDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList::plusAssign_operation (const GALGAS_ramDefinitionList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ramDefinitionList::getter_mBankNameAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    result = p->mObject.mAttribute_mBankName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList GALGAS_ramDefinitionList::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ramDefinitionList * p = (cCollectionElement_ramDefinitionList *) attributes.ptr () ;
  GALGAS_declarationInRamList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
    result = p->mObject.mAttribute_mDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_ramDefinitionList::cEnumerator_ramDefinitionList (const GALGAS_ramDefinitionList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element cEnumerator_ramDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_ramDefinitionList::current_mBankName (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject.mAttribute_mBankName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList cEnumerator_ramDefinitionList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_ramDefinitionList * p = (const cCollectionElement_ramDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ramDefinitionList) ;
  return p->mObject.mAttribute_mDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @ramDefinitionList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ramDefinitionList ("ramDefinitionList",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ramDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ramDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramDefinitionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList GALGAS_ramDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ramDefinitionList result ;
  const GALGAS_ramDefinitionList * p = (const GALGAS_ramDefinitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ramDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@configSettingList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_configSettingList : public cCollectionElement {
  public : GALGAS_configSettingList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_configSettingList (const GALGAS_lstring & in_mSettingName,
                                                 const GALGAS_lstring & in_mSettingValue
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_configSettingList::cCollectionElement_configSettingList (const GALGAS_lstring & in_mSettingName,
                                                                            const GALGAS_lstring & in_mSettingValue
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSettingName, in_mSettingValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_configSettingList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_configSettingList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_configSettingList (mObject.mAttribute_mSettingName, mObject.mAttribute_mSettingValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_configSettingList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSettingName" ":" ;
  mObject.mAttribute_mSettingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSettingValue" ":" ;
  mObject.mAttribute_mSettingValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_configSettingList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_configSettingList * operand = (cCollectionElement_configSettingList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_configSettingList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList::GALGAS_configSettingList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList::GALGAS_configSettingList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList GALGAS_configSettingList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_configSettingList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList GALGAS_configSettingList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_configSettingList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_configSettingList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mSettingName,
                                                          const GALGAS_lstring & in_mSettingValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_configSettingList * p = NULL ;
  macroMyNew (p, cCollectionElement_configSettingList (in_mSettingName,
                                                       in_mSettingValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_configSettingList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_configSettingList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_configSettingList) ;
      outOperand0 = p->mObject.mAttribute_mSettingName ;
      outOperand1 = p->mObject.mAttribute_mSettingValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    outOperand0 = p->mObject.mAttribute_mSettingName ;
    outOperand1 = p->mObject.mAttribute_mSettingValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    outOperand0 = p->mObject.mAttribute_mSettingName ;
    outOperand1 = p->mObject.mAttribute_mSettingValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    outOperand0 = p->mObject.mAttribute_mSettingName ;
    outOperand1 = p->mObject.mAttribute_mSettingValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    outOperand0 = p->mObject.mAttribute_mSettingName ;
    outOperand1 = p->mObject.mAttribute_mSettingValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList GALGAS_configSettingList::add_operation (const GALGAS_configSettingList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_configSettingList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList GALGAS_configSettingList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_configSettingList result = GALGAS_configSettingList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList GALGAS_configSettingList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_configSettingList result = GALGAS_configSettingList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList GALGAS_configSettingList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_configSettingList result = GALGAS_configSettingList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList::plusAssign_operation (const GALGAS_configSettingList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configSettingList::getter_mSettingNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    result = p->mObject.mAttribute_mSettingName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configSettingList::getter_mSettingValueAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configSettingList * p = (cCollectionElement_configSettingList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_configSettingList) ;
    result = p->mObject.mAttribute_mSettingValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_configSettingList::cEnumerator_configSettingList (const GALGAS_configSettingList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element cEnumerator_configSettingList::current (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_configSettingList::current_mSettingName (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject.mAttribute_mSettingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_configSettingList::current_mSettingValue (LOCATION_ARGS) const {
  const cCollectionElement_configSettingList * p = (const cCollectionElement_configSettingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configSettingList) ;
  return p->mObject.mAttribute_mSettingValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @configSettingList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configSettingList ("configSettingList",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configSettingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configSettingList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configSettingList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList GALGAS_configSettingList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_configSettingList result ;
  const GALGAS_configSettingList * p = (const GALGAS_configSettingList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configSettingList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configSettingList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@configDefinitionList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_configDefinitionList : public cCollectionElement {
  public : GALGAS_configDefinitionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_configDefinitionList (const GALGAS_location & in_mDefinitionLocation,
                                                    const GALGAS_configSettingList & in_mSettingList
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_configDefinitionList::cCollectionElement_configDefinitionList (const GALGAS_location & in_mDefinitionLocation,
                                                                                  const GALGAS_configSettingList & in_mSettingList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDefinitionLocation, in_mSettingList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_configDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_configDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_configDefinitionList (mObject.mAttribute_mDefinitionLocation, mObject.mAttribute_mSettingList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_configDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefinitionLocation" ":" ;
  mObject.mAttribute_mDefinitionLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSettingList" ":" ;
  mObject.mAttribute_mSettingList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_configDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_configDefinitionList * operand = (cCollectionElement_configDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_configDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList::GALGAS_configDefinitionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList::GALGAS_configDefinitionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList GALGAS_configDefinitionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_configDefinitionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList GALGAS_configDefinitionList::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                                    const GALGAS_configSettingList & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_configDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_configDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_location & in_mDefinitionLocation,
                                                             const GALGAS_configSettingList & in_mSettingList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_configDefinitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_configDefinitionList (in_mDefinitionLocation,
                                                          in_mSettingList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList::addAssign_operation (const GALGAS_location & inOperand0,
                                                       const GALGAS_configSettingList & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_configDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                        const GALGAS_configSettingList inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_configDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                        GALGAS_configSettingList & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
      outOperand0 = p->mObject.mAttribute_mDefinitionLocation ;
      outOperand1 = p->mObject.mAttribute_mSettingList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList::setter_popFirst (GALGAS_location & outOperand0,
                                                   GALGAS_configSettingList & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mDefinitionLocation ;
    outOperand1 = p->mObject.mAttribute_mSettingList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList::setter_popLast (GALGAS_location & outOperand0,
                                                  GALGAS_configSettingList & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mDefinitionLocation ;
    outOperand1 = p->mObject.mAttribute_mSettingList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList::method_first (GALGAS_location & outOperand0,
                                                GALGAS_configSettingList & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mDefinitionLocation ;
    outOperand1 = p->mObject.mAttribute_mSettingList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList::method_last (GALGAS_location & outOperand0,
                                               GALGAS_configSettingList & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mDefinitionLocation ;
    outOperand1 = p->mObject.mAttribute_mSettingList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList GALGAS_configDefinitionList::add_operation (const GALGAS_configDefinitionList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_configDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList GALGAS_configDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_configDefinitionList result = GALGAS_configDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList GALGAS_configDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_configDefinitionList result = GALGAS_configDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList GALGAS_configDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_configDefinitionList result = GALGAS_configDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList::plusAssign_operation (const GALGAS_configDefinitionList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_configDefinitionList::getter_mDefinitionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    result = p->mObject.mAttribute_mDefinitionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList GALGAS_configDefinitionList::getter_mSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_configDefinitionList * p = (cCollectionElement_configDefinitionList *) attributes.ptr () ;
  GALGAS_configSettingList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
    result = p->mObject.mAttribute_mSettingList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_configDefinitionList::cEnumerator_configDefinitionList (const GALGAS_configDefinitionList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList_2D_element cEnumerator_configDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_configDefinitionList::current_mDefinitionLocation (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject.mAttribute_mDefinitionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList cEnumerator_configDefinitionList::current_mSettingList (LOCATION_ARGS) const {
  const cCollectionElement_configDefinitionList * p = (const cCollectionElement_configDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_configDefinitionList) ;
  return p->mObject.mAttribute_mSettingList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @configDefinitionList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configDefinitionList ("configDefinitionList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configDefinitionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList GALGAS_configDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configDefinitionList result ;
  const GALGAS_configDefinitionList * p = (const GALGAS_configDefinitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@immediatExpressionList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_immediatExpressionList : public cCollectionElement {
  public : GALGAS_immediatExpressionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_immediatExpressionList (const GALGAS_immediatExpression & in_mExpression,
                                                      const GALGAS_location & in_mErrorLocation
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_immediatExpressionList::cCollectionElement_immediatExpressionList (const GALGAS_immediatExpression & in_mExpression,
                                                                                      const GALGAS_location & in_mErrorLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mErrorLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_immediatExpressionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_immediatExpressionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_immediatExpressionList (mObject.mAttribute_mExpression, mObject.mAttribute_mErrorLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_immediatExpressionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorLocation" ":" ;
  mObject.mAttribute_mErrorLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_immediatExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_immediatExpressionList * operand = (cCollectionElement_immediatExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_immediatExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList::GALGAS_immediatExpressionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList::GALGAS_immediatExpressionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_immediatExpressionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::constructor_listWithValue (const GALGAS_immediatExpression & inOperand0,
                                                                                        const GALGAS_location & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_immediatExpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_immediatExpressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_immediatExpression & in_mExpression,
                                                               const GALGAS_location & in_mErrorLocation
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatExpressionList * p = NULL ;
  macroMyNew (p, cCollectionElement_immediatExpressionList (in_mExpression,
                                                            in_mErrorLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList::addAssign_operation (const GALGAS_immediatExpression & inOperand0,
                                                         const GALGAS_location & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_immediatExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList::setter_insertAtIndex (const GALGAS_immediatExpression inOperand0,
                                                          const GALGAS_location inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_immediatExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList::setter_removeAtIndex (GALGAS_immediatExpression & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
      outOperand0 = p->mObject.mAttribute_mExpression ;
      outOperand1 = p->mObject.mAttribute_mErrorLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList::setter_popFirst (GALGAS_immediatExpression & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mErrorLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList::setter_popLast (GALGAS_immediatExpression & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mErrorLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList::method_first (GALGAS_immediatExpression & outOperand0,
                                                  GALGAS_location & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mErrorLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList::method_last (GALGAS_immediatExpression & outOperand0,
                                                 GALGAS_location & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
    outOperand1 = p->mObject.mAttribute_mErrorLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::add_operation (const GALGAS_immediatExpressionList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result = GALGAS_immediatExpressionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result = GALGAS_immediatExpressionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result = GALGAS_immediatExpressionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList::plusAssign_operation (const GALGAS_immediatExpressionList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatExpressionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  GALGAS_immediatExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    result = p->mObject.mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_immediatExpressionList::getter_mErrorLocationAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatExpressionList * p = (cCollectionElement_immediatExpressionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
    result = p->mObject.mAttribute_mErrorLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_immediatExpressionList::cEnumerator_immediatExpressionList (const GALGAS_immediatExpressionList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList_2D_element cEnumerator_immediatExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cEnumerator_immediatExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject.mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_immediatExpressionList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_immediatExpressionList * p = (const cCollectionElement_immediatExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatExpressionList) ;
  return p->mObject.mAttribute_mErrorLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @immediatExpressionList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatExpressionList ("immediatExpressionList",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatExpressionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_immediatExpressionList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_immediatExpressionList result ;
  const GALGAS_immediatExpressionList * p = (const GALGAS_immediatExpressionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@immediatSliceExpressionList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_immediatSliceExpressionList : public cCollectionElement {
  public : GALGAS_immediatSliceExpressionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_immediatSliceExpressionList (const GALGAS_lstring & in_mSliceName,
                                                           const GALGAS_immediatExpression & in_mExpression
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_immediatSliceExpressionList::cCollectionElement_immediatSliceExpressionList (const GALGAS_lstring & in_mSliceName,
                                                                                                const GALGAS_immediatExpression & in_mExpression
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSliceName, in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_immediatSliceExpressionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_immediatSliceExpressionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_immediatSliceExpressionList (mObject.mAttribute_mSliceName, mObject.mAttribute_mExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_immediatSliceExpressionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSliceName" ":" ;
  mObject.mAttribute_mSliceName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_immediatSliceExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_immediatSliceExpressionList * operand = (cCollectionElement_immediatSliceExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_immediatSliceExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList::GALGAS_immediatSliceExpressionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList::GALGAS_immediatSliceExpressionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_immediatExpression & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_immediatSliceExpressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mSliceName,
                                                                    const GALGAS_immediatExpression & in_mExpression
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_immediatSliceExpressionList * p = NULL ;
  macroMyNew (p, cCollectionElement_immediatSliceExpressionList (in_mSliceName,
                                                                 in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_immediatExpression & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_immediatSliceExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_immediatExpression inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_immediatSliceExpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_immediatExpression & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
      outOperand0 = p->mObject.mAttribute_mSliceName ;
      outOperand1 = p->mObject.mAttribute_mExpression ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_immediatExpression & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mSliceName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_immediatExpression & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mSliceName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_immediatExpression & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mSliceName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_immediatExpression & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    outOperand0 = p->mObject.mAttribute_mSliceName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::add_operation (const GALGAS_immediatSliceExpressionList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatSliceExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_immediatSliceExpressionList result = GALGAS_immediatSliceExpressionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_immediatSliceExpressionList result = GALGAS_immediatSliceExpressionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_immediatSliceExpressionList result = GALGAS_immediatSliceExpressionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList::plusAssign_operation (const GALGAS_immediatSliceExpressionList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_immediatSliceExpressionList::getter_mSliceNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    result = p->mObject.mAttribute_mSliceName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatSliceExpressionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_immediatSliceExpressionList * p = (cCollectionElement_immediatSliceExpressionList *) attributes.ptr () ;
  GALGAS_immediatExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
    result = p->mObject.mAttribute_mExpression ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_immediatSliceExpressionList::cEnumerator_immediatSliceExpressionList (const GALGAS_immediatSliceExpressionList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element cEnumerator_immediatSliceExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_immediatSliceExpressionList::current_mSliceName (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject.mAttribute_mSliceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cEnumerator_immediatSliceExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_immediatSliceExpressionList * p = (const cCollectionElement_immediatSliceExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_immediatSliceExpressionList) ;
  return p->mObject.mAttribute_mExpression ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @immediatSliceExpressionList type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatSliceExpressionList ("immediatSliceExpressionList",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatSliceExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSliceExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatSliceExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSliceExpressionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList GALGAS_immediatSliceExpressionList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList result ;
  const GALGAS_immediatSliceExpressionList * p = (const GALGAS_immediatSliceExpressionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatSliceExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSliceExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@constantDefinitionList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_constantDefinitionList : public cCollectionElement {
  public : GALGAS_constantDefinitionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_constantDefinitionList (const GALGAS_lstring & in_mConstantName,
                                                      const GALGAS_immediatExpression & in_mExpression
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_constantDefinitionList::cCollectionElement_constantDefinitionList (const GALGAS_lstring & in_mConstantName,
                                                                                      const GALGAS_immediatExpression & in_mExpression
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_constantDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_constantDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_constantDefinitionList (mObject.mAttribute_mConstantName, mObject.mAttribute_mExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_constantDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantName" ":" ;
  mObject.mAttribute_mConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_constantDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_constantDefinitionList * operand = (cCollectionElement_constantDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_constantDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList::GALGAS_constantDefinitionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList::GALGAS_constantDefinitionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_constantDefinitionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_immediatExpression & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constantDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_constantDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mConstantName,
                                                               const GALGAS_immediatExpression & in_mExpression
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_constantDefinitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_constantDefinitionList (in_mConstantName,
                                                            in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_immediatExpression & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_constantDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_immediatExpression inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_constantDefinitionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_immediatExpression & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
      outOperand0 = p->mObject.mAttribute_mConstantName ;
      outOperand1 = p->mObject.mAttribute_mExpression ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_immediatExpression & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_immediatExpression & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_immediatExpression & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_immediatExpression & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::add_operation (const GALGAS_constantDefinitionList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_constantDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_constantDefinitionList result = GALGAS_constantDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_constantDefinitionList result = GALGAS_constantDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_constantDefinitionList result = GALGAS_constantDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList::plusAssign_operation (const GALGAS_constantDefinitionList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantDefinitionList::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    result = p->mObject.mAttribute_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_constantDefinitionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constantDefinitionList * p = (cCollectionElement_constantDefinitionList *) attributes.ptr () ;
  GALGAS_immediatExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
    result = p->mObject.mAttribute_mExpression ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constantDefinitionList::cEnumerator_constantDefinitionList (const GALGAS_constantDefinitionList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element cEnumerator_constantDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constantDefinitionList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject.mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cEnumerator_constantDefinitionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_constantDefinitionList * p = (const cCollectionElement_constantDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constantDefinitionList) ;
  return p->mObject.mAttribute_mExpression ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @constantDefinitionList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantDefinitionList ("constantDefinitionList",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantDefinitionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList GALGAS_constantDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constantDefinitionList result ;
  const GALGAS_constantDefinitionList * p = (const GALGAS_constantDefinitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_actualConfigurationMap::cMapElement_actualConfigurationMap (const GALGAS_lstring & inKey,
                                                                        const GALGAS_uint & in_mRegisterAddress,
                                                                        const GALGAS_uint & in_mRegisterValue
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mRegisterAddress (in_mRegisterAddress),
mAttribute_mRegisterValue (in_mRegisterValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_actualConfigurationMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterAddress.isValid () && mAttribute_mRegisterValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_actualConfigurationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_actualConfigurationMap (mAttribute_lkey, mAttribute_mRegisterAddress, mAttribute_mRegisterValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_actualConfigurationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterAddress" ":" ;
  mAttribute_mRegisterAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterValue" ":" ;
  mAttribute_mRegisterValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_actualConfigurationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_actualConfigurationMap * operand = (cMapElement_actualConfigurationMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterAddress.objectCompare (operand->mAttribute_mRegisterAddress) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterValue.objectCompare (operand->mAttribute_mRegisterValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap::GALGAS_actualConfigurationMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap::GALGAS_actualConfigurationMap (const GALGAS_actualConfigurationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap & GALGAS_actualConfigurationMap::operator = (const GALGAS_actualConfigurationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap GALGAS_actualConfigurationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_actualConfigurationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap GALGAS_actualConfigurationMap::constructor_mapWithMapToOverride (const GALGAS_actualConfigurationMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap GALGAS_actualConfigurationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_actualConfigurationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualConfigurationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         const GALGAS_uint & inArgument0,
                                                         const GALGAS_uint & inArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_actualConfigurationMap * p = NULL ;
  macroMyNew (p, cMapElement_actualConfigurationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@actualConfigurationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualConfigurationMap::setter_insertKey (GALGAS_lstring inKey,
                                                      GALGAS_uint inArgument0,
                                                      GALGAS_uint inArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_actualConfigurationMap * p = NULL ;
  macroMyNew (p, cMapElement_actualConfigurationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_actualConfigurationMap_searchKey = "the '%K' configuration register is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualConfigurationMap::method_searchKey (GALGAS_lstring inKey,
                                                      GALGAS_uint & outArgument0,
                                                      GALGAS_uint & outArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_actualConfigurationMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    outArgument0 = p->mAttribute_mRegisterAddress ;
    outArgument1 = p->mAttribute_mRegisterValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_actualConfigurationMap::getter_mRegisterAddressForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    result = p->mAttribute_mRegisterAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_actualConfigurationMap::getter_mRegisterValueForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    result = p->mAttribute_mRegisterValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualConfigurationMap::setter_setMRegisterAddressForKey (GALGAS_uint inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_actualConfigurationMap * p = (cMapElement_actualConfigurationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    p->mAttribute_mRegisterAddress = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualConfigurationMap::setter_setMRegisterValueForKey (GALGAS_uint inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_actualConfigurationMap * p = (cMapElement_actualConfigurationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
    p->mAttribute_mRegisterValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_actualConfigurationMap * GALGAS_actualConfigurationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_actualConfigurationMap * result = (cMapElement_actualConfigurationMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_actualConfigurationMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_actualConfigurationMap::cEnumerator_actualConfigurationMap (const GALGAS_actualConfigurationMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element cEnumerator_actualConfigurationMap::current (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return GALGAS_actualConfigurationMap_2D_element (p->mAttribute_lkey, p->mAttribute_mRegisterAddress, p->mAttribute_mRegisterValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_actualConfigurationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_actualConfigurationMap::current_mRegisterAddress (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return p->mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_actualConfigurationMap::current_mRegisterValue (LOCATION_ARGS) const {
  const cMapElement_actualConfigurationMap * p = (const cMapElement_actualConfigurationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actualConfigurationMap) ;
  return p->mAttribute_mRegisterValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @actualConfigurationMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualConfigurationMap ("actualConfigurationMap",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualConfigurationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualConfigurationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualConfigurationMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap GALGAS_actualConfigurationMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap result ;
  const GALGAS_actualConfigurationMap * p = (const GALGAS_actualConfigurationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualConfigurationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualConfigurationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_labelMap::cMapElement_labelMap (const GALGAS_lstring & inKey
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_labelMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_labelMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_labelMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_labelMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_labelMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_labelMap * operand = (cMapElement_labelMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap::GALGAS_labelMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap::GALGAS_labelMap (const GALGAS_labelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap & GALGAS_labelMap::operator = (const GALGAS_labelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_labelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::constructor_mapWithMapToOverride (const GALGAS_labelMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_labelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_labelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * p = NULL ;
  macroMyNew (p, cMapElement_labelMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@labelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap::setter_insertKey (GALGAS_lstring inKey,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * p = NULL ;
  macroMyNew (p, cMapElement_labelMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already in use" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_labelMap * GALGAS_labelMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * result = (cMapElement_labelMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_labelMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_labelMap::cEnumerator_labelMap (const GALGAS_labelMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element cEnumerator_labelMap::current (LOCATION_ARGS) const {
  const cMapElement_labelMap * p = (const cMapElement_labelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_labelMap) ;
  return GALGAS_labelMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_labelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @labelMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_labelMap ("labelMap",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_labelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_labelMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_labelMap result ;
  const GALGAS_labelMap * p = (const GALGAS_labelMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_labelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constantMap::cMapElement_constantMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_sint_36__34_ & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_constantMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_constantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constantMap (mAttribute_lkey, mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_constantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_constantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantMap * operand = (cMapElement_constantMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (operand->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap::GALGAS_constantMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap::GALGAS_constantMap (const GALGAS_constantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap & GALGAS_constantMap::operator = (const GALGAS_constantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap GALGAS_constantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap GALGAS_constantMap::constructor_mapWithMapToOverride (const GALGAS_constantMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_constantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap GALGAS_constantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_constantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_sint_36__34_ & inArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = NULL ;
  macroMyNew (p, cMapElement_constantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_sint_36__34_ inArgument0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = NULL ;
  macroMyNew (p, cMapElement_constantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_constantMap_searchKey = "the '%K' constant is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_sint_36__34_ & outArgument0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_constantMap_searchKey
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constantMap) ;
    outArgument0 = p->mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_constantMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GALGAS_sint_36__34_ result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap::setter_setMValueForKey (GALGAS_sint_36__34_ inAttributeValue,
                                                 GALGAS_string inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constantMap * p = (cMapElement_constantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    p->mAttribute_mValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constantMap * GALGAS_constantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * result = (cMapElement_constantMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constantMap::cEnumerator_constantMap (const GALGAS_constantMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element cEnumerator_constantMap::current (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return GALGAS_constantMap_2D_element (p->mAttribute_lkey, p->mAttribute_mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ cEnumerator_constantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @constantMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantMap ("constantMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap GALGAS_constantMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constantMap result ;
  const GALGAS_constantMap * p = (const GALGAS_constantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMap::cMapElement_routineMap (const GALGAS_lstring & inKey,
                                                const GALGAS_bool & in_mIsNoReturn,
                                                const GALGAS_uint & in_mRequiredBank,
                                                const GALGAS_uint & in_mReturnedBank,
                                                const GALGAS_bool & in_mPreservesBank
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIsNoReturn (in_mIsNoReturn),
mAttribute_mRequiredBank (in_mRequiredBank),
mAttribute_mReturnedBank (in_mReturnedBank),
mAttribute_mPreservesBank (in_mPreservesBank) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_routineMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_routineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineMap (mAttribute_lkey, mAttribute_mIsNoReturn, mAttribute_mRequiredBank, mAttribute_mReturnedBank, mAttribute_mPreservesBank COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_routineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsNoReturn" ":" ;
  mAttribute_mIsNoReturn.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRequiredBank" ":" ;
  mAttribute_mRequiredBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedBank" ":" ;
  mAttribute_mReturnedBank.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPreservesBank" ":" ;
  mAttribute_mPreservesBank.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_routineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineMap * operand = (cMapElement_routineMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsNoReturn.objectCompare (operand->mAttribute_mIsNoReturn) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRequiredBank.objectCompare (operand->mAttribute_mRequiredBank) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnedBank.objectCompare (operand->mAttribute_mReturnedBank) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPreservesBank.objectCompare (operand->mAttribute_mPreservesBank) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap::GALGAS_routineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap::GALGAS_routineMap (const GALGAS_routineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap & GALGAS_routineMap::operator = (const GALGAS_routineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::constructor_mapWithMapToOverride (const GALGAS_routineMap & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_routineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_bool & inArgument0,
                                             const GALGAS_uint & inArgument1,
                                             const GALGAS_uint & inArgument2,
                                             const GALGAS_bool & inArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * p = NULL ;
  macroMyNew (p, cMapElement_routineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::setter_insertKey (GALGAS_lstring inKey,
                                          GALGAS_bool inArgument0,
                                          GALGAS_uint inArgument1,
                                          GALGAS_uint inArgument2,
                                          GALGAS_bool inArgument3,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * p = NULL ;
  macroMyNew (p, cMapElement_routineMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_routineMap_searchKey = "the '%K' routine is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_bool & outArgument0,
                                          GALGAS_uint & outArgument1,
                                          GALGAS_uint & outArgument2,
                                          GALGAS_bool & outArgument3,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_routineMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineMap) ;
    outArgument0 = p->mAttribute_mIsNoReturn ;
    outArgument1 = p->mAttribute_mRequiredBank ;
    outArgument2 = p->mAttribute_mReturnedBank ;
    outArgument3 = p->mAttribute_mPreservesBank ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMap::getter_mIsNoReturnForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mAttribute_mIsNoReturn ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineMap::getter_mRequiredBankForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mAttribute_mRequiredBank ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineMap::getter_mReturnedBankForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mAttribute_mReturnedBank ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMap::getter_mPreservesBankForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mAttribute_mPreservesBank ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::setter_setMIsNoReturnForKey (GALGAS_bool inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mAttribute_mIsNoReturn = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::setter_setMRequiredBankForKey (GALGAS_uint inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mAttribute_mRequiredBank = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::setter_setMReturnedBankForKey (GALGAS_uint inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mAttribute_mReturnedBank = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::setter_setMPreservesBankForKey (GALGAS_bool inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mAttribute_mPreservesBank = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMap * GALGAS_routineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * result = (cMapElement_routineMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineMap::cEnumerator_routineMap (const GALGAS_routineMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element cEnumerator_routineMap::current (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return GALGAS_routineMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIsNoReturn, p->mAttribute_mRequiredBank, p->mAttribute_mReturnedBank, p->mAttribute_mPreservesBank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_routineMap::current_mRequiredBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_routineMap::current_mReturnedBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMap::current_mPreservesBank (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mAttribute_mPreservesBank ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @routineMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  const GALGAS_routineMap * p = (const GALGAS_routineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind::GALGAS_routineKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_regularRoutine (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_regularRoutine ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_noReturnRoutine (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_noReturnRoutine ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_interruptRoutine (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_interruptRoutine ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_routineKind [4] = {
  "(not built)",
  "regularRoutine",
  "noReturnRoutine",
  "interruptRoutine"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isRegularRoutine (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_regularRoutine == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isNoReturnRoutine (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noReturnRoutine == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isInterruptRoutine (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_interruptRoutine == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineKind::description (C_String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString << "<enum @routineKind: " << gEnumNameArrayFor_routineKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @routineKind type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  const GALGAS_routineKind * p = (const GALGAS_routineKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_symbolTableForOptimizations::cMapElement_symbolTableForOptimizations (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_uint & in_mDefinitionLineIndex,
                                                                                  const GALGAS_bool & in_mIsDeletable
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mDefinitionLineIndex (in_mDefinitionLineIndex),
mAttribute_mIsDeletable (in_mIsDeletable) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_symbolTableForOptimizations::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDefinitionLineIndex.isValid () && mAttribute_mIsDeletable.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_symbolTableForOptimizations::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_symbolTableForOptimizations (mAttribute_lkey, mAttribute_mDefinitionLineIndex, mAttribute_mIsDeletable COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_symbolTableForOptimizations::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefinitionLineIndex" ":" ;
  mAttribute_mDefinitionLineIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsDeletable" ":" ;
  mAttribute_mIsDeletable.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_symbolTableForOptimizations::compare (const cCollectionElement * inOperand) const {
  cMapElement_symbolTableForOptimizations * operand = (cMapElement_symbolTableForOptimizations *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mDefinitionLineIndex.objectCompare (operand->mAttribute_mDefinitionLineIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsDeletable.objectCompare (operand->mAttribute_mIsDeletable) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations::GALGAS_symbolTableForOptimizations (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations::GALGAS_symbolTableForOptimizations (const GALGAS_symbolTableForOptimizations & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations & GALGAS_symbolTableForOptimizations::operator = (const GALGAS_symbolTableForOptimizations & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations GALGAS_symbolTableForOptimizations::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations GALGAS_symbolTableForOptimizations::constructor_mapWithMapToOverride (const GALGAS_symbolTableForOptimizations & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations GALGAS_symbolTableForOptimizations::getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForOptimizations result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForOptimizations::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_uint & inArgument0,
                                                              const GALGAS_bool & inArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForOptimizations * p = NULL ;
  macroMyNew (p, cMapElement_symbolTableForOptimizations (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForOptimizations insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForOptimizations::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_uint inArgument0,
                                                           GALGAS_bool inArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForOptimizations * p = NULL ;
  macroMyNew (p, cMapElement_symbolTableForOptimizations (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_symbolTableForOptimizations_searchKey = "the '%K' label is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForOptimizations::method_searchKey (GALGAS_lstring inKey,
                                                           GALGAS_uint & outArgument0,
                                                           GALGAS_bool & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_symbolTableForOptimizations_searchKey
                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    outArgument0 = p->mAttribute_mDefinitionLineIndex ;
    outArgument1 = p->mAttribute_mIsDeletable ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForOptimizations::setter_removeKey (GALGAS_lstring inKey,
                                                           GALGAS_uint & outArgument0,
                                                           GALGAS_bool & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "the '%K' label is not declared" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_symbolTableForOptimizations * p = (cMapElement_symbolTableForOptimizations *) attributes.ptr () ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    outArgument0 = p->mAttribute_mDefinitionLineIndex ;
    outArgument1 = p->mAttribute_mIsDeletable ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForOptimizations::getter_mDefinitionLineIndexForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    result = p->mAttribute_mDefinitionLineIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_symbolTableForOptimizations::getter_mIsDeletableForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    result = p->mAttribute_mIsDeletable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForOptimizations::setter_setMDefinitionLineIndexForKey (GALGAS_uint inAttributeValue,
                                                                               GALGAS_string inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForOptimizations * p = (cMapElement_symbolTableForOptimizations *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    p->mAttribute_mDefinitionLineIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForOptimizations::setter_setMIsDeletableForKey (GALGAS_bool inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForOptimizations * p = (cMapElement_symbolTableForOptimizations *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
    p->mAttribute_mIsDeletable = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_symbolTableForOptimizations * GALGAS_symbolTableForOptimizations::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForOptimizations * result = (cMapElement_symbolTableForOptimizations *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForOptimizations) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_symbolTableForOptimizations::cEnumerator_symbolTableForOptimizations (const GALGAS_symbolTableForOptimizations & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element cEnumerator_symbolTableForOptimizations::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return GALGAS_symbolTableForOptimizations_2D_element (p->mAttribute_lkey, p->mAttribute_mDefinitionLineIndex, p->mAttribute_mIsDeletable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_symbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_symbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return p->mAttribute_mDefinitionLineIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_symbolTableForOptimizations::current_mIsDeletable (LOCATION_ARGS) const {
  const cMapElement_symbolTableForOptimizations * p = (const cMapElement_symbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForOptimizations) ;
  return p->mAttribute_mIsDeletable ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @symbolTableForOptimizations type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForOptimizations ("symbolTableForOptimizations",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_symbolTableForOptimizations::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_symbolTableForOptimizations::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForOptimizations (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations GALGAS_symbolTableForOptimizations::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations result ;
  const GALGAS_symbolTableForOptimizations * p = (const GALGAS_symbolTableForOptimizations *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForOptimizations *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_configFieldMap::cMapElement_configFieldMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lstring & in_mRegisterName,
                                                        const GALGAS_luint & in_mMaskValue,
                                                        const GALGAS_lstring & in_mDescription,
                                                        const GALGAS_fieldSettingMap & in_mFieldSettingMap
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mRegisterName (in_mRegisterName),
mAttribute_mMaskValue (in_mMaskValue),
mAttribute_mDescription (in_mDescription),
mAttribute_mFieldSettingMap (in_mFieldSettingMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_configFieldMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterName.isValid () && mAttribute_mMaskValue.isValid () && mAttribute_mDescription.isValid () && mAttribute_mFieldSettingMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_configFieldMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_configFieldMap (mAttribute_lkey, mAttribute_mRegisterName, mAttribute_mMaskValue, mAttribute_mDescription, mAttribute_mFieldSettingMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_configFieldMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterName" ":" ;
  mAttribute_mRegisterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMaskValue" ":" ;
  mAttribute_mMaskValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDescription" ":" ;
  mAttribute_mDescription.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldSettingMap" ":" ;
  mAttribute_mFieldSettingMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_configFieldMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_configFieldMap * operand = (cMapElement_configFieldMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterName.objectCompare (operand->mAttribute_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMaskValue.objectCompare (operand->mAttribute_mMaskValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDescription.objectCompare (operand->mAttribute_mDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldSettingMap.objectCompare (operand->mAttribute_mFieldSettingMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap::GALGAS_configFieldMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap::GALGAS_configFieldMap (const GALGAS_configFieldMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap & GALGAS_configFieldMap::operator = (const GALGAS_configFieldMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap GALGAS_configFieldMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_configFieldMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap GALGAS_configFieldMap::constructor_mapWithMapToOverride (const GALGAS_configFieldMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_configFieldMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap GALGAS_configFieldMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_configFieldMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_lstring & inArgument0,
                                                 const GALGAS_luint & inArgument1,
                                                 const GALGAS_lstring & inArgument2,
                                                 const GALGAS_fieldSettingMap & inArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_configFieldMap * p = NULL ;
  macroMyNew (p, cMapElement_configFieldMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@configFieldMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_lstring inArgument0,
                                              GALGAS_luint inArgument1,
                                              GALGAS_lstring inArgument2,
                                              GALGAS_fieldSettingMap inArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_configFieldMap * p = NULL ;
  macroMyNew (p, cMapElement_configFieldMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration field is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_configFieldMap_searchKey = "the '%K' configuration field is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_lstring & outArgument0,
                                              GALGAS_luint & outArgument1,
                                              GALGAS_lstring & outArgument2,
                                              GALGAS_fieldSettingMap & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_configFieldMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    outArgument0 = p->mAttribute_mRegisterName ;
    outArgument1 = p->mAttribute_mMaskValue ;
    outArgument2 = p->mAttribute_mDescription ;
    outArgument3 = p->mAttribute_mFieldSettingMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configFieldMap::getter_mRegisterNameForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configFieldMap::getter_mMaskValueForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mAttribute_mMaskValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configFieldMap::getter_mDescriptionForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mAttribute_mDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap GALGAS_configFieldMap::getter_mFieldSettingMapForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) attributes ;
  GALGAS_fieldSettingMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    result = p->mAttribute_mFieldSettingMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap::setter_setMRegisterNameForKey (GALGAS_lstring inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_configFieldMap * p = (cMapElement_configFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    p->mAttribute_mRegisterName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap::setter_setMMaskValueForKey (GALGAS_luint inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_configFieldMap * p = (cMapElement_configFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    p->mAttribute_mMaskValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap::setter_setMDescriptionForKey (GALGAS_lstring inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_configFieldMap * p = (cMapElement_configFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    p->mAttribute_mDescription = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap::setter_setMFieldSettingMapForKey (GALGAS_fieldSettingMap inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_configFieldMap * p = (cMapElement_configFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_configFieldMap) ;
    p->mAttribute_mFieldSettingMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_configFieldMap * GALGAS_configFieldMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_configFieldMap * result = (cMapElement_configFieldMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_configFieldMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_configFieldMap::cEnumerator_configFieldMap (const GALGAS_configFieldMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element cEnumerator_configFieldMap::current (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return GALGAS_configFieldMap_2D_element (p->mAttribute_lkey, p->mAttribute_mRegisterName, p->mAttribute_mMaskValue, p->mAttribute_mDescription, p->mAttribute_mFieldSettingMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_configFieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_configFieldMap::current_mRegisterName (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cEnumerator_configFieldMap::current_mMaskValue (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mAttribute_mMaskValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_configFieldMap::current_mDescription (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mAttribute_mDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap cEnumerator_configFieldMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  const cMapElement_configFieldMap * p = (const cMapElement_configFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_configFieldMap) ;
  return p->mAttribute_mFieldSettingMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @configFieldMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configFieldMap ("configFieldMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configFieldMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap GALGAS_configFieldMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_configFieldMap result ;
  const GALGAS_configFieldMap * p = (const GALGAS_configFieldMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_fieldSettingMap::cMapElement_fieldSettingMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mValue,
                                                          const GALGAS_uint & in_mMask
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mValue (in_mValue),
mAttribute_mMask (in_mMask) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_fieldSettingMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () && mAttribute_mMask.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_fieldSettingMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_fieldSettingMap (mAttribute_lkey, mAttribute_mValue, mAttribute_mMask COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_fieldSettingMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mAttribute_mValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMask" ":" ;
  mAttribute_mMask.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_fieldSettingMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_fieldSettingMap * operand = (cMapElement_fieldSettingMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (operand->mAttribute_mValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMask.objectCompare (operand->mAttribute_mMask) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap::GALGAS_fieldSettingMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap::GALGAS_fieldSettingMap (const GALGAS_fieldSettingMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap & GALGAS_fieldSettingMap::operator = (const GALGAS_fieldSettingMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_fieldSettingMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::constructor_mapWithMapToOverride (const GALGAS_fieldSettingMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_fieldSettingMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_fieldSettingMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldSettingMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  const GALGAS_uint & inArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_fieldSettingMap * p = NULL ;
  macroMyNew (p, cMapElement_fieldSettingMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@fieldSettingMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldSettingMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               GALGAS_uint inArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_fieldSettingMap * p = NULL ;
  macroMyNew (p, cMapElement_fieldSettingMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configuration register setting is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_fieldSettingMap_searchKey = "the '%K' configuration register setting is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldSettingMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               GALGAS_uint & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_fieldSettingMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    outArgument0 = p->mAttribute_mValue ;
    outArgument1 = p->mAttribute_mMask ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_fieldSettingMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_fieldSettingMap::getter_mMaskForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    result = p->mAttribute_mMask ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldSettingMap::setter_setMValueForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_fieldSettingMap * p = (cMapElement_fieldSettingMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    p->mAttribute_mValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldSettingMap::setter_setMMaskForKey (GALGAS_uint inAttributeValue,
                                                    GALGAS_string inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_fieldSettingMap * p = (cMapElement_fieldSettingMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
    p->mAttribute_mMask = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_fieldSettingMap * GALGAS_fieldSettingMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_fieldSettingMap * result = (cMapElement_fieldSettingMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_fieldSettingMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_fieldSettingMap::cEnumerator_fieldSettingMap (const GALGAS_fieldSettingMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element cEnumerator_fieldSettingMap::current (LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
  return GALGAS_fieldSettingMap_2D_element (p->mAttribute_lkey, p->mAttribute_mValue, p->mAttribute_mMask) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_fieldSettingMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_fieldSettingMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
  return p->mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_fieldSettingMap::current_mMask (LOCATION_ARGS) const {
  const cMapElement_fieldSettingMap * p = (const cMapElement_fieldSettingMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_fieldSettingMap) ;
  return p->mAttribute_mMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @fieldSettingMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fieldSettingMap ("fieldSettingMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_fieldSettingMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_fieldSettingMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fieldSettingMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap GALGAS_fieldSettingMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fieldSettingMap result ;
  const GALGAS_fieldSettingMap * p = (const GALGAS_fieldSettingMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fieldSettingMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_ADDWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_ADDWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_ANDWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_ANDWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_COMF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_COMF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_DECF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_DECFSZ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_INCF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_INCFSZ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_IORWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_IORWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_RLF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_RLF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_RRF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_RRF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_SUBWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_SUBWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_SWAPF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_XORWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_XORWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_baseline_5F_instruction_5F_FD_5F_base_5F_code [15] = {
  "(not built)",
  "ADDWF",
  "ANDWF",
  "COMF",
  "DECF",
  "DECFSZ",
  "INCF",
  "INCFSZ",
  "IORWF",
  "MOVF",
  "RLF",
  "RRF",
  "SUBWF",
  "SWAPF",
  "XORWF"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isADDWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ADDWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isANDWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ANDWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isCOMF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_COMF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECFSZ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCFSZ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isIORWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_IORWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isMOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isRLF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RLF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isRRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RRF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isSUBWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SUBWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isSWAPF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SWAPF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isXORWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_XORWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::description (C_String & ioString,
                                                                        const int32_t /* inIndentation */) const {
  ioString << "<enum @baseline_instruction_FD_base_code: " << gEnumNameArrayFor_baseline_5F_instruction_5F_FD_5F_base_5F_code [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::objectCompare (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_instruction_FD_base_code type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ("baseline_instruction_FD_base_code",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code * p = (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CLRF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVWF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_baseline_5F_F_5F_instruction_5F_base_5F_code [3] = {
  "(not built)",
  "CLRF",
  "MOVWF"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVWF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::description (C_String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @baseline_F_instruction_base_code: " << gEnumNameArrayFor_baseline_5F_F_5F_instruction_5F_base_5F_code [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::objectCompare (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_F_instruction_base_code type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ("baseline_F_instruction_base_code",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code * p = (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_F_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op::GALGAS_baseline_5F_bit_5F_oriented_5F_op (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BCF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BSF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_baseline_5F_bit_5F_oriented_5F_op [3] = {
  "(not built)",
  "BCF",
  "BSF"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_bit_5F_oriented_5F_op::getter_isBCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BCF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_bit_5F_oriented_5F_op::getter_isBSF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BSF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_bit_5F_oriented_5F_op::description (C_String & ioString,
                                                            const int32_t /* inIndentation */) const {
  ioString << "<enum @baseline_bit_oriented_op: " << gEnumNameArrayFor_baseline_5F_bit_5F_oriented_5F_op [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_bit_5F_oriented_5F_op::objectCompare (const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_bit_oriented_op type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ("baseline_bit_oriented_op",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_bit_5F_oriented_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_bit_5F_oriented_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_bit_5F_oriented_5F_op (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_bit_5F_oriented_5F_op::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  const GALGAS_baseline_5F_bit_5F_oriented_5F_op * p = (const GALGAS_baseline_5F_bit_5F_oriented_5F_op *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_bit_5F_oriented_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bit_oriented_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::GALGAS_baseline_5F_literal_5F_instruction_5F_opcode (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_ANDLW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_ANDLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_IORLW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_IORLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_MOVLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_RETLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_XORLW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_XORLW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_baseline_5F_literal_5F_instruction_5F_opcode [6] = {
  "(not built)",
  "ANDLW",
  "IORLW",
  "MOVLW",
  "RETLW",
  "XORLW"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isANDLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ANDLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isIORLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_IORLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isMOVLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isRETLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RETLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isXORLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_XORLW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::description (C_String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @baseline_literal_instruction_opcode: " << gEnumNameArrayFor_baseline_5F_literal_5F_instruction_5F_opcode [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::objectCompare (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_literal_instruction_opcode type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ("baseline_literal_instruction_opcode",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_literal_5F_instruction_5F_opcode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode * p = (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_literal_instruction_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::constructor_BTFSS (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode result ;
  result.mEnum = kEnum_BTFSS ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::constructor_BTFSC (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode result ;
  result.mEnum = kEnum_BTFSC ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_baseline_5F_IF_5F_BitTest_5F_opcode [3] = {
  "(not built)",
  "BTFSS",
  "BTFSC"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::getter_isBTFSS (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BTFSS == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::getter_isBTFSC (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BTFSC == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::description (C_String & ioString,
                                                              const int32_t /* inIndentation */) const {
  ioString << "<enum @baseline_IF_BitTest_opcode: " << gEnumNameArrayFor_baseline_5F_IF_5F_BitTest_5F_opcode [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::objectCompare (const GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baseline_IF_BitTest_opcode type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode ("baseline_IF_BitTest_opcode",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode result ;
  const GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode * p = (const GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_IF_BitTest_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::GALGAS_baseline_5F_WO_5F_OPERAND_5F_group (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_CLRW (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = kEnum_CLRW ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_NOP (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = kEnum_NOP ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_CLRWDT (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = kEnum_CLRWDT ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_OPTION_5F_ (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = kEnum_OPTION_5F_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_SLEEP (UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = kEnum_SLEEP ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_baseline_5F_WO_5F_OPERAND_5F_group [6] = {
  "(not built)",
  "CLRW",
  "NOP",
  "CLRWDT",
  "OPTION_",
  "SLEEP"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isCLRW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRW == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isNOP (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_NOP == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isCLRWDT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRWDT == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isOPTION_5F_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_OPTION_5F_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isSLEEP (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SLEEP == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::description (C_String & ioString,
                                                             const int32_t /* inIndentation */) const {
  ioString << "<enum @baseline_WO_OPERAND_group: " << gEnumNameArrayFor_baseline_5F_WO_5F_OPERAND_5F_group [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::objectCompare (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_WO_OPERAND_group type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ("baseline_WO_OPERAND_group",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_WO_5F_OPERAND_5F_group (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group * p = (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_WO_OPERAND_group", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@baseline_5F_instructionList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_baseline_5F_instructionList : public cCollectionElement {
  public : GALGAS_baseline_5F_instructionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_baseline_5F_instructionList (const GALGAS_baseline_5F_instruction & in_mInstruction
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_baseline_5F_instructionList::cCollectionElement_baseline_5F_instructionList (const GALGAS_baseline_5F_instruction & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_baseline_5F_instructionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_baseline_5F_instructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_baseline_5F_instructionList (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_baseline_5F_instructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_baseline_5F_instructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_instructionList * operand = (cCollectionElement_baseline_5F_instructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_instructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList::GALGAS_baseline_5F_instructionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList::GALGAS_baseline_5F_instructionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::constructor_listWithValue (const GALGAS_baseline_5F_instruction & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_baseline_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_baseline_5F_instruction & in_mInstruction
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_instructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_baseline_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList::addAssign_operation (const GALGAS_baseline_5F_instruction & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList::setter_insertAtIndex (const GALGAS_baseline_5F_instruction inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList::setter_removeAtIndex (GALGAS_baseline_5F_instruction & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList::setter_popFirst (GALGAS_baseline_5F_instruction & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList::setter_popLast (GALGAS_baseline_5F_instruction & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList::method_first (GALGAS_baseline_5F_instruction & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList::method_last (GALGAS_baseline_5F_instruction & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::add_operation (const GALGAS_baseline_5F_instructionList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result = GALGAS_baseline_5F_instructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result = GALGAS_baseline_5F_instructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instructionList result = GALGAS_baseline_5F_instructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList::plusAssign_operation (const GALGAS_baseline_5F_instructionList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction GALGAS_baseline_5F_instructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  GALGAS_baseline_5F_instruction result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    result = p->mObject.mAttribute_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_instructionList::cEnumerator_baseline_5F_instructionList (const GALGAS_baseline_5F_instructionList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList_2D_element cEnumerator_baseline_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_instructionList * p = (const cCollectionElement_baseline_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction cEnumerator_baseline_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_instructionList * p = (const cCollectionElement_baseline_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_instructionList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instructionList ("baseline_instructionList",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instructionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_instructionList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList result ;
  const GALGAS_baseline_5F_instructionList * p = (const GALGAS_baseline_5F_instructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@baseline_5F_partList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_baseline_5F_partList : public cCollectionElement {
  public : GALGAS_baseline_5F_partList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_baseline_5F_partList (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                    const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfPartLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_baseline_5F_partList::cCollectionElement_baseline_5F_partList (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                                                  const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfPartLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_baseline_5F_partList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_baseline_5F_partList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_baseline_5F_partList (mObject.mAttribute_mCondition, mObject.mAttribute_mInstructionList, mObject.mAttribute_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_baseline_5F_partList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCondition" ":" ;
  mObject.mAttribute_mCondition.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfPartLocation" ":" ;
  mObject.mAttribute_mEndOfPartLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_baseline_5F_partList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_partList * operand = (cCollectionElement_baseline_5F_partList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_partList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList::GALGAS_baseline_5F_partList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList::GALGAS_baseline_5F_partList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_baseline_5F_partList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::constructor_listWithValue (const GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                                    const GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                    const GALGAS_location & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_baseline_5F_partList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                             const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfPartLocation
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_partList * p = NULL ;
  macroMyNew (p, cCollectionElement_baseline_5F_partList (in_mCondition,
                                                          in_mInstructionList,
                                                          in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::addAssign_operation (const GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                       const GALGAS_baseline_5F_instructionList & inOperand1,
                                                       const GALGAS_location & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::setter_insertAtIndex (const GALGAS_baseline_5F_conditionExpression inOperand0,
                                                        const GALGAS_baseline_5F_instructionList inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::setter_removeAtIndex (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                        GALGAS_baseline_5F_instructionList & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
      outOperand0 = p->mObject.mAttribute_mCondition ;
      outOperand1 = p->mObject.mAttribute_mInstructionList ;
      outOperand2 = p->mObject.mAttribute_mEndOfPartLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::setter_popFirst (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                   GALGAS_baseline_5F_instructionList & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mAttribute_mCondition ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::setter_popLast (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                  GALGAS_baseline_5F_instructionList & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mAttribute_mCondition ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::method_first (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                                GALGAS_baseline_5F_instructionList & outOperand1,
                                                GALGAS_location & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mAttribute_mCondition ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::method_last (GALGAS_baseline_5F_conditionExpression & outOperand0,
                                               GALGAS_baseline_5F_instructionList & outOperand1,
                                               GALGAS_location & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mAttribute_mCondition ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfPartLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::add_operation (const GALGAS_baseline_5F_partList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result = GALGAS_baseline_5F_partList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result = GALGAS_baseline_5F_partList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_partList result = GALGAS_baseline_5F_partList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList::plusAssign_operation (const GALGAS_baseline_5F_partList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_partList::getter_mConditionAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GALGAS_baseline_5F_conditionExpression result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mAttribute_mCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_partList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_partList::getter_mEndOfPartLocationAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mAttribute_mEndOfPartLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_partList::cEnumerator_baseline_5F_partList (const GALGAS_baseline_5F_partList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList_2D_element cEnumerator_baseline_5F_partList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression cEnumerator_baseline_5F_partList::current_mCondition (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mAttribute_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cEnumerator_baseline_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_baseline_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mAttribute_mEndOfPartLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @baseline_partList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_partList ("baseline_partList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_partList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_partList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_partList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_partList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList GALGAS_baseline_5F_partList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList result ;
  const GALGAS_baseline_5F_partList * p = (const GALGAS_baseline_5F_partList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_partList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_partList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@baseline_5F_routineDefinitionList' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_baseline_5F_routineDefinitionList : public cCollectionElement {
  public : GALGAS_baseline_5F_routineDefinitionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_baseline_5F_routineDefinitionList (const GALGAS_lstring & in_mRoutineName,
                                                                 const GALGAS_luint & in_mPage,
                                                                 const GALGAS_bool & in_mIsNoReturn,
                                                                 const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                 const GALGAS_location & in_mEndOfRoutineLocation
                                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_baseline_5F_routineDefinitionList::cCollectionElement_baseline_5F_routineDefinitionList (const GALGAS_lstring & in_mRoutineName,
                                                                                                            const GALGAS_luint & in_mPage,
                                                                                                            const GALGAS_bool & in_mIsNoReturn,
                                                                                                            const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                            const GALGAS_location & in_mEndOfRoutineLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mPage, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_baseline_5F_routineDefinitionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_baseline_5F_routineDefinitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_baseline_5F_routineDefinitionList (mObject.mAttribute_mRoutineName, mObject.mAttribute_mPage, mObject.mAttribute_mIsNoReturn, mObject.mAttribute_mInstructionList, mObject.mAttribute_mEndOfRoutineLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_baseline_5F_routineDefinitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineName" ":" ;
  mObject.mAttribute_mRoutineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPage" ":" ;
  mObject.mAttribute_mPage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsNoReturn" ":" ;
  mObject.mAttribute_mIsNoReturn.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfRoutineLocation" ":" ;
  mObject.mAttribute_mEndOfRoutineLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_baseline_5F_routineDefinitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_routineDefinitionList * operand = (cCollectionElement_baseline_5F_routineDefinitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList::GALGAS_baseline_5F_routineDefinitionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList::GALGAS_baseline_5F_routineDefinitionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_luint & inOperand1,
                                                                                                              const GALGAS_bool & inOperand2,
                                                                                                              const GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                                              const GALGAS_location & inOperand4
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_baseline_5F_routineDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mRoutineName,
                                                                          const GALGAS_luint & in_mPage,
                                                                          const GALGAS_bool & in_mIsNoReturn,
                                                                          const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                          const GALGAS_location & in_mEndOfRoutineLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (in_mRoutineName,
                                                                       in_mPage,
                                                                       in_mIsNoReturn,
                                                                       in_mInstructionList,
                                                                       in_mEndOfRoutineLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_luint & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_baseline_5F_instructionList & inOperand3,
                                                                    const GALGAS_location & inOperand4
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_luint inOperand1,
                                                                     const GALGAS_bool inOperand2,
                                                                     const GALGAS_baseline_5F_instructionList inOperand3,
                                                                     const GALGAS_location inOperand4,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_luint & outOperand1,
                                                                     GALGAS_bool & outOperand2,
                                                                     GALGAS_baseline_5F_instructionList & outOperand3,
                                                                     GALGAS_location & outOperand4,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
      outOperand0 = p->mObject.mAttribute_mRoutineName ;
      outOperand1 = p->mObject.mAttribute_mPage ;
      outOperand2 = p->mObject.mAttribute_mIsNoReturn ;
      outOperand3 = p->mObject.mAttribute_mInstructionList ;
      outOperand4 = p->mObject.mAttribute_mEndOfRoutineLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_luint & outOperand1,
                                                                GALGAS_bool & outOperand2,
                                                                GALGAS_baseline_5F_instructionList & outOperand3,
                                                                GALGAS_location & outOperand4,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mPage ;
    outOperand2 = p->mObject.mAttribute_mIsNoReturn ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
    outOperand4 = p->mObject.mAttribute_mEndOfRoutineLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_luint & outOperand1,
                                                               GALGAS_bool & outOperand2,
                                                               GALGAS_baseline_5F_instructionList & outOperand3,
                                                               GALGAS_location & outOperand4,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mPage ;
    outOperand2 = p->mObject.mAttribute_mIsNoReturn ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
    outOperand4 = p->mObject.mAttribute_mEndOfRoutineLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_luint & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             GALGAS_baseline_5F_instructionList & outOperand3,
                                                             GALGAS_location & outOperand4,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mPage ;
    outOperand2 = p->mObject.mAttribute_mIsNoReturn ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
    outOperand4 = p->mObject.mAttribute_mEndOfRoutineLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_luint & outOperand1,
                                                            GALGAS_bool & outOperand2,
                                                            GALGAS_baseline_5F_instructionList & outOperand3,
                                                            GALGAS_location & outOperand4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mPage ;
    outOperand2 = p->mObject.mAttribute_mIsNoReturn ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
    outOperand4 = p->mObject.mAttribute_mEndOfRoutineLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::add_operation (const GALGAS_baseline_5F_routineDefinitionList & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_routineDefinitionList result = GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList::plusAssign_operation (const GALGAS_baseline_5F_routineDefinitionList inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_routineDefinitionList::getter_mRoutineNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_baseline_5F_routineDefinitionList::getter_mPageAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mAttribute_mPage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_routineDefinitionList::getter_mIsNoReturnAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mAttribute_mIsNoReturn ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_routineDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_baseline_5F_instructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_routineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mAttribute_mEndOfRoutineLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_routineDefinitionList::cEnumerator_baseline_5F_routineDefinitionList (const GALGAS_baseline_5F_routineDefinitionList & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element cEnumerator_baseline_5F_routineDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_baseline_5F_routineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cEnumerator_baseline_5F_routineDefinitionList::current_mPage (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mAttribute_mPage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_baseline_5F_routineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList cEnumerator_baseline_5F_routineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_baseline_5F_routineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mAttribute_mEndOfRoutineLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_routineDefinitionList type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ("baseline_routineDefinitionList",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_routineDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_routineDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_routineDefinitionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_routineDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList result ;
  const GALGAS_baseline_5F_routineDefinitionList * p = (const GALGAS_baseline_5F_routineDefinitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_routineDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_routineDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_section_5F_list_i0_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                              GALGAS_lstringlist & ioArgument_ioUnusedRoutineList,
                                                                              GALGAS_ramDefinitionList & ioArgument_ioRamDefinitionList,
                                                                              GALGAS_lstringlist & ioArgument_unusedRegisterList,
                                                                              GALGAS_configDefinitionList & ioArgument_ioConfigDefinitionList,
                                                                              GALGAS_constantDefinitionList & ioArgument_ioConstantDefinitionList,
                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_unused) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 37)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_byte) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 38)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_unusedRegister = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 40)) ;
        ioArgument_unusedRegisterList.addAssign_operation (var_unusedRegister  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 41)) ;
        switch (select_baseline_5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 43)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_unused) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 46)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_routine) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 47)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GALGAS_lstring var_unusedRoutine = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 49)) ;
        ioArgument_ioUnusedRoutineList.addAssign_operation (var_unusedRoutine  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 50)) ;
        switch (select_baseline_5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 52)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_ (ioArgument_ioConfigDefinitionList, inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_ (ioArgument_ioRamDefinitionList, inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_ (ioArgument_ioConstantDefinitionList, inCompiler) ;
    } break ;
    case 7: {
      nt_baseline_5F_routine_5F_definition_ (ioArgument_ioRoutineDefinitionList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_section_5F_list_i0_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_unused) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 37)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_byte) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 38)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 40)) ;
        switch (select_baseline_5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 43)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_unused) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 46)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_routine) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 47)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 49)) ;
        switch (select_baseline_5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 52)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_baseline_5F_routine_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_section_5F_list_i0_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_unused) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 37)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_byte) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 38)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 40)) ;
        switch (select_baseline_5F_syntax_1 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 43)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_unused) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 46)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_routine) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 47)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 49)) ;
        switch (select_baseline_5F_syntax_2 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 52)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_baseline_5F_routine_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GALGAS_baseline_5F_instructionList & outArgument_outInstructionList,
                                                                                              GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_baseline_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_syntax.galgas", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_3 (inCompiler)) {
    case 2: {
      GALGAS_baseline_5F_instruction var_instruction ;
      nt_baseline_5F_simple_5F_instruction_ (var_instruction, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 76)) ;
    } break ;
    case 3: {
      GALGAS_baseline_5F_instruction var_instruction ;
      nt_baseline_5F_structured_5F_instruction_ (var_instruction, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_baseline_5F_simple_5F_instruction_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_baseline_5F_structured_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_baseline_5F_simple_5F_instruction_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_baseline_5F_structured_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                                C_Lexique_piccolo_5F_lexique * inCompiler) {
  GALGAS_bool var_noreturn ;
  switch (select_baseline_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_noreturn = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_noreturn) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 94)) ;
    var_noreturn = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_routine) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 97)) ;
  GALGAS_lstring var_routineName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 98)) ;
  GALGAS_luint var_page ;
  switch (select_baseline_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_page = GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 102))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 102)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_page) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 104)) ;
    var_page = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 105)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 108)) ;
  GALGAS_labelMap var_labelMap = GALGAS_labelMap::constructor_emptyMap (SOURCE_FILE ("baseline_syntax.galgas", 109)) ;
  GALGAS_baseline_5F_instructionList var_instructionList ;
  nt_baseline_5F_instruction_5F_list_ (var_instructionList, var_labelMap, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 113)) ;
  ioArgument_ioRoutineDefinitionList.addAssign_operation (var_routineName, var_page, var_noreturn, var_instructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 119))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_noreturn) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 94)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_routine) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 97)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 98)) ;
  switch (select_baseline_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_page) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 104)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 105)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 108)) ;
  nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 113)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_noreturn) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 94)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_routine) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 97)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 98)) ;
  switch (select_baseline_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_page) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 104)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 105)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 108)) ;
  nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 113)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GALGAS_baseline_5F_instruction & outArgument_outInstruction,
                                                                                                    GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                                    C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_baseline_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_do) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 129)) ;
    GALGAS_lstring var_doLabel ;
    switch (select_baseline_5F_syntax_7 (inCompiler)) {
    case 1: {
      var_doLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 132))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 132)) ;
    } break ;
    case 2: {
      var_doLabel = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 134)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 135)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 137)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 138)) ;
    GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 139)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 140)) ;
    GALGAS_immediatExpression var_lowBoundExpression ;
    nt_immediate_5F_expression_ (var_lowBoundExpression, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 142)) ;
    GALGAS_immediatExpression var_highBoundExpression ;
    nt_immediate_5F_expression_ (var_highBoundExpression, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 144)) ;
    GALGAS_baseline_5F_instructionList var_instructionList ;
    nt_baseline_5F_instruction_5F_list_ (var_instructionList, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::constructor_new (var_instructionLocation, var_constantName, var_lowBoundExpression, var_highBoundExpression, var_instructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 152))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 146)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 154)) ;
    GALGAS_lstring var_endDoLabel ;
    switch (select_baseline_5F_syntax_8 (inCompiler)) {
    case 1: {
      var_endDoLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 157))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 157)) ;
    } break ;
    case 2: {
      var_endDoLabel = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 159)) ;
    } break ;
    default:
      break ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_doLabel.mAttribute_string.objectCompare (var_endDoLabel.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_doLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = var_doLabel.mAttribute_string ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string ("empty") ;
      }
      GALGAS_location location_3 (var_endDoLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 162))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 162)) ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_jump) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 166)) ;
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 167)) ;
    GALGAS_lstring var_targetLabelName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 168)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_JUMP::constructor_new (var_instructionLocation, var_targetLabelName  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 169)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_jsr) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 173)) ;
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 174)) ;
    GALGAS_lstring var_targetLabelName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 175)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_JSR::constructor_new (var_instructionLocation, var_targetLabelName  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 176)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_forever) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 180)) ;
    GALGAS_lstring var_foreverLabel ;
    switch (select_baseline_5F_syntax_9 (inCompiler)) {
    case 1: {
      var_foreverLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 183))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 183)) ;
    } break ;
    case 2: {
      var_foreverLabel = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 185)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 186)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 188)) ;
    GALGAS_baseline_5F_instructionList var_instructionList ;
    nt_baseline_5F_instruction_5F_list_ (var_instructionList, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 190)) ;
    GALGAS_lstring var_endForeverLabel ;
    switch (select_baseline_5F_syntax_10 (inCompiler)) {
    case 1: {
      var_endForeverLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 193))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 193)) ;
    } break ;
    case 2: {
      var_endForeverLabel = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 195)) ;
    } break ;
    default:
      break ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_foreverLabel.mAttribute_string.objectCompare (var_endForeverLabel.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_foreverLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = var_foreverLabel.mAttribute_string ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string ("empty") ;
      }
      GALGAS_location location_7 (var_endForeverLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, GALGAS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 198))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 198)) ;
    }
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_FOREVER::constructor_new (var_instructionLocation, var_instructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 204))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 201)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 207)) ;
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 208)) ;
    GALGAS_registerExpression var_registerExpression ;
    GALGAS_bitNumberExpression var_bitNumberExpression ;
    GALGAS_bool var_skipIfSet ;
    switch (select_baseline_5F_syntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 213)) ;
      nt_register_5F_parsing_ (var_registerExpression, inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 215)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression, inCompiler) ;
      var_skipIfSet = GALGAS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerExpression, inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 220)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression, inCompiler) ;
      var_skipIfSet = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 224)) ;
    GALGAS_baseline_5F_instruction var_instruction ;
    nt_baseline_5F_simple_5F_instruction_ (var_instruction, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::constructor_new (var_instructionLocation, var_instruction, var_skipIfSet, var_registerExpression, var_bitNumberExpression  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 227)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 234)) ;
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 235)) ;
    GALGAS_bool var_increment ;
    switch (select_baseline_5F_syntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_decf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 238)) ;
      var_increment = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_incf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 240)) ;
      var_increment = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression ;
    nt_register_5F_parsing_ (var_registerExpression, inCompiler) ;
    GALGAS_bool var_w_5F_isTarget ;
    switch (select_baseline_5F_syntax_13 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 248)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_w) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 248)) ;
      var_w_5F_isTarget = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_conditionString = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 250)) ;
    GALGAS_string var_condition = var_conditionString.getter_string (SOURCE_FILE ("baseline_syntax.galgas", 251)).getter_uppercaseString (SOURCE_FILE ("baseline_syntax.galgas", 251)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_condition.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_location location_9 (var_conditionString.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_9, GALGAS_string ("invalid '").add_operation (var_condition, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 253)).add_operation (GALGAS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 253))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 253)) ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 255)) ;
    GALGAS_baseline_5F_instruction var_instruction ;
    nt_baseline_5F_simple_5F_instruction_ (var_instruction, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::constructor_new (var_instructionLocation, var_instruction, var_increment, var_registerExpression, var_w_5F_isTarget  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 258)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 266)) ;
    GALGAS_lstring var_ifLabel ;
    switch (select_baseline_5F_syntax_14 (inCompiler)) {
    case 1: {
      var_ifLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 269))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 269)) ;
    } break ;
    case 2: {
      var_ifLabel = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 271)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 272)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_ (var_ifLabel, outArgument_outInstruction, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 275)) ;
    GALGAS_lstring var_endIfLabel ;
    switch (select_baseline_5F_syntax_15 (inCompiler)) {
    case 1: {
      var_endIfLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 278))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 278)) ;
    } break ;
    case 2: {
      var_endIfLabel = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 280)) ;
    } break ;
    default:
      break ;
    }
    const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_ifLabel.mAttribute_string.objectCompare (var_endIfLabel.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_string temp_11 ;
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_ifLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        temp_11 = var_ifLabel.mAttribute_string ;
      }else if (kBoolFalse == test_12) {
        temp_11 = GALGAS_string ("empty") ;
      }
      GALGAS_location location_13 (var_endIfLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_13, GALGAS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 283))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 283)) ;
    }
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_do) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 287)) ;
    GALGAS_lstring var_doLabel ;
    switch (select_baseline_5F_syntax_16 (inCompiler)) {
    case 1: {
      var_doLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 290))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 290)) ;
    } break ;
    case 2: {
      var_doLabel = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 292)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 293)) ;
      }
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 295)) ;
    GALGAS_baseline_5F_instructionList var_repeatedInstructionList ;
    nt_baseline_5F_instruction_5F_list_ (var_repeatedInstructionList, ioArgument_ioLabelMap, inCompiler) ;
    GALGAS_location var_endOfRepeatedInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 297)) ;
    GALGAS_baseline_5F_partList var_whilePartList = GALGAS_baseline_5F_partList::constructor_emptyList (SOURCE_FILE ("baseline_syntax.galgas", 298)) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 300)) ;
      GALGAS_lstring var_whileLabel ;
      switch (select_baseline_5F_syntax_18 (inCompiler)) {
      case 1: {
        var_whileLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 303))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 303)) ;
      } break ;
      case 2: {
        var_whileLabel = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 305)) ;
      } break ;
      default:
        break ;
      }
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_doLabel.mAttribute_string.objectCompare (var_whileLabel.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_string temp_16 ;
        const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_doLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          temp_16 = var_doLabel.mAttribute_string ;
        }else if (kBoolFalse == test_17) {
          temp_16 = GALGAS_string ("empty") ;
        }
        GALGAS_location location_18 (var_whileLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_18, GALGAS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 308))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 308)) ;
      }
      GALGAS_baseline_5F_conditionExpression var_whileCondition ;
      nt_baseline_5F_condition_5F_expression_ (var_whileCondition, inCompiler) ;
      GALGAS_baseline_5F_instructionList var_instructionList ;
      nt_baseline_5F_instruction_5F_list_ (var_instructionList, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList.addAssign_operation (var_whileCondition, var_instructionList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 313))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 313)) ;
      switch (select_baseline_5F_syntax_17 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_14 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 316)) ;
    GALGAS_lstring var_endDoLabel ;
    switch (select_baseline_5F_syntax_19 (inCompiler)) {
    case 1: {
      var_endDoLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 319))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 319)) ;
    } break ;
    case 2: {
      var_endDoLabel = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 321)) ;
    } break ;
    default:
      break ;
    }
    const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, var_doLabel.mAttribute_string.objectCompare (var_endDoLabel.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_string temp_20 ;
      const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, var_doLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = var_doLabel.mAttribute_string ;
      }else if (kBoolFalse == test_21) {
        temp_20 = GALGAS_string ("empty") ;
      }
      GALGAS_location location_22 (var_endDoLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_22, GALGAS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 324))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 324)) ;
    }
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_do_5F_while::constructor_new (var_instructionLocation, var_repeatedInstructionList, var_endOfRepeatedInstructionList, var_whilePartList  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 327)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_mnop) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 333)) ;
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 334)) ;
    GALGAS_luint var_occurrenceFactor = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 335)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_MNOP::constructor_new (var_instructionLocation, var_occurrenceFactor  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 336)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_do) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 129)) ;
    switch (select_baseline_5F_syntax_7 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 134)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 138)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 139)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 140)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 142)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 144)) ;
    nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 154)) ;
    switch (select_baseline_5F_syntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 159)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_jump) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 166)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 168)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_jsr) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 173)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 175)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_forever) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 180)) ;
    switch (select_baseline_5F_syntax_9 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 185)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 190)) ;
    switch (select_baseline_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 195)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 207)) ;
    switch (select_baseline_5F_syntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 213)) ;
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 215)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 220)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 224)) ;
    nt_baseline_5F_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 234)) ;
    switch (select_baseline_5F_syntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_decf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 238)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_incf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 240)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_baseline_5F_syntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 248)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_w) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 248)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 250)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 255)) ;
    nt_baseline_5F_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 266)) ;
    switch (select_baseline_5F_syntax_14 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 271)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 275)) ;
    switch (select_baseline_5F_syntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 280)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_do) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 287)) ;
    switch (select_baseline_5F_syntax_16 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 292)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 300)) ;
      switch (select_baseline_5F_syntax_18 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 305)) ;
      } break ;
      default:
        break ;
      }
      nt_baseline_5F_condition_5F_expression_parse (inCompiler) ;
      nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
      switch (select_baseline_5F_syntax_17 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 316)) ;
    switch (select_baseline_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 321)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_mnop) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 333)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 335)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_do) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 129)) ;
    switch (select_baseline_5F_syntax_7 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 134)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 138)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 139)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 140)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 142)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 144)) ;
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 154)) ;
    switch (select_baseline_5F_syntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 159)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_jump) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 166)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 168)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_jsr) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 173)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 175)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_forever) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 180)) ;
    switch (select_baseline_5F_syntax_9 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 185)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 190)) ;
    switch (select_baseline_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 195)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 207)) ;
    switch (select_baseline_5F_syntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 213)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 215)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 220)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 224)) ;
    nt_baseline_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 234)) ;
    switch (select_baseline_5F_syntax_12 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_decf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 238)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_incf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 240)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_baseline_5F_syntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 248)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_w) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 248)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 250)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 255)) ;
    nt_baseline_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_if) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 266)) ;
    switch (select_baseline_5F_syntax_14 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 271)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 275)) ;
    switch (select_baseline_5F_syntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 280)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_do) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 287)) ;
    switch (select_baseline_5F_syntax_16 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 292)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_while) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 300)) ;
      switch (select_baseline_5F_syntax_18 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 305)) ;
      } break ;
      default:
        break ;
      }
      nt_baseline_5F_condition_5F_expression_indexing (inCompiler) ;
      nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
      switch (select_baseline_5F_syntax_17 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_end) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 316)) ;
    switch (select_baseline_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 321)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_mnop) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 333)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 335)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (const GALGAS_lstring constinArgument_ifLabel,
                                                                                                          GALGAS_baseline_5F_instruction & outArgument_outInstruction,
                                                                                                          GALGAS_labelMap & ioArgument_ioLabelMap,
                                                                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 347)) ;
  GALGAS_baseline_5F_conditionExpression var_structured_5F_if_5F_condition ;
  nt_baseline_5F_condition_5F_expression_ (var_structured_5F_if_5F_condition, inCompiler) ;
  GALGAS_baseline_5F_instructionList var_thenInstructionList ;
  nt_baseline_5F_instruction_5F_list_ (var_thenInstructionList, ioArgument_ioLabelMap, inCompiler) ;
  GALGAS_baseline_5F_instructionList var_elseInstructionList ;
  switch (select_baseline_5F_syntax_20 (inCompiler)) {
  case 1: {
    var_elseInstructionList = GALGAS_baseline_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_syntax.galgas", 353)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_elsif) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 355)) ;
    GALGAS_lstring var_elsifIfLabel ;
    switch (select_baseline_5F_syntax_21 (inCompiler)) {
    case 1: {
      var_elsifIfLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 358))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 358)) ;
    } break ;
    case 2: {
      var_elsifIfLabel = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 360)) ;
    } break ;
    default:
      break ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.mAttribute_string.objectCompare (var_elsifIfLabel.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = constinArgument_ifLabel.mAttribute_string ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string ("empty") ;
      }
      GALGAS_location location_3 (var_elsifIfLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 363))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 363)) ;
    }
    GALGAS_baseline_5F_instruction var_elsifPartInstruction ;
    nt_baseline_5F_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList = GALGAS_baseline_5F_instructionList::constructor_emptyList (SOURCE_FILE ("baseline_syntax.galgas", 367)) ;
    var_elseInstructionList.addAssign_operation (var_elsifPartInstruction  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 368)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 370)) ;
    GALGAS_lstring var_elseLabel ;
    switch (select_baseline_5F_syntax_22 (inCompiler)) {
    case 1: {
      var_elseLabel = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 373))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 373)) ;
    } break ;
    case 2: {
      var_elseLabel = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 375)) ;
    } break ;
    default:
      break ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.mAttribute_string.objectCompare (var_elseLabel.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_ifLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = constinArgument_ifLabel.mAttribute_string ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string ("empty") ;
      }
      GALGAS_location location_7 (var_elseLabel.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, GALGAS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 378))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 378)) ;
    }
    nt_baseline_5F_instruction_5F_list_ (var_elseInstructionList, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfElsePartLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 383)) ;
  outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_structured_5F_if::constructor_new (var_instructionLocation, var_structured_5F_if_5F_condition, var_thenInstructionList, var_elseInstructionList, var_endOfElsePartLocation  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 384)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_expression_parse (inCompiler) ;
  nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_baseline_5F_syntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_elsif) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 355)) ;
    switch (select_baseline_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 360)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 370)) ;
    switch (select_baseline_5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 375)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_expression_indexing (inCompiler) ;
  nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_baseline_5F_syntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_elsif) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 355)) ;
    switch (select_baseline_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 360)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_else) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 370)) ;
    switch (select_baseline_5F_syntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_label) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 375)) ;
    } break ;
    default:
      break ;
    }
    nt_baseline_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GALGAS_baseline_5F_instruction & outArgument_outInstruction,
                                                                                                C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_baseline_5F_syntax_23 (inCompiler)) {
  case 1: {
    GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code var_baseCode ;
    switch (select_baseline_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_addwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 398)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_ADDWF (SOURCE_FILE ("baseline_syntax.galgas", 399)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_andwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 401)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_ANDWF (SOURCE_FILE ("baseline_syntax.galgas", 402)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_comf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 404)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_COMF (SOURCE_FILE ("baseline_syntax.galgas", 405)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_decf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 407)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_DECF (SOURCE_FILE ("baseline_syntax.galgas", 408)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_incf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 410)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_INCF (SOURCE_FILE ("baseline_syntax.galgas", 411)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_iorwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 413)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_IORWF (SOURCE_FILE ("baseline_syntax.galgas", 414)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_movf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 416)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_MOVF (SOURCE_FILE ("baseline_syntax.galgas", 417)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_rlf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 419)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_RLF (SOURCE_FILE ("baseline_syntax.galgas", 420)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_rrf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 422)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_RRF (SOURCE_FILE ("baseline_syntax.galgas", 423)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_subwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 425)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_SUBWF (SOURCE_FILE ("baseline_syntax.galgas", 426)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_swapf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 428)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_SWAPF (SOURCE_FILE ("baseline_syntax.galgas", 429)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_xorwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 431)) ;
      var_baseCode = GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::constructor_XORWF (SOURCE_FILE ("baseline_syntax.galgas", 432)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 434)) ;
    GALGAS_registerExpression var_registerExpression ;
    nt_register_5F_parsing_ (var_registerExpression, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_FD::constructor_new (var_instructionLocation, var_baseCode, var_registerExpression, var_W_5F_isDestination  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 439)) ;
  } break ;
  case 2: {
    GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code var_FAinstruction ;
    switch (select_baseline_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_clrf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 447)) ;
      var_FAinstruction = GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("baseline_syntax.galgas", 448)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_movwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 450)) ;
      var_FAinstruction = GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("baseline_syntax.galgas", 451)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 453)) ;
    GALGAS_registerExpression var_registerExpression ;
    nt_register_5F_parsing_ (var_registerExpression, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_F::constructor_new (var_instructionLocation, var_FAinstruction, var_registerExpression  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 456)) ;
  } break ;
  case 3: {
    GALGAS_baseline_5F_bit_5F_oriented_5F_op var_bitOrientedOp ;
    switch (select_baseline_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_bcf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 463)) ;
      var_bitOrientedOp = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BCF (SOURCE_FILE ("baseline_syntax.galgas", 463)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_bsf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 465)) ;
      var_bitOrientedOp = GALGAS_baseline_5F_bit_5F_oriented_5F_op::constructor_BSF (SOURCE_FILE ("baseline_syntax.galgas", 465)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 467)) ;
    GALGAS_registerExpression var_registerExpression ;
    nt_register_5F_parsing_ (var_registerExpression, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 470)) ;
    GALGAS_bitNumberExpression var_bitNumberExpression ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_FB::constructor_new (var_instructionLocation, var_bitOrientedOp, var_registerExpression, var_bitNumberExpression  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 473)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_goto) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 479)) ;
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 480)) ;
    GALGAS_lstring var_targetLabelName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 481)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_GOTO::constructor_new (var_instructionLocation, var_targetLabelName  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 482)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_call) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 486)) ;
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 487)) ;
    GALGAS_lstring var_targetLabelName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 488)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_CALL::constructor_new (var_instructionLocation, var_targetLabelName  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 489)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_clrw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 493)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 494)), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_CLRW (SOURCE_FILE ("baseline_syntax.galgas", 494))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 494)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_clrwdt) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 496)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 497)), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_CLRWDT (SOURCE_FILE ("baseline_syntax.galgas", 497))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 497)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_nop) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 499)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 500)), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_NOP (SOURCE_FILE ("baseline_syntax.galgas", 500))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 500)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_option) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 502)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 503)), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_OPTION_5F_ (SOURCE_FILE ("baseline_syntax.galgas", 503))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 503)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_sleep) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 505)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 506)), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::constructor_SLEEP (SOURCE_FILE ("baseline_syntax.galgas", 506))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 506)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_tris) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 508)) ;
    GALGAS_lstring var_operand = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 509)) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_TRIS::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 510)), var_operand  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 510)) ;
  } break ;
  case 12: {
    GALGAS_baseline_5F_literal_5F_instruction_5F_opcode var_literalInstruction ;
    switch (select_baseline_5F_syntax_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_andlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 514)) ;
      var_literalInstruction = GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_ANDLW (SOURCE_FILE ("baseline_syntax.galgas", 514)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_iorlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 516)) ;
      var_literalInstruction = GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_IORLW (SOURCE_FILE ("baseline_syntax.galgas", 516)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_movlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 518)) ;
      var_literalInstruction = GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_syntax.galgas", 518)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_xorlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 520)) ;
      var_literalInstruction = GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_XORLW (SOURCE_FILE ("baseline_syntax.galgas", 520)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_location var_instructionLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 522)) ;
    GALGAS_immediatExpression var_expression ;
    nt_immediate_5F_expression_ (var_expression, inCompiler) ;
    outArgument_outInstruction = GALGAS_baseline_5F_instruction_5F_literalOperation::constructor_new (var_instructionLocation, var_literalInstruction, var_expression  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 525)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_23 (inCompiler)) {
  case 1: {
    switch (select_baseline_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_addwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 398)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_andwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 401)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_comf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 404)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_decf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 407)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_incf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 410)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_iorwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 413)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_movf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 416)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_rlf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 419)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_rrf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 422)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_subwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 425)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_swapf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 428)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_xorwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 431)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_parse (inCompiler) ;
  } break ;
  case 2: {
    switch (select_baseline_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_clrf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 447)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_movwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 450)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 3: {
    switch (select_baseline_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_bcf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 463)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_bsf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 465)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 470)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_goto) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 479)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 481)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_call) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 486)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 488)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_clrw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 493)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_clrwdt) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 496)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_nop) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 499)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_option) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 502)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_sleep) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 505)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_tris) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 508)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 509)) ;
  } break ;
  case 12: {
    switch (select_baseline_5F_syntax_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_andlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 514)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_iorlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 516)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_movlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 518)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_xorlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 520)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_23 (inCompiler)) {
  case 1: {
    switch (select_baseline_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_addwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 398)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_andwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 401)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_comf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 404)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_decf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 407)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_incf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 410)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_iorwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 413)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_movf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 416)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_rlf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 419)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_rrf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 422)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_subwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 425)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_swapf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 428)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_xorwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 431)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    switch (select_baseline_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_clrf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 447)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_movwf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 450)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_baseline_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_bcf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 463)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_bsf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 465)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 470)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_goto) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 479)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 481)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_call) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 486)) ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 488)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_clrw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 493)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_clrwdt) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 496)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_nop) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 499)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_option) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 502)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_sleep) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 505)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_tris) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 508)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 509)) ;
  } break ;
  case 12: {
    switch (select_baseline_5F_syntax_27 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_andlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 514)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_iorlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 516)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_movlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 518)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_xorlw) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 520)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GALGAS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 536)) ;
  GALGAS_baseline_5F_conditionExpression var_condition ;
  nt_baseline_5F_condition_5F_factor_ (var_condition, inCompiler) ;
  outArgument_outCondition = GALGAS_baseline_5F_negateCondition::constructor_new (var_condition  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 539)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 536)) ;
  nt_baseline_5F_condition_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 536)) ;
  nt_baseline_5F_condition_5F_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GALGAS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_baseline_5F_condition_5F_expression_ (outArgument_outCondition, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GALGAS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                              C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  switch (select_baseline_5F_syntax_28 (inCompiler)) {
  case 1: {
    GALGAS_bool var_isIncrement ;
    switch (select_baseline_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_incf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 556)) ;
      var_isIncrement = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_decf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 558)) ;
      var_isIncrement = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression ;
    nt_register_5F_parsing_ (var_registerExpression, inCompiler) ;
    GALGAS_bool var_W_5F_isDestination ;
    switch (select_baseline_5F_syntax_30 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 566)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_w) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 566)) ;
      var_W_5F_isDestination = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_conditionString = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 568)) ;
    GALGAS_string var_condition = var_conditionString.getter_string (SOURCE_FILE ("baseline_syntax.galgas", 569)).getter_uppercaseString (SOURCE_FILE ("baseline_syntax.galgas", 569)) ;
    GALGAS_bool var_branchIfZero ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_condition.objectCompare (GALGAS_string ("Z"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_branchIfZero = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_condition.objectCompare (GALGAS_string ("NZ"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_branchIfZero = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_2 (var_conditionString.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("invalid '").add_operation (var_conditionString.getter_string (SOURCE_FILE ("baseline_syntax.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 576)).add_operation (GALGAS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("baseline_syntax.galgas", 576))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 576)) ;
        var_branchIfZero.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GALGAS_baseline_5F_incDecRegisterInCondition::constructor_new (var_registerExpression, var_isIncrement, var_W_5F_isDestination, var_branchIfZero  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 580)) ;
  } break ;
  case 2: {
    GALGAS_registerExpression var_registerExpression ;
    GALGAS_bitNumberExpression var_bitNumberExpression ;
    nt_register_5F_parsing_ (var_registerExpression, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 590)) ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression, inCompiler) ;
    outArgument_outCondition = GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::constructor_new (var_registerExpression, var_bitNumberExpression  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 619)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_28 (inCompiler)) {
  case 1: {
    switch (select_baseline_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_incf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 556)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_decf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 558)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_baseline_5F_syntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 566)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_w) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 566)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 568)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 590)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_baseline_5F_syntax_28 (inCompiler)) {
  case 1: {
    switch (select_baseline_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_incf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 556)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_decf) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 558)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_baseline_5F_syntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 566)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_w) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 566)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 568)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 590)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GALGAS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                                  C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 631)) ;
  nt_baseline_5F_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 635)) ;
      GALGAS_baseline_5F_conditionExpression var_c ;
      nt_baseline_5F_condition_5F_term_ (var_c, inCompiler) ;
      GALGAS_baseline_5F_conditionExpression var_rc = GALGAS_baseline_5F_negateCondition::constructor_new (var_c  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 638)) ;
      GALGAS_baseline_5F_conditionExpression var_lc = GALGAS_baseline_5F_negateCondition::constructor_new (outArgument_outCondition  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 639)) ;
      outArgument_outCondition = GALGAS_baseline_5F_negateCondition::constructor_new (GALGAS_baseline_5F_andCondition::constructor_new (var_lc, var_rc  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 640))  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 640)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 642)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 631)) ;
  nt_baseline_5F_condition_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 635)) ;
      nt_baseline_5F_condition_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 642)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 631)) ;
  nt_baseline_5F_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7C_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 635)) ;
      nt_baseline_5F_condition_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 642)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GALGAS_baseline_5F_conditionExpression & outArgument_outCondition,
                                                                                             C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_baseline_5F_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__26_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 652)) ;
      GALGAS_baseline_5F_conditionExpression var_c ;
      nt_baseline_5F_condition_5F_factor_ (var_c, inCompiler) ;
      outArgument_outCondition = GALGAS_baseline_5F_andCondition::constructor_new (outArgument_outCondition, var_c  COMMA_SOURCE_FILE ("baseline_syntax.galgas", 655)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__26_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 652)) ;
      nt_baseline_5F_condition_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_baseline_5F_syntax::rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_baseline_5F_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_baseline_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__26_) COMMA_SOURCE_FILE ("baseline_syntax.galgas", 652)) ;
      nt_baseline_5F_condition_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_configuration_5F_definition_i0_ (GALGAS_configDefinitionList & ioArgument_ioConfigDefinitionList,
                                                                    C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_configuration) COMMA_SOURCE_FILE ("communs.galgas", 8)) ;
  GALGAS_location var_defLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 9)) ;
  GALGAS_configSettingList var_settingList = GALGAS_configSettingList::constructor_emptyList (SOURCE_FILE ("communs.galgas", 10)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("communs.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_settingName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 14)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("communs.galgas", 15)) ;
      GALGAS_lstring var_settingValue ;
      switch (select_communs_1 (inCompiler)) {
      case 1: {
        var_settingValue = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 18)) ;
      } break ;
      case 2: {
        var_settingValue = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string) COMMA_SOURCE_FILE ("communs.galgas", 20)) ;
      } break ;
      default:
        break ;
      }
      var_settingList.addAssign_operation (var_settingName, var_settingValue  COMMA_SOURCE_FILE ("communs.galgas", 22)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("communs.galgas", 24)) ;
  ioArgument_ioConfigDefinitionList.addAssign_operation (var_defLocation, var_settingList  COMMA_SOURCE_FILE ("communs.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_configuration_5F_definition_i0_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_configuration) COMMA_SOURCE_FILE ("communs.galgas", 8)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("communs.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 14)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("communs.galgas", 15)) ;
      switch (select_communs_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 18)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string) COMMA_SOURCE_FILE ("communs.galgas", 20)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("communs.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_configuration_5F_definition_i0_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_configuration) COMMA_SOURCE_FILE ("communs.galgas", 8)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("communs.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 14)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("communs.galgas", 15)) ;
      switch (select_communs_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 18)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_string) COMMA_SOURCE_FILE ("communs.galgas", 20)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("communs.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_declaration_5F_in_5F_ram_i1_ (GALGAS_declarationInRam & outArgument_outDeclaration,
                                                                 C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outDeclaration.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_byte) COMMA_SOURCE_FILE ("communs.galgas", 33)) ;
  GALGAS_lstring var_name = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_variableDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 34)) ;
  GALGAS_luint var_size ;
  switch (select_communs_2 (inCompiler)) {
  case 1: {
    var_size = GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 1U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 37))  COMMA_SOURCE_FILE ("communs.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 39)) ;
    var_size = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 40)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bitSliceTable var_bitSliceTable = GALGAS_bitSliceTable::constructor_emptyMap (SOURCE_FILE ("communs.galgas", 43)) ;
  GALGAS_string var_bitDefinitionString ;
  switch (select_communs_3 (inCompiler)) {
  case 1: {
    var_bitDefinitionString = GALGAS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C_) COMMA_SOURCE_FILE ("communs.galgas", 48)) ;
    var_bitDefinitionString = GALGAS_string (" <") ;
    GALGAS_sint var_sliceIndex = GALGAS_sint ((int32_t) 8L) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_communs_5 (inCompiler)) {
      case 1: {
        GALGAS_uint var_sliceWidth = GALGAS_uint ((uint32_t) 0U) ;
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          GALGAS_uint var_sliceBase = GALGAS_uint ((uint32_t) 0U) ;
          const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_sliceIndex.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_sliceBase = var_sliceIndex.getter_uint (inCompiler COMMA_SOURCE_FILE ("communs.galgas", 57)) ;
          }
          GALGAS_lstring var_sliceName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 59)) ;
          switch (select_communs_7 (inCompiler)) {
          case 1: {
            const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_sliceWidth.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_sliceWidth.objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("communs.galgas", 61)).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_location location_4 (var_sliceName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_4, GALGAS_string ("a slice of 1 bit is expected for '").add_operation (var_sliceName.getter_string (SOURCE_FILE ("communs.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 62)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 62))  COMMA_SOURCE_FILE ("communs.galgas", 62)) ;
            }
            var_sliceWidth = GALGAS_uint ((uint32_t) 1U) ;
            var_bitDefinitionString.plusAssign_operation(var_sliceName.getter_string (SOURCE_FILE ("communs.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 65)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 67)) ;
            GALGAS_luint var_sliceSize = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 68)) ;
            const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_sliceWidth.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, var_sliceWidth.objectCompare (var_sliceSize.getter_uint (SOURCE_FILE ("communs.galgas", 69)))) COMMA_SOURCE_FILE ("communs.galgas", 69)).boolEnum () ;
            if (kBoolTrue == test_5) {
              GALGAS_location location_6 (var_sliceName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_6, GALGAS_string ("a slice of ").add_operation (var_sliceWidth.getter_string (SOURCE_FILE ("communs.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 70)).add_operation (GALGAS_string (" bits is expected for '"), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 70)).add_operation (var_sliceName.getter_string (SOURCE_FILE ("communs.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 70)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 70))  COMMA_SOURCE_FILE ("communs.galgas", 70)) ;
            }
            var_sliceWidth = var_sliceSize.getter_uint (SOURCE_FILE ("communs.galgas", 72)) ;
            var_sliceBase = var_sliceBase.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 73)).substract_operation (var_sliceSize.getter_uint (SOURCE_FILE ("communs.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 73)) ;
            var_bitDefinitionString.plusAssign_operation(var_sliceName.getter_string (SOURCE_FILE ("communs.galgas", 74)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 74)).add_operation (var_sliceSize.getter_uint (SOURCE_FILE ("communs.galgas", 74)).getter_string (SOURCE_FILE ("communs.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 74)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 74)), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 74)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 75)) ;
          } break ;
          default:
            break ;
          }
          GALGAS_uint var_base = GALGAS_uint ((uint32_t) 0U) ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsSupOrEqual, var_sliceIndex.objectCompare (var_sliceWidth.getter_sint (inCompiler COMMA_SOURCE_FILE ("communs.galgas", 78)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            var_base = var_sliceIndex.getter_uint (inCompiler COMMA_SOURCE_FILE ("communs.galgas", 79)).substract_operation (var_sliceWidth, inCompiler COMMA_SOURCE_FILE ("communs.galgas", 79)) ;
          }
          {
          var_bitSliceTable.setter_insertKey (var_sliceName, var_base, var_sliceWidth, inCompiler COMMA_SOURCE_FILE ("communs.galgas", 81)) ;
          }
          switch (select_communs_6 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2F_) COMMA_SOURCE_FILE ("communs.galgas", 83)) ;
            var_bitDefinitionString.plusAssign_operation(GALGAS_string ("/"), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 84)) ;
          } break ;
          default:
            repeatFlag_1 = false ;
            break ;
          }
        }
        var_sliceIndex = var_sliceIndex.substract_operation (var_sliceWidth.getter_sint (inCompiler COMMA_SOURCE_FILE ("communs.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 86)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("communs.galgas", 88)) ;
        var_bitDefinitionString.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 89)) ;
        var_sliceIndex.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 90)) ;
      } break ;
      case 3: {
        GALGAS_luint var_bitCount = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 92)) ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_bitCount.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          inCompiler->emitSemanticError (var_bitCount.mAttribute_location, GALGAS_string ("the bit count should be > 0")  COMMA_SOURCE_FILE ("communs.galgas", 94)) ;
        }
        cEnumerator_range enumerator_2707 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_bitCount.mAttribute_uint.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 96))), kEnumeration_up) ;
        while (enumerator_2707.hasCurrentObject ()) {
          var_bitDefinitionString.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 97)) ;
          if (enumerator_2707.hasNextObject ()) {
            var_bitDefinitionString.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 98)) ;
          }
          enumerator_2707.gotoNextObject () ;
        }
        var_sliceIndex = var_sliceIndex.substract_operation (var_bitCount.mAttribute_uint.getter_sint (inCompiler COMMA_SOURCE_FILE ("communs.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 100)) ;
      } break ;
      default:
        break ;
      }
      switch (select_communs_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("communs.galgas", 103)) ;
        var_bitDefinitionString.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 104)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_sliceIndex.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_location location_10 (var_name.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_10, GALGAS_string ("Incorrect bit definition for register '").add_operation (var_name.getter_string (SOURCE_FILE ("communs.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 107)).add_operation (GALGAS_string ("': "), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 107)).add_operation (GALGAS_sint ((int32_t) 8L).substract_operation (var_sliceIndex, inCompiler COMMA_SOURCE_FILE ("communs.galgas", 107)).getter_string (SOURCE_FILE ("communs.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 107)).add_operation (GALGAS_string (" bits (s) are defined, instead of 8"), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 107))  COMMA_SOURCE_FILE ("communs.galgas", 107)) ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E_) COMMA_SOURCE_FILE ("communs.galgas", 109)) ;
    var_bitDefinitionString.plusAssign_operation(GALGAS_string (">"), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outDeclaration = GALGAS_byteDeclarationInRam::constructor_new (var_name, var_size, var_bitSliceTable, var_bitDefinitionString  COMMA_SOURCE_FILE ("communs.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_declaration_5F_in_5F_ram_i1_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_byte) COMMA_SOURCE_FILE ("communs.galgas", 33)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_variableDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 34)) ;
  switch (select_communs_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 39)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 40)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  switch (select_communs_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C_) COMMA_SOURCE_FILE ("communs.galgas", 48)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_communs_5 (inCompiler)) {
      case 1: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 59)) ;
          switch (select_communs_7 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 67)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 68)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 75)) ;
          } break ;
          default:
            break ;
          }
          switch (select_communs_6 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2F_) COMMA_SOURCE_FILE ("communs.galgas", 83)) ;
          } break ;
          default:
            repeatFlag_1 = false ;
            break ;
          }
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("communs.galgas", 88)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 92)) ;
      } break ;
      default:
        break ;
      }
      switch (select_communs_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("communs.galgas", 103)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E_) COMMA_SOURCE_FILE ("communs.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_declaration_5F_in_5F_ram_i1_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_byte) COMMA_SOURCE_FILE ("communs.galgas", 33)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_variableDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 34)) ;
  switch (select_communs_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 39)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 40)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  switch (select_communs_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C_) COMMA_SOURCE_FILE ("communs.galgas", 48)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_communs_5 (inCompiler)) {
      case 1: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 59)) ;
          switch (select_communs_7 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 67)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 68)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 75)) ;
          } break ;
          default:
            break ;
          }
          switch (select_communs_6 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2F_) COMMA_SOURCE_FILE ("communs.galgas", 83)) ;
          } break ;
          default:
            repeatFlag_1 = false ;
            break ;
          }
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("communs.galgas", 88)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 92)) ;
      } break ;
      default:
        break ;
      }
      switch (select_communs_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("communs.galgas", 103)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E_) COMMA_SOURCE_FILE ("communs.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_ram_5F_definition_i2_ (GALGAS_ramDefinitionList & ioArgument_ioRamDefinitionList,
                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_ram) COMMA_SOURCE_FILE ("communs.galgas", 120)) ;
  GALGAS_lstring var_bankName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("communs.galgas", 122)) ;
  GALGAS_declarationInRamList var_declarationInRamList = GALGAS_declarationInRamList::constructor_emptyList (SOURCE_FILE ("communs.galgas", 123)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_8 (inCompiler)) {
    case 2: {
      GALGAS_declarationInRam var_declaration ;
      nt_declaration_5F_in_5F_ram_ (var_declaration, inCompiler) ;
      var_declarationInRamList.addAssign_operation (var_declaration  COMMA_SOURCE_FILE ("communs.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioRamDefinitionList.addAssign_operation (var_bankName, var_declarationInRamList  COMMA_SOURCE_FILE ("communs.galgas", 129)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("communs.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_ram_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_ram) COMMA_SOURCE_FILE ("communs.galgas", 120)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("communs.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_8 (inCompiler)) {
    case 2: {
      nt_declaration_5F_in_5F_ram_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("communs.galgas", 130)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_ram_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_ram) COMMA_SOURCE_FILE ("communs.galgas", 120)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("communs.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_8 (inCompiler)) {
    case 2: {
      nt_declaration_5F_in_5F_ram_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("communs.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_constant_5F_definition_i3_ (GALGAS_constantDefinitionList & ioArgument_ioConstantDefinitionList,
                                                               C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_const) COMMA_SOURCE_FILE ("communs.galgas", 137)) ;
  GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_constantDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 138)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("communs.galgas", 139)) ;
  GALGAS_immediatExpression var_expression ;
  nt_immediate_5F_expression_ (var_expression, inCompiler) ;
  ioArgument_ioConstantDefinitionList.addAssign_operation (var_constantName, var_expression  COMMA_SOURCE_FILE ("communs.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_constant_5F_definition_i3_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_const) COMMA_SOURCE_FILE ("communs.galgas", 137)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_constantDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 138)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("communs.galgas", 139)) ;
  nt_immediate_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_constant_5F_definition_i3_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_const) COMMA_SOURCE_FILE ("communs.galgas", 137)) ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_constantDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 138)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("communs.galgas", 139)) ;
  nt_immediate_5F_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_expression_i4_ (GALGAS_immediatExpression & outArgument_outExpression,
                                                                C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_immediate_5F_bitwise_5F_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7C_) COMMA_SOURCE_FILE ("communs.galgas", 150)) ;
      GALGAS_immediatExpression var_rightExpression ;
      nt_immediate_5F_bitwise_5F_term_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_immediatOr::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 152)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5E_) COMMA_SOURCE_FILE ("communs.galgas", 154)) ;
      GALGAS_immediatExpression var_rightExpression ;
      nt_immediate_5F_bitwise_5F_term_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_immediatXor::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 156)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_expression_i4_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_bitwise_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7C_) COMMA_SOURCE_FILE ("communs.galgas", 150)) ;
      nt_immediate_5F_bitwise_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5E_) COMMA_SOURCE_FILE ("communs.galgas", 154)) ;
      nt_immediate_5F_bitwise_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_expression_i4_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_bitwise_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7C_) COMMA_SOURCE_FILE ("communs.galgas", 150)) ;
      nt_immediate_5F_bitwise_5F_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5E_) COMMA_SOURCE_FILE ("communs.galgas", 154)) ;
      nt_immediate_5F_bitwise_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_term_i5_ (GALGAS_immediatExpression & outArgument_outExpression,
                                                                     C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_immediate_5F_bitwise_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__26_) COMMA_SOURCE_FILE ("communs.galgas", 166)) ;
      GALGAS_immediatExpression var_rightExpression ;
      nt_immediate_5F_bitwise_5F_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_immediatAnd::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 169)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_term_i5_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_bitwise_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__26_) COMMA_SOURCE_FILE ("communs.galgas", 166)) ;
      nt_immediate_5F_bitwise_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_term_i5_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_bitwise_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__26_) COMMA_SOURCE_FILE ("communs.galgas", 166)) ;
      nt_immediate_5F_bitwise_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_factor_i6_ (GALGAS_immediatExpression & outArgument_outExpression,
                                                                       C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_immediate_5F_term_ (outArgument_outExpression, inCompiler) ;
  switch (select_communs_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3D__3D_) COMMA_SOURCE_FILE ("communs.galgas", 179)) ;
    GALGAS_immediatExpression var_rightExpression ;
    nt_immediate_5F_term_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_immediatEqualTest::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 182)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__21__3D_) COMMA_SOURCE_FILE ("communs.galgas", 184)) ;
    GALGAS_immediatExpression var_rightExpression ;
    nt_immediate_5F_term_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_immediatNotEqualTest::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 187)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_) COMMA_SOURCE_FILE ("communs.galgas", 189)) ;
    GALGAS_immediatExpression var_rightExpression ;
    nt_immediate_5F_term_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_immediatGreaterOrEqualTest::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 192)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_) COMMA_SOURCE_FILE ("communs.galgas", 194)) ;
    GALGAS_immediatExpression var_rightExpression ;
    nt_immediate_5F_term_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_immediatLowerOrEqualTest::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 197)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E_) COMMA_SOURCE_FILE ("communs.galgas", 199)) ;
    GALGAS_immediatExpression var_rightExpression ;
    nt_immediate_5F_term_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_immediatGreaterTest::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 202)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C_) COMMA_SOURCE_FILE ("communs.galgas", 204)) ;
    GALGAS_immediatExpression var_rightExpression ;
    nt_immediate_5F_term_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_immediatLowerTest::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 207)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_factor_i6_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_term_parse (inCompiler) ;
  switch (select_communs_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3D__3D_) COMMA_SOURCE_FILE ("communs.galgas", 179)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__21__3D_) COMMA_SOURCE_FILE ("communs.galgas", 184)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_) COMMA_SOURCE_FILE ("communs.galgas", 189)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_) COMMA_SOURCE_FILE ("communs.galgas", 194)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E_) COMMA_SOURCE_FILE ("communs.galgas", 199)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C_) COMMA_SOURCE_FILE ("communs.galgas", 204)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_factor_i6_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_term_indexing (inCompiler) ;
  switch (select_communs_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3D__3D_) COMMA_SOURCE_FILE ("communs.galgas", 179)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__21__3D_) COMMA_SOURCE_FILE ("communs.galgas", 184)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E__3D_) COMMA_SOURCE_FILE ("communs.galgas", 189)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C__3D_) COMMA_SOURCE_FILE ("communs.galgas", 194)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E_) COMMA_SOURCE_FILE ("communs.galgas", 199)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C_) COMMA_SOURCE_FILE ("communs.galgas", 204)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_term_i7_ (GALGAS_immediatExpression & outArgument_outExpression,
                                                          C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_immediate_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2B_) COMMA_SOURCE_FILE ("communs.galgas", 217)) ;
      GALGAS_immediatExpression var_rightExpression ;
      nt_immediate_5F_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_immediatAdd::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 220)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("communs.galgas", 222)) ;
      GALGAS_immediatExpression var_rightExpression ;
      nt_immediate_5F_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_immediatSub::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 225)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C__3C_) COMMA_SOURCE_FILE ("communs.galgas", 227)) ;
      GALGAS_immediatExpression var_rightExpression ;
      nt_immediate_5F_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_immediatLeftShift::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 230)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E__3E_) COMMA_SOURCE_FILE ("communs.galgas", 232)) ;
      GALGAS_immediatExpression var_rightExpression ;
      nt_immediate_5F_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_immediatRightShift::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 235)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_term_i7_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2B_) COMMA_SOURCE_FILE ("communs.galgas", 217)) ;
      nt_immediate_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("communs.galgas", 222)) ;
      nt_immediate_5F_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C__3C_) COMMA_SOURCE_FILE ("communs.galgas", 227)) ;
      nt_immediate_5F_factor_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E__3E_) COMMA_SOURCE_FILE ("communs.galgas", 232)) ;
      nt_immediate_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_term_i7_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2B_) COMMA_SOURCE_FILE ("communs.galgas", 217)) ;
      nt_immediate_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("communs.galgas", 222)) ;
      nt_immediate_5F_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3C__3C_) COMMA_SOURCE_FILE ("communs.galgas", 227)) ;
      nt_immediate_5F_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3E__3E_) COMMA_SOURCE_FILE ("communs.galgas", 232)) ;
      nt_immediate_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_factor_i8_ (GALGAS_immediatExpression & outArgument_outExpression,
                                                            C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_immediate_5F_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2A_) COMMA_SOURCE_FILE ("communs.galgas", 245)) ;
      GALGAS_immediatExpression var_rightExpression ;
      nt_immediate_5F_primary_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_immediatMul::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 248)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__25_) COMMA_SOURCE_FILE ("communs.galgas", 250)) ;
      GALGAS_immediatExpression var_rightExpression ;
      nt_immediate_5F_primary_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_immediatMod::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 253)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2F_) COMMA_SOURCE_FILE ("communs.galgas", 255)) ;
      GALGAS_immediatExpression var_rightExpression ;
      nt_immediate_5F_primary_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_immediatDiv::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("communs.galgas", 258)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2A_) COMMA_SOURCE_FILE ("communs.galgas", 245)) ;
      nt_immediate_5F_primary_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__25_) COMMA_SOURCE_FILE ("communs.galgas", 250)) ;
      nt_immediate_5F_primary_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2F_) COMMA_SOURCE_FILE ("communs.galgas", 255)) ;
      nt_immediate_5F_primary_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2A_) COMMA_SOURCE_FILE ("communs.galgas", 245)) ;
      nt_immediate_5F_primary_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__25_) COMMA_SOURCE_FILE ("communs.galgas", 250)) ;
      nt_immediate_5F_primary_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2F_) COMMA_SOURCE_FILE ("communs.galgas", 255)) ;
      nt_immediate_5F_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_primary_i9_ (GALGAS_immediatExpression & outArgument_outExpression,
                                                             C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  switch (select_communs_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("communs.galgas", 267)) ;
    GALGAS_immediatExpression var_expression ;
    nt_immediate_5F_primary_ (var_expression, inCompiler) ;
    outArgument_outExpression = GALGAS_immediatNegate::constructor_new (var_expression  COMMA_SOURCE_FILE ("communs.galgas", 270)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7E_) COMMA_SOURCE_FILE ("communs.galgas", 272)) ;
    GALGAS_immediatExpression var_expression ;
    nt_immediate_5F_primary_ (var_expression, inCompiler) ;
    outArgument_outExpression = GALGAS_immediatComplement::constructor_new (var_expression  COMMA_SOURCE_FILE ("communs.galgas", 275)) ;
  } break ;
  case 3: {
    GALGAS_luint var_constant = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 277)) ;
    outArgument_outExpression = GALGAS_immediatInteger::constructor_new (var_constant  COMMA_SOURCE_FILE ("communs.galgas", 278)) ;
  } break ;
  case 4: {
    GALGAS_lchar var_literalCharValue = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_char) COMMA_SOURCE_FILE ("communs.galgas", 280)) ;
    outArgument_outExpression = GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (var_literalCharValue.getter_char (SOURCE_FILE ("communs.galgas", 281)).getter_uint (SOURCE_FILE ("communs.galgas", 281)), var_literalCharValue.getter_location (SOURCE_FILE ("communs.galgas", 281))  COMMA_SOURCE_FILE ("communs.galgas", 281))  COMMA_SOURCE_FILE ("communs.galgas", 281)) ;
  } break ;
  case 5: {
    GALGAS_lstring var_registerName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 283)) ;
    GALGAS_immediatExpression var_offset ;
    GALGAS_location var_endOfOffsetExpression ;
    switch (select_communs_15 (inCompiler)) {
    case 1: {
      var_offset = GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 287))  COMMA_SOURCE_FILE ("communs.galgas", 287))  COMMA_SOURCE_FILE ("communs.galgas", 287)) ;
      var_endOfOffsetExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 288)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 290)) ;
      nt_immediate_5F_expression_ (var_offset, inCompiler) ;
      var_endOfOffsetExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 292)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 293)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_registerExpression var_registerExpression = GALGAS_registerExpression::constructor_new (var_registerName, var_offset, var_endOfOffsetExpression  COMMA_SOURCE_FILE ("communs.galgas", 303)) ;
    outArgument_outExpression = GALGAS_immediatRegister::constructor_new (var_registerExpression  COMMA_SOURCE_FILE ("communs.galgas", 308)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("communs.galgas", 310)) ;
    nt_immediate_5F_expression_ (outArgument_outExpression, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("communs.galgas", 312)) ;
  } break ;
  case 7: {
    GALGAS_lstring var_registerName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 314)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("communs.galgas", 315)) ;
    GALGAS_immediatSliceExpressionList var_sliceExpressionList = GALGAS_immediatSliceExpressionList::constructor_emptyList (SOURCE_FILE ("communs.galgas", 316)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_sliceName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 318)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("communs.galgas", 319)) ;
      GALGAS_immediatExpression var_expression ;
      nt_immediate_5F_expression_ (var_expression, inCompiler) ;
      var_sliceExpressionList.addAssign_operation (var_sliceName, var_expression  COMMA_SOURCE_FILE ("communs.galgas", 322)) ;
      switch (select_communs_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("communs.galgas", 324)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("communs.galgas", 326)) ;
    outArgument_outExpression = GALGAS_immediatSlice::constructor_new (var_registerName, var_sliceExpressionList  COMMA_SOURCE_FILE ("communs.galgas", 327)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_primary_i9_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_communs_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("communs.galgas", 267)) ;
    nt_immediate_5F_primary_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7E_) COMMA_SOURCE_FILE ("communs.galgas", 272)) ;
    nt_immediate_5F_primary_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 277)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_char) COMMA_SOURCE_FILE ("communs.galgas", 280)) ;
  } break ;
  case 5: {
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 283)) ;
    switch (select_communs_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 290)) ;
      nt_immediate_5F_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 293)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("communs.galgas", 310)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("communs.galgas", 312)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 314)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("communs.galgas", 315)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 318)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("communs.galgas", 319)) ;
      nt_immediate_5F_expression_parse (inCompiler) ;
      switch (select_communs_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("communs.galgas", 324)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("communs.galgas", 326)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_immediate_5F_primary_i9_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_communs_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2D_) COMMA_SOURCE_FILE ("communs.galgas", 267)) ;
    nt_immediate_5F_primary_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__7E_) COMMA_SOURCE_FILE ("communs.galgas", 272)) ;
    nt_immediate_5F_primary_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 277)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_literal_5F_char) COMMA_SOURCE_FILE ("communs.galgas", 280)) ;
  } break ;
  case 5: {
    inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 283)) ;
    switch (select_communs_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 290)) ;
      nt_immediate_5F_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 293)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("communs.galgas", 310)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("communs.galgas", 312)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 314)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("communs.galgas", 315)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 318)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("communs.galgas", 319)) ;
      nt_immediate_5F_expression_indexing (inCompiler) ;
      switch (select_communs_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("communs.galgas", 324)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("communs.galgas", 326)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_register_5F_parsing_i10_ (GALGAS_registerExpression & outArgument_outRegisterExpression,
                                                             C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outRegisterExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_registerName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 334)) ;
  GALGAS_immediatExpression var_offset ;
  GALGAS_location var_endOfOffsetExpression ;
  switch (select_communs_17 (inCompiler)) {
  case 1: {
    var_offset = GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 338))  COMMA_SOURCE_FILE ("communs.galgas", 338))  COMMA_SOURCE_FILE ("communs.galgas", 338)) ;
    var_endOfOffsetExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 339)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 341)) ;
    nt_immediate_5F_expression_ (var_offset, inCompiler) ;
    var_endOfOffsetExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 343)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 344)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outRegisterExpression = GALGAS_registerExpression::constructor_new (var_registerName, var_offset, var_endOfOffsetExpression  COMMA_SOURCE_FILE ("communs.galgas", 346)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_register_5F_parsing_i10_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 334)) ;
  switch (select_communs_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 341)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 344)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_register_5F_parsing_i10_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 334)) ;
  switch (select_communs_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 341)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 344)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i11_ (GALGAS_bitNumberExpression & outArgument_outBitNumber,
                                                                  C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBitNumber.drop () ; // Release 'out' argument
  GALGAS_lstring var_bitNumberLabel = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 356)) ;
  GALGAS_luint var_bitIndex ;
  switch (select_communs_18 (inCompiler)) {
  case 1: {
    var_bitIndex = GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 359))  COMMA_SOURCE_FILE ("communs.galgas", 359)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 361)) ;
    var_bitIndex = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 362)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 363)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outBitNumber = GALGAS_bitNumberLabelValue::constructor_new (var_bitNumberLabel, var_bitIndex  COMMA_SOURCE_FILE ("communs.galgas", 365)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i11_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 356)) ;
  switch (select_communs_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 361)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 362)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 363)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i11_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("communs.galgas", 356)) ;
  switch (select_communs_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("communs.galgas", 361)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 362)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("communs.galgas", 363)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i12_ (GALGAS_bitNumberExpression & outArgument_outBitNumber,
                                                                  C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBitNumber.drop () ; // Release 'out' argument
  GALGAS_luint var_bitIndex = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 371)) ;
  outArgument_outBitNumber = GALGAS_bitNumberLiteralValue::constructor_new (var_bitIndex  COMMA_SOURCE_FILE ("communs.galgas", 372)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i12_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 371)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i12_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("communs.galgas", 371)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i13_ (GALGAS_bitNumberExpression & outArgument_outBitNumber,
                                                                  C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBitNumber.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("communs.galgas", 378)) ;
  GALGAS_immediatExpression var_bitNumberExpression ;
  nt_immediate_5F_expression_ (var_bitNumberExpression, inCompiler) ;
  GALGAS_location var_endOfExpression = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 380)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("communs.galgas", 381)) ;
  outArgument_outBitNumber = GALGAS_bitNumberLiteralExpression::constructor_new (var_bitNumberExpression, var_endOfExpression  COMMA_SOURCE_FILE ("communs.galgas", 382)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i13_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("communs.galgas", 378)) ;
  nt_immediate_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("communs.galgas", 381)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i13_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("communs.galgas", 378)) ;
  nt_immediate_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("communs.galgas", 381)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_optional_5F_w_5F_as_5F_dest_i14_ (GALGAS_bool & outArgument_out_5F_W_5F_isDestination,
                                                                     C_Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_out_5F_W_5F_isDestination.drop () ; // Release 'out' argument
  switch (select_communs_19 (inCompiler)) {
  case 1: {
    outArgument_out_5F_W_5F_isDestination = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("communs.galgas", 391)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_w) COMMA_SOURCE_FILE ("communs.galgas", 392)) ;
    outArgument_out_5F_W_5F_isDestination = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_optional_5F_w_5F_as_5F_dest_i14_parse (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_communs_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("communs.galgas", 391)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_w) COMMA_SOURCE_FILE ("communs.galgas", 392)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_communs::rule_communs_optional_5F_w_5F_as_5F_dest_i14_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_communs_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("communs.galgas", 391)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_piccolo_5F_lexique::kToken_w) COMMA_SOURCE_FILE ("communs.galgas", 392)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_baseline_5F_declaredRoutineMap::cMapElement_baseline_5F_declaredRoutineMap (const GALGAS_lstring & inKey
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_baseline_5F_declaredRoutineMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_baseline_5F_declaredRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_baseline_5F_declaredRoutineMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_baseline_5F_declaredRoutineMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_baseline_5F_declaredRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_baseline_5F_declaredRoutineMap * operand = (cMapElement_baseline_5F_declaredRoutineMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap::GALGAS_baseline_5F_declaredRoutineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap::GALGAS_baseline_5F_declaredRoutineMap (const GALGAS_baseline_5F_declaredRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap & GALGAS_baseline_5F_declaredRoutineMap::operator = (const GALGAS_baseline_5F_declaredRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::constructor_mapWithMapToOverride (const GALGAS_baseline_5F_declaredRoutineMap & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_declaredRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_baseline_5F_declaredRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baseline_5F_declaredRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_declaredRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_baseline_5F_declaredRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey = "the '%K' routine is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_declaredRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_baseline_5F_declaredRoutineMap * p = (const cMapElement_baseline_5F_declaredRoutineMap *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey
                                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_baseline_5F_declaredRoutineMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_baseline_5F_declaredRoutineMap * GALGAS_baseline_5F_declaredRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * result = (cMapElement_baseline_5F_declaredRoutineMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baseline_5F_declaredRoutineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_declaredRoutineMap::cEnumerator_baseline_5F_declaredRoutineMap (const GALGAS_baseline_5F_declaredRoutineMap & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element cEnumerator_baseline_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_baseline_5F_declaredRoutineMap * p = (const cMapElement_baseline_5F_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baseline_5F_declaredRoutineMap) ;
  return GALGAS_baseline_5F_declaredRoutineMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_baseline_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baseline_declaredRoutineMap type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ("baseline_declaredRoutineMap",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap GALGAS_baseline_5F_declaredRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap result ;
  const GALGAS_baseline_5F_declaredRoutineMap * p = (const GALGAS_baseline_5F_declaredRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Class for element of '@baseline_5F_intermediate_5F_instructionList' list                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_baseline_5F_intermediate_5F_instructionList : public cCollectionElement {
  public : GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_baseline_5F_intermediate_5F_instructionList::cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_baseline_5F_intermediate_5F_instructionList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_baseline_5F_intermediate_5F_instructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_baseline_5F_intermediate_5F_instructionList (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_baseline_5F_intermediate_5F_instructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_baseline_5F_intermediate_5F_instructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * operand = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList::GALGAS_baseline_5F_intermediate_5F_instructionList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList::GALGAS_baseline_5F_intermediate_5F_instructionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_listWithValue (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_baseline_5F_intermediate_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                    const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::addAssign_operation (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_insertAtIndex (const GALGAS_baseline_5F_intermediate_5F_instruction inOperand0,
                                                                               const GALGAS_uint inInsertionIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_removeAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                               const GALGAS_uint inRemoveIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_popFirst (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_popLast (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::method_first (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::method_last (GALGAS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::add_operation (const GALGAS_baseline_5F_intermediate_5F_instructionList & inOperand,
                                                                                                                      C_Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_intermediate_5F_instructionList result = GALGAS_baseline_5F_intermediate_5F_instructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::plusAssign_operation (const GALGAS_baseline_5F_intermediate_5F_instructionList inOperand,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList::setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mInstruction = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction GALGAS_baseline_5F_intermediate_5F_instructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  GALGAS_baseline_5F_intermediate_5F_instruction result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    result = p->mObject.mAttribute_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_baseline_5F_intermediate_5F_instructionList::cEnumerator_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject,
                                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element cEnumerator_baseline_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (const cCollectionElement_baseline_5F_intermediate_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction cEnumerator_baseline_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (const cCollectionElement_baseline_5F_intermediate_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_intermediate_instructionList type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ("baseline_intermediate_instructionList",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instructionList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList GALGAS_baseline_5F_intermediate_5F_instructionList::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList result ;
  const GALGAS_baseline_5F_intermediate_5F_instructionList * p = (const GALGAS_baseline_5F_intermediate_5F_instructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

