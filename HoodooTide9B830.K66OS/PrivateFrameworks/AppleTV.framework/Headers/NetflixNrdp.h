/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NetflixNrdp : NetflixNrdObject <NetflixNrdObjectProtocol> {
@private
	BOOL isReady_;	// 12 = 0xc
	BOOL isError_;	// 13 = 0xd
	NSMutableDictionary *eventListeners_;	// 16 = 0x10
	NSMutableDictionary *syncData_;	// 20 = 0x14
	NSMutableDictionary *setPropertyPending_;	// 24 = 0x18
	NSMutableDictionary *setPropertyCurrent_;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *ACTION_ID;	// G=0x32c848d5; 
@property(readonly, assign, nonatomic) NSString *COMPLETE;	// G=0x32c848e1; 
@property(readonly, assign, nonatomic) NSString *ERROR;	// G=0x32c848f9; 
@property(readonly, assign, nonatomic) NSString *NETWORK_ERROR;	// G=0x32c848ed; 
@property(readonly, assign, nonatomic) NSString *READY;	// G=0x32c848c9; 
@property(retain) NSMutableDictionary *eventListeners;	// G=0x32c85e1d; S=0x32c85e31; @synthesize=eventListeners_
@property(assign) BOOL isError;	// G=0x32c85dfd; S=0x32c85e0d; @synthesize=isError_
@property(assign) BOOL isReady;	// G=0x32c85ddd; S=0x32c85ded; @synthesize=isReady_
@property(retain) NSMutableDictionary *setPropertyCurrent;	// G=0x32c85ec5; S=0x32c85ed9; @synthesize=setPropertyCurrent_
@property(retain) NSMutableDictionary *setPropertyPending;	// G=0x32c85e8d; S=0x32c85ea1; @synthesize=setPropertyPending_
@property(retain) NSMutableDictionary *syncData;	// G=0x32c85e55; S=0x32c85e69; @synthesize=syncData_
+ (id)sharedInstance;	// 0x32c84661
- (id)init;	// 0x32c84741
// declared property getter: - (id)ACTION_ID;	// 0x32c848d5
// declared property getter: - (id)COMPLETE;	// 0x32c848e1
// declared property getter: - (id)ERROR;	// 0x32c848f9
// declared property getter: - (id)NETWORK_ERROR;	// 0x32c848ed
// declared property getter: - (id)READY;	// 0x32c848c9
- (void)addEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x32c852a1
- (void)addEventListener:(id)listener name:(id)name;	// 0x32c85249
- (void)callEventListeners:(id)listeners event:(id)event;	// 0x32c8558d
- (void)dealloc;	// 0x32c8481d
// declared property getter: - (id)eventListeners;	// 0x32c85e1d
- (id)getSubObject:(id)object;	// 0x32c85d45
- (void)gotEvent:(id)event;	// 0x32c84905
- (BOOL)handleEvent:(id)event;	// 0x32c8515d
- (BOOL)handleNccpEvent:(id)event object:(id)object type:(id)type;	// 0x32c85ab1
// declared property getter: - (BOOL)isError;	// 0x32c85dfd
// declared property getter: - (BOOL)isReady;	// 0x32c85ddd
- (void)notifyEventListeners:(id)listeners type:(id)type parameters:(id)parameters;	// 0x32c856c9
- (void)removeEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x32c853c5
- (void)removeEventListener:(id)listener name:(id)name;	// 0x32c85275
// declared property setter: - (void)setEventListeners:(id)listeners;	// 0x32c85e31
// declared property setter: - (void)setIsError:(BOOL)error;	// 0x32c85e0d
// declared property setter: - (void)setIsReady:(BOOL)ready;	// 0x32c85ded
- (void)setProperty:(id)property property:(id)property2 value:(id)value;	// 0x32c857d5
// declared property getter: - (id)setPropertyCurrent;	// 0x32c85ec5
// declared property getter: - (id)setPropertyPending;	// 0x32c85e8d
// declared property setter: - (void)setSetPropertyCurrent:(id)current;	// 0x32c85ed9
// declared property setter: - (void)setSetPropertyPending:(id)pending;	// 0x32c85ea1
// declared property setter: - (void)setSyncData:(id)data;	// 0x32c85e69
// declared property getter: - (id)syncData;	// 0x32c85e55
- (id)syncDataForObject:(id)object;	// 0x32c859b5
@end

