/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFormulaBuilding.h"
#import <NSObject.h> // Unknown library


@interface EDFormula : NSObject <EDFormulaBuilding> {
	CFDataRef mPackedData;	// 4 = 0x4
}
@property(assign, getter=isCleaned) bool cleaned;	// G=0x36b3e989; S=0x36a80b2d; converted property
@property(retain) id originalFormulaString;	// G=0x36b67bd9; S=0x36b513ad; converted property
@property(retain) id warningParameter;	// G=0x36bf1db5; S=0x36b81739; converted property
+ (id)formula;	// 0x36a67745
+ (id)messageForWarning:(int)warning;	// 0x36a803bd
- (id)init;	// 0x36a6778d
- (id)initWithFormula:(id)formula;	// 0x36a80bb1
- (BOOL)addArrayWithCol:(int)col andRow:(int)row;	// 0x36b90169
- (char *)addToken:(int)token extendedDataLength:(unsigned)length;	// 0x36b50e11
- (bool)addToken:(int)token extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x36a694e9
- (char *)addToken:(int)token extendedDataLength:(unsigned)length numArgs:(int)args;	// 0x36b51af5
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x36bf2621
- (BOOL)convertLastRefsToArea;	// 0x36bf22e1
- (BOOL)convertRefs:(unsigned)refs toTypes:(int *)types;	// 0x36bf23e5
- (BOOL)convertToIntersect:(unsigned)intersect;	// 0x36bf22dd
- (BOOL)convertToList:(unsigned)list;	// 0x36bf1ffd
- (BOOL)convertToList:(unsigned)list withFinalParen:(BOOL)finalParen;	// 0x36bf2015
- (bool)copyTokenAtIndex:(unsigned)index fromFormula:(id)formula;	// 0x36b50fa5
- (bool)copyTokenFromXlPtg:(XlPtg *)xlPtg;	// 0x36a693f5
- (unsigned)countExtendedDataForTokenAtIndex:(unsigned)index;	// 0x36bf1a35
- (void)dealloc;	// 0x36a80c09
- (char *)extendedDataForTokenAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned *)length;	// 0x36b90215
- (unsigned)firstTokenIndexForArgAtIndex:(unsigned)index;	// 0x36bf1e0d
- (BOOL)insertExternalName:(unsigned)name withLink:(unsigned)link atIndex:(unsigned)index;	// 0x36bf1f5d
- (bool)isBaseFormula;	// 0x36bf1e09
// converted property getter: - (bool)isCleaned;	// 0x36b3e989
- (bool)isCleanedWithEvaluationStack;	// 0x36b79ce9
- (bool)isContainsRelativeReferences;	// 0x36a80b7d
- (bool)isSharedFormula;	// 0x36bf1e05
- (bool)isSupportedFormula;	// 0x36b3e959
- (char *)lastExtendedDataForTokenAtIndex:(unsigned)index length:(unsigned *)length;	// 0x36a80729
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL *)valid withEDLinks:(id)edlinks;	// 0x36bf24e9
- (void)markLastTokenAsDuration;	// 0x36bf25bd
- (void)markLastTokenAsSpanningRefVertically:(BOOL)vertically withMin:(unsigned short)min andMax:(unsigned short)max;	// 0x36bf25c1
// converted property getter: - (id)originalFormulaString;	// 0x36b67bd9
- (void)populateXlPtg:(XlPtg *)ptg index:(unsigned)index;	// 0x36bf1b51
- (void)removeAllTokens;	// 0x36b42685
- (bool)removeTokenAtIndex:(unsigned)index;	// 0x36bf1a99
- (bool)replaceTokenAtIndex:(unsigned)index withFormula:(id)formula formulaTokenIndex:(unsigned)index3;	// 0x36b79bc9
- (void)replaceTokenTypeAtIndex:(unsigned)index withType:(int)type;	// 0x36bf1a15
- (id)saveArgs:(unsigned)args andDelete:(BOOL)aDelete;	// 0x36bf1e69
// converted property setter: - (void)setCleaned:(bool)cleaned;	// 0x36a80b2d
- (char *)setExtendedDataAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned)length;	// 0x36a696f1
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned)index length:(unsigned)length;	// 0x36b901d9
// converted property setter: - (void)setOriginalFormulaString:(id)string;	// 0x36b513ad
- (void)setWarning:(int)warning;	// 0x36a987fd
// converted property setter: - (void)setWarningParameter:(id)parameter;	// 0x36b81739
- (void)setupExtendedDataForTokenAtIndex:(unsigned)index extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x36a6961d
- (bool)setupTokensWithTokensCount:(unsigned)tokensCount tokensWithDataCount:(unsigned)dataCount extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x36a677dd
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned)argIndex;	// 0x36bf25c5
- (EDToken *)tokenAtIndex:(unsigned)index;	// 0x36a69891
- (unsigned)tokenCount;	// 0x36a80411
- (int)tokenTypeAtIndex:(unsigned)index;	// 0x36a80661
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x36bf25c9
- (void)updateCleanedWithEvaluationStack:(bool)evaluationStack;	// 0x36b79d1d
- (void)updateContainsRelativeReferences:(bool)references;	// 0x36a809b5
- (id)warning;	// 0x36a80359
// converted property getter: - (id)warningParameter;	// 0x36bf1db5
- (int)warningType;	// 0x36a80391
- (ChVector<XlPtg *> *)xlPtgs;	// 0x36bf1be1
@end
