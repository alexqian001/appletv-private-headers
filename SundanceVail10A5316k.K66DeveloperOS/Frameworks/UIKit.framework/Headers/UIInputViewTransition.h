/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIInputViewSet, UIInputViewAnimationStyle, UISnapshotView;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : NSObject {
@private
	UIInputViewSet *oldSet;	// 4 = 0x4
	UIInputViewSet *newSet;	// 8 = 0x8
	UIInputViewAnimationStyle *animationStyle;	// 12 = 0xc
	BOOL cancelled;	// 16 = 0x10
	int animationState;	// 20 = 0x14
	double animationStartTime;	// 24 = 0x18
	BOOL skipNotifications;	// 32 = 0x20
	BOOL skipFencing;	// 33 = 0x21
	CGRect beginFrame;	// 36 = 0x24
	CGRect endFrame;	// 52 = 0x34
	CGRect beginFrameScreen;	// 68 = 0x44
	CGRect endFrameScreen;	// 84 = 0x54
	CGRect beginFloatingFrame;	// 100 = 0x64
	CGRect endFloatingFrame;	// 116 = 0x74
	CGRect beginFloatingFrameScreen;	// 132 = 0x84
	CGRect endFloatingFrameScreen;	// 148 = 0x94
	UISnapshotView *snapshotView;	// 164 = 0xa4
	CGRect snapshotViewEndFrame;	// 168 = 0xa8
}
@property(assign, nonatomic) double animationStartTime;	// G=0x30396b55; S=0x301094bd; @synthesize
@property(assign, nonatomic) int animationState;	// G=0x30106435; S=0x3010580d; @synthesize
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle;	// G=0x30105935; S=0x30105875; @synthesize
@property(assign, nonatomic) CGRect beginFloatingFrame;	// G=0x30105d41; S=0x30396ba5; @synthesize
@property(assign, nonatomic) CGRect beginFloatingFrameScreen;	// G=0x30396be1; S=0x30105cdd; @synthesize
@property(assign, nonatomic) CGRect beginFrame;	// G=0x30105c51; S=0x30105885; @synthesize
@property(assign, nonatomic) CGRect beginFrameScreen;	// G=0x30105d19; S=0x30105c9d; @synthesize
@property(readonly, assign, nonatomic) int beginState;	// G=0x3039689d; 
@property(assign, nonatomic) BOOL cancelled;	// G=0x301094d5; S=0x301ec2b5; @synthesize
@property(readonly, assign, nonatomic) CGRect deprecatedBounds;	// G=0x30106e01; 
@property(readonly, assign, nonatomic) CGPoint deprecatedCenterBegin;	// G=0x30106d59; 
@property(readonly, assign, nonatomic) CGPoint deprecatedCenterEnd;	// G=0x30106ec9; 
@property(assign, nonatomic) CGRect endFloatingFrame;	// G=0x30105d91; S=0x30396bc5; @synthesize
@property(assign, nonatomic) CGRect endFloatingFrameScreen;	// G=0x30396c09; S=0x30105cfd; @synthesize
@property(assign, nonatomic) CGRect endFrame;	// G=0x30105c79; S=0x301058a5; @synthesize
@property(assign, nonatomic) CGRect endFrameScreen;	// G=0x30105d69; S=0x30105cbd; @synthesize
@property(readonly, assign, nonatomic) int endState;	// G=0x30106365; 
@property(retain) UIInputViewSet *newSet;	// G=0x301058fd; S=0x3010582d; converted property
@property(retain, nonatomic) UIInputViewSet *oldSet;	// G=0x301058c5; S=0x3010581d; @synthesize
@property(assign, nonatomic) BOOL skipFencing;	// G=0x30396b81; S=0x30396b91; @synthesize
@property(assign, nonatomic) BOOL skipNotifications;	// G=0x30106981; S=0x30396b71; @synthesize
@property(retain, nonatomic) UISnapshotView *snapshotView;	// G=0x30396c31; S=0x30396c41; @synthesize
@property(assign, nonatomic) CGRect snapshotViewEndFrame;	// G=0x30396c51; S=0x30396c75; @synthesize
@property(readonly, assign, nonatomic) int transitioningState;	// G=0x30106449; 
// declared property getter: - (double)animationStartTime;	// 0x30396b55
// declared property getter: - (int)animationState;	// 0x30106435
// declared property getter: - (id)animationStyle;	// 0x30105935
// declared property getter: - (CGRect)beginFloatingFrame;	// 0x30105d41
// declared property getter: - (CGRect)beginFloatingFrameScreen;	// 0x30396be1
// declared property getter: - (CGRect)beginFrame;	// 0x30105c51
// declared property getter: - (CGRect)beginFrameScreen;	// 0x30105d19
// declared property getter: - (int)beginState;	// 0x3039689d
// declared property getter: - (BOOL)cancelled;	// 0x301094d5
- (void)dealloc;	// 0x3010c975
// declared property getter: - (CGRect)deprecatedBounds;	// 0x30106e01
// declared property getter: - (CGPoint)deprecatedCenterBegin;	// 0x30106d59
// declared property getter: - (CGPoint)deprecatedCenterEnd;	// 0x30106ec9
- (id)description;	// 0x30396949
// declared property getter: - (CGRect)endFloatingFrame;	// 0x30105d91
// declared property getter: - (CGRect)endFloatingFrameScreen;	// 0x30396c09
// declared property getter: - (CGRect)endFrame;	// 0x30105c79
// declared property getter: - (CGRect)endFrameScreen;	// 0x30105d69
// declared property getter: - (int)endState;	// 0x30106365
- (BOOL)fadeAccessoryView;	// 0x30107065
- (BOOL)isAlmostDone;	// 0x301ec1f9
- (BOOL)isOnScreen;	// 0x3039690d
// converted property getter: - (id)newSet;	// 0x301058fd
// declared property getter: - (id)oldSet;	// 0x301058c5
- (void)postNotificationsForTransitionEnd;	// 0x30109ab9
- (void)postNotificationsForTransitionStart;	// 0x3010662d
- (BOOL)requiresAutomaticAppearanceEnabled;	// 0x301ef8cd
// declared property setter: - (void)setAnimationStartTime:(double)time;	// 0x301094bd
// declared property setter: - (void)setAnimationState:(int)state;	// 0x3010580d
// declared property setter: - (void)setAnimationStyle:(id)style;	// 0x30105875
// declared property setter: - (void)setBeginFloatingFrame:(CGRect)frame;	// 0x30396ba5
// declared property setter: - (void)setBeginFloatingFrameScreen:(CGRect)screen;	// 0x30105cdd
// declared property setter: - (void)setBeginFrame:(CGRect)frame;	// 0x30105885
// declared property setter: - (void)setBeginFrameScreen:(CGRect)screen;	// 0x30105c9d
// declared property setter: - (void)setCancelled:(BOOL)cancelled;	// 0x301ec2b5
// declared property setter: - (void)setEndFloatingFrame:(CGRect)frame;	// 0x30396bc5
// declared property setter: - (void)setEndFloatingFrameScreen:(CGRect)screen;	// 0x30105cfd
// declared property setter: - (void)setEndFrame:(CGRect)frame;	// 0x301058a5
// declared property setter: - (void)setEndFrameScreen:(CGRect)screen;	// 0x30105cbd
// converted property setter: - (void)setNewSet:(id)set;	// 0x3010582d
// declared property setter: - (void)setOldSet:(id)set;	// 0x3010581d
// declared property setter: - (void)setSkipFencing:(BOOL)fencing;	// 0x30396b91
// declared property setter: - (void)setSkipNotifications:(BOOL)notifications;	// 0x30396b71
// declared property setter: - (void)setSnapshotView:(id)view;	// 0x30396c41
// declared property setter: - (void)setSnapshotViewEndFrame:(CGRect)frame;	// 0x30396c75
- (BOOL)shouldCompleteOnSuspend;	// 0x30396909
// declared property getter: - (BOOL)skipFencing;	// 0x30396b81
// declared property getter: - (BOOL)skipNotifications;	// 0x30106981
// declared property getter: - (id)snapshotView;	// 0x30396c31
// declared property getter: - (CGRect)snapshotViewEndFrame;	// 0x30396c51
- (BOOL)subsumesTransition:(id)transition;	// 0x301d0c59
// declared property getter: - (int)transitioningState;	// 0x30106449
- (id)userInfoForTransition;	// 0x30106991
@end

