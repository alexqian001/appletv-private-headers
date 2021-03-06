/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSString, NSArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRMediaObjectProvider : XXUnknownSuperclass <BRProvider> {
	id<BRControlFactory> _controlFactory;	// 4 = 0x4
	NSArray *_mediaObjects;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(retain) id controlFactory;	// G=0x329d15; S=0x329cb1; converted property
@property(retain) NSArray *mediaObjects;	// G=0x329ca1; S=0x329c65; converted property
@property(retain) NSString *name;	// G=0x329df1; S=0x329db5; converted property
+ (id)providerWithMediaObjects:(id)mediaObjects controlFactory:(id)factory;	// 0x329b75
- (long)controlCount;	// 0x329da5
// converted property getter: - (id)controlFactory;	// 0x329d15
- (id)dataAtIndex:(long)index;	// 0x329d25
- (long)dataCount;	// 0x329ced
- (void)dealloc;	// 0x329bed
- (id)hashForDataAtIndex:(long)index;	// 0x329d51
// converted property getter: - (id)mediaObjects;	// 0x329ca1
// converted property getter: - (id)name;	// 0x329df1
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x329cb1
// converted property setter: - (void)setMediaObjects:(id)objects;	// 0x329c65
// converted property setter: - (void)setName:(id)name;	// 0x329db5
@end

