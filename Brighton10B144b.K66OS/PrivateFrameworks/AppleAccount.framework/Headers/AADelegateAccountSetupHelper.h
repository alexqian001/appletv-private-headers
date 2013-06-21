/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSArray, NSMutableArray, AASetupAssistantService, NSMutableDictionary;

@interface AADelegateAccountSetupHelper : NSObject {
	AASetupAssistantService *_aaService;	// 4 = 0x4
	NSArray *_delegatesToSetup;	// 8 = 0x8
	NSMutableArray *_pendingCompletionBundles;	// 12 = 0xc
	NSMutableDictionary *_assistantDelegates;	// 16 = 0x10
	NSTimer *_delegatesTimeout;	// 20 = 0x14
	id _handler;	// 24 = 0x18
}
- (id)init;	// 0x3347654d
- (void).cxx_destruct;	// 0x33477ac9
- (id)_adjustResponseDictionary:(id)dictionary forAssistantDelegate:(id)assistantDelegate withIdentifier:(id)identifier;	// 0x33476c55
- (void)_completeDelegateSetupWithResponse:(id)response;	// 0x3347739d
- (void)_delegateBundlesDidTimeout;	// 0x33476b39
- (void)_delegateBundlesFinished;	// 0x33476b21
- (id)_loadAssistantDelegateBundles;	// 0x334767a1
- (void)_setupDelegateAccountsWithEmailChoice:(id)emailChoice;	// 0x33477979
- (void)_storeDelegateTokensWithResponse:(id)response;	// 0x33476d99
- (void)setupAppleIDDelegatesWithUsername:(id)username password:(id)password emailChoice:(id)choice withHandler:(id)handler;	// 0x334765ed
- (void)setupiCloudDelegateWithUsername:(id)username password:(id)password emailChoice:(id)choice withHandler:(id)handler;	// 0x334766a1
@end
