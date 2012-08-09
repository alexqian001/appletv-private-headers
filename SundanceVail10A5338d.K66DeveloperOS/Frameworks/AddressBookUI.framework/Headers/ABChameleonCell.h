/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewCell.h> // Unknown library

@protocol ABStyleProvider;

@interface ABChameleonCell : UITableViewCell {
	int _abCellStyle;	// 296 = 0x128
	id<ABStyleProvider> _styleProvider;	// 300 = 0x12c
}
@property(assign, nonatomic) int abCellStyle;	// G=0x37075935; S=0x37075f71; @synthesize=_abCellStyle
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x37075f19; S=0x37075d9d; @synthesize=_styleProvider
- (void)_updateBackgroundViewsForCellStyleAndLocation;	// 0x37075841
- (void)_updateTextStylesForCellStyle;	// 0x37075e91
// declared property getter: - (int)abCellStyle;	// 0x37075935
- (void)dealloc;	// 0x37082855
// declared property setter: - (void)setAbCellStyle:(int)style;	// 0x37075f71
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x37075801
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x37075d9d
// declared property getter: - (id)styleProvider;	// 0x37075f19
@end
