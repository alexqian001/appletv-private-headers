/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;
@protocol YTAuthenticatorDelegate;

@interface YTAuthenticator : NSObject {
	id<YTAuthenticatorDelegate> _delegate;	// 4 = 0x4
	NSMutableArray *_deferredRequests;	// 8 = 0x8
	int _accountAuthState;	// 12 = 0xc
	int _deviceAuthState;	// 16 = 0x10
}
+ (id)sharedAuthenticator;	// 0x37065ab5
- (id)init;	// 0x37065afd
- (void)_addAccountAuthenticationObserers;	// 0x37065eb9
- (void)_addDeferredRequest:(id)request accountAuthRequired:(BOOL)required;	// 0x37065bbd
- (void)_addDeviceAuthenticationObserers;	// 0x37065ccd
- (void)_completeAuthenticationForDeferredRequests;	// 0x37066255
- (void)_didAuthenticateAccount:(id)account;	// 0x37065fcd
- (void)_didAuthenticateDevice:(id)device;	// 0x37065de1
- (void)_failedToAuthenticateAccount:(id)authenticateAccount;	// 0x37066031
- (void)_failedToAuthenticateDevice:(id)authenticateDevice;	// 0x37065e21
- (void)_removeAccountAuthenticationObservers;	// 0x37065f51
- (void)_removeDefferredRequests;	// 0x37066441
- (void)_removeDeviceAuthenticationObservers;	// 0x37065d65
- (void)addAuthenticationHeadersToRequest:(id)request accountAuthRequired:(BOOL)required;	// 0x37066461
- (BOOL)cachedCredentialsValid;	// 0x370666f1
- (void)clearAccountInfo;	// 0x3706664d
- (void)dealloc;	// 0x37065b61
- (void)invalidateToken;	// 0x370665fd
- (BOOL)isAccountAuthenticated;	// 0x37066755
- (BOOL)isWaitingForAuthentication;	// 0x37066725
- (BOOL)loadStoredCredentials;	// 0x3706676d
- (void)setAccount:(id)account password:(id)password;	// 0x370660c9
- (void)setDelegate:(id)delegate;	// 0x37065bad
- (void)userCancelledAccountAuthentication;	// 0x37066129
@end
