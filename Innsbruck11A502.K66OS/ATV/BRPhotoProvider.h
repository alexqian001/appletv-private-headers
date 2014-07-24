/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRPhotoProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_collections;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
}
@property(retain) id controlFactory;	// G=0x32f5f5; S=0x32f5b9; converted property
+ (id)providerWithCollections:(id)collections controlFactory:(id)factory;	// 0x32f49d
- (id)initWithCollections:(id)collections controlFactory:(id)factory;	// 0x32f4dd
// converted property getter: - (id)controlFactory;	// 0x32f5f5
- (id)dataAtIndex:(long)index;	// 0x32f625
- (long)dataCount;	// 0x32f605
- (void)dealloc;	// 0x32f555
- (id)hashForDataAtIndex:(long)index;	// 0x32f671
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x32f5b9
@end
