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
- (void)_homeShareAuthenticationFinished:(id)finished;	// 0x6a7f9
- (id)_makeAuthenticationController;	// 0x6a491
- (void)_sendAuthenticationRequest;	// 0x6a589
- (void)dealloc;	// 0x6a269
- (BOOL)promptsForExistingAccount;	// 0x6a7f5
- (void)setSharedCredentials;	// 0x6a39d
- (BOOL)shouldResetPasswordOnAuthenticationError:(id)error;	// 0x6a729
@end
