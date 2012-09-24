/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NSString, NSMutableDictionary;

@interface NetflixNrdp : NetflixNrdObject <NetflixNrdObjectProtocol> {
	BOOL isReady_;	// 4 = 0x4
	BOOL isError_;	// 5 = 0x5
	NSMutableDictionary *eventListeners_;	// 8 = 0x8
	NSMutableDictionary *syncData_;	// 12 = 0xc
	NSMutableDictionary *setPropertyPending_;	// 16 = 0x10
	NSMutableDictionary *setPropertyCurrent_;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *ACTION_ID;	// G=0x4ce1d9; 
@property(readonly, assign, nonatomic) NSString *COMPLETE;	// G=0x4ce1e5; 
@property(readonly, assign, nonatomic) NSString *ERROR;	// G=0x4ce1fd; 
@property(readonly, assign, nonatomic) NSString *NETWORK_ERROR;	// G=0x4ce1f1; 
@property(readonly, assign, nonatomic) NSString *READY;	// G=0x4ce1cd; 
@property(retain) NSMutableDictionary *eventListeners;	// G=0x4cf74d; S=0x4cf761; @synthesize=eventListeners_
@property(assign) BOOL isError;	// G=0x4cf71d; S=0x4cf735; @synthesize=isError_
@property(assign) BOOL isReady;	// G=0x4cf6ed; S=0x4cf705; @synthesize=isReady_
@property(retain) NSMutableDictionary *setPropertyCurrent;	// G=0x4cf7b9; S=0x4cf7cd; @synthesize=setPropertyCurrent_
@property(retain) NSMutableDictionary *setPropertyPending;	// G=0x4cf795; S=0x4cf7a9; @synthesize=setPropertyPending_
@property(retain) NSMutableDictionary *syncData;	// G=0x4cf771; S=0x4cf785; @synthesize=syncData_
+ (id)sharedInstance;	// 0x4cdf59
- (id)init;	// 0x4ce045
// declared property getter: - (id)ACTION_ID;	// 0x4ce1d9
// declared property getter: - (id)COMPLETE;	// 0x4ce1e5
// declared property getter: - (id)ERROR;	// 0x4ce1fd
// declared property getter: - (id)NETWORK_ERROR;	// 0x4ce1f1
// declared property getter: - (id)READY;	// 0x4ce1cd
- (void)addEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x4ceb7d
- (void)addEventListener:(id)listener name:(id)name;	// 0x4ceb25
- (void)callEventListeners:(id)listeners event:(id)event;	// 0x4cee89
- (void)dealloc;	// 0x4ce125
// declared property getter: - (id)eventListeners;	// 0x4cf74d
- (id)getSubObject:(id)object;	// 0x4cf655
- (void)gotEvent:(id)event;	// 0x4ce209
- (BOOL)handleEvent:(id)event;	// 0x4cea35
- (BOOL)handleNccpEvent:(id)event object:(id)object type:(id)type;	// 0x4cf3bd
// declared property getter: - (BOOL)isError;	// 0x4cf71d
// declared property getter: - (BOOL)isReady;	// 0x4cf6ed
- (void)notifyEventListeners:(id)listeners type:(id)type parameters:(id)parameters;	// 0x4cefe1
- (void)removeEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x4ceca9
- (void)removeEventListener:(id)listener name:(id)name;	// 0x4ceb51
// declared property setter: - (void)setEventListeners:(id)listeners;	// 0x4cf761
// declared property setter: - (void)setIsError:(BOOL)error;	// 0x4cf735
// declared property setter: - (void)setIsReady:(BOOL)ready;	// 0x4cf705
- (void)setProperty:(id)property property:(id)property2 value:(id)value;	// 0x4cf0e9
// declared property getter: - (id)setPropertyCurrent;	// 0x4cf7b9
// declared property getter: - (id)setPropertyPending;	// 0x4cf795
// declared property setter: - (void)setSetPropertyCurrent:(id)current;	// 0x4cf7cd
// declared property setter: - (void)setSetPropertyPending:(id)pending;	// 0x4cf7a9
// declared property setter: - (void)setSyncData:(id)data;	// 0x4cf785
// declared property getter: - (id)syncData;	// 0x4cf771
- (id)syncDataForObject:(id)object;	// 0x4cf2c5
@end
