/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTumblerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTumblerWithTextListHeaderControl : BRControl {
@private
	float _tumblerMaxWidth;	// 48 = 0x30
	BRTumblerControl *_tumbler;	// 52 = 0x34
	BRTextControl *_customText;	// 56 = 0x38
	BOOL _customTextOnTop;	// 60 = 0x3c
}
@property(readonly, assign) BRTextControl *customText;	// G=0x32fee491; @synthesize=_customText
@property(assign, nonatomic) BOOL customTextOnTop;	// G=0x32fee4a1; S=0x32fede65; @synthesize=_customTextOnTop
@property(readonly, assign) BRTumblerControl *tumbler;	// G=0x32fee481; @synthesize=_tumbler
@property(assign, nonatomic) float tumblerMaxWidth;	// G=0x32fee461; S=0x32fee471; @synthesize=_tumblerMaxWidth
- (id)init;	// 0x32fedd4d
- (id)accessibilityLabel;	// 0x32fee3fd
- (BOOL)brEventAction:(id)action;	// 0x32fede95
// declared property getter: - (id)customText;	// 0x32fee491
// declared property getter: - (BOOL)customTextOnTop;	// 0x32fee4a1
- (void)dealloc;	// 0x32fede05
- (void)layoutSubcontrols;	// 0x32fedfdd
// declared property setter: - (void)setCustomTextOnTop:(BOOL)top;	// 0x32fede65
// declared property setter: - (void)setTumblerMaxWidth:(float)width;	// 0x32fee471
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32fedeb9
// declared property getter: - (id)tumbler;	// 0x32fee481
// declared property getter: - (float)tumblerMaxWidth;	// 0x32fee461
@end

