/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class ASSettingsTaskUserInformationGetResponse, NSNumber;

@interface ASSettingsTaskUserInformationResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
	ASSettingsTaskUserInformationGetResponse *_getResponse;	// 44 = 0x2c
}
@property(retain, nonatomic) ASSettingsTaskUserInformationGetResponse *getResponse;	// G=0x36c245ad; S=0x36c245bd; @synthesize=_getResponse
@property(retain, nonatomic) NSNumber *status;	// G=0x36c2458d; S=0x36c2459d; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x36c24075
+ (id)asParseRules;	// 0x36c24301
+ (BOOL)frontingBasicTypes;	// 0x36c24171
+ (BOOL)notifyOfUnknownTokens;	// 0x36c241c5
+ (BOOL)parsingLeafNode;	// 0x36c240c9
+ (BOOL)parsingWithSubItems;	// 0x36c2411d
- (void)dealloc;	// 0x36c24219
- (id)description;	// 0x36c2427d
// declared property getter: - (id)getResponse;	// 0x36c245ad
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36c244e5
// declared property setter: - (void)setGetResponse:(id)response;	// 0x36c245bd
// declared property setter: - (void)setStatus:(id)status;	// 0x36c2459d
// declared property getter: - (id)status;	// 0x36c2458d
@end
