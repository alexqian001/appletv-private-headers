/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class NSArray, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface MEInternetRadioGenreController : BRDataQueryController {
	ATVDataCollection *_radioCategory;	// 164 = 0xa4
	NSArray *_stations;	// 168 = 0xa8
}
+ (id)menuForRadioCategory:(id)radioCategory stations:(id)stations;	// 0x235645
- (void).cxx_destruct;	// 0x235725
- (void)_handleContextMenuSelection:(id)selection;	// 0x236469
- (id)_initWithRadioCategory:(id)radioCategory stations:(id)stations;	// 0x236051
- (void)_playerStateChanged:(id)changed;	// 0x236395
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay;	// 0x235721
- (void)_stationsQueryComplete:(id)complete;	// 0x2362b1
- (id)accessibilityScreenContent;	// 0x235f61
- (id)cancelProviderForContextMenu;	// 0x235871
- (id)controlForContextMenuPositioning;	// 0x235879
- (id)controlForContextMenuStart;	// 0x235875
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x235a11
- (void)dealloc;	// 0x2356b1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x235ab9
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x236021
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x235e69
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x23587d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x235a99
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x23571d
- (long)numberOfSectionsInList:(id)list;	// 0x235a95
- (id)providersForContextMenu;	// 0x235759
@end
