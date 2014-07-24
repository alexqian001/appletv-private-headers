/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDefaultAuthenticationManager.h"
#import "YTAuthenticatorDelegate.h"


__attribute__((visibility("hidden")))
@interface RUIYTAuthenticationManager : BRDefaultAuthenticationManager <YTAuthenticatorDelegate> {
}
- (id)init;	// 0x28ee55
- (void)_accountRemoved:(id)removed;	// 0x28f279
- (void)_authenticationCancelledForAuthenticator:(id)authenticator;	// 0x28f3c1
- (id)_currentAccount;	// 0x28f125
- (void)_removeDuplicatesOfAccount:(id)account;	// 0x28f545
- (void)authenticatorNeedsAccountAndPassword:(id)password;	// 0x28f449
@end
