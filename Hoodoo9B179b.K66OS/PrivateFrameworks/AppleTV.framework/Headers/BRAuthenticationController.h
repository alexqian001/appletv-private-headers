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
	BOOL _authenticationWasSuccessful;	// 84 = 0x54
	BRAuthenticator *_authenticator;	// 88 = 0x58
	id _resources;	// 92 = 0x5c
	BRController *_authenticatingController;	// 96 = 0x60
}
@property(retain) BRController *authenticatingController;	// G=0x302476e9; S=0x302476fd; @synthesize=_authenticatingController
@property(readonly, assign) BRAuthenticator *authenticator;	// G=0x302476c9; @synthesize=_authenticator
@property(readonly, assign) id resources;	// G=0x302476d9; @synthesize=_resources
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x30247421
// declared property getter: - (id)authenticatingController;	// 0x302476e9
- (void)authenticationCancelled:(id)cancelled;	// 0x302475a9
- (void)authenticationFailed:(id)failed;	// 0x302475d1
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x30247549
// declared property getter: - (id)authenticator;	// 0x302476c9
- (void)dealloc;	// 0x302474d5
// declared property getter: - (id)resources;	// 0x302476d9
// declared property setter: - (void)setAuthenticatingController:(id)controller;	// 0x302476fd
- (void)wasPopped;	// 0x3024764d
- (void)wasPushed;	// 0x302475f9
@end
