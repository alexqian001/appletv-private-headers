/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	void *_impl;	// 4 = 0x4
	unsigned _normalization;	// 8 = 0x8
	int _subdivisionSteps;	// 12 = 0xc
}
@property(readonly, copy) NSString *depthNormalization;	// G=0x36168ca5; 
@property(readonly, assign) unsigned faceCount;	// G=0x36168e11; 
@property(readonly, assign) int subdivisionSteps;	// G=0x36168d09; 
@property(readonly, assign) unsigned vertexCount;	// G=0x36168df9; 
+ (id)meshTransformWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex *)vertices faceCount:(unsigned long)count faces:(const CAMeshFace *)faces depthNormalization:(id)normalization;	// 0x36168e79
- (id)init;	// 0x36169861
- (id)initWithCoder:(id)coder;	// 0x36168f65
- (id)initWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex *)vertices faceCount:(unsigned long)count faces:(const CAMeshFace *)faces depthNormalization:(id)normalization;	// 0x361696f1
- (Object *)CA_copyRenderValue;	// 0x36169635
- (float)CA_distanceToValue:(id)value;	// 0x36168d19
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x36168f1d
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x36168ecd
- (BOOL)_constructWithData:(id)data;	// 0x3616934d
- (id)_data;	// 0x3616918d
- (id)_init;	// 0x36168e29
- (id)_initWithMeshTransform:(id)meshTransform;	// 0x36169655
- (id)_subdivideToDepth:(int)depth;	// 0x361690e9
- (id)copyWithZone:(NSZone *)zone;	// 0x36169625
- (void)dealloc;	// 0x36169879
// declared property getter: - (id)depthNormalization;	// 0x36168ca5
- (void)encodeWithCoder:(id)coder;	// 0x3616903d
- (CAMeshFace)faceAtIndex:(unsigned long)index;	// 0x36168db1
// declared property getter: - (unsigned long)faceCount;	// 0x36168e11
- (id)meshTransformForLayer:(id)layer;	// 0x36168d41
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x361695ed
// declared property getter: - (int)subdivisionSteps;	// 0x36168d09
- (CAMeshVertex)vertexAtIndex:(unsigned long)index;	// 0x36168d7d
// declared property getter: - (unsigned long)vertexCount;	// 0x36168df9
@end

