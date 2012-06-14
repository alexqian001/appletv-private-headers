/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDialogOperation.h"

@class ISAuthenticationChallenge;

@interface ISAuthenticationChallengeOperation : ISDialogOperation {
	ISAuthenticationChallenge *_challenge;	// 80 = 0x50
}
@property(retain) ISAuthenticationChallenge *challenge;	// G=0x35544f1d; S=0x35544f31; @synthesize=_challenge
+ (id)operationWithChallenge:(id)challenge;	// 0x35544c61
- (id)_copyCredentialForSignInResponseDictionary:(id)responseDictionary;	// 0x35544e21
// declared property getter: - (id)challenge;	// 0x35544f1d
- (void)dealloc;	// 0x35544c1d
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x35544cc5
- (void)run;	// 0x35544d71
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x35544f31
@end
