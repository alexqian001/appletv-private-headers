/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIThreePartButton.h"

@class UIImageView, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface _UIMediaPushButton : UIThreePartButton {
@private
	UIImageView *_icon;	// 172 = 0xac
	UIImageView *_selectionMark;	// 176 = 0xb0
	UILabel *_titleView;	// 180 = 0xb4
	UIImage *_tableIcon;	// 184 = 0xb8
	UIImage *_highlightedTableIcon;	// 188 = 0xbc
}
@property(retain, nonatomic) UIImage *highlightedTableIcon;	// G=0x3320c2d5; S=0x3320c2e5; @synthesize=_highlightedTableIcon
@property(retain, nonatomic) UIImageView *icon;	// G=0x3320c281; S=0x3320baad; @synthesize=_icon
@property(retain, nonatomic) UIImageView *selectionMark;	// G=0x3320c291; S=0x3320bb39; @synthesize=_selectionMark
@property(retain, nonatomic) UIImage *tableIcon;	// G=0x3320c2a1; S=0x3320c2b1; @synthesize=_tableIcon
- (void)_drawImageAndTextPartInRect:(CGRect)rect;	// 0x3320bcc5
- (void)dealloc;	// 0x3320bcc9
// declared property getter: - (id)highlightedTableIcon;	// 0x3320c2d5
// declared property getter: - (id)icon;	// 0x3320c281
- (void)layoutSubviews;	// 0x3320bd65
// declared property getter: - (id)selectionMark;	// 0x3320c291
- (void)setHighlighted:(BOOL)highlighted;	// 0x3320bfed
// declared property setter: - (void)setHighlightedTableIcon:(id)icon;	// 0x3320c2e5
// declared property setter: - (void)setIcon:(id)icon;	// 0x3320baad
// declared property setter: - (void)setSelectionMark:(id)mark;	// 0x3320bb39
// declared property setter: - (void)setTableIcon:(id)icon;	// 0x3320c2b1
- (void)setTitle:(id)title;	// 0x3320bbc5
- (void)setupTextAttributes;	// 0x3320c125
// declared property getter: - (id)tableIcon;	// 0x3320c2a1
@end

