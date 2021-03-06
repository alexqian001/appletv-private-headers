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
- (id)initWithURLString:(id)urlstring;	// 0x661f1
- (void).cxx_destruct;	// 0x66ab1
- (unsigned long long)byteCount;	// 0x66a81
- (void)downloadFinished;	// 0x66969
- (int)downloadState;	// 0x66a31
- (int)downloadStateContext;	// 0x66a55
- (double)elapsedTime;	// 0x66295
- (unsigned)expectedContentLength;	// 0x662c5
- (unsigned long long)expectedSize;	// 0x66a69
- (unsigned)fetchedDataLength;	// 0x662b1
- (void)markProgress;	// 0x664b9
- (void)pause;	// 0x66aa5
- (int)qualifiedDownloadState;	// 0x66a45
- (void)resume;	// 0x66aa9
- (void)setPlayable:(BOOL)playable;	// 0x66aa1
- (void)startConnection;	// 0x662c9
- (double)startTime;	// 0x66279
- (void)stopConnection;	// 0x663ed
- (BOOL)testContent;	// 0x66aad
- (double)timeUntilPlayable;	// 0x66a95
@end

