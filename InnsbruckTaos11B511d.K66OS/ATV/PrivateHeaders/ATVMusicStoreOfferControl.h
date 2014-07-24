/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, NSDictionary, UIColor, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOfferControl : BRControl {
	BRTextControl *_topLineTextControl;	// 84 = 0x54
	BRTextControl *_bottomLineTextControl;	// 88 = 0x58
	BRImageControl *_hdImageControl;	// 92 = 0x5c
	BRImageControl *_superHDImageControl;	// 96 = 0x60
	BRImageControl *_ddImageControl;	// 100 = 0x64
	BRImageControl *_ccImageControl;	// 104 = 0x68
	BRImageControl *_digitalExtrasControl;	// 108 = 0x6c
	NSDictionary *_additionalBadges;	// 112 = 0x70
	BOOL _displaysBottomLineText;	// 116 = 0x74
	UIColor *_color;	// 120 = 0x78
}
@property(retain, nonatomic) UIColor *color;	// G=0x1fd53d; S=0x1fd54d; @synthesize=_color
@property(assign) BOOL displaysBottomLineText;	// G=0x1fd50d; S=0x1fd525; @synthesize=_displaysBottomLineText
- (id)init;	// 0x1fc09d
- (id)_makeImageControl;	// 0x1fd401
- (id)accessibilityLabel;	// 0x1fd2ad
// declared property getter: - (id)color;	// 0x1fd53d
- (void)dealloc;	// 0x1fc0e5
// declared property getter: - (BOOL)displaysBottomLineText;	// 0x1fd50d
- (void)layoutSubcontrols;	// 0x1fcc25
- (void)setAdditionalBadges:(id)badges;	// 0x1fca39
- (void)setClosedCaption:(BOOL)caption;	// 0x1fc8a1
// declared property setter: - (void)setColor:(id)color;	// 0x1fd54d
// declared property setter: - (void)setDisplaysBottomLineText:(BOOL)text;	// 0x1fd525
- (void)setDolbyDigital:(BOOL)digital;	// 0x1fc7dd
- (void)setHasDigitalExtras:(BOOL)extras;	// 0x1fc965
- (void)setWidescreen:(BOOL)widescreen andHD:(BOOL)hd andSuperHD:(BOOL)hd3 and1080p:(BOOL)p;	// 0x1fc1d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x1fcbad
@end
