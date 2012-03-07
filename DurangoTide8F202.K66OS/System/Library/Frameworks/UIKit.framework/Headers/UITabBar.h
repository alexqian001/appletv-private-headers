/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITabBarItem, NSArray;
@protocol UITabBarDelegate;

@interface UITabBar : UIView {
@private
	UIView *_customizeView;	// 44 = 0x2c
	id<UITabBarDelegate> _delegate;	// 48 = 0x30
	NSArray *_items;	// 52 = 0x34
	UITabBarItem *_selectedItem;	// 56 = 0x38
	NSArray *_customizationItems;	// 60 = 0x3c
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isWarped : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
	} _tabBarFlags;	// 64 = 0x40
	NSArray *_buttonItems;	// 68 = 0x44
	CFArrayRef _hiddenItems;	// 72 = 0x48
	id _appearance;	// 76 = 0x4c
}
@property(retain) NSArray *buttonItems;	// G=0x30798f49; S=0x30799939; converted property
@property(assign, nonatomic) id<UITabBarDelegate> delegate;	// G=0x3060dd91; S=0x305fbbd1; @synthesize=_delegate
@property(copy, nonatomic) NSArray *items;	// G=0x3060170d; S=0x30799d85; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x305fbc29; S=0x305fbb15; converted property
@property(assign, nonatomic) UITabBarItem *selectedItem;	// G=0x30601949; S=0x30601bf1; 
+ (float)_buttonGap;	// 0x30798f59
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x30798f1d
- (id)initWithCoder:(id)coder;	// 0x30799e3d
- (void)_adjustButtonSelection:(id)selection;	// 0x30686835
- (void)_alertDidHide;	// 0x307998e9
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x3079c76d
- (id)_appearance;	// 0x305febe9
- (void)_buttonCancel:(id)cancel;	// 0x30799875
- (void)_buttonDown:(id)down;	// 0x3068677d
- (void)_buttonDownDelayed:(id)delayed;	// 0x307998a9
- (void)_buttonUp:(id)up;	// 0x306867c5
- (void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;	// 0x30799551
- (void)_customizeDoneButtonAction:(id)action;	// 0x3079985d
- (void)_customizeWithAvailableItems:(id)availableItems;	// 0x3079e125
- (void)_dismissCustomizeSheet:(BOOL)sheet;	// 0x3079d795
- (void)_finishCustomizeAnimation:(id)animation;	// 0x30799715
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x3079bb0d
- (BOOL)_isHidden:(id)hidden;	// 0x3079c71d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3079bbc9
- (void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;	// 0x305ffe09
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x3068697d
- (void)_setBackgroundImage:(id)image;	// 0x3079a169
- (void)_setLabelFont:(id)font;	// 0x3079a0bd
- (void)_setLabelShadowColor:(id)color;	// 0x30799f21
- (void)_setLabelShadowOffset:(CGSize)offset;	// 0x3079dfdd
- (void)_setLabelTextColor:(id)color selectedTextColor:(id)color2;	// 0x30799fcd
- (void)_setSelectionIndicatorImage:(id)image;	// 0x3079bcbd
- (void)_tabBarFinishedAnimating;	// 0x30799c09
- (void)beginCustomizingItems:(id)items;	// 0x30799ca1
// converted property getter: - (id)buttonItems;	// 0x30798f49
- (void)dealloc;	// 0x3079c591
// declared property getter: - (id)delegate;	// 0x3060dd91
- (void)dismissCustomizeSheet:(BOOL)sheet;	// 0x30799be5
- (void)drawRect:(CGRect)rect;	// 0x3060be59
- (void)encodeWithCoder:(id)coder;	// 0x30799d9d
- (BOOL)endCustomizingAnimated:(BOOL)animated;	// 0x30799c2d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x307994f1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x306864b9
- (BOOL)isCustomizing;	// 0x30798f09
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x307a6401
// converted property getter: - (BOOL)isLocked;	// 0x305fbc29
// declared property getter: - (id)items;	// 0x3060170d
- (void)layoutSubviews;	// 0x30602859
- (BOOL)onStateForButton:(int)button;	// 0x3079999d
// declared property getter: - (id)selectedItem;	// 0x30601949
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x307999c1
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x30799a0d
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x30799a59
- (void)setBounds:(CGRect)bounds;	// 0x3079df35
// converted property setter: - (void)setButtonItems:(id)items;	// 0x30799939
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305fbbd1
- (void)setFrame:(CGRect)frame;	// 0x305fb8a5
// declared property setter: - (void)setItems:(id)items;	// 0x30799d85
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x305fe139
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x305fbb15
- (void)setOnStateForButton:(BOOL)button forButton:(int)button2;	// 0x30799975
// declared property setter: - (void)setSelectedItem:(id)item;	// 0x30601bf1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x305fbb45
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30799b95
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30799aa5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30799af5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30799b45
@end
