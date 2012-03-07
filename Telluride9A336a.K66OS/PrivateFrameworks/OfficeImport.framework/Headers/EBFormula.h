/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBFormula : NSObject {
}
+ (id)edFormulaFromXlFmlaDefinition:(const void *)xlFmlaDefinition withFormulaLength:(int)formulaLength formulaClass:(Class)aClass edSheet:(id)sheet state:(id)state;	// 0x34c8a539
+ (id)edFormulaFromXlFmlaDefinition:(const void *)xlFmlaDefinition withFormulaLength:(int)formulaLength formulaClass:(Class)aClass state:(id)state;	// 0x34c8a4d5
+ (id)edFormulaFromXlFmlaDefinition:(const void *)xlFmlaDefinition withFormulaLength:(int)formulaLength state:(id)state;	// 0x34c8a481
+ (char *)edFormulaToParsedExpression:(id)parsedExpression tokenLength:(unsigned short *)length formulaLength:(unsigned short *)length3 state:(id)state;	// 0x34dd88b9
+ (void)readFormulaFromXlCell:(XlCell *)xlCell edCell:(EDCellHeader *)cell edRowBlocks:(id)blocks state:(id)state;	// 0x34dd8a8d
+ (void)setupFormulaDataForSharedFormula:(id)sharedFormula xlFormulaInfo:(XlFormulaInfo *)info state:(id)state;	// 0x34dd933d
+ (void)setupTokensInEDFormulaFromXlFormulaProcessor:(XlFormulaProcessor *)xlFormulaProcessor length:(int)length edFormula:(id)formula edSheet:(id)sheet;	// 0x34c8a78d
+ (unsigned)writeToken:(id)token tokenIndex:(unsigned)index tokenStream:(XLFormulaStream *)stream extendedStream:(XLFormulaStream *)stream4 state:(id)state;	// 0x34dd8e89
+ (XlFormulaInfo *)xlFormulaInfoFromEDFormula:(id)edformula state:(id)state;	// 0x34dd8d0d
+ (XlFormulaInfo *)xlFormulaInfoFromEDSharedFormula:(id)edsharedFormula state:(id)state;	// 0x34dd90fd
@end
