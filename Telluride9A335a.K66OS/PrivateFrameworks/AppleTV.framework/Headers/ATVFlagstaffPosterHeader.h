/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPosterHeader : BRControl {
@private
	BRAsyncImageControl *_leftImageControl;	// 48 = 0x30
	BRAsyncImageControl *_rightImageControl;	// 52 = 0x34
	NSString *_separatorText;	// 56 = 0x38
	NSString *_bottomLabel;	// 60 = 0x3c
}
@property(copy, nonatomic) NSString *bottomLabel;	// G=0x341701dd; S=0x341701ed; @synthesize=_bottomLabel
@property(retain, nonatomic) BRAsyncImageControl *leftImageControl;	// G=0x34170189; S=0x34170081; @synthesize=_leftImageControl
@property(retain, nonatomic) BRAsyncImageControl *rightImageControl;	// G=0x34170199; S=0x34170105; @synthesize=_rightImageControl
@property(copy, nonatomic) NSString *separatorText;	// G=0x341701a9; S=0x341701b9; @synthesize=_separatorText
- (id)init;	// 0x3416fcd1
// declared property getter: - (id)bottomLabel;	// 0x341701dd
- (void)dealloc;	// 0x3416fd75
- (void)drawInContext:(CGContextRef)context;	// 0x3416fdfd
- (void)layoutSubcontrols;	// 0x34170015
// declared property getter: - (id)leftImageControl;	// 0x34170189
// declared property getter: - (id)rightImageControl;	// 0x34170199
// declared property getter: - (id)separatorText;	// 0x341701a9
// declared property setter: - (void)setBottomLabel:(id)label;	// 0x341701ed
// declared property setter: - (void)setLeftImageControl:(id)control;	// 0x34170081
// declared property setter: - (void)setRightImageControl:(id)control;	// 0x34170105
// declared property setter: - (void)setSeparatorText:(id)text;	// 0x341701b9
@end

