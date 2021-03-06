/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"


@interface VMUTraceRecord : NSObject {
	unsigned seqnum;	// 4 = 0x4
	unsigned type;	// 8 = 0x8
	unsigned long long address;	// 12 = 0xc
	unsigned long long argument;	// 20 = 0x14
	unsigned depth;	// 28 = 0x1c
	unsigned long long *frames;	// 32 = 0x20
}
@property(readonly, assign) unsigned long long address;	// G=0x36de6535; converted property
@property(readonly, assign) unsigned long long argument;	// G=0x36de654d; converted property
@property(readonly, assign) unsigned depth;	// G=0x36de6565; converted property
@property(readonly, assign) unsigned long long *frames;	// G=0x36de6575; converted property
@property(readonly, assign) unsigned seqnum;	// G=0x36de64ed; converted property
@property(readonly, assign) unsigned type;	// G=0x36de6525; converted property
- (id)initWithBacktrace:(id)backtrace forTask:(unsigned)task;	// 0x36de6311
- (id)initWithLoggingRecord:(XXStruct_qFPbxC *)loggingRecord forTask:(unsigned)task;	// 0x36de630d
- (id)initWithTraceRecord:(id)traceRecord;	// 0x36de64cd
- (id)initWithTraceRecord:(id)traceRecord withDepth:(unsigned)depth;	// 0x36de6405
// converted property getter: - (unsigned long long)address;	// 0x36de6535
// converted property getter: - (unsigned long long)argument;	// 0x36de654d
// converted property getter: - (unsigned)depth;	// 0x36de6565
// converted property getter: - (unsigned long long *)frames;	// 0x36de6575
// converted property getter: - (unsigned)seqnum;	// 0x36de64ed
- (unsigned)threadID;	// 0x36de64fd
// converted property getter: - (unsigned)type;	// 0x36de6525
@end

