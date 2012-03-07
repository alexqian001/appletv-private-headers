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
@property(readonly, assign, nonatomic) BasicAccount *parent;	// G=0x36085421; @synthesize=_parent
+ (Class)accountClass;	// 0x36085365
+ (Class)clientClass;	// 0x36085375
+ (id)supportedDataclasses;	// 0x36085391
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x36084cbd
- (id)accountCredentialsHandler;	// 0x36084d39
- (id)accountPropertyForKey:(id)key;	// 0x360852a9
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x36084db1
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x36084ec5
- (void)dealloc;	// 0x36085319
- (BOOL)isChildAccount;	// 0x36084d15
- (BOOL)isDisabled;	// 0x360853ed
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x36085125
// declared property getter: - (id)parent;	// 0x36085421
- (id)password;	// 0x36084d19
- (id)persistentUUID;	// 0x360853f1
- (void)removeAccountPropertyForKey:(id)key;	// 0x3608525d
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x36084d49
- (void)saveAccountProperties;	// 0x360850b5
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x36084fb5
- (id)scheduleIdentifier;	// 0x36085401
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x36085149
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x36084dad
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x360853dd
@end
