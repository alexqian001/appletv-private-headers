/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsAccessibilityCaptioningStyleBaseController.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface SettingsAccessibilityCaptioningOpacityController : SettingsAccessibilityCaptioningStyleBaseController {
	int _opacityType;	// 108 = 0x6c
	NSNumber *_selectedOpacity;	// 112 = 0x70
}
- (id)initWithTitle:(id)title andProfileID:(id)anId andOpacityType:(int)type;	// 0x2e0351
- (void).cxx_destruct;	// 0x2e09e5
- (void)_reloadList;	// 0x2e0889
- (void)_toggleVideoOverridesStyle;	// 0x2e0941
- (BOOL)_videoOverridesStyle;	// 0x2e08f9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2e0795
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2e0499
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2e03f5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2e0421
- (long)numberOfSectionsInList:(id)list;	// 0x2e03dd
@end
