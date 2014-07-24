/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class NSArray, ATVDataItem;

__attribute__((visibility("hidden")))
@interface MusicGeniusController : MusicController {
	ATVDataItem *_geniusSeed;	// 164 = 0xa4
	BOOL _isDataSavedIntoMetadata;	// 168 = 0xa8
	NSArray *_dataFromMetadata;	// 172 = 0xac
	BOOL _startGeniusPlayback;	// 176 = 0xb0
}
@property(assign, nonatomic) BOOL startGeniusPlayback;	// G=0x1b28c5; S=0x1b28d5; @synthesize=_startGeniusPlayback
- (id)initFromMetadataWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x1b1711
- (id)initWithSeed:(id)seed;	// 0x1b1665
- (void)_setup;	// 0x1b28e5
- (void)_showMediaMenuView;	// 0x1b29bd
- (id)data;	// 0x1b1881
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1b1e29
- (BOOL)dataQueryComplete:(id)complete;	// 0x1b1a05
- (void)dealloc;	// 0x1b181d
- (id)errorControlForQuery:(id)query;	// 0x1b1d09
- (id)indexPathForDataItem:(void *)dataItem;	// 0x1b1db9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1b2191
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1b2689
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1b2501
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1b2069
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1b277d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1b26c5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1b1ea5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1b20a1
- (id)newDataQuery;	// 0x1b193d
// declared property setter: - (void)setStartGeniusPlayback:(BOOL)playback;	// 0x1b28d5
// declared property getter: - (BOOL)startGeniusPlayback;	// 0x1b28c5
@end
