/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRListControl, BRDropShadowControl;

__attribute__((visibility("hidden")))
@interface BRBoxListControl : BRControl {
	BRListControl *_list;	// 84 = 0x54
	BRDropShadowControl *_shadow;	// 88 = 0x58
}
@property(retain) id providers;	// G=0x32fd8d; S=0x32fd51; converted property
- (id)init;	// 0x32fab1
- (void)dealloc;	// 0x32fcad
- (void)layoutSubcontrols;	// 0x32fded
- (float)listHeightToMaximum:(float)maximum;	// 0x32fdcd
// converted property getter: - (id)providers;	// 0x32fd8d
- (void)setProvider:(id)provider;	// 0x32fd11
// converted property setter: - (void)setProviders:(id)providers;	// 0x32fd51
- (void)setSelectedIndex:(long)index;	// 0x32fdad
@end
