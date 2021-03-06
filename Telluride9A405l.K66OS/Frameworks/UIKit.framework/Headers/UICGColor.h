/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIColor.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UICGColor : UIColor {
@private
	CGColorRef cachedColor;	// 8 = 0x8
}
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x32d3a391
- (CGColorRef)CGColor;	// 0x32d3a3f1
- (float)alphaComponent;	// 0x32d4f0e1
- (id)colorSpaceName;	// 0x32ea4399
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x32ea4315
- (void)dealloc;	// 0x32d409f5
- (id)description;	// 0x32ea4431
- (unsigned)hash;	// 0x32d4ffd1
- (BOOL)isEqual:(id)equal;	// 0x32e12721
- (BOOL)isPatternColor;	// 0x32e127c5
- (void)set;	// 0x32d4fced
- (void)setFill;	// 0x32ea4359
- (void)setStroke;	// 0x32ea4379
@end

