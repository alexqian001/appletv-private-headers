/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardEmojiPicker.h"
#import "UIKit-Structs.h"
#import "UIKeyboardEmojiCategoryControl.h"

@class UIKeyboardEmojiCategoryController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiCategoryControl> {
	UIKeyboardEmojiCategoryController *_categoryController;	// 124 = 0x7c
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x31034965
- (id)categoryForCurrentRow;	// 0x3103490d
- (void)dealloc;	// 0x31034c31
- (void)scrollViewDidScroll:(id)scrollView;	// 0x31035041
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;	// 0x31035269
- (void)setCategory:(id)category;	// 0x31034c7d
- (id)symbolForRow:(int)row;	// 0x31034df9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31034f09
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31034fd1
- (id)titleForRow:(int)row;	// 0x31034ce9
@end

