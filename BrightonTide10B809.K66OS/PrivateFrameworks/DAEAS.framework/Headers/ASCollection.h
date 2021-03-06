/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, ASFolderItemsSyncResponse, NSNumber, NSString;

@interface ASCollection : ASItem {
	int _dataclass;	// 40 = 0x28
	NSString *_syncKey;	// 44 = 0x2c
	NSString *_collectionId;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	NSNumber *_moreAvailable;	// 56 = 0x38
	NSArray *_changedItems;	// 60 = 0x3c
	NSArray *_responseItems;	// 64 = 0x40
	ASFolderItemsSyncResponse *_parentResponse;	// 68 = 0x44
	int _sniffableType;	// 72 = 0x48
	BOOL _checkedShouldSniffInvites;	// 76 = 0x4c
}
@property(retain) NSArray *changedItems;	// G=0x339fad11; S=0x339fad49; converted property
@property(retain) NSString *collectionId;	// G=0x339fca81; S=0x339fcab9; converted property
@property(readonly, assign) int dataclass;	// G=0x339fab61; converted property
@property(retain) NSNumber *moreAvailable;	// G=0x339fcb79; S=0x339fcbb1; converted property
@property(retain) NSArray *responseItems;	// G=0x339fad8d; S=0x339fadc5; converted property
@property(retain) NSNumber *status;	// G=0x339fcafd; S=0x339fcb35; converted property
@property(retain) NSString *syncKey;	// G=0x339fca05; S=0x339fca3d; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x339fa8ad
+ (id)asParseRules;	// 0x339fae09
+ (BOOL)frontingBasicTypes;	// 0x339fa9a9
+ (BOOL)notifyOfUnknownTokens;	// 0x339fa9fd
+ (BOOL)parsingLeafNode;	// 0x339fa901
+ (BOOL)parsingWithSubItems;	// 0x339fa955
- (id)init;	// 0x339faa51
// converted property getter: - (id)changedItems;	// 0x339fad11
// converted property getter: - (id)collectionId;	// 0x339fca81
// converted property getter: - (int)dataclass;	// 0x339fab61
- (void)dealloc;	// 0x339faa9d
- (id)description;	// 0x339fcbf5
// converted property getter: - (id)moreAvailable;	// 0x339fcb79
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x339fc89d
// converted property getter: - (id)responseItems;	// 0x339fad8d
// converted property setter: - (void)setChangedItems:(id)items;	// 0x339fad49
// converted property setter: - (void)setCollectionId:(id)anId;	// 0x339fcab9
- (void)setDataclassString:(id)string;	// 0x339fac31
// converted property setter: - (void)setMoreAvailable:(id)available;	// 0x339fcbb1
- (void)setParentResponse:(id)response;	// 0x339fab51
// converted property setter: - (void)setResponseItems:(id)items;	// 0x339fadc5
// converted property setter: - (void)setStatus:(id)status;	// 0x339fcb35
// converted property setter: - (void)setSyncKey:(id)key;	// 0x339fca3d
- (int)sniffableTypeForAccount:(id)account;	// 0x339fc995
// converted property getter: - (id)status;	// 0x339fcafd
// converted property getter: - (id)syncKey;	// 0x339fca05
@end

