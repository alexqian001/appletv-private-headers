/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTDownloadTestConnection.h"
#import "BRDownload.h"

@class ATVVideoCacheManager;

__attribute__((visibility("hidden")))
@interface LTAVDownloadTestConnection : LTDownloadTestConnection <BRDownload> {
	ATVVideoCacheManager *_videoCacheManager;	// 96 = 0x60
	double _computedBandwidth;	// 100 = 0x64
	long long _lastBytesTransferred;	// 108 = 0x6c
	unsigned long _consecutiveSameBytesTransferredNeeded;	// 116 = 0x74
	unsigned long long _numSamplesTakenToComputeTime;	// 120 = 0x78
}
- (id)initWithURLString:(id)urlstring;	// 0x65cf9
- (void).cxx_destruct;	// 0x665b9
- (unsigned long long)byteCount;	// 0x66589
- (void)downloadFinished;	// 0x66471
- (int)downloadState;	// 0x66539
- (int)downloadStateContext;	// 0x6655d
- (double)elapsedTime;	// 0x65d9d
- (unsigned)expectedContentLength;	// 0x65dcd
- (unsigned long long)expectedSize;	// 0x66571
- (unsigned)fetchedDataLength;	// 0x65db9
- (void)markProgress;	// 0x65fc1
- (void)pause;	// 0x665ad
- (int)qualifiedDownloadState;	// 0x6654d
- (void)resume;	// 0x665b1
- (void)setPlayable:(BOOL)playable;	// 0x665a9
- (void)startConnection;	// 0x65dd1
- (double)startTime;	// 0x65d81
- (void)stopConnection;	// 0x65ef5
- (BOOL)testContent;	// 0x665b5
- (double)timeUntilPlayable;	// 0x6659d
@end

