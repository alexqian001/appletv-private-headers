/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <UIView.h> // Unknown library

@class UIPDFDocument, UIPDFPage, UIPDFSearchHighlightsController, UIImage, UIPDFSelectionController, CALayer, UIPDFViewTouchHandler, NSMutableArray, UIPDFPageContentDelegate, UIActivityIndicatorView, UIPDFAnnotationController, UIColor;
@protocol NSObject, UIPDFPageViewDelegate;

@interface UIPDFPageView : UIView {
	UIPDFDocument *_document;	// 84 = 0x54
	unsigned _pageIndex;	// 88 = 0x58
	UIPDFViewTouchHandler *_touchHandler;	// 92 = 0x5c
	CGAffineTransform _pageToViewTransform;	// 96 = 0x60
	CGAffineTransform _viewToPageTransform;	// 120 = 0x78
	CGRect _cropBox;	// 144 = 0x90
	float _margin;	// 160 = 0xa0
	BOOL _allowSelection;	// 164 = 0xa4
	UIPDFSelectionController *_selectionController;	// 168 = 0xa8
	id<NSObject, UIPDFPageViewDelegate> _delegate;	// 172 = 0xac
	CGRect zoomRect;	// 176 = 0xb0
	BOOL _useBackingLayer;	// 192 = 0xc0
	CALayer *_backingLayer;	// 196 = 0xc4
	UIImage *_backgroundImage;	// 200 = 0xc8
	BOOL _backgroundIsScheduled;	// 204 = 0xcc
	unsigned _backgroundScheduleCount;	// 208 = 0xd0
	BOOL _backgroundIsFullResolution;	// 212 = 0xd4
	BOOL _boundsChanged;	// 213 = 0xd5
	BOOL _useTiledContent;	// 214 = 0xd6
	CALayer *_contentLayer;	// 216 = 0xd8
	CALayer *_effectsLayer;	// 220 = 0xdc
	UIPDFPageContentDelegate *_contentDelegate;	// 224 = 0xe0
	UIPDFAnnotationController *_annotationController;	// 228 = 0xe4
	BOOL _scalePageOnDraw;	// 232 = 0xe8
	CGColorRef _highLightColor;	// 236 = 0xec
	BOOL _animateSetFrame;	// 240 = 0xf0
	UIActivityIndicatorView *_activityIndicator;	// 244 = 0xf4
	BOOL _showActivityIndicator;	// 248 = 0xf8
	UIColor *_backingLayerColor;	// 252 = 0xfc
	int _lock;	// 256 = 0x100
	BOOL _isCancelled;	// 260 = 0x104
	NSMutableArray *_highlights;	// 264 = 0x108
	float _cachedScale;	// 268 = 0x10c
	BOOL _useInstantTouchHighlighting;	// 272 = 0x110
	UIPDFSearchHighlightsController *_searchHighlightController;	// 276 = 0x114
	NSMutableArray *_searchHiglightLayers;	// 280 = 0x118
	BOOL showAnnotations;	// 284 = 0x11c
	BOOL useAnnotationAppearanceStreams;	// 285 = 0x11d
	BOOL showLinkAnnotationUnderline;	// 286 = 0x11e
	BOOL showTextAnnotationBookmark;	// 287 = 0x11f
@private
	BOOL showPDFAnnotations;	// 288 = 0x120
@protected
	BOOL _allowTwoFingerSelection;	// 289 = 0x121
}
@property(assign, nonatomic) BOOL allowMenu;	// G=0x34d27ac5; S=0x34d27aa5; @dynamic
@property(assign, nonatomic) BOOL allowSelection;	// G=0x34d27b39; S=0x34d27b49; @synthesize=_allowSelection
@property(assign, nonatomic) BOOL allowTwoFingerSelection;	// G=0x34d27c95; S=0x34d27ca5; @synthesize=_allowTwoFingerSelection
@property(assign, nonatomic) BOOL animateSetFrame;	// G=0x34d27b85; S=0x34d27b95; @synthesize=_animateSetFrame
@property(readonly, assign, nonatomic) UIPDFAnnotationController *annotationController;	// G=0x34d27c65; @synthesize=_annotationController
@property(retain) UIImage *backgroundImage;	// G=0x34d25435; S=0x34d25489; @dynamic
@property(retain, nonatomic) UIColor *backingLayerColor;	// G=0x34d27ba5; S=0x34d24ba5; @synthesize=_backingLayerColor
@property(readonly, assign, nonatomic) CALayer *contentLayer;	// G=0x34d27b29; @synthesize=_contentLayer
@property(assign, nonatomic) id<NSObject, UIPDFPageViewDelegate> delegate;	// G=0x34d27b09; S=0x34d27b19; @synthesize=_delegate
@property(readonly, assign) UIPDFDocument *document;	// G=0x34d252b5; @dynamic
@property(readonly, assign, nonatomic) CALayer *effectsLayer;	// G=0x34d27809; @synthesize=_effectsLayer
@property(readonly, assign) CGColorRef highLightColor;	// G=0x34d27701; 
@property(assign) BOOL isCancelled;	// G=0x34d25169; S=0x34d2519d; @dynamic
@property(assign, nonatomic) float margin;	// G=0x34d27ae9; S=0x34d27af9; @synthesize=_margin
@property(assign) UIPDFPage *page;	// G=0x34d251d1; S=0x34d2651d; @dynamic
@property(readonly, assign) unsigned pageIndex;	// G=0x34d25281; @dynamic
@property(assign) UIPDFSelectionController *selectionController;	// G=0x34d27b59; S=0x34d27b6d; @synthesize=_selectionController
@property(assign, nonatomic) BOOL showActivityIndicator;	// G=0x34d27bf5; S=0x34d25bc1; @synthesize=_showActivityIndicator
@property(assign, nonatomic) BOOL showAnnotations;	// G=0x34d27bb5; S=0x34d27bc5; @synthesize
@property(assign, nonatomic) BOOL showLinkAnnotationUnderline;	// G=0x34d27c25; S=0x34d27c35; @synthesize
@property(assign, nonatomic) BOOL showPDFAnnotations;	// G=0x34d27c75; S=0x34d27c85; @synthesize
@property(assign, nonatomic) BOOL showTextAnnotationBookmark;	// G=0x34d27c45; S=0x34d27c55; @synthesize
@property(assign, nonatomic) BOOL useAnnotationAppearanceStreams;	// G=0x34d27c05; S=0x34d27c15; @synthesize
@property(assign, nonatomic) BOOL useBackingLayer;	// G=0x34d27bd5; S=0x34d27be5; @synthesize=_useBackingLayer
@property(assign, nonatomic) BOOL useInstantTouchHighlighting;	// G=0x34d27985; S=0x34d27995; @dynamic
- (id)init;	// 0x34d24905
- (id)initWithPage:(id)page;	// 0x34d24e61
- (id)initWithPage:(id)page tiledContent:(BOOL)content;	// 0x34d24eb5
- (CGPDFDictionaryRef)_annotForPoint:(CGPoint)point rect:(CGRect *)rect;	// 0x34d27cb5
- (void)addAnnotation:(id)annotation;	// 0x34d2687d
- (void)addLayers:(BOOL)layers;	// 0x34d24c7d
- (BOOL)addLinkAnnotations;	// 0x34d26729
- (void)addPage:(id)page;	// 0x34d24d7d
// declared property getter: - (BOOL)allowMenu;	// 0x34d27ac5
// declared property getter: - (BOOL)allowSelection;	// 0x34d27b39
// declared property getter: - (BOOL)allowTwoFingerSelection;	// 0x34d27c95
// declared property getter: - (BOOL)animateSetFrame;	// 0x34d27b85
// declared property getter: - (id)annotationController;	// 0x34d27c65
- (BOOL)annotationLongPressRecognized:(id)recognized;	// 0x34d267a1
- (BOOL)annotationSingleTapRecognized:(id)recognized;	// 0x34d267c5
- (void)annotationWasRemoved:(id)removed;	// 0x34d268fd
// declared property getter: - (id)backgroundImage;	// 0x34d25435
// declared property getter: - (id)backingLayerColor;	// 0x34d27ba5
- (void)clearSearchHighlights;	// 0x34d2792d
- (void)clearSelection;	// 0x34d276e1
// declared property getter: - (id)contentLayer;	// 0x34d27b29
- (CGPoint)convertPointFromPDFPageSpace:(CGPoint)pdfpageSpace;	// 0x34d26f99
- (CGPoint)convertPointToPDFPageSpace:(CGPoint)pdfpageSpace;	// 0x34d26f01
- (CGRect)convertRectFromPDFPageSpace:(CGRect)pdfpageSpace;	// 0x34d27075
- (CGRect)convertRectToPDFPageSpace:(CGRect)pdfpageSpace;	// 0x34d27031
- (id)copyPage;	// 0x34d25229
- (void)dealloc;	// 0x34d24f0d
// declared property getter: - (id)delegate;	// 0x34d27b09
- (void)didReceiveMemoryWarning:(id)warning;	// 0x34d25135
- (void)didScroll:(id)scroll;	// 0x34d25871
- (void)displayContent;	// 0x34d276c1
// declared property getter: - (id)document;	// 0x34d252b5
- (void)doubleTapAt:(CGPoint)at;	// 0x34d269d5
- (void)drawAnnotations:(CGContextRef)annotations;	// 0x34d26831
// declared property getter: - (id)effectsLayer;	// 0x34d27809
- (CGRect)fitRect:(CGRect)rect;	// 0x34d271a5
- (CGRect)fitWidth:(CGRect)width atVertical:(float)vertical;	// 0x34d270b9
- (BOOL)hasSearchHighlights;	// 0x34d2794d
- (void)hideAnnotation:(id)annotation;	// 0x34d2689d
- (void)hideSelection;	// 0x34d27779
// declared property getter: - (CGColorRef)highLightColor;	// 0x34d27701
- (void)highlightSearchSelection:(id)selection animated:(BOOL)animated;	// 0x34d2790d
- (void)ignoreTouches:(BOOL)touches;	// 0x34d269a1
// declared property getter: - (BOOL)isCancelled;	// 0x34d25169
- (void)layoutSubviews;	// 0x34d25915
- (void)layoutTextEffects;	// 0x34d264fd
- (void)loadPDFAnnotDictionary;	// 0x34d267e9
// declared property getter: - (float)margin;	// 0x34d27ae9
// declared property getter: - (id)page;	// 0x34d251d1
// declared property getter: - (unsigned)pageIndex;	// 0x34d25281
- (id)receiveBackgroundImage:(id)image info:(id)info;	// 0x34d25e99
- (CGRect)rectangleOfInterestAt:(CGPoint)at kind:(int *)kind;	// 0x34d27279
- (void)removeAnnotation:(id)annotation;	// 0x34d268dd
- (void)removeBackingLayer;	// 0x34d258f5
- (void)scheduleBackgroundImage;	// 0x34d2553d
// declared property getter: - (id)selectionController;	// 0x34d27b59
// declared property setter: - (void)setAllowMenu:(BOOL)menu;	// 0x34d27aa5
// declared property setter: - (void)setAllowSelection:(BOOL)selection;	// 0x34d27b49
// declared property setter: - (void)setAllowTwoFingerSelection:(BOOL)selection;	// 0x34d27ca5
// declared property setter: - (void)setAnimateSetFrame:(BOOL)frame;	// 0x34d27b95
- (void)setAnnotationStyle:(unsigned)style;	// 0x34d26961
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x34d25489
// declared property setter: - (void)setBackingLayerColor:(id)color;	// 0x34d24ba5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34d27b19
- (void)setFrame:(CGRect)frame;	// 0x34d260a9
// declared property setter: - (void)setIsCancelled:(BOOL)cancelled;	// 0x34d2519d
- (void)setLoadPDFAnnotDictionary:(BOOL)dictionary;	// 0x34d26809
- (void)setMakeUnderlineAnnotation:(BOOL)annotation;	// 0x34d26981
// declared property setter: - (void)setMargin:(float)margin;	// 0x34d27af9
- (void)setNeedsDisplay;	// 0x34d25309
// declared property setter: - (void)setPage:(id)page;	// 0x34d2651d
// declared property setter: - (void)setSelectionController:(id)controller;	// 0x34d27b6d
// declared property setter: - (void)setShowActivityIndicator:(BOOL)indicator;	// 0x34d25bc1
// declared property setter: - (void)setShowAnnotations:(BOOL)annotations;	// 0x34d27bc5
// declared property setter: - (void)setShowLinkAnnotationUnderline:(BOOL)underline;	// 0x34d27c35
// declared property setter: - (void)setShowPDFAnnotations:(BOOL)annotations;	// 0x34d27c85
// declared property setter: - (void)setShowTextAnnotationBookmark:(BOOL)bookmark;	// 0x34d27c55
- (void)setTransforms;	// 0x34d26c75
// declared property setter: - (void)setUseAnnotationAppearanceStreams:(BOOL)streams;	// 0x34d27c15
// declared property setter: - (void)setUseBackingLayer:(BOOL)layer;	// 0x34d27be5
// declared property setter: - (void)setUseInstantTouchHighlighting:(BOOL)highlighting;	// 0x34d27995
- (BOOL)shouldHandleGestureAt:(CGPoint)at response:(BOOL *)response;	// 0x34d2676d
// declared property getter: - (BOOL)showActivityIndicator;	// 0x34d27bf5
- (void)showAnnotation:(id)annotation;	// 0x34d268bd
// declared property getter: - (BOOL)showAnnotations;	// 0x34d27bb5
- (void)showContent;	// 0x34d25c89
// declared property getter: - (BOOL)showLinkAnnotationUnderline;	// 0x34d27c25
// declared property getter: - (BOOL)showPDFAnnotations;	// 0x34d27c75
- (void)showSelection;	// 0x34d277c1
// declared property getter: - (BOOL)showTextAnnotationBookmark;	// 0x34d27c45
- (void)singleTapAt:(CGPoint)at;	// 0x34d26b3d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34d26419
- (void)stopActivityIndicator;	// 0x34d25c15
- (void)suspendInstantTouchHighlighting;	// 0x34d279cd
- (void)twoFingerDoubleTapAt:(CGPoint)at;	// 0x34d26ac5
// declared property getter: - (BOOL)useAnnotationAppearanceStreams;	// 0x34d27c05
// declared property getter: - (BOOL)useBackingLayer;	// 0x34d27bd5
// declared property getter: - (BOOL)useInstantTouchHighlighting;	// 0x34d27985
- (BOOL)willDoSomethingWithTap:(CGPoint)tap;	// 0x34d26bc1
- (void)willMoveToSuperview:(id)superview;	// 0x34d25415
@end

