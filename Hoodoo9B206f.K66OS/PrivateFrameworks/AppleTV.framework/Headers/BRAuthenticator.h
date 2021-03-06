/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRAuthenticationController, BRAccount;
@protocol BRAuthenticatorDelegate;

@interface BRAuthenticator : NSObject {
@private
	BOOL _isAuthenticating;	// 4 = 0x4
	int _accountChangedState;	// 8 = 0x8
	id<BRAuthenticatorDelegate> _delegate;	// 12 = 0xc
	BOOL _failedOnce;	// 16 = 0x10
	unsigned _scope;	// 20 = 0x14
	BRAccount *_account;	// 24 = 0x18
	BRAuthenticationController *_authenticationController;	// 28 = 0x1c
	id _resources;	// 32 = 0x20
}
@property(readonly, assign) BRAccount *account;	// G=0x3673290d; @synthesize=_account
@property(assign) BRAuthenticationController *authenticationController;	// G=0x367325d5; S=0x367325e5; @synthesize=_authenticationController
@property(assign) id<BRAuthenticatorDelegate> delegate;	// G=0x367328cd; S=0x367328dd; @synthesize=_delegate
@property(readonly, assign) BOOL failedOnce;	// G=0x367328ed; @synthesize=_failedOnce
@property(retain) id resources;	// G=0x3673291d; S=0x36732931; @synthesize=_resources
@property(readonly, assign) unsigned scope;	// G=0x367328fd; @synthesize=_scope
- (id)initWithAccount:(id)account scope:(unsigned)scope;	// 0x367324c1
- (void)_cleanupAuthentication;	// 0x36733019
- (void)_handleAuthenticationCancelledWithError:(id)error;	// 0x36732e9d
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x36732b19
- (void)_handleAuthenticationSucceeded;	// 0x36732955
- (BOOL)_isAuthorizing;	// 0x36732f89
- (void)_postAuthenticationCancelledWithError:(id)error;	// 0x36733195
- (void)_postAuthenticationSucceeded:(BOOL)succeeded;	// 0x36733035
- (unsigned)_scopeToSet;	// 0x36732f79
- (void)_setAccountChangedState:(int)state;	// 0x3673301d
// declared property getter: - (id)account;	// 0x3673290d
- (void)authenticate;	// 0x3673272d
// declared property getter: - (id)authenticationController;	// 0x367325d5
- (void)dealloc;	// 0x36732575
// declared property getter: - (id)delegate;	// 0x367328cd
// declared property getter: - (BOOL)failedOnce;	// 0x367328ed
- (void)logout;	// 0x367328bd
- (id)makeAuthenticationController;	// 0x367326d5
- (BOOL)requiresAuthentication;	// 0x367326d9
- (id)resourceForKey:(id)key defaultValue:(id)value;	// 0x367325f5
// declared property getter: - (id)resources;	// 0x3673291d
// declared property getter: - (unsigned)scope;	// 0x367328fd
// declared property setter: - (void)setAuthenticationController:(id)controller;	// 0x367325e5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x367328dd
// declared property setter: - (void)setResources:(id)resources;	// 0x36732931
@end

