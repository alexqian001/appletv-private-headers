/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVSettingsSaver.h"

@class NSManagedObjectContext, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVMessagesDB : XXUnknownSuperclass <ATVSettingsSaver> {
	NSObject<OS_dispatch_queue> *_coreDataQueue;	// 4 = 0x4
	NSManagedObjectContext *_objectContextInternal;	// 8 = 0x8
}
+ (id)sharedDB;	// 0x4e71e5
- (id)init;	// 0x4e7261
- (void).cxx_destruct;	// 0x4e7a51
- (id)_init;	// 0x4e727d
- (id)_objectContext;	// 0x4e72d5
- (void)addPathsToSaveTo:(id)to;	// 0x4e7a11
- (BOOL)hasDisplayedMessageWithID:(id)anId;	// 0x4e7651
- (void)markMessageAsDisplayedWithID:(id)anId;	// 0x4e7895
@end

