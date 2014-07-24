/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface UISearchDisplayControllerContainerView : UIView {
	BOOL _statusBarIsTransparent;	// 96 = 0x60
	BOOL _hostViewIsFullScreen;	// 97 = 0x61
	BOOL _collapsedTopView;	// 98 = 0x62
	UIView *_topView;	// 100 = 0x64
	UIView *_bottomView;	// 104 = 0x68
	UIView *_behindView;	// 108 = 0x6c
	NSLayoutConstraint *_topViewHeightConstraint;	// 112 = 0x70
	NSLayoutConstraint *_topViewAttributeTopConstraint;	// 116 = 0x74
	id _statusBarChangeObserver;	// 120 = 0x78
}
@property(readonly, assign, nonatomic) UIView *behindView;	// G=0x2f72a90d; @synthesize=_behindView
@property(readonly, assign, nonatomic) UIView *bottomView;	// G=0x2f72a8fd; @synthesize=_bottomView
@property(retain, nonatomic) id statusBarChangeObserver;	// G=0x2f72a95d; S=0x2f72a96d; @synthesize=_statusBarChangeObserver
@property(readonly, assign, nonatomic) UIView *topView;	// G=0x2f72a8ed; @synthesize=_topView
@property(retain, nonatomic) NSLayoutConstraint *topViewAttributeTopConstraint;	// G=0x2f72a93d; S=0x2f72a94d; @synthesize=_topViewAttributeTopConstraint
@property(retain, nonatomic) NSLayoutConstraint *topViewHeightConstraint;	// G=0x2f72a91d; S=0x2f72a92d; @synthesize=_topViewHeightConstraint
- (id)initWithFrame:(CGRect)frame topViewHeight:(float)height;	// 0x2f729c41
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x2f72a8a9
- (void)_monitorStatusBarHeightChanges:(BOOL)changes;	// 0x2f72a22d
// declared property getter: - (id)behindView;	// 0x2f72a90d
// declared property getter: - (id)bottomView;	// 0x2f72a8fd
- (void)collapseTopView;	// 0x2f72a1dd
- (void)configureInteractionForContainment:(BOOL)containment;	// 0x2f72a7cd
- (void)didMoveToSuperview;	// 0x2f72a669
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x2f72a871
- (void)setBottomViewUserInteractionEnabled:(BOOL)enabled;	// 0x2f72a20d
- (void)setFrame:(CGRect)frame;	// 0x2f72a765
// declared property setter: - (void)setStatusBarChangeObserver:(id)observer;	// 0x2f72a96d
// declared property setter: - (void)setTopViewAttributeTopConstraint:(id)constraint;	// 0x2f72a94d
// declared property setter: - (void)setTopViewHeightConstraint:(id)constraint;	// 0x2f72a92d
// declared property getter: - (id)statusBarChangeObserver;	// 0x2f72a95d
// declared property getter: - (id)topView;	// 0x2f72a8ed
// declared property getter: - (id)topViewAttributeTopConstraint;	// 0x2f72a93d
// declared property getter: - (id)topViewHeightConstraint;	// 0x2f72a91d
- (void)updateTopViewHeight:(float)height animate:(BOOL)animate;	// 0x2f72a091
@end
