/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray;

@interface MCAPNPayload : MCPayload {
	NSArray *_apnInfos;	// 40 = 0x28
	BOOL _wasInstalled;	// 44 = 0x2c
}
@property(assign, nonatomic) BOOL wasInstalled;	// G=0x300695f5; S=0x30069605; @synthesize=_wasInstalled
+ (id)apnDomainName;	// 0x300695e9
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3006a7a1
+ (id)typeStrings;	// 0x300699ed
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3006a4dd
- (BOOL)_checkForValidContents:(id)validContents outError:(id *)error;	// 0x30069f8d
- (void)_finishInitializationWithContents:(id)contents;	// 0x30069c4d
- (id)_strippedAPNDefaults;	// 0x30069a15
- (id)_validationErrorType:(int)type forInvalidKey:(id)invalidKey;	// 0x30069989
- (id)apnDefaults;	// 0x30069b31
- (void)dealloc;	// 0x3006a495
- (id)description;	// 0x3006a339
// declared property setter: - (void)setWasInstalled:(BOOL)installed;	// 0x30069605
- (id)stubDictionary;	// 0x3006a389
- (id)subtitle1Description;	// 0x3006a2c5
- (id)subtitle1Label;	// 0x3006a78d
- (id)subtitle2Description;	// 0x3006a251
- (id)subtitle2Label;	// 0x3006a779
// declared property getter: - (BOOL)wasInstalled;	// 0x300695f5
@end

