/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOPlaceSearchResponse.h"

@class NSString, NSMapTable;

@interface GEOSearchResponse : GEOPlaceSearchResponse {
	NSString *_businessQuery;	// 32 = 0x20
	NSMapTable *_attributionKeysToInfo;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *businessQuery;	// G=0x34151031; S=0x34150879; @synthesize=_businessQuery
- (void)_addAttributionInfo:(id)info;	// 0x3417de79
- (id)attributionInfoForSourceIdentifier:(id)sourceIdentifier sourceVersion:(unsigned)version;	// 0x3417df69
// declared property getter: - (id)businessQuery;	// 0x34151031
- (void)dealloc;	// 0x34150819
// declared property setter: - (void)setBusinessQuery:(id)query;	// 0x34150879
@end
