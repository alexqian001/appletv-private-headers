/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextPlane : BRControl {
	NSAttributedString *_string;	// 84 = 0x54
	float _pursuitGap;	// 88 = 0x58
	CGSize _cachedNaturalTextSize;	// 92 = 0x5c
}
@property(retain) id attributedString;	// G=0x2ef891; S=0x2ef801; converted property
+ (Class)layerClass;	// 0x2ef799
// converted property getter: - (id)attributedString;	// 0x2ef891
- (void)dealloc;	// 0x2ef7b5
- (void)drawRect:(CGRect)rect;	// 0x2ef9b5
- (CGSize)naturalTextSize;	// 0x2ef909
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2ef801
- (void)setPursuitGap:(float)gap;	// 0x2ef8a1
- (void)setTileSize:(CGSize)size;	// 0x2ef8d9
@end
