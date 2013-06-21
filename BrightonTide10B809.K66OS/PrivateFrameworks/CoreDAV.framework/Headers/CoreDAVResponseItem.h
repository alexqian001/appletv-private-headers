/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableArray, CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, NSMutableSet, CoreDAVLeafItem;

@interface CoreDAVResponseItem : CoreDAVItem {
	NSMutableArray *_hrefs;	// 28 = 0x1c
	CoreDAVLeafItem *_status;	// 32 = 0x20
	NSMutableSet *_propStats;	// 36 = 0x24
	CoreDAVErrorItem *_errorItem;	// 40 = 0x28
	CoreDAVLeafItem *_responseDescription;	// 44 = 0x2c
	CoreDAVItemWithHrefChildItem *_location;	// 48 = 0x30
	CoreDAVLeafItem *_serverUID;	// 52 = 0x34
}
@property(retain, nonatomic) CoreDAVErrorItem *errorItem;	// G=0x337075c5; S=0x337074f1; @synthesize=_errorItem
@property(retain) NSMutableArray *hrefs;	// G=0x33707559; S=0x3370756d; @synthesize=_hrefs
@property(retain) CoreDAVItemWithHrefChildItem *location;	// G=0x337075f9; S=0x3370760d; @synthesize=_location
@property(retain) NSMutableSet *propStats;	// G=0x337075a1; S=0x337075b5; @synthesize=_propStats
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x337075d5; S=0x337075e9; @synthesize=_responseDescription
@property(retain) CoreDAVLeafItem *serverUID;	// G=0x3370761d; S=0x33707631; @synthesize=_serverUID
@property(retain) CoreDAVLeafItem *status;	// G=0x3370757d; S=0x33707591; @synthesize=_status
+ (id)copyParseRules;	// 0x33706b81
- (id)init;	// 0x337068c1
- (void)addHref:(id)href;	// 0x337070e9
- (void)addPropStat:(id)stat;	// 0x33707051
- (void)dealloc;	// 0x337068ed
- (id)description;	// 0x337069b5
// declared property getter: - (id)errorItem;	// 0x337075c5
- (id)firstHref;	// 0x33707181
- (BOOL)hasPropertyError;	// 0x337073f5
// declared property getter: - (id)hrefs;	// 0x33707559
// declared property getter: - (id)location;	// 0x337075f9
// declared property getter: - (id)propStats;	// 0x337075a1
// declared property getter: - (id)responseDescription;	// 0x337075d5
// declared property getter: - (id)serverUID;	// 0x3370761d
// declared property setter: - (void)setErrorItem:(id)item;	// 0x337074f1
// declared property setter: - (void)setHrefs:(id)hrefs;	// 0x3370756d
// declared property setter: - (void)setLocation:(id)location;	// 0x3370760d
// declared property setter: - (void)setPropStats:(id)stats;	// 0x337075b5
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x337075e9
// declared property setter: - (void)setServerUID:(id)uid;	// 0x33707631
// declared property setter: - (void)setStatus:(id)status;	// 0x33707591
// declared property getter: - (id)status;	// 0x3370757d
- (id)successfulPropertiesToValues;	// 0x337071ad
@end
