/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOSource : PBCodable {
	NSString *_sourceName;	// 4 = 0x4
	NSString *_sourceId;	// 8 = 0x8
	NSString *_sourceVersion;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasSourceVersion;	// G=0x34c0b4f1; 
@property(retain, nonatomic) NSString *sourceId;	// G=0x34c0b7cd; S=0x34c0b7dd; @synthesize=_sourceId
@property(retain, nonatomic) NSString *sourceName;	// G=0x34c0b799; S=0x34c0b7a9; @synthesize=_sourceName
@property(retain, nonatomic) NSString *sourceVersion;	// G=0x34c0b801; S=0x34c0b811; @synthesize=_sourceVersion
- (void)dealloc;	// 0x34c0b485
- (id)description;	// 0x34c0b509
- (id)dictionaryRepresentation;	// 0x34c0b579
// declared property getter: - (BOOL)hasSourceVersion;	// 0x34c0b4f1
- (BOOL)readFrom:(id)from;	// 0x34c0b625
// declared property setter: - (void)setSourceId:(id)anId;	// 0x34c0b7dd
// declared property setter: - (void)setSourceName:(id)name;	// 0x34c0b7a9
// declared property setter: - (void)setSourceVersion:(id)version;	// 0x34c0b811
// declared property getter: - (id)sourceId;	// 0x34c0b7cd
// declared property getter: - (id)sourceName;	// 0x34c0b799
// declared property getter: - (id)sourceVersion;	// 0x34c0b801
- (void)writeTo:(id)to;	// 0x34c0b735
@end
