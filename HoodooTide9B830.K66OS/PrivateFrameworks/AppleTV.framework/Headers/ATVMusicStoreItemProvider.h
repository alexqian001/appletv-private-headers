/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemProvider : NSObject <BRProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	BOOL _reverseOrder;	// 12 = 0xc
	BOOL _isAnyItemBlueDotted;	// 13 = 0xd
	NSMutableDictionary *_watchedStatesForItems;	// 16 = 0x10
}
@property(assign, getter=isOrderReversed) BOOL orderReversed;	// G=0x328d4bc9; S=0x328d4b6d; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x328d4919
- (id)initWithCatalogItem:(id)catalogItem;	// 0x328d4955
- (id)_augmentCollectionItem:(id)item atIndex:(long)index;	// 0x328d5469
- (void)_checkForBlueDottedItems;	// 0x328d568d
- (void)_resetBlueDottedItems;	// 0x328d5929
- (id)accessibilityLabel;	// 0x328d4b69
- (id)controlFactory;	// 0x328d4bd9
- (id)dataAtIndex:(long)index;	// 0x328d4c15
- (long)dataCount;	// 0x328d4bf5
- (void)dealloc;	// 0x328d4ac5
- (id)hashForDataAtIndex:(long)index;	// 0x328d4d49
// converted property getter: - (BOOL)isOrderReversed;	// 0x328d4bc9
- (void)loadSupplementalItemsFromURL:(id)url;	// 0x328d4f71
- (void)moreItemSelected:(id)selected;	// 0x328d4eb9
- (void)registerMoreItem;	// 0x328d4dbd
// converted property setter: - (void)setOrderReversed:(BOOL)reversed;	// 0x328d4b6d
- (void)supplementalItemsLoaded:(id)loaded;	// 0x328d521d
- (void)supplementalItemsReceived:(id)received;	// 0x328d50b9
@end
