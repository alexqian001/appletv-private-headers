/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"


@interface UIBezierPath : NSObject <NSCopying, NSCoding> {
@private
	CGPathRef _path;	// 4 = 0x4
	float *_lineDashPattern;	// 8 = 0x8
	unsigned _lineDashPatternCount;	// 12 = 0xc
	float _lineWidth;	// 16 = 0x10
	float _miterLimit;	// 20 = 0x14
	float _flatness;	// 24 = 0x18
	float _lineDashPhase;	// 28 = 0x1c
	int _lineCapStyle;	// 32 = 0x20
	int _lineJoinStyle;	// 36 = 0x24
	BOOL _usesEvenOddFillRule;	// 40 = 0x28
	CGPathRef _immutablePath;	// 44 = 0x2c
	BOOL _immutablePathIsValid;	// 48 = 0x30
}
@property(assign, nonatomic) CGPathRef CGPath;	// G=0x358275ed; S=0x35827641; 
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x358276c9; 
@property(readonly, assign, nonatomic) CGPoint currentPoint;	// G=0x358276e1; 
@property(readonly, assign, getter=isEmpty) BOOL empty;	// G=0x358276b1; 
@property(assign, nonatomic) float flatness;	// G=0x35828155; S=0x35828165; @synthesize=_flatness
@property(assign, nonatomic) int lineCapStyle;	// G=0x358280f5; S=0x35828105; @synthesize=_lineCapStyle
@property(assign, nonatomic) int lineJoinStyle;	// G=0x35828115; S=0x35828125; @synthesize=_lineJoinStyle
@property(assign, nonatomic) float lineWidth;	// G=0x358280d5; S=0x358280e5; @synthesize=_lineWidth
@property(assign, nonatomic) float miterLimit;	// G=0x35828135; S=0x35828145; @synthesize=_miterLimit
@property(assign, nonatomic) BOOL usesEvenOddFillRule;	// G=0x35828175; S=0x35828185; @synthesize=_usesEvenOddFillRule
+ (id)_bezierPathWithRoundedRect:(CGRect)roundedRect byRoundingCorners:(unsigned)corners cornerRadius:(float)radius;	// 0x3574c339
+ (id)_roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners cornerRadius:(float)radius segments:(int)segments;	// 0x3574c371
+ (id)bezierPath;	// 0x3574dd6d
+ (id)bezierPathForBottomOfRect:(CGRect)rect withCornerRadius:(float)cornerRadius;	// 0x35827af1
+ (id)bezierPathForTopOfRect:(CGRect)rect withCornerRadius:(float)cornerRadius;	// 0x358279cd
+ (id)bezierPathWithArcCenter:(CGPoint)arcCenter radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x3582732d
+ (id)bezierPathWithCGPath:(CGPathRef)cgpath;	// 0x35827441
+ (id)bezierPathWithOvalInRect:(CGRect)rect;	// 0x35826ed1
+ (id)bezierPathWithRect:(CGRect)rect;	// 0x35826e7d
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect byRoundingCorners:(unsigned)corners cornerRadii:(CGSize)radii;	// 0x35826f5d
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect cornerRadius:(float)radius;	// 0x35826f25
+ (id)roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners withCornerRadii:(id)cornerRadii;	// 0x357cafb5
+ (id)roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners withCornerRadius:(float)cornerRadius;	// 0x3574c2fd
+ (id)roundedRectBezierPath:(CGRect)path withRoundedEdges:(int)roundedEdges;	// 0x3579c12d
+ (id)roundedRectBezierPath:(CGRect)path withTopCornerRadius:(float)topCornerRadius withBottomCornerRadius:(float)bottomCornerRadius;	// 0x35827c0d
+ (id)shadowBezierPath:(CGRect)path withRoundedEdges:(int)roundedEdges;	// 0x35818641
- (id)init;	// 0x358267f9
- (id)initWithCoder:(id)coder;	// 0x35826825
// declared property getter: - (CGPathRef)CGPath;	// 0x358275ed
- (CGPathRef)_createMutablePathByDecodingData:(id)data;	// 0x35827cd1
- (id)_initWithCGMutablePath:(CGPathRef)cgmutablePath;	// 0x3574c861
- (CGPathRef)_mutablePath;	// 0x357cb481
- (CGPathRef)_pathRef;	// 0x357cb491
- (void)addArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x3582756d
- (void)addClip;	// 0x3574ca11
- (void)addCurveToPoint:(CGPoint)point controlPoint1:(CGPoint)a1 controlPoint2:(CGPoint)a2;	// 0x358274e5
- (void)addLineToPoint:(CGPoint)point;	// 0x3574de01
- (void)addQuadCurveToPoint:(CGPoint)point controlPoint:(CGPoint)point2;	// 0x35827531
- (void)appendBezierPath:(id)path;	// 0x357cb43d
- (void)appendBezierPathWithArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x35818845
- (void)appendBezierPathWithOvalInRect:(CGRect)rect;	// 0x3582803d
- (void)appendBezierPathWithOvalInRect:(CGRect)rect transform:(CGAffineTransform)transform;	// 0x35828081
- (void)appendBezierPathWithRect:(CGRect)rect;	// 0x35827ff9
- (void)appendPath:(id)path;	// 0x358273c5
- (void)applyTransform:(CGAffineTransform)transform;	// 0x358273f9
// declared property getter: - (CGRect)bounds;	// 0x358276c9
- (void)clip;	// 0x3574ca01
- (void)closePath;	// 0x357e9469
- (BOOL)containsPoint:(CGPoint)point;	// 0x358276f9
- (id)copyWithZone:(NSZone *)zone;	// 0x35826d69
// declared property getter: - (CGPoint)currentPoint;	// 0x358276e1
- (void)dealloc;	// 0x3574ca91
- (void)encodeWithCoder:(id)coder;	// 0x35826add
- (void)fill;	// 0x3579c36d
- (void)fillWithBlendMode:(int)blendMode alpha:(float)alpha;	// 0x35827865
// declared property getter: - (float)flatness;	// 0x35828155
- (void)getLineDash:(float *)dash count:(int *)count phase:(float *)phase;	// 0x358277e1
// declared property getter: - (BOOL)isEmpty;	// 0x358276b1
// declared property getter: - (int)lineCapStyle;	// 0x358280f5
// declared property getter: - (int)lineJoinStyle;	// 0x35828115
- (void)lineToPoint:(CGPoint)point;	// 0x3574ddf1
// declared property getter: - (float)lineWidth;	// 0x358280d5
// declared property getter: - (float)miterLimit;	// 0x35828135
- (void)moveToPoint:(CGPoint)point;	// 0x3574ddc5
- (void)removeAllPoints;	// 0x358275b9
// declared property setter: - (void)setCGPath:(CGPathRef)path;	// 0x35827641
// declared property setter: - (void)setFlatness:(float)flatness;	// 0x35828165
// declared property setter: - (void)setLineCapStyle:(int)style;	// 0x35828105
- (void)setLineDash:(const float *)dash count:(int)count phase:(float)phase;	// 0x35827739
// declared property setter: - (void)setLineJoinStyle:(int)style;	// 0x35828125
// declared property setter: - (void)setLineWidth:(float)width;	// 0x358280e5
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x35828145
// declared property setter: - (void)setUsesEvenOddFillRule:(BOOL)rule;	// 0x35828185
- (void)stroke;	// 0x3574c935
- (void)strokeWithBlendMode:(int)blendMode alpha:(float)alpha;	// 0x358278e5
// declared property getter: - (BOOL)usesEvenOddFillRule;	// 0x35828175
@end

