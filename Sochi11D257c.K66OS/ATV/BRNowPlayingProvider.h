/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSSet, NSString;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRNowPlayingProvider : XXUnknownSuperclass <BRProvider> {
	id<BRControlFactory> _factory;	// 4 = 0x4
	NSSet *_types;	// 8 = 0x8
	NSString *_playerMediaAssetID;	// 12 = 0xc
}
+ (id)providerForTypes:(id)types;	// 0x4237e9
- (void)_checkPlayerState;	// 0x423cf9
- (id)_initWithTypes:(id)types;	// 0x423991
- (void)_metadataNeedsUpdate:(id)update;	// 0x423c71
- (void)_playerStateChanged:(id)changed;	// 0x423c25
- (id)controlFactory;	// 0x4238d9
- (id)dataAtIndex:(long)index;	// 0x423941
- (long)dataCount;	// 0x423929
- (void)dealloc;	// 0x423835
- (id)hashForDataAtIndex:(long)index;	// 0x423985
@end
