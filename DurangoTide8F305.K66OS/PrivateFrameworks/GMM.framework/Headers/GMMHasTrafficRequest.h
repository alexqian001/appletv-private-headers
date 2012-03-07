/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMMOldRequest.h"

@class GMMMapPoint;

@interface GMMHasTrafficRequest : GMMOldRequest {
@private
	GMMMapPoint *_mapPoint;	// 4 = 0x4
}
@property(retain, nonatomic) GMMMapPoint *mapPoint;	// G=0x32bb5005; S=0x32bb50e5; @synthesize=_mapPoint
- (void)dealloc;	// 0x32bb5089
- (id)dictionaryRepresentation;	// 0x32bb5001
// declared property getter: - (id)mapPoint;	// 0x32bb5005
- (BOOL)readFrom:(id)from;	// 0x32bb5071
- (unsigned)requestTypeCode;	// 0x32bb4ffd
- (Class)responseClass;	// 0x32bb50d1
// declared property setter: - (void)setMapPoint:(id)point;	// 0x32bb50e5
- (void)writeTo:(id)to;	// 0x32bb5015
@end
