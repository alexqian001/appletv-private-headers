/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOSessionID : PBCodable {
	unsigned long long _low;	// 4 = 0x4
	unsigned long long _high;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned long long high;	// G=0x3145180d; S=0x31451825; @synthesize=_high
@property(assign, nonatomic) unsigned long long low;	// G=0x314517e1; S=0x314517f9; @synthesize=_low
- (void)dealloc;	// 0x31451531
- (id)description;	// 0x3145155d
- (id)dictionaryRepresentation;	// 0x314515cd
// declared property getter: - (unsigned long long)high;	// 0x3145180d
// declared property getter: - (unsigned long long)low;	// 0x314517e1
- (BOOL)readFrom:(id)from;	// 0x31451681
// declared property setter: - (void)setHigh:(unsigned long long)high;	// 0x31451825
// declared property setter: - (void)setLow:(unsigned long long)low;	// 0x314517f9
- (void)writeTo:(id)to;	// 0x31451779
@end
