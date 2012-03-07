/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebCoreFrameView.h"
#import "WebKit-Structs.h"

@class WebFrameViewPrivate;

@interface WebFrameView : WAKView <WebCoreFrameView> {
@private
	WebFrameViewPrivate *_private;	// 68 = 0x44
}
@property(assign) BOOL allowsScrolling;	// G=0x339ee255; S=0x339bec11; converted property
+ (BOOL)_canShowMIMETypeAsHTML:(id)html;	// 0x339b1c81
+ (Class)_viewClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x339ba9e5
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)omission;	// 0x339aaa89
- (id)initWithFrame:(CGRect)frame;	// 0x33998769
- (float)_area;	// 0x339ee411
- (id)_contentView;	// 0x339ed56d
- (Class)_customScrollViewClass;	// 0x339ed595
- (BOOL)_firstResponderIsFormControl;	// 0x339eca41
- (void)_forwardMouseEvent:(id)event;	// 0x339ed18d
- (void)_frameSizeChanged;	// 0x339b32b1
- (void)_goBack;	// 0x339ecccd
- (void)_goForward;	// 0x339eccf5
- (BOOL)_hasScrollBars;	// 0x339ed415
- (float)_horizontalKeyboardScrollDistance;	// 0x339ecd1d
- (float)_horizontalPageScrollDistance;	// 0x339edaed
- (void)_install;	// 0x3399bcc1
- (BOOL)_isFlippedDocument;	// 0x339ecba5
- (BOOL)_isScrollable;	// 0x339ed2f5
- (BOOL)_isVerticalDocument;	// 0x339ecb69
- (id)_largestChildWithScrollBars;	// 0x339ed465
- (id)_largestScrollableChild;	// 0x339ed30d
- (id)_makeDocumentViewForDataSource:(id)dataSource;	// 0x339ee309
- (BOOL)_pageHorizontally:(BOOL)horizontally;	// 0x339ecde9
- (BOOL)_pageInBlockProgressionDirection:(BOOL)blockProgressionDirection;	// 0x339ece8d
- (BOOL)_pageVertically:(BOOL)vertically;	// 0x339ecd45
- (BOOL)_scrollHorizontallyBy:(float)by;	// 0x339edb51
- (BOOL)_scrollLineHorizontally:(BOOL)horizontally;	// 0x339ecf99
- (BOOL)_scrollLineVertically:(BOOL)vertically;	// 0x339ecef5
- (BOOL)_scrollOverflowInDirection:(int)direction granularity:(int)granularity;	// 0x339edf01
- (BOOL)_scrollToBeginningOfDocument;	// 0x339eddf1
- (BOOL)_scrollToEndOfDocument;	// 0x339edc29
- (BOOL)_scrollVerticallyBy:(float)by;	// 0x339edbbd
- (id)_scrollView;	// 0x3399ad75
- (void)_setDocumentView:(id)view;	// 0x3399b9c1
- (void)_setWebFrame:(id)frame;	// 0x3399a6c9
- (float)_verticalKeyboardScrollDistance;	// 0x339eca45
- (float)_verticalPageScrollDistance;	// 0x339ee441
- (Class)_viewClassForMIMEType:(id)mimetype;	// 0x339ba8f5
- (id)_webView;	// 0x339ba9b9
- (Frame *)_web_frame;	// 0x339b3339
- (id)_webcore_effectiveFirstResponder;	// 0x339ed605
- (BOOL)acceptsFirstResponder;	// 0x339eca3d
// converted property getter: - (BOOL)allowsScrolling;	// 0x339ee255
- (BOOL)becomeFirstResponder;	// 0x339eca6d
- (void)dealloc;	// 0x339b9cf9
- (id)documentView;	// 0x3399ba65
- (BOOL)documentViewShouldHandlePrint;	// 0x339ed241
- (void)drawRect:(CGRect)rect;	// 0x339a8915
- (void)finalize;	// 0x339ee2a9
- (void)frameSizeChanged;	// 0x339b3249
- (BOOL)isOpaque;	// 0x339ecb41
- (void)keyDown:(id)down;	// 0x339ed659
- (void)mouseDown:(id)down;	// 0x339ed221
- (void)mouseUp:(id)up;	// 0x339ed231
- (void)printDocumentView;	// 0x339ed29d
- (void)scrollLineDown:(id)down;	// 0x339ed139
- (void)scrollLineUp:(id)up;	// 0x339ed0e5
- (void)scrollPageDown:(id)down;	// 0x339ed091
- (void)scrollPageUp:(id)up;	// 0x339ed03d
- (void)scrollToBeginningOfDocument:(id)document;	// 0x339ecbe5
- (void)scrollToEndOfDocument:(id)document;	// 0x339ecc59
- (BOOL)scrollView:(id)view shouldScrollToPoint:(CGPoint)point;	// 0x339bc4a1
// converted property setter: - (void)setAllowsScrolling:(BOOL)scrolling;	// 0x339bec11
- (void)setBoundsSize:(CGSize)size;	// 0x339edf91
- (void)setFrameSize:(CGSize)size;	// 0x339edfe9
- (void)setNextKeyView:(id)view;	// 0x339ee1f1
- (void)viewDidMoveToWindow;	// 0x3399ee2d
- (CGRect)visibleRect;	// 0x339ee059
- (id)webFrame;	// 0x3399eec9
@end
