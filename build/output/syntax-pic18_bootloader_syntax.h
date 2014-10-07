#ifndef syntax_2D_pic_31__38__5F_bootloader_5F_syntax_1_DEFINED
#define syntax_2D_pic_31__38__5F_bootloader_5F_syntax_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "lexique-piccolo_lexique.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Parser class 'pic18_bootloader_syntax' declaration                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_pic_31__38__5F_bootloader_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_pic_31__38__5F_bootloader_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_parse_5F_bootloader_ (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_routineDeclarationList & outArgument2,
                                                    class GALGAS_bootloaderReservedRAMmap & outArgument3,
                                                    class GALGAS_luint & outArgument4,
                                                    class GALGAS_routineDeclarationList & outArgument5,
                                                    class GALGAS_ramDefinitionList & outArgument6,
                                                    class GALGAS_string & outArgument7,
                                                    class GALGAS_piccoloDeviceModel & outArgument8,
                                                    class GALGAS_uint & outArgument9,
                                                    class GALGAS_ramBankTable & outArgument10,
                                                    class GALGAS_registerTable & outArgument11,
                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_parse_5F_bootloader_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_parse_5F_bootloader_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_declaration_ (class GALGAS_routineDeclarationList & ioArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_declaration_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_declaration_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                             class GALGAS_string & outArgument1,
                                                                             class GALGAS_uint & outArgument2,
                                                                             class GALGAS_ramBankTable & outArgument3,
                                                                             class GALGAS_registerTable & outArgument4,
                                                                             class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                             class GALGAS_routineDeclarationList & outArgument6,
                                                                             class GALGAS_routineDeclarationList & outArgument7,
                                                                             class GALGAS_luint & outArgument8,
                                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_ (GALGAS_lstring & outArgument0,
                                                                                     GALGAS_lstring & outArgument1,
                                                                                     GALGAS_routineDeclarationList & outArgument2,
                                                                                     GALGAS_bootloaderReservedRAMmap & outArgument3,
                                                                                     GALGAS_luint & outArgument4,
                                                                                     GALGAS_routineDeclarationList & outArgument5,
                                                                                     GALGAS_ramDefinitionList & outArgument6,
                                                                                     GALGAS_string & outArgument7,
                                                                                     GALGAS_piccoloDeviceModel & outArgument8,
                                                                                     GALGAS_uint & outArgument9,
                                                                                     GALGAS_ramBankTable & outArgument10,
                                                                                     GALGAS_registerTable & outArgument11,
                                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                                              GALGAS_string & outArgument1,
                                                                                                              GALGAS_uint & outArgument2,
                                                                                                              GALGAS_ramBankTable & outArgument3,
                                                                                                              GALGAS_registerTable & outArgument4,
                                                                                                              GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                                              GALGAS_routineDeclarationList & outArgument6,
                                                                                                              GALGAS_routineDeclarationList & outArgument7,
                                                                                                              GALGAS_luint & outArgument8,
                                                                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_ (GALGAS_routineDeclarationList & ioArgument0,
                                                                                        C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

