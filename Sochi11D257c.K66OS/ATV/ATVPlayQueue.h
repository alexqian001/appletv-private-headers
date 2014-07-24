/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVPlayQueue : XXUnknownSuperclass {
}
+ (unsigned)_adjustQueueIndex:(unsigned)index forPlaylist:(id)playlist;	// 0x1b8c95
+ (id)_mediaAssetsFromArray:(id)array;	// 0x1b89e5
+ (void)_playAssets:(id)assets;	// 0x1b8cbd
+ (id)_playlist;	// 0x1b8ba1
+ (void)_pruneHistory;	// 0x1b8c51
+ (void)_refreshLookaheadItem;	// 0x1b8629
+ (void)adjustPlayerForQueueAction:(int)queueAction;	// 0x1b88e9
+ (void)clearBackToItems;	// 0x1b8369
+ (void)clearHistory;	// 0x1b83ad
+ (void)demoteAssetAtIndex:(unsigned)index;	// 0x1b7805
+ (id)description;	// 0x1b868d
+ (void)enqueueItem:(id)item action:(int)action;	// 0x1b81c9
+ (void)enqueueItems:(id)items action:(int)action;	// 0x1b7c2d
+ (void)enqueueItems:(id)items action:(int)action askUser:(BOOL)user;	// 0x1b7c5d
+ (void)enqueueItemsInCollection:(id)collection action:(int)action;	// 0x1b788d
+ (unsigned)historyLength;	// 0x1b766d
+ (BOOL)isQueueValidForDataClient:(id)dataClient;	// 0x1b758d
+ (BOOL)isQueueingEnabled;	// 0x1b75e9
+ (void)moveObjectAtIndex:(unsigned)index toIndex:(unsigned)index2;	// 0x1b82d9
+ (id)nowPlaying;	// 0x1b87ad
+ (void)playExistingQueueAssetAtIndex:(unsigned)index;	// 0x1b850d
+ (id)playingNext;	// 0x1b8759
+ (id)playlistName;	// 0x1b8801
+ (id)previouslyPlayedItems;	// 0x1b76d1
+ (void)promoteAssetAtIndex:(unsigned)index;	// 0x1b777d
+ (void)purge;	// 0x1b8325
+ (id)queueAssetAtIndex:(int)index;	// 0x1b8855
+ (id)queuedItems;	// 0x1b767d
+ (void)removeQueuedAssetAtIndex:(unsigned)index;	// 0x1b83f1
+ (void)setHistoryLength:(unsigned)length;	// 0x1b7651
+ (void)setUpNextLength:(unsigned)length;	// 0x1b7631
+ (BOOL)shouldGeniusPlaybackReplaceQueue;	// 0x1b7339
+ (BOOL)shouldPlaybackSwitchToAnotherSource;	// 0x1b74a9
+ (id)upNext:(unsigned *)next;	// 0x1b7725
+ (unsigned)upNextLength;	// 0x1b7641
@end
