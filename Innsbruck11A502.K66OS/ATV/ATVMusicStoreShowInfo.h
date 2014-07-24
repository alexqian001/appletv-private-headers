/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSString, BRMediaType;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreShowInfo : XXUnknownSuperclass {
	NSString *_key;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSString *_itemID;	// 12 = 0xc
	NSMutableDictionary *_episodeData;	// 16 = 0x10
	int _episodeDataLock;	// 20 = 0x14
	NSDictionary *_itemDictionary;	// 24 = 0x18
}
@property(assign) long bookmarkTimeInMS;	// G=0x1c3899; S=0x1c38e1; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x1c3a25; S=0x1c3a6d; converted property
@property(assign) BOOL hasBeenRented;	// G=0x1c3ac1; S=0x1c3b09; converted property
@property(assign) BOOL isMarkedAsUnwatched;	// G=0x1c3b7d; S=0x1c3c11; converted property
@property(readonly, assign, nonatomic) NSDictionary *itemDictionary;	// G=0x1c3ca9; @synthesize=_itemDictionary
@property(readonly, retain) NSString *itemID;	// G=0x1c3c79; converted property
@property(readonly, retain) BRMediaType *mediaType;	// G=0x1c3c65; converted property
@property(assign) long playCount;	// G=0x1c3989; S=0x1c39d1; converted property
+ (void)_fetchRemoteShowInfoForIDs:(id)ids ofTypes:(id)types timeout:(double)timeout fetchKeys:(id)keys handler:(id)handler;	// 0x1c13f1
+ (id)_guidForTypeName:(id)typeName episodeID:(id)anId;	// 0x1c1379
+ (id)_lookupShowInfoForTypeName:(id)typeName forEpisodeID:(id)episodeID initIfNotFound:(BOOL)found;	// 0x1c3d29
+ (void)beginBulkUpdate;	// 0x1c2f15
+ (void)commitBulkUpdate:(id)update;	// 0x1c2f5d
+ (void)fetchRemoteShowInfoForEpisodeItems:(id)episodeItems ofType:(id)type timeout:(double)timeout handler:(id)handler;	// 0x1c2e35
+ (void)fetchRemoteShowInfoForEpisodeItems:(id)episodeItems ofTypes:(id)types timeout:(double)timeout handler:(id)handler;	// 0x1c2d0d
+ (void)fetchRemoteShowInfoForIDs:(id)ids ofType:(id)type timeout:(double)timeout handler:(id)handler;	// 0x1c2c2d
+ (void)fetchRemoteShowInfoForIDs:(id)ids ofTypes:(id)types timeout:(double)timeout handler:(id)handler;	// 0x1c2bd9
+ (void)fetchRemoteShowInfoForKeys:(id)keys timeout:(double)timeout handler:(id)handler;	// 0x1c2b0d
+ (id)lookupShowInfoForItemDictionary:(id)itemDictionary initIfNotFound:(BOOL)found;	// 0x1c4345
+ (id)lookupShowInfoForItemID:(id)itemID mediaType:(id)type initIfNotFound:(BOOL)found;	// 0x1c1159
+ (void)synchronizeUpdates:(id)updates;	// 0x1c3841
- (void).cxx_destruct;	// 0x1c3cb9
- (id)_initWithDictionary:(id)dictionary withKey:(id)key withItemID:(id)itemID withMediaType:(id)mediaType;	// 0x1c3edd
- (id)_objectForKey:(id)key;	// 0x1c4089
- (void)_setObject:(id)object forKey:(id)key;	// 0x1c4245
- (void)_setObject:(id)object forKey:(id)key shouldAutocommit:(BOOL)autocommit;	// 0x1c40fd
// converted property getter: - (long)bookmarkTimeInMS;	// 0x1c3899
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x1c3a25
// converted property getter: - (BOOL)hasBeenRented;	// 0x1c3ac1
// converted property getter: - (BOOL)isMarkedAsUnwatched;	// 0x1c3b7d
// declared property getter: - (id)itemDictionary;	// 0x1c3ca9
// converted property getter: - (id)itemID;	// 0x1c3c79
- (void)markAsUnwatched;	// 0x1c42e9
- (void)markAsWatched;	// 0x1c427d
// converted property getter: - (id)mediaType;	// 0x1c3c65
// converted property getter: - (long)playCount;	// 0x1c3989
// converted property setter: - (void)setBookmarkTimeInMS:(long)ms;	// 0x1c38e1
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x1c3a6d
// converted property setter: - (void)setHasBeenRented:(BOOL)rented;	// 0x1c3b09
// converted property setter: - (void)setIsMarkedAsUnwatched:(BOOL)unwatched;	// 0x1c3c11
// converted property setter: - (void)setPlayCount:(long)count;	// 0x1c39d1
- (id)timestamp;	// 0x1c3c8d
@end
