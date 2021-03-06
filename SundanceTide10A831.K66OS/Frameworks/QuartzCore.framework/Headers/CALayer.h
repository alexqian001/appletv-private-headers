/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "QuartzCore-Structs.h"
#import "CAMediaTiming.h"
#import <NSObject.h> // Unknown library
#import "CAPropertyInfo.h"

@class CAMeshTransform, NSArray, NSString, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
	CALayerIvars _attr;	// 4 = 0x4
}
@property(assign) BOOL acceleratesDrawing;	// G=0x32aed9a1; S=0x32b15079; 
@property(assign) BOOL acceptsLights;	// G=0x32bc3b55; S=0x32bc3b6d; 
@property(copy) NSDictionary *actions;	// G=0x32bc30f9; S=0x32bc3121; 
@property(assign) CGAffineTransform affineTransform;	// G=0x32af5de9; S=0x32af5f55; converted property
@property(assign) BOOL allowsDisplayCompositing;	// G=0x32b0c831; S=0x32b2d6e1; 
@property(assign) BOOL allowsEdgeAntialiasing;	// G=0x32b0c7f5; S=0x32b2bcf9; 
@property(assign) BOOL allowsGroupBlending;	// G=0x32b0c84d; S=0x32bc3aad; 
@property(assign) BOOL allowsGroupOpacity;	// G=0x32b0c815; S=0x32b2b785; 
@property(assign) BOOL allowsHitTesting;	// G=0x32b0c869; S=0x32bc38f9; 
@property(assign) float ambientReflectance;	// G=0x32bc3b99; S=0x32bc3bc1; 
@property(assign) CGPoint anchorPoint;	// G=0x32af7e71; S=0x32b15021; 
@property(assign) float anchorPointZ;	// G=0x32bc2fd9; S=0x32b2dba9; 
@property(assign) BOOL autoreverses;	// G=0x32b13479; S=0x32bc2f89; 
@property(assign) CGColorRef backgroundColor;	// G=0x32af4a55; S=0x32b0e035; 
@property(copy) NSArray *backgroundFilters;	// G=0x32b134e9; S=0x32bc3081; 
@property(assign) double beginTime;	// G=0x32b13349; S=0x32bc2e5d; 
@property(copy) NSArray *behaviors;	// G=0x32b13591; S=0x32bc3d29; 
@property(assign) CGColorRef borderColor;	// G=0x32b0c751; S=0x32b150a9; 
@property(assign) float borderWidth;	// G=0x32b0c729; S=0x32b150d1; 
@property(assign) CGRect bounds;	// G=0x32ae1a11; S=0x32ae2ae9; 
@property(assign) BOOL canDrawConcurrently;	// G=0x32bc397d; S=0x32bc3995; 
@property(assign) BOOL clearsContext;	// G=0x32aeda31; S=0x32bc39c1; 
@property(assign) float coefficientOfRestitution;	// G=0x32bc3e41; S=0x32bc3e69; 
@property(retain) id compositingFilter;	// G=0x32b13511; S=0x32b2bbc1; 
@property(retain) id contents;	// G=0x32ae735d; S=0x32af5051; 
@property(assign) CGRect contentsCenter;	// G=0x32af5231; S=0x32af5251; 
@property(copy) NSString *contentsGravity;	// G=0x32af4cd5; S=0x32b0ddf1; 
@property(assign) BOOL contentsOpaque;	// G=0x32bc3a95; S=0x32b2d6b5; 
@property(assign) CGRect contentsRect;	// G=0x32b13775; S=0x32b1227d; 
@property(assign) float contentsScale;	// G=0x32af4a2d; S=0x32b122b5; 
@property(copy) NSString *contentsScaling;	// G=0x32b12245; S=0x32af5289; 
@property(assign) CGAffineTransform contentsTransform;	// G=0x32b13035; S=0x32af52e5; 
@property(assign) float cornerRadius;	// G=0x32b0c701; S=0x32bc3149; 
@property(assign) id delegate;	// G=0x32b1f981; S=0x32af465d; 
@property(assign) float diffuseReflectance;	// G=0x32bc3be9; S=0x32bc3c11; 
@property(assign) CADoubleRect doubleBounds;	// G=0x32b1f949; S=0x32b1fa4d; converted property
@property(assign) CADoublePoint doublePosition;	// G=0x32b2d679; S=0x32b2c97d; converted property
@property(assign, getter=isDoubleSided) BOOL doubleSided;	// G=0x32b0c77d; S=0x32bc3029; 
@property(assign) BOOL drawsAsynchronously;	// G=0x32aed989; S=0x32bc3219; 
@property(assign) double duration;	// G=0x32b133b9; S=0x32bc2ecd; 
@property(assign) unsigned edgeAntialiasingMask;	// G=0x32b1f349; S=0x32b15049; 
@property(copy) NSString *fillMode;	// G=0x32b134a1; S=0x32bc2fb1; 
@property(copy) NSArray *filters;	// G=0x32ae9d01; S=0x32aebc99; 
@property(assign, getter=isFlipped) BOOL flipped;	// G=0x32bc38cd; S=0x32bc38e5; converted property
@property(assign) CGRect frame;	// G=0x32ae1749; S=0x32ae25f1; 
@property(assign, getter=isFrozen) BOOL frozen;	// G=0x32b2d70d; S=0x32b2b0ad; 
@property(assign, getter=isGeometryFlipped) BOOL geometryFlipped;	// G=0x32bc1ce9; S=0x32bc1d01; 
@property(assign, getter=isHidden) BOOL hidden;	// G=0x32aed221; S=0x32af5329; 
@property(assign) BOOL hitTestsAsOpaque;	// G=0x32b0c885; S=0x32bc3925; 
@property(assign) BOOL invertsShadow;	// G=0x32b13681; S=0x32bc3a39; 
@property(copy) NSArray *lights;	// G=0x32b13565; S=0x32bc3b2d; 
@property(assign) BOOL literalContentsCenter;	// G=0x32b0c8a1; S=0x32bc3951; 
@property(copy) NSString *magnificationFilter;	// G=0x32b0c635; S=0x32b19e4d; 
@property(retain) CALayer *mask;	// G=0x32b2c7c1; S=0x32b0e05d; 
@property(assign) BOOL masksToBounds;	// G=0x32b1db8d; S=0x32af20b5; 
@property(assign) float mass;	// G=0x32bc3da1; S=0x32bc3dc9; 
@property(copy) CAMeshTransform *meshTransform;	// G=0x32b13539; S=0x32bc34c9; 
@property(assign) float metallicity;	// G=0x32bc3cd9; S=0x32bc3d01; 
@property(copy) NSString *minificationFilter;	// G=0x32aeda4d; S=0x32b19e25; 
@property(assign) float minificationFilterBias;	// G=0x32b0c6ad; S=0x32bc3055; 
@property(assign) float momentOfInertia;	// G=0x32bc3df1; S=0x32bc3e19; 
@property(copy) NSString *name;	// G=0x32b0c6d9; S=0x32bc30a9; 
@property(assign) BOOL needsDisplayOnBoundsChange;	// G=0x32af4a15; S=0x32b0ddbd; 
@property(assign) BOOL needsLayoutOnGeometryChange;	// G=0x32ae80e9; S=0x32b12321; 
@property(assign) float opacity;	// G=0x32ae307d; S=0x32ae1aa5; 
@property(assign, getter=isOpaque) BOOL opaque;	// G=0x32aeda15; S=0x32aec14d; 
@property(assign) CGPoint position;	// G=0x32af5359; S=0x32ae2849; 
@property(assign) BOOL preloadsCache;	// G=0x32b0c7b1; S=0x32b15521; 
@property(assign) float rasterizationScale;	// G=0x32b0c7c9; S=0x32b122f9; 
@property(assign) float repeatCount;	// G=0x32b13419; S=0x32bc2f29; 
@property(assign) double repeatDuration;	// G=0x32b13441; S=0x32bc2f55; 
@property(assign) CGColorRef shadowColor;	// G=0x32b135e1; S=0x32bc3171; 
@property(assign) CGSize shadowOffset;	// G=0x32b13609; S=0x32bc319d; 
@property(assign) float shadowOpacity;	// G=0x32b135b9; S=0x32b1d529; 
@property(assign) CGPathRef shadowPath;	// G=0x32b13659; S=0x32bc31f1; 
@property(assign) BOOL shadowPathIsBounds;	// G=0x32b1369d; S=0x32bc3a65; 
@property(assign) float shadowRadius;	// G=0x32b13631; S=0x32bc31c9; 
@property(assign) float shininess;	// G=0x32bc3c89; S=0x32bc3cb1; 
@property(assign) BOOL shouldRasterize;	// G=0x32b0c799; S=0x32b154f1; 
@property(assign) CGSize sizeRequisition;	// G=0x32bc3ad9; S=0x32bc3afd; 
@property(assign) BOOL sortsSublayers;	// G=0x32bc39f1; S=0x32bc3a09; 
@property(assign) float specularReflectance;	// G=0x32bc3c39; S=0x32bc3c61; 
@property(assign) float speed;	// G=0x32b133f1; S=0x32bc2f01; 
@property(copy) NSArray *stateTransitions;	// @dynamic
@property(copy) NSArray *states;	// @dynamic
@property(copy) NSDictionary *style;	// G=0x32bc30d1; S=0x32b2d881; 
@property(assign) CATransform3D sublayerTransform;	// G=0x32b2bee5; S=0x32b2bc71; 
@property(copy) NSArray *sublayers;	// G=0x32ae6a01; S=0x32ae88bd; 
@property(readonly, assign) CALayer *superlayer;	// G=0x32ae6be5; 
@property(assign) double timeOffset;	// G=0x32b13381; S=0x32bc2e95; 
@property(assign) CATransform3D transform;	// G=0x32af3919; S=0x32af6045; 
@property(assign) float velocityStretch;	// G=0x32bc3d51; S=0x32bc3d79; 
@property(readonly, assign) CGRect visibleRect;	// G=0x32b3768d; 
@property(assign) float zPosition;	// G=0x32bc3001; S=0x32b2db81; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x32b10161
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x32b105a9
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x32b10599
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32bc1839
+ (id)defaultActionForKey:(id)key;	// 0x32b125b1
+ (id)defaultValueForKey:(id)key;	// 0x32b105c1
+ (id)layer;	// 0x32b2c5b1
+ (BOOL)needsDisplayForKey:(id)key;	// 0x32bc0e91
+ (BOOL)needsLayoutForKey:(id)key;	// 0x32bc3249
+ (id)properties;	// 0x32bc324d
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x32b10525
- (id)init;	// 0x32af4299
- (id)initWithBounds:(CGRect)bounds;	// 0x32bc136d
- (id)initWithCoder:(id)coder;	// 0x32bc1859
- (id)initWithLayer:(id)layer;	// 0x32b20599
- (id).cxx_construct;	// 0x32af4295
- (BOOL)_canDisplayConcurrently;	// 0x32bc345d
- (void)_cancelAnimationTimer;	// 0x32bc270d
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x32aef441
- (void)_dealloc;	// 0x32b15555
- (void)_didCommitLayer:(Transaction *)layer;	// 0x32af092d
- (void)_display;	// 0x32aed501
- (CGSize)_preferredSize;	// 0x32bc2cf1
- (void)_prepareContext:(CGContextRef)context;	// 0x32aeeb45
- (void)_renderBackgroundInContext:(CGContextRef)context;	// 0x32b1dba5
- (void)_renderBorderInContext:(CGContextRef)context;	// 0x32b1f361
- (void)_renderForegroundInContext:(CGContextRef)context;	// 0x32b1df11
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x32b0d71d
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x32b1496d
- (void)_renderSublayersInContext:(CGContextRef)context;	// 0x32b1ea59
- (BOOL)_scheduleAnimationTimer;	// 0x32bc2709
- (void)_scrollPoint:(CGPoint)point fromLayer:(id)layer;	// 0x32b3757d
- (void)_scrollRect:(CGRect)rect fromLayer:(id)layer;	// 0x32b375c9
- (CGRect)_visibleRectOfLayer:(id)layer;	// 0x32b37631
// declared property getter: - (BOOL)acceleratesDrawing;	// 0x32aed9a1
// declared property getter: - (BOOL)acceptsLights;	// 0x32bc3b55
- (id)actionForKey:(id)key;	// 0x32ae6fad
// declared property getter: - (id)actions;	// 0x32bc30f9
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x32b0ce41
- (void)addState:(id)state;	// 0x32b36c4d
- (void)addSublayer:(id)sublayer;	// 0x32ae81b1
// converted property getter: - (CGAffineTransform)affineTransform;	// 0x32af5de9
// declared property getter: - (BOOL)allowsDisplayCompositing;	// 0x32b0c831
// declared property getter: - (BOOL)allowsEdgeAntialiasing;	// 0x32b0c7f5
// declared property getter: - (BOOL)allowsGroupBlending;	// 0x32b0c84d
// declared property getter: - (BOOL)allowsGroupOpacity;	// 0x32b0c815
// declared property getter: - (BOOL)allowsHitTesting;	// 0x32b0c869
- (BOOL)allowsWeakReference;	// 0x32bc0f4d
// declared property getter: - (float)ambientReflectance;	// 0x32bc3b99
- (id)ancestorSharedWithLayer:(id)layer;	// 0x32aec7f1
// declared property getter: - (CGPoint)anchorPoint;	// 0x32af7e71
// declared property getter: - (float)anchorPointZ;	// 0x32bc2fd9
- (id)animationForKey:(id)key;	// 0x32af4d11
- (id)animationKeys;	// 0x32af35e1
// declared property getter: - (BOOL)autoreverses;	// 0x32b13479
// declared property getter: - (CGColorRef)backgroundColor;	// 0x32af4a55
// declared property getter: - (id)backgroundFilters;	// 0x32b134e9
// declared property getter: - (double)beginTime;	// 0x32b13349
// declared property getter: - (id)behaviors;	// 0x32b13591
// declared property getter: - (CGColorRef)borderColor;	// 0x32b0c751
// declared property getter: - (float)borderWidth;	// 0x32b0c729
// declared property getter: - (CGRect)bounds;	// 0x32ae1a11
// declared property getter: - (BOOL)canDrawConcurrently;	// 0x32bc397d
- (void)clearHasBeenCommitted;	// 0x32b154a9
// declared property getter: - (BOOL)clearsContext;	// 0x32aeda31
// declared property getter: - (float)coefficientOfRestitution;	// 0x32bc3e41
// declared property getter: - (id)compositingFilter;	// 0x32b13511
- (BOOL)containsPoint:(CGPoint)point;	// 0x32af38d9
// declared property getter: - (id)contents;	// 0x32ae735d
- (BOOL)contentsAreFlipped;	// 0x32b2d1b1
// declared property getter: - (CGRect)contentsCenter;	// 0x32af5231
// declared property getter: - (id)contentsGravity;	// 0x32af4cd5
// declared property getter: - (BOOL)contentsOpaque;	// 0x32bc3a95
// declared property getter: - (CGRect)contentsRect;	// 0x32b13775
// declared property getter: - (float)contentsScale;	// 0x32af4a2d
// declared property getter: - (id)contentsScaling;	// 0x32b12245
// declared property getter: - (CGAffineTransform)contentsTransform;	// 0x32b13035
- (id)context;	// 0x32bc3479
- (CADoublePoint)convertDoublePoint:(CADoublePoint)point fromLayer:(id)layer;	// 0x32b1f9a1
- (CADoublePoint)convertDoublePoint:(CADoublePoint)point toLayer:(id)layer;	// 0x32b1f9f5
- (CADoubleRect)convertDoubleRect:(CADoubleRect)rect fromLayer:(id)layer;	// 0x32bc335d
- (CADoubleRect)convertDoubleRect:(CADoubleRect)rect toLayer:(id)layer;	// 0x32bc33d5
- (CGPoint)convertPoint:(CGPoint)point fromLayer:(id)layer;	// 0x32af3081
- (CGPoint)convertPoint:(CGPoint)point toLayer:(id)layer;	// 0x32af421d
- (CGRect)convertRect:(CGRect)rect fromLayer:(id)layer;	// 0x32af7f29
- (CGRect)convertRect:(CGRect)rect toLayer:(id)layer;	// 0x32aec319
- (double)convertTime:(double)time fromLayer:(id)layer;	// 0x32bc1db9
- (double)convertTime:(double)time toLayer:(id)layer;	// 0x32bc1e01
// declared property getter: - (float)cornerRadius;	// 0x32b0c701
- (void)dealloc;	// 0x32af56fd
- (id)debugDescription;	// 0x32bc13b1
// declared property getter: - (id)delegate;	// 0x32b1f981
- (id)dependentStatesOfState:(id)state;	// 0x32b36eb1
// declared property getter: - (float)diffuseReflectance;	// 0x32bc3be9
- (void)display;	// 0x32aed45d
- (void)displayIfNeeded;	// 0x32b1db01
// converted property getter: - (CADoubleRect)doubleBounds;	// 0x32b1f949
// converted property getter: - (CADoublePoint)doublePosition;	// 0x32b2d679
- (BOOL)doubleSided;	// 0x32bc38b5
- (void)drawInContext:(CGContextRef)context;	// 0x32aeeb4d
// declared property getter: - (BOOL)drawsAsynchronously;	// 0x32aed989
- (BOOL)drawsMipmapLevels;	// 0x32bc3475
// declared property getter: - (double)duration;	// 0x32b133b9
// declared property getter: - (unsigned)edgeAntialiasingMask;	// 0x32b1f349
- (void)encodeWithCoder:(id)coder;	// 0x32bc193d
// declared property getter: - (id)fillMode;	// 0x32b134a1
// declared property getter: - (id)filters;	// 0x32ae9d01
// declared property getter: - (CGRect)frame;	// 0x32ae1749
- (BOOL)hasBeenCommitted;	// 0x32b19e79
- (BOOL)hidden;	// 0x32bc3885
- (id)hitTest:(CGPoint)test;	// 0x32bc1e49
// declared property getter: - (BOOL)hitTestsAsOpaque;	// 0x32b0c885
- (BOOL)ignoresHitTesting;	// 0x32bc3791
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x32b1f639
- (void)insertState:(id)state atIndex:(unsigned)index;	// 0x32b36c61
- (void)insertSublayer:(id)sublayer above:(id)above;	// 0x32aed239
- (void)insertSublayer:(id)sublayer atIndex:(unsigned)index;	// 0x32af4a81
- (void)insertSublayer:(id)sublayer below:(id)below;	// 0x32af4b79
- (void)invalidateContents;	// 0x32bc3681
// declared property getter: - (BOOL)invertsShadow;	// 0x32b13681
- (BOOL)isDescendantOf:(id)of;	// 0x32bc37e1
// declared property getter: - (BOOL)isDoubleSided;	// 0x32b0c77d
// converted property getter: - (BOOL)isFlipped;	// 0x32bc38cd
// declared property getter: - (BOOL)isFrozen;	// 0x32b2d70d
// declared property getter: - (BOOL)isGeometryFlipped;	// 0x32bc1ce9
// declared property getter: - (BOOL)isHidden;	// 0x32aed221
// declared property getter: - (BOOL)isOpaque;	// 0x32aeda15
- (id)layerAtTime:(double)time;	// 0x32bc384d
- (id)layerBeingDrawn;	// 0x32bc3825
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x32ae72a9
- (void)layoutBelowIfNeeded;	// 0x32ae370d
- (void)layoutIfNeeded;	// 0x32b12719
- (BOOL)layoutIsActive;	// 0x32bc36b1
- (void)layoutSublayers;	// 0x32ae3c8d
// declared property getter: - (id)lights;	// 0x32b13565
// declared property getter: - (BOOL)literalContentsCenter;	// 0x32b0c8a1
// declared property getter: - (id)magnificationFilter;	// 0x32b0c635
// declared property getter: - (id)mask;	// 0x32b2c7c1
// declared property getter: - (BOOL)masksToBounds;	// 0x32b1db8d
// declared property getter: - (float)mass;	// 0x32bc3da1
// declared property getter: - (id)meshTransform;	// 0x32b13539
// declared property getter: - (float)metallicity;	// 0x32bc3cd9
// declared property getter: - (id)minificationFilter;	// 0x32aeda4d
// declared property getter: - (float)minificationFilterBias;	// 0x32b0c6ad
- (id)modelLayer;	// 0x32af37c5
// declared property getter: - (float)momentOfInertia;	// 0x32bc3df1
// declared property getter: - (id)name;	// 0x32b0c6d9
- (BOOL)needsDisplay;	// 0x32b1db3d
// declared property getter: - (BOOL)needsDisplayOnBoundsChange;	// 0x32af4a15
- (BOOL)needsLayout;	// 0x32bc2cd5
// declared property getter: - (BOOL)needsLayoutOnGeometryChange;	// 0x32ae80e9
// declared property getter: - (float)opacity;	// 0x32ae307d
- (BOOL)opaque;	// 0x32bc389d
// declared property getter: - (CGPoint)position;	// 0x32af5359
- (CGSize)preferredFrameSize;	// 0x32bc2d11
// declared property getter: - (BOOL)preloadsCache;	// 0x32b0c7b1
- (id)presentationLayer;	// 0x32b15671
// declared property getter: - (float)rasterizationScale;	// 0x32b0c7c9
- (void *)regionBeingDrawn;	// 0x32b150f9
- (oneway void)release;	// 0x32ae81a9
- (void)reloadValueForKeyPath:(id)keyPath;	// 0x32b2d991
- (void)removeAllAnimations;	// 0x32b125b9
- (void)removeAnimationForKey:(id)key;	// 0x32af4ea5
- (void)removeFromSuperlayer;	// 0x32ae6c99
- (void)removeState:(id)state;	// 0x32b36d29
- (void)renderInContext:(CGContextRef)context;	// 0x32b1d5e9
// declared property getter: - (float)repeatCount;	// 0x32b13419
// declared property getter: - (double)repeatDuration;	// 0x32b13441
- (void)replaceSublayer:(id)sublayer with:(id)with;	// 0x32bc266d
- (id)retain;	// 0x32ae6c5d
- (unsigned)retainCount;	// 0x32bc0f35
- (BOOL)retainWeakReference;	// 0x32bc0ee9
- (void)scrollPoint:(CGPoint)point;	// 0x32b375ad
- (void)scrollRectToVisible:(CGRect)visible;	// 0x32b37609
// declared property setter: - (void)setAcceleratesDrawing:(BOOL)drawing;	// 0x32b15079
// declared property setter: - (void)setAcceptsLights:(BOOL)lights;	// 0x32bc3b6d
// declared property setter: - (void)setActions:(id)actions;	// 0x32bc3121
// converted property setter: - (void)setAffineTransform:(CGAffineTransform)transform;	// 0x32af5f55
// declared property setter: - (void)setAllowsDisplayCompositing:(BOOL)compositing;	// 0x32b2d6e1
// declared property setter: - (void)setAllowsEdgeAntialiasing:(BOOL)antialiasing;	// 0x32b2bcf9
// declared property setter: - (void)setAllowsGroupBlending:(BOOL)blending;	// 0x32bc3aad
// declared property setter: - (void)setAllowsGroupOpacity:(BOOL)opacity;	// 0x32b2b785
// declared property setter: - (void)setAllowsHitTesting:(BOOL)testing;	// 0x32bc38f9
// declared property setter: - (void)setAmbientReflectance:(float)reflectance;	// 0x32bc3bc1
// declared property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x32b15021
// declared property setter: - (void)setAnchorPointZ:(float)z;	// 0x32b2dba9
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x32bc2f89
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x32b0e035
// declared property setter: - (void)setBackgroundFilters:(id)filters;	// 0x32bc3081
// declared property setter: - (void)setBeginTime:(double)time;	// 0x32bc2e5d
// declared property setter: - (void)setBehaviors:(id)behaviors;	// 0x32bc3d29
// declared property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x32b150a9
// declared property setter: - (void)setBorderWidth:(float)width;	// 0x32b150d1
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x32ae2ae9
// declared property setter: - (void)setCanDrawConcurrently:(BOOL)concurrently;	// 0x32bc3995
// declared property setter: - (void)setClearsContext:(BOOL)context;	// 0x32bc39c1
// declared property setter: - (void)setCoefficientOfRestitution:(float)restitution;	// 0x32bc3e69
// declared property setter: - (void)setCompositingFilter:(id)filter;	// 0x32b2bbc1
// declared property setter: - (void)setContents:(id)contents;	// 0x32af5051
// declared property setter: - (void)setContentsCenter:(CGRect)center;	// 0x32af5251
- (void)setContentsChanged;	// 0x32bc3695
// declared property setter: - (void)setContentsGravity:(id)gravity;	// 0x32b0ddf1
// declared property setter: - (void)setContentsOpaque:(BOOL)opaque;	// 0x32b2d6b5
// declared property setter: - (void)setContentsRect:(CGRect)rect;	// 0x32b1227d
// declared property setter: - (void)setContentsScale:(float)scale;	// 0x32b122b5
// declared property setter: - (void)setContentsScaling:(id)scaling;	// 0x32af5289
// declared property setter: - (void)setContentsTransform:(CGAffineTransform)transform;	// 0x32af52e5
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x32bc3149
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32af465d
// declared property setter: - (void)setDiffuseReflectance:(float)reflectance;	// 0x32bc3c11
// converted property setter: - (void)setDoubleBounds:(CADoubleRect)bounds;	// 0x32b1fa4d
// converted property setter: - (void)setDoublePosition:(CADoublePoint)position;	// 0x32b2c97d
// declared property setter: - (void)setDoubleSided:(BOOL)sided;	// 0x32bc3029
// declared property setter: - (void)setDrawsAsynchronously:(BOOL)asynchronously;	// 0x32bc3219
// declared property setter: - (void)setDuration:(double)duration;	// 0x32bc2ecd
// declared property setter: - (void)setEdgeAntialiasingMask:(unsigned)mask;	// 0x32b15049
// declared property setter: - (void)setFillMode:(id)mode;	// 0x32bc2fb1
// declared property setter: - (void)setFilters:(id)filters;	// 0x32aebc99
// converted property setter: - (void)setFlipped:(BOOL)flipped;	// 0x32bc38e5
// declared property setter: - (void)setFrame:(CGRect)frame;	// 0x32ae25f1
// declared property setter: - (void)setFrozen:(BOOL)frozen;	// 0x32b2b0ad
// declared property setter: - (void)setGeometryFlipped:(BOOL)flipped;	// 0x32bc1d01
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x32af5329
// declared property setter: - (void)setHitTestsAsOpaque:(BOOL)opaque;	// 0x32bc3925
// declared property setter: - (void)setInvertsShadow:(BOOL)shadow;	// 0x32bc3a39
// declared property setter: - (void)setLights:(id)lights;	// 0x32bc3b2d
// declared property setter: - (void)setLiteralContentsCenter:(BOOL)center;	// 0x32bc3951
// declared property setter: - (void)setMagnificationFilter:(id)filter;	// 0x32b19e4d
// declared property setter: - (void)setMask:(id)mask;	// 0x32b0e05d
// declared property setter: - (void)setMasksToBounds:(BOOL)bounds;	// 0x32af20b5
// declared property setter: - (void)setMass:(float)mass;	// 0x32bc3dc9
// declared property setter: - (void)setMeshTransform:(id)transform;	// 0x32bc34c9
// declared property setter: - (void)setMetallicity:(float)metallicity;	// 0x32bc3d01
// declared property setter: - (void)setMinificationFilter:(id)filter;	// 0x32b19e25
// declared property setter: - (void)setMinificationFilterBias:(float)bias;	// 0x32bc3055
// declared property setter: - (void)setMomentOfInertia:(float)inertia;	// 0x32bc3e19
// declared property setter: - (void)setName:(id)name;	// 0x32bc30a9
- (void)setNeedsDisplay;	// 0x32aebe65
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x32aebe95
// declared property setter: - (void)setNeedsDisplayOnBoundsChange:(BOOL)change;	// 0x32b0ddbd
- (void)setNeedsLayout;	// 0x32ae3191
// declared property setter: - (void)setNeedsLayoutOnGeometryChange:(BOOL)change;	// 0x32b12321
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x32ae1aa5
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x32aec14d
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x32ae2849
// declared property setter: - (void)setPreloadsCache:(BOOL)cache;	// 0x32b15521
// declared property setter: - (void)setRasterizationScale:(float)scale;	// 0x32b122f9
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x32bc2f29
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x32bc2f55
// declared property setter: - (void)setShadowColor:(CGColorRef)color;	// 0x32bc3171
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x32bc319d
// declared property setter: - (void)setShadowOpacity:(float)opacity;	// 0x32b1d529
// declared property setter: - (void)setShadowPath:(CGPathRef)path;	// 0x32bc31f1
// declared property setter: - (void)setShadowPathIsBounds:(BOOL)bounds;	// 0x32bc3a65
// declared property setter: - (void)setShadowRadius:(float)radius;	// 0x32bc31c9
// declared property setter: - (void)setShininess:(float)shininess;	// 0x32bc3cb1
// declared property setter: - (void)setShouldRasterize:(BOOL)rasterize;	// 0x32b154f1
// declared property setter: - (void)setSizeRequisition:(CGSize)requisition;	// 0x32bc3afd
// declared property setter: - (void)setSortsSublayers:(BOOL)sublayers;	// 0x32bc3a09
// declared property setter: - (void)setSpecularReflectance:(float)reflectance;	// 0x32bc3c61
// declared property setter: - (void)setSpeed:(float)speed;	// 0x32bc2f01
// declared property setter: - (void)setStyle:(id)style;	// 0x32b2d881
// declared property setter: - (void)setSublayerTransform:(CATransform3D)transform;	// 0x32b2bc71
// declared property setter: - (void)setSublayers:(id)sublayers;	// 0x32ae88bd
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x32bc2e95
// declared property setter: - (void)setTransform:(CATransform3D)transform;	// 0x32af6045
- (void)setValue:(id)value forKey:(id)key;	// 0x32aeba65
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x32ae9fc1
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x32b2d729
// declared property setter: - (void)setVelocityStretch:(float)stretch;	// 0x32bc3d79
// declared property setter: - (void)setZPosition:(float)position;	// 0x32b2db81
// declared property getter: - (CGColorRef)shadowColor;	// 0x32b135e1
// declared property getter: - (CGSize)shadowOffset;	// 0x32b13609
// declared property getter: - (float)shadowOpacity;	// 0x32b135b9
// declared property getter: - (CGPathRef)shadowPath;	// 0x32b13659
// declared property getter: - (BOOL)shadowPathIsBounds;	// 0x32b1369d
// declared property getter: - (float)shadowRadius;	// 0x32b13631
// declared property getter: - (float)shininess;	// 0x32bc3c89
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x32bc1aa5
// declared property getter: - (BOOL)shouldRasterize;	// 0x32b0c799
- (CGSize)size;	// 0x32af8051
// declared property getter: - (CGSize)sizeRequisition;	// 0x32bc3ad9
// declared property getter: - (BOOL)sortsSublayers;	// 0x32bc39f1
// declared property getter: - (float)specularReflectance;	// 0x32bc3c39
// declared property getter: - (float)speed;	// 0x32b133f1
- (id)stateTransitionFrom:(id)from to:(id)to;	// 0x32b37039
- (id)stateWithName:(id)name;	// 0x32b36dbd
// declared property getter: - (id)style;	// 0x32bc30d1
// declared property getter: - (CATransform3D)sublayerTransform;	// 0x32b2bee5
// declared property getter: - (id)sublayers;	// 0x32ae6a01
// declared property getter: - (id)superlayer;	// 0x32ae6be5
// declared property getter: - (double)timeOffset;	// 0x32b13381
// declared property getter: - (CATransform3D)transform;	// 0x32af3919
- (id)valueForKey:(id)key;	// 0x32ae95a9
- (id)valueForKeyPath:(id)keyPath;	// 0x32ae8df1
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x32b2da75
// declared property getter: - (float)velocityStretch;	// 0x32bc3d51
// declared property getter: - (CGRect)visibleRect;	// 0x32b3768d
// declared property getter: - (float)zPosition;	// 0x32bc3001
@end

