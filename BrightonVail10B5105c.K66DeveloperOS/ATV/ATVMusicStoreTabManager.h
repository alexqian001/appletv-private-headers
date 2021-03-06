/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreTabManager : BRSingleton {
	NSMutableDictionary *_tabsContainer;	// 4 = 0x4
	NSString *_savedTabsFilePath;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x207329
+ (id)singleton;	// 0x207319
- (id)init;	// 0x207339
- (void)_loadTabs;	// 0x207555
- (void)_saveTabs;	// 0x20777d
- (id)_tabs;	// 0x20752d
- (void)dealloc;	// 0x2073e1
- (BOOL)preferredSegmentExistsForTabName:(id)tabName;	// 0x2074e5
- (id)preferredSegmentNameForTabName:(id)tabName;	// 0x207445
- (BOOL)segmentNamed:(id)named isPreferredSegmentForTabName:(id)tabName;	// 0x207501
- (void)setPreferredSegmentName:(id)name forTabName:(id)tabName;	// 0x207471
@end

