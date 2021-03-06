/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class _UINavigationBarAppearanceStorage, UIColor;

__attribute__((visibility("hidden")))
@interface _UINavigationBarBackground : UIImageView {
	UIColor *_tintColor;	// 96 = 0x60
	_UINavigationBarAppearanceStorage *_appearanceStorage;	// 100 = 0x64
	UIImageView *_shadowView;	// 104 = 0x68
	struct {
		unsigned isTranslucent : 1;
		unsigned barStyle : 3;
		unsigned backgroundImageNeedsUpdate : 1;
		unsigned isContainedInPopover : 1;
	} _navbarFlags;	// 108 = 0x6c
}
@property(retain, nonatomic, setter=_setShadowView:) UIImageView *_shadowView;	// G=0x32d4f205; S=0x32ceb4d5; @synthesize
@property(retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;	// G=0x32cee85d; S=0x32d4ee25; @synthesize=_appearanceStorage
@property(assign, nonatomic) int barStyle;	// G=0x32e81841; S=0x32d56c69; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32e81831; S=0x32e817d9; 
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x32e81859; S=0x32d56fcd; 
- (id)initWithFrame:(CGRect)frame barStyle:(int)style tintColor:(id)color appearance:(id)appearance isTranslucent:(BOOL)translucent;	// 0x32cea935
- (id)_currentCustomBackgroundRespectOversize:(BOOL *)oversize;	// 0x32cb65c9
- (id)_customShadowImageForSearchBar;	// 0x32e8188d
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32cefc09
- (void)_setFrame:(CGRect)frame forceUpdateBackgroundImage:(BOOL)image;	// 0x32ceaa55
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x32e8186d
// declared property setter: - (void)_setShadowView:(id)view;	// 0x32ceb4d5
// declared property getter: - (id)_shadowView;	// 0x32d4f205
// declared property getter: - (id)appearanceStorage;	// 0x32cee85d
// declared property getter: - (int)barStyle;	// 0x32e81841
- (void)dealloc;	// 0x32d52b75
- (void)didMoveToSuperview;	// 0x32ceb129
// declared property getter: - (BOOL)isTranslucent;	// 0x32e81859
// declared property setter: - (void)setAppearanceStorage:(id)storage;	// 0x32d4ee25
// declared property setter: - (void)setBarStyle:(int)style;	// 0x32d56c69
- (void)setBounds:(CGRect)bounds;	// 0x32e81919
- (void)setFrame:(CGRect)frame;	// 0x32ceaa25
// declared property setter: - (void)setTintColor:(id)color;	// 0x32e817d9
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x32d56fcd
// declared property getter: - (id)tintColor;	// 0x32e81831
- (void)updateBackgroundImage;	// 0x32ceab4d
@end

