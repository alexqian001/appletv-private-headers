/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAICOrientedBounds : NSObject {
}
+ (id)absoluteOrientedBoundsOfDrawable:(id)drawable;	// 0x313a0de1
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)relativeOrientedBounds parentOrientedBounds:(id)bounds parentLogicalBounds:(CGRect)bounds3;	// 0x313a166d
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)orientedBounds;	// 0x313a0eed
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)orientedBounds logicalBounds:(CGRect)bounds;	// 0x313a1205
+ (CGRect)axisParallelBoundsOfOrientedBounds:(id)orientedBounds;	// 0x313a19e9
+ (id)relativeOrientedBoundsOfDrawable:(id)drawable;	// 0x313a103d
+ (float)scaleFactorFromLength:(float)length toLength:(float)length2;	// 0x313a0db5
+ (CGAffineTransform)transformFromBounds:(CGRect)bounds toOrientedBounds:(id)orientedBounds;	// 0x313a1391
@end

