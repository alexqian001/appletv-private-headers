/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRPanelControl : BRControl {
	BRControl *_background;	// 84 = 0x54
	int _mode;	// 88 = 0x58
	float _nonAxisAlignment;	// 92 = 0x5c
	float _verticalSpacing;	// 96 = 0x60
	float _verticalMargin;	// 100 = 0x64
	float _horizontalSpacing;	// 104 = 0x68
	float _horizontalMargin;	// 108 = 0x6c
}
@property(retain) id backgroundControl;	// G=0x2ec39d; S=0x2ec32d; converted property
@property(assign) float horizontalMargin;	// G=0x2ec711; S=0x2ec6d9; converted property
@property(assign) float horizontalSpacing;	// G=0x2ec4bd; S=0x2ec485; converted property
@property(assign) float nonAxisAlignment;	// G=0x2ec3e5; S=0x2ec3ad; converted property
@property(assign) int panelMode;	// G=0x2ec31d; S=0x2ec2f5; converted property
@property(assign) float verticalMargin;	// G=0x2ec475; S=0x2ec43d; converted property
@property(assign) float verticalSpacing;	// G=0x2ec42d; S=0x2ec3f5; converted property
- (id)init;	// 0x2ec299
- (CGRect)_marginedFrameForFrame:(CGRect)frame screenRes:(CGSize)res;	// 0x2ed455
- (void)_performFillRightToLeft:(id)left;	// 0x2ed0c9
- (void)_performFillTopToBottom:(id)bottom;	// 0x2ed279
- (CGSize)_performFlowRightToLeft:(id)left inBounds:(CGSize)bounds setFrame:(BOOL)frame;	// 0x2ecc55
- (CGSize)_performFlowTopToBottom:(id)bottom inBounds:(CGSize)bounds setFrame:(BOOL)frame;	// 0x2ece61
- (id)accessibilityLabel;	// 0x2ed4f1
// converted property getter: - (id)backgroundControl;	// 0x2ec39d
// converted property getter: - (float)horizontalMargin;	// 0x2ec711
// converted property getter: - (float)horizontalSpacing;	// 0x2ec4bd
- (void)layoutSubcontrols;	// 0x2ec9e9
// converted property getter: - (float)nonAxisAlignment;	// 0x2ec3e5
// converted property getter: - (int)panelMode;	// 0x2ec31d
- (CGPoint)positionForControlAtIndex:(unsigned)index preSize:(float *)size postSize:(float *)size3;	// 0x2ec721
// converted property setter: - (void)setBackgroundControl:(id)control;	// 0x2ec32d
// converted property setter: - (void)setHorizontalMargin:(float)margin;	// 0x2ec6d9
// converted property setter: - (void)setHorizontalSpacing:(float)spacing;	// 0x2ec485
- (void)setHorizontalSpacingForPreferredWidth:(float)preferredWidth minimumSpacing:(float)spacing;	// 0x2ec4cd
// converted property setter: - (void)setNonAxisAlignment:(float)alignment;	// 0x2ec3ad
// converted property setter: - (void)setPanelMode:(int)mode;	// 0x2ec2f5
// converted property setter: - (void)setVerticalMargin:(float)margin;	// 0x2ec43d
// converted property setter: - (void)setVerticalSpacing:(float)spacing;	// 0x2ec3f5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2ecb01
// converted property getter: - (float)verticalMargin;	// 0x2ec475
// converted property getter: - (float)verticalSpacing;	// 0x2ec42d
@end
