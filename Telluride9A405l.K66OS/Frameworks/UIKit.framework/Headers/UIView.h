/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIResponder.h"
#import "UIAppearance.h"
#import "UIAppearanceContainer.h"
#import "UITextEffectsOrdering.h"

@class CALayer, NSMutableArray, NSString, UIViewController, NSArray;

@interface UIView : UIResponder <UITextEffectsOrdering, NSCoding, UIAppearance, UIAppearanceContainer> {
@private
	CALayer *_layer;	// 4 = 0x4
	id _tapInfo;	// 8 = 0x8
	id _gestureInfo;	// 12 = 0xc
	NSMutableArray *_gestureRecognizers;	// 16 = 0x10
	NSArray *_subviewCache;	// 20 = 0x14
	float _charge;	// 24 = 0x18
	int _tag;	// 28 = 0x1c
	UIViewController *_viewDelegate;	// 32 = 0x20
	NSString *_backgroundColorSystemColorName;	// 36 = 0x24
	struct {
		unsigned userInteractionDisabled : 1;
		unsigned implementsDrawRect : 1;
		unsigned implementsDidScroll : 1;
		unsigned implementsMouseTracking : 1;
		unsigned hasBackgroundColor : 1;
		unsigned isOpaque : 1;
		unsigned becomeFirstResponderWhenCapable : 1;
		unsigned interceptMouseEvent : 1;
		unsigned deallocating : 1;
		unsigned debugFlash : 1;
		unsigned debugSkippedSetNeedsDisplay : 1;
		unsigned debugScheduledDisplayIsRequired : 1;
		unsigned isInAWindow : 1;
		unsigned isAncestorOfFirstResponder : 1;
		unsigned dontAutoresizeSubviews : 1;
		unsigned autoresizeMask : 6;
		unsigned patternBackground : 1;
		unsigned fixedBackgroundPattern : 1;
		unsigned dontAnimate : 1;
		unsigned superLayerIsView : 1;
		unsigned layerKitPatternDrawing : 1;
		unsigned multipleTouchEnabled : 1;
		unsigned exclusiveTouch : 1;
		unsigned hasViewController : 1;
		unsigned needsDidAppearOrDisappear : 1;
		unsigned gesturesEnabled : 1;
		unsigned deliversTouchesForGesturesToSuperview : 1;
		unsigned chargeEnabled : 1;
		unsigned skipsSubviewEnumeration : 1;
		unsigned needsDisplayOnBoundsChange : 1;
		unsigned hasTiledLayer : 1;
		unsigned hasLargeContent : 1;
		unsigned isInAnimatedVCTransition : 1;
		unsigned traversalMark : 1;
		unsigned appearanceIsInvalid : 1;
		unsigned monitorsSubtree : 1;
	} _viewFlags;	// 40 = 0x28
}
@property(assign) float alpha;	// G=0x32c7a551; S=0x32c77719; converted property
@property(assign) BOOL autoresizesSubviews;	// G=0x32e35ac1; S=0x32cfb371; converted property
@property(assign) unsigned autoresizingMask;	// G=0x32cb800d; S=0x32c9c131; converted property
@property(retain) id backgroundColor;	// G=0x32cbef61; S=0x32cbe789; converted property
@property(retain, nonatomic, getter=_backgroundColorSystemColorName, setter=_setBackgroundColorSystemColorName:) NSString *backgroundColorSystemColorName;	// G=0x32cbf041; S=0x32cbee25; 
@property(assign) CGRect bounds;	// G=0x32c771fd; S=0x32cb1911; converted property
@property(readonly, assign, nonatomic, getter=_caretRect) CGRect caretRect;	// G=0x32fc5435; 
@property(assign) CGPoint center;	// G=0x32c99261; S=0x32c962e1; converted property
@property(assign) float charge;	// G=0x32c8eea9; S=0x32cb42c9; converted property
@property(assign) BOOL clearsContextBeforeDrawing;	// G=0x32e36715; S=0x32de3511; converted property
@property(assign) BOOL clipsToBounds;	// G=0x32d41e95; S=0x32c8aaf9; converted property
@property(assign) int contentMode;	// G=0x32c9574d; S=0x32c9bf41; converted property
@property(assign) float contentScaleFactor;	// G=0x32c79a75; S=0x32c94771; converted property
@property(assign) CGRect contentStretch;	// G=0x32e36641; S=0x32cabd7d; converted property
@property(assign, nonatomic) BOOL deliversTouchesForGesturesToSuperview;	// G=0x32c8fa61; S=0x32d13bed; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x32d1667d; S=0x32d02d8d; converted property
@property(assign) int enabledGestures;	// G=0x32e77bb5; S=0x32e77b8d; converted property
@property(assign, getter=isExclusiveTouch) BOOL exclusiveTouch;	// G=0x32c8f331; S=0x32d13c09; converted property
@property(assign) CGRect frame;	// G=0x32c7729d; S=0x32c77595; converted property
@property(assign) CGPoint frameOrigin;	// G=0x32d469c9; S=0x32c77241; converted property
@property(assign) id gestureDelegate;	// G=0x32e77b69; S=0x32d17ad5; converted property
@property(retain) NSMutableArray *gestureRecognizers;	// G=0x32c7800d; S=0x32e37ca1; converted property
@property(assign, nonatomic) BOOL gesturesEnabled;	// G=0x32d762cd; S=0x32c907ed; 
@property(assign, getter=isHidden) BOOL hidden;	// G=0x32c8e201; S=0x32c9609d; converted property
@property(assign, nonatomic, getter=isInAnimatedVCTransition) BOOL inAnimatedVCTransition;	// G=0x32cb82b9; S=0x32e370d5; 
@property(readonly, assign, nonatomic) CALayer *layer;	// G=0x32c79d61; @synthesize=_layer
@property(assign, nonatomic, getter=_monitorsSubtree, setter=_setMonitorsSubtree:) BOOL monitorsSubtree;	// G=0x32e37c61; S=0x32da03a5; 
@property(assign, getter=isMultipleTouchEnabled) BOOL multipleTouchEnabled;	// G=0x32df19a9; S=0x32cbc865; converted property
@property(assign) BOOL needsDisplayOnBoundsChange;	// G=0x32dcc8d9; S=0x32cb5b05; converted property
@property(assign, getter=isOpaque) BOOL opaque;	// G=0x32c9475d; S=0x32c94a45; converted property
@property(assign) CGPoint origin;	// G=0x32d469a9; S=0x32c77231; converted property
@property(assign) CGPoint position;	// G=0x32e360fd; S=0x32dbe069; converted property
@property(assign) CGSize size;	// G=0x32c79aed; S=0x32d048fd; converted property
@property(assign, nonatomic) BOOL skipsSubviewEnumeration;	// G=0x32e3797d; S=0x32e37995; 
@property(assign, nonatomic) int tag;	// G=0x32d22205; S=0x32d12da9; @synthesize=_tag
@property(assign) id tapDelegate;	// G=0x32e34df1; S=0x32e34d59; converted property
@property(assign) CGAffineTransform transform;	// G=0x32ca3825; S=0x32c99291; converted property
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// G=0x32c8e1e9; S=0x32c77739; 
@property(assign, nonatomic, getter=_viewDelegate, setter=_setViewDelegate:) UIViewController *viewDelegate;	// G=0x32c79d4d; S=0x32cb4699; 
@property(assign, nonatomic) BOOL viewTraversalMark;	// G=0x32c79f95; S=0x32c77cf5; 
+ (void)_animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x32d5581d
+ (void)_beginDisablingPromoteDescendantToFirstResponder;	// 0x32d5aac1
+ (float)_currentAnimationDuration;	// 0x32c9967d
+ (void)_endDisablingPromoteDescendantToFirstResponder;	// 0x32d5aad5
+ (void)_inheritAnimationParameters;	// 0x32da3d0d
+ (BOOL)_invalidatesViewUponCreation;	// 0x32d01a51
+ (BOOL)_isInAnimationBlock;	// 0x32c79d71
+ (void)_performCustomizableAppearanceModifications:(id)modifications;	// 0x32d14cad
+ (void)_performWithoutAnimation:(id)animation;	// 0x32c9d5c9
+ (void)_setAnimationAttributes:(id)attributes;	// 0x32e368f9
+ (void)_setAnimationFilter:(int)filter forView:(id)view;	// 0x32e36a65
+ (void)_setAnimationFilterValue:(float)value;	// 0x32e36aad
+ (void)_setInvalidatesViewUponCreation:(BOOL)creation;	// 0x32d01a61
+ (void)_setIsResponderAncestorOfFirstResponder:(BOOL)firstResponder startingAtFirstResponder:(id)firstResponder2;	// 0x32c7aacd
+ (void)_setupAnimationWithDuration:(double)duration delay:(double)delay view:(id)view options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x32c99315
+ (id)_tintColorForStyle:(int)style;	// 0x32e39381
+ (id)_topMostView:(id)view;	// 0x32df62d9
+ (void)_transitionFromView:(id)view toView:(id)view2 duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x32e370fd
+ (void)animateWithDuration:(double)duration animations:(id)animations;	// 0x32e36c1d
+ (void)animateWithDuration:(double)duration animations:(id)animations completion:(id)completion;	// 0x32cfbab5
+ (void)animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x32c992d5
+ (id)appearance;	// 0x32e341c9
+ (id)appearanceWhenContainedIn:(Class)anIn;	// 0x32e341e9
+ (BOOL)areAnimationsEnabled;	// 0x32c8a441
+ (void)beginAnimations:(id)animations;	// 0x32c9a7dd
+ (void)beginAnimations:(id)animations context:(void *)context;	// 0x32c8a035
+ (void)commitAnimations;	// 0x32c8aca1
+ (void)disableAnimation;	// 0x32c9d5b9
+ (void)enableAnimation;	// 0x32ced0d5
+ (void)endAnimations;	// 0x32ca1ac5
+ (void)flush;	// 0x32dce4d9
+ (Class)layerClass;	// 0x32c94741
+ (void)setAnimationAutoreverses:(BOOL)autoreverses;	// 0x32e369d5
+ (void)setAnimationBeginsFromCurrentState:(BOOL)currentState;	// 0x32c8a199
+ (void)setAnimationCurve:(int)curve;	// 0x32c9a825
+ (void)setAnimationDelay:(double)delay;	// 0x32db7245
+ (void)setAnimationDelegate:(id)delegate;	// 0x32c8a125
+ (void)setAnimationDidStopSelector:(SEL)stopSelector;	// 0x32c8a179
+ (void)setAnimationDuration:(double)duration;	// 0x32c8a0fd
+ (void)setAnimationFrameInterval:(double)interval;	// 0x32de1711
+ (void)setAnimationFromCurrentState:(BOOL)currentState;	// 0x32da7605
+ (void)setAnimationPosition:(CGPoint)position;	// 0x32e36921
+ (void)setAnimationRepeatAutoreverses:(BOOL)autoreverses;	// 0x32e369b1
+ (void)setAnimationRepeatCount:(float)count;	// 0x32e36985
+ (void)setAnimationRoundsToInteger:(BOOL)integer;	// 0x32cd449d
+ (void)setAnimationStartDate:(id)date;	// 0x32e36945
+ (void)setAnimationStartTime:(double)time;	// 0x32c9a7fd
+ (void)setAnimationTransition:(int)transition forView:(id)view;	// 0x32e36e91
+ (void)setAnimationTransition:(int)transition forView:(id)view cache:(BOOL)cache;	// 0x32e369e5
+ (void)setAnimationWillStartSelector:(SEL)startSelector;	// 0x32e36a45
+ (void)setAnimationsEnabled:(BOOL)enabled;	// 0x32c8a455
+ (void)throttledFlush;	// 0x32e368a5
+ (void)transitionFromView:(id)view toView:(id)view2 duration:(double)duration options:(unsigned)options completion:(id)completion;	// 0x32e36c91
+ (void)transitionWithView:(id)view duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x32e36c51
- (id)init;	// 0x32ca9111
- (id)initWithCoder:(id)coder;	// 0x32e342ed
- (id)initWithFrame:(CGRect)frame;	// 0x32c940bd
- (id)initWithSize:(CGSize)size;	// 0x32cead99
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x32c79191
- (BOOL)_alwaysHandleInteractionEvents;	// 0x32e374c1
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x32e374bd
- (void)_animateToScrollPoint:(CGPoint)scrollPoint;	// 0x32e789b1
- (void)_animateZoomFailureToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration;	// 0x32e78b11
- (BOOL)_animationIsPaused;	// 0x32ca189d
- (id)_appearanceContainer;	// 0x32e342ad
- (BOOL)_appearanceIsInvalid;	// 0x32e35405
- (BOOL)_appliesExclusiveTouchToSubviewTree;	// 0x32c8f3a5
- (id)_asTextSelection;	// 0x32fc5431
- (BOOL)_associatedViewControllerForwardsAppearanceCallbacks:(id)callbacks performHierarchyCheck:(BOOL)check isRoot:(BOOL)root;	// 0x32cb809d
- (id)_autoresizingDescription;	// 0x32e37e35
- (CGColorRef)_backgroundCGColor;	// 0x32c94b01
- (id)_backgroundColor;	// 0x32cbef71
// declared property getter: - (id)_backgroundColorSystemColorName;	// 0x32cbf041
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x32c99125
- (BOOL)_canDrawContent;	// 0x32c79a51
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x32e37711
- (BOOL)_canStartRotationFromEvent:(GSEventRef)event;	// 0x32e77799
- (BOOL)_canStartZoomFromEvent:(GSEventRef)event;	// 0x32e771ed
- (BOOL)_cancelTapDelegateTracking;	// 0x32e376ed
// declared property getter: - (CGRect)_caretRect;	// 0x32fc5435
- (void)_clearAnimationFilters;	// 0x32e36ad9
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x32c785e1
- (void)_clearBecomeFirstResponderWhenCapableOnSubtree;	// 0x32cf77b5
- (void)_collectKeyViews:(id)views;	// 0x32e37539
- (CGPoint)_constrainedScrollPoint:(CGPoint)point contentSize:(CGSize)size;	// 0x32e7856d
- (BOOL)_containedInAbsoluteResponderChain;	// 0x32c7aa1d
- (id)_containerLayoutViewForFastMode;	// 0x32e393cd
- (int)_containerStyle;	// 0x32d55429
- (id)_containingScrollView;	// 0x32cd06a5
- (BOOL)_controlsOwnScaleFactor;	// 0x32e373f9
- (CGPoint)_convertOffset:(CGPoint)offset fromView:(id)view;	// 0x32e358e5
- (CGPoint)_convertOffset:(CGPoint)offset toView:(id)view;	// 0x32e35841
- (void *)_createIOSurfaceFromRect:(CGRect)rect padding:(UIEdgeInsets)padding;	// 0x32df7331
- (void *)_createIOSurfaceWithPadding:(UIEdgeInsets)padding;	// 0x32e36839
- (void)_createLayerWithFrame:(CGRect)frame;	// 0x32c94461
- (int)_depthFirstCompare:(id)compare;	// 0x32d75f99
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x32e37c7d
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x32e37c79
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32c78bcd
- (void)_didRemoveSubview:(id)subview;	// 0x32c79169
- (void)_didScroll;	// 0x32e3738d
- (void)_enableLayerKitPatternDrawing:(BOOL)drawing;	// 0x32e36835
- (id)_enclosingScrollableScrollerIncludingSelf;	// 0x32e174a5
- (id)_enclosingScrollerIncludingSelf;	// 0x32e3941d
- (void)_encodeBackgroundColorWithCoder:(id)coder;	// 0x32e37b11
- (void)_encodeFrameWithCoder:(id)coder;	// 0x32e379b9
- (id)_findFirstSubviewWantingToBecomeFirstResponder;	// 0x32c7789d
- (id)_firstResponder;	// 0x32c785f9
- (void)_gestureChanged:(int)changed event:(GSEventRef)event;	// 0x32e75d2d
- (void)_gestureEnded:(GSEventRef)ended;	// 0x32c79069
- (id)_gestureInfo;	// 0x32d17afd
- (id)_gestureRecognizers;	// 0x32d760a1
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x32e37b7d
- (BOOL)_hasOpaqueBackground;	// 0x32cbedb5
- (id)_interceptEvent:(id)event;	// 0x32dbd4e9
- (id)_interceptMouseEvent:(GSEventRef)event;	// 0x32e373b1
- (float)_internalScaleForScale:(float)scale;	// 0x32e769e5
- (void)_invalidateAppearanceForSubviewsOfClass:(Class)aClass;	// 0x32e35315
- (void)_invalidateLayerContents;	// 0x32e37391
- (void)_invalidateSubviewCache;	// 0x32c787fd
- (BOOL)_isAncestorOfFirstResponder;	// 0x32c796f5
- (BOOL)_isChargeEnabled;	// 0x32d54439
- (BOOL)_isInAWindow;	// 0x32db7761
- (BOOL)_isInExclusiveTouchSubviewTree;	// 0x32c8f345
- (BOOL)_isInTransitionBlock;	// 0x32cb83b9
- (BOOL)_isRootForKeyResponderCycle;	// 0x32e374c5
- (BOOL)_isRubberBanding;	// 0x32e767a9
- (BOOL)_isScrollingEnabled;	// 0x32e394c1
- (id)_layer;	// 0x32c8edbd
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object;	// 0x32c789dd
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object withObject:(id)object3 copySublayers:(BOOL)sublayers;	// 0x32c78635
- (float)_minimumZoomScaleDelta;	// 0x32e76c19
// declared property getter: - (BOOL)_monitorsSubtree;	// 0x32e37c61
- (void)_mouseDown:(GSEventRef)down;	// 0x32e37645
- (void)_mouseDragged:(GSEventRef)dragged;	// 0x32e3767d
- (void)_mouseUp:(GSEventRef)up;	// 0x32e376b5
- (void)_movedToFront;	// 0x32c79c2d
- (BOOL)_needsLayoutOnAnimatedBoundsChangeForNewBounds:(CGRect)newBounds;	// 0x32e36095
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)newFrame;	// 0x32e35501
- (id)_nextKeyResponder;	// 0x32e35081
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32e37b4d
- (void)_postMovedFromSuperview:(id)superview;	// 0x32c78acd
- (id)_previousKeyResponder;	// 0x32e351bd
- (Class)_printFormatterClass;	// 0x32fcc785
- (void)_promoteDescendantToFirstResponderIfNecessary;	// 0x32c77849
- (void)_removeAllAnimations:(BOOL)animations;	// 0x32d5346d
- (void)_removeFirstResponderFromSubtree;	// 0x32d56d65
- (void)_renderSnapshotWithRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x32e377d1
- (void)_resetContentStretch;	// 0x32e365e9
- (void)_resetZoomingWithEvent:(GSEventRef)event;	// 0x32e7816d
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x32cb7bfd
- (void)_resizeWithOldSuperviewSize_ancient:(CGSize)oldSuperviewSize_ancient;	// 0x32e35b11
- (id)_rootForKeyResponderCycle;	// 0x32e374d9
- (void)_rotateFromEvent:(GSEventRef)event;	// 0x32e778d9
- (void)_rotateToDegrees:(float)degrees duration:(float)duration event:(GSEventRef)event;	// 0x32e77591
- (float)_rubberBandScaleForScale:(float)scale;	// 0x32e76c25
- (void)_rubberbandZoomToEvent:(GSEventRef)event scale:(float)scale;	// 0x32e766b5
- (float)_scaleForInternalScale:(float)internalScale;	// 0x32e76af9
- (id)_scriptingInfo;	// 0x32dbe781
- (CGPoint)_scrollPointForPoint:(CGPoint)point scale:(float)scale constrain:(BOOL)constrain snapToEdge:(BOOL)edge;	// 0x32e760d5
- (id)_scroller;	// 0x32d04a09
- (CGSize)_scrollerContentSize;	// 0x32e784ad
- (void)_setAppearanceIsInvalid:(BOOL)invalid;	// 0x32e3541d
- (void)_setBackgroundCGColor:(CGColorRef)color;	// 0x32e37c8d
- (void)_setBackgroundCGColor:(CGColorRef)color withSystemColorName:(id)systemColorName;	// 0x32cbe8ad
- (void)_setBackgroundColor:(id)color;	// 0x32cbe799
// declared property setter: - (void)_setBackgroundColorSystemColorName:(id)name;	// 0x32cbee25
- (void)_setChargeEnabled:(BOOL)enabled;	// 0x32d4b4a5
- (void)_setContainerLayoutViewForFastMode:(id)fastMode;	// 0x32e39409
- (void)_setContentImage:(id)image;	// 0x32d5b4a1
- (void)_setContentStretchInPixels:(CGRect)pixels forContentSize:(CGSize)contentSize shouldTile:(BOOL)tile;	// 0x32c95ec1
- (void)_setContentsTransform:(CGAffineTransform)transform;	// 0x32e3778d
- (void)_setGestureInfoZoomScale:(float)scale;	// 0x32e7652d
- (void)_setInterceptMouseEvent:(BOOL)event;	// 0x32d509b9
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x32c7ab9d
// declared property setter: - (void)_setMonitorsSubtree:(BOOL)subtree;	// 0x32da03a5
- (void)_setRotationAnimationProgress:(id)progress;	// 0x32e7770d
- (void)_setShouldRasterize:(BOOL)_set;	// 0x32e36675
// declared property setter: - (void)_setViewDelegate:(id)delegate;	// 0x32cb4699
- (void)_setZoomAnimationProgress:(id)progress;	// 0x32e76811
- (void)_setZoomScale:(float)scale duration:(double)duration;	// 0x32e77f61
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x32c9a8a9
- (BOOL)_shouldApplyExclusiveTouch;	// 0x32c8f2ed
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;	// 0x32c986b9
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x32c796dd
- (void)_startGesture:(int)gesture event:(GSEventRef)event;	// 0x32e75ad1
- (BOOL)_startRotationFromEvent:(GSEventRef)event;	// 0x32e77879
- (BOOL)_startZoomFromEvent:(GSEventRef)event;	// 0x32e7728d
- (void)_stopGesture:(int)gesture event:(GSEventRef)event;	// 0x32e75c21
- (void)_stopRotationFromEvent:(GSEventRef)event;	// 0x32e77a4d
- (void)_stopZoomFromEvent:(GSEventRef)event;	// 0x32e77391
- (int)_style;	// 0x32d5546d
- (BOOL)_subclassImplementsDrawRect;	// 0x32c94421
- (void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x32c79969
- (id)_superDescription;	// 0x32e38629
- (id)_syntheticTouch;	// 0x32ea7fbd
- (id)_syntheticUIEventWithGSEvent:(GSEventRef)gsevent touchPhase:(int)phase;	// 0x32ea7fc1
- (int)_topToBottomLeftToRightViewCompare:(id)rightViewCompare;	// 0x32e34e15
- (void)_unsubscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x32c78a01
- (void)_updateNeedsDisplayOnBoundsChange;	// 0x32cb5b39
- (BOOL)_usesDifferentHitTestForGestures;	// 0x32c8ee0d
- (id)_viewControllerForAncestor;	// 0x32cb8259
// declared property getter: - (id)_viewDelegate;	// 0x32c79d4d
- (id)_viewIndexPath;	// 0x32df6391
- (BOOL)_wantsCornerSnapshotsForScrolling;	// 0x32d554ad
- (void)_webCustomViewWasAddedAsSubviewOfView:(id)view;	// 0x32e373fd
- (void)_webCustomViewWasRemovedFromSuperview:(id)superview;	// 0x32e37481
- (void)_webCustomViewWillBeRemovedFromSuperview;	// 0x32e37449
- (void)_willMoveToWindow:(id)window;	// 0x32c77d19
- (void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;	// 0x32c79709
- (id)_window;	// 0x32c7ac95
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x32e78859
- (float)_zoomAnimationProgress;	// 0x32e78bc9
- (float)_zoomScale;	// 0x32e780f1
- (void)_zoomToEvent:(GSEventRef)event scale:(float)scale animate:(BOOL)animate constrainScrollPoint:(BOOL)point;	// 0x32e7663d
- (void)_zoomToScale:(float)scale event:(GSEventRef)event;	// 0x32e76555
- (void)_zoomToScrollPoint:(CGPoint)scrollPoint scale:(float)scale duration:(float)duration event:(GSEventRef)event;	// 0x32e78635
- (void)_zoomToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration constrainScrollPoint:(BOOL)point event:(GSEventRef)event;	// 0x32e78905
- (BOOL)_zoomWithEvent:(GSEventRef)event;	// 0x32e76df5
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x32c7884d
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x32e36bfd
- (void)addGestureRecognizer:(id)recognizer;	// 0x32cbd27d
- (void)addSubview:(id)subview;	// 0x32c7916d
// converted property getter: - (float)alpha;	// 0x32c7a551
- (void)animator:(id)animator startAnimation:(id)animation;	// 0x32e0b845
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x32e75da1
// converted property getter: - (BOOL)autoresizesSubviews;	// 0x32e35ac1
// converted property getter: - (unsigned)autoresizingMask;	// 0x32cb800d
// converted property getter: - (id)backgroundColor;	// 0x32cbef61
// converted property getter: - (CGRect)bounds;	// 0x32c771fd
- (void)bringSubviewToFront:(id)front;	// 0x32c79b25
- (BOOL)canHandleGestures;	// 0x32e77b4d
- (BOOL)canHandleSwipes;	// 0x32c79065
- (BOOL)cancelMouseTracking;	// 0x32de513d
- (BOOL)cancelTouchTracking;	// 0x32e352f9
// converted property getter: - (CGPoint)center;	// 0x32c99261
// converted property getter: - (float)charge;	// 0x32c8eea9
// converted property getter: - (BOOL)clearsContextBeforeDrawing;	// 0x32e36715
// converted property getter: - (BOOL)clipsToBounds;	// 0x32d41e95
- (int)compareTextEffectsOrdering:(id)ordering;	// 0x32cfb789
- (BOOL)containsView:(id)view;	// 0x32d5c631
// converted property getter: - (int)contentMode;	// 0x32c9574d
// converted property getter: - (float)contentScaleFactor;	// 0x32c79a75
// converted property getter: - (CGRect)contentStretch;	// 0x32e36641
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x32c8e421
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x32d54235
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x32cc5b71
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x32cb92d1
- (CGSize)convertSize:(CGSize)size fromView:(id)view;	// 0x32e3574d
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x32e35659
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x32e370b1
- (void)dealloc;	// 0x32c9fa55
- (void)deferredBecomeFirstResponder;	// 0x32d5c74d
// declared property getter: - (BOOL)deliversTouchesForGesturesToSuperview;	// 0x32c8fa61
- (id)description;	// 0x32e37fa9
- (void)didAddSubview:(id)subview;	// 0x32c79ae9
- (void)didMoveToSuperview;	// 0x32c79165
- (void)didMoveToWindow;	// 0x32c7915d
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x32c84e65
- (void)drawRect:(CGRect)rect;	// 0x32db8131
- (void)drawRect:(CGRect)rect forViewPrintFormatter:(id)viewPrintFormatter;	// 0x32fcc7f1
// converted property getter: - (int)enabledGestures;	// 0x32e77bb5
- (void)encodeWithCoder:(id)coder;	// 0x32e348dd
- (BOOL)endEditing:(BOOL)editing;	// 0x32d48ef1
- (void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;	// 0x32db35cd
- (CGRect)extent;	// 0x32e35441
- (void)forceDisplayIfNeeded;	// 0x32e36815
// converted property getter: - (CGRect)frame;	// 0x32c7729d
// converted property getter: - (CGPoint)frameOrigin;	// 0x32d469c9
- (void)gestureChanged:(GSEventRef)changed;	// 0x32e78349
// converted property getter: - (id)gestureDelegate;	// 0x32e77b69
- (void)gestureEnded:(GSEventRef)ended;	// 0x32e78465
// converted property getter: - (id)gestureRecognizers;	// 0x32c7800d
- (void)gestureStarted:(GSEventRef)started;	// 0x32e7820d
// declared property getter: - (BOOL)gesturesEnabled;	// 0x32d762cd
- (CGRect)hitRect;	// 0x32de9b21
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32e36eb5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32c8dc85
- (void)insertSubview:(id)subview above:(id)above;	// 0x32cfb605
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x32ca16c5
- (void)insertSubview:(id)subview atIndex:(int)index;	// 0x32c94b99
- (void)insertSubview:(id)subview below:(id)below;	// 0x32d1353d
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x32c94bc1
- (BOOL)isAccessibilityElementByDefault;	// 0x32f01655
- (BOOL)isDescendantOfView:(id)view;	// 0x32c8fc21
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32f01659
// converted property getter: - (BOOL)isEnabled;	// 0x32d1667d
// converted property getter: - (BOOL)isExclusiveTouch;	// 0x32c8f331
// converted property getter: - (BOOL)isHidden;	// 0x32c8e201
- (BOOL)isHiddenOrHasHiddenAncestor;	// 0x32d53895
// declared property getter: - (BOOL)isInAnimatedVCTransition;	// 0x32cb82b9
// converted property getter: - (BOOL)isMultipleTouchEnabled;	// 0x32df19a9
// converted property getter: - (BOOL)isOpaque;	// 0x32c9475d
// declared property getter: - (BOOL)isUserInteractionEnabled;	// 0x32c8e1e9
// declared property getter: - (id)layer;	// 0x32c79d61
- (void)layoutBelowIfNeeded;	// 0x32c9aced
- (void)layoutIfNeeded;	// 0x32c79c75
- (void)layoutSublayersOfLayer:(id)layer;	// 0x32c79c95
- (void)layoutSubviews;	// 0x32c79d5d
- (void)movedFromSuperview:(id)superview;	// 0x32c79161
- (void)movedFromWindow:(id)window;	// 0x32c79159
- (void)movedToSuperview:(id)superview;	// 0x32c79ae5
- (void)movedToWindow:(id)window;	// 0x32c79a4d
- (BOOL)needsDisplay;	// 0x32e366f1
// converted property getter: - (BOOL)needsDisplayOnBoundsChange;	// 0x32dcc8d9
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x32eaedc1
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x32e36759
- (id)nextResponder;	// 0x32c7a87d
// converted property getter: - (CGPoint)origin;	// 0x32d469a9
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32e37089
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32c8e225
// converted property getter: - (CGPoint)position;	// 0x32e360fd
- (id)recursiveDescription;	// 0x32e38655
- (void)recursivelyForceDisplayIfNeeded;	// 0x32e223dd
- (void)reduceWidth:(float)width;	// 0x32e1b639
- (void)removeAllGestureRecognizers;	// 0x32c9fcd1
- (void)removeFromSuperview;	// 0x32c77a99
- (void)removeGestureRecognizer:(id)recognizer;	// 0x32cbda49
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x32fe4aa9
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x32c98309
- (void)resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x32cb7bc1
- (void)rotateToDegrees:(float)degrees;	// 0x32e77531
- (float)rotationDegrees;	// 0x32e77f31
- (id)scriptingInfoWithChildren;	// 0x32dbe5e5
- (void)sendSubviewToBack:(id)back;	// 0x32ce309d
// converted property setter: - (void)setAlpha:(float)alpha;	// 0x32c77719
// converted property setter: - (void)setAutoresizesSubviews:(BOOL)subviews;	// 0x32cfb371
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x32c9c131
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x32cbe789
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x32cb1911
// converted property setter: - (void)setCenter:(CGPoint)center;	// 0x32c962e1
// converted property setter: - (void)setCharge:(float)charge;	// 0x32cb42c9
- (void)setClearsContext:(BOOL)context;	// 0x32e36739
// converted property setter: - (void)setClearsContextBeforeDrawing:(BOOL)drawing;	// 0x32de3511
- (void)setClipsSubviews:(BOOL)subviews;	// 0x32cc10a5
// converted property setter: - (void)setClipsToBounds:(BOOL)bounds;	// 0x32c8aaf9
// converted property setter: - (void)setContentMode:(int)mode;	// 0x32c9bf41
// converted property setter: - (void)setContentScaleFactor:(float)factor;	// 0x32c94771
// converted property setter: - (void)setContentStretch:(CGRect)stretch;	// 0x32cabd7d
- (void)setContentsPosition:(int)position;	// 0x32cc0efd
// declared property setter: - (void)setDeliversTouchesForGesturesToSuperview:(BOOL)superview;	// 0x32d13bed
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32d02d8d
// converted property setter: - (void)setEnabledGestures:(int)gestures;	// 0x32e77b8d
// converted property setter: - (void)setExclusiveTouch:(BOOL)touch;	// 0x32d13c09
- (void)setFixedBackgroundPattern:(BOOL)pattern;	// 0x32d4911d
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x32c77595
- (void)setFrame:(CGRect)frame forFields:(int)fields;	// 0x32e35989
// converted property setter: - (void)setFrameOrigin:(CGPoint)origin;	// 0x32c77241
// converted property setter: - (void)setGestureDelegate:(id)delegate;	// 0x32d17ad5
// converted property setter: - (void)setGestureRecognizers:(id)recognizers;	// 0x32e37ca1
// declared property setter: - (void)setGesturesEnabled:(BOOL)enabled;	// 0x32c907ed
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x32c9609d
// declared property setter: - (void)setInAnimatedVCTransition:(BOOL)animatedVCTransition;	// 0x32e370d5
// converted property setter: - (void)setMultipleTouchEnabled:(BOOL)enabled;	// 0x32cbc865
- (void)setNeedsDisplay;	// 0x32c7a189
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x32c91ad9
// converted property setter: - (void)setNeedsDisplayOnBoundsChange:(BOOL)change;	// 0x32cb5b05
- (void)setNeedsLayout;	// 0x32c79c55
// converted property setter: - (void)setOpaque:(BOOL)opaque;	// 0x32c94a45
// converted property setter: - (void)setOrigin:(CGPoint)origin;	// 0x32c77231
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x32dbe069
- (void)setRotationBy:(float)by;	// 0x32e35a15
- (void)setRotationDegrees:(float)degrees duration:(double)duration;	// 0x32e77eb1
// converted property setter: - (void)setSize:(CGSize)size;	// 0x32d048fd
// declared property setter: - (void)setSkipsSubviewEnumeration:(BOOL)enumeration;	// 0x32e37995
// declared property setter: - (void)setTag:(int)tag;	// 0x32d12da9
// converted property setter: - (void)setTapDelegate:(id)delegate;	// 0x32e34d59
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x32c99291
// declared property setter: - (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x32c77739
- (void)setValue:(id)value forGestureAttribute:(int)gestureAttribute;	// 0x32e77bd9
- (void)setValue:(id)value forKey:(id)key;	// 0x32e37d91
// declared property setter: - (void)setViewTraversalMark:(BOOL)mark;	// 0x32c77cf5
// converted property getter: - (CGSize)size;	// 0x32c79aed
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32d41e5d
- (void)sizeToFit;	// 0x32ca371d
// declared property getter: - (BOOL)skipsSubviewEnumeration;	// 0x32e3797d
- (void)startHeartbeat:(SEL)heartbeat inRunLoopMode:(id)runLoopMode;	// 0x32de49dd
- (int)stateForGestureType:(int)gestureType;	// 0x32e78121
- (void)stopHeartbeat:(SEL)heartbeat;	// 0x32deb751
- (id)subviews;	// 0x32c8e24d
- (id)superview;	// 0x32c771b9
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x32e35311
// declared property getter: - (int)tag;	// 0x32d22205
// converted property getter: - (id)tapDelegate;	// 0x32e34df1
- (int)textEffectsVisibilityLevel;	// 0x32efd9a5
- (int)textEffectsVisibilityLevelWhenKey;	// 0x32efd9ad
- (id)textInputView;	// 0x32d6def1
// converted property getter: - (CGAffineTransform)transform;	// 0x32ca3825
- (BOOL)useBlockyMagnificationInClassic;	// 0x32e39419
- (id)valueForGestureAttribute:(int)gestureAttribute;	// 0x32e77d3d
- (void)viewDidMoveToSuperview;	// 0x32e365e5
- (id)viewPrintFormatter;	// 0x32fcc7a1
// declared property getter: - (BOOL)viewTraversalMark;	// 0x32c79f95
- (void)viewWillMoveToSuperview:(id)view;	// 0x32e365e1
- (id)viewWithTag:(int)tag;	// 0x32c7a04d
- (CGRect)visibleBounds;	// 0x32cd5651
- (void)willMoveToSuperview:(id)superview;	// 0x32c77cf1
- (void)willMoveToWindow:(id)window;	// 0x32c78631
- (void)willRemoveSubview:(id)subview;	// 0x32c77ced
- (id)window;	// 0x32c77b71
- (void)zoomToScale:(float)scale;	// 0x32e7636d
@end
