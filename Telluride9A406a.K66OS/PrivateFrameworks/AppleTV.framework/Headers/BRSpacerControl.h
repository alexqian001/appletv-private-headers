/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


@interface BRSpacerControl : BRControl {
@private
	float _pixels;	// 48 = 0x30
}
@property(assign) float pixels;	// G=0x3309f9bd; S=0x3309f9ad; converted property
+ (id)spacerWithPixels:(float)pixels;	// 0x3309f911
- (id)init;	// 0x3309f951
// converted property getter: - (float)pixels;	// 0x3309f9bd
// converted property setter: - (void)setPixels:(float)pixels;	// 0x3309f9ad
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3309f9cd
@end
