/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizerDelegate.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIWebDocumentView, UILongPressGestureRecognizer, UIWebSelectionView, UIWebSelection, UITapAndAHalfRecognizer;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate> {
	UIWebDocumentView *_webView;	// 4 = 0x4
	UIWebSelectionView *_selectionView;	// 8 = 0x8
	UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 12 = 0xc
	UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;	// 16 = 0x10
	BOOL _enabled;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL enabled;	// G=0x32d4006d; S=0x32d41201; 
@property(readonly, assign, nonatomic) UIWebSelection *selection;	// G=0x32f7279d; 
@property(readonly, assign, nonatomic) CGRect selectionFrame;	// G=0x32f727bd; 
- (id)initWithWebView:(id)webView;	// 0x32d3f5f9
- (void)clearSelection;	// 0x32f726ad
- (void)dealloc;	// 0x32f72485
- (void)didEndScrollingOrZoomingPage;	// 0x32f72a79
- (void)didEndScrollingOverflow;	// 0x32f72ab9
- (void)didRotate:(id)rotate;	// 0x32f72b5d
// declared property getter: - (BOOL)enabled;	// 0x32d4006d
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x32f72579
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x32f726a9
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x32f725d5
- (void)hideCallout;	// 0x32d4368d
- (id)hitTest:(CGPoint)test withEvent:(id)event fromView:(id)view;	// 0x32f729d9
- (BOOL)isSelectionGestureRecognizer:(id)recognizer;	// 0x32f72549
- (void)layoutChangedByScrolling:(BOOL)scrolling;	// 0x32f72b15
- (void)makeWebSelection:(id)selection;	// 0x32f72825
- (void)resignedFirstResponder;	// 0x32f72ad9
- (void)scaleChanged;	// 0x32f729b5
// declared property getter: - (id)selection;	// 0x32f7279d
- (void)selectionChanged;	// 0x32f72731
// declared property getter: - (CGRect)selectionFrame;	// 0x32f727bd
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32d41201
- (void)setGestureRecognizers;	// 0x32d3fe81
- (void)tap:(id)tap;	// 0x32f72945
- (void)willRotate:(id)rotate;	// 0x32f72b3d
- (void)willStartScrollingOrZoomingPage;	// 0x32f72a59
- (void)willStartScrollingOverflow;	// 0x32f72a99
@end
