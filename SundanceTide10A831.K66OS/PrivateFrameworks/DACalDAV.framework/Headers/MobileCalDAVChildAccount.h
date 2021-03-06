/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVAccount.h"

@class BasicAccount;

@interface MobileCalDAVChildAccount : MobileCalDAVAccount {
	BasicAccount *_parent;	// 140 = 0x8c
}
@property(readonly, assign, nonatomic) BasicAccount *parent;	// G=0x348ab009; @synthesize=_parent
+ (Class)accountClass;	// 0x348aa5f5
+ (Class)clientClass;	// 0x348aae71
+ (id)supportedDataclasses;	// 0x348aae8d
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x348aa551
- (id)accountCredentialsHandler;	// 0x348aab79
- (id)accountPropertyForKey:(id)key;	// 0x348aaa59
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x348aac11
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x348aad81
- (void)dealloc;	// 0x348aa5a9
- (BOOL)isChildAccount;	// 0x348aa605
- (BOOL)isDisabled;	// 0x348aaee9
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x348aaeed
- (id)localizedInvalidPasswordMessage;	// 0x348aaf59
// declared property getter: - (id)parent;	// 0x348ab009
- (id)password;	// 0x348aa671
- (id)persistentUUID;	// 0x348aab01
- (void)removeAccountPropertyForKey:(id)key;	// 0x348aa9d5
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x348aabad
- (void)saveAccountProperties;	// 0x348aa7d5
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x348aa6dd
- (id)scheduleIdentifier;	// 0x348aab11
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x348aa885
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x348aa6d9
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x348aaed9
- (id)username;	// 0x348aa609
@end

