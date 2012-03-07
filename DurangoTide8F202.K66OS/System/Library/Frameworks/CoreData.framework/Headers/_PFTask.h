/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFTask : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	void *_task;	// 8 = 0x8
	void *arguments;	// 12 = 0xc
	opaque_pthread_mutex_t lock;	// 16 = 0x10
	opaque_pthread_cond_t condition;	// 60 = 0x3c
	int isFinishedFlag;	// 88 = 0x58
}
+ (int)getNumActiveProcessors;	// 0x330e8e7d
+ (unsigned long long)getPhysicalMemory;	// 0x330e866d
+ (double)getProcessorSpeed;	// 0x3311df19
- (id)initWithFunction:(/*function-pointer*/ void *)function withArgument:(void *)argument andPriority:(int)priority;	// 0x3311db05
- (void)dealloc;	// 0x3311de59
- (void)finalize;	// 0x3311ddf5
- (void)release;	// 0x3311dec9
- (id)retain;	// 0x3311defd
- (unsigned)retainCount;	// 0x3311d77d
@end
