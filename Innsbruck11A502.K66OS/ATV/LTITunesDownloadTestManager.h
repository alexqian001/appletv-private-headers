/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDownloadManager.h"
#import "LTNetworkTestDownloadDelegate.h"
#import "ATVITunesMetricsUploaderConnectionDelegate.h"

@class ATVNetworkStatisticsMonitor, NSMutableDictionary, NSDictionary, NSArray, NSHTTPCookie, NSDateFormatter, LTDownloadTestConnection, NSMutableArray, NSString;

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
@property(readonly, assign) BOOL networkTestInProgress;	// G=0x17a85; converted property
- (id)init;	// 0x17359
- (void).cxx_destruct;	// 0x18e39
- (id)_avDownloads;	// 0x1a355
- (id)_homeShareTestURLs;	// 0x1a5cd
- (id)_httpDownloads;	// 0x1a215
- (void)_pauseAllDownloads;	// 0x19689
- (void)_resetManager;	// 0x1aa15
- (void)_resumeAllDownloads;	// 0x1986d
- (BOOL)_startNextAVDownloadTest;	// 0x192dd
- (BOOL)_startNextDownloadTest;	// 0x18f0d
- (void)_uploadNetworkSamplingData;	// 0x19a29
- (void)cancelNetworkSpeedTest;	// 0x18219
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x1871d
- (void)connection:(id)connection didGetMeasuredBytesPerSecond:(double)second atTime:(double)time;	// 0x18469
- (void)connectionDidFinishLoading:(id)connection;	// 0x188c9
- (void)dealloc;	// 0x171f1
- (id)dictionaryForDownload:(id)download;	// 0x1aaa9
- (id)dictionaryForDownload:(id)download includingTCPStats:(BOOL)stats;	// 0x1aacd
- (long)downloadCapBytes;	// 0x178c9
- (int)downloadCapTime;	// 0x1770d
- (BOOL)networkDiagnosticsAvailable;	// 0x1754d
// converted property getter: - (BOOL)networkTestInProgress;	// 0x17a85
- (void)setSessionDownloadCapBytes:(long)bytes;	// 0x17a75
- (void)setSessionDownloadCapTime:(int)time;	// 0x178b9
- (BOOL)shouldPerformMatchingAVDownloadTests;	// 0x1762d
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x17a95
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x17aad
@end

