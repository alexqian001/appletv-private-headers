/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVMusicStoreOtherSeasonsControlFactory, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOtherSeasonsProvider : XXUnknownSuperclass <BRProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	ATVMusicStoreOtherSeasonsControlFactory *_factory;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x20a3ad
- (id)initWithCatalogItem:(id)catalogItem;	// 0x20a3e9
- (id)controlFactory;	// 0x20a565
- (id)dataAtIndex:(long)index;	// 0x20a4d5
- (long)dataCount;	// 0x20a4e5
- (void)dealloc;	// 0x20a471
- (id)hashForDataAtIndex:(long)index;	// 0x20a575
@end
