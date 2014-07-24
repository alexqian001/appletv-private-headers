/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImageView.h"
#import "UIKit-Structs.h"

@class _UISwappableImageViewAnimationProxy, UIToolbar;

__attribute__((visibility("hidden")))
@interface UISwappableImageView : UIImageView {
	id _value;	// 144 = 0x90
	id _alternate;	// 148 = 0x94
	float _scale;	// 152 = 0x98
	BOOL _showAlternate;	// 156 = 0x9c
	BOOL _flipped;	// 157 = 0x9d
	BOOL _updateImage;	// 158 = 0x9e
	BOOL _bezel;	// 159 = 0x9f
	int _bezelStyle;	// 160 = 0xa0
	int _currentAnimation;	// 164 = 0xa4
	UIToolbar *_buttonBar;	// 168 = 0xa8
	int _buttonTag;	// 172 = 0xac
	_UISwappableImageViewAnimationProxy *_proxy;	// 176 = 0xb0
	int _barButtonItemStyle;	// 180 = 0xb4
	BOOL _didDisableWindowAutorotation;	// 184 = 0xb8
	id _didFinishTarget;	// 188 = 0xbc
	SEL _didFinishSelector;	// 192 = 0xc0
}
- (id)initWithImage:(id)image alternateImage:(id)image2 barStyle:(int)style barButtonItemStyle:(int)style4 tintColor:(id)color bezel:(BOOL)bezel;	// 0x2f483861
- (void)_willMoveToWindow:(id)window;	// 0x2f487cb1
- (void)animateImage:(float)image withButtonBar:(id)buttonBar withTag:(int)tag target:(id)target didFinishSelector:(SEL)selector;	// 0x2f61c3f1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2f61c691
- (void)dealloc;	// 0x2f48e89d
- (void)setBezelStyleForBarStyle:(int)barStyle tintColor:(id)color;	// 0x2f483d11
- (void)setBezelStyleForBarStyle:(int)barStyle tintColor:(id)color iconTintColor:(id)color3 iconTintColorDidChange:(BOOL)iconTintColor;	// 0x2f483d39
- (void)setFlipped:(BOOL)flipped;	// 0x2f61c2f1
- (void)setImage:(id)image;	// 0x2f61c7fd
- (void)showAlternateImage:(BOOL)image;	// 0x2f61c2b5
- (void)updateImageIfNeeded;	// 0x2f61c2a1
- (void)updateImageIfNeededWithTintColor:(id)tintColor;	// 0x2f483eb5
@end
