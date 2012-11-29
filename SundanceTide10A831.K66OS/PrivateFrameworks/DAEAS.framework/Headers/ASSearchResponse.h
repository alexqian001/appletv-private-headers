/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber;

@interface ASSearchResponse : ASItem {
	NSArray *_stores;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	int _expectedResultType;	// 48 = 0x30
}
@property(assign) int expectedResultType;	// G=0x36e16a11; S=0x36e16a25; @synthesize=_expectedResultType
@property(copy) NSNumber *status;	// G=0x36e169ed; S=0x36e16a01; @synthesize=_status
@property(retain) NSArray *stores;	// G=0x36e169c9; S=0x36e169dd; @synthesize=_stores
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e164f1
+ (id)asParseRules;	// 0x36e16761
+ (BOOL)frontingBasicTypes;	// 0x36e165ed
+ (BOOL)notifyOfUnknownTokens;	// 0x36e16641
+ (BOOL)parsingLeafNode;	// 0x36e16545
+ (BOOL)parsingWithSubItems;	// 0x36e16599
- (void)dealloc;	// 0x36e16695
- (id)description;	// 0x36e166f9
// declared property getter: - (int)expectedResultType;	// 0x36e16a11
// declared property setter: - (void)setExpectedResultType:(int)type;	// 0x36e16a25
// declared property setter: - (void)setStatus:(id)status;	// 0x36e16a01
// declared property setter: - (void)setStores:(id)stores;	// 0x36e169dd
// declared property getter: - (id)status;	// 0x36e169ed
// declared property getter: - (id)stores;	// 0x36e169c9
@end
