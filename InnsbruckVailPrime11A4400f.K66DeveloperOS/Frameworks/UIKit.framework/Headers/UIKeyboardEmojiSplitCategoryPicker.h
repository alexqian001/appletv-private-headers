/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardEmojiSplit.h"
#import "UIKit-Structs.h"
#import "UIKeyboardEmojiCategoryControl.h"

@class UIKeyboardEmojiCategory, UIKeyboardEmojiCategoryController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl> {
	UIKeyboardEmojiCategoryController *_categoryController;	// 156 = 0x9c
	BOOL _whiteText;	// 160 = 0xa0
	UIKeyboardEmojiCategory *_lastUsedCategory;	// 164 = 0xa4
}
@property(assign) BOOL whiteText;	// G=0x2f70405d; S=0x2f704075; @synthesize=_whiteText
- (id)initWithFrame:(CGRect)frame keyplane:(id)keyplane key:(id)key;	// 0x2f7034d5
- (id)categoryForCurrentRow;	// 0x2f70347d
- (void)dealloc;	// 0x2f703679
- (void)setCategory:(id)category;	// 0x2f7036dd
- (void)setRenderConfig:(id)config;	// 0x2f703e55
// declared property setter: - (void)setWhiteText:(BOOL)text;	// 0x2f704075
- (id)symbolForRow:(int)row;	// 0x2f703a71
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x2f703bdd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x2f703da1
- (id)titleForRow:(int)row;	// 0x2f703961
- (void)updateCategorySelectedIndicator:(int)indicator;	// 0x2f703729
// declared property getter: - (BOOL)whiteText;	// 0x2f70405d
@end

