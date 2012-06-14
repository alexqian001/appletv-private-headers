/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDReferenceCollection, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDConditionalFormatting : NSObject {
@private
	NSMutableArray *mRules;	// 4 = 0x4
	EDReferenceCollection *mRanges;	// 8 = 0x8
}
+ (id)conditionalFormatting;	// 0x345c14f9
- (id)init;	// 0x3447fd15
- (void)addRange:(id)range;	// 0x3448005d
- (void)addRule:(id)rule;	// 0x34482cb9
- (void)dealloc;	// 0x34485861
- (void)insertRule:(id)rule atIndex:(unsigned)index;	// 0x345c15d5
- (id)rangeAtIndex:(unsigned)index;	// 0x345c1541
- (unsigned)rangeCount;	// 0x345c1585
- (id)ruleAtIndex:(unsigned)index;	// 0x345c1619
- (unsigned)ruleCount;	// 0x345c165d
- (void)sortRulesByPriority;	// 0x345c15a5
@end
