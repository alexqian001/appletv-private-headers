/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface SettingsMetadataView : BRControl {
	BOOL _wrapValueText;	// 77 = 0x4d
	float _horizontalPadding;	// 80 = 0x50
}
@property(assign, nonatomic) float horizontalPadding;	// G=0x8d63d; S=0x8d64d; @synthesize=_horizontalPadding
@property(assign) BOOL wrapValueText;	// G=0x8d60d; S=0x8d625; @synthesize=_wrapValueText
- (id)init;	// 0x8cc1d
- (id)accessibilityLabel;	// 0x8d475
// declared property getter: - (float)horizontalPadding;	// 0x8d63d
- (BOOL)isAccessibilityElement;	// 0x8d471
- (void)layoutSubcontrols;	// 0x8cfed
// declared property setter: - (void)setHorizontalPadding:(float)padding;	// 0x8d64d
- (void)setValues:(id)values forLabels:(id)labels;	// 0x8ccb5
// declared property setter: - (void)setWrapValueText:(BOOL)text;	// 0x8d625
// declared property getter: - (BOOL)wrapValueText;	// 0x8d60d
@end
