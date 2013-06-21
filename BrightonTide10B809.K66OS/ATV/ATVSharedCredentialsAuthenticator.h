/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticator.h"


__attribute__((visibility("hidden")))
@interface ATVSharedCredentialsAuthenticator : BRUserPasswordAuthenticator {
	BRUserPasswordAuthenticator *_sharedAuthenticator;	// 12 = 0xc
	BOOL _usingSharedCredentials;	// 16 = 0x10
	BOOL _setSharedCredentialsIsEnabled;	// 17 = 0x11
}
@property(assign) BOOL setSharedCredentialsIsEnabled;	// G=0x1c85e5; S=0x1c85fd; @synthesize=_setSharedCredentialsIsEnabled
@property(retain) BRUserPasswordAuthenticator *sharedAuthenticator;	// G=0x1c8591; S=0x1c85a5; @synthesize=_sharedAuthenticator
@property(assign) BOOL usingSharedCredentials;	// G=0x1c85b5; S=0x1c85cd; @synthesize=_usingSharedCredentials
- (id)initWithAccount:(id)account sharedAuthenticator:(id)authenticator;	// 0x1c816d
- (void)_handleAuthenticationCancelledWithError:(id)error;	// 0x1c8549
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x1c8501
- (void)_handleAuthenticationSucceeded;	// 0x1c84bd
- (BOOL)canSetSharedCredentials;	// 0x1c832d
- (BOOL)canUseSharedCredentials:(id *)credentials;	// 0x1c8201
- (void)dealloc;	// 0x1c81b5
- (BOOL)requiresPassword:(id *)password;	// 0x1c846d
- (BOOL)requiresUser:(id *)user;	// 0x1c841d
// declared property setter: - (void)setSetSharedCredentialsIsEnabled:(BOOL)enabled;	// 0x1c85fd
// declared property setter: - (void)setSharedAuthenticator:(id)authenticator;	// 0x1c85a5
- (void)setSharedCredentials;	// 0x1c838d
// declared property getter: - (BOOL)setSharedCredentialsIsEnabled;	// 0x1c85e5
// declared property setter: - (void)setUsingSharedCredentials:(BOOL)credentials;	// 0x1c85cd
// declared property getter: - (id)sharedAuthenticator;	// 0x1c8591
- (void)useSharedCredentials;	// 0x1c8291
// declared property getter: - (BOOL)usingSharedCredentials;	// 0x1c85b5
@end
