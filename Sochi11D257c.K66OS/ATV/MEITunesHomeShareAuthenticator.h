/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSharedCredentialsAuthenticator.h"


__attribute__((visibility("hidden")))
@interface MEITunesHomeShareAuthenticator : ATVSharedCredentialsAuthenticator {
}
- (void)_homeShareAuthenticationFinished:(id)finished;	// 0x30231
- (id)_makeAuthenticationController;	// 0x2fe9d
- (void)_sendAuthenticationRequest;	// 0x2ff95
- (void)dealloc;	// 0x2fc5d
- (BOOL)promptsForExistingAccount;	// 0x3022d
- (void)setSharedCredentials;	// 0x2fda9
- (BOOL)shouldResetPasswordOnAuthenticationError:(id)error;	// 0x30161
@end
