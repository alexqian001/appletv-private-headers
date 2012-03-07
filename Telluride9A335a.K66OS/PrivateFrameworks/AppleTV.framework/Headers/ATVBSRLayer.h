/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVBSRLayer : BRControl {
@private
	BRImageControl *_appleLogo;	// 48 = 0x30
	BRTextControl *_currentResolutionLabel;	// 52 = 0x34
	BRTextControl *_countDownToNextResolutionLabel;	// 56 = 0x38
	BRTextControl *_canYouSeeTheAppleLogoLabel;	// 60 = 0x3c
}
- (id)init;	// 0x3409feb1
- (id)_bsrCountDownLabelAttributes;	// 0x340a0659
- (id)_centeredTextAttributesForAttributes:(id)attributes;	// 0x340a05f1
- (void)dealloc;	// 0x340a00b9
- (void)layoutSubcontrols;	// 0x340a0141
- (void)setCurrentResolutionString:(id)string;	// 0x340a0451
- (void)setSecondsLeftBeforeNextDisplayModeChangeString:(id)string;	// 0x340a054d
@end
