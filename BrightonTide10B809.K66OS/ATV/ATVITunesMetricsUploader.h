/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVITunesMetricsUploader : BRSingleton {
	NSMutableArray *_uploadQueue;	// 4 = 0x4
	NSMutableDictionary *_logCurrentlyUploading;	// 8 = 0x8
	int _lastDSID;	// 12 = 0xc
}
@property(assign) int lastDSID;	// G=0x2178c1; S=0x2178d5; @synthesize=_lastDSID
@property(retain) NSMutableDictionary *logCurrentlyUploading;	// G=0x21789d; S=0x2178b1; @synthesize=_logCurrentlyUploading
@property(retain) NSMutableArray *uploadQueue;	// G=0x217879; S=0x21788d; @synthesize=_uploadQueue
+ (id)generateGUID;	// 0x216e85
+ (unsigned long long)preferredAccountDSID;	// 0x216ecd
+ (void)setSingleton:(id)singleton;	// 0x216e75
+ (id)singleton;	// 0x216e65
- (id)init;	// 0x216f71
- (id)_copyCompressedData:(id)data;	// 0x217e49
- (id)_downloadSpeedTestKVSDomain;	// 0x2172e5
- (void)_sendNextUploadLog;	// 0x217a4d
- (void)augmentDownloadInfoWithExtraData:(id)extraData;	// 0x2178ed
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x217d69
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x217e09
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x217e45
- (void)connectionDidFinishLoading:(id)connection;	// 0x217cb9
- (void)dealloc;	// 0x216fed
- (void)enqueueBlock:(id)block;	// 0x2171a1
- (void)enqueueMetricsDictionary:(id)dictionary withDelegate:(id)delegate;	// 0x217051
// declared property getter: - (int)lastDSID;	// 0x2178c1
// declared property getter: - (id)logCurrentlyUploading;	// 0x21789d
- (BOOL)sendLogDictionary:(id)dictionary;	// 0x217339
// declared property setter: - (void)setLastDSID:(int)dsid;	// 0x2178d5
// declared property setter: - (void)setLogCurrentlyUploading:(id)uploading;	// 0x2178b1
// declared property setter: - (void)setUploadQueue:(id)queue;	// 0x21788d
- (void)uploadAvailableMetrics;	// 0x2172d5
// declared property getter: - (id)uploadQueue;	// 0x217879
@end
