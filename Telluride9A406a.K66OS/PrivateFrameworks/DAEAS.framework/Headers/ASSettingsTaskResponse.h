/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, ASSettingsTaskUserInformationResponse;

@interface ASSettingsTaskResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
	ASSettingsTaskUserInformationResponse *_userInformation;	// 44 = 0x2c
}
@property(retain, nonatomic) NSNumber *status;	// G=0x343e4221; S=0x343e4231; @synthesize=_status
@property(retain, nonatomic) ASSettingsTaskUserInformationResponse *userInformation;	// G=0x343e4255; S=0x343e4265; @synthesize=_userInformation
+ (BOOL)acceptsTopLevelLeaves;	// 0x343e3d95
+ (BOOL)frontingBasicTypes;	// 0x343e3e91
+ (BOOL)notifyOfUnknownTokens;	// 0x343e3ee5
+ (BOOL)parsingLeafNode;	// 0x343e3de9
+ (BOOL)parsingWithSubItems;	// 0x343e3e3d
- (id)asParseRules;	// 0x343e4001
- (void)dealloc;	// 0x343e3f39
- (id)description;	// 0x343e3f99
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x343e4175
// declared property setter: - (void)setStatus:(id)status;	// 0x343e4231
// declared property setter: - (void)setUserInformation:(id)information;	// 0x343e4265
// declared property getter: - (id)status;	// 0x343e4221
// declared property getter: - (id)userInformation;	// 0x343e4255
@end

