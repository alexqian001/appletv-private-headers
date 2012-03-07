/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSMutableArray, BRMediaType, NSTimer, AVPlayerItem;

@interface ATVPlayerItemProgressMonitor : NSObject {
@private
	AVPlayerItem *_playerItem;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSString *_mediaQuality;	// 12 = 0xc
	NSString *_sessionID;	// 16 = 0x10
	BOOL _monitorActive;	// 20 = 0x14
	BOOL _isCaching;	// 21 = 0x15
	BOOL _useAccessLog;	// 22 = 0x16
	NSTimer *_sampleTimer;	// 24 = 0x18
	double _sampleInterval;	// 28 = 0x1c
	NSMutableDictionary *_progressDescription;	// 36 = 0x24
	NSMutableArray *_progressEvents;	// 40 = 0x28
	unsigned _sampleNumber;	// 44 = 0x2c
	NSString *_mostRecentServerIP;	// 48 = 0x30
	double _bandwidth;	// 52 = 0x34
	double _mostRecentBandwidth;	// 60 = 0x3c
	double _meanBandwidth;	// 68 = 0x44
	double _peakBandwidth;	// 76 = 0x4c
	double _varBandwidth;	// 84 = 0x54
	double _sumSquaresBandwidth;	// 92 = 0x5c
	double _duration;	// 100 = 0x64
	double _elapsedTime;	// 108 = 0x6c
	unsigned _samplesUsed;	// 116 = 0x74
	double _mostRecentReadyToPlay;	// 120 = 0x78
	unsigned long long _totalBytesRead;	// 128 = 0x80
	BOOL _readyToPlayTransitionHappened;	// 136 = 0x88
	NSString *_cachedNetworkInterface;	// 140 = 0x8c
	unsigned _playbackStallCount;	// 144 = 0x90
}
@property(assign) BOOL isCaching;	// G=0x306e0635; S=0x306e0645; @synthesize=_isCaching
@property(retain) NSString *mediaQuality;	// G=0x306e3095; S=0x306e3121; @synthesize=_mediaQuality
@property(retain) BRMediaType *mediaType;	// G=0x306e307d; S=0x306e30f5; @synthesize=_mediaType
@property(assign) BOOL monitorActive;	// G=0x306e0655; S=0x306e0665; @synthesize=_monitorActive
@property(assign) double mostRecentBandwidth;	// G=0x306e2fa1; S=0x306e2f75; @synthesize=_mostRecentBandwidth
@property(assign) double mostRecentReadyToPlay;	// G=0x306e2ff9; S=0x306e2fcd; @synthesize=_mostRecentReadyToPlay
@property(copy) NSString *mostRecentServerIP;	// G=0x306e30dd; S=0x306e31a5; @synthesize=_mostRecentServerIP
@property(assign) unsigned playbackStallCount;	// G=0x306e0595; S=0x306e05a5; @synthesize=_playbackStallCount
@property(assign) AVPlayerItem *playerItem;	// G=0x306e0675; S=0x306e0685; @synthesize=_playerItem
@property(retain) NSMutableDictionary *progressDescription;	// G=0x306e30ad; S=0x306e314d; @synthesize=_progressDescription
@property(retain) NSMutableArray *progressEvents;	// G=0x306e30c5; S=0x306e3179; @synthesize=_progressEvents
@property(assign) BOOL readyToPlayTransitionHappened;	// G=0x306e05b5; S=0x306e05c5; @synthesize=_readyToPlayTransitionHappened
@property(readonly, assign) double sampleInterval;	// G=0x306e2f49; @synthesize=_sampleInterval
@property(assign) unsigned sampleNumber;	// G=0x306e05d5; S=0x306e05e5; @synthesize=_sampleNumber
@property(assign) NSTimer *sampleTimer;	// G=0x306e05f5; S=0x306e0605; @synthesize=_sampleTimer
@property(assign) unsigned long long totalBytesRead;	// G=0x306e3051; S=0x306e3025; @synthesize=_totalBytesRead
@property(assign) BOOL useAccessLog;	// G=0x306e0615; S=0x306e0625; @synthesize=_useAccessLog
+ (void)_initializeLogCache;	// 0x306e31cd
+ (id)availableLogs;	// 0x306e0589
+ (id)loadLogsToBeUploaded;	// 0x306e25e9
+ (id)nextLogPath;	// 0x306e0801
+ (id)progressMonitorForPlayerItem:(id)playerItem createIfNecessary:(BOOL)necessary;	// 0x306e31f1
+ (void)resetLogs;	// 0x306e2515
- (void)_disconnectProgressMonitor;	// 0x306e08a9
- (id)_gatherMetrics;	// 0x306e1351
- (void)_gatherNetworkInterface;	// 0x306e0695
- (id)_initWithPlayerItem:(id)playerItem;	// 0x306e1169
- (void)_playbackStalled:(id)stalled;	// 0x306e0c05
- (void)_sendPlaybackEvent:(id)event withValues:(id)values;	// 0x306e3259
- (void)_startSamplingIfNecessary;	// 0x306e0d79
- (void)_submitReportAndDisconnect:(BOOL)disconnect;	// 0x306e2785
- (void)_takePeriodicSample:(id)sample;	// 0x306e1741
- (void)cachingStarted:(id)started;	// 0x306e0ced
- (void)cachingStopped;	// 0x306e0ccd
- (void)dealloc;	// 0x306e0715
// declared property getter: - (BOOL)isCaching;	// 0x306e0635
// declared property getter: - (id)mediaQuality;	// 0x306e3095
// declared property getter: - (id)mediaType;	// 0x306e307d
// declared property getter: - (BOOL)monitorActive;	// 0x306e0655
// declared property getter: - (double)mostRecentBandwidth;	// 0x306e2fa1
// declared property getter: - (double)mostRecentReadyToPlay;	// 0x306e2ff9
// declared property getter: - (id)mostRecentServerIP;	// 0x306e30dd
// declared property getter: - (unsigned)playbackStallCount;	// 0x306e0595
- (void)playerActivated:(id)activated;	// 0x306e0a75
- (void)playerDeactivated;	// 0x306e0961
// declared property getter: - (id)playerItem;	// 0x306e0675
// declared property getter: - (id)progressDescription;	// 0x306e30ad
// declared property getter: - (id)progressEvents;	// 0x306e30c5
// declared property getter: - (BOOL)readyToPlayTransitionHappened;	// 0x306e05b5
// declared property getter: - (double)sampleInterval;	// 0x306e2f49
// declared property getter: - (unsigned)sampleNumber;	// 0x306e05d5
// declared property getter: - (id)sampleTimer;	// 0x306e05f5
// declared property setter: - (void)setIsCaching:(BOOL)caching;	// 0x306e0645
// declared property setter: - (void)setMediaQuality:(id)quality;	// 0x306e3121
// declared property setter: - (void)setMediaType:(id)type;	// 0x306e30f5
// declared property setter: - (void)setMonitorActive:(BOOL)active;	// 0x306e0665
// declared property setter: - (void)setMostRecentBandwidth:(double)bandwidth;	// 0x306e2f75
// declared property setter: - (void)setMostRecentReadyToPlay:(double)play;	// 0x306e2fcd
// declared property setter: - (void)setMostRecentServerIP:(id)ip;	// 0x306e31a5
// declared property setter: - (void)setPlaybackStallCount:(unsigned)count;	// 0x306e05a5
// declared property setter: - (void)setPlayerItem:(id)item;	// 0x306e0685
// declared property setter: - (void)setProgressDescription:(id)description;	// 0x306e314d
// declared property setter: - (void)setProgressEvents:(id)events;	// 0x306e3179
// declared property setter: - (void)setReadyToPlayTransitionHappened:(BOOL)playTransitionHappened;	// 0x306e05c5
// declared property setter: - (void)setSampleNumber:(unsigned)number;	// 0x306e05e5
// declared property setter: - (void)setSampleTimer:(id)timer;	// 0x306e0605
// declared property setter: - (void)setTotalBytesRead:(unsigned long long)read;	// 0x306e3025
// declared property setter: - (void)setUseAccessLog:(BOOL)log;	// 0x306e0625
// declared property getter: - (unsigned long long)totalBytesRead;	// 0x306e3051
// declared property getter: - (BOOL)useAccessLog;	// 0x306e0615
@end
