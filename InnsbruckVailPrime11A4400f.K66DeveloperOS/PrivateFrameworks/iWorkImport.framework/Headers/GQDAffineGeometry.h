/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import </libobjc.A.h>
#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"


@interface GQDAffineGeometry : NSObject <GQDNameMappable> {
	CGSize mNaturalSize;	// 4 = 0x4
	CGSize mSize;	// 12 = 0xc
	BOOL mSizesLocked;	// 20 = 0x14
	BOOL mAspectRatioLocked;	// 21 = 0x15
	CGPoint mPosition;	// 24 = 0x18
	float mAngle;	// 32 = 0x20
	BOOL mHorizontalFlip;	// 36 = 0x24
	BOOL mVerticalFlip;	// 37 = 0x25
	float mShearXAngle;	// 40 = 0x28
	float mShearYAngle;	// 44 = 0x2c
}
@property(assign) float angle;	// G=0x33ca583d; S=0x33ca584d; converted property
@property(assign) CGSize naturalSize;	// G=0x33ca5799; S=0x33ca57b1; converted property
@property(assign) CGPoint position;	// G=0x33ca5811; S=0x33ca5829; converted property
@property(assign) CGSize size;	// G=0x33ca57c5; S=0x33ca57dd; converted property
+ (CGRect)boundsOfTransformedRect:(CGRect)transformedRect transform:(id)transform;	// 0x33ca5bf9
+ (const StateSpec *)stateForReading;	// 0x33ca578d
+ (void)transformRect:(CGRect)rect transform:(id)transform upperLeft:(CGPoint *)left lowerLeft:(CGPoint *)left4 lowerRight:(CGPoint *)right upperRight:(CGPoint *)right6;	// 0x33ca5af9
- (id).cxx_construct;	// 0x33ca6161
// converted property getter: - (float)angle;	// 0x33ca583d
- (BOOL)aspectRatioLocked;	// 0x33ca5801
- (BOOL)horizontalFlip;	// 0x33ca585d
- (CGRect)naturalBounds;	// 0x33ca5acd
// converted property getter: - (CGSize)naturalSize;	// 0x33ca5799
- (CGPoint)nonrotatedPosition;	// 0x33ca5a19
// converted property getter: - (CGPoint)position;	// 0x33ca5811
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x33ca55a9
// converted property setter: - (void)setAngle:(float)angle;	// 0x33ca584d
// converted property setter: - (void)setNaturalSize:(CGSize)size;	// 0x33ca57b1
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x33ca5829
// converted property setter: - (void)setSize:(CGSize)size;	// 0x33ca57dd
- (float)shearXAngle;	// 0x33ca587d
- (float)shearYAngle;	// 0x33ca588d
// converted property getter: - (CGSize)size;	// 0x33ca57c5
- (CGSize)sizeOfBoundingBox;	// 0x33ca58a1
- (BOOL)sizesLocked;	// 0x33ca57f1
- (CGAffineTransform)transform;	// 0x33ca5d35
- (CGAffineTransform)transformHasVFlip:(BOOL)flip vFlip:(BOOL)flip2 hasHFlip:(BOOL)flip3 hFlip:(BOOL)flip4;	// 0x33ca5d71
- (BOOL)verticalFlip;	// 0x33ca586d
@end

