/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UICGPointKey : NSObject <NSCopying> {
	CGPoint _point;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CGPoint point;	// G=0x3101f115; @synthesize=_point
+ (id)pointKeyWithPoint:(CGPoint)point;	// 0x3101efa1
- (id)copyWithZone:(NSZone *)zone;	// 0x3101eff1
- (unsigned)hash;	// 0x3101f0b1
- (BOOL)isEqual:(id)equal;	// 0x3101f041
// declared property getter: - (CGPoint)point;	// 0x3101f115
@end
