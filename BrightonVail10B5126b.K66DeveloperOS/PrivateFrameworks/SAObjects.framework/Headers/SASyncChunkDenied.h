/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAClientBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class SASyncAnchor, NSString, NSArray;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *appId;	// @dynamic
@property(copy, nonatomic) NSArray *callbacks;	// G=0x353ccead; S=0x353ccf29; 
@property(retain, nonatomic) SASyncAnchor *current;	// G=0x353ccf91; S=0x353ccfe5; 
@property(assign, nonatomic) int errorCode;	// G=0x353cd021; S=0x353cd091; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)chunkDenied;	// 0x353ccda1
+ (id)chunkDeniedWithDictionary:(id)dictionary context:(id)context;	// 0x353ccde5
+ (id)chunkDeniedWithErrorCode:(int)errorCode;	// 0x353cce31
- (id)initWithErrorCode:(int)errorCode;	// 0x353cce79
// declared property getter: - (id)callbacks;	// 0x353ccead
// declared property getter: - (id)current;	// 0x353ccf91
- (id)encodedClassName;	// 0x353ccd95
// declared property getter: - (int)errorCode;	// 0x353cd021
- (id)groupIdentifier;	// 0x353ccd85
- (BOOL)requiresResponse;	// 0x353cd0d5
// declared property setter: - (void)setCallbacks:(id)callbacks;	// 0x353ccf29
// declared property setter: - (void)setCurrent:(id)current;	// 0x353ccfe5
// declared property setter: - (void)setErrorCode:(int)code;	// 0x353cd091
@end
