/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
	AVPlayerItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x30338411; 
- (id)init;	// 0x303380f1
- (id)initWithLogArray:(id)logArray;	// 0x30338189
- (id)_errorLogArray;	// 0x30338591
- (id)copyWithZone:(NSZone *)zone;	// 0x303382c1
- (void)dealloc;	// 0x30338315
- (id)description;	// 0x303381dd
// declared property getter: - (id)events;	// 0x30338411
- (id)extendedLogData;	// 0x30338381
- (unsigned)extendedLogDataStringEncoding;	// 0x3033840d
- (void)finalize;	// 0x303382d1
@end
