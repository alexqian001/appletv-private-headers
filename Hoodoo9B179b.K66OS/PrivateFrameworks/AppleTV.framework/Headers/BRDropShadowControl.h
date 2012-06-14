/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


@interface BRDropShadowControl : BRControl {
@private
	BRControl *_content;	// 48 = 0x30
	int _shadowStyle;	// 52 = 0x34
	float _sizeFactor;	// 56 = 0x38
}
@property(retain) BRControl *content;	// G=0x30290739; S=0x302906c9; converted property
@property(assign) float shadowSizeFactor;	// G=0x302906b9; S=0x3029067d; converted property
@property(assign) int shadowStyle;	// G=0x3029066d; S=0x30290641; converted property
- (id)init;	// 0x30290595
- (void)_updateImages;	// 0x30290a01
// converted property getter: - (id)content;	// 0x30290739
- (void)dealloc;	// 0x302905f5
- (void)layoutSubcontrols;	// 0x30290749
// converted property setter: - (void)setContent:(id)content;	// 0x302906c9
// converted property setter: - (void)setShadowSizeFactor:(float)factor;	// 0x3029067d
// converted property setter: - (void)setShadowStyle:(int)style;	// 0x30290641
// converted property getter: - (float)shadowSizeFactor;	// 0x302906b9
// converted property getter: - (int)shadowStyle;	// 0x3029066d
@end
