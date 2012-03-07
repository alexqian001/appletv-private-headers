/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray;
@protocol BRControlFactory;

@interface ATVDotMacRecentAlbumsProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_accountsBeingLoaded;	// 4 = 0x4
	NSArray *_mostRecentAlbums;	// 8 = 0x8
	NSMutableArray *_accountProviders;	// 12 = 0xc
	NSMutableArray *_collectionProviders;	// 16 = 0x10
	NSMutableArray *_collectionsBeingLoaded;	// 20 = 0x14
	id<BRControlFactory> _controlFactory;	// 24 = 0x18
	BOOL _queryInProgress;	// 28 = 0x1c
	double _lastQueryTime;	// 32 = 0x20
}
+ (id)cacheFolderPath;	// 0x336e5775
+ (id)mainMenuProvider;	// 0x336e57b9
+ (id)standardProvider;	// 0x336e57f9
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x336e5589
- (void)_accountsInserted:(id)inserted;	// 0x336e5b51
- (void)_accountsRemoved:(id)removed;	// 0x336e4e9d
- (void)_aggregateRecentAlbums:(id)albums forAccountName:(id)accountName;	// 0x336e4aa1
- (void)_collectionImageUpdated:(id)updated;	// 0x336e50e9
- (void)_collectionProviderUpdated:(id)updated;	// 0x336e5275
- (void)_loadAccounts;	// 0x336e5bd5
- (void)_loadCollection:(id)collection;	// 0x336e4a19
- (void)_loadRSSFeedWithAccountName:(id)accountName;	// 0x336e5c8d
- (void)_loadRecentAlbumsFromCache;	// 0x336e5839
- (void)_networkChanged:(id)changed;	// 0x336e4df5
- (BOOL)_okToFetchNewData;	// 0x336e4cb9
- (id)_persistentAccountNames;	// 0x336e5085
- (void)_removeRecentCachedAlbumsFromAccount:(id)account;	// 0x336e5db9
- (void)_rssFeedRequestReady:(id)ready;	// 0x336e5f8d
- (void)_saveRecentAlbumsToCache;	// 0x336e4709
- (void)_sortCollectionsBeingLoaded;	// 0x336e486d
- (id)controlFactory;	// 0x336e46f9
- (id)dataAtIndex:(long)index;	// 0x336e547d
- (long)dataCount;	// 0x336e549d
- (void)dealloc;	// 0x336e54bd
- (id)hashForDataAtIndex:(long)index;	// 0x336e544d
- (void)reload;	// 0x336e5421
@end
