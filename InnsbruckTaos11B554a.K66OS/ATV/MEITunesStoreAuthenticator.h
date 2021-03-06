/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticator.h"

@class NSString, BRStateMachine;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAuthenticator : BRUserPasswordAuthenticator {
	unsigned char _currentAttempts;	// 12 = 0xc
	unsigned char _currentUnknownCancelations;	// 13 = 0xd
	BOOL _oneClick;	// 14 = 0xe
	BRStateMachine *_stateMachine;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	unsigned _scope;	// 24 = 0x18
}
@property(retain) NSString *password;	// G=0x2ee49; S=0x2ed79; converted property
@property(assign, nonatomic) unsigned scope;	// G=0x2ee61; S=0x2ee71; @synthesize=_scope
+ (void)upgradeAccount:(id)account coder:(id)coder;	// 0x2ced5
- (id)initWithAccount:(id)account;	// 0x2d085
- (void).cxx_destruct;	// 0x2ee81
- (void)_cancelAuthenticationWithCode:(int)code;	// 0x2f605
- (void)_handleAuthenticationAttemptDidCompleteWithAccount:(id)_handleAuthenticationAttempt error:(id)error;	// 0x2f299
- (BOOL)_isAuthorizing;	// 0x2d90d
- (void)_login;	// 0x2ef95
- (void)_logout;	// 0x2f4f9
- (id)_makeAuthenticationController;	// 0x2d815
- (void)_registerStateMachineBlocks;	// 0x2dbb9
- (unsigned)_scopeToSet;	// 0x2eeb5
- (void)_sendAuthenticationRequest;	// 0x2eee5
- (void)dealloc;	// 0x2d1e9
// converted property getter: - (id)password;	// 0x2ee49
- (BOOL)promptsForExistingAccount;	// 0x2ee5d
- (BOOL)requiresAuthentication;	// 0x2d685
- (BOOL)requiresPassword:(id *)password;	// 0x2d689
- (BOOL)requiresSpeedTestDisclosureAgreement;	// 0x2d411
- (BOOL)requiresUser:(id *)user;	// 0x2d54d
// declared property getter: - (unsigned)scope;	// 0x2ee61
- (void)setOneClick:(BOOL)click;	// 0x2d53d
// converted property setter: - (void)setPassword:(id)password;	// 0x2ed79
// declared property setter: - (void)setScope:(unsigned)scope;	// 0x2ee71
- (BOOL)shouldOfferOneClickAuthorization;	// 0x2d45d
- (BOOL)shouldResetPasswordOnAuthenticationError:(id)error;	// 0x2da81
- (id)storeServicesAccount;	// 0x2d335
@end

