/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRListControl, BRDropShadowControl;

__attribute__((visibility("hidden")))
@interface BRBoxListControl : BRControl {
	BRListControl *_list;	// 84 = 0x54
	BRDropShadowControl *_shadow;	// 88 = 0x58
}
@property(retain) id providers;	// G=0x357ad1; S=0x357a95; converted property
- (id)init;	// 0x357819
- (void).cxx_destruct;	// 0x357bf1
- (void)layoutSubcontrols;	// 0x357b31
- (float)listHeightToMaximum:(float)maximum;	// 0x357b11
// converted property getter: - (id)providers;	// 0x357ad1
- (void)setProvider:(id)provider;	// 0x357a49
// converted property setter: - (void)setProviders:(id)providers;	// 0x357a95
- (void)setSelectedIndex:(long)index;	// 0x357af1
@end
