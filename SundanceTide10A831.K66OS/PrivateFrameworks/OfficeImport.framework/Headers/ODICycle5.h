/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ODICycle.h"


@interface ODICycle5 : ODICycle {
}
+ (void)addShapeForNode:(id)node relativeBounds:(CGRect)bounds state:(id)state;	// 0x36cb155d
+ (void)addShapeForTransition:(id)transition startAngle:(float)angle endAngle:(float)angle3 state:(id)state;	// 0x36cb169d
+ (float)intersectionAngleNextToAngle:(float)angle isAfter:(BOOL)after state:(id)state;	// 0x36cb17e9
+ (BOOL)map1NodeWithState:(id)state;	// 0x36cb1c01
+ (BOOL)map2NodeWithState:(id)state;	// 0x36cb1ca1
+ (CGRect)mapGSpaceWithState:(id)state;	// 0x36cb152d
+ (void)mapNode:(id)node index:(unsigned)index state:(id)state;	// 0x36cb15dd
+ (void)mapStyleForTransition:(id)transition shape:(id)shape state:(id)state;	// 0x36cb17c9
+ (void)mapTransition:(id)transition index:(unsigned)index state:(id)state;	// 0x36cb1ac1
+ (CGSize)nodeSizeWithState:(id)state;	// 0x36cb14b9
+ (float)normalizedAngle:(float)angle;	// 0x36cb1649
@end

