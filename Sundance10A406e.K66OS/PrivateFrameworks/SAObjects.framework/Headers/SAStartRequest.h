/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSNumber, NSString;

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(assign, nonatomic) BOOL eyesFree;	// G=0x32533635; S=0x325336ad; 
@property(assign, nonatomic) BOOL handsFree;	// G=0x325336f1; S=0x32533769; 
@property(copy, nonatomic) NSString *motionActivity;	// G=0x325337ad; S=0x325337c9; 
@property(copy, nonatomic) NSNumber *motionConfidence;	// G=0x32533819; S=0x32533835; 
@property(copy, nonatomic) NSString *origin;	// G=0x32533885; S=0x325338a1; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *utterance;	// G=0x325338f1; S=0x3253390d; 
+ (id)startRequest;	// 0x325335a5
+ (id)startRequestWithDictionary:(id)dictionary context:(id)context;	// 0x325335e9
- (id)encodedClassName;	// 0x32533599
// declared property getter: - (BOOL)eyesFree;	// 0x32533635
- (id)groupIdentifier;	// 0x32533589
// declared property getter: - (BOOL)handsFree;	// 0x325336f1
// declared property getter: - (id)motionActivity;	// 0x325337ad
// declared property getter: - (id)motionConfidence;	// 0x32533819
// declared property getter: - (id)origin;	// 0x32533885
// declared property setter: - (void)setEyesFree:(BOOL)free;	// 0x325336ad
// declared property setter: - (void)setHandsFree:(BOOL)free;	// 0x32533769
// declared property setter: - (void)setMotionActivity:(id)activity;	// 0x325337c9
// declared property setter: - (void)setMotionConfidence:(id)confidence;	// 0x32533835
// declared property setter: - (void)setOrigin:(id)origin;	// 0x325338a1
// declared property setter: - (void)setUtterance:(id)utterance;	// 0x3253390d
// declared property getter: - (id)utterance;	// 0x325338f1
@end
