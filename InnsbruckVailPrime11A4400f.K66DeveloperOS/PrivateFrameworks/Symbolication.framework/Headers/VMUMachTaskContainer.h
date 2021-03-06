/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import </libobjc.A.h>


@interface VMUMachTaskContainer : NSObject {
	int _pid;	// 4 = 0x4
	unsigned _task;	// 8 = 0x8
}
@property(readonly, assign) int pid;	// G=0x328fca49; converted property
@property(readonly, assign) unsigned task;	// G=0x328fca39; converted property
+ (id)machTaskContainer;	// 0x328fc881
+ (id)machTaskContainerWithPid:(int)pid;	// 0x328fc915
+ (id)machTaskContainerWithPid:(int)pid task:(unsigned)task;	// 0x328fc989
+ (id)machTaskContainerWithTask:(unsigned)task;	// 0x328fc8c1
- (id)initWithPid:(int)pid task:(unsigned)task;	// 0x328fc9c9
- (void)dealloc;	// 0x328fcacd
- (id)description;	// 0x328fca59
- (void)finalize;	// 0x328fcb21
// converted property getter: - (int)pid;	// 0x328fca49
// converted property getter: - (unsigned)task;	// 0x328fca39
@end

