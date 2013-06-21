/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MCProfileConnectionObserver.h"
#import <NSObject.h> // Unknown library

@class NSCache, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver> {
	NSCache *_offeringCache;	// 4 = 0x4
	NSMutableDictionary *_lookupItemsByStoreLookupID;	// 8 = 0x8
	NSMutableDictionary *_lookupItemsByTokenID;	// 12 = 0xc
	unsigned _nextTokenID;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_queue;	// 20 = 0x14
}
+ (void)_getIsCMCDisabled:(BOOL *)disabled disabledReason:(id *)reason;	// 0x31e26235
+ (BOOL)_isCmcEnabled;	// 0x31e26355
+ (void)setWantsArtwork:(BOOL)artwork;	// 0x31e25965
+ (id)storeOfferingController;	// 0x31e258f9
- (id)init;	// 0x31e25975
- (void)_defaultMediaLibraryDidChangeNotification:(id)_defaultMediaLibrary;	// 0x31e25ce1
- (void)_dumpCache;	// 0x31e26385
- (void)_lookupCompletedWithResponse:(id)response lookupItem:(id)item error:(id)error;	// 0x31e26a9d
- (void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned)anId;	// 0x31e26821
- (void)_onQueueClearCache;	// 0x31e2763d
- (id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)albumItemsQuery;	// 0x31e275b5
- (id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)albumItemsQuery requestAlreadyIssued:(BOOL *)issued responseBlock:(id)block;	// 0x31e26401
- (void)_onQueuePostLookupCompletedForLookupItem:(id)lookupItem offering:(id)offering error:(id)error;	// 0x31e26885
- (void)_onQueueRemoveLookupItem:(id)item;	// 0x31e26605
- (void)_onQueueRemoveLookupItemsForStoreLookupID:(id)storeLookupID;	// 0x31e266c5
- (void)_onQueueSetCachedCompletionOffering:(id)offering forStoreLookupID:(id)storeLookupID;	// 0x31e27601
- (id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)albumItemsQuery responseBlock:(id)block;	// 0x31e26f25
- (id)_sanitizedQuery:(id)query;	// 0x31e25db9
- (void)_storeAccountsDidChangeNotification:(id)_storeAccounts;	// 0x31e25cf1
- (void)cancelCompletionOfferingLookup:(unsigned)lookup;	// 0x31e26085
- (id)completionOfferingForAlbumItemsQuery:(id)albumItemsQuery;	// 0x31e25e8d
- (void)dealloc;	// 0x31e25bbd
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x31e25d01
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x31e25d5d
- (unsigned)startCompletionOfferingLookupForAlbumItemsQuery:(id)albumItemsQuery responseBlock:(id)block;	// 0x31e26109
@end
