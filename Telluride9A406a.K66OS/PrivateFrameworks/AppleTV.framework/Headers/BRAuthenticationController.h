/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class BRAuthenticator;

@interface BRAuthenticationController : BRController {
@private
	BOOL _authenticationWasSuccessful;	// 80 = 0x50
	BRAuthenticator *_authenticator;	// 84 = 0x54
	id _resources;	// 88 = 0x58
	BRController *_authenticatingController;	// 92 = 0x5c
}
@property(retain) BRController *authenticatingController;	// G=0x33027dbd; S=0x33027dd1; @synthesize=_authenticatingController
@property(readonly, assign) BRAuthenticator *authenticator;	// G=0x33027d9d; @synthesize=_authenticator
@property(readonly, assign) id resources;	// G=0x33027dad; @synthesize=_resources
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x33027af5
// declared property getter: - (id)authenticatingController;	// 0x33027dbd
- (void)authenticationCancelled:(id)cancelled;	// 0x33027c7d
- (void)authenticationFailed:(id)failed;	// 0x33027ca5
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x33027c1d
// declared property getter: - (id)authenticator;	// 0x33027d9d
- (void)dealloc;	// 0x33027ba9
// declared property getter: - (id)resources;	// 0x33027dad
// declared property setter: - (void)setAuthenticatingController:(id)controller;	// 0x33027dd1
- (void)wasPopped;	// 0x33027d21
- (void)wasPushed;	// 0x33027ccd
@end

