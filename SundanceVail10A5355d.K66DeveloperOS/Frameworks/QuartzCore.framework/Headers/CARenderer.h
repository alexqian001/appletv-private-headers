/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CALayer, CAContext;
@protocol CARendererDelegate;

@interface CARenderer : NSObject {
	CARendererPriv *_priv;	// 4 = 0x4
}
@property(assign) CGRect bounds;	// G=0x365d2cc5; S=0x365d2ca5; 
@property(retain) CAContext *context;	// G=0x365d3211; S=0x365d3225; 
@property(assign) id<CARendererDelegate> delegate;	// G=0x365d330d; S=0x365d3321; 
@property(retain) CALayer *layer;	// G=0x365d2c85; S=0x365d2c65; 
+ (id)rendererWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x365d2ab5
- (id)_initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x365d28c5
- (id)_initWithOptions:(id)options;	// 0x365d27c1
- (void)addUpdateRect:(CGRect)rect;	// 0x365d2f99
- (void)beginFrameAtTime:(double)time timeStamp:(XXStruct_soD7RD *)stamp;	// 0x365d2ce9
// declared property getter: - (CGRect)bounds;	// 0x365d2cc5
// declared property getter: - (id)context;	// 0x365d3211
- (void)dealloc;	// 0x365d2af5
// declared property getter: - (id)delegate;	// 0x365d330d
- (void)endFrame;	// 0x365d314d
- (BOOL)hasMissingContent;	// 0x365d3029
// declared property getter: - (id)layer;	// 0x365d2c85
- (double)nextFrameTime;	// 0x365d2ff9
- (void)render;	// 0x365d3049
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x365d2ca5
// declared property setter: - (void)setContext:(id)context;	// 0x365d3225
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x365d3321
// declared property setter: - (void)setLayer:(id)layer;	// 0x365d2c65
- (CGRect)updateBounds;	// 0x365d2ee1
@end

