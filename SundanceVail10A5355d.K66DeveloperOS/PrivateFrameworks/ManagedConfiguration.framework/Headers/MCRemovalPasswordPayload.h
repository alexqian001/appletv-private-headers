/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCRemovalPasswordPayload : MCPayload {
	NSString *_removalPasscode;	// 40 = 0x28
}
@property(retain, nonatomic) NSString *removalPasscode;	// G=0x36232589; S=0x36232599; @synthesize=_removalPasscode
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x36232219
+ (id)typeStrings;	// 0x362321f1
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x36232229
- (void).cxx_destruct;	// 0x362325c1
// declared property getter: - (id)removalPasscode;	// 0x36232589
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x36232599
- (id)stubDictionary;	// 0x3623251d
@end

