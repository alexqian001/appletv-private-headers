/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSFileHandle, SSLogFileOptions;

@interface SSRollableLog : NSObject {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	double _lastFileStatTime;	// 8 = 0x8
	NSFileHandle *_fileHandle;	// 16 = 0x10
	dispatch_source_s *_fileObserverSource;	// 20 = 0x14
	SSLogFileOptions *_options;	// 24 = 0x18
}
@property(readonly, assign) SSLogFileOptions *logOptions;	// G=0x3250a2fd; 
- (id)initWithLogOptions:(id)logOptions;	// 0x3250a1cd
- (id)_activeLogFilePath;	// 0x3250a575
- (void)_checkLogFileSize;	// 0x3250a589
- (void)_closeLogFile;	// 0x3250a65d
- (id)_logFilePathWithIndex:(int)index;	// 0x3250a6ad
- (void)_openLogFile;	// 0x3250a7f1
- (void)_rollLogFiles;	// 0x3250aa09
- (void)dealloc;	// 0x3250a26d
// declared property getter: - (id)logOptions;	// 0x3250a2fd
- (void)writeString:(id)string;	// 0x3250a335
@end

