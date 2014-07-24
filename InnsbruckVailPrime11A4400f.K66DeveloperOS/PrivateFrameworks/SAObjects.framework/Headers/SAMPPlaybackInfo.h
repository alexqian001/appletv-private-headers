/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class SACalendar;

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SACalendar *lastPlayedDate;	// G=0x326ff94d; S=0x326ff991; 
@property(assign, nonatomic) int playbackPositionMillis;	// G=0x326ff9cd; S=0x326ffa3d; 
@property(assign, nonatomic) int plays;	// G=0x326ffa81; S=0x326ffaf1; 
@property(assign, nonatomic) BOOL rememberPlaybackPosition;	// G=0x326ffb35; S=0x326ffbad; 
+ (id)playbackInfo;	// 0x326ff8bd
+ (id)playbackInfoWithDictionary:(id)dictionary context:(id)context;	// 0x326ff901
- (id)encodedClassName;	// 0x326ff8b1
- (id)groupIdentifier;	// 0x326ff8a1
// declared property getter: - (id)lastPlayedDate;	// 0x326ff94d
// declared property getter: - (int)playbackPositionMillis;	// 0x326ff9cd
// declared property getter: - (int)plays;	// 0x326ffa81
// declared property getter: - (BOOL)rememberPlaybackPosition;	// 0x326ffb35
// declared property setter: - (void)setLastPlayedDate:(id)date;	// 0x326ff991
// declared property setter: - (void)setPlaybackPositionMillis:(int)millis;	// 0x326ffa3d
// declared property setter: - (void)setPlays:(int)plays;	// 0x326ffaf1
// declared property setter: - (void)setRememberPlaybackPosition:(BOOL)position;	// 0x326ffbad
@end
