/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMIncomingSuperTile : PBCodable {
	NSData *_superTileData;	// 4 = 0x4
}
@property(retain, nonatomic) NSData *superTileData;	// G=0x30b86681; S=0x30b86691; @synthesize=_superTileData
- (void)dealloc;	// 0x30b8647d
- (id)description;	// 0x30b864c1
- (id)dictionaryRepresentation;	// 0x30b86531
- (BOOL)readFrom:(id)from;	// 0x30b86585
// declared property setter: - (void)setSuperTileData:(id)data;	// 0x30b86691
// declared property getter: - (id)superTileData;	// 0x30b86681
- (void)writeTo:(id)to;	// 0x30b8665d
@end
