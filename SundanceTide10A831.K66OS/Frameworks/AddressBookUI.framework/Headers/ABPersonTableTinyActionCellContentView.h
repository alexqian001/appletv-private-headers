/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <UIView.h> // Unknown library

@class NSArray, ABPersonTableTinyActionCell, NSMutableArray, UIButton;

@interface ABPersonTableTinyActionCellContentView : UIView {
	NSMutableArray *_actions;	// 84 = 0x54
	NSMutableArray *_buttons;	// 88 = 0x58
	UIButton *_highlightedButton;	// 92 = 0x5c
	ABPersonTableTinyActionCell *_cell;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x37160661; @synthesize=_actions
@property(assign, nonatomic) ABPersonTableTinyActionCell *cell;	// G=0x371b4121; S=0x3715fb99; @synthesize=_cell
// declared property getter: - (id)actions;	// 0x37160661
// declared property getter: - (id)cell;	// 0x371b4121
- (void)dealloc;	// 0x3716d2a1
- (void)layoutSubviews;	// 0x37168cd9
- (void)refreshActions;	// 0x3715fc09
// declared property setter: - (void)setCell:(id)cell;	// 0x3715fb99
- (void)setFrame:(CGRect)frame;	// 0x3715faf5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x37160581
- (void)unhighlight;	// 0x371b40f5
@end
