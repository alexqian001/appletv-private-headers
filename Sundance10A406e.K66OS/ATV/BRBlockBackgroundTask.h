/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"


__attribute__((visibility("hidden")))
@interface BRBlockBackgroundTask : BRBackgroundTask {
	id _block;	// 44 = 0x2c
}
+ (id)backgroundTaskWithInterval:(double)interval delay:(double)delay taskType:(int)type withBlock:(id)block;	// 0x382add
- (id)initWithInterval:(double)interval delay:(double)delay taskType:(int)type withBlock:(id)block;	// 0x382b3d
- (void)dealloc;	// 0x382bbd
- (BOOL)perform:(id)perform;	// 0x382c09
@end

