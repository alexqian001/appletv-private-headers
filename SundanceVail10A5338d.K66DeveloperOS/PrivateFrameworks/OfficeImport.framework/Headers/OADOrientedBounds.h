/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OADOrientedBounds : NSObject {
	CGRect mBounds;	// 4 = 0x4
	float mRotation;	// 20 = 0x14
	unsigned mFlipX : 1;	// 24 = 0x18
	unsigned mFlipY : 1;	// 24 = 0x18
	int mModeX;	// 28 = 0x1c
	int mModeY;	// 32 = 0x20
}
@property(assign) CGRect bounds;	// G=0x339c10a1; S=0x33976281; converted property
@property(assign) BOOL flipX;	// G=0x339cad49; S=0x339761d1; converted property
@property(assign) BOOL flipY;	// G=0x339cad5d; S=0x339761ed; converted property
@property(assign) float rotation;	// G=0x3397620d; S=0x339761c1; converted property
@property(assign) int xMode;	// G=0x339cad71; S=0x33afda79; converted property
@property(assign) int yMode;	// G=0x339cad81; S=0x33afda89; converted property
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)horizontal;	// 0x3397621d
+ (id)orientedBoundsWithBounds:(CGRect)bounds;	// 0x339cbdd1
+ (id)orientedBoundsWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x339cbe09
- (id)init;	// 0x33976119
- (id)initWithBounds:(CGRect)bounds;	// 0x3396d339
- (id)initWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x3396d371
- (id).cxx_construct;	// 0x3396d335
// converted property getter: - (CGRect)bounds;	// 0x339c10a1
// converted property getter: - (BOOL)flipX;	// 0x339cad49
// converted property getter: - (BOOL)flipY;	// 0x339cad5d
- (unsigned)hash;	// 0x33ba2691
- (BOOL)isEqual:(id)equal;	// 0x339c0f21
- (BOOL)isEqualToOrientedBounds:(id)orientedBounds;	// 0x33ba25b5
// converted property getter: - (float)rotation;	// 0x3397620d
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x33976281
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x339761d1
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x339761ed
- (void)setOrientedBounds:(id)bounds;	// 0x33ba250d
// converted property setter: - (void)setRotation:(float)rotation;	// 0x339761c1
// converted property setter: - (void)setXMode:(int)mode;	// 0x33afda79
// converted property setter: - (void)setYMode:(int)mode;	// 0x33afda89
// converted property getter: - (int)xMode;	// 0x339cad71
// converted property getter: - (int)yMode;	// 0x339cad81
@end

