/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class ASCollection, NSNumber, NSMutableArray;

@interface ASFolderItemsSyncResponse : ASItem {
	ASCollection *_collection;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSMutableArray *_meetingRequestDatas;	// 48 = 0x30
	NSMutableArray *_deliveryIdsToClear;	// 52 = 0x34
	NSMutableArray *_deliveryIdsToSoftClear;	// 56 = 0x38
	int _dataclass;	// 60 = 0x3c
}
@property(readonly, retain) ASCollection *collection;	// G=0x3032353d; converted property
@property(readonly, assign) int dataclass;	// G=0x303231ad; @synthesize=_dataclass
@property(retain) NSNumber *status;	// G=0x30323ce9; S=0x30323d01; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x303236f5
+ (BOOL)frontingBasicTypes;	// 0x3032361d
+ (BOOL)notifyOfUnknownTokens;	// 0x303235d5
+ (BOOL)parsingLeafNode;	// 0x303236ad
+ (BOOL)parsingWithSubItems;	// 0x30323665
- (id)initWithDataclass:(int)dataclass;	// 0x303231bd
- (void)_processMeetingRequestDatasForAccount:(id)account;	// 0x3032373d
- (void)addDeliveryIdToClear:(id)clear;	// 0x303232e5
- (void)addDeliveryIdToSoftClear:(id)softClear;	// 0x30323289
- (void)addMeetingRequestData:(id)data;	// 0x30323341
- (id)asParseRules;	// 0x3032339d
// converted property getter: - (id)collection;	// 0x3032353d
// declared property getter: - (int)dataclass;	// 0x303231ad
- (void)dealloc;	// 0x303231f9
- (id)description;	// 0x30323c85
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x30323b81
- (void)setCollections:(id)collections;	// 0x3032356d
// declared property setter: - (void)setStatus:(id)status;	// 0x30323d01
// declared property getter: - (id)status;	// 0x30323ce9
@end
