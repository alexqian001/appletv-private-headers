/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAMPSetPlaybackPosition : SABaseClientBoundCommand {
}
@property(assign, nonatomic) int position;	// G=0x353ca905; S=0x353ca92d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353ca829; S=0x353ca8a5; 
+ (id)setPlaybackPosition;	// 0x353ca799
+ (id)setPlaybackPositionWithDictionary:(id)dictionary context:(id)context;	// 0x353ca7dd
- (id)encodedClassName;	// 0x353ca78d
- (id)groupIdentifier;	// 0x353ca77d
// declared property getter: - (int)position;	// 0x353ca905
- (BOOL)requiresResponse;	// 0x353ca95d
// declared property setter: - (void)setPosition:(int)position;	// 0x353ca92d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353ca8a5
// declared property getter: - (id)targetAppId;	// 0x353ca829
@end

