/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <NSObject.h> // Unknown library

@class UIPDFMarkupAnnotation, CALayer, NSMutableArray, UIPDFPageView, UIPDFAnnotation;
@protocol UIPDFAnnotationControllerDelegate;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate> {
	NSMutableArray *_annotations;	// 4 = 0x4
	UIPDFPageView *_pageView;	// 8 = 0x8
	int _lock;	// 12 = 0xc
	CGPoint _startPoint;	// 16 = 0x10
	BOOL _moving;	// 24 = 0x18
	UIPDFMarkupAnnotation *_currentAnnotation;	// 28 = 0x1c
	XXStruct_ny2fMB _initialRange;	// 32 = 0x20
	BOOL _tracking;	// 40 = 0x28
	CGColorRef _color[7];	// 44 = 0x2c
	CALayer *_drawingSurface;	// 72 = 0x48
	id<NSObject, UIPDFAnnotationControllerDelegate> _delegate;	// 76 = 0x4c
	CGSize _cachedMarginNoteSize;	// 80 = 0x50
@private
	int currentStyle;	// 88 = 0x58
@protected
	BOOL makeUnderlineAnnotation;	// 92 = 0x5c
}
@property(retain, nonatomic) UIPDFAnnotation *currentAnnotation;	// G=0x338988c9; S=0x338988d9; @synthesize=_currentAnnotation
@property(assign, nonatomic) int currentStyle;	// G=0x338988fd; S=0x3389890d; @synthesize
@property(assign, nonatomic) id<NSObject, UIPDFAnnotationControllerDelegate> delegate;	// G=0x33898975; S=0x33898985; @synthesize=_delegate
@property(retain) CALayer *drawingSurface;	// G=0x3389893d; S=0x33898951; @synthesize=_drawingSurface
@property(assign, nonatomic) BOOL makeUnderlineAnnotation;	// G=0x3389891d; S=0x3389892d; @synthesize
@property(readonly, assign, nonatomic) BOOL tracking;	// G=0x33898995; @synthesize=_tracking
+ (CGImageRef)newMaskImage:(CGPDFPageRef)image size:(CGSize)size;	// 0x33898619
+ (BOOL)pageHasAnnotations:(id)annotations;	// 0x33894ebd
- (id)init;	// 0x3389508d
- (id)initWithPageView:(id)pageView;	// 0x3389525d
- (void)_addAnnotationViewFor:(id)aFor;	// 0x338965dd
- (void)_initialRange:(CGPoint)range;	// 0x33897b5d
- (void)addAnnotation:(id)annotation;	// 0x33895999
- (void)addAnnotationsInPage;	// 0x33895655
- (void)addDrawingSurface:(id)surface view:(id)view;	// 0x33896259
- (BOOL)addLinkAnnotationsInPage;	// 0x3389540d
- (id)annotatePageSelection;	// 0x33898479
- (BOOL)annotationLongPressRecognized:(id)recognized;	// 0x338981a5
- (BOOL)annotationSingleTapRecognized:(id)recognized;	// 0x338982f5
- (void)annotationTapRecognized:(id)recognized;	// 0x338971e9
- (id)annotationWithIndex:(unsigned)index;	// 0x33895581
- (CGColorRef)colorForStyle:(int)style;	// 0x33898465
- (CGPoint)convertPoint:(CGPoint)point toSurfaceLayer:(id)surfaceLayer;	// 0x3389605d
- (CGRect)convertRect:(CGRect)rect toSurfaceLayer:(id)surfaceLayer;	// 0x33896141
- (void)copyAttributesOf:(id)of to:(id)to;	// 0x338985c1
// declared property getter: - (id)currentAnnotation;	// 0x338988c9
// declared property getter: - (int)currentStyle;	// 0x338988fd
- (void)dealloc;	// 0x338952c1
// declared property getter: - (id)delegate;	// 0x33898975
- (void)doubleTapRecognized:(id)recognized;	// 0x33897001
- (void)drawAnnotations:(CGContextRef)annotations;	// 0x33896d3d
// declared property getter: - (id)drawingSurface;	// 0x3389893d
- (id)editableAnnotationAt:(CGPoint)at;	// 0x33897345
- (void)endTracking;	// 0x33897fcd
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x33896e89
- (void)hideAllAnnotations;	// 0x33895e0d
- (void)hostViewDidScroll;	// 0x33896501
- (BOOL)intersects:(CGPDFSelectionRef)intersects with:(CGPDFSelectionRef)with;	// 0x33897435
- (BOOL)isSelection:(CGPDFSelectionRef)selection equalTo:(CGPDFSelectionRef)to;	// 0x338974ad
- (void)layoutAnnotationViews:(id)views;	// 0x33896a11
- (void)linkPressRecognized:(id)recognized;	// 0x338970c5
- (void)lock;	// 0x33896e61
- (BOOL)madeInstantAnnotation;	// 0x33897af1
// declared property getter: - (BOOL)makeUnderlineAnnotation;	// 0x3389891d
- (id)marginNoteImage:(int)image;	// 0x3389886d
- (CGSize)marginNoteImageSize;	// 0x338987b5
- (void)mergeSelectionOfAnnotation:(id)annotation;	// 0x33897519
- (id)newAnnotation:(CGPDFDictionaryRef)annotation type:(const char *)type;	// 0x33894ef9
- (CGImageRef)newHighlightMaskImageFor:(CGRect)aFor;	// 0x338986ed
- (void)removeAllAnnotations;	// 0x338959e1
- (void)removeAnnotation:(id)annotation;	// 0x33895c19
- (void)setAnnotation:(id)annotation hidden:(BOOL)hidden;	// 0x33895dd9
// declared property setter: - (void)setCurrentAnnotation:(id)annotation;	// 0x338988d9
// declared property setter: - (void)setCurrentStyle:(int)style;	// 0x3389890d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33898985
// declared property setter: - (void)setDrawingSurface:(id)surface;	// 0x33898951
// declared property setter: - (void)setMakeUnderlineAnnotation:(BOOL)annotation;	// 0x3389892d
- (void)setNeedsDisplay;	// 0x33896c41
- (void)setSurfacePosition:(id)position;	// 0x33896315
- (void)setView:(id)view;	// 0x33896c0d
- (BOOL)shouldHandleGestureAt:(CGPoint)at response:(BOOL *)response;	// 0x33898081
- (void)showAllAnnotations;	// 0x33895f35
- (void)startTracking:(CGPoint)tracking;	// 0x33897c19
- (BOOL)trackMoved:(CGPoint)moved;	// 0x33897b09
// declared property getter: - (BOOL)tracking;	// 0x33898995
- (void)tracking:(CGPoint)tracking;	// 0x33897c9d
- (CGImageRef)underlineImageFor:(CGRect)aFor;	// 0x33898751
- (void)unlock;	// 0x33896e75
@end

