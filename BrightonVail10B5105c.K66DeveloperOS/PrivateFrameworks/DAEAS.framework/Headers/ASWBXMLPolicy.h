/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicy.h"

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {
	NSMutableDictionary *_policyData;	// 52 = 0x34
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x33654d05
+ (id)asParseRules;	// 0x33654f39
+ (BOOL)frontingBasicTypes;	// 0x33654e01
+ (BOOL)notifyOfUnknownTokens;	// 0x33654e55
+ (BOOL)parsingLeafNode;	// 0x33654d59
+ (BOOL)parsingWithSubItems;	// 0x33654dad
- (void)_cleanUpPolicyData:(id)data;	// 0x33655419
- (void)_setPolicyData:(id)data;	// 0x33654ef5
- (void)dealloc;	// 0x33654ea9
- (id)perDomainDictsForPolicy;	// 0x33655631
@end
