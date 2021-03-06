/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVMusicStoreCatalogItemController.h"

@class BRDetailedMediaControl, NSTimer, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemDetailController : ATVMusicStoreCatalogItemController {
@private
	BRScrollControl *_scrollControl;	// 92 = 0x5c
	BRDetailedMediaControl *_detailedControl;	// 96 = 0x60
	ATVMediaQueryRef _rentalQuery;	// 100 = 0x64
	ATVMediaItemRef _rentalItem;	// 104 = 0x68
	NSTimer *_expiryInfoTimer;	// 108 = 0x6c
	BOOL _isPurchased;	// 112 = 0x70
}
@property(readonly, retain) BRDetailedMediaControl *detailedControl;	// G=0x35cf3bbd; converted property
@property(retain) id itemDictionary;	// G=0x35cf3ab1; S=0x35cf3bcd; converted property
- (id)init;	// 0x35cf386d
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x35cf38b1
- (void)_cacheManagerStateChanged:(id)changed;	// 0x35cf4c15
- (void)_checkIfAlreadyRented;	// 0x35cf4c25
- (BOOL)_checkIfPurchased;	// 0x35cf4941
- (id)_displayableItemAdjacentTo:(id)to forward:(BOOL)forward;	// 0x35cf475d
- (id)_displayableItemAfter:(id)after;	// 0x35cf4735
- (id)_displayableItemBefore:(id)before;	// 0x35cf4749
- (void)_expiryInfoTimerFired:(id)fired;	// 0x35cf5241
- (id)_filterPreferredItemsFromDictionary:(id)dictionary;	// 0x35cf4245
- (void)_layoutControls;	// 0x35cf4439
- (void)_nextItemSelected;	// 0x35cf3c8d
- (void)_nextItemSelected:(id)selected;	// 0x35cf4715
- (void)_previousItemSelected;	// 0x35cf3cd5
- (void)_previousItemSelected:(id)selected;	// 0x35cf4725
- (void)_relatedContentControlCreated:(id)created;	// 0x35cf401d
- (void)_rentalQueryComplete;	// 0x35cf4dd1
- (void)_setCopyrightText;	// 0x35cf3f45
- (void)_setupDetailedControl;	// 0x35cf3d1d
- (void)_startExpiryInfoTimer;	// 0x35cf5161
- (void)_stopExpiryInfoTimer;	// 0x35cf5211
- (void)_updateExpiryInfo;	// 0x35cf4f19
- (void)_updateFocus;	// 0x35cf4679
- (void)_updatePurchasedLoadingText;	// 0x35cf49bd
- (void)controlWasActivated;	// 0x35cf3af5
- (void)controlWasDeactivated;	// 0x35cf3b7d
- (void)dealloc;	// 0x35cf39f1
// converted property getter: - (id)detailedControl;	// 0x35cf3bbd
// converted property getter: - (id)itemDictionary;	// 0x35cf3ab1
- (void)relatedContentLoaded:(id)loaded;	// 0x35cf3fa1
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x35cf3bcd
@end

