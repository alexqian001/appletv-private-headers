/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIScrollsToTopInitiatorView.h"
#import "UIStatusBarServerClient.h"
#import "UIStatusBarStateObserver.h"

@class NSNumber, UIStatusBarForegroundView, UIColor, UIStatusBarServer, UIStatusBarWindow, UIStatusBarStyleAttributes, UIStatusBarStyleAnimationParameters, NSMutableArray, UIStatusBarBackgroundView, NSString, UILabel, UIStatusBarStyleRequest;
@protocol UIStatusBarStateProvider, UIStatusBarStyleDelegate;

@interface UIStatusBar : _UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver> {
	UIStatusBarWindow *_statusBarWindow;	// 56 = 0x38
	UIStatusBarServer *_statusBarServer;	// 60 = 0x3c
	id<UIStatusBarStateProvider> _inProcessProvider;	// 64 = 0x40
	BOOL _showsForeground;	// 68 = 0x44
	UIStatusBarBackgroundView *_backgroundView;	// 72 = 0x48
	UIStatusBarForegroundView *_foregroundView;	// 76 = 0x4c
	UILabel *_doubleHeightLabel;	// 80 = 0x50
	NSString *_currentDoubleHeightText;	// 84 = 0x54
	XXStruct_2dob7A _currentRawData;	// 88 = 0x58
	NSMutableArray *_interruptedAnimationCompositeViews;	// 2056 = 0x808
	UIStatusBarBackgroundView *_newStyleBackgroundView;	// 2060 = 0x80c
	UIStatusBarForegroundView *_newStyleForegroundView;	// 2064 = 0x810
	UIStatusBar *_slidingStatusBar;	// 2068 = 0x814
	int _requestedStyle;	// 2072 = 0x818
	int _styleOverrides;	// 2076 = 0x81c
	UIStatusBarStyleAttributes *_styleAttributes;	// 2080 = 0x820
	int _orientation;	// 2084 = 0x824
	BOOL _hidden;	// 2088 = 0x828
	BOOL _suppressesHiddenSideEffects;	// 2089 = 0x829
	BOOL _foreground;	// 2090 = 0x82a
	BOOL _registered;	// 2091 = 0x82b
	BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;	// 2092 = 0x82c
	BOOL _suppressGlow;	// 2093 = 0x82d
	float _translucentBackgroundAlpha;	// 2096 = 0x830
	BOOL _showOnlyCenterItems;	// 2100 = 0x834
	XXStruct_qoTvnA *_localDataOverrides;	// 2104 = 0x838
	UIColor *_tintColor;	// 2108 = 0x83c
	UIColor *_lastUsedBackgroundColor;	// 2112 = 0x840
	UIStatusBarStyleAnimationParameters *_nextTintTransition;	// 2116 = 0x844
	NSNumber *_overrideHeight;	// 2120 = 0x848
	BOOL _persistentAnimationsEnabled;	// 2124 = 0x84c
	BOOL _homeItemsDisabled;	// 2125 = 0x84d
	BOOL _simulatesLegacyAppearance;	// 2126 = 0x84e
	id<UIStatusBarStyleDelegate> _styleDelegate;	// 2128 = 0x850
	UIColor *_foregroundColor;	// 2132 = 0x854
	int _legibilityStyle;	// 2136 = 0x858
}
@property(retain, nonatomic) UIColor *foregroundColor;	// G=0x2f78c3b5; S=0x2f78be11; @synthesize=_foregroundColor
@property(assign, getter=isHidden) BOOL hidden;	// G=0x2f3ef511; S=0x2f78b2e5; converted property
@property(assign, nonatomic) BOOL homeItemsDisabled;	// G=0x2f78c385; S=0x2f78c395; @synthesize=_homeItemsDisabled
@property(assign, nonatomic) int legibilityStyle;	// G=0x2f78c3c5; S=0x2f78bee9; @synthesize=_legibilityStyle
@property(assign, nonatomic) BOOL persistentAnimationsEnabled;	// G=0x2f78c375; S=0x2f78bd79; @synthesize=_persistentAnimationsEnabled
@property(assign, nonatomic) BOOL simulatesLegacyAppearance;	// G=0x2f78c3a5; S=0x2f78bdd5; @synthesize=_simulatesLegacyAppearance
@property(assign, nonatomic) UIStatusBarWindow *statusBarWindow;	// G=0x2f78c355; S=0x2f431455; @synthesize=_statusBarWindow
@property(assign, nonatomic) id<UIStatusBarStyleDelegate> styleDelegate;	// G=0x2f78c365; S=0x2f43261d; @synthesize=_styleDelegate
@property(copy, nonatomic) UIStatusBarStyleRequest *styleRequest;	// G=0x2f78c019; S=0x2f78c049; 
+ (CGRect)_frameForStyle:(int)style orientation:(int)orientation inWindowOfSize:(CGSize)size;	// 0x2f49b841
+ (CGRect)_frameForStyleAttributes:(id)styleAttributes orientation:(int)orientation;	// 0x2f78a089
+ (CGRect)_frameForStyleAttributes:(id)styleAttributes orientation:(int)orientation inWindowOfSize:(CGSize)size;	// 0x2f789fd5
+ (id)_newStyleAttributesForRequest:(id)request;	// 0x2f78b369
+ (id)_styleAttributesForRequest:(id)request;	// 0x2f78b989
+ (id)_styleAttributesForStatusBarStyle:(int)statusBarStyle legacy:(BOOL)legacy;	// 0x2f78bae9
+ (int)cornerStyleForRequestedStyle:(int)requestedStyle effectiveStyle:(int)style alignment:(int)alignment;	// 0x2f3ee45d
+ (id)defaultBlueTintColor;	// 0x2f4460ad
+ (int)defaultStatusBarStyleWithTint:(BOOL)tint;	// 0x2f432681
+ (int)defaultStyleForRequestedStyle:(int)requestedStyle styleOverrides:(int)overrides;	// 0x2f3ee405
+ (void)getData:(XXStruct_2dob7A *)data forRequestedData:(const XXStruct_2dob7A *)requestedData withOverrides:(const XXStruct_qoTvnA *)overrides;	// 0x2f3e6c29
+ (float)heightForStyle:(int)style orientation:(int)orientation;	// 0x2f3ee529
+ (int)lowBatteryLevel;	// 0x2f3f2b85
+ (id)navBarTintColorFromStatusBarTintColor:(id)statusBarTintColor;	// 0x2f4460f9
+ (void)setSuppressUpdateAnimations:(BOOL)animations;	// 0x2f42d665
+ (void)setTintOverrideEnabled:(BOOL)enabled withColor:(id)color;	// 0x2f42d601
+ (id)statusBarTintColorForNavBarTintColor:(id)navBarTintColor;	// 0x2f430061
- (id)initWithFrame:(CGRect)frame;	// 0x2f42e7ad
- (id)initWithFrame:(CGRect)frame showForegroundView:(BOOL)view;	// 0x2f42e7dd
- (id)initWithFrame:(CGRect)frame showForegroundView:(BOOL)view inProcessStateProvider:(id)processStateProvider;	// 0x2f789b5d
- (void)_adjustDoubleHeightTextVisibility;	// 0x2f433cd5
- (CGRect)_backgroundFrameForAttributes:(id)attributes;	// 0x2f78addd
- (id)_backgroundView;	// 0x2f78c251
- (void)_clearOverrideHeight;	// 0x2f78c329
- (void)_crossfadeToNewBackgroundView;	// 0x2f433b99
- (void)_crossfadeToNewForegroundViewWithAlpha:(float)alpha;	// 0x2f433b2d
- (id)_currentComposedData;	// 0x2f3ec171
- (id)_currentComposedDataForStyle:(id)style;	// 0x2f3ec191
- (void)_didEnterBackground:(id)background;	// 0x2f45f989
- (void)_evaluateServerRegistration;	// 0x2f42ed35
- (void)_finishedSettingStyleWithOldHeight:(float)oldHeight newHeight:(float)height animation:(int)animation;	// 0x2f433e21
- (float)_hiddenAlphaForHideAnimationParameters:(id)hideAnimationParameters;	// 0x2f549c85
- (CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)hideAnimationParameters;	// 0x2f549b6d
- (BOOL)_isTransparent;	// 0x2f78c261
- (void)_itemViewPerformButtonAction:(id)action;	// 0x2f78bc3d
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)foreground;	// 0x2f78a9cd
- (id)_prepareToSetStyle:(id)setStyle animation:(int)animation;	// 0x2f432699
- (void)_requestStyleAttributes:(id)attributes animationParameters:(id)parameters;	// 0x2f78a501
- (void)_setDoubleHeightStatusString:(id)string;	// 0x2f432205
- (void)_setFrameForStyle:(id)style;	// 0x2f433c55
- (void)_setOverrideHeight:(float)height;	// 0x2f78c299
- (void)_setStyle:(id)style;	// 0x2f433a19
- (void)_setStyle:(id)style animation:(int)animation;	// 0x2f433911
- (void)_setVisualAltitude:(float)altitude;	// 0x2f78ad5d
- (void)_setVisualAltitudeBias:(CGSize)bias;	// 0x2f78ad9d
- (BOOL)_shouldSeekHigherPriorityTouchTarget;	// 0x2f56fd49
- (CGAffineTransform)_slideTransform;	// 0x2f78a975
- (id)_styleAttributesForRequest:(id)request;	// 0x2f78bb5d
- (void)_styleOverridesDidChange:(id)_styleOverrides;	// 0x2f78bec9
- (void)_swapToNewBackgroundView;	// 0x2f433f19
- (void)_swapToNewForegroundView;	// 0x2f433f71
- (BOOL)_touchShouldProduceReturnEvent;	// 0x2f56fda1
- (void)_updateBackgroundFrame;	// 0x2f78ae81
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)foregroundView;	// 0x2f78bd31
- (void)_willEnterForeground:(id)foreground;	// 0x2f55dac1
- (id)activeTintColor;	// 0x2f432631
- (void)crossfadeTime:(BOOL)time duration:(double)duration;	// 0x2f78bb79
- (id)currentDoubleHeightLabelText;	// 0x2f78a965
- (CGRect)currentFrame;	// 0x2f78a2c5
- (float)currentHeight;	// 0x2f435b49
- (int)currentStyle;	// 0x2f4605d1
- (id)currentStyleRequestForStyle:(int)style;	// 0x2f78bf5d
- (void)dealloc;	// 0x2f789e29
- (void)didMoveToSuperview;	// 0x2f431465
- (void)forceUpdateData:(BOOL)data;	// 0x2f431521
- (void)forceUpdateDoubleHeightStatus;	// 0x2f431fdd
- (void)forceUpdateGlowAnimation;	// 0x2f432495
- (void)forceUpdateStyleOverrides:(BOOL)overrides;	// 0x2f4315d9
- (void)forceUpdateToData:(const XXStruct_2dob7A *)data animated:(BOOL)animated;	// 0x2f431575
// declared property getter: - (id)foregroundColor;	// 0x2f78c3b5
- (void)forgetEitherSideHistory;	// 0x2f4325fd
- (CGRect)frameForOrientation:(int)orientation;	// 0x2f78a2f9
- (float)heightForOrientation:(int)orientation;	// 0x2f42f945
// declared property getter: - (BOOL)homeItemsDisabled;	// 0x2f78c385
- (BOOL)isDoubleHeight;	// 0x2f78a379
// converted property getter: - (BOOL)isHidden;	// 0x2f3ef511
- (BOOL)isTranslucent;	// 0x2f78a3b9
- (void)layoutSubviews;	// 0x2f456005
// declared property getter: - (int)legibilityStyle;	// 0x2f78c3c5
- (void)noteStyleOverridesChangedLocally;	// 0x2f78a101
// declared property getter: - (BOOL)persistentAnimationsEnabled;	// 0x2f78c375
- (void)requestStyle:(int)style;	// 0x2f78a3f9
- (void)requestStyle:(int)style animated:(BOOL)animated;	// 0x2f3ee115
- (void)requestStyle:(int)style animation:(int)animation startTime:(double)time duration:(double)duration curve:(int)curve;	// 0x2f78a411
- (void)requestStyle:(int)style animationParameters:(id)parameters;	// 0x2f3ee225
- (void)setBackgroundAlpha:(float)alpha;	// 0x2f78a165
// declared property setter: - (void)setForegroundColor:(id)color;	// 0x2f78be11
- (void)setForegroundColor:(id)color animationParameters:(id)parameters;	// 0x2f78be25
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x2f78b2e5
- (void)setHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x2f78b279
- (void)setHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x2f449585
// declared property setter: - (void)setHomeItemsDisabled:(BOOL)disabled;	// 0x2f78c395
// declared property setter: - (void)setLegibilityStyle:(int)style;	// 0x2f78bee9
- (void)setLegibilityStyle:(int)style animationParameters:(id)parameters;	// 0x2f78befd
- (void)setLocalDataOverrides:(XXStruct_qoTvnA *)overrides;	// 0x2f78a275
- (void)setOrientation:(int)orientation;	// 0x2f43429d
// declared property setter: - (void)setPersistentAnimationsEnabled:(BOOL)enabled;	// 0x2f78bd79
- (void)setShowsOnlyCenterItems:(BOOL)items;	// 0x2f78a225
// declared property setter: - (void)setSimulatesLegacyAppearance:(BOOL)appearance;	// 0x2f78bdd5
// declared property setter: - (void)setStatusBarWindow:(id)window;	// 0x2f431455
// declared property setter: - (void)setStyleDelegate:(id)delegate;	// 0x2f43261d
// declared property setter: - (void)setStyleRequest:(id)request;	// 0x2f78c049
- (void)setStyleRequest:(id)request animationParameters:(id)parameters;	// 0x2f78c05d
- (void)setSuppressesGlow:(BOOL)glow;	// 0x2f78a115
- (void)setSuppressesHiddenSideEffects:(BOOL)effects;	// 0x2f78b2f9
- (void)setTintColor:(id)color;	// 0x2f78b0f1
- (void)setTintColor:(id)color withDuration:(double)duration;	// 0x2f430145
// declared property getter: - (BOOL)simulatesLegacyAppearance;	// 0x2f78c3a5
- (void)statusBarServer:(id)server didReceiveDoubleHeightStatusString:(id)string forStyle:(int)style;	// 0x2f509319
- (void)statusBarServer:(id)server didReceiveGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x2f78c141
- (void)statusBarServer:(id)server didReceiveStatusBarData:(const XXStruct_2dob7A *)data withActions:(int)actions;	// 0x2f3ec099
- (void)statusBarServer:(id)server didReceiveStyleOverrides:(int)overrides;	// 0x2f3ee0b5
- (void)statusBarStateProvider:(id)provider didPostStatusBarData:(const XXStruct_2dob7A *)data withActions:(int)actions;	// 0x2f78c18d
// declared property getter: - (id)statusBarWindow;	// 0x2f78c355
// declared property getter: - (id)styleDelegate;	// 0x2f78c365
- (int)styleForRequestedStyle:(int)requestedStyle;	// 0x2f3ee341
// declared property getter: - (id)styleRequest;	// 0x2f78c019
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f5739e9
@end
