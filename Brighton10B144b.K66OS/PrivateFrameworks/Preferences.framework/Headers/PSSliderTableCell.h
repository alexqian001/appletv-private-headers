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
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x353051e9
- (BOOL)canReload;	// 0x353056b5
- (id)controlValue;	// 0x3530575d
- (void)dealloc;	// 0x35305711
- (void)layoutSubviews;	// 0x35305821
- (id)newControl;	// 0x35305545
- (void)prepareForReuse;	// 0x35305471
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x35305239
- (void)setCellEnabled:(BOOL)enabled;	// 0x35305595
- (void)setValue:(id)value;	// 0x353057a5
- (id)titleLabel;	// 0x35305591
@end

