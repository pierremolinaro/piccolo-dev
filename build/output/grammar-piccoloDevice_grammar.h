#ifndef grammar_2D_piccoloDevice_5F_grammar_1_DEFINED
#define grammar_2D_piccoloDevice_5F_grammar_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "syntax-piccoloDevice_syntax.h"
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_piccoloDevice_5F_grammar : public cParser_piccoloDevice_5F_syntax {
//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_piccoloDeviceModel & outArgument0,
                                             C_Lexique_piccoloDevice_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_piccoloDeviceModel & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_piccoloDeviceModel & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_0 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_1 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_2 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_3 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_4 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_5 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_6 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_7 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_8 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_9 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_10 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_11 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_12 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_13 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_14 (C_Lexique_piccoloDevice_5F_lexique *) ;

  public : virtual int32_t select_piccoloDevice_5F_syntax_15 (C_Lexique_piccoloDevice_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

#endif

