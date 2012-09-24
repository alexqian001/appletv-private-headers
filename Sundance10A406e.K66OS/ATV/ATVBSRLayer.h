/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVBSRLayer : BRControl {
	BRImageControl *_appleLogo;	// 84 = 0x54
	BRTextControl *_currentResolutionLabel;	// 88 = 0x58
	BRTextControl *_countDownToNextResolutionLabel;	// 92 = 0x5c
	BRTextControl *_canYouSeeTheAppleLogoLabel;	// 96 = 0x60
}
- (id)init;	// 0x13a819
- (id)_bsrCountDownLabelAttributes;	// 0x13afcd
- (id)_centeredTextAttributesForAttributes:(id)attributes;	// 0x13af65
- (void)dealloc;	// 0x13aa05
- (void)layoutSubcontrols;	// 0x13aa91
- (void)setCurrentResolutionString:(id)string;	// 0x13adc5
- (void)setSecondsLeftBeforeNextDisplayModeChangeString:(id)string;	// 0x13aec1
@end
