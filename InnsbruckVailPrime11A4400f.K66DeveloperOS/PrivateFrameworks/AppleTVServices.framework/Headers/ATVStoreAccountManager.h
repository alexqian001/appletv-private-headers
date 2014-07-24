/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSMutableSet, NSMutableArray, SSAccount, NSString;

@interface ATVStoreAccountManager : NSObject {
	NSMutableArray *_notifyTokens;	// 4 = 0x4
	NSMutableSet *_knownAccounts;	// 8 = 0x8
	SSAccount *_lastActiveAccount;	// 12 = 0xc
	NSString *_accountNameMemento;	// 16 = 0x10
	NSString *_passwordMomento;	// 20 = 0x14
}
@property(retain) NSString *accountNameMemento;	// G=0x300d8e65; S=0x300d8e79; @synthesize=_accountNameMemento
@property(retain) NSMutableSet *knownAccounts;	// G=0x300d8e1d; S=0x300d8e31; @synthesize=_knownAccounts
@property(retain) SSAccount *lastActiveAccount;	// G=0x300d8e41; S=0x300d8e55; @synthesize=_lastActiveAccount
@property(retain) NSString *passwordMomento;	// G=0x300d8e89; S=0x300d8e9d; @synthesize=_passwordMomento
+ (id)sharedInstance;	// 0x300d73e1
- (id)init;	// 0x300d7489
- (void).cxx_destruct;	// 0x300d8ead
- (void)_accountStoreChanged:(id)changed;	// 0x300d8881
- (void)_authenticateActivityChanged:(id)changed;	// 0x300d8d99
- (id)accountForAccountName:(id)accountName;	// 0x300d7bd9
// declared property getter: - (id)accountNameMemento;	// 0x300d8e65
- (void)authenticateAccount:(id)account allowPrompt:(BOOL)prompt completion:(id)completion;	// 0x300d81e1
- (void)authenticateWithName:(id)name password:(id)password completion:(id)completion;	// 0x300d7dfd
- (void)dealloc;	// 0x300d7ae1
// declared property getter: - (id)knownAccounts;	// 0x300d8e1d
// declared property getter: - (id)lastActiveAccount;	// 0x300d8e41
- (void)notePasswordEntered:(id)entered forAccountName:(id)accountName;	// 0x300d7d31
// declared property getter: - (id)passwordMomento;	// 0x300d8e89
// declared property setter: - (void)setAccountNameMemento:(id)memento;	// 0x300d8e79
// declared property setter: - (void)setKnownAccounts:(id)accounts;	// 0x300d8e31
// declared property setter: - (void)setLastActiveAccount:(id)account;	// 0x300d8e55
// declared property setter: - (void)setPasswordMomento:(id)momento;	// 0x300d8e9d
@end
