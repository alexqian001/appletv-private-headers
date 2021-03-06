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
@property(readonly, copy) NSString *depthNormalization;	// G=0x30869b19; 
@property(readonly, assign) unsigned faceCount;	// G=0x30869c85; 
@property(readonly, assign) int subdivisionSteps;	// G=0x30869b7d; 
@property(readonly, assign) unsigned vertexCount;	// G=0x30869c6d; 
+ (id)meshTransformWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex *)vertices faceCount:(unsigned long)count faces:(const CAMeshFace *)faces depthNormalization:(id)normalization;	// 0x30869ced
- (id)init;	// 0x3086a6d5
- (id)initWithCoder:(id)coder;	// 0x30869dd9
- (id)initWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex *)vertices faceCount:(unsigned long)count faces:(const CAMeshFace *)faces depthNormalization:(id)normalization;	// 0x3086a565
- (Object *)CA_copyRenderValue;	// 0x3086a4a9
- (float)CA_distanceToValue:(id)value;	// 0x30869b8d
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x30869d91
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x30869d41
- (BOOL)_constructWithData:(id)data;	// 0x3086a1c1
- (id)_data;	// 0x3086a001
- (id)_init;	// 0x30869c9d
- (id)_initWithMeshTransform:(id)meshTransform;	// 0x3086a4c9
- (id)_subdivideToDepth:(int)depth;	// 0x30869f5d
- (id)copyWithZone:(NSZone *)zone;	// 0x3086a499
- (void)dealloc;	// 0x3086a6ed
// declared property getter: - (id)depthNormalization;	// 0x30869b19
- (void)encodeWithCoder:(id)coder;	// 0x30869eb1
- (CAMeshFace)faceAtIndex:(unsigned long)index;	// 0x30869c25
// declared property getter: - (unsigned long)faceCount;	// 0x30869c85
- (id)meshTransformForLayer:(id)layer;	// 0x30869bb5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3086a461
// declared property getter: - (int)subdivisionSteps;	// 0x30869b7d
- (CAMeshVertex)vertexAtIndex:(unsigned long)index;	// 0x30869bf1
// declared property getter: - (unsigned long)vertexCount;	// 0x30869c6d
@end

