/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface SettingsMetadataView : BRControl {
	BOOL _wrapValueText;	// 84 = 0x54
	float _horizontalPadding;	// 88 = 0x58
}
@property(assign, nonatomic) float horizontalPadding;	// G=0x2da225; S=0x2da235; @synthesize=_horizontalPadding
@property(assign) BOOL wrapValueText;	// G=0x2da1f5; S=0x2da20d; @synthesize=_wrapValueText
- (id)init;	// 0x2d9821
- (id)_valueAccessibilityLabelForLabel:(id)label andValue:(id)value;	// 0x2da245
- (id)accessibilityLabel;	// 0x2da0ed
// declared property getter: - (float)horizontalPadding;	// 0x2da225
- (BOOL)isAccessibilityElement;	// 0x2da0e9
- (void)layoutSubcontrols;	// 0x2d9c49
// declared property setter: - (void)setHorizontalPadding:(float)padding;	// 0x2da235
- (void)setValues:(id)values forLabels:(id)labels;	// 0x2d98ad
// declared property setter: - (void)setWrapValueText:(BOOL)text;	// 0x2da20d
// declared property getter: - (BOOL)wrapValueText;	// 0x2da1f5
@end

