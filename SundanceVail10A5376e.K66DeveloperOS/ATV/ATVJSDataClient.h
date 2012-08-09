/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataClient.h"
#import "AppleTV-Structs.h"

@class ATVMerchant, ATVJSContext, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ATVJSDataClient : ATVDataClient {
	ATVJSContext *_jsContext;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_jsContextAccessQueue;	// 8 = 0x8
	ATVMerchant *_merchant;	// 12 = 0xc
	NSObject<OS_dispatch_source> *_jsContextPurgeTimer;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *jsContext;	// G=0x3c2931; S=0x3c2941; @synthesize=_jsContext
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *jsContextAccessQueue;	// G=0x3c2969; S=0x3c2979; @synthesize=_jsContextAccessQueue
@property(retain, nonatomic) NSObject<OS_dispatch_source> *jsContextPurgeTimer;	// G=0x3c29d9; S=0x3c29e9; @synthesize=_jsContextPurgeTimer
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x3c29a1; S=0x3c29b1; @synthesize=_merchant
+ (id)dataPropertyToFeedProperty:(id)feedProperty;	// 0x3c0c61
+ (id)dataTypeFromFeedType:(id)feedType;	// 0x3c0b9d
+ (id)dataTypeToFeedType:(id)feedType;	// 0x3c0a99
- (id)initWithMerchant:(id)merchant;	// 0x3c0d89
- (void).cxx_destruct;	// 0x3c2a11
- (void)_accessJSContextWithSuccessBlock:(id)successBlock failureBlock:(id)block;	// 0x3c1cc1
- (id)_makeJSContext;	// 0x3c2185
- (id)_queryDictionaryForQuery:(id)query;	// 0x3c2439
- (void)concreteDataClientConnect;	// 0x3c10f5
- (void)concreteDataClientDisconnect;	// 0x3c1109
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x3c1235
- (id)imageURLWithAsset:(id)asset size:(CGSize)size crop:(BOOL)crop;	// 0x3c0e6d
// declared property getter: - (id)jsContext;	// 0x3c2931
// declared property getter: - (id)jsContextAccessQueue;	// 0x3c2969
// declared property getter: - (id)jsContextPurgeTimer;	// 0x3c29d9
// declared property getter: - (id)merchant;	// 0x3c29a1
- (BOOL)processQueryAsync:(id)async;	// 0x3c1231
// declared property setter: - (void)setJsContext:(id)context;	// 0x3c2941
// declared property setter: - (void)setJsContextAccessQueue:(id)queue;	// 0x3c2979
// declared property setter: - (void)setJsContextPurgeTimer:(id)timer;	// 0x3c29e9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3c29b1
@end
