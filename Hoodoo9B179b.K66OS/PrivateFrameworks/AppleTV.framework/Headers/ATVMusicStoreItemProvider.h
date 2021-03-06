/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

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
@property(assign, getter=isOrderReversed) BOOL orderReversed;	// G=0x3019299d; S=0x30192941; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x301926ed
- (id)initWithCatalogItem:(id)catalogItem;	// 0x30192729
- (id)_augmentCollectionItem:(id)item atIndex:(long)index;	// 0x3019323d
- (void)_checkForBlueDottedItems;	// 0x30193461
- (void)_resetBlueDottedItems;	// 0x301936fd
- (id)accessibilityLabel;	// 0x3019293d
- (id)controlFactory;	// 0x301929ad
- (id)dataAtIndex:(long)index;	// 0x301929e9
- (long)dataCount;	// 0x301929c9
- (void)dealloc;	// 0x30192899
- (id)hashForDataAtIndex:(long)index;	// 0x30192b1d
// converted property getter: - (BOOL)isOrderReversed;	// 0x3019299d
- (void)loadSupplementalItemsFromURL:(id)url;	// 0x30192d45
- (void)moreItemSelected:(id)selected;	// 0x30192c8d
- (void)registerMoreItem;	// 0x30192b91
// converted property setter: - (void)setOrderReversed:(BOOL)reversed;	// 0x30192941
- (void)supplementalItemsLoaded:(id)loaded;	// 0x30192ff1
- (void)supplementalItemsReceived:(id)received;	// 0x30192e8d
@end

