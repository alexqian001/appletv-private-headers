/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSControlTableCell.h"

@class UIView;

@interface PSSliderTableCell : PSControlTableCell {
	UIView *_disabledView;	// 368 = 0x170
}
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x35e2a259
- (BOOL)canReload;	// 0x35e2a725
- (id)controlValue;	// 0x35e2a7cd
- (void)dealloc;	// 0x35e2a781
- (void)layoutSubviews;	// 0x35e2a891
- (id)newControl;	// 0x35e2a5b5
- (void)prepareForReuse;	// 0x35e2a4e1
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x35e2a2a9
- (void)setCellEnabled:(BOOL)enabled;	// 0x35e2a605
- (void)setValue:(id)value;	// 0x35e2a815
- (id)titleLabel;	// 0x35e2a601
@end
