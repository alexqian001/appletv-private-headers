/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import <DAAccount.h> // Unknown library

@class NSMutableSet, NSObject, LDAPTaskManager;
@protocol OS_dispatch_queue;

@interface LDAPAccount : DAAccount {
	LDAPTaskManager *_taskManager;	// 60 = 0x3c
	NSMutableSet *_searchTaskSet;	// 64 = 0x40
	NSObject<OS_dispatch_queue> *_backgroundQueue;	// 68 = 0x44
	BOOL _isShuttingDown;	// 72 = 0x48
}
@property(assign) int authType;	// G=0x30998bd9; S=0x30998bf5; converted property
@property(readonly, assign) NSObject<OS_dispatch_queue> *backgroundQueue;	// G=0x30998f45; @synthesize=_backgroundQueue
@property(retain) id host;	// G=0x30998a1d; S=0x30998a39; converted property
@property(assign, setter=setLDAPAccountVersion:) int ldapAccountVersion;	// G=0x3099890d; S=0x30998941; 
@property(assign, setter=setLDAPDidAutodiscovery:) BOOL ldapDidAutodiscovery;	// G=0x30998c11; S=0x30998c35; 
@property(assign) int port;	// G=0x30998ab5; S=0x30998ad1; converted property
@property(readonly, retain) LDAPTaskManager *taskManager;	// G=0x30996f6d; converted property
@property(assign) BOOL useSSL;	// G=0x30998b35; S=0x30998b55; converted property
@property(retain) id username;	// G=0x30998985; S=0x309989a1; converted property
+ (Class)accountClass;	// 0x3099740d
+ (Class)clientClass;	// 0x30997429
+ (Class)daemonClass;	// 0x30997445
+ (id)defaultProperties;	// 0x30997481
+ (id)displayedAccountTypeString;	// 0x30997f41
+ (id)displayedShortAccountTypeString;	// 0x30997f4d
+ (id)supportedDataclasses;	// 0x30997461
- (id)initWithProperties:(id)properties;	// 0x30996f7d
- (id)_oldURLsForKeychain;	// 0x30997fc1
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x309982c5
- (BOOL)accountNeedsUpgrade;	// 0x30998729
- (void)addSearchSettings:(id)settings;	// 0x30997f69
// converted property getter: - (int)authType;	// 0x30998bd9
// declared property getter: - (id)backgroundQueue;	// 0x30998f45
- (void)cancelAllSearchQueries;	// 0x3099776d
- (void)cancelSearchQuery:(id)query;	// 0x30997609
- (void)checkValidityWithConsumer:(id)consumer;	// 0x30997ca5
- (id)connectionURL;	// 0x309988d1
- (id)connectionURLWithSSL:(BOOL)ssl;	// 0x30998839
- (void)dealloc;	// 0x30997371
- (id)displayName;	// 0x30997f59
// converted property getter: - (id)host;	// 0x30998a1d
- (BOOL)isEqualToAccount:(id)account;	// 0x30998c55
- (BOOL)isLDAPAccount;	// 0x30998c51
- (int)keychainAccessibilityType;	// 0x309975b5
// declared property getter: - (int)ldapAccountVersion;	// 0x3099890d
// declared property getter: - (BOOL)ldapDidAutodiscovery;	// 0x30998c11
- (void)ldapGetDefaultSearchBaseTask:(id)task completedWithStatus:(int)status error:(id)error defaultSearchBase:(id)base;	// 0x30997d41
- (void)ldapSearchTask:(id)task finishedWithError:(id)error foundItems:(id)items;	// 0x30997b0d
- (id)localizedIdenticalAccountFailureMessage;	// 0x30998e1d
- (id)localizedInvalidPasswordMessage;	// 0x30998e95
- (void)performSearchQuery:(id)query;	// 0x30997865
// converted property getter: - (int)port;	// 0x30998ab5
- (id)propertiesToSave;	// 0x309971f5
- (void)removeSearchSettings:(id)settings;	// 0x30997f95
- (BOOL)resetCertWarnings;	// 0x3099881d
- (void)saveAccountSettings;	// 0x309975b9
- (id)searchSettings;	// 0x30998bbd
// converted property setter: - (void)setAuthType:(int)type;	// 0x30998bf5
// converted property setter: - (void)setHost:(id)host;	// 0x30998a39
// declared property setter: - (void)setLDAPAccountVersion:(int)version;	// 0x30998941
// declared property setter: - (void)setLDAPDidAutodiscovery:(BOOL)autodiscovery;	// 0x30998c35
// converted property setter: - (void)setPort:(int)port;	// 0x30998ad1
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x30998b55
// converted property setter: - (void)setUsername:(id)username;	// 0x309989a1
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x30998901
// converted property getter: - (id)taskManager;	// 0x30996f6d
- (BOOL)upgradeAccount;	// 0x309986a1
// converted property getter: - (BOOL)useSSL;	// 0x30998b35
// converted property getter: - (id)username;	// 0x30998985
@end
