/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASModelBase.h"


@interface MSPerformanceLogger : MSASModelBase {
}
+ (void)nukeCompletionBlock:(id)block;	// 0x339c9fe1
+ (id)sharedLogger;	// 0x339c9f29
- (id)init;	// 0x339ca1b5
- (void)_logSqliteErrorLine:(int)line;	// 0x339ca171
- (void)dbQueueDiscardOperation:(id)operation itemGUID:(id)guid;	// 0x339ca8b5
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)databaseVersion currentVersion:(int)version;	// 0x339ca20d
- (void)discardOperation:(id)operation itemGUID:(id)guid;	// 0x339ca975
- (void)startOperation:(id)operation itemGUID:(id)guid;	// 0x339ca35d
- (void)stopOperation:(id)operation itemGUID:(id)guid;	// 0x339ca5dd
- (void)summarizeOperation:(id)operation itemGUID:(id)guid formatBlock:(id)block;	// 0x339caa99
@end
