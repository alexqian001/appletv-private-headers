/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"

@class EDRowBlocks, EDName, EDFormula, EDSheet;

@interface EPFormulaCleaner : EDProcessor {
	EDSheet *mCurrentSheet;	// 16 = 0x10
	EDFormula *mFormula;	// 20 = 0x14
	EDFormula *mTokensToClean;	// 24 = 0x18
	EDName *mParentName;	// 28 = 0x1c
	int mRowOffset;	// 32 = 0x20
	int mColumnOffset;	// 36 = 0x24
	EDRowBlocks *mBaseFormulaRowBlocks;	// 40 = 0x28
}
- (void)addOffsetsToRow:(int *)row rowRelative:(bool)relative column:(int *)column columnRelative:(bool)relative4;	// 0x34f10865
- (void)applyMaxCellsInName:(id)name;	// 0x35009ce5
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x34fd1b81
- (bool)checkCustomFunction:(unsigned)function;	// 0x35088859
- (bool)checkFunctionId:(int)anId tokenIndex:(unsigned)index;	// 0x34fe1e7d
- (bool)checkSupportedAddInName:(id)name externalLink:(bool)link;	// 0x35088855
- (bool)cleanArea3D:(unsigned)d;	// 0x34fd1d19
- (bool)cleanArea:(unsigned)area;	// 0x34f10c51
- (bool)cleanArray:(unsigned)array;	// 0x350202e1
- (void)cleanFormula:(id)formula name:(id)name;	// 0x3508815d
- (void)cleanFormula:(id)formula sheet:(id)sheet;	// 0x34f0fe89
- (void)cleanFormula:(id)formula sheet:(id)sheet name:(id)name;	// 0x34f0fead
- (bool)cleanFunc:(unsigned)func;	// 0x3500260d
- (bool)cleanFuncVar:(unsigned)var;	// 0x34fe1e39
- (bool)cleanName:(unsigned)name;	// 0x350116c1
- (bool)cleanName:(unsigned)name nameIndex:(unsigned)index sheetIndex:(unsigned)index3;	// 0x350099e5
- (bool)cleanNameX:(unsigned)x;	// 0x35009859
- (bool)cleanRange:(unsigned)range removedTokenCount:(unsigned *)count;	// 0x350882ed
- (bool)cleanRef3D:(unsigned)d;	// 0x34f28479
- (bool)cleanRef:(unsigned)ref;	// 0x34f10681
- (bool)cleanTokenAtIndex:(unsigned)index removedTokenCount:(unsigned *)count;	// 0x34f10441
- (bool)cleanUnion:(unsigned)aUnion;	// 0x3501bfc1
- (bool)combineCellReferences:(unsigned)references removedTokenCount:(unsigned *)count;	// 0x35088415
- (void)dealloc;	// 0x34f10e0d
- (id)extractFormulaToCleanFromSharedFormula:(id)sharedFormula;	// 0x34f10191
- (bool)isLinkReferenceIndexSupported:(unsigned)supported allowExternal:(bool)external;	// 0x34f285a9
- (bool)isObjectSupported:(id)supported;	// 0x34fce8e5
- (bool)isReferenceValidInLassoForRow:(int)row rowRelative:(bool)relative column:(int)column columnRelative:(bool)relative4;	// 0x34f10801
- (bool)isReferenceValidInLassoForSheet:(id)sheet rowMin:(int)min rowMinRelative:(bool)relative rowMax:(int)max rowMaxRelative:(bool)relative5 columnMin:(int)min6 columnMinRelative:(bool)relative7 columnMax:(int)max8 columnMaxRelative:(bool)relative9;	// 0x3508817d
- (bool)isThereContentOutsideOfLassoBoundsForSheet:(id)sheet rowMin:(int)min rowMax:(int)max columnMin:(int)min4 columnMax:(int)max5;	// 0x35011825
- (void)prepareToProcessFormula:(id)processFormula sheet:(id)sheet name:(id)name;	// 0x34f0ffe9
- (void)reportWarning:(int)warning;	// 0x34f287a5
- (void)reportWarning:(int)warning parameter:(id)parameter;	// 0x34f287b9
- (void)reset;	// 0x34f100d1
- (void)updateSheet:(id)sheet row:(int)row rowRelative:(bool)relative column:(int)column columnRelative:(bool)relative5;	// 0x34f108a1
- (void)updateSheet:(id)sheet rowMin:(int)min rowMinRelative:(bool)relative rowMax:(int)max rowMaxRelative:(bool)relative5 columnMin:(int)min6 columnMinRelative:(bool)relative7 columnMax:(int)max8 columnMaxRelative:(bool)relative9;	// 0x35088269
- (void)updateWorksheet:(id)worksheet row:(int)row column:(int)column inDictionary:(id)dictionary;	// 0x35088a41
- (bool)useEvaluationStackToCheckFunctionId:(int)checkFunctionId functionName:(id)name tokenIndex:(unsigned)index;	// 0x35088abd
- (unsigned)useEvaluationStackToGetParameter:(unsigned)getParameter tokenIndex:(unsigned)index;	// 0x3501c13d
- (id)useEvaluationStackToGetParameter:(unsigned)getParameter tokenIndex:(unsigned)index allReferencesAllowed:(bool)allowed success:(bool *)success;	// 0x350890a1
- (id)worksheetFromLinkReferenceIndex:(unsigned)linkReferenceIndex loadIfNeeded:(bool)needed;	// 0x34fd1bb1
@end
