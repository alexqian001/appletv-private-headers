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
@property(readonly, assign, nonatomic) BasicAccount *parent;	// G=0x32edf8f1; @synthesize=_parent
+ (Class)accountClass;	// 0x32edf835
+ (Class)clientClass;	// 0x32edf845
+ (id)supportedDataclasses;	// 0x32edf861
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x32edf18d
- (id)accountCredentialsHandler;	// 0x32edf209
- (id)accountPropertyForKey:(id)key;	// 0x32edf779
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x32edf281
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x32edf395
- (void)dealloc;	// 0x32edf7e9
- (BOOL)isChildAccount;	// 0x32edf1e5
- (BOOL)isDisabled;	// 0x32edf8bd
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x32edf5f5
// declared property getter: - (id)parent;	// 0x32edf8f1
- (id)password;	// 0x32edf1e9
- (id)persistentUUID;	// 0x32edf8c1
- (void)removeAccountPropertyForKey:(id)key;	// 0x32edf72d
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x32edf219
- (void)saveAccountProperties;	// 0x32edf585
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x32edf485
- (id)scheduleIdentifier;	// 0x32edf8d1
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x32edf619
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x32edf27d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x32edf8ad
@end
