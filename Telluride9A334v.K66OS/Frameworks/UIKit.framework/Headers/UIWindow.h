/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class CALayer, NSMutableArray, UIResponder, NSUndoManager, UIViewController, UIScreen, UIColor, NSMutableSet;

@interface UIWindow : UIView {
@private
	id _delegate;	// 48 = 0x30
	float _windowLevel;	// 52 = 0x34
	float _windowSublevel;	// 56 = 0x38
	id _layerContext;	// 60 = 0x3c
	UIView *_lastMouseDownView;	// 64 = 0x40
	UIView *_lastMouseEnteredView;	// 68 = 0x44
	UIResponder *_firstResponder;	// 72 = 0x48
	id _fingerInfo;	// 76 = 0x4c
	id _touchData;	// 80 = 0x50
	int _viewOrientation;	// 84 = 0x54
	UIView *_exclusiveTouchView;	// 88 = 0x58
	NSUndoManager *_undoManager;	// 92 = 0x5c
	UIScreen *_screen;	// 96 = 0x60
	CALayer *_transformLayer;	// 100 = 0x64
	NSMutableArray *_rotationViewControllers;	// 104 = 0x68
	UIViewController *_rootViewController;	// 108 = 0x6c
	UIColor *_savedBackgroundColor;	// 112 = 0x70
	NSMutableSet *_subtreeMonitoringViews;	// 116 = 0x74
	struct {
		unsigned delegateWillRotate : 1;
		unsigned delegateDidRotate : 1;
		unsigned delegateWillAnimateFirstHalf : 1;
		unsigned delegateDidAnimationFirstHalf : 1;
		unsigned delegateWillAnimateSecondHalf : 1;
		unsigned autorotatesToPortrait : 1;
		unsigned autorotatesToPortraitUpsideDown : 1;
		unsigned autorotatesToLandscapeLeft : 1;
		unsigned autorotatesToLandscapeRight : 1;
		unsigned dontBecomeKeyOnOrderFront : 1;
		unsigned output : 1;
		unsigned inGesture : 1;
		unsigned cancelScroller : 1;
		unsigned bitsPerComponent : 4;
		unsigned autorotates : 1;
		unsigned isRotating : 1;
		unsigned isUsingOnePartRotationAnimation : 1;
		unsigned isHandlingContentRotation : 1;
		unsigned disableAutorotationCount : 4;
		unsigned needsAutorotationWhenReenabled : 1;
		unsigned forceTwoPartRotationAnimation : 1;
		unsigned orderKeyboardInAfterRotating : 1;
		unsigned roundedCorners : 4;
		unsigned resizesToFullScreen : 1;
		unsigned keepContextInBackground : 1;
		unsigned ignoreSetHidden : 1;
		unsigned forceVisibleOnInit : 1;
		unsigned settingFirstResponder : 1;
	} _windowFlags;	// 120 = 0x78
	id _windowController;	// 128 = 0x80
}
@property(assign) BOOL autorotates;	// G=0x301e70e5; S=0x301e6c35; converted property
@property(retain) id contentView;	// G=0x301e7679; S=0x300cbca9; converted property
@property(assign) id delegate;	// G=0x3006dbc9; S=0x3005521d; converted property
@property(readonly, retain) UIResponder *firstResponder;	// G=0x3002e911; converted property
@property(assign) BOOL keepContextInBackground;	// G=0x3009e249; S=0x301e7bd1; converted property
@property(readonly, assign, nonatomic, getter=isKeyWindow) BOOL keyWindow;	// G=0x3002eca5; 
@property(assign) float level;	// G=0x3004e635; S=0x301a56e9; converted property
@property(assign) BOOL resizesToFullScreen;	// G=0x301e7b99; S=0x301e7bb1; converted property
@property(retain, nonatomic) UIViewController *rootViewController;	// G=0x30054ebd; S=0x301e5b29; @synthesize=_rootViewController
@property(retain, nonatomic) UIScreen *screen;	// G=0x3002da95; S=0x301e7421; 
@property(readonly, retain) NSUndoManager *undoManager;	// G=0x301e76c5; converted property
@property(assign, nonatomic) float windowLevel;	// G=0x30042611; S=0x30054f15; 
+ (void)_clearKeyWindowStack;	// 0x301e765d
+ (id)_findWithDisplayPoint:(CGPoint)displayPoint;	// 0x30107ab1
+ (id)_hitTestToPoint:(CGPoint)point pathIndex:(int)index forEvent:(id)event;	// 0x30041995
+ (unsigned)_keyWindowStackSize;	// 0x300b7b05
+ (void)_noteStatusBarHeightChanged:(float)changed oldHeight:(float)height;	// 0x301e7789
+ (void)_popKeyWindow;	// 0x3010aecd
+ (void)_prepareWindowsForAppResume;	// 0x301063a5
+ (void)_prepareWindowsForAppSuspend;	// 0x3009e1a9
+ (void)_pushKeyWindow:(id)window;	// 0x30146135
+ (void)_setKeyWindowStackEnabled:(BOOL)enabled;	// 0x30110791
+ (void)_synchronizeDrawing;	// 0x300aa1f1
+ (unsigned)_synchronizeDrawingAcrossProcesses;	// 0x301ad00d
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)port;	// 0x301e70f9
+ (id)allWindowsIncludingInternalWindows:(BOOL)windows onlyVisibleWindows:(BOOL)windows2;	// 0x3004e511
+ (CGRect)constrainFrameToScreen:(CGRect)screen;	// 0x30062b9d
+ (void *)createIOSurfaceWithContextId:(unsigned)contextId frame:(CGRect)frame;	// 0x301e781d
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame;	// 0x301e785d
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame outTransform:(CGAffineTransform *)transform;	// 0x301d6535
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame usePurpleGfx:(BOOL)gfx outTransform:(CGAffineTransform *)transform;	// 0x301d6575
+ (void *)createScreenIOSurface;	// 0x301e79bd
+ (id)keyWindow;	// 0x30042599
+ (Class)layerClass;	// 0x3005d2ed
+ (void)setAllWindowsKeepContextInBackground:(BOOL)background;	// 0x301e59d1
- (id)initWithCoder:(id)coder;	// 0x301e55b9
- (id)initWithContentRect:(CGRect)contentRect;	// 0x30062b25
- (id)initWithFrame:(CGRect)frame;	// 0x3005d1f9
- (void)_addRotationViewController:(id)controller;	// 0x301e6b09
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x301e76c1
- (void)_beginModalSession;	// 0x301e6009
- (BOOL)_clearMouseView;	// 0x3004e645
- (void)_clearPendingKeyboardChanges;	// 0x301e6b8d
- (id)_clientsForRotation;	// 0x3006e159
- (void)_commonInit;	// 0x3005d31d
- (BOOL)_containedInAbsoluteResponderChain;	// 0x301e61b5
- (unsigned)_contextId;	// 0x30062099
- (CGPoint)_convertOffset:(CGPoint)offset fromWindow:(id)window;	// 0x301e5f65
- (CGPoint)_convertOffset:(CGPoint)offset toWindow:(id)window;	// 0x301e5ec1
- (void)_createContext;	// 0x3005d8ed
- (int)_degreesToRotateFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x301a8bbd
- (void)_destroyContext;	// 0x3009e279
- (BOOL)_disableEdgeAntialiasing;	// 0x3005ded5
- (BOOL)_disableGroupOpacity;	// 0x30062d95
- (BOOL)_disableViewScaling;	// 0x301e5aa5
- (void)_endModalSession;	// 0x301e60dd
- (id)_exclusiveTouchView;	// 0x30043a51
- (void)_finishedFirstHalfRotation:(id)rotation finished:(id)finished context:(id)context;	// 0x301e6db5
- (void)_finishedFullRotation:(id)rotation finished:(id)finished context:(id)context;	// 0x301ad011
- (id)_firstResponder;	// 0x3002c621
- (void)_forceTwoPartRotationAnimation:(BOOL)animation;	// 0x301e6c6d
- (void)_handleDeviceOrientationChange:(id)change;	// 0x3006eaad
- (void)_handleStatusBarOrientationChange:(id)change;	// 0x3019d795
- (BOOL)_hasContext;	// 0x300aa215
- (BOOL)_ignoresHitTest;	// 0x30041af9
- (BOOL)_isAnyWindowRotating;	// 0x3019d7e5
- (BOOL)_isClassicControllerWindow;	// 0x301e5851
- (BOOL)_isScrollingEnabledForView:(id)view;	// 0x301ca7e9
- (BOOL)_isSettingFirstResponder;	// 0x3002e8d1
- (BOOL)_isStatusBarWindow;	// 0x301e7785
- (BOOL)_isTextEffectsWindow;	// 0x302b1781
- (BOOL)_isWindowServerHostingManaged;	// 0x30054b25
- (void)_matchDeviceBounds;	// 0x302b1785
- (void)_orderFrontWithoutMakingKey;	// 0x30061f5d
- (void)_positionHeaderView:(id)view andFooterView:(id)view2 outsideContentViewForInterfaceOrientation:(int)interfaceOrientation;	// 0x301e6485
- (void)_registerChargedView:(id)view;	// 0x3008914d
- (void)_registerScrollToTopView:(id)topView;	// 0x30087a71
- (void)_registerSwipeView:(id)view;	// 0x300879e5
- (void)_registerViewForSubtreeMonitoring:(id)subtreeMonitoring;	// 0x3015441d
- (void)_removeRotationViewController:(id)controller;	// 0x301e6b6d
- (id)_rotationViewControllers;	// 0x3006de05
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(CGPoint)topViewsUnderScreenPointIfNecessary;	// 0x301ca201
- (void)_sendGesturesForEvent:(id)event;	// 0x30043f09
- (void)_sendTouchesForEvent:(id)event;	// 0x300443d1
- (void)_setCancelScroller:(BOOL)scroller;	// 0x301e7b81
- (void)_setExclusiveTouchView:(id)view;	// 0x30138335
- (void)_setFirstResponder:(id)responder;	// 0x3002ea71
- (void)_setHidden:(BOOL)hidden forced:(BOOL)forced;	// 0x30054821
- (void)_setIsSettingFirstResponder:(BOOL)responder;	// 0x3002e9a1
- (void)_setLayerHidden:(BOOL)hidden;	// 0x300549e9
- (void)_setMouseDownView:(id)view withEvent:(GSEventRef)event;	// 0x300555d1
- (void)_setMouseEnteredView:(id)view;	// 0x3004e799
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation duration:(double)duration force:(BOOL)force;	// 0x301e6d81
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation updateStatusBar:(BOOL)bar duration:(double)duration force:(BOOL)force;	// 0x3019f51d
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation updateStatusBar:(BOOL)bar duration:(double)duration force:(BOOL)force isRotating:(BOOL)rotating;	// 0x3010da69
- (void)_setRotatableViewOrientation:(int)orientation duration:(double)duration;	// 0x301e6c49
- (void)_setRotatableViewOrientation:(int)orientation duration:(double)duration force:(BOOL)force;	// 0x3019f495
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3006e035
- (void)_slideFooterFromOrientation:(int)orientation toOrientation:(int)orientation2 startSnapshot:(id)snapshot endSnapshot:(id)snapshot4 duration:(double)duration;	// 0x301e66c5
- (void)_slideHeaderView:(id)view andFooterView:(id)view2 offScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;	// 0x301e6289
- (id)_subtreeMonitorsForView:(id)view;	// 0x3002bc8d
- (void)_tagAsSpringboardPresentationWindow;	// 0x301e5839
- (id)_targetForStolenStatusBarTouchesAtPoint:(CGPoint)point withEvent:(id)event excludingWindow:(id)window;	// 0x301c3825
- (id)_touchData;	// 0x30043251
- (CGPoint)_transformDisplayToWindowCoordinates:(CGPoint)windowCoordinates;	// 0x301082a5
- (void)_unregisterChargedView:(id)view;	// 0x300cac05
- (void)_unregisterScrollToTopView:(id)topView;	// 0x30053771
- (void)_unregisterSwipeView:(id)view;	// 0x300522b9
- (void)_unregisterViewForSubtreeMonitoring:(id)subtreeMonitoring;	// 0x30156095
- (void)_updateInterfaceOrientationFromDeviceOrientation;	// 0x300556e5
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)deviceOrientation;	// 0x300556f9
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)deviceOrientationIfRotationEnabled;	// 0x3006eb1d
- (void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x301e6d51
- (void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration fenceID:(int)anId animation:(int)animation;	// 0x301e6c85
- (void)_updateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;	// 0x301e6bd1
- (void)_updateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration force:(BOOL)force;	// 0x3006e489
- (void)_updateTransformLayer;	// 0x3005d451
- (void)_updateTransformLayerForClassicPresentation;	// 0x301e5855
- (id)_window;	// 0x302196b9
- (void)addRootViewControllerViewIfPossible;	// 0x30061f71
// converted property getter: - (BOOL)autorotates;	// 0x301e70e5
- (void)awakeFromNib;	// 0x301e57a1
- (void)becomeKeyWindow;	// 0x30054cdd
- (void)beginDisablingInterfaceAutorotation;	// 0x3008798d
- (int)bitsPerComponent;	// 0x301e740d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x30107775
// converted property getter: - (id)contentView;	// 0x301e7679
- (CGPoint)convertDeviceToWindow:(CGPoint)window;	// 0x301e6221
- (CGPoint)convertPoint:(CGPoint)point fromWindow:(id)window;	// 0x30042d39
- (CGPoint)convertPoint:(CGPoint)point toWindow:(id)window;	// 0x300471fd
- (CGRect)convertRect:(CGRect)rect fromWindow:(id)window;	// 0x300ad391
- (CGRect)convertRect:(CGRect)rect toWindow:(id)window;	// 0x3006d35d
- (CGPoint)convertWindowToDevice:(CGPoint)device;	// 0x301e61b9
- (void *)createIOSurface;	// 0x301e7b21
- (void *)createIOSurfaceWithFrame:(CGRect)frame;	// 0x301e7ac9
- (void)dealloc;	// 0x30054fdd
- (id)defaultFirstResponder;	// 0x30054e79
// converted property getter: - (id)delegate;	// 0x3006dbc9
- (void)encodeWithCoder:(id)coder;	// 0x301e5711
- (void)endDisablingInterfaceAutorotation;	// 0x300887bd
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)animated;	// 0x300887d1
// converted property getter: - (id)firstResponder;	// 0x3002e911
- (void)handleStatusBarChangeFromHeight:(float)height toHeight:(float)height2;	// 0x301e71e1
- (int)interfaceOrientation;	// 0x30037489
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x302b5661
- (BOOL)isInterfaceAutorotationDisabled;	// 0x3006eb69
- (BOOL)isInternalWindow;	// 0x3009d825
// declared property getter: - (BOOL)isKeyWindow;	// 0x3002eca5
- (BOOL)isRotating;	// 0x3006d0ed
- (BOOL)isUsingOnePartRotationAnimation;	// 0x301097e9
// converted property getter: - (BOOL)keepContextInBackground;	// 0x3009e249
// converted property getter: - (float)level;	// 0x3004e635
- (void)makeKey:(id)key;	// 0x30054b4d
- (void)makeKeyAndOrderFront:(id)front;	// 0x300fbeb9
- (void)makeKeyAndVisible;	// 0x300c6529
- (void)makeKeyWindow;	// 0x30054b5d
- (void)matchDeviceOrientation;	// 0x3019d85d
- (id)nextResponder;	// 0x3002f275
- (void)orderFront:(id)front;	// 0x3006e621
- (void)orderOut:(id)anOut;	// 0x300547f9
- (void)redo:(id)redo;	// 0x301e774d
- (void)removeFromSuperview;	// 0x301e7c25
- (id)representation;	// 0x30172505
- (void)resignKeyWindow;	// 0x301461e9
// converted property getter: - (BOOL)resizesToFullScreen;	// 0x301e7b99
// declared property getter: - (id)rootViewController;	// 0x30054ebd
// declared property getter: - (id)screen;	// 0x3002da95
- (void)sendEvent:(id)event;	// 0x30043d85
// converted property setter: - (void)setAutorotates:(BOOL)autorotates;	// 0x301e6c35
- (void)setAutorotates:(BOOL)autorotates forceUpdateInterfaceOrientation:(BOOL)orientation;	// 0x30055301
- (void)setBecomeKeyOnOrderFront:(BOOL)front;	// 0x300ab9c9
// converted property setter: - (void)setContentView:(id)view;	// 0x300cbca9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3005521d
- (void)setHidden:(BOOL)hidden;	// 0x3005480d
// converted property setter: - (void)setKeepContextInBackground:(BOOL)background;	// 0x301e7bd1
// converted property setter: - (void)setLevel:(float)level;	// 0x301a56e9
// converted property setter: - (void)setResizesToFullScreen:(BOOL)fullScreen;	// 0x301e7bb1
// declared property setter: - (void)setRootViewController:(id)controller;	// 0x301e5b29
// declared property setter: - (void)setScreen:(id)screen;	// 0x301e7421
// declared property setter: - (void)setWindowLevel:(float)level;	// 0x30054f15
- (void)synchronizeDrawingWithID:(int)anId;	// 0x301097fd
- (void)synchronizeDrawingWithID:(int)anId count:(unsigned)count;	// 0x301e71c1
- (void)undo:(id)undo;	// 0x301e7715
// converted property getter: - (id)undoManager;	// 0x301e76c5
- (void)updateForOrientation:(int)orientation;	// 0x300abaf5
- (CGPoint)warpPoint:(CGPoint)point;	// 0x3004277d
// declared property getter: - (float)windowLevel;	// 0x30042611
- (int)windowOutput;	// 0x30054f91
@end
