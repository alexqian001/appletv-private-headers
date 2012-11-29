/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "AVRecorderImpl.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl> {
	BOOL _isActive;	// 4 = 0x4
	BOOL _isRecording;	// 5 = 0x5
	BOOL _isWriting;	// 6 = 0x6
	NSMutableDictionary *_attributes;	// 8 = 0x8
	unsigned long _fileType;	// 12 = 0xc
	unsigned long _audioCodec;	// 16 = 0x10
	long long _maxPCMFramesToRecord;	// 20 = 0x14
	BOOL _haveRecordedMaxPCMFrames;	// 28 = 0x1c
	AudioStreamBasicDescription _recordingFormat;	// 32 = 0x20
	OpaqueAudioFileID *_audioFile;	// 72 = 0x48
	OpaqueAudioQueue *_audioQueue;	// 76 = 0x4c
	unsigned long _numDeviceChannels;	// 80 = 0x50
	AudioQueueLevelMeterState *_audioLevels;	// 84 = 0x54
	AudioQueueLevelMeterState *_audioLevelsDB;	// 88 = 0x58
	unsigned long _totalBytesRecorded;	// 92 = 0x5c
	unsigned long _totalPacketsRecorded;	// 96 = 0x60
	unsigned long _totalFramesRecorded;	// 100 = 0x64
	AudioQueueBuffer *_buffers[3];	// 104 = 0x68
	BOOL _bufferUsed[3];	// 116 = 0x74
}
@property(retain) id filePath;	// G=0x30bc9fb1; S=0x30bc9f61; converted property
@property(readonly, assign) BOOL isActive;	// G=0x30bca71d; converted property
@property(readonly, assign) BOOL isRecording;	// G=0x30bcab01; converted property
@property(assign) float micVolume;	// G=0x30bcab11; S=0x30bcab75; converted property
- (id)init;	// 0x30bc9cf9
- (id)initWithAttributes:(id)attributes;	// 0x30bc9d35
- (BOOL)activate:(id *)activate;	// 0x30bca129
- (id)attributeForKey:(id)key;	// 0x30bca109
- (BOOL)audioCurrentAverageDecibelLevels:(float *)levels andPeakDecibelLevels:(float *)levels2;	// 0x30bcadc5
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2;	// 0x30bcada1
- (BOOL)audioCurrentAverageVolumeLevels:(float *)levels andPeakVolumeLevels:(float *)levels2 useDB:(BOOL)db;	// 0x30bcaccd
- (unsigned)audioNumDeviceChannels;	// 0x30bcac89
- (BOOL)autoFocusAtPoint:(CGPoint)point;	// 0x30bca731
- (void)copyEncoderCookieToFile;	// 0x30bcade9
- (void)deactivate;	// 0x30bca575
- (void)dealloc;	// 0x30bc9ec5
// converted property getter: - (id)filePath;	// 0x30bc9fb1
- (void)haveABuffer:(AudioQueueBuffer *)buffer withTimeStamp:(const AudioTimeStamp *)timeStamp andNumPackets:(unsigned long)packets andPacketDescs:(const AudioStreamPacketDescription *)descs;	// 0x30bcaecd
// converted property getter: - (BOOL)isActive;	// 0x30bca71d
// converted property getter: - (BOOL)isRecording;	// 0x30bcab01
// converted property getter: - (float)micVolume;	// 0x30bcab11
- (double)recordedDuration;	// 0x30bcac25
- (long long)recordedFileSizeInBytes;	// 0x30bcabe1
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x30bc9fe1
// converted property setter: - (void)setFilePath:(id)path;	// 0x30bc9f61
// converted property setter: - (void)setMicVolume:(float)volume;	// 0x30bcab75
- (BOOL)start;	// 0x30bca735
- (void)stop;	// 0x30bca9d1
- (BOOL)takePhoto;	// 0x30bca72d
@end
