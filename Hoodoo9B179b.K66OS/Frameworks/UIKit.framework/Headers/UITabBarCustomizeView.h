/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UITabBarItemProxy, UITabBar, UITabBarItem, NSMutableArray, UISnapshotView;

__attribute__((visibility("hidden")))
@interface UITabBarCustomizeView : UIView {
@private
	UITabBar *_tabBar;	// 48 = 0x30
	NSMutableArray *_proxies;	// 52 = 0x34
	NSMutableArray *_fixedItems;	// 56 = 0x38
	UITabBarItemProxy *_draggingProxy;	// 60 = 0x3c
	UITabBarItem *_draggingItem;	// 64 = 0x40
	UISnapshotView *_dragImage;	// 68 = 0x44
	UIImageView *_replacementGlow;	// 72 = 0x48
	UITabBarItem *_replaceItem;	// 76 = 0x4c
	CGPoint _startPoint;	// 80 = 0x50
	int _gridCount;	// 88 = 0x58
	float _gridOffset;	// 92 = 0x5c
}
- (id)initWithFrame:(CGRect)frame;	// 0x331362dd
- (void)_finishTouchesEndedChangeAnimation:(id)animation finished:(id)finished context:(id)context;	// 0x33137be1
- (void)adjustDragImageWithTouches:(id)touches withEvent:(id)event;	// 0x331375d1
- (BOOL)canHandleSwipes;	// 0x33136895
- (void)dealloc;	// 0x331365cd
- (id)itemInTabBarWithTouches:(id)touches withEvent:(id)event;	// 0x33137741
- (void)layoutSubviews;	// 0x33136655
- (void)setTabBar:(id)bar currentItems:(id)items availableItems:(id)items3;	// 0x33136415
- (void)tabBarTouchesBegan:(id)began withEvent:(id)event;	// 0x331378d1
- (void)tabBarTouchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33137bd1
- (void)tabBarTouchesEnded:(id)ended withEvent:(id)event;	// 0x33137ad5
- (void)tabBarTouchesMoved:(id)moved withEvent:(id)event;	// 0x331379a1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33136899
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x331375c1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33137031
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33136d4d
@end
