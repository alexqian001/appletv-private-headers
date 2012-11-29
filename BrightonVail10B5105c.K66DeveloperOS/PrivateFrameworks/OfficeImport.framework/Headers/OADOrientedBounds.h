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
@property(assign) CGRect bounds;	// G=0x37911a09; S=0x378c6be9; converted property
@property(assign) BOOL flipX;	// G=0x3791b6b1; S=0x378c6b39; converted property
@property(assign) BOOL flipY;	// G=0x3791b6c5; S=0x378c6b55; converted property
@property(assign) float rotation;	// G=0x378c6b75; S=0x378c6b29; converted property
@property(assign) int xMode;	// G=0x3791b6d9; S=0x37a4e3b9; converted property
@property(assign) int yMode;	// G=0x3791b6e9; S=0x37a4e3c9; converted property
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)horizontal;	// 0x378c6b85
+ (id)orientedBoundsWithBounds:(CGRect)bounds;	// 0x3791c739
+ (id)orientedBoundsWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x3791c771
- (id)init;	// 0x378c6a81
- (id)initWithBounds:(CGRect)bounds;	// 0x378bdca1
- (id)initWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x378bdcd9
- (id).cxx_construct;	// 0x378bdc9d
// converted property getter: - (CGRect)bounds;	// 0x37911a09
// converted property getter: - (BOOL)flipX;	// 0x3791b6b1
// converted property getter: - (BOOL)flipY;	// 0x3791b6c5
- (unsigned)hash;	// 0x37af3061
- (BOOL)isEqual:(id)equal;	// 0x37911889
- (BOOL)isEqualToOrientedBounds:(id)orientedBounds;	// 0x37af2f85
// converted property getter: - (float)rotation;	// 0x378c6b75
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x378c6be9
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x378c6b39
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x378c6b55
- (void)setOrientedBounds:(id)bounds;	// 0x37af2edd
// converted property setter: - (void)setRotation:(float)rotation;	// 0x378c6b29
// converted property setter: - (void)setXMode:(int)mode;	// 0x37a4e3b9
// converted property setter: - (void)setYMode:(int)mode;	// 0x37a4e3c9
// converted property getter: - (int)xMode;	// 0x3791b6d9
// converted property getter: - (int)yMode;	// 0x3791b6e9
@end
