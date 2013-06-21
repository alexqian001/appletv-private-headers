/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRMenuItem;

__attribute__((visibility("hidden")))
@interface BRMenuItemMediator : XXUnknownSuperclass {
	BRMenuItem *_menuItem;	// 4 = 0x4
	SEL _mediaParadeSelector;	// 8 = 0x8
	SEL _menuSelector;	// 12 = 0xc
	id _object;	// 16 = 0x10
}
@property(assign) SEL mediaPreviewSelector;	// G=0x337349; S=0x337339; converted property
@property(assign) SEL menuActionSelector;	// G=0x337369; S=0x337359; converted property
@property(readonly, retain) BRMenuItem *menuItem;	// G=0x337329; converted property
@property(readonly, retain) id object;	// G=0x3373c5; converted property
+ (id)mediatorWithMenuItem:(id)menuItem;	// 0x337225
- (id)initWithMenuItem:(id)menuItem;	// 0x337271
- (void)dealloc;	// 0x3372c5
// converted property getter: - (SEL)mediaPreviewSelector;	// 0x337349
// converted property getter: - (SEL)menuActionSelector;	// 0x337369
// converted property getter: - (id)menuItem;	// 0x337329
// converted property getter: - (id)object;	// 0x3373c5
// converted property setter: - (void)setMediaPreviewSelector:(SEL)selector;	// 0x337339
// converted property setter: - (void)setMenuActionSelector:(SEL)selector;	// 0x337359
- (void)setMenuActionSelector:(SEL)selector withObject:(id)object;	// 0x337379
@end
