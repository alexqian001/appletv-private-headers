/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"
#import "MediaPlayer-Structs.h"

@class NSArray, MPMediaItem;

@interface MPMediaItemCollection : MPMediaEntity {
	MPMediaItemCollectionInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemCollectionInternal _internal;	// G=0x36ceb001; S=0x36ceb029; @synthesize
@property(readonly, assign, nonatomic) unsigned count;	// G=0x36ceabf9; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x36ceabd5; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x36ceac0d; 
@property(readonly, assign, nonatomic) MPMediaItem *representativeItem;	// G=0x36ceabe5; 
+ (id)collectionWithItems:(id)items;	// 0x36cea651
+ (id)representativePersistentIDPropertyForGroupingType:(int)groupingType;	// 0x36ceaef1
+ (id)sortTitlePropertyForGroupingType:(int)groupingType;	// 0x36ceae25
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x36cead1d
- (id)init;	// 0x36cea699
- (id)initWithCoder:(id)coder;	// 0x36cea925
- (id)initWithItems:(id)items;	// 0x36cea6d1
- (id)initWithItemsQuery:(id)itemsQuery;	// 0x36cea791
- (id)_init;	// 0x36cea87d
// declared property getter: - (MPMediaItemCollectionInternal)_internal;	// 0x36ceb001
// declared property getter: - (unsigned)count;	// 0x36ceabf9
- (void)dealloc;	// 0x36cea8c1
- (void)encodeWithCoder:(id)coder;	// 0x36ceaa91
- (BOOL)hasDownloadableItem;	// 0x36d7015d
- (BOOL)hasDownloadingItem;	// 0x36d70185
// declared property getter: - (id)items;	// 0x36ceabd5
- (id)itemsQuery;	// 0x36ceabc1
// declared property getter: - (int)mediaTypes;	// 0x36ceac0d
// declared property getter: - (id)representativeItem;	// 0x36ceabe5
// declared property setter: - (void)set_internal:(MPMediaItemCollectionInternal)internal;	// 0x36ceb029
@end
