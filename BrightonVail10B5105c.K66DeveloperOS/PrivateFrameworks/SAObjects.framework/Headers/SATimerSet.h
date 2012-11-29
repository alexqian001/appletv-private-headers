/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, SATimerObject;

@interface SATimerSet : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x303a9ddd; S=0x303a9e59; 
@property(retain, nonatomic) SATimerObject *timer;	// G=0x303a9eb9; S=0x303a9f0d; 
+ (id)set;	// 0x303a9d4d
+ (id)setWithDictionary:(id)dictionary context:(id)context;	// 0x303a9d91
- (id)encodedClassName;	// 0x303a9d41
- (id)groupIdentifier;	// 0x303a9d31
- (BOOL)requiresResponse;	// 0x303a9f49
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x303a9e59
// declared property setter: - (void)setTimer:(id)timer;	// 0x303a9f0d
// declared property getter: - (id)targetAppId;	// 0x303a9ddd
// declared property getter: - (id)timer;	// 0x303a9eb9
@end
