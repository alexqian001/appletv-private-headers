/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WAKResponder.h"
#import "WebCore-Structs.h"

@class NSMutableSet;

@interface WAKView : WAKResponder {
@private
	WKViewContext viewContext;	// 4 = 0x4
	WKView *viewRef;	// 60 = 0x3c
	NSMutableSet *subviewReferences;	// 64 = 0x40
}
@property(assign) unsigned autoresizingMask;	// G=0x35cca7ad; S=0x355ef2a1; converted property
@property(assign) CGRect frame;	// G=0x3565af5d; S=0x3563227d; converted property
@property(assign) BOOL needsDisplay;	// G=0x35cca4cd; S=0x356ac945; converted property
@property(retain) id nextKeyView;	// G=0x356aa429; S=0x355ef3a1; converted property
@property(assign) float scale;	// G=0x3578ade1; S=0x356ab551; converted property
+ (id)_wrapperForViewRef:(WKView *)viewRef;	// 0x3563271d
+ (id)focusView;	// 0x35cca509
- (id)init;	// 0x35751b45
- (id)initWithFrame:(CGRect)frame;	// 0x355ee801
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x35cca53d
- (void)_handleEvent:(id)event;	// 0x35836339
- (BOOL)_handleResponderCall:(int)call;	// 0x3564f6ed
- (id)_initWithViewRef:(WKView *)viewRef;	// 0x355ee979
- (void)_setDrawsOwnDescendants:(BOOL)descendants;	// 0x355fabb9
- (id)_subviewReferences;	// 0x355ef355
- (WKView *)_viewRef;	// 0x355ef345
- (BOOL)accessibilityIsIgnored;	// 0x358664d5
- (void)addSubview:(id)subview;	// 0x355ef2ed
// converted property getter: - (unsigned)autoresizingMask;	// 0x35cca7ad
- (CGRect)bounds;	// 0x355fab49
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x357ad525
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x357ff605
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x3567e741
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x3567f329
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x35cca7e9
- (void)dealloc;	// 0x3563dded
- (id)description;	// 0x35cca6c5
- (void)display;	// 0x35cca8ed
- (void)displayIfNeeded;	// 0x35cca4d1
- (void)displayRect:(CGRect)rect;	// 0x35cca875
- (void)displayRectIgnoringOpacity:(CGRect)opacity;	// 0x3578bee9
- (void)displayRectIgnoringOpacity:(CGRect)opacity inContext:(CGContextRef)context;	// 0x35cca845
- (void)drawRect:(CGRect)rect;	// 0x3565af59
// converted property getter: - (CGRect)frame;	// 0x3565af5d
- (void)frameSizeChanged;	// 0x3564cbd9
- (id)hitTest:(CGPoint)test;	// 0x358360e9
- (BOOL)inLiveResize;	// 0x35cca4e9
- (void)invalidateGState;	// 0x3564d389
- (BOOL)isDescendantOf:(id)of;	// 0x35664b2d
- (id)lastScrollableAncestor;	// 0x35cca901
- (void)layout;	// 0x35cca4f1
- (void)layoutIfNeeded;	// 0x35cca4f5
- (void)lockFocus;	// 0x35cca7d5
- (BOOL)mouse:(CGPoint)mouse inRect:(CGRect)rect;	// 0x3583623d
// converted property getter: - (BOOL)needsDisplay;	// 0x35cca4cd
- (BOOL)needsPanelToBecomeKey;	// 0x35cca4d5
// converted property getter: - (id)nextKeyView;	// 0x356aa429
- (id)nextResponder;	// 0x35cca4f9
- (id)nextValidKeyView;	// 0x35cca4dd
- (id)previousKeyView;	// 0x35cca4e1
- (id)previousValidKeyView;	// 0x35cca4d9
- (void)releaseGState;	// 0x35cca4e5
- (void)removeFromSuperview;	// 0x35784e75
// converted property getter: - (float)scale;	// 0x3578ade1
- (void)scrollPoint:(CGPoint)point;	// 0x3567eb61
- (BOOL)scrollRectToVisible:(CGRect)visible;	// 0x35cca77d
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x355ef2a1
- (void)setBoundsOrigin:(CGPoint)origin;	// 0x35cca8a5
- (void)setBoundsSize:(CGSize)size;	// 0x3564cacd
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x3563227d
- (void)setFrameOrigin:(CGPoint)origin;	// 0x35cca8d5
- (void)setFrameSize:(CGSize)size;	// 0x35cca8bd
- (void)setHidden:(BOOL)hidden;	// 0x35779331
// converted property setter: - (void)setNeedsDisplay:(BOOL)display;	// 0x356ac945
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3564ec15
- (void)setNeedsLayout:(BOOL)layout;	// 0x35cca4ed
// converted property setter: - (void)setNextKeyView:(id)view;	// 0x355ef3a1
// converted property setter: - (void)setScale:(float)scale;	// 0x356ab551
- (id)subviews;	// 0x3565a459
- (id)superview;	// 0x356326a5
- (void)unlockFocus;	// 0x35cca7c1
- (void)viewDidMoveToWindow;	// 0x35632985
- (void)viewWillDraw;	// 0x3565a425
- (CGRect)visibleRect;	// 0x35cca82d
- (void)willRemoveSubview:(id)subview;	// 0x35785021
- (id)window;	// 0x355facdd
@end

