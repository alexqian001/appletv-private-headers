/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBRequest.h>


@interface GEOLocationShiftRequest : PBRequest {
	XXStruct_jtcFHA _pixel;	// 4 = 0x4
}
@property(assign, nonatomic) XXStruct_jtcFHA pixel;	// G=0x30f0b0dd; S=0x30f0b0fd; @synthesize=_pixel
- (XXStruct_gLbvpC)coordinate;	// 0x30fc0895
- (void)copyTo:(id)to;	// 0x30f0b005
- (void)dealloc;	// 0x30f0ace1
- (id)description;	// 0x30f0ad0d
- (id)dictionaryRepresentation;	// 0x30f0ad7d
- (unsigned)hash;	// 0x30f0b0c9
- (BOOL)isEqual:(id)equal;	// 0x30f0b071
// declared property getter: - (XXStruct_jtcFHA)pixel;	// 0x30f0b0dd
- (BOOL)readFrom:(id)from;	// 0x30f0af51
- (unsigned)requestTypeCode;	// 0x30f0afe5
- (Class)responseClass;	// 0x30f0afe9
// declared property setter: - (void)setPixel:(XXStruct_jtcFHA)pixel;	// 0x30f0b0fd
- (void)writeTo:(id)to;	// 0x30f0af5d
@end

