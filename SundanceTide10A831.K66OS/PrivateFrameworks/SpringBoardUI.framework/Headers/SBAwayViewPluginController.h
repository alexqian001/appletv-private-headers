/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library

@class UIView;

@interface SBAwayViewPluginController : NSObject {
	UIView *_view;	// 4 = 0x4
	BOOL _viewCanBeDisplayed;	// 8 = 0x8
	BOOL _fullscreen;	// 9 = 0x9
	BOOL _alwaysFullscreen;	// 10 = 0xa
	int _orientation;	// 12 = 0xc
	id _disableTransitionBlock;	// 16 = 0x10
}
@property(readonly, assign, nonatomic, getter=isAlwaysFullscreen) BOOL alwaysFullscreen;	// G=0x3779b0e9; 
@property(readonly, assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x3779b35d; @synthesize=_fullscreen
@property(assign, nonatomic) int orientation;	// G=0x3779b36d; S=0x3779b37d; @synthesize=_orientation
@property(retain, nonatomic) UIView *view;	// G=0x3779ac99; S=0x3779accd; 
@property(assign, nonatomic) BOOL viewCanBeDisplayed;	// G=0x3779b34d; S=0x3779ad59; @synthesize=_viewCanBeDisplayed
+ (id)_serializedDataForContext:(id)context;	// 0x3779b1ad
+ (void)disableBundleNamed:(id)named;	// 0x3779b339
+ (void)disableBundleNamed:(id)named deactivationContext:(id)context;	// 0x3779b2a5
+ (void)enableBundleNamed:(id)named;	// 0x3779b291
+ (void)enableBundleNamed:(id)named activationContext:(id)context;	// 0x3779b1fd
- (id)init;	// 0x3779abd1
- (id)_disableTransitionBlock;	// 0x3779ae91
- (void)_setDisableTransitionBlock:(id)block;	// 0x3779ae41
- (BOOL)allowsLockScreenCamera;	// 0x3779b145
- (BOOL)allowsLockScreenMediaControls;	// 0x3779b149
- (BOOL)allowsPhotoSlideshow;	// 0x3779b14d
- (BOOL)allowsSiri;	// 0x3779b151
- (void)alwaysFullscreenValueHasChanged;	// 0x3779b0fd
- (BOOL)animateResumingToApplicationWithIdentifier:(id)identifier;	// 0x3779b111
- (id)bundleIDForUnlock;	// 0x3779b115
- (BOOL)canBeAlwaysFullscreen;	// 0x3779b0f9
- (BOOL)canScreenDim;	// 0x3779b141
- (id)customHeaderView;	// 0x3779b13d
- (void)dealloc;	// 0x3779ac4d
- (void)deviceLockViewDidHide;	// 0x3779b105
- (void)deviceLockViewWillShow;	// 0x3779b101
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x3779add5
- (void)disable;	// 0x3779add9
- (void)disableWithTransitionBlock:(id)transitionBlock;	// 0x3779aded
- (BOOL)disablesAwayItemsCompletely;	// 0x3779b11d
- (id)enableTransitionBlock;	// 0x3779aed1
- (BOOL)handleGesture:(int)gesture fingerCount:(unsigned)count;	// 0x3779b175
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;	// 0x3779b185
- (BOOL)handleLockButtonPressed;	// 0x3779b179
- (BOOL)handleMenuButtonDoubleTap;	// 0x3779b169
- (BOOL)handleMenuButtonHeld;	// 0x3779b171
- (BOOL)handleMenuButtonTap;	// 0x3779b165
- (BOOL)handleVolumeDownButtonPressed;	// 0x3779b181
- (BOOL)handleVolumeUpButtonPressed;	// 0x3779b17d
// declared property getter: - (BOOL)isAlwaysFullscreen;	// 0x3779b0e9
// declared property getter: - (BOOL)isFullscreen;	// 0x3779b35d
- (void)loadView;	// 0x3779ad11
// declared property getter: - (int)orientation;	// 0x3779b36d
- (int)pluginPriority;	// 0x3779b10d
- (void)purgeView;	// 0x3779ad15
- (BOOL)retainsPriorityWhileInactive;	// 0x3779b109
- (void)setActivationContext:(id)context;	// 0x3779adb5
- (void)setAlwaysFullscreen:(BOOL)fullscreen;	// 0x3779b099
- (void)setDeactivationContext:(id)context;	// 0x3779adb9
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x3779aed9
- (void)setFullscreen:(BOOL)fullscreen duration:(double)duration;	// 0x3779af21
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x3779b37d
// declared property setter: - (void)setView:(id)view;	// 0x3779accd
// declared property setter: - (void)setViewCanBeDisplayed:(BOOL)displayed;	// 0x3779ad59
- (BOOL)shouldAutoHideNotifications;	// 0x3779b06d
- (BOOL)shouldDisableOnRelock;	// 0x3779b061
- (BOOL)shouldDisableOnUnlock;	// 0x3779b065
- (BOOL)shouldShowLockStatusBarTime;	// 0x3779b069
- (BOOL)showAwayItems;	// 0x3779b119
- (BOOL)showDateView;	// 0x3779b121
- (BOOL)showHeaderView;	// 0x3779b125
- (BOOL)showsAboveHeader;	// 0x3779b191
- (BOOL)showsBeneathNotifications;	// 0x3779b1a9
- (BOOL)showsDuringCall;	// 0x3779b161
- (double)transitionDuration;	// 0x3779b089
// declared property getter: - (id)view;	// 0x3779ac99
// declared property getter: - (BOOL)viewCanBeDisplayed;	// 0x3779b34d
- (void)viewDidAppear:(BOOL)view;	// 0x3779adc1
- (void)viewDidDisappear:(BOOL)view;	// 0x3779adc9
- (double)viewFadeInDuration;	// 0x3779b071
- (BOOL)viewWantsFullscreenLayout;	// 0x3779b059
- (BOOL)viewWantsOverlayLayout;	// 0x3779b05d
- (void)viewWillAppear:(BOOL)view;	// 0x3779adbd
- (void)viewWillDisappear:(BOOL)view;	// 0x3779adc5
- (BOOL)wantsAutomaticFullscreenTimer;	// 0x3779b189
- (BOOL)wantsHardwareEventsWhenScreenDimmed;	// 0x3779b159
- (BOOL)wantsMenuButtonHeldEvent;	// 0x3779b16d
- (BOOL)wantsSwipeGestureRecognizer;	// 0x3779b18d
- (BOOL)wantsToOpenURLsWhilePasscodeLocked;	// 0x3779b155
- (BOOL)wantsUserWallpaper;	// 0x3779b15d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3779add1
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3779adcd
@end

