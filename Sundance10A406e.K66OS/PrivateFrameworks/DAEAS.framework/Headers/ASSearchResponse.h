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
@property(assign) int expectedResultType;	// G=0x36c11d31; S=0x36c11d45; @synthesize=_expectedResultType
@property(copy) NSNumber *status;	// G=0x36c11d0d; S=0x36c11d21; @synthesize=_status
@property(retain) NSArray *stores;	// G=0x36c11ce9; S=0x36c11cfd; @synthesize=_stores
+ (BOOL)acceptsTopLevelLeaves;	// 0x36c11811
+ (id)asParseRules;	// 0x36c11a81
+ (BOOL)frontingBasicTypes;	// 0x36c1190d
+ (BOOL)notifyOfUnknownTokens;	// 0x36c11961
+ (BOOL)parsingLeafNode;	// 0x36c11865
+ (BOOL)parsingWithSubItems;	// 0x36c118b9
- (void)dealloc;	// 0x36c119b5
- (id)description;	// 0x36c11a19
// declared property getter: - (int)expectedResultType;	// 0x36c11d31
// declared property setter: - (void)setExpectedResultType:(int)type;	// 0x36c11d45
// declared property setter: - (void)setStatus:(id)status;	// 0x36c11d21
// declared property setter: - (void)setStores:(id)stores;	// 0x36c11cfd
// declared property getter: - (id)status;	// 0x36c11d0d
// declared property getter: - (id)stores;	// 0x36c11ce9
@end
