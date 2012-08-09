/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuListItemProvider.h"
#import "AppleTV-Structs.h"
#import "BRMenuController.h"

@class NSMutableArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BROptionDialog : BRMenuController <BRMenuListItemProvider> {
	NSString *_tagString;	// 140 = 0x8c
	int _currentSelection;	// 144 = 0x90
	NSDictionary *_userInfo;	// 148 = 0x94
	NSMutableArray *_options;	// 152 = 0x98
	id _delegate;	// 156 = 0x9c
	SEL _actionSelector;	// 160 = 0xa0
}
@property(readonly, retain) NSString *tagString;	// G=0x28fbf5; converted property
@property(retain) NSDictionary *userInfo;	// G=0x28fc41; S=0x28fc05; converted property
- (id)init;	// 0x28f86d
- (BOOL)_itemSelected:(id)selected;	// 0x28fd75
- (void)_setSelectedIndex:(long)index;	// 0x28fe41
- (void)addOptionText:(id)text;	// 0x28fa95
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x28fae1
- (void)dealloc;	// 0x28f999
- (float)heightForRow:(long)row;	// 0x28fcb5
- (long)itemCount;	// 0x28fc95
- (id)itemForRow:(long)row;	// 0x28fd05
- (float)listVerticalOffset;	// 0x28fc51
- (BOOL)rowSelectable:(long)selectable;	// 0x28fcb9
- (long)selectedIndex;	// 0x28fba9
- (id)selectedText;	// 0x28fb59
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x28fa29
- (void)setTag:(id)tag;	// 0x28fbb9
// converted property setter: - (void)setUserInfo:(id)info;	// 0x28fc05
// converted property getter: - (id)tagString;	// 0x28fbf5
- (id)titleForRow:(long)row;	// 0x28fcbd
// converted property getter: - (id)userInfo;	// 0x28fc41
@end
