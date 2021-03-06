/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTProfileMessage.h"

@class NSString;

@interface FTProfileConfirmEmailsMessage : FTProfileMessage {
	NSString *_emailAddress;	// 36 = 0x24
	NSString *_vettingToken;	// 40 = 0x28
}
@property(copy) NSString *emailAddress;	// G=0x31c20305; S=0x31c20345; @synthesize=_emailAddress
@property(copy) NSString *vettingToken;	// G=0x31c202ed; S=0x31c2031d; @synthesize=_vettingToken
- (id)bagKey;	// 0x31c200f5
- (void)dealloc;	// 0x31c20169
// declared property getter: - (id)emailAddress;	// 0x31c20305
- (id)messageBody;	// 0x31c201c5
- (id)requiredKeys;	// 0x31c20101
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x31c20345
// declared property setter: - (void)setVettingToken:(id)token;	// 0x31c2031d
// declared property getter: - (id)vettingToken;	// 0x31c202ed
@end

