/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIWebSelectionGraph, UIWebTextRangeView, UIWebDocumentView, UIWebSelectionHandle, UIWebSelectionOutline, UIWebSelection, NSTimer, UIWebSelectionNode;

__attribute__((visibility("hidden")))
@interface UIWebSelectionView : UIView {
@private
	UIView *_center;	// 48 = 0x30
	CGRect _selectionFrame;	// 52 = 0x34
	UIWebSelectionHandle *_top;	// 68 = 0x44
	UIWebSelectionHandle *_right;	// 72 = 0x48
	UIWebSelectionHandle *_bottom;	// 76 = 0x4c
	UIWebSelectionHandle *_left;	// 80 = 0x50
	UIWebSelectionOutline *_outline;	// 84 = 0x54
	UIWebTextRangeView *_textRangeView;	// 88 = 0x58
	UIWebDocumentView *_documentView;	// 92 = 0x5c
	UIWebSelectionNode *_selectionNode;	// 96 = 0x60
	UIWebSelectionGraph *_selectionGraph;	// 100 = 0x64
	float _growThreshold;	// 104 = 0x68
	float _shrinkThreshold;	// 108 = 0x6c
	struct {
		UIWebSelectionHandle *scrollingHandle;
		double startTime;
		int direction;
		NSTimer *timer;
	} _autoscrollData;	// 112 = 0x70
	struct {
		UIWebSelectionHandle *activeHandle;
		CGPoint handleCenterStart;
		float handleOffset;
	} _blockSelectionData;	// 132 = 0x84
	struct {
		UIWebSelectionHandle *start;
		UIWebSelectionHandle *end;
		CGSize startingOffset;
		BOOL anchorAtStart;
		struct {
			BOOL flipPossible;
			BOOL rectsChanged;
			CGRect originalSelectionRect;
		} flipData;
	} _rangedSelectionData;	// 148 = 0x94
	BOOL _creatingSelection;	// 188 = 0xbc
	int _nestedLayoutCalls;	// 192 = 0xc0
	BOOL _calloutBarIsHiddenBeforeRotation;	// 196 = 0xc4
	BOOL _rotating;	// 197 = 0xc5
	int _selectionInFixedPosition;	// 200 = 0xc8
}
@property(readonly, assign, nonatomic) UIWebSelection *selection;	// G=0x30181725; 
@property(assign, nonatomic) CGRect selectionFrame;	// G=0x302ffc19; S=0x301d2695; 
@property(retain, nonatomic) UIWebSelectionNode *selectionNode;	// G=0x3018174d; S=0x3030326d; @synthesize=_selectionNode
- (id)initWithWebDocumentView:(id)webDocumentView;	// 0x300d43e5
- (void)_didScroll;	// 0x30301d39
- (void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x30301d79
- (id)activeHandle;	// 0x30302db1
- (BOOL)activelyManipulatingBlockSelectionHandle;	// 0x30302ea5
- (BOOL)activelyManipulatingTextSelectionHandle;	// 0x30302e65
- (void)animateSloppyReleaseOfHandleInText:(id)text withMagnifier:(id)magnifier;	// 0x30302005
- (int)autoscrollDirectionsForHandle:(id)handle;	// 0x30301a1d
- (void)autoscrollTimerFired:(id)fired;	// 0x30301d7d
- (void)calloutBar:(id)bar selectedCommand:(id)command;	// 0x302ff6a1
- (BOOL)canFlip;	// 0x3030147d
- (void)clearSelection;	// 0x301d25d9
- (void)computeExpandAndContractThresholdsForActiveHandle;	// 0x30301521
- (void)considerFlipping;	// 0x303013b9
- (void)contractForActiveHandle;	// 0x30301975
- (void)dealloc;	// 0x301d3bb1
- (CGRect)desiredBox;	// 0x303021bd
- (void)didEndScrollingOverflow;	// 0x302ff8ed
- (void)didEndScrollingPage;	// 0x302ff8b1
- (void)endSelectionCreationWithPoint:(CGPoint)point;	// 0x30302921
- (void)expandForActiveHandle;	// 0x303018cd
- (CGRect)fetchSelectionBoundingRect;	// 0x302ffc95
- (CGRect)fetchSelectionBoundingTextSelectionRect;	// 0x302ffc3d
- (id)handleWithPosition:(int)position;	// 0x300d48ed
- (id)handles;	// 0x30300269
- (void)hideControls;	// 0x301d25ad
- (void)hideControlsBeforeRotation;	// 0x302ffb81
- (void)hideCopyCallout;	// 0x301d25bd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3030022d
- (void)layoutChangedByScrolling:(BOOL)scrolling;	// 0x30303111
- (id)nodeInPristineGraphAtPoint:(CGPoint)point;	// 0x30302451
- (void)onAfterScrollShowingSelection:(BOOL)selection;	// 0x302ff7c9
- (void)onBeforeScrollHidingSelection:(BOOL)selection;	// 0x302ff70d
- (void)removeFromSuperview;	// 0x30174255
- (void)resetSelection;	// 0x303000fd
- (void)scaleChanged;	// 0x30302cd9
// declared property getter: - (id)selection;	// 0x30181725
- (void)selectionChanged;	// 0x303023c5
// declared property getter: - (CGRect)selectionFrame;	// 0x302ffc19
// declared property getter: - (id)selectionNode;	// 0x3018174d
- (void)setHandleCenters;	// 0x301d2769
// declared property setter: - (void)setSelectionFrame:(CGRect)frame;	// 0x301d2695
- (void)setSelectionFrame:(CGRect)frame animated:(BOOL)animated;	// 0x30300049
// declared property setter: - (void)setSelectionNode:(id)node;	// 0x3030326d
- (void)shiftWebRangeSelectionAnimationDidStop:(id)shiftWebRangeSelectionAnimation finished:(id)finished;	// 0x30301ff1
- (BOOL)shouldContractForActiveHandle;	// 0x3030180d
- (BOOL)shouldExpandForActiveHandle;	// 0x3030174d
- (BOOL)shouldSwitchToBlockModeForHandle:(id)handle;	// 0x30300e05
- (void)showControls;	// 0x302ff941
- (void)showControlsAfterRotation;	// 0x302ff901
- (void)showCopyCalloutWithAnimation:(BOOL)animation;	// 0x302ff5e1
- (void)startSelectionCreationWithPoint:(CGPoint)point;	// 0x30302521
- (void)stopAnyAutoscrolling;	// 0x30301f5d
- (void)switchToBlockModeForHandle:(id)handle;	// 0x30300f55
- (void)switchToTextModeForHandle:(id)handle;	// 0x303010cd
- (id)tintView;	// 0x300d45d5
- (void)touchChanged:(id)changed forHandle:(id)handle;	// 0x303002e1
- (void)touchChanged:(id)changed forHandleInText:(id)text;	// 0x303009d5
- (void)updateAutoscrollForHandle:(id)handle;	// 0x30301c1d
- (void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;	// 0x30302f61
- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;	// 0x30302ee5
- (void)updateFrameAndHandlesWithAnimation:(BOOL)animation;	// 0x302ffd5d
- (BOOL)updateRectForCalloutBar:(id)calloutBar inWindow:(id)window;	// 0x302ff34d
- (void)updateSelectionCreationWithPoint:(CGPoint)point;	// 0x303027d1
- (void)updateSelectionRects;	// 0x30302355
- (void)updateTextRangeViewSelectionRects;	// 0x302ffced
- (void)willStartScrollingOverflow;	// 0x302ff8d9
- (void)willStartScrollingPage;	// 0x302ff889
@end

