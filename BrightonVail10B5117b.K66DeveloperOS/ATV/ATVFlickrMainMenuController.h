/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"
#import "BRTextFieldDelegate.h"

@class ATVFlickrSearchAgent, NSString, ATVFlickrProvider;

__attribute__((visibility("hidden")))
@interface ATVFlickrMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
	BOOL _isScreenSaverMenu;	// 176 = 0xb0
	ATVFlickrSearchAgent *_searchAgent;	// 180 = 0xb4
	BOOL _searching;	// 184 = 0xb8
	NSString *_activeSearchTerm;	// 188 = 0xbc
	ATVFlickrProvider *_persistentAccountProvider;	// 192 = 0xc0
}
+ (void)initialize;	// 0x1b1259
+ (id)menuController;	// 0x1b11cd
+ (id)screenSaverMenuController;	// 0x1b1211
- (id)init;	// 0x1b12fd
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x1b1311
- (void)_accountLoaded:(id)loaded;	// 0x1b2495
- (void)_handleAccountSelection:(id)selection;	// 0x1b2065
- (void)_handleAddSelection:(id)selection;	// 0x1b1d39
- (void)_handleSavedSearchCollectionSelection:(id)selection;	// 0x1b217d
- (void)_handleSearchSelection:(id)selection;	// 0x1b1ebd
- (void)_searchComplete:(id)complete;	// 0x1b273d
- (void)_searchTermRemoved:(id)removed;	// 0x1b2d01
- (id)accessibilityLabel;	// 0x1b1d29
- (void)dealloc;	// 0x1b18a9
- (long)defaultIndex;	// 0x1b196d
- (BOOL)isNetworkDependent;	// 0x1b1d25
- (float)listVerticalOffset;	// 0x1b194d
- (void)textDidChange:(id)text;	// 0x1b19a1
- (void)textDidEndEditing:(id)text;	// 0x1b19a5
@end
