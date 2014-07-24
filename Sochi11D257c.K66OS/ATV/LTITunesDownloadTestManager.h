/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDownloadManager.h"
#import "LTNetworkTestDownloadDelegate.h"
#import "ATVITunesMetricsUploaderConnectionDelegate.h"

@class NSDateFormatter, NSMutableArray, ATVNetworkStatisticsMonitor, NSString, LTDownloadTestConnection, NSMutableDictionary, NSDictionary, NSArray, NSHTTPCookie;

__attribute__((visibility("hidden")))
@interface LTITunesDownloadTestManager : BRDownloadManager <LTNetworkTestDownloadDelegate, ATVITunesMetricsUploaderConnectionDelegate> {
	NSDictionary *_uploadUserInput;	// 12 = 0xc
	NSArray *_downloadURLs;	// 16 = 0x10
	NSArray *_avDownloadURLs;	// 20 = 0x14
	NSMutableDictionary *_optionalHeadersDictionary;	// 24 = 0x18
	NSString *_speedTestGUID;	// 28 = 0x1c
	unsigned _currentNetworkDownloadDataCount;	// 32 = 0x20
	unsigned _currentNetworkAVDownloadDataCount;	// 36 = 0x24
	unsigned _currentNetworkUploadDataCount;	// 40 = 0x28
	int _sessionDownloadCapTime;	// 44 = 0x2c
	long _sessionDownloadCapBytes;	// 48 = 0x30
	unsigned _totalTestsCount;	// 52 = 0x34
	unsigned _homeShareTestURLsCount;	// 56 = 0x38
	BOOL _networkTestInProgress;	// 60 = 0x3c
	BOOL _networkDownloadInProgress;	// 61 = 0x3d
	BOOL _networkUploadInProgress;	// 62 = 0x3e
	BOOL _shouldUploadLogs;	// 63 = 0x3f
	NSMutableArray *_uploadLogData;	// 64 = 0x40
	LTDownloadTestConnection *_currentDownloadConnection;	// 68 = 0x44
	NSHTTPCookie *_downloadKeyCookie;	// 72 = 0x48
	NSDateFormatter *_dateFormat;	// 76 = 0x4c
	ATVNetworkStatisticsMonitor *_networkMonitor;	// 80 = 0x50
}
@property(readonly, assign) BOOL networkTestInProgress;	// G=0x17ddd; converted property
- (id)init;	// 0x176b1
- (void).cxx_destruct;	// 0x19191
- (id)_avDownloads;	// 0x1a6ad
- (id)_homeShareTestURLs;	// 0x1a925
- (id)_httpDownloads;	// 0x1a56d
- (void)_pauseAllDownloads;	// 0x199e1
- (void)_resetManager;	// 0x1ad6d
- (void)_resumeAllDownloads;	// 0x19bc5
- (BOOL)_startNextAVDownloadTest;	// 0x19635
- (BOOL)_startNextDownloadTest;	// 0x19265
- (void)_uploadNetworkSamplingData;	// 0x19d81
- (void)cancelNetworkSpeedTest;	// 0x18571
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x18a75
- (void)connection:(id)connection didGetMeasuredBytesPerSecond:(double)second atTime:(double)time;	// 0x187c1
- (void)connectionDidFinishLoading:(id)connection;	// 0x18c21
- (void)dealloc;	// 0x17549
- (id)dictionaryForDownload:(id)download;	// 0x1ae01
- (id)dictionaryForDownload:(id)download includingTCPStats:(BOOL)stats;	// 0x1ae25
- (long)downloadCapBytes;	// 0x17c21
- (int)downloadCapTime;	// 0x17a65
- (BOOL)networkDiagnosticsAvailable;	// 0x178a5
// converted property getter: - (BOOL)networkTestInProgress;	// 0x17ddd
- (void)setSessionDownloadCapBytes:(long)bytes;	// 0x17dcd
- (void)setSessionDownloadCapTime:(int)time;	// 0x17c11
- (BOOL)shouldPerformMatchingAVDownloadTests;	// 0x17985
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x17ded
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x17e05
@end
