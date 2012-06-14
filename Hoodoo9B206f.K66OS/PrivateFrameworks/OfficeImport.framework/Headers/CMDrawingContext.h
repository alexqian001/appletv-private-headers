/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, CMDrawableMapper, NSAffineTransform;

__attribute__((visibility("hidden")))
@interface CMDrawingContext : NSObject {
@private
	CMDrawableMapper *_mapper;	// 4 = 0x4
	NSMutableArray *_actions;	// 8 = 0x8
	CGRect _frame;	// 12 = 0xc
	CGRect _finalFrame;	// 28 = 0x1c
	CFDataRef _data;	// 44 = 0x2c
	CGDataConsumerRef _dataConsumer;	// 48 = 0x30
	CGContextRef _cgContext;	// 52 = 0x34
	NSAffineTransform *_currentTransform;	// 56 = 0x38
	NSMutableArray *_transforms;	// 60 = 0x3c
	CGImageRef _fillImage;	// 64 = 0x40
}
@property(readonly, assign) CGRect frame;	// G=0x34668555; converted property
@property(retain) CMDrawableMapper *mapper;	// G=0x34534e39; S=0x34376591; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x34376481
- (void)_addTransform:(id)transform;	// 0x34443225
- (void)_applyTransform:(id)transform;	// 0x3444037d
- (CGContextRef)_cgContext;	// 0x34668545
- (void)_closeContext;	// 0x34440729
- (void)_createCGContext;	// 0x34440205
- (void)_playbackActions;	// 0x344403e1
- (void)_restoreLastTransform;	// 0x34443345
- (CGRect)_transformRect:(CGRect)rect withTransform:(id)transform;	// 0x34377045
- (void)addDebugPath:(CGPathRef)path;	// 0x34668579
- (void)addPath:(CGPathRef)path;	// 0x3443dacd
- (void)addTransform:(id)transform;	// 0x344431a5
- (id)createPDF;	// 0x3437bc25
- (float)currentScaleFactor;	// 0x346686b1
- (CGAffineTransform)currentTransform;	// 0x3443cc49
- (void)dealloc;	// 0x3437bd2d
// converted property getter: - (CGRect)frame;	// 0x34668555
// converted property getter: - (id)mapper;	// 0x34534e39
- (CGRect)pdfFrame;	// 0x34440349
- (void)restoreLastTransform;	// 0x344432c5
- (void)setFillColor:(CGColorRef)color;	// 0x3443d971
- (void)setFillImage:(CGImageRef)image;	// 0x34534e49
- (void)setLineDash:(id)dash;	// 0x344bf0f5
- (void)setLineWidth:(float)width;	// 0x34443a25
// converted property setter: - (void)setMapper:(id)mapper;	// 0x34376591
- (void)setStrokeColor:(CGColorRef)color;	// 0x3443d87d
- (CGRect)transformRectToGroup:(CGRect)group;	// 0x345657b5
- (CGRect)transformRectToPage:(CGRect)page;	// 0x34377005
@end
