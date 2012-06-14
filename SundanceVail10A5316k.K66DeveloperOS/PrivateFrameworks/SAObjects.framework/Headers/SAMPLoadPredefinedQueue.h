/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAMPLoadPredefinedQueue : SABaseClientBoundCommand {
}
@property(assign, nonatomic) int mediaItemType;	// G=0x32f55e45; S=0x32f55e6d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f55d69; S=0x32f55de5; 
+ (id)loadPredefinedQueue;	// 0x32f55cd9
+ (id)loadPredefinedQueueWithDictionary:(id)dictionary context:(id)context;	// 0x32f55d1d
- (id)encodedClassName;	// 0x32f55ccd
- (id)groupIdentifier;	// 0x32f55cbd
// declared property getter: - (int)mediaItemType;	// 0x32f55e45
- (BOOL)requiresResponse;	// 0x32f55e9d
// declared property setter: - (void)setMediaItemType:(int)type;	// 0x32f55e6d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f55de5
// declared property getter: - (id)targetAppId;	// 0x32f55d69
@end
