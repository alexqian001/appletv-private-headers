/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _ML3DatabaseConnectionSubPool : NSObject {
	NSObject<OS_dispatch_queue> *_checkoutQueue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_checkinQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_serialQueue;	// 12 = 0xc
	NSObject<OS_dispatch_semaphore> *_waitingSemaphore;	// 16 = 0x10
	NSMutableSet *_availableConnections;	// 20 = 0x14
	NSMutableSet *_busyConnections;	// 24 = 0x18
	int _connectionsProfilingLevel;	// 28 = 0x1c
	BOOL _useReadOnlyConnections;	// 32 = 0x20
	BOOL _useDistantConnections;	// 33 = 0x21
	NSString *_databasePath;	// 36 = 0x24
	unsigned _maxConcurrentConnections;	// 40 = 0x28
}
@property(assign, nonatomic) int connectionsProfilingLevel;	// G=0x315a6149; S=0x315a6159; 
@property(readonly, assign, nonatomic) NSString *databasePath;	// G=0x315a7009; @synthesize=_databasePath
@property(readonly, assign, nonatomic) unsigned maxConcurrentConnections;	// G=0x315a7019; @synthesize=_maxConcurrentConnections
@property(assign, nonatomic) BOOL useDistantConnections;	// G=0x315a7049; S=0x315a7059; @synthesize=_useDistantConnections
@property(assign, nonatomic) BOOL useReadOnlyConnections;	// G=0x315a7029; S=0x315a7039; @synthesize=_useReadOnlyConnections
- (id)init;	// 0x315a5ffd
- (id)initWithDatabasePath:(id)databasePath maxConcurrentConnections:(unsigned)connections;	// 0x315a5e69
- (void).cxx_destruct;	// 0x315a7069
- (void)checkInConnection:(id)connection;	// 0x315a67dd
- (id)checkoutConnection:(BOOL *)connection;	// 0x315a63c5
- (void)closeConnections;	// 0x315a6be9
- (BOOL)closeDatabaseConnection:(id)connection;	// 0x315a69c1
// declared property getter: - (int)connectionsProfilingLevel;	// 0x315a6149
// declared property getter: - (id)databasePath;	// 0x315a7009
- (void)dealloc;	// 0x315a6041
// declared property getter: - (unsigned)maxConcurrentConnections;	// 0x315a7019
// declared property setter: - (void)setConnectionsProfilingLevel:(int)level;	// 0x315a6159
// declared property setter: - (void)setUseDistantConnections:(BOOL)connections;	// 0x315a7059
// declared property setter: - (void)setUseReadOnlyConnections:(BOOL)connections;	// 0x315a7039
// declared property getter: - (BOOL)useDistantConnections;	// 0x315a7049
// declared property getter: - (BOOL)useReadOnlyConnections;	// 0x315a7029
@end

