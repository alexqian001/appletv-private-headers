/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataClient.h"
#import "AppleTV-Structs.h"

@class NSArray, NSMutableDictionary, NSMutableArray, NSCountedSet, BRBackgroundTask;

__attribute__((visibility("hidden")))
@interface MEiTunesRentalDataClient : ATVDataClient {
	BRBackgroundTask *_rentalExpirationTask;	// 4 = 0x4
	NSArray *_rentals;	// 8 = 0x8
	double _lastRefreshInitiated;	// 12 = 0xc
	BOOL _acquisitionRefreshesRentals;	// 20 = 0x14
	NSMutableArray *_cacheTriggers;	// 24 = 0x18
	int _lastRankValue;	// 28 = 0x1c
	NSCountedSet *_showInfosToIgnore;	// 32 = 0x20
	NSMutableDictionary *_showInfosToWriteToKVS;	// 36 = 0x24
	BOOL _overrideRentalCountCheck;	// 40 = 0x28
	CFArrayRef _iCloudItems;	// 44 = 0x2c
}
@property(retain) NSArray *rentals;	// G=0x4d2c5; S=0x4d0f5; converted property
+ (void)_addPurchase:(id)purchase;	// 0x4cc09
+ (void)_updateMediaItem:(id)item withShowInfo:(id)showInfo transactionOptions:(id)options;	// 0x4d345
+ (void)_updateShowInfoForRentals:(id)rentals;	// 0x4d4b9
+ (id)rentalDataClient;	// 0x4c611
- (id)init;	// 0x4c6d5
- (void).cxx_destruct;	// 0x5017d
- (BOOL)_isShowInfoBeingWrittenToKVSForMediaItem:(id)mediaItem;	// 0x4edf5
- (void)_updateShowInfoForMediaItem:(id)mediaItem withPropertiesUpdated:(id)propertiesUpdated;	// 0x4ef61
- (void)acquisitionSuccessful:(id)successful;	// 0x4e195
- (void)authenticationCancelled:(id)cancelled;	// 0x4e5f9
- (void)authenticationSucceeded:(id)succeeded;	// 0x4e505
- (void)availableRentalCount:(id)count;	// 0x4e005
- (void)availableRentals:(id)rentals;	// 0x4df65
- (id)buildRentalsArray:(id)array;	// 0x4d765
- (void)checkInOutstandingRentals:(id)outstandingRentals;	// 0x4ffd5
- (id)cloudItems;	// 0x4d009
- (void)concreteDataClientConnect;	// 0x4cacd
- (void)dealloc;	// 0x4ca11
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x4cb0d
- (void)fetchAvailableRentals;	// 0x4faa5
- (id)imageURLWithAsset:(id)asset size:(CGSize)size crop:(BOOL)crop;	// 0x4cba5
- (void)mainMenuVisible:(id)visible;	// 0x4ffc5
- (void)markAsConnected;	// 0x4ddd5
- (id)mediaItemWithEarliestExpirationDate;	// 0x4de0d
- (void)networkStateChanged:(id)changed;	// 0x4ff31
- (void)playbackResolutionChanged:(id)changed;	// 0x4ea39
- (void)preferredAccountAuthenticationSucceeded:(id)succeeded;	// 0x4fe15
- (void)preferredAccountEstablished:(id)established;	// 0x4fc19
- (void)preferredAccountRemoved:(id)removed;	// 0x4faed
- (id)processQuery:(id)query;	// 0x4dc01
- (void)propertyUpdated:(id)updated;	// 0x4eaa9
- (void)queueRentalRefreshCompleteNotification:(id)notification;	// 0x4f539
- (void)refreshAvailableRentals;	// 0x4f681
- (void)refreshAvailableRentalsImmediate;	// 0x4f8a9
- (void)refreshAvailableRentalsOverridingRentalCheckCount;	// 0x4f65d
- (void)rentalRefreshRequest:(id)request;	// 0x4e6b1
// converted property getter: - (id)rentals;	// 0x4d2c5
- (id)rentalsAndPurchases;	// 0x4d2d9
// converted property setter: - (void)setRentals:(id)rentals;	// 0x4d0f5
- (void)showInfoChanged:(id)changed;	// 0x4e6c1
- (void)updateRentalExpirationTask;	// 0x4fd59
@end

