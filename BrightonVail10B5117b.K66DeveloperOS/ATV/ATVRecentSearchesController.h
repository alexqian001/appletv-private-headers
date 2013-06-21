/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"
#import "BRMenuListItemProvider.h"

@class ATVSearchAgent, NSArray;

__attribute__((visibility("hidden")))
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider> {
	NSArray *_recentSearches;	// 176 = 0xb0
	ATVSearchAgent *_searchAgent;	// 180 = 0xb4
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x242c45
- (void)_populateRecentSearchesList;	// 0x242f5d
- (void)dealloc;	// 0x242ced
- (float)heightForRow:(long)row;	// 0x242efd
- (long)itemCount;	// 0x242e85
- (id)itemForRow:(long)row;	// 0x242e2d
- (void)itemSelected:(long)selected;	// 0x242d51
- (id)previewControlForItem:(long)item;	// 0x242f59
- (BOOL)rowSelectable:(long)selectable;	// 0x242f55
- (id)titleForRow:(long)row;	// 0x242ea5
@end
