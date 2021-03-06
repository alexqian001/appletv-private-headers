/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "MPAbstractAlternateTracksViewController.h"

@class UITableView;

@interface MPPadAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
	UITableView *_tableView;	// 240 = 0xf0
}
- (id)init;	// 0x341bd711
- (id)initWithPlayer:(id)player;	// 0x341bd63d
- (void)dealloc;	// 0x341bd78d
- (void)loadView;	// 0x341bd801
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x341bd8dd
- (void)reloadData;	// 0x341bdc95
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x341bd955
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x341bdb1d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x341bd929
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x341bdaa1
@end

