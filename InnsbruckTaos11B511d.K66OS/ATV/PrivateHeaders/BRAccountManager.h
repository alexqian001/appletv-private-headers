/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "ATVSettingsSaver.h"

@class NSString, NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRAccountManager : BRSingleton <ATVSettingsSaver> {
	NSString *_accountPath;	// 4 = 0x4
	NSString *_dataPath;	// 8 = 0x8
	NSMutableArray *_accounts;	// 12 = 0xc
	NSMutableDictionary *_accountTypes;	// 16 = 0x10
	long _accountTypesLazyInitializationGuard;	// 20 = 0x14
	NSMutableDictionary *_preferredAccounts;	// 24 = 0x18
	NSMutableArray *_pendingAccounts;	// 28 = 0x1c
}
+ (void)initialize;	// 0x416e75
+ (void)setSingleton:(id)singleton;	// 0x416e65
+ (id)singleton;	// 0x416e55
- (id)init;	// 0x416ed9
- (void)_accountDirty:(id)dirty;	// 0x418f69
- (void)_deleteAccount:(id)account;	// 0x418e5d
- (void)_load;	// 0x4182d1
- (id)_loadAccountFromFilePath:(id)filePath;	// 0x418d0d
- (void)_save;	// 0x418959
- (void)_saveAccount:(id)account;	// 0x418aad
- (void)_saveAccount:(id)account flushDiskImmediately:(BOOL)immediately;	// 0x418ac1
- (void)_savePrefs;	// 0x418c5d
- (id)accountWithName:(id)name ofType:(id)type;	// 0x417a9d
- (id)accountWithName:(id)name ofType:(id)type create:(BOOL)create;	// 0x417ac1
- (id)accountsOfType:(id)type;	// 0x417c65
- (void)addPathsToSaveTo:(id)to;	// 0x41714d
- (id)allAccounts;	// 0x417c39
- (void)clearPreferredAccountForType:(id)type;	// 0x4176c5
- (void)dealloc;	// 0x41705d
- (void)evaluatePendingAccounts;	// 0x41731d
- (BOOL)isAccountManaged:(id)managed;	// 0x417cb9
- (void)manageAccount:(id)account;	// 0x417d89
- (void)markAsPreferredAccount:(id)account;	// 0x41783d
- (void)markAsPreferredAccount:(id)account silently:(BOOL)silently;	// 0x417851
- (id)preferredAccountForType:(id)type;	// 0x417535
- (void)registerClass:(Class)aClass forType:(id)type;	// 0x41813d
- (void)removeAccount:(id)account;	// 0x417eed
- (void)setupAccounts;	// 0x41713d
@end
