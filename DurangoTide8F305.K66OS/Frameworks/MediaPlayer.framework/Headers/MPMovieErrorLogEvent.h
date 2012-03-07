/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
	MPMovieErrorLogEventInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x3372257d; 
@property(assign, nonatomic) MPMovieErrorLogEventInternal _internal;	// G=0x337205b1; S=0x337205c1; @synthesize
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x3372259d; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x337224dd; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x337224fd; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x3372251d; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x3372253d; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x3372255d; 
// declared property getter: - (id)URI;	// 0x3372257d
- (id)_initWithAVItemErrorLogEvent:(id)avitemErrorLogEvent;	// 0x33722619
// declared property getter: - (MPMovieErrorLogEventInternal)_internal;	// 0x337205b1
- (id)copyWithZone:(NSZone *)zone;	// 0x337225bd
// declared property getter: - (id)date;	// 0x3372259d
- (void)dealloc;	// 0x337225d1
// declared property getter: - (id)errorComment;	// 0x337224dd
// declared property getter: - (id)errorDomain;	// 0x337224fd
// declared property getter: - (int)errorStatusCode;	// 0x3372251d
// declared property getter: - (id)playbackSessionID;	// 0x3372253d
// declared property getter: - (id)serverAddress;	// 0x3372255d
// declared property setter: - (void)set_internal:(MPMovieErrorLogEventInternal)internal;	// 0x337205c1
@end
