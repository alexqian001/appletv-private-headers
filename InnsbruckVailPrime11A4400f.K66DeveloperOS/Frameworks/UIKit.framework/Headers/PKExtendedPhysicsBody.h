/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import </libc++.1.h>


__attribute__((visibility("hidden")))
@interface PKExtendedPhysicsBody : PKPhysicsBody {
	int _associations;	// 176 = 0xb0
	float _areaFactor;	// 180 = 0xb4
	BOOL _isView;	// 184 = 0xb8
}
@property(assign, nonatomic) BOOL isView;	// G=0x2f96c189; S=0x2f96c199; @synthesize=_isView
@property(assign, nonatomic) float normalizedDensity;	// G=0x2f96bce9; S=0x2f96bcb1; 
+ (id)bodyWithCircleOfRadius:(float)radius;	// 0x2f96ba91
+ (id)bodyWithEdgeChainFromPath:(CGPathRef)path;	// 0x2f96bbc5
+ (id)bodyWithEdgeFromPoint:(CGPoint)point toPoint:(CGPoint)point2;	// 0x2f96bb25
+ (id)bodyWithEdgeLoopFromPath:(CGPathRef)path;	// 0x2f96bc0d
+ (id)bodyWithPolygonFromPath:(CGPathRef)path;	// 0x2f96bb7d
+ (id)bodyWithRectangleOfSize:(CGSize)size;	// 0x2f96bad9
- (id)init;	// 0x2f96bc55
- (id)initWithRectangleOfSize:(CGSize)size;	// 0x2f96bd39
- (void)associate;	// 0x2f96c159
- (id)description;	// 0x2f96be31
- (BOOL)dissociate;	// 0x2f96c16d
// declared property getter: - (BOOL)isView;	// 0x2f96c189
// declared property getter: - (float)normalizedDensity;	// 0x2f96bce9
// declared property setter: - (void)setIsView:(BOOL)view;	// 0x2f96c199
// declared property setter: - (void)setNormalizedDensity:(float)density;	// 0x2f96bcb1
@end

