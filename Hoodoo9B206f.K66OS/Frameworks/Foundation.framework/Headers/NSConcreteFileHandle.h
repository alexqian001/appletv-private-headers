/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSFileHandle.h"


__attribute__((visibility("hidden")))
@interface NSConcreteFileHandle : NSFileHandle {
@private
	int _fd;	// 4 = 0x4
	void *_nativeHandle;	// 8 = 0x8
	dispatch_data_s *_anchor;	// 12 = 0xc
	unsigned short _flags;	// 16 = 0x10
	dispatch_source_s *_dsrc;	// 20 = 0x14
	BOOL _padding[2];	// 24 = 0x18
	CFRunLoopSourceRef _source;	// 28 = 0x1c
	CFRunLoopRef _rl;	// 32 = 0x20
	unsigned short _activity;	// 36 = 0x24
	BOOL _padding2[2];	// 38 = 0x26
	int _error;	// 40 = 0x28
	void *_resultBytes;	// 44 = 0x2c
	unsigned long _resultLength;	// 48 = 0x30
	int _resultSocket;	// 52 = 0x34
	dispatch_queue_s *_fhLock;	// 56 = 0x38
	long long _weakRefCount;	// 60 = 0x3c
	id _readabilityHandler;	// 68 = 0x44
	id _writeabilityHandler;	// 72 = 0x48
	dispatch_source_s *_readMonitoringSource;	// 76 = 0x4c
	dispatch_source_s *_writeMonitoringSource;	// 80 = 0x50
	dispatch_queue_s *_readMonitoringQueue;	// 84 = 0x54
	dispatch_queue_s *_writeMonitoringQueue;	// 88 = 0x58
}
@property(retain) id port;	// G=0x31d541b5; S=0x31d541b9; converted property
@property(retain) id readabilityHandler;	// G=0x31d55275; S=0x31d554bd; converted property
@property(retain) id writeabilityHandler;	// G=0x31d556d5; S=0x31d55909; converted property
- (id)init;	// 0x31d53d1d
- (id)initWithFileDescriptor:(int)fileDescriptor;	// 0x31d53d8d
- (id)initWithFileDescriptor:(int)fileDescriptor closeOnDealloc:(BOOL)dealloc;	// 0x31d53d61
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;	// 0x31d30469
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id *)error;	// 0x31d3048d
- (void)_cancelDispatchSources;	// 0x31d308a5
- (dispatch_source_s *)_monitor:(const dispatch_source_type_s *)monitor source:(dispatch_source_s *)source onQueue:(dispatch_queue_s *)queue;	// 0x31d54f95
- (void)acceptConnectionInBackgroundAndNotify;	// 0x31d54f59
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)modes;	// 0x31d54f45
- (id)availableData;	// 0x31d53da1
- (void)clearReadabilityHandler;	// 0x31d30961
- (void)clearWriteabilityHandler;	// 0x31d309e1
- (void)closeFile;	// 0x31d30859
- (id)copyWithZone:(NSZone *)zone;	// 0x31d54261
- (void)dealloc;	// 0x31d30ad1
- (int)fileDescriptor;	// 0x31d53c4d
- (void)finalize;	// 0x31d541bd
- (void)lockedRelease;	// 0x31d53c21
- (id)lockedRetain;	// 0x31d53bf5
- (unsigned long long)offsetInFile;	// 0x31d54065
- (void)performActivity:(int)activity modes:(id)modes;	// 0x31d54271
// converted property getter: - (id)port;	// 0x31d541b5
- (id)readDataOfLength:(unsigned)length;	// 0x31d305ad
- (unsigned)readDataOfLength:(unsigned)length buffer:(char *)buffer;	// 0x31d53ead
- (id)readDataToEndOfFile;	// 0x31d54051
- (void)readInBackgroundAndNotify;	// 0x31d54f09
- (void)readInBackgroundAndNotifyForModes:(id)modes;	// 0x31d54ef5
- (void)readToEndOfFileInBackgroundAndNotify;	// 0x31d54f31
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)modes;	// 0x31d54f1d
// converted property getter: - (id)readabilityHandler;	// 0x31d55275
- (oneway void)release;	// 0x31d30a65
- (id)retain;	// 0x31d30c9d
- (unsigned long long)seekToEndOfFile;	// 0x31d540c1
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x31d5411d
// converted property setter: - (void)setPort:(id)port;	// 0x31d541b9
// converted property setter: - (void)setReadabilityHandler:(id)handler;	// 0x31d554bd
// converted property setter: - (void)setWriteabilityHandler:(id)handler;	// 0x31d55909
- (void)synchronizeFile;	// 0x31d54165
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x31d31149
- (void)waitForDataInBackgroundAndNotify;	// 0x31d54f81
- (void)waitForDataInBackgroundAndNotifyForModes:(id)modes;	// 0x31d54f6d
- (void)writeData:(id)data;	// 0x31d31221
// converted property getter: - (id)writeabilityHandler;	// 0x31d556d5
@end
