/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSharedCredentialsAuthenticator.h"

@class NSString, AAAccount;

__attribute__((visibility("hidden")))
@interface ATVCupidAuthenticator : ATVSharedCredentialsAuthenticator {
@private
	AAAccount *_authenticatingAppleAccount;	// 52 = 0x34
}
@property(readonly, assign) AAAccount *appleAccount;	// G=0x3417579d; 
@property(readonly, assign) NSString *basePath;	// G=0x34175741; 
- (void)_authCompletionHandler:(BOOL)handler error:(id)error callbackType:(int)type;	// 0x3417587d
- (void)_sendAuthenticationRequest;	// 0x341754c9
// declared property getter: - (id)appleAccount;	// 0x3417579d
// declared property getter: - (id)basePath;	// 0x34175741
- (void)dealloc;	// 0x34175405
- (id)makeAuthenticationController;	// 0x34175451
- (BOOL)requiresPassword:(id *)password;	// 0x341757c5
@end
