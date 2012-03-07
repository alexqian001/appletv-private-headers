/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemErrorLogEventInternal, NSString, NSDate;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
@private
	AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x325cb16d; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x325cb111; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x325cb0b5; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x325cb281; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x325caa39; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x325cb225; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x325cb1c9; 
- (id)init;	// 0x325cab51
- (id)initWithDictionary:(id)dictionary;	// 0x325caa95
// declared property getter: - (id)URI;	// 0x325cb16d
- (id)copyWithZone:(NSZone *)zone;	// 0x325caa81
// declared property getter: - (id)date;	// 0x325cb111
- (void)dealloc;	// 0x325cad75
// declared property getter: - (id)errorComment;	// 0x325cb0b5
// declared property getter: - (id)errorDomain;	// 0x325cb281
// declared property getter: - (int)errorStatusCode;	// 0x325caa39
- (void)finalize;	// 0x325caddd
// declared property getter: - (id)playbackSessionID;	// 0x325cb225
// declared property getter: - (id)serverAddress;	// 0x325cb1c9
@end
