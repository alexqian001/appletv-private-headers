/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RUIYTHistoryManager : XXUnknownSuperclass {
	NSMutableDictionary *_accountHistory;	// 4 = 0x4
}
+ (id)historyCacheDirectory;	// 0x26e781
+ (int)historySize;	// 0x26e7fd
- (id)init;	// 0x26e5dd
- (void).cxx_destruct;	// 0x26eddd
- (void)_accountWasRemoved:(id)removed;	// 0x26ed99
- (void)_archiveHistoryToDisk;	// 0x26f035
- (id)_assetArchivesForCurrentAccount;	// 0x26ee3d
- (id)_assetArchivesOfAccount:(id)account;	// 0x26ee89
- (void)_assetWasPlayedNotification:(id)notification;	// 0x26ead5
- (id)_currentAccountName;	// 0x26edf1
- (id)_loadHistoryOfAccount:(id)account;	// 0x26ef81
- (id)_pathForHistoryOfAccount:(id)account;	// 0x26eeed
- (void)_removeHistoryFromDiskForAccount:(id)account;	// 0x26f22d
- (void)clearAssetHistoryForCurrentAccount;	// 0x26e8c9
- (void)dealloc;	// 0x26e701
- (id)historyForCurrentAccount;	// 0x26e855
- (void)removeAssetsFromHistoryForCurrentAccoutWithIDs:(id)ids;	// 0x26e999
@end
