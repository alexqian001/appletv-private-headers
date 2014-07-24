/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIImageView, UIImage, _UILegibilitySettings;

@interface _UILegibilityView : UIView {
	BOOL _hidesImage;	// 98 = 0x62
	_UILegibilitySettings *_settings;	// 100 = 0x64
	UIImage *_image;	// 104 = 0x68
	UIImage *_shadowImage;	// 108 = 0x6c
	float _strength;	// 112 = 0x70
	UIImageView *_imageView;	// 116 = 0x74
	UIImageView *_shadowImageView;	// 120 = 0x78
}
@property(assign, nonatomic) BOOL hidesImage;	// G=0x2f856a09; S=0x2f856211; @synthesize=_hidesImage
@property(retain, nonatomic) UIImage *image;	// G=0x2f8569a9; S=0x2f8569b9; @synthesize=_image
@property(retain, nonatomic) UIImageView *imageView;	// G=0x2f856a19; S=0x2f856a29; @synthesize=_imageView
@property(retain, nonatomic) _UILegibilitySettings *settings;	// G=0x2f856989; S=0x2f856999; @synthesize=_settings
@property(retain, nonatomic) UIImage *shadowImage;	// G=0x2f8569c9; S=0x2f8569d9; @synthesize=_shadowImage
@property(retain, nonatomic) UIImageView *shadowImageView;	// G=0x2f856a39; S=0x2f856a49; @synthesize=_shadowImageView
@property(assign, nonatomic) float strength;	// G=0x2f8569e9; S=0x2f8569f9; @synthesize=_strength
@property(readonly, assign, nonatomic) int style;	// G=0x2f8561ad; @dynamic
- (id)initWithSettings:(id)settings strength:(float)strength image:(id)image;	// 0x2f855edd
- (id)initWithSettings:(id)settings strength:(float)strength image:(id)image shadowImage:(id)image4;	// 0x2f855f01
- (id)initWithStyle:(int)style image:(id)image;	// 0x2f855e65
- (id)initWithStyle:(int)style image:(id)image shadowImage:(id)image3;	// 0x2f855e89
- (void)dealloc;	// 0x2f855fed
// declared property getter: - (BOOL)hidesImage;	// 0x2f856a09
// declared property getter: - (id)image;	// 0x2f8569a9
// declared property getter: - (id)imageView;	// 0x2f856a19
- (void)layoutSubviews;	// 0x2f856825
// declared property setter: - (void)setHidesImage:(BOOL)image;	// 0x2f856211
// declared property setter: - (void)setImage:(id)image;	// 0x2f8569b9
- (void)setImage:(id)image shadowImage:(id)image2;	// 0x2f85624d
// declared property setter: - (void)setImageView:(id)view;	// 0x2f856a29
// declared property setter: - (void)setSettings:(id)settings;	// 0x2f856999
- (void)setSettings:(id)settings image:(id)image shadowImage:(id)image3;	// 0x2f8562c9
// declared property setter: - (void)setShadowImage:(id)image;	// 0x2f8569d9
// declared property setter: - (void)setShadowImageView:(id)view;	// 0x2f856a49
// declared property setter: - (void)setStrength:(float)strength;	// 0x2f8569f9
- (void)setStyle:(int)style image:(id)image shadowImage:(id)image3;	// 0x2f856289
// declared property getter: - (id)settings;	// 0x2f856989
// declared property getter: - (id)shadowImage;	// 0x2f8569c9
// declared property getter: - (id)shadowImageView;	// 0x2f856a39
- (CGSize)sizeThatFits;	// 0x2f8561d5
// declared property getter: - (float)strength;	// 0x2f8569e9
// declared property getter: - (int)style;	// 0x2f8561ad
- (void)updateForChangedSettings:(id)changedSettings;	// 0x2f8567e9
@end
