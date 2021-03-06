/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"


@interface CPTextBox : CPRegion {
	float rotationAngle;	// 68 = 0x44
}
@property(assign) float rotationAngle;	// G=0x32ac4101; S=0x32ac40dd; converted property
- (id)init;	// 0x32ac4069
- (void)accept:(id)accept;	// 0x32ac40c5
- (CGRect)bounds;	// 0x32ac4169
- (id)copyWithZone:(NSZone *)zone;	// 0x32ac4095
- (id)description;	// 0x32ac4249
- (BOOL)isBoxRegion;	// 0x32ac40c1
- (BOOL)isRotated;	// 0x32ac4111
// converted property getter: - (float)rotationAngle;	// 0x32ac4101
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x32ac40dd
@end

