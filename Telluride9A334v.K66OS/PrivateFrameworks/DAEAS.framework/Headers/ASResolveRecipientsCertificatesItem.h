/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsCertificatesItem : ASItem {
	NSNumber *_certCount;	// 40 = 0x28
	NSNumber *_recipientCount;	// 44 = 0x2c
	NSNumber *_easStatus;	// 48 = 0x30
	NSMutableArray *_certificates;	// 52 = 0x34
}
@property(retain) NSNumber *certCount;	// G=0x30a833a5; S=0x30a833b9; @synthesize=_certCount
@property(readonly, assign) NSArray *certificates;	// G=0x30a8344d; @synthesize=_certificates
@property(retain) NSNumber *easStatus;	// G=0x30a83415; @synthesize=_easStatus
@property(retain) NSNumber *recipientCount;	// G=0x30a833dd; S=0x30a833f1; @synthesize=_recipientCount
+ (BOOL)acceptsTopLevelLeaves;	// 0x30a82d19
+ (BOOL)frontingBasicTypes;	// 0x30a82e15
+ (BOOL)notifyOfUnknownTokens;	// 0x30a82e69
+ (BOOL)parsingLeafNode;	// 0x30a82d6d
+ (BOOL)parsingWithSubItems;	// 0x30a82dc1
- (void)addCertificateString:(id)string;	// 0x30a82ebd
- (id)asParseRules;	// 0x30a82f21
// declared property getter: - (id)certCount;	// 0x30a833a5
// declared property getter: - (id)certificates;	// 0x30a8344d
- (void)dealloc;	// 0x30a8331d
- (id)description;	// 0x30a83191
// declared property getter: - (id)easStatus;	// 0x30a83415
// declared property getter: - (id)recipientCount;	// 0x30a833dd
// declared property setter: - (void)setCertCount:(id)count;	// 0x30a833b9
- (void)setEASStatus:(id)status;	// 0x30a83429
// declared property setter: - (void)setRecipientCount:(id)count;	// 0x30a833f1
@end
