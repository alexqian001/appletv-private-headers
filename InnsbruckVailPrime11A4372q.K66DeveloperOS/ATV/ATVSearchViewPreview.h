/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVSearchViewPreview : BRControl {
	BRImageControl *_towerControl;	// 84 = 0x54
	BRTextControl *_titleControl;	// 88 = 0x58
	BRTextControl *_subtitleControl;	// 92 = 0x5c
}
@property(retain, nonatomic) BRTextControl *subtitleControl;	// G=0x88ad9; S=0x88ae9; @synthesize=_subtitleControl
@property(retain, nonatomic) BRTextControl *titleControl;	// G=0x88aa1; S=0x88ab1; @synthesize=_titleControl
@property(retain, nonatomic) BRImageControl *towerControl;	// G=0x88a69; S=0x88a79; @synthesize=_towerControl
- (id)initWithTitle:(id)title subTitle:(id)title2;	// 0x88415
- (void).cxx_destruct;	// 0x88b11
- (void)layoutSubcontrols;	// 0x886b9
// declared property setter: - (void)setSubtitleControl:(id)control;	// 0x88ae9
// declared property setter: - (void)setTitleControl:(id)control;	// 0x88ab1
// declared property setter: - (void)setTowerControl:(id)control;	// 0x88a79
// declared property getter: - (id)subtitleControl;	// 0x88ad9
// declared property getter: - (id)titleControl;	// 0x88aa1
// declared property getter: - (id)towerControl;	// 0x88a69
@end
