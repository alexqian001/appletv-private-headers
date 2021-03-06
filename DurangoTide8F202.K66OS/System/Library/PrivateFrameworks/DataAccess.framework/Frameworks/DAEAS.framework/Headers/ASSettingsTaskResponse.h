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
@property(retain, nonatomic) NSNumber *status;	// G=0x32edc4f1; S=0x32edd1a9; @synthesize=_status
@property(retain, nonatomic) ASSettingsTaskUserInformationResponse *userInformation;	// G=0x32edc4e1; S=0x32edd1d1; @synthesize=_userInformation
+ (BOOL)acceptsTopLevelLeaves;	// 0x32edcce1
+ (BOOL)frontingBasicTypes;	// 0x32edcc09
+ (BOOL)notifyOfUnknownTokens;	// 0x32edcbc1
+ (BOOL)parsingLeafNode;	// 0x32edcc99
+ (BOOL)parsingWithSubItems;	// 0x32edcc51
- (id)asParseRules;	// 0x32edca89
- (void)dealloc;	// 0x32edcdcd
- (id)description;	// 0x32edcf15
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32edd0a1
// declared property setter: - (void)setStatus:(id)status;	// 0x32edd1a9
// declared property setter: - (void)setUserInformation:(id)information;	// 0x32edd1d1
// declared property getter: - (id)status;	// 0x32edc4f1
// declared property getter: - (id)userInformation;	// 0x32edc4e1
@end

