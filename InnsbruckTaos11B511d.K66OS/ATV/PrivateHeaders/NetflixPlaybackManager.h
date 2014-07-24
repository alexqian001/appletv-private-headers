/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSString, NSDictionary, NSData, NSLock, NSMutableArray;

@interface NetflixPlaybackManager : XXUnknownSuperclass {
	BOOL openNotificationSent_;	// 4 = 0x4
	NSDictionary *movieDetails_;	// 8 = 0x8
	NSData *playReadyKey_;	// 12 = 0xc
	IMediaControl *mediaControl_;	// 16 = 0x10
	NetflixMediaControlListener *mediaControlListener_;	// 20 = 0x14
	NSMutableArray *errorStack_;	// 24 = 0x18
	NSDictionary *reportableActionId_;	// 28 = 0x1c
	NSLock *subtitlesProcessingLock_;	// 32 = 0x20
	BOOL subtitlesProcessing_;	// 36 = 0x24
	int subtitlesTrackIndex_;	// 40 = 0x28
	int audioTrackIndex_;	// 44 = 0x2c
	NSLock *playbackCommandLock_;	// 48 = 0x30
	BOOL playbackCommandInProgress_;	// 52 = 0x34
	int state_;	// 56 = 0x38
	unsigned lastKnownMappedVideoBitrate_;	// 60 = 0x3c
	unsigned lastNumAccessLogEvents_;	// 64 = 0x40
	long long totalBytesTransferred_;	// 68 = 0x44
	double observedBitrate_;	// 76 = 0x4c
	BOOL pollNetworkInterface_;	// 84 = 0x54
	long long pollBytesStart_;	// 88 = 0x58
	BwEntry *bwEntry_;	// 96 = 0x60
	double lastBwEntryTime_;	// 100 = 0x64
	long long lastBwEntryBytes_;	// 108 = 0x6c
	int networkInterfaceType_;	// 116 = 0x74
	long long bufferingStartBytes_;	// 120 = 0x78
	double bufferingStartTime_;	// 128 = 0x80
	double sampleReportWindow_;	// 136 = 0x88
	bool stalled_;	// 144 = 0x90
	int totalNumberOfStalls_;	// 148 = 0x94
	BOOL trickplayIsOn_;	// 152 = 0x98
	NSString *audioSelectLanguage_;	// 156 = 0x9c
	NSTimer *audioSelectTimer_;	// 160 = 0xa0
	double audioSelectTimeCount_;	// 164 = 0xa4
}
@property(retain, nonatomic) NSString *audioSelectLanguage;	// G=0x5bff4d; S=0x5bff5d; @synthesize=audioSelectLanguage_
@property(assign, nonatomic) double audioSelectTimeCount;	// G=0x5bff8d; S=0x5bffa5; @synthesize=audioSelectTimeCount_
@property(retain, nonatomic) NSTimer *audioSelectTimer;	// G=0x5bff6d; S=0x5bff7d; @synthesize=audioSelectTimer_
@property(assign, nonatomic) int audioTrackIndex;	// G=0x5bfc39; S=0x5bfc49; @synthesize=audioTrackIndex_
@property(readonly, assign, nonatomic) unsigned bitrate;	// G=0x5bf83d; 
@property(assign, nonatomic) long long bufferingStartBytes;	// G=0x5bfe55; S=0x5bfe6d; @synthesize=bufferingStartBytes_
@property(assign, nonatomic) double bufferingStartTime;	// G=0x5bfe81; S=0x5bfe99; @synthesize=bufferingStartTime_
@property(assign, nonatomic) BwEntry *bwEntry;	// G=0x5bfdbd; S=0x5bfdcd; @synthesize=bwEntry_
@property(readonly, assign, nonatomic) long long bytes;	// G=0x5bf881; 
@property(readonly, assign, nonatomic) long long bytesForInterface;	// G=0x5bf8e5; 
@property(readonly, assign, nonatomic) unsigned currentStreamBitrate;	// G=0x5bf9a5; 
@property(retain, nonatomic) NSMutableArray *errorStack;	// G=0x5bfb85; S=0x5bfb95; @synthesize=errorStack_
@property(assign, nonatomic) long long lastBwEntryBytes;	// G=0x5bfe09; S=0x5bfe21; @synthesize=lastBwEntryBytes_
@property(assign, nonatomic) double lastBwEntryTime;	// G=0x5bfddd; S=0x5bfdf5; @synthesize=lastBwEntryTime_
@property(assign, nonatomic) unsigned lastKnownMappedVideoBitrate;	// G=0x5bfcd9; S=0x5bfce9; @synthesize=lastKnownMappedVideoBitrate_
@property(assign, nonatomic) unsigned lastNumAccessLogEvents;	// G=0x5bfcf9; S=0x5bfd09; @synthesize=lastNumAccessLogEvents_
@property(assign, nonatomic) IMediaControl *mediaControl;	// G=0x5bfb65; S=0x5ba8a9; @synthesize=mediaControl_
@property(assign, nonatomic) NetflixMediaControlListener *mediaControlListener;	// G=0x5bfb75; S=0x5ba9bd; @synthesize=mediaControlListener_
@property(retain) NSDictionary *movieDetails;	// G=0x5bfb1d; S=0x5bfb31; @synthesize=movieDetails_
@property(assign, nonatomic) int networkInterfaceType;	// G=0x5bfe35; S=0x5bfe45; @synthesize=networkInterfaceType_
@property(assign, nonatomic) double observedBitrate;	// G=0x5bfd45; S=0x5bfd5d; @synthesize=observedBitrate_
@property(assign, nonatomic) BOOL openNotificationSent;	// G=0x5bfafd; S=0x5bfb0d; @synthesize=openNotificationSent_
@property(copy) NSData *playReadyKey;	// G=0x5bfb41; S=0x5bfb55; @synthesize=playReadyKey_
@property(assign) BOOL playbackCommandInProgress;	// G=0x5bfc7d; S=0x5bfc95; @synthesize=playbackCommandInProgress_
@property(retain) NSLock *playbackCommandLock;	// G=0x5bfc59; S=0x5bfc6d; @synthesize=playbackCommandLock_
@property(assign, nonatomic) long long pollBytesStart;	// G=0x5bfd91; S=0x5bfda9; @synthesize=pollBytesStart_
@property(assign, nonatomic) BOOL pollNetworkInterface;	// G=0x5bfd71; S=0x5bfd81; @synthesize=pollNetworkInterface_
@property(retain, nonatomic) NSDictionary *reportableActionId;	// G=0x5bfba5; S=0x5bfbb5; @synthesize=reportableActionId_
@property(assign, nonatomic) double sampleReportWindow;	// G=0x5bfead; S=0x5bfec5; @synthesize=sampleReportWindow_
@property(assign, nonatomic) bool stalled;	// G=0x5bfed9; S=0x5bfeed; @synthesize=stalled_
@property(assign) int state;	// G=0x5bfcad; S=0x5bfcc1; @synthesize=state_
@property(assign) BOOL subtitlesProcessing;	// G=0x5bfbe9; S=0x5bfc01; @synthesize=subtitlesProcessing_
@property(retain) NSLock *subtitlesProcessingLock;	// G=0x5bfbc5; S=0x5bfbd9; @synthesize=subtitlesProcessingLock_
@property(assign, nonatomic) int subtitlesTrackIndex;	// G=0x5bfc19; S=0x5bfc29; @synthesize=subtitlesTrackIndex_
@property(assign, nonatomic) long long totalBytesTransferred;	// G=0x5bfd19; S=0x5bfd31; @synthesize=totalBytesTransferred_
@property(assign, nonatomic) int totalNumberOfStalls;	// G=0x5bfefd; S=0x5bff0d; @synthesize=totalNumberOfStalls_
@property(assign) BOOL trickplay;	// G=0x5bfae5; S=0x5bfad5; converted property
@property(assign) BOOL trickplayIsOn;	// G=0x5bff1d; S=0x5bff35; @synthesize=trickplayIsOn_
+ (void)initialize;	// 0x5ba571
+ (id)sharedInstance;	// 0x5ba575
- (id)init;	// 0x5ba661
- (void)audioSelect:(id)select;	// 0x5bc2f5
- (void)audioSelectAsync:(id)async;	// 0x5bc941
- (BOOL)audioSelectAvailable;	// 0x5bc331
// declared property getter: - (id)audioSelectLanguage;	// 0x5bff4d
// declared property getter: - (double)audioSelectTimeCount;	// 0x5bff8d
// declared property getter: - (id)audioSelectTimer;	// 0x5bff6d
// declared property getter: - (int)audioTrackIndex;	// 0x5bfc39
// declared property getter: - (unsigned)bitrate;	// 0x5bf83d
- (void)buffering:(double)buffering;	// 0x5baf51
- (void)bufferingComplete:(double)complete;	// 0x5bb069
// declared property getter: - (long long)bufferingStartBytes;	// 0x5bfe55
// declared property getter: - (double)bufferingStartTime;	// 0x5bfe81
// declared property getter: - (BwEntry *)bwEntry;	// 0x5bfdbd
// declared property getter: - (long long)bytes;	// 0x5bf881
// declared property getter: - (long long)bytesForInterface;	// 0x5bf8e5
- (void)cancelUpdateTimer;	// 0x5bc815
- (id)capitalizeAudioTracksArray:(id)array;	// 0x5bd195
- (id)capitalizeSubtitlesForMovieDetails:(id)movieDetails;	// 0x5bd285
- (id)capitalizeSubtitlesForTrackCombinationArray:(id)trackCombinationArray;	// 0x5bd0a5
- (id)capitalizeTrackCombination:(id)combination;	// 0x5bcfd1
- (id)capitalizeTracks:(id)tracks;	// 0x5bcee1
- (void)clearErrorStack;	// 0x5bfaad
- (void)close;	// 0x5bae59
- (id)createErrorFromStack;	// 0x5bd5e5
// declared property getter: - (unsigned)currentStreamBitrate;	// 0x5bf9a5
- (void)dealloc;	// 0x5ba795
- (void)end:(double)end reason:(id)reason;	// 0x5bac79
// declared property getter: - (id)errorStack;	// 0x5bfb85
- (int)fetchBookmark:(id)bookmark;	// 0x5bf54d
- (void)getAppCert;	// 0x5bc9ad
- (void)getFpsCkc:(id)ckc forAssetId:(id)assetId;	// 0x5bcbbd
- (id)getFpsCkcWithSpcData:(id)spcData forAssetId:(id)assetId;	// 0x5bcd51
// declared property getter: - (long long)lastBwEntryBytes;	// 0x5bfe09
// declared property getter: - (double)lastBwEntryTime;	// 0x5bfddd
// declared property getter: - (unsigned)lastKnownMappedVideoBitrate;	// 0x5bfcd9
// declared property getter: - (unsigned)lastNumAccessLogEvents;	// 0x5bfcf9
// declared property getter: - (IMediaControl *)mediaControl;	// 0x5bfb65
// declared property getter: - (NetflixMediaControlListener *)mediaControlListener;	// 0x5bfb75
- (void)mediaDidAcquireLicense;	// 0x5bdbf5
- (void)mediaDidAuthorize;	// 0x5bdac5
- (void)mediaDidBuildPlaylists;	// 0x5bdc8d
- (void)mediaDidCdnSelect;	// 0x5bdb5d
- (void)mediaDidClose;	// 0x5bd431
- (void)mediaDidFailLoadSubtitles:(int)media error:(id)error;	// 0x5bde41
- (void)mediaDidFailOpen:(id)media;	// 0x5bd93d
- (void)mediaDidHandleNccpError:(id)media;	// 0x5bd4a5
- (void)mediaDidLoadSubtitles:(id)media;	// 0x5bdd71
- (void)mediaDidSelectAudio:(id)media allowsOff:(BOOL)off;	// 0x5bf9dd
- (void)mediaDidSetSpeed:(float)media;	// 0x5bdcd9
- (void)mediaOpenComplete:(id)complete;	// 0x5bd359
- (void)mediaWillAcquireLicense;	// 0x5bdba9
- (void)mediaWillAuthorize;	// 0x5bda79
- (void)mediaWillBuildPlaylists;	// 0x5bdc41
- (void)mediaWillCdnSelect;	// 0x5bdb11
- (void)mediaWillLoadSubtitles;	// 0x5bdd6d
// declared property getter: - (id)movieDetails;	// 0x5bfb1d
// declared property getter: - (int)networkInterfaceType;	// 0x5bfe35
- (void)networkSelection:(id)selection;	// 0x5bc0e5
- (int)networkTypeStringToType:(id)type;	// 0x5bc071
// declared property getter: - (double)observedBitrate;	// 0x5bfd45
- (void)open:(id)open;	// 0x5ba9e1
- (void)openAsync:(id)async;	// 0x5be279
// declared property getter: - (BOOL)openNotificationSent;	// 0x5bfafd
- (void)pause:(double)pause;	// 0x5baa99
- (void)play:(double)play;	// 0x5baa21
// declared property getter: - (id)playReadyKey;	// 0x5bfb41
// declared property getter: - (BOOL)playbackCommandInProgress;	// 0x5bfc7d
// declared property getter: - (id)playbackCommandLock;	// 0x5bfc59
- (id)playlistForIndicatedBitrate:(double)indicatedBitrate;	// 0x5bf6d1
- (id)playlistForRequestedM3u8:(id)requestedM3u8;	// 0x5bbd09
// declared property getter: - (long long)pollBytesStart;	// 0x5bfd91
// declared property getter: - (BOOL)pollNetworkInterface;	// 0x5bfd71
- (void)postMediaCloseFailure;	// 0x5be171
- (void)postMediaOpenFailure:(int)failure;	// 0x5bdfc1
- (void)postMediaOpenFailure:(id)failure clearProgress:(BOOL)progress;	// 0x5be099
- (void)postMediaOpenSuccess:(id)success;	// 0x5bdf25
// declared property getter: - (id)reportableActionId;	// 0x5bfba5
- (void)reposition:(double)reposition;	// 0x5bab89
- (void)resetUpdateTimer;	// 0x5bc859
// declared property getter: - (double)sampleReportWindow;	// 0x5bfead
- (void)selectedPlaylist:(id)playlist;	// 0x5bbe19
// declared property setter: - (void)setAudioSelectLanguage:(id)language;	// 0x5bff5d
// declared property setter: - (void)setAudioSelectTimeCount:(double)count;	// 0x5bffa5
// declared property setter: - (void)setAudioSelectTimer:(id)timer;	// 0x5bff7d
// declared property setter: - (void)setAudioTrackIndex:(int)index;	// 0x5bfc49
// declared property setter: - (void)setBufferingStartBytes:(long long)bytes;	// 0x5bfe6d
// declared property setter: - (void)setBufferingStartTime:(double)time;	// 0x5bfe99
// declared property setter: - (void)setBwEntry:(BwEntry *)entry;	// 0x5bfdcd
// declared property setter: - (void)setErrorStack:(id)stack;	// 0x5bfb95
// declared property setter: - (void)setLastBwEntryBytes:(long long)bytes;	// 0x5bfe21
// declared property setter: - (void)setLastBwEntryTime:(double)time;	// 0x5bfdf5
// declared property setter: - (void)setLastKnownMappedVideoBitrate:(unsigned)bitrate;	// 0x5bfce9
// declared property setter: - (void)setLastNumAccessLogEvents:(unsigned)events;	// 0x5bfd09
// declared property setter: - (void)setMediaControl:(IMediaControl *)control;	// 0x5ba8a9
// declared property setter: - (void)setMediaControlListener:(NetflixMediaControlListener *)listener;	// 0x5ba9bd
// declared property setter: - (void)setMovieDetails:(id)details;	// 0x5bfb31
// declared property setter: - (void)setNetworkInterfaceType:(int)type;	// 0x5bfe45
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x5bfd5d
// declared property setter: - (void)setOpenNotificationSent:(BOOL)sent;	// 0x5bfb0d
// declared property setter: - (void)setPlayReadyKey:(id)key;	// 0x5bfb55
// declared property setter: - (void)setPlaybackCommandInProgress:(BOOL)progress;	// 0x5bfc95
// declared property setter: - (void)setPlaybackCommandLock:(id)lock;	// 0x5bfc6d
// declared property setter: - (void)setPollBytesStart:(long long)start;	// 0x5bfda9
// declared property setter: - (void)setPollNetworkInterface:(BOOL)interface;	// 0x5bfd81
// declared property setter: - (void)setReportableActionId:(id)anId;	// 0x5bfbb5
// declared property setter: - (void)setSampleReportWindow:(double)window;	// 0x5bfec5
// declared property setter: - (void)setStalled:(bool)stalled;	// 0x5bfeed
// declared property setter: - (void)setState:(int)state;	// 0x5bfcc1
// declared property setter: - (void)setSubtitlesProcessing:(BOOL)processing;	// 0x5bfc01
// declared property setter: - (void)setSubtitlesProcessingLock:(id)lock;	// 0x5bfbd9
// declared property setter: - (void)setSubtitlesTrackIndex:(int)index;	// 0x5bfc29
// declared property setter: - (void)setTotalBytesTransferred:(long long)transferred;	// 0x5bfd31
// declared property setter: - (void)setTotalNumberOfStalls:(int)stalls;	// 0x5bff0d
// converted property setter: - (void)setTrickplay:(BOOL)trickplay;	// 0x5bfad5
// declared property setter: - (void)setTrickplayIsOn:(BOOL)on;	// 0x5bff35
// declared property getter: - (bool)stalled;	// 0x5bfed9
// declared property getter: - (int)state;	// 0x5bfcad
- (void)stop:(double)stop;	// 0x5bac01
- (void)streamSelected:(int)selected streamIndex:(int)index;	// 0x5bb209
// declared property getter: - (BOOL)subtitlesProcessing;	// 0x5bfbe9
// declared property getter: - (id)subtitlesProcessingLock;	// 0x5bfbc5
- (void)subtitlesSelect:(id)select;	// 0x5bc035
- (void)subtitlesSelectAsync:(id)async;	// 0x5bf01d
// declared property getter: - (int)subtitlesTrackIndex;	// 0x5bfc19
// declared property getter: - (long long)totalBytesTransferred;	// 0x5bfd19
// declared property getter: - (int)totalNumberOfStalls;	// 0x5bfefd
- (id)trackWithCapitalizedDescriptionFromTrack:(id)track;	// 0x5bce01
// converted property getter: - (BOOL)trickplay;	// 0x5bfae5
// declared property getter: - (BOOL)trickplayIsOn;	// 0x5bff1d
- (void)unpause:(double)unpause;	// 0x5bab11
- (void)updatePts:(double)pts;	// 0x5bb291
- (void)updatePts:(double)pts accessLogEvents:(id)events;	// 0x5bb7f1
- (void)updateSubtitleCheck;	// 0x5bc735
@end
