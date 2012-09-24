/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest {
	NSMutableArray *_requestElements;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *requestElements;	// G=0x37991fd9; S=0x37991fe9; @synthesize=_requestElements
- (void)addRequestElements:(id)elements;	// 0x379918f1
- (void)clearRequestElements;	// 0x379918d1
- (void)copyTo:(id)to;	// 0x37991ec9
- (void)dealloc;	// 0x3799188d
- (id)description;	// 0x3799199d
- (id)dictionaryRepresentation;	// 0x37991a0d
- (unsigned)hash;	// 0x37991fb9
- (BOOL)isEqual:(id)equal;	// 0x37991f49
- (BOOL)readFrom:(id)from;	// 0x37991d55
// declared property getter: - (id)requestElements;	// 0x37991fd9
- (id)requestElementsAtIndex:(unsigned)index;	// 0x3799197d
- (unsigned)requestElementsCount;	// 0x3799195d
- (unsigned)requestTypeCode;	// 0x37991ea5
- (Class)responseClass;	// 0x37991ead
// declared property setter: - (void)setRequestElements:(id)elements;	// 0x37991fe9
- (void)writeTo:(id)to;	// 0x37991d61
@end
