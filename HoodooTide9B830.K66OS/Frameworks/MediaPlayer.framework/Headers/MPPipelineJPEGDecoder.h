/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPPipelineJPEGDecoder : NSObject {
@private
	StackItem *stackTopBGRA;	// 4 = 0x4
	StackItem *stackTop420;	// 8 = 0x8
	StackItem *stackTopJPEG;	// 12 = 0xc
	dispatch_queue_s *stackQueueBGRA;	// 16 = 0x10
	dispatch_queue_s *stackQueue420;	// 20 = 0x14
	dispatch_queue_s *stackQueueJPEG;	// 24 = 0x18
	CFDictionaryRef acceleratorOptions;	// 28 = 0x1c
	CFDictionaryRef surfaceBGRAOptions;	// 32 = 0x20
	CGSize imageSize;	// 36 = 0x24
	unsigned requestedImageCount;	// 44 = 0x2c
	int currentBGRASurfaceCount;	// 48 = 0x30
	unsigned maxJPEGSize;	// 52 = 0x34
}
@property(assign) unsigned maxJPEGSize;	// G=0x346fd289; S=0x346fd299; @synthesize
+ (IOSurfaceAcceleratorRef)_createAccelerator;	// 0x346fc979
+ (IOSurfaceAcceleratorRef)_popSurfaceAccelerator;	// 0x346fca11
+ (void)_pushSurfaceAccelerator:(IOSurfaceAcceleratorRef)accelerator;	// 0x346fc9a1
+ (dispatch_queue_s *)_stackQueueTransferSession;	// 0x346fc921
- (id)initWithSize:(CGSize)size cachedCount:(int)count;	// 0x346fc0c9
- (IOSurfaceRef)_create420Surface;	// 0x346fcac5
- (IOSurfaceRef)_createBGRASurface;	// 0x346fcc05
- (IOSurfaceRef)_createJPEGSurface;	// 0x346fcaf5
- (void)_decodeJPEG:(id)jpeg withInputSurface:(IOSurfaceRef)inputSurface toIOSurface:(IOSurfaceRef)iosurface;	// 0x346fd101
- (id)_newImageFrom420Surface:(IOSurfaceRef)a420Surface;	// 0x346fd02d
- (IOSurfaceRef)_pop420Surface;	// 0x346fcc75
- (IOSurfaceRef)_popBGRASurface;	// 0x346fcf0d
- (IOSurfaceRef)_popJPEGSurfaceOfSize:(unsigned)size;	// 0x346fcd95
- (void)_push420Surface:(IOSurfaceRef)surface;	// 0x346fcd1d
- (void)_pushBGRASurface:(IOSurfaceRef)surface;	// 0x346fcfb5
- (void)_pushJPEGSurface:(IOSurfaceRef)surface;	// 0x346fce95
- (void)_receivedMemoryWarning:(id)warning;	// 0x346fd1c5
- (void)_removeBGRASurface;	// 0x346fcc39
- (void)dealloc;	// 0x346fc7dd
// declared property getter: - (unsigned)maxJPEGSize;	// 0x346fd289
- (id)newImageFrom420Data:(id)a420Data;	// 0x346fc615
- (id)newImageFromJPEGData:(id)jpegdata;	// 0x346fc731
// declared property setter: - (void)setMaxJPEGSize:(unsigned)size;	// 0x346fd299
@end

