/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSBinaryObjectStoreFile : NSObject {
@private
	int _databaseVersion;	// 4 = 0x4
	NSDictionary *_fullMetadata;	// 8 = 0x8
	unsigned long long _primaryKeyGeneration;	// 12 = 0xc
	NSMutableDictionary *_mapData;	// 20 = 0x14
	NSDictionary *_storeOptions;	// 24 = 0x18
}
@property(assign) int databaseVersion;	// G=0x3310e9e5; S=0x3310e9f5; converted property
@property(retain) NSDictionary *fullMetadata;	// G=0x3310ea05; S=0x3310ea51; converted property
@property(retain) NSMutableDictionary *mapData;	// G=0x3310ea41; S=0x3310ea99; converted property
@property(assign) unsigned long long primaryKeyGeneration;	// G=0x3310ea15; S=0x3310ea2d; converted property
- (BOOL)_writeMetadataData:(id)data andMapDataData:(id)data2 toFile:(id)file error:(id *)error;	// 0x3310ed6d
- (void)clearCurrentValues;	// 0x3310eae1
// converted property getter: - (int)databaseVersion;	// 0x3310e9e5
- (void)dealloc;	// 0x3310ecd9
// converted property getter: - (id)fullMetadata;	// 0x3310ea05
// converted property getter: - (id)mapData;	// 0x3310ea41
// converted property getter: - (unsigned long long)primaryKeyGeneration;	// 0x3310ea15
- (BOOL)readBinaryStoreFromData:(id)data originalPath:(id)path error:(id *)error;	// 0x33110349
- (BOOL)readFromFile:(id)file error:(id *)error;	// 0x3311013d
- (BOOL)readMetadataFromFile:(id)file error:(id *)error;	// 0x3310f2ed
// converted property setter: - (void)setDatabaseVersion:(int)version;	// 0x3310e9f5
// converted property setter: - (void)setFullMetadata:(id)metadata;	// 0x3310ea51
// converted property setter: - (void)setMapData:(id)data;	// 0x3310ea99
// converted property setter: - (void)setPrimaryKeyGeneration:(unsigned long long)generation;	// 0x3310ea2d
- (BOOL)writeMetadataToFile:(id)file error:(id *)error;	// 0x3310fb01
- (BOOL)writeToFile:(id)file error:(id *)error;	// 0x3310eb3d
@end
