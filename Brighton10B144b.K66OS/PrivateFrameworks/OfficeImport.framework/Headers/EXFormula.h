/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXFormula : NSObject {
}
+ (void)applyArrayedFormula:(id)formula edReference:(id)reference edWorksheet:(id)worksheet state:(id)state;	// 0x349c6a99
+ (void)applyArrayedFormulasToSheet:(id)sheet state:(id)state;	// 0x349101dd
+ (id)edFormulaFromXmlFormulaElement:(xmlNode *)xmlFormulaElement formulaClass:(Class)aClass state:(id)state;	// 0x3499e2ed
+ (id)edFormulaFromXmlFormulaElement:(xmlNode *)xmlFormulaElement state:(id)state;	// 0x34a318f5
+ (id)edTokensForFormulaString:(id)formulaString formulaClass:(Class)aClass rowNumber:(int)number columnNumber:(int)number4 sheet:(id)sheet workbook:(id)workbook;	// 0x34984f65
+ (id)edTokensForFormulaString:(id)formulaString sheet:(id)sheet workbook:(id)workbook;	// 0x34a31931
+ (Class)formulaClassFromXmlFormulaElement:(xmlNode *)xmlFormulaElement state:(id)state;	// 0x34984af1
+ (id)readFrom:(xmlNode *)from formulaClass:(Class)aClass rowNumber:(int)number columnNumber:(int)number4 edCell:(EDCellHeader *)cell edRowBlocks:(id)blocks state:(id)state;	// 0x34984c35
+ (void)readFrom:(xmlNode *)from rowNumber:(int)number columnNumber:(int)number3 edCell:(EDCellHeader *)cell edRowBlocks:(id)blocks state:(id)state;	// 0x34984a91
@end
