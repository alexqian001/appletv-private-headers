/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIColor.h"


__attribute__((visibility("hidden")))
@interface UIDeviceRGBColor : UIColor {
@private
	float redComponent;	// 8 = 0x8
	float greenComponent;	// 12 = 0xc
	float blueComponent;	// 16 = 0x10
	float alphaComponent;	// 20 = 0x14
	CGColorRef cachedColor;	// 24 = 0x18
}
@property(readonly, assign) float alphaComponent;	// G=0x353ddcbd; converted property
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x3537a2bd
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x35537a6d
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3534e9a5
- (CGColorRef)CGColor;	// 0x3531698d
- (CGColorRef)_createCGColorWithAlpha:(float)alpha;	// 0x3534edc1
// converted property getter: - (float)alphaComponent;	// 0x353ddcbd
- (id)colorSpaceName;	// 0x353dbad9
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x353ddccd
- (void)dealloc;	// 0x35372019
- (id)description;	// 0x35537c11
- (BOOL)getHue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness alpha:(float *)alpha;	// 0x35537cc1
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x35537d55
- (unsigned)hash;	// 0x353d98e5
- (BOOL)isEqual:(id)equal;	// 0x353db9b5
- (void)set;	// 0x35316935
- (void)setFill;	// 0x353d6369
- (void)setStroke;	// 0x35537be5
@end

