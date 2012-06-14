/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "UIPDFSelectionWidget.h"

@class CALayer, CAShapeLayer, UIPDFPageView;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {
	CAShapeLayer *_trackingBorder;	// 4 = 0x4
	CGRect _initialRect;	// 8 = 0x8
	BOOL _tracking;	// 24 = 0x18
	CGRect _currentTrackingRect;	// 28 = 0x1c
	CALayer *_leftGrabber;	// 44 = 0x2c
	CALayer *_rightGrabber;	// 48 = 0x30
	CALayer *_topGrabber;	// 52 = 0x34
	CALayer *_bottomGrabber;	// 56 = 0x38
	CALayer *_selectedGrabber;	// 60 = 0x3c
	CGRect _boundsInPDFSpace;	// 64 = 0x40
	UIPDFPageView *_pageView;	// 80 = 0x50
	CGPoint _initialSelectionPointOnPage;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x32658dd5; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x32658ded; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x32658e05; S=0x32658e15; @synthesize=_pageView
- (id)init;	// 0x3265a78d
- (CGRect)adjustRect:(CGRect)rect toPoint:(CGPoint)point;	// 0x32659641
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x32658dd5
- (void)dealloc;	// 0x32658ec1
- (void)endTracking;	// 0x3265900d
- (void)hide;	// 0x32658f01
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x32659bc9
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x32658ded
- (void)layout;	// 0x32659731
// declared property getter: - (id)pageView;	// 0x32658e05
- (void)remove;	// 0x3265a0dd
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x32658db1
- (CGRect)selectionBoundsInEffectsSpace;	// 0x3265a67d
- (CGRect)selectionRectangle;	// 0x32658fb1
// declared property setter: - (void)setPageView:(id)view;	// 0x32658e15
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x32658dd1
- (void)setSelectedGrabberPosition:(CGRect)position;	// 0x32659541
- (void)setSelection:(id)selection;	// 0x3265a17d
- (void)track:(CGPoint)track;	// 0x32659105
- (CGPoint)viewOffset;	// 0x32658db9
@end
