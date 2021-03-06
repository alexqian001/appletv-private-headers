/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotoController.h"

@class NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface PhotoQueryController : PhotoController {
	NSMutableDictionary *_previews;	// 172 = 0xac
	BOOL _refreshData;	// 176 = 0xb0
	NSTimer *_deviceSleepHoldOffTimer;	// 180 = 0xb4
}
@property(assign, nonatomic) __weak NSTimer *deviceSleepHoldOffTimer;	// G=0x2acbd5; S=0x2ac779; @synthesize=_deviceSleepHoldOffTimer
- (id)initWithMode:(int)mode dataServerID:(id)anId;	// 0x2ab529
- (void).cxx_destruct;	// 0x2acbf5
- (id)_createItemsQueryForCollection:(id)collection;	// 0x2ac861
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x2aca91
- (void)_selectedScreenSaverCollection:(id)collection;	// 0x2acb0d
- (void)_sendScreenSaverHoldOfNotification:(id)notification;	// 0x2ac80d
- (BOOL)dataClientUpdated:(id)updated;	// 0x2ab759
- (BOOL)dataQueryComplete:(id)complete;	// 0x2ab5a1
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x2ab991
// declared property getter: - (id)deviceSleepHoldOffTimer;	// 0x2acbd5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2ab9dd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2abb11
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x2ac419
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x2abf41
- (void)playQueryComplete:(id)complete;	// 0x2ac589
- (BOOL)previewQueryComplete:(id)complete;	// 0x2ac329
// declared property setter: - (void)setDeviceSleepHoldOffTimer:(id)timer;	// 0x2ac779
- (void)wasPopped;	// 0x2ab711
@end

