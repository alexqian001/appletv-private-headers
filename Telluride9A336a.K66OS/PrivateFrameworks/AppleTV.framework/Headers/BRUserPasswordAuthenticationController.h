/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticationController.h"

@class BRWaitPromptControl, NSTimer, NSString;

@interface BRUserPasswordAuthenticationController : BRAuthenticationController {
@private
	NSString *_userName;	// 96 = 0x60
	NSTimer *_authTimeoutTimer;	// 100 = 0x64
	NSTimer *_promptTimer;	// 104 = 0x68
	BOOL _hasTimedOut;	// 108 = 0x6c
	BOOL _haveShownPasswordOnce;	// 109 = 0x6d
	BRWaitPromptControl *_waitPrompt;	// 112 = 0x70
}
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x33a409b5
- (id)_askUserForPassword:(id)password userName:(id)name;	// 0x33a411c5
- (id)_askUserForUserName:(id)userName;	// 0x33a40e71
- (void)_authSucceededComplete:(BOOL)complete;	// 0x33a40e45
- (void)_authenticate;	// 0x33a41a61
- (void)_authenticationTimedOut:(id)anOut;	// 0x33a4188d
- (BOOL)_shouldAttemptAuthorizationAgainForUser:(id)user error:(id)error;	// 0x33a414b1
- (void)_showCancellationMessage:(id)message;	// 0x33a41675
- (void)_showPrompt:(id)prompt;	// 0x33a4177d
- (void)authenticationCancelled:(id)cancelled;	// 0x33a40b45
- (void)authenticationFailed:(id)failed;	// 0x33a40c49
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x33a40aa1
- (BOOL)configurePostUserPasswordOptionsWithUser:(id)user;	// 0x33a41c95
- (BOOL)configurePreUserPasswordOptions;	// 0x33a41c91
- (void)dealloc;	// 0x33a40a55
- (BOOL)handleDisplayForAuthCancelledError:(id)authCancelledError;	// 0x33a41c9d
- (BOOL)handleDisplayForAuthFailureError:(id)authFailureError userName:(id)name attempAuthorizationAgain:(BOOL *)again;	// 0x33a41ca1
- (BOOL)performPostAuthenticationOperationsWithUser:(id)user accountOptionsPreviouslySet:(BOOL)set;	// 0x33a41c99
- (void)wasPopped;	// 0x33a40dd1
- (void)wasPushed;	// 0x33a40d6d
@end
