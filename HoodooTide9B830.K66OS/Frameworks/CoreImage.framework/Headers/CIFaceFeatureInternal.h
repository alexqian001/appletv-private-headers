/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFaceFeature.h"


__attribute__((visibility("hidden")))
@interface CIFaceFeatureInternal : CIFaceFeature {
@private
	CGRect bounds;	// 4 = 0x4
	BOOL hasLeftEyePosition;	// 20 = 0x14
	CGPoint leftEyePosition;	// 24 = 0x18
	BOOL hasRightEyePosition;	// 32 = 0x20
	CGPoint rightEyePosition;	// 36 = 0x24
	BOOL hasMouthPosition;	// 44 = 0x2c
	CGPoint mouthPosition;	// 48 = 0x30
}
@property(assign) CGRect bounds;	// G=0x34a318a9; S=0x34a318cd; @synthesize
@property(assign) BOOL hasLeftEyePosition;	// G=0x34a318e9; S=0x34a318f9; @synthesize
@property(assign) BOOL hasMouthPosition;	// G=0x34a31989; S=0x34a31999; @synthesize
@property(assign) BOOL hasRightEyePosition;	// G=0x34a31939; S=0x34a31949; @synthesize
@property(assign) CGPoint leftEyePosition;	// G=0x34a31909; S=0x34a31925; @synthesize
@property(assign) CGPoint mouthPosition;	// G=0x34a319a9; S=0x34a319c5; @synthesize
@property(assign) CGPoint rightEyePosition;	// G=0x34a31959; S=0x34a31975; @synthesize
+ (id)faceFeatureWithBounds:(CGRect)bounds;	// 0x34a3154d
+ (id)faceFeaturesWithBoundsArray:(const CGRect *)boundsArray count:(unsigned)count;	// 0x34a315a5
- (id)initWithBounds:(CGRect)bounds;	// 0x34a316f1
- (id)initWithBounds:(CGRect)bounds hasLeftEyePosition:(BOOL)position leftEyePosition:(CGPoint)position3 hasRightEyePosition:(BOOL)position4 rightEyePosition:(CGPoint)position5 hasMouthPosition:(BOOL)position6 mouthPosition:(CGPoint)position7;	// 0x34a317c9
- (id).cxx_construct;	// 0x34a319d9
// declared property getter: - (CGRect)bounds;	// 0x34a318a9
// declared property getter: - (BOOL)hasLeftEyePosition;	// 0x34a318e9
// declared property getter: - (BOOL)hasMouthPosition;	// 0x34a31989
// declared property getter: - (BOOL)hasRightEyePosition;	// 0x34a31939
// declared property getter: - (CGPoint)leftEyePosition;	// 0x34a31909
// declared property getter: - (CGPoint)mouthPosition;	// 0x34a319a9
// declared property getter: - (CGPoint)rightEyePosition;	// 0x34a31959
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x34a318cd
// declared property setter: - (void)setHasLeftEyePosition:(BOOL)position;	// 0x34a318f9
// declared property setter: - (void)setHasMouthPosition:(BOOL)position;	// 0x34a31999
// declared property setter: - (void)setHasRightEyePosition:(BOOL)position;	// 0x34a31949
// declared property setter: - (void)setLeftEyePosition:(CGPoint)position;	// 0x34a31925
// declared property setter: - (void)setMouthPosition:(CGPoint)position;	// 0x34a319c5
// declared property setter: - (void)setRightEyePosition:(CGPoint)position;	// 0x34a31975
@end
