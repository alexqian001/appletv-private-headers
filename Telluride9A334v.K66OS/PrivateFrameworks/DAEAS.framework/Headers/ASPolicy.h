/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSString;

@interface ASPolicy : ASItem {
	NSString *_type;	// 40 = 0x28
	NSString *_key;	// 44 = 0x2c
	NSString *_status;	// 48 = 0x30
}
@property(readonly, retain) NSString *key;	// G=0x30a707a5; converted property
@property(readonly, retain) NSString *type;	// G=0x30a70795; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x30a7057d
+ (BOOL)frontingBasicTypes;	// 0x30a70679
+ (BOOL)notifyOfUnknownTokens;	// 0x30a706cd
+ (BOOL)parsingLeafNode;	// 0x30a705d1
+ (BOOL)parsingWithSubItems;	// 0x30a70625
- (void)_setKey:(id)key;	// 0x30a70819
- (void)_setStatus:(id)status;	// 0x30a7085d
- (void)_setType:(id)type;	// 0x30a707d5
- (id)asParseRules;	// 0x30a7093d
- (void)dealloc;	// 0x30a70721
- (id)description;	// 0x30a708a1
// converted property getter: - (id)key;	// 0x30a707a5
- (id)perDomainDictsForPolicy;	// 0x30a70b55
- (int)status;	// 0x30a707b5
// converted property getter: - (id)type;	// 0x30a70795
@end

