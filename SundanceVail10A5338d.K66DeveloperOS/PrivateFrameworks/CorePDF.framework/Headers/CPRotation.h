/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPZone.h"


@interface CPRotation : CPZone {
	float rotationAngle;	// 132 = 0x84
}
@property(assign) float rotationAngle;	// G=0x332e5149; S=0x332e5125; converted property
- (id)init;	// 0x332e50e1
- (void)accept:(id)accept;	// 0x332e510d
- (CGRect)bounds;	// 0x332e5159
- (CGRect)renderedBounds;	// 0x332e5211
// converted property getter: - (float)rotationAngle;	// 0x332e5149
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x332e5125
@end
