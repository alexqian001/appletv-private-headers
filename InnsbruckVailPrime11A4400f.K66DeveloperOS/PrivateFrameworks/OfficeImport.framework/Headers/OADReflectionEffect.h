/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADEffect.h"


@interface OADReflectionEffect : OADEffect {
	float mBlurRadius;	// 8 = 0x8
	float mStartOpacity;	// 12 = 0xc
	float mStartPosition;	// 16 = 0x10
	float mEndOpacity;	// 20 = 0x14
	float mEndPosition;	// 24 = 0x18
	float mDistance;	// 28 = 0x1c
	float mDirection;	// 32 = 0x20
	float mFadeDirection;	// 36 = 0x24
	float mXScale;	// 40 = 0x28
	float mYScale;	// 44 = 0x2c
	float mXSkew;	// 48 = 0x30
	float mYSkew;	// 52 = 0x34
	int mAlignment;	// 56 = 0x38
	BOOL mRotateWithShape;	// 60 = 0x3c
}
@property(assign) int alignment;	// G=0x318f1c45; S=0x31855da5; converted property
@property(assign) float blurRadius;	// G=0x318f1b45; S=0x31855b29; converted property
@property(assign) float direction;	// G=0x318f1ba5; S=0x31855b69; converted property
@property(assign) float distance;	// G=0x318f1b95; S=0x31855b59; converted property
@property(assign) float endOpacity;	// G=0x318f1b75; S=0x3185e9fd; converted property
@property(assign) float endPosition;	// G=0x318f1b85; S=0x31855b49; converted property
@property(assign) float fadeDirection;	// G=0x318f1bb5; S=0x318f1bc5; converted property
@property(assign) BOOL rotateWithShape;	// G=0x318f1c55; S=0x31855b89; converted property
@property(assign) float startOpacity;	// G=0x31855db5; S=0x31855b39; converted property
@property(assign) float startPosition;	// G=0x318f1b55; S=0x318f1b65; converted property
@property(assign) float xScale;	// G=0x318f1bd5; S=0x318f1be5; converted property
@property(assign) float xSkew;	// G=0x318f1c05; S=0x318f1c15; converted property
@property(assign) float yScale;	// G=0x318f1bf5; S=0x31855b79; converted property
@property(assign) float ySkew;	// G=0x318f1c25; S=0x318f1c35; converted property
- (id)init;	// 0x318555e1
// converted property getter: - (int)alignment;	// 0x318f1c45
// converted property getter: - (float)blurRadius;	// 0x318f1b45
- (id)copyWithZone:(NSZone *)zone;	// 0x318f19bd
// converted property getter: - (float)direction;	// 0x318f1ba5
// converted property getter: - (float)distance;	// 0x318f1b95
// converted property getter: - (float)endOpacity;	// 0x318f1b75
// converted property getter: - (float)endPosition;	// 0x318f1b85
// converted property getter: - (float)fadeDirection;	// 0x318f1bb5
- (unsigned)hash;	// 0x318f1c65
- (BOOL)isEqual:(id)equal;	// 0x318f1e19
// converted property getter: - (BOOL)rotateWithShape;	// 0x318f1c55
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x31855da5
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x31855b29
// converted property setter: - (void)setDirection:(float)direction;	// 0x31855b69
// converted property setter: - (void)setDistance:(float)distance;	// 0x31855b59
// converted property setter: - (void)setEndOpacity:(float)opacity;	// 0x3185e9fd
// converted property setter: - (void)setEndPosition:(float)position;	// 0x31855b49
// converted property setter: - (void)setFadeDirection:(float)direction;	// 0x318f1bc5
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x31855b89
// converted property setter: - (void)setStartOpacity:(float)opacity;	// 0x31855b39
// converted property setter: - (void)setStartPosition:(float)position;	// 0x318f1b65
- (void)setStyleColor:(id)color;	// 0x318f1b41
// converted property setter: - (void)setXScale:(float)scale;	// 0x318f1be5
// converted property setter: - (void)setXSkew:(float)skew;	// 0x318f1c15
// converted property setter: - (void)setYScale:(float)scale;	// 0x31855b79
// converted property setter: - (void)setYSkew:(float)skew;	// 0x318f1c35
// converted property getter: - (float)startOpacity;	// 0x31855db5
// converted property getter: - (float)startPosition;	// 0x318f1b55
// converted property getter: - (float)xScale;	// 0x318f1bd5
// converted property getter: - (float)xSkew;	// 0x318f1c05
// converted property getter: - (float)yScale;	// 0x318f1bf5
// converted property getter: - (float)ySkew;	// 0x318f1c25
@end

