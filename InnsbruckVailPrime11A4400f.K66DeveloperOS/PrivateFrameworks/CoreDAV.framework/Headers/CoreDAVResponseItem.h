/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet, CoreDAVErrorItem, NSMutableArray, CoreDAVItemWithHrefChildItem, CoreDAVMatchResultsItem, CoreDAVLeafItem;

@interface CoreDAVResponseItem : CoreDAVItem {
	NSMutableArray *_hrefs;	// 28 = 0x1c
	CoreDAVLeafItem *_status;	// 32 = 0x20
	NSMutableSet *_propStats;	// 36 = 0x24
	CoreDAVErrorItem *_errorItem;	// 40 = 0x28
	CoreDAVLeafItem *_responseDescription;	// 44 = 0x2c
	CoreDAVItemWithHrefChildItem *_location;	// 48 = 0x30
	CoreDAVLeafItem *_serverUID;	// 52 = 0x34
	CoreDAVMatchResultsItem *_matchResults;	// 56 = 0x38
}
@property(retain, nonatomic) CoreDAVErrorItem *errorItem;	// G=0x304891d9; S=0x30489101; @synthesize=_errorItem
@property(retain) NSMutableArray *hrefs;	// G=0x3048916d; S=0x30489181; @synthesize=_hrefs
@property(retain) CoreDAVItemWithHrefChildItem *location;	// G=0x3048920d; S=0x30489221; @synthesize=_location
@property(retain) CoreDAVMatchResultsItem *matchResults;	// G=0x30489255; S=0x30489269; @synthesize=_matchResults
@property(retain) NSMutableSet *propStats;	// G=0x304891b5; S=0x304891c9; @synthesize=_propStats
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x304891e9; S=0x304891fd; @synthesize=_responseDescription
@property(retain) CoreDAVLeafItem *serverUID;	// G=0x30489231; S=0x30489245; @synthesize=_serverUID
@property(retain) CoreDAVLeafItem *status;	// G=0x30489191; S=0x304891a5; @synthesize=_status
+ (id)copyParseRules;	// 0x3048869d
- (id)init;	// 0x3048839d
- (void)addHref:(id)href;	// 0x30488c79
- (void)addPropStat:(id)stat;	// 0x30488be1
- (void)dealloc;	// 0x304883cd
- (id)description;	// 0x304884a9
// declared property getter: - (id)errorItem;	// 0x304891d9
- (id)firstHref;	// 0x30488d11
- (BOOL)hasPropertyError;	// 0x30488f8d
// declared property getter: - (id)hrefs;	// 0x3048916d
// declared property getter: - (id)location;	// 0x3048920d
// declared property getter: - (id)matchResults;	// 0x30489255
// declared property getter: - (id)propStats;	// 0x304891b5
// declared property getter: - (id)responseDescription;	// 0x304891e9
// declared property getter: - (id)serverUID;	// 0x30489231
// declared property setter: - (void)setErrorItem:(id)item;	// 0x30489101
// declared property setter: - (void)setHrefs:(id)hrefs;	// 0x30489181
// declared property setter: - (void)setLocation:(id)location;	// 0x30489221
// declared property setter: - (void)setMatchResults:(id)results;	// 0x30489269
// declared property setter: - (void)setPropStats:(id)stats;	// 0x304891c9
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x304891fd
// declared property setter: - (void)setServerUID:(id)uid;	// 0x30489245
// declared property setter: - (void)setStatus:(id)status;	// 0x304891a5
// declared property getter: - (id)status;	// 0x30489191
- (id)successfulPropertiesToValues;	// 0x30488d3d
@end
