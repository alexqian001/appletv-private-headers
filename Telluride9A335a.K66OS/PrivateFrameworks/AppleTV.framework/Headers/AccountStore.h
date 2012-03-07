/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class SSAccount, NSLock, NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface AccountStore : NSObject {
@private
	NSMutableArray *_accounts;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
@property(readonly, assign) NSArray *accounts;	// G=0x34335e89; 
@property(readonly, assign) SSAccount *activeAccount;	// G=0x34335f7d; 
@property(readonly, assign) SSAccount *activeLockerAccount;	// G=0x3433609d; 
@property(readonly, assign, getter=isExpired) BOOL expired;	// G=0x343361dd; 
+ (id)defaultStore;	// 0x34335e1d
- (id)init;	// 0x34335d59
- (id)_addAccount:(id)account asActiveAccount:(BOOL)account2 asActiveLockerAccount:(BOOL)account3;	// 0x34336389
- (id)_copyAccountsFromManager;	// 0x34336435
- (id)_copyActiveAccountIdentifier:(const CFStringRef *)identifier;	// 0x343364dd
- (id)_copyActiveLockerAccountIdentifier;	// 0x34336559
- (id)_newDemoAccount;	// 0x343365d1
- (id)_ntsAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x343366dd
- (id)_ntsAccounts;	// 0x343366a5
- (void)_ntsSetActiveAccount:(id)account;	// 0x343367a5
- (void)_ntsSetActiveLockerAccount:(id)account;	// 0x34336859
- (void)_postAccountStoreDidChange;	// 0x3433699d
- (void)_signOutAccount:(id)account;	// 0x343369e5
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x34335ef9
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;	// 0x34335f6d
// declared property getter: - (id)accounts;	// 0x34335e89
// declared property getter: - (id)activeAccount;	// 0x34335f7d
// declared property getter: - (id)activeLockerAccount;	// 0x3433609d
- (id)addAccount:(id)account;	// 0x343361bd
- (id)addAccountWithUserInfo:(id)userInfo;	// 0x34336379
- (void)dealloc;	// 0x34335dbd
// declared property getter: - (BOOL)isExpired;	// 0x343361dd
- (BOOL)isExpiredForTokenType:(int)tokenType;	// 0x343361e1
- (void)resetAccountWithUserInfo:(id)userInfo;	// 0x3433637d
- (void)resetExpiration;	// 0x343361e5
- (void)resetExpirationForTokenType:(int)tokenType;	// 0x343361e9
- (void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x343361ed
- (id)setAccountCreditsWithUserInfo:(id)userInfo;	// 0x34336381
- (id)setActiveAccount:(id)account;	// 0x343361f1
- (id)setActiveLockerAccount:(id)account;	// 0x34336211
- (void)signOutAccount:(id)account;	// 0x34336231
- (id)signOutAccountsWithUserInfo:(id)userInfo;	// 0x34336385
- (void)signOutAllAccounts;	// 0x34336261
- (void)synchronizeData;	// 0x34336375
@end
