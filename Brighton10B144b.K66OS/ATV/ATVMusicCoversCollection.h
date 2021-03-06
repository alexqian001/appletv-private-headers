/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"

@class NSArray, ATVDataClient;

__attribute__((visibility("hidden")))
@interface ATVMusicCoversCollection : BRPhotoMediaCollection {
	ATVDataClient *_dataClient;	// 44 = 0x2c
	unsigned long _dataClientType;	// 48 = 0x30
	NSArray *_albums;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
}
@property(retain, nonatomic) NSArray *albums;	// G=0x1deb01; S=0x1de889; @synthesize=_albums
@property(retain, nonatomic) NSArray *assets;	// G=0x1deb11; S=0x1deb21; @synthesize=_assets
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x1de749; S=0x1dead1; @synthesize=_dataClient
@property(assign, nonatomic) unsigned long dataClientType;	// G=0x1deae1; S=0x1deaf1; @synthesize=_dataClientType
- (id)initWithDataClient:(id)dataClient;	// 0x1de691
// declared property getter: - (id)albums;	// 0x1deb01
// declared property getter: - (id)assets;	// 0x1deb11
- (id)collectionID;	// 0x1de879
// declared property getter: - (id)dataClient;	// 0x1de749
// declared property getter: - (unsigned long)dataClientType;	// 0x1deae1
- (void)dealloc;	// 0x1de705
- (id)mediaAssets;	// 0x1de8ed
- (id)mediaTypes;	// 0x1dea8d
- (id)newAlbumsQuery;	// 0x1de759
- (id)photoAssets;	// 0x1de8dd
// declared property setter: - (void)setAlbums:(id)albums;	// 0x1de889
// declared property setter: - (void)setAssets:(id)assets;	// 0x1deb21
// declared property setter: - (void)setDataClient:(id)client;	// 0x1dead1
// declared property setter: - (void)setDataClientType:(unsigned long)type;	// 0x1deaf1
- (id)title;	// 0x1de81d
@end

