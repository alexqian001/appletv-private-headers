/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVDataClient.h"

@class ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MEInternetRadioDataClient : ATVDataClient {
	ITTunerCategoryList *_categories;	// 4 = 0x4
	AppContext *_appContext;	// 8 = 0x8
	ATVDataQuery *_stationQuery;	// 12 = 0xc
	id _stationQueryCompletionBlock;	// 16 = 0x10
}
@property(retain, nonatomic) ATVDataQuery *stationQuery;	// G=0x42ad1; S=0x42ae1; @synthesize=_stationQuery
@property(copy) id stationQueryCompletionBlock;	// G=0x42b09; S=0x42b1d; @synthesize=_stationQueryCompletionBlock
+ (id)internetRadioDataClientWithAppContext:(AppContext *)appContext;	// 0x415b9
- (id)initWithAppContext:(AppContext *)appContext;	// 0x41735
- (void).cxx_destruct;	// 0x42b2d
- (BOOL)applyFilter:(id)filter toObject:(id)object;	// 0x428b9
- (void)categoriesLoaded:(ITTunerCategoryList *)loaded withStatus:(long)status;	// 0x41885
- (id)collectionForCategory:(ITTunerCategoryInfo *)category;	// 0x42869
- (void)concreteDataClientConnect;	// 0x41e1d
- (void)concreteDataClientDisconnect;	// 0x41e6d
- (void)dealloc;	// 0x41781
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x41f5d
- (id)itemForStation:(ITTunerStationInfo *)station categoryID:(unsigned long)anId;	// 0x42759
- (BOOL)processQueryAsync:(id)async;	// 0x41f3d
// declared property setter: - (void)setStationQuery:(id)query;	// 0x42ae1
// declared property setter: - (void)setStationQueryCompletionBlock:(id)block;	// 0x42b1d
// declared property getter: - (id)stationQuery;	// 0x42ad1
// declared property getter: - (id)stationQueryCompletionBlock;	// 0x42b09
- (void)stationsLoaded:(ITTunerStationList *)loaded withStatus:(long)status;	// 0x418bd
- (BOOL)supportsProperty:(id)property;	// 0x41f09
@end

