/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMShapeBuilder.h"

@class OADStroke;

@interface CMLineShapeBuilder : CMShapeBuilder {
	OADStroke *_stroke;	// 20 = 0x14
}
- (float)_adjustedCoefAtIndex:(int)index;	// 0x36b6da11
- (CGRect)_boundingBoxForLineEnd:(id)lineEnd;	// 0x36a89921
- (float)_getRotationFromPoint:(CGPoint)point toPoint:(CGPoint)point2 withBounds:(id)bounds;	// 0x36a893a1
- (void)_renderBentConnector2InPath:(CGPathRef)path withTransform:(CGAffineTransform)transform andOrientedBounds:(id)bounds headSrc:(CGPoint *)src headDst:(CGPoint *)dst tailSrc:(CGPoint *)src6 tailDst:(CGPoint *)dst7;	// 0x36b794c1
- (void)_renderBentConnector3InPath:(CGPathRef)path withTransform:(CGAffineTransform)transform andOrientedBounds:(id)bounds headSrc:(CGPoint *)src headDst:(CGPoint *)dst tailSrc:(CGPoint *)src6 tailDst:(CGPoint *)dst7;	// 0x36b6d8a1
- (void)_renderLineEnd:(id)end atPoint:(CGPoint)point withOrientation:(float)orientation inPath:(CGPathRef)path;	// 0x36a89449
- (void)_renderStraightConnector1InPath:(CGPathRef)path withTransform:(CGAffineTransform)transform andOrientedBounds:(id)bounds headSrc:(CGPoint *)src headDst:(CGPoint *)dst tailSrc:(CGPoint *)src6 tailDst:(CGPoint *)dst7;	// 0x36a89285
- (CGPathRef)copyShapeWithTransform:(CGAffineTransform)transform;	// 0x36ba7c39
- (void)dealloc;	// 0x36a89b29
- (void)setStroke:(id)stroke;	// 0x36a88f3d
@end
