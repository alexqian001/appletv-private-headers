/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UIImageView, UITabBarItem, UITabBar, UITabBarItemProxy;

__attribute__((visibility("hidden")))
@interface UITabBarCustomizeView : UIView {
@private
	UITabBar *_tabBar;	// 44 = 0x2c
	NSMutableArray *_proxies;	// 48 = 0x30
	NSMutableArray *_fixedItems;	// 52 = 0x34
	UITabBarItemProxy *_draggingProxy;	// 56 = 0x38
	UITabBarItem *_draggingItem;	// 60 = 0x3c
	UIImageView *_dragImage;	// 64 = 0x40
	UIImageView *_replacementGlow;	// 68 = 0x44
	UITabBarItem *_replaceItem;	// 72 = 0x48
	CGPoint _startPoint;	// 76 = 0x4c
	int _gridCount;	// 84 = 0x54
	float _gridOffset;	// 88 = 0x58
}
- (id)initWithFrame:(CGRect)frame;	// 0x3079cb9d
- (void)_finishTouchesEndedChangeAnimation:(id)animation finished:(id)finished context:(id)context;	// 0x3079a425
- (void)adjustDragImageWithTouches:(id)touches withEvent:(id)event;	// 0x3079d965
- (BOOL)canHandleSwipes;	// 0x30798f05
- (void)dealloc;	// 0x3079a5e9
- (id)itemInTabBarWithTouches:(id)touches withEvent:(id)event;	// 0x3079ca4d
- (void)layoutSubviews;	// 0x3079d525
- (void)setTabBar:(id)bar currentItems:(id)items availableItems:(id)items3;	// 0x3079c2e9
- (void)tabBarTouchesBegan:(id)began withEvent:(id)event;	// 0x3079b379
- (void)tabBarTouchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3079a501
- (void)tabBarTouchesEnded:(id)ended withEvent:(id)event;	// 0x3079a515
- (void)tabBarTouchesMoved:(id)moved withEvent:(id)event;	// 0x3079b271
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3079daa5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3079be19
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3079d261
@end

