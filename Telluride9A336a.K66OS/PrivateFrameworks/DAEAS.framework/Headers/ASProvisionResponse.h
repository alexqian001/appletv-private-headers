/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {
	NSArray *_policies;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	BOOL _remoteWipe;	// 48 = 0x30
	NSString *_policyType;	// 52 = 0x34
}
@property(readonly, retain) NSArray *policies;	// G=0x31595505; converted property
@property(retain) NSString *policyType;	// G=0x315954b1; S=0x315954c1; converted property
@property(readonly, assign) BOOL remoteWipe;	// G=0x31595525; converted property
@property(readonly, retain) NSNumber *status;	// G=0x31595515; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x31595239
+ (BOOL)frontingBasicTypes;	// 0x31595335
+ (BOOL)notifyOfUnknownTokens;	// 0x31595389
+ (BOOL)parsingLeafNode;	// 0x3159528d
+ (BOOL)parsingWithSubItems;	// 0x315952e1
- (id)init;	// 0x31595451
- (id)initWithPolicyType:(id)policyType;	// 0x31595471
- (void)_setPolicies:(id)policies;	// 0x31595535
- (void)_setRemoteWipe:(id)wipe;	// 0x31595579
- (void)_setStatus:(id)status;	// 0x3159558d
- (id)asParseRules;	// 0x315955d1
- (void)dealloc;	// 0x315953dd
- (id)description;	// 0x315959a1
// converted property getter: - (id)policies;	// 0x31595505
// converted property getter: - (id)policyType;	// 0x315954b1
// converted property getter: - (BOOL)remoteWipe;	// 0x31595525
// converted property setter: - (void)setPolicyType:(id)type;	// 0x315954c1
// converted property getter: - (id)status;	// 0x31595515
@end

