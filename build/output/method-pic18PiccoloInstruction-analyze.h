#ifndef method_2D_pic_31__38_PiccoloInstruction_2D_analyze_1_DEFINED
#define method_2D_pic_31__38_PiccoloInstruction_2D_analyze_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@pic18PiccoloInstruction analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_pic_31__38_PiccoloInstruction_analyze) (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const class GALGAS_uint constinArgument0,
                                                                               class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                                                               const class GALGAS_routineMap constinArgument2,
                                                                               const class GALGAS_registerTable constinArgument3,
                                                                               const class GALGAS_pic_31__38__5F_dataMap constinArgument4,
                                                                               const class GALGAS_constantMap constinArgument5,
                                                                               class GALGAS_uint & ioArgument6,
                                                                               class GALGAS_ipic_31__38_SequentialInstructionList & ioArgument7,
                                                                               class GALGAS_lstring & ioArgument8,
                                                                               class GALGAS_string & ioArgument9,
                                                                               class GALGAS_uint & ioArgument10,
                                                                               const class GALGAS_bool constinArgument11,
                                                                               const class GALGAS_routineKind constinArgument12,
                                                                               class GALGAS_stringset & ioArgument13,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyze (const int32_t inClassIndex,
                                  categoryMethodSignature_pic_31__38_PiccoloInstruction_analyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyze (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                 const GALGAS_uint constin_inAccessBankSplitOffset,
                                 GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                 const GALGAS_routineMap constin_inRoutineMap,
                                 const GALGAS_registerTable constin_inRegisterTable,
                                 const GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                 const GALGAS_constantMap constin_inConstantMap,
                                 GALGAS_uint & io_ioLocalLabelIndex,
                                 GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                 GALGAS_lstring & io_ioBlockLabel,
                                 GALGAS_string & io_ioListFileContents,
                                 GALGAS_uint & io_ioCurrentBank,
                                 const GALGAS_bool constin_inShouldPreserveBSR,
                                 const GALGAS_routineKind constin_inRoutineKind,
                                 GALGAS_stringset & io_ioUsedRegisters,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

