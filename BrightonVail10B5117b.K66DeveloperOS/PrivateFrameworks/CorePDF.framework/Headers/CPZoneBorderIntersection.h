/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "NSCopying.h"
#import "CPCopying.h"

@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying> {
	CGRect intersectionRect;	// 4 = 0x4
	CPZoneBorder *intersectingBorder;	// 20 = 0x14
	BOOL forwardVector;	// 24 = 0x18
	BOOL backwardVector;	// 25 = 0x19
}
@property(assign) BOOL backwardVector;	// G=0x33a5a421; S=0x33a5a411; converted property
@property(assign) BOOL forwardVector;	// G=0x33a5a401; S=0x33a5a3f1; converted property
@property(retain) CPZoneBorder *intersectingBorder;	// G=0x33a5a3e1; S=0x33a5a3d1; converted property
@property(assign) CGRect intersectionRect;	// G=0x33a5a3ad; S=0x33a5a391; converted property
- (id)initSuper;	// 0x33a5a35d
// converted property getter: - (BOOL)backwardVector;	// 0x33a5a421
- (int)comparePositionLengthwise:(id)lengthwise;	// 0x33a5a431
- (id)copyWithZone:(NSZone *)zone;	// 0x33a5a389
// converted property getter: - (BOOL)forwardVector;	// 0x33a5a401
// converted property getter: - (id)intersectingBorder;	// 0x33a5a3e1
// converted property getter: - (CGRect)intersectionRect;	// 0x33a5a3ad
// converted property setter: - (void)setBackwardVector:(BOOL)vector;	// 0x33a5a411
// converted property setter: - (void)setForwardVector:(BOOL)vector;	// 0x33a5a3f1
// converted property setter: - (void)setIntersectingBorder:(id)border;	// 0x33a5a3d1
// converted property setter: - (void)setIntersectionRect:(CGRect)rect;	// 0x33a5a391
@end

